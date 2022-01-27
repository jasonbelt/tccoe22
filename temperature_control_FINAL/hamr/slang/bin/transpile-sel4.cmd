::#! 2> /dev/null                                   #
@ 2>/dev/null # 2>nul & echo off & goto BOF         #
if [ -z ${SIREUM_HOME} ]; then                      #
  echo "Please set SIREUM_HOME env var"             #
  exit -1                                           #
fi                                                  #
exec ${SIREUM_HOME}/bin/sireum slang run "$0" "$@"  #
:BOF
setlocal
if not defined SIREUM_HOME (
  echo Please set SIREUM_HOME env var
  exit /B -1
)
%SIREUM_HOME%\\bin\\sireum.bat slang run "%0" %*
exit /B %errorlevel%
::!#
// #Sireum

import org.sireum._

// This file was auto-generated.  Do not edit

val SCRIPT_HOME: Os.Path = Os.slashDir
val PATH_SEP: String = Os.pathSep

val TempSensor_i_tsp_tempSensor: ISZ[String] = ISZ(
  "--sourcepath", s"${SCRIPT_HOME}/../src/main/bridge${PATH_SEP}${SCRIPT_HOME}/../src/main/component${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/t/TemperatureControl${PATH_SEP}${SCRIPT_HOME}/../src/main/art${PATH_SEP}${SCRIPT_HOME}/../src/main/data${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/t/TempSensor_i_tsp_tempSensor",
  "--output-dir", s"${SCRIPT_HOME}/../../camkes/slang_libraries/TempSensor_i_tsp_tempSensor",
  "--name", "TempSensor_i_tsp_tempSensor",
  "--apps", "t.TempSensor_i_tsp_tempSensor.tempSensor",
  "--fingerprint", "3",
  "--bits", "32",
  "--string-size", "256",
  "--sequence-size", "2",
  "--sequence", s"MS[Z,Option[art.Bridge]]=1;IS[Z,art.UPort]=2",
  "--constants", s"art.Art.maxComponents=1;art.Art.maxPorts=2",
  "--cmake-includes", s"+${SCRIPT_HOME}/settings_TempSensor_i_tsp_tempSensor.cmake",
  "--forward", "art.ArtNative=t.TempSensor_i_tsp_tempSensor.tempSensor",
  "--stack-size", "110592",
  "--stable-type-id",
  "--exts", s"${SCRIPT_HOME}/../../c/ext-c/ext.c${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/ext.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/TempSensor_i_tsp_tempSensor/TempSensor_i_tsp_tempSensor.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/TempSensor_i_tsp_tempSensor/TempSensor_i_tsp_tempSensor.c${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/TempSensor_i_tsp_tempSensor/TempSensor_i_tsp_tempSensor_api.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/TempSensor_i_tsp_tempSensor/TempSensor_i_tsp_tempSensor_api.c${PATH_SEP}${SCRIPT_HOME}/../../c/etc_seL4/adapters/TempSensor_i_tsp_tempSensor/TempSensor_i_tsp_tempSensor_adapter.h${PATH_SEP}${SCRIPT_HOME}/../../c/etc_seL4/adapters/TempSensor_i_tsp_tempSensor/TempSensor_i_tsp_tempSensor_adapter.c",
  "--exclude-build", "t.TemperatureControl.TempSensor_i_tsp_tempSensor,t.TemperatureControl.TempControl_i_tcp_tempControl,t.TemperatureControl.Fan_i_fp_fan",
  "--lib-only",
  "--verbose")

val TempControl_i_tcp_tempControl: ISZ[String] = ISZ(
  "--sourcepath", s"${SCRIPT_HOME}/../src/main/bridge${PATH_SEP}${SCRIPT_HOME}/../src/main/component${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/t/TemperatureControl${PATH_SEP}${SCRIPT_HOME}/../src/main/art${PATH_SEP}${SCRIPT_HOME}/../src/main/data${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/t/TempControl_i_tcp_tempControl",
  "--output-dir", s"${SCRIPT_HOME}/../../camkes/slang_libraries/TempControl_i_tcp_tempControl",
  "--name", "TempControl_i_tcp_tempControl",
  "--apps", "t.TempControl_i_tcp_tempControl.tempControl",
  "--fingerprint", "3",
  "--bits", "32",
  "--string-size", "256",
  "--sequence-size", "5",
  "--sequence", s"MS[Z,Option[art.Bridge]]=1;IS[Z,art.UPort]=5",
  "--constants", s"art.Art.maxComponents=1;art.Art.maxPorts=5",
  "--cmake-includes", s"+${SCRIPT_HOME}/settings_TempControl_i_tcp_tempControl.cmake",
  "--forward", "art.ArtNative=t.TempControl_i_tcp_tempControl.tempControl",
  "--stack-size", "110592",
  "--stable-type-id",
  "--exts", s"${SCRIPT_HOME}/../../c/ext-c/ext.c${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/ext.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/TempControl_i_tcp_tempControl/TempControl_i_tcp_tempControl.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/TempControl_i_tcp_tempControl/TempControl_i_tcp_tempControl.c${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/TempControl_i_tcp_tempControl/TempControl_i_tcp_tempControl_api.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/TempControl_i_tcp_tempControl/TempControl_i_tcp_tempControl_api.c${PATH_SEP}${SCRIPT_HOME}/../../c/etc_seL4/adapters/TempControl_i_tcp_tempControl/TempControl_i_tcp_tempControl_adapter.h${PATH_SEP}${SCRIPT_HOME}/../../c/etc_seL4/adapters/TempControl_i_tcp_tempControl/TempControl_i_tcp_tempControl_adapter.c",
  "--exclude-build", "t.TemperatureControl.TempSensor_i_tsp_tempSensor,t.TemperatureControl.TempControl_i_tcp_tempControl,t.TemperatureControl.Fan_i_fp_fan",
  "--lib-only",
  "--verbose")

val Fan_i_fp_fan: ISZ[String] = ISZ(
  "--sourcepath", s"${SCRIPT_HOME}/../src/main/bridge${PATH_SEP}${SCRIPT_HOME}/../src/main/component${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/t/TemperatureControl${PATH_SEP}${SCRIPT_HOME}/../src/main/art${PATH_SEP}${SCRIPT_HOME}/../src/main/data${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/t/Fan_i_fp_fan",
  "--output-dir", s"${SCRIPT_HOME}/../../camkes/slang_libraries/Fan_i_fp_fan",
  "--name", "Fan_i_fp_fan",
  "--apps", "t.Fan_i_fp_fan.fan",
  "--fingerprint", "3",
  "--bits", "32",
  "--string-size", "256",
  "--sequence-size", "2",
  "--sequence", s"MS[Z,Option[art.Bridge]]=1;IS[Z,art.UPort]=2",
  "--constants", s"art.Art.maxComponents=1;art.Art.maxPorts=2",
  "--cmake-includes", s"+${SCRIPT_HOME}/settings_Fan_i_fp_fan.cmake",
  "--forward", "art.ArtNative=t.Fan_i_fp_fan.fan",
  "--stack-size", "110592",
  "--stable-type-id",
  "--exts", s"${SCRIPT_HOME}/../../c/ext-c/ext.c${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/ext.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/Fan_i_fp_fan/Fan_i_fp_fan.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/Fan_i_fp_fan/Fan_i_fp_fan.c${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/Fan_i_fp_fan/Fan_i_fp_fan_api.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/Fan_i_fp_fan/Fan_i_fp_fan_api.c${PATH_SEP}${SCRIPT_HOME}/../../c/etc_seL4/adapters/Fan_i_fp_fan/Fan_i_fp_fan_adapter.h${PATH_SEP}${SCRIPT_HOME}/../../c/etc_seL4/adapters/Fan_i_fp_fan/Fan_i_fp_fan_adapter.c",
  "--exclude-build", "t.TemperatureControl.TempSensor_i_tsp_tempSensor,t.TemperatureControl.TempControl_i_tcp_tempControl,t.TemperatureControl.Fan_i_fp_fan",
  "--lib-only",
  "--verbose")

val SlangTypeLibrary: ISZ[String] = ISZ(
  "--sourcepath", s"${SCRIPT_HOME}/../src/main/art${PATH_SEP}${SCRIPT_HOME}/../src/main/data${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/t/SlangTypeLibrary",
  "--output-dir", s"${SCRIPT_HOME}/../../camkes/slang_libraries/SlangTypeLibrary",
  "--name", "SlangTypeLibrary",
  "--apps", "t.SlangTypeLibrary.SlangTypeLibrary",
  "--fingerprint", "3",
  "--bits", "32",
  "--string-size", "256",
  "--sequence-size", "1",
  "--cmake-includes", s"+${SCRIPT_HOME}/settings_SlangTypeLibrary.cmake",
  "--forward", "art.ArtNative=t.SlangTypeLibrary.SlangTypeLibrary",
  "--stack-size", "16777216",
  "--stable-type-id",
  "--lib-only",
  "--verbose")

val projects: ISZ[ISZ[String]] = ISZ(
  TempSensor_i_tsp_tempSensor,
  TempControl_i_tcp_tempControl,
  Fan_i_fp_fan,
  SlangTypeLibrary
)

println("Initializing runtime library ...")
Sireum.initRuntimeLibrary()

for(p <- projects) {
  Sireum.run(ISZ[String]("slang", "transpilers", "c") ++ p)
}

//ops.ISZOps(projects).parMap(p =>
//  Sireum.run(ISZ[String]("slang", "transpilers", "c") ++ p)
//)
