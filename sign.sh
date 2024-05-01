#!/bin/bash

export ROOT_DIR=$(readlink -f $(dirname $0)/..)
echo $ROOT_DIR
export ABL_SRC=$(pwd)
echo $ABL_SRC
export ABL_OUT_DIR=output

export SECTOOLS_V2=${ROOT_DIR}/sectoolsv2/ext/Linux
echo $SECTOOLS_V2

SECTOOLS=${SECTOOLS_V2}/sectools
SECTOOLS_SECURITY_PROFILE=${SECTOOLS_V2}/../../kodiak_security_profile.xml

SECABL_ARGS=("secure-image" "${ABL_OUT_DIR}/abl.elf")
SECABL_ARGS+=("--outfile" "${ABL_OUT_DIR}/abl_signed.elf")
EXTRA_SECABL_ARGS=("--image-id" "ABL")
EXTRA_SECABL_ARGS+=("--security-profile")
EXTRA_SECABL_ARGS+=("${SECTOOLS_SECURITY_PROFILE}")
EXTRA_SECABL_ARGS+=("--sign" "--signing-mode" "TEST" "--verbose")

SECABL_CMD=("${SECTOOLS}" "${SECABL_ARGS[@]}" "${EXTRA_SECABL_ARGS[@]}")

${SECABL_CMD[@]}
