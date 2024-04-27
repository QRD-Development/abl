#!/bin/bash

# Snapdragon LLVM Path
export CLANG_PREBUILT_BIN=/home/localhost/Android/AOSPA_14/vendor/qcom/sdclang/compiler/bin
# Sectools_v2 Path
export SECTOOLS_V2=/home/localhost/sectoolsv2/ext/Linux/sectools

export ROOT_DIR=$(readlink -f $(dirname $0)/..)
echo $ROOT_DIR
export ABL_SRC='edk2'
echo $ABL_SRC
export MSM_ARCH=lahaina
export BUILD_CONFIG_ABL=/home/localhost/edk2/QcomModulePkg/build.config.msm.${MSM_ARCH}
export TARGET_BUILD_VARIANT=userdebug
export ABL_OUT_DIR=output
mkdir -p ${ABL_OUT_DIR}
. ${BUILD_CONFIG_ABL}

PREBUILT_HOST_TOOLS="BUILD_CC=clang BUILD_CXX=clang++ BUILD_AR=llvm-ar"
MKABL_ARGS=("-C" "${ROOT_DIR}/${ABL_SRC}")
MKABL_ARGS+=("BOOTLOADER_OUT=${ABL_OUT_DIR}/obj/ABL_OUT" "all")
MKABL_ARGS+=("${MAKE_FLAGS[@]}")
MKABL_ARGS+=("CLANG_BIN=${CLANG_PREBUILT_BIN}/")

rm -rf ${ABL_OUT_DIR}

# make -C ${ROOT_DIR}/${ABL_SRC}/BaseTools/Source/C
make "${MKABL_ARGS[@]}"
ABL_DEBUG_FILE="$(find ${ABL_OUT_DIR} -name LinuxLoader.debug)"
cp ${ABL_DEBUG_FILE} ${ABL_OUT_DIR}

${SECABL_CMD[@]}
