#!/bin/bash -ei

SCRIPT_DIR=$( cd "$( dirname "$0" )" &> /dev/null && pwd )
AADL_DIR=$SCRIPT_DIR/..
ROOT_DIR=$SCRIPT_DIR/../..

FMIDE=$SIREUM_HOME/bin/linux/fmide/fmide
FMIDE_CLI="$FMIDE -nosplash -console -consoleLog -data @user.home/.sireum -application org.sireum.aadl.osate.cli"

eval "$FMIDE_CLI hamr codegen \
  --verbose \
  --platform seL4 \
  --package-name t \
  --output-dir $ROOT_DIR/hamr/slang \
  --output-c-dir $ROOT_DIR/hamr/c \
  --exclude-component-impl \
  --bit-width 32 \
  --max-string-size 256 \
  --max-array-size 1 \
  --run-transpiler \
  --camkes-output-dir $ROOT_DIR/hamr/camkes \
  --aadl-root-dir $AADL_DIR \
  --experimental-options \"GENERATE_DOT_GRAPHS\" \
  $AADL_DIR/.project"
