UEFI_TOP_DIR := .

ifndef $(BOOTLOADER_OUT)
	BOOTLOADER_OUT := .
endif
export $(BOOTLOADER_OUT)

BUILDDIR=$(shell pwd)
export MAKEPATH := $(MAKEPATH)

export CLANG35_BIN := $(CLANG_BIN)
export CLANG35_GCC_TOOLCHAIN := $(CLANG35_GCC_TOOLCHAIN)
export $(BOARD_BOOTLOADER_PRODUCT_NAME)

export ARCHITECTURE := AARCH64
export CLANG35_AARCH64_PREFIX := $(CLANG_PREFIX)

ANDROID_PRODUCT_OUT := $(BOOTLOADER_OUT)/Build

WORKSPACE=$(BUILDDIR)
TARGET_TOOLS := CLANG35
TARGET := RELEASE
BUILD_ROOT := $(ANDROID_PRODUCT_OUT)/$(TARGET)_$(TARGET_TOOLS)
EDK_TOOLS := $(BUILDDIR)/BaseTools
EDK_TOOLS_BIN := $(EDK_TOOLS)/Source/C/bin
ABL_FV_IMG := $(BUILD_ROOT)/FV/abl.fv
ABL_FV_ELF := $(BOOTLOADER_OUT)/../../abl.elf
SHELL:=/bin/bash

ifeq ($(TARGET_ARCHITECTURE), arm)
	LOAD_ADDRESS := 0X8F700000
else
	LOAD_ADDRESS := 0X9FA00000
endif

ifeq ($(ENABLE_LE_VARIANT), true)
	ENABLE_LE_VARIANT := 1
else
	ENABLE_LE_VARIANT := 0
endif

ifneq "$(INIT_BIN_LE)" ""
	INIT_BIN := $(INIT_BIN_LE)
else
	INIT_BIN := \"/init\"
endif

ifeq "$(USERDATAIMAGE_FILE_SYSTEM_TYPE)" ""
	USERDATAIMAGE_FILE_SYSTEM_TYPE := ext4
endif

.PHONY: all cleanall

all: ABL_FV_ELF

cleanall:
	@. ./edksetup.sh BaseTools && \
	build -p $(WORKSPACE)/QcomModulePkg/QcomModulePkg.dsc -a $(ARCHITECTURE) -t $(TARGET_TOOLS) -b $(TARGET) -j build_modulepkg.log cleanall
	rm -rf $(WORKSPACE)/QcomModulePkg/Bin64

EDK_TOOLS_BIN:
	@. ./edksetup.sh BaseTools && \
	$(MAKEPATH)make -C $(EDK_TOOLS) $(PREBUILT_HOST_TOOLS) -j$(nproc)

ABL_FV_IMG: EDK_TOOLS_BIN
	@. ./edksetup.sh BaseTools && \
	build -p $(WORKSPACE)/QcomModulePkg/QcomModulePkg.dsc \
	-a $(ARCHITECTURE) \
	-t $(TARGET_TOOLS) \
	-b $(TARGET) \
	-n 0 \
	-s \
	-D ABL_OUT_DIR=$(ANDROID_PRODUCT_OUT) \
	-D BUILD_SYSTEM_ROOT_IMAGE=$(BUILD_SYSTEM_ROOT_IMAGE) \
	-D VERIFIED_BOOT=$(VERIFIED_BOOT) \
	-D VERIFIED_BOOT_2=$(VERIFIED_BOOT_2) \
	-D VERIFIED_BOOT_LE=$(VERIFIED_BOOT_LE) \
	-D AB_RETRYCOUNT_DISABLE=$(AB_RETRYCOUNT_DISABLE) \
	-D TARGET_BOARD_TYPE_AUTO=$(TARGET_BOARD_TYPE_AUTO) \
	-D VERITY_LE=$(VERITY_LE) \
	-D USER_BUILD_VARIANT=$(USER_BUILD_VARIANT) \
	-D DISABLE_PARALLEL_DOWNLOAD_FLASH=$(DISABLE_PARALLEL_DOWNLOAD_FLASH) \
	-D ENABLE_LE_VARIANT=$(ENABLE_LE_VARIANT) \
	-D DYNAMIC_PARTITION_SUPPORT=$(DYNAMIC_PARTITION_SUPPORT) \
	-D VIRTUAL_AB_OTA=$(VIRTUAL_AB_OTA) \
	-D BUILD_USES_RECOVERY_AS_BOOT=$(BUILD_USES_RECOVERY_AS_BOOT) \
	-D INIT_BIN=$(INIT_BIN) \
	-D UBSAN_UEFI_GCC_FLAG_UNDEFINED=$(UBSAN_GCC_FLAG_UNDEFINED) \
	-D UBSAN_UEFI_GCC_FLAG_ALIGNMENT=$(UBSAN_GCC_FLAG_ALIGNMENT) \
	-D NAND_SQUASHFS_SUPPORT=$(NAND_SQUASHFS_SUPPORT) \
	-D ENABLE_SYSTEMD_BOOTSLOT=$(ENABLE_SYSTEMD_BOOTSLOT) \
	-D RW_ROOTFS=$(RW_ROOTFS) \
	-D USERDATAIMAGE_FILE_SYSTEM_TYPE=$(USERDATAIMAGE_FILE_SYSTEM_TYPE) \
	-D BUILD_TIME=$(shell date +%s) \
	-j build_modulepkg.log $*

	cp $(BUILD_ROOT)/FV/FVMAIN_COMPACT.Fv $(ABL_FV_IMG)

BASETOOLS_CLEAN: ABL_FV_IMG
	@$(MAKEPATH)make -C $(BUILDDIR)/BaseTools/Source/C clean > /dev/null

ABL_FV_ELF: BASETOOLS_CLEAN
	python3 $(WORKSPACE)/QcomModulePkg/Tools/image_header.py $(ABL_FV_IMG) $(ABL_FV_ELF) $(LOAD_ADDRESS) elf 32 nohash
