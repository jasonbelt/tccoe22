cmake_minimum_required(VERSION 3.5.1)

project(main)

set(CMAKE_C_STANDARD 99)

add_compile_options(-Werror)
if($ENV{CC} MATCHES "^.*ccomp$")
  add_compile_options(-flongdouble)
endif()

function(to_hex DEC HEX)
  while(DEC GREATER 0)
    math(EXPR _val "${DEC} % 16")
    math(EXPR DEC "${DEC} / 16")
    if(_val EQUAL 10)
      set(_val "A")
    elseif(_val EQUAL 11)
      set(_val "B")
    elseif(_val EQUAL 12)
      set(_val "C")
    elseif(_val EQUAL 13)
      set(_val "D")
    elseif(_val EQUAL 14)
      set(_val "E")
    elseif(_val EQUAL 15)
      set(_val "F")
    endif()
    set(_res "${_val}${_res}")
  endwhile()
  set(${HEX} "0x${_res}" PARENT_SCOPE)
endfunction()

if ("${CMAKE_CXX_COMPILER_ID}" MATCHES "(C|c?)lang")
  to_hex("110592" stack_size)
  set(CMAKE_EXE_LINKER_FLAGS "-Wl,-stack_size -Wl,${stack_size}")
  if($ENV{CC} MATCHES "^.*ccomp$")
    SET(CMAKE_C_ARCHIVE_CREATE   "<CMAKE_AR> Scr <TARGET> <LINK_FLAGS> <OBJECTS>")
    SET(CMAKE_CXX_ARCHIVE_CREATE "<CMAKE_AR> Scr <TARGET> <LINK_FLAGS> <OBJECTS>")
    SET(CMAKE_C_ARCHIVE_FINISH   "<CMAKE_RANLIB> -no_warning_for_no_symbols -c <TARGET>")
    SET(CMAKE_CXX_ARCHIVE_FINISH "<CMAKE_RANLIB> -no_warning_for_no_symbols -c <TARGET>")
  endif()
  add_compile_options("$<$<CONFIG:Release>:-Os>")
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
  if (WIN32 OR MINGW OR MSYS OR CYGWIN)
    to_hex("110592" stack_size)
    set(CMAKE_EXE_LINKER_FLAGS "-Wl,--stack,${stack_size}")
    add_compile_options(-fstack-usage -O2)
  elseif(NOT $ENV{CC} MATCHES "^.*ccomp$")
    add_compile_options(-fstack-usage -Dinline=static)
    add_compile_options("$<$<CONFIG:Release>:-Os>")
  endif()
endif()

option(BOUND_CHECK
  "Build the program with sequence bound checking."
  OFF)

if(BOUND_CHECK)
  add_definitions(-DSIREUM_BOUND_CHECK)
endif(BOUND_CHECK)

option(RANGE_CHECK
  "Build the program with range checking."
  OFF)

if(RANGE_CHECK)
  add_definitions(-DSIREUM_RANGE_CHECK)
endif(RANGE_CHECK)

option(NO_PRINT
  "Build the program without console output."
  OFF)

if(NO_PRINT)
  add_definitions(-DSIREUM_NO_PRINT)
endif(NO_PRINT)

option(WITH_LOC
  "Build the program with Slang location info."
  OFF)

if(WITH_LOC)
  add_definitions(-DSIREUM_LOC)
endif(WITH_LOC)


add_library(main STATIC
        runtime/type.h
        runtime/misc.c
        runtime/stackframe.h
        runtime/stackframe.c
        runtime/type.c
        runtime/misc.h
        runtime/lib.h
        runtime/ztype.h
        runtime/type-composite.h
        runtime/types.h
        runtime/types.c
        runtime/all.h
        runtime/all.c
        library/art/type-art_ArchitectureDescription.h
        library/art/art_ArchitectureDescription.h
        library/art/art_ArchitectureDescription.c
        library/art/type-art_Art.h
        library/art/art_Art.h
        library/art/art_Art.c
        library/art/type-art_ArtNativeSlang.h
        library/art/art_ArtNativeSlang.h
        library/art/art_ArtNativeSlang.c
        library/art/type-art_ArtSlangMessage.h
        library/art/art_ArtSlangMessage.h
        library/art/art_ArtSlangMessage.c
        library/art/type-art_Bridge.h
        library/art/art_Bridge.h
        library/art/art_Bridge.c
        library/art/Bridge/type-art_Bridge_EntryPoints.h
        library/art/Bridge/art_Bridge_EntryPoints.h
        library/art/Bridge/art_Bridge_EntryPoints.c
        library/art/Bridge/type-art_Bridge_Ports.h
        library/art/Bridge/art_Bridge_Ports.h
        library/art/Bridge/art_Bridge_Ports.c
        library/art/type-art_Connection.h
        library/art/art_Connection.h
        library/art/art_Connection.c
        library/art/type-art_DataContent.h
        library/art/art_DataContent.h
        library/art/art_DataContent.c
        library/art/type-art_DispatchPropertyProtocol.h
        library/art/art_DispatchPropertyProtocol.h
        library/art/art_DispatchPropertyProtocol.c
        library/art/DispatchPropertyProtocol/type-art_DispatchPropertyProtocol_Periodic.h
        library/art/DispatchPropertyProtocol/art_DispatchPropertyProtocol_Periodic.h
        library/art/DispatchPropertyProtocol/art_DispatchPropertyProtocol_Periodic.c
        library/art/DispatchPropertyProtocol/type-art_DispatchPropertyProtocol_Sporadic.h
        library/art/DispatchPropertyProtocol/art_DispatchPropertyProtocol_Sporadic.h
        library/art/DispatchPropertyProtocol/art_DispatchPropertyProtocol_Sporadic.c
        library/art/type-art_DispatchStatus.h
        library/art/art_DispatchStatus.h
        library/art/art_DispatchStatus.c
        library/art/type-art_Empty.h
        library/art/art_Empty.h
        library/art/art_Empty.c
        library/art/type-art_EventTriggered.h
        library/art/art_EventTriggered.h
        library/art/art_EventTriggered.c
        library/art/PortMode/type-art_PortMode_Type.h
        library/art/PortMode/art_PortMode_Type.h
        library/art/PortMode/art_PortMode_Type.c
        library/art/type-art_PortProto.h
        library/art/art_PortProto.h
        library/art/art_PortProto.c
        library/art/type-art_Process.h
        library/art/art_Process.h
        library/art/type-art_TimeTriggered.h
        library/art/art_TimeTriggered.h
        library/art/art_TimeTriggered.c
        library/art/type-art_UConnection.h
        library/art/art_UConnection.h
        library/art/art_UConnection.c
        library/art/type-art_UPort.h
        library/art/art_UPort.h
        library/art/art_UPort.c
        library/art/type-art_UrgentPortProto.h
        library/art/art_UrgentPortProto.h
        library/art/art_UrgentPortProto.c
        library/art/type-art_art_Port_0A16CC.h
        library/art/art_art_Port_0A16CC.h
        library/art/art_art_Port_0A16CC.c
        library/art/type-art_art_Port_216126.h
        library/art/art_art_Port_216126.h
        library/art/art_art_Port_216126.c
        library/art/type-art_art_Port_2ED9E6.h
        library/art/art_art_Port_2ED9E6.h
        library/art/art_art_Port_2ED9E6.c
        library/art/type-art_art_Port_7B28AF.h
        library/art/art_art_Port_7B28AF.h
        library/art/art_art_Port_7B28AF.c
        library/art/type-art_art_Port_9CBF18.h
        library/art/art_art_Port_9CBF18.h
        library/art/art_art_Port_9CBF18.c
        library/art/scheduling/type-art_scheduling_Scheduler.h
        library/art/scheduling/art_scheduling_Scheduler.h
        library/art/scheduling/art_scheduling_Scheduler.c
        library/art/scheduling/legacy/type-art_scheduling_legacy_Legacy.h
        library/art/scheduling/legacy/art_scheduling_legacy_Legacy.h
        library/art/scheduling/legacy/art_scheduling_legacy_Legacy.c
        library/art/scheduling/legacy/type-art_scheduling_legacy_LegacyInterface.h
        library/art/scheduling/legacy/art_scheduling_legacy_LegacyInterface.h
        library/art/scheduling/roundrobin/type-art_scheduling_roundrobin_RoundRobin.h
        library/art/scheduling/roundrobin/art_scheduling_roundrobin_RoundRobin.h
        library/art/scheduling/roundrobin/art_scheduling_roundrobin_RoundRobin.c
        library/art/scheduling/roundrobin/type-art_scheduling_roundrobin_RoundRobinExtensions.h
        library/art/scheduling/roundrobin/art_scheduling_roundrobin_RoundRobinExtensions.h
        library/art/scheduling/static/type-art_scheduling_static_Explorer.h
        library/art/scheduling/static/art_scheduling_static_Explorer.h
        library/art/scheduling/static/art_scheduling_static_Explorer.c
        library/art/scheduling/static/Explorer/type-art_scheduling_static_Explorer_ScheduleState.h
        library/art/scheduling/static/Explorer/art_scheduling_static_Explorer_ScheduleState.h
        library/art/scheduling/static/Explorer/art_scheduling_static_Explorer_ScheduleState.c
        library/art/scheduling/static/type-art_scheduling_static_Schedule.h
        library/art/scheduling/static/art_scheduling_static_Schedule.h
        library/art/scheduling/static/art_scheduling_static_Schedule.c
        library/art/scheduling/static/Schedule/type-art_scheduling_static_Schedule_DSchedule.h
        library/art/scheduling/static/Schedule/art_scheduling_static_Schedule_DSchedule.h
        library/art/scheduling/static/Schedule/art_scheduling_static_Schedule_DSchedule.c
        library/art/scheduling/static/Schedule/type-art_scheduling_static_Schedule_DScheduleSpec.h
        library/art/scheduling/static/Schedule/art_scheduling_static_Schedule_DScheduleSpec.h
        library/art/scheduling/static/Schedule/art_scheduling_static_Schedule_DScheduleSpec.c
        library/art/scheduling/static/Schedule/type-art_scheduling_static_Schedule_Slot.h
        library/art/scheduling/static/Schedule/art_scheduling_static_Schedule_Slot.h
        library/art/scheduling/static/Schedule/art_scheduling_static_Schedule_Slot.c
        library/art/scheduling/static/type-art_scheduling_static_StaticScheduler.h
        library/art/scheduling/static/art_scheduling_static_StaticScheduler.h
        library/art/scheduling/static/art_scheduling_static_StaticScheduler.c
        library/org/sireum/type-org_sireum_IS_08117A.h
        library/org/sireum/org_sireum_IS_08117A.h
        library/org/sireum/org_sireum_IS_08117A.c
        library/org/sireum/type-org_sireum_IS_4D6DA5.h
        library/org/sireum/org_sireum_IS_4D6DA5.h
        library/org/sireum/org_sireum_IS_4D6DA5.c
        library/org/sireum/type-org_sireum_IS_5AA467.h
        library/org/sireum/org_sireum_IS_5AA467.h
        library/org/sireum/org_sireum_IS_5AA467.c
        library/org/sireum/type-org_sireum_IS_7E8796.h
        library/org/sireum/org_sireum_IS_7E8796.h
        library/org/sireum/org_sireum_IS_7E8796.c
        library/org/sireum/type-org_sireum_IS_820232.h
        library/org/sireum/org_sireum_IS_820232.h
        library/org/sireum/org_sireum_IS_820232.c
        library/org/sireum/type-org_sireum_IS_82ABD8.h
        library/org/sireum/org_sireum_IS_82ABD8.h
        library/org/sireum/org_sireum_IS_82ABD8.c
        library/org/sireum/type-org_sireum_IS_948B60.h
        library/org/sireum/org_sireum_IS_948B60.h
        library/org/sireum/org_sireum_IS_948B60.c
        library/org/sireum/type-org_sireum_MBox2_1029D1.h
        library/org/sireum/org_sireum_MBox2_1029D1.h
        library/org/sireum/org_sireum_MBox2_1029D1.c
        library/org/sireum/type-org_sireum_MBox2_1CBFC4.h
        library/org/sireum/org_sireum_MBox2_1CBFC4.h
        library/org/sireum/org_sireum_MBox2_1CBFC4.c
        library/org/sireum/type-org_sireum_MS_1E4216.h
        library/org/sireum/org_sireum_MS_1E4216.h
        library/org/sireum/org_sireum_MS_1E4216.c
        library/org/sireum/type-org_sireum_MS_83D5EB.h
        library/org/sireum/org_sireum_MS_83D5EB.h
        library/org/sireum/org_sireum_MS_83D5EB.c
        library/org/sireum/type-org_sireum_MS_D1ED39.h
        library/org/sireum/org_sireum_MS_D1ED39.h
        library/org/sireum/org_sireum_MS_D1ED39.c
        library/org/sireum/type-org_sireum_MS_E444B2.h
        library/org/sireum/org_sireum_MS_E444B2.h
        library/org/sireum/org_sireum_MS_E444B2.c
        library/org/sireum/type-org_sireum_MS_F55A18.h
        library/org/sireum/org_sireum_MS_F55A18.h
        library/org/sireum/org_sireum_MS_F55A18.c
        library/org/sireum/type-org_sireum_Map.h
        library/org/sireum/org_sireum_Map.h
        library/org/sireum/org_sireum_Map.c
        library/org/sireum/type-org_sireum_Map_9C6840.h
        library/org/sireum/org_sireum_Map_9C6840.h
        library/org/sireum/org_sireum_Map_9C6840.c
        library/org/sireum/type-org_sireum_None.h
        library/org/sireum/org_sireum_None.h
        library/org/sireum/org_sireum_None.c
        library/org/sireum/type-org_sireum_None_380ACD.h
        library/org/sireum/org_sireum_None_380ACD.h
        library/org/sireum/org_sireum_None_380ACD.c
        library/org/sireum/type-org_sireum_None_39BC5F.h
        library/org/sireum/org_sireum_None_39BC5F.h
        library/org/sireum/org_sireum_None_39BC5F.c
        library/org/sireum/type-org_sireum_None_3FD7F9.h
        library/org/sireum/org_sireum_None_3FD7F9.h
        library/org/sireum/org_sireum_None_3FD7F9.c
        library/org/sireum/type-org_sireum_None_475EF0.h
        library/org/sireum/org_sireum_None_475EF0.h
        library/org/sireum/org_sireum_None_475EF0.c
        library/org/sireum/type-org_sireum_None_4CBE13.h
        library/org/sireum/org_sireum_None_4CBE13.h
        library/org/sireum/org_sireum_None_4CBE13.c
        library/org/sireum/type-org_sireum_None_50AF88.h
        library/org/sireum/org_sireum_None_50AF88.h
        library/org/sireum/org_sireum_None_50AF88.c
        library/org/sireum/type-org_sireum_None_5C1355.h
        library/org/sireum/org_sireum_None_5C1355.h
        library/org/sireum/org_sireum_None_5C1355.c
        library/org/sireum/type-org_sireum_None_68DB3B.h
        library/org/sireum/org_sireum_None_68DB3B.h
        library/org/sireum/org_sireum_None_68DB3B.c
        library/org/sireum/type-org_sireum_None_72E81E.h
        library/org/sireum/org_sireum_None_72E81E.h
        library/org/sireum/org_sireum_None_72E81E.c
        library/org/sireum/type-org_sireum_None_734370.h
        library/org/sireum/org_sireum_None_734370.h
        library/org/sireum/org_sireum_None_734370.c
        library/org/sireum/type-org_sireum_None_76463B.h
        library/org/sireum/org_sireum_None_76463B.h
        library/org/sireum/org_sireum_None_76463B.c
        library/org/sireum/type-org_sireum_None_831682.h
        library/org/sireum/org_sireum_None_831682.h
        library/org/sireum/org_sireum_None_831682.c
        library/org/sireum/type-org_sireum_None_856E6F.h
        library/org/sireum/org_sireum_None_856E6F.h
        library/org/sireum/org_sireum_None_856E6F.c
        library/org/sireum/type-org_sireum_None_892E2E.h
        library/org/sireum/org_sireum_None_892E2E.h
        library/org/sireum/org_sireum_None_892E2E.c
        library/org/sireum/type-org_sireum_None_964667.h
        library/org/sireum/org_sireum_None_964667.h
        library/org/sireum/org_sireum_None_964667.c
        library/org/sireum/type-org_sireum_None_A41F76.h
        library/org/sireum/org_sireum_None_A41F76.h
        library/org/sireum/org_sireum_None_A41F76.c
        library/org/sireum/type-org_sireum_None_AC21B6.h
        library/org/sireum/org_sireum_None_AC21B6.h
        library/org/sireum/org_sireum_None_AC21B6.c
        library/org/sireum/type-org_sireum_None_ACBA15.h
        library/org/sireum/org_sireum_None_ACBA15.h
        library/org/sireum/org_sireum_None_ACBA15.c
        library/org/sireum/type-org_sireum_None_B473AE.h
        library/org/sireum/org_sireum_None_B473AE.h
        library/org/sireum/org_sireum_None_B473AE.c
        library/org/sireum/type-org_sireum_None_C2CCA4.h
        library/org/sireum/org_sireum_None_C2CCA4.h
        library/org/sireum/org_sireum_None_C2CCA4.c
        library/org/sireum/type-org_sireum_None_C92EDC.h
        library/org/sireum/org_sireum_None_C92EDC.h
        library/org/sireum/org_sireum_None_C92EDC.c
        library/org/sireum/type-org_sireum_None_ED72E1.h
        library/org/sireum/org_sireum_None_ED72E1.h
        library/org/sireum/org_sireum_None_ED72E1.c
        library/org/sireum/type-org_sireum_None_FD0D39.h
        library/org/sireum/org_sireum_None_FD0D39.h
        library/org/sireum/org_sireum_None_FD0D39.c
        library/org/sireum/type-org_sireum_Nothing.h
        library/org/sireum/org_sireum_Nothing.h
        library/org/sireum/org_sireum_Nothing.c
        library/org/sireum/type-org_sireum_Option_10368D.h
        library/org/sireum/org_sireum_Option_10368D.h
        library/org/sireum/org_sireum_Option_10368D.c
        library/org/sireum/type-org_sireum_Option_188779.h
        library/org/sireum/org_sireum_Option_188779.h
        library/org/sireum/org_sireum_Option_188779.c
        library/org/sireum/type-org_sireum_Option_2B0611.h
        library/org/sireum/org_sireum_Option_2B0611.h
        library/org/sireum/org_sireum_Option_2B0611.c
        library/org/sireum/type-org_sireum_Option_376396.h
        library/org/sireum/org_sireum_Option_376396.h
        library/org/sireum/org_sireum_Option_376396.c
        library/org/sireum/type-org_sireum_Option_3B7208.h
        library/org/sireum/org_sireum_Option_3B7208.h
        library/org/sireum/org_sireum_Option_3B7208.c
        library/org/sireum/type-org_sireum_Option_40D664.h
        library/org/sireum/org_sireum_Option_40D664.h
        library/org/sireum/org_sireum_Option_40D664.c
        library/org/sireum/type-org_sireum_Option_5F39ED.h
        library/org/sireum/org_sireum_Option_5F39ED.h
        library/org/sireum/org_sireum_Option_5F39ED.c
        library/org/sireum/type-org_sireum_Option_6239DB.h
        library/org/sireum/org_sireum_Option_6239DB.h
        library/org/sireum/org_sireum_Option_6239DB.c
        library/org/sireum/type-org_sireum_Option_74C297.h
        library/org/sireum/org_sireum_Option_74C297.h
        library/org/sireum/org_sireum_Option_74C297.c
        library/org/sireum/type-org_sireum_Option_78CB14.h
        library/org/sireum/org_sireum_Option_78CB14.h
        library/org/sireum/org_sireum_Option_78CB14.c
        library/org/sireum/type-org_sireum_Option_7BBFBE.h
        library/org/sireum/org_sireum_Option_7BBFBE.h
        library/org/sireum/org_sireum_Option_7BBFBE.c
        library/org/sireum/type-org_sireum_Option_87C81A.h
        library/org/sireum/org_sireum_Option_87C81A.h
        library/org/sireum/org_sireum_Option_87C81A.c
        library/org/sireum/type-org_sireum_Option_882048.h
        library/org/sireum/org_sireum_Option_882048.h
        library/org/sireum/org_sireum_Option_882048.c
        library/org/sireum/type-org_sireum_Option_89E471.h
        library/org/sireum/org_sireum_Option_89E471.h
        library/org/sireum/org_sireum_Option_89E471.c
        library/org/sireum/type-org_sireum_Option_8E9F45.h
        library/org/sireum/org_sireum_Option_8E9F45.h
        library/org/sireum/org_sireum_Option_8E9F45.c
        library/org/sireum/type-org_sireum_Option_9AF35E.h
        library/org/sireum/org_sireum_Option_9AF35E.h
        library/org/sireum/org_sireum_Option_9AF35E.c
        library/org/sireum/type-org_sireum_Option_A8F8FC.h
        library/org/sireum/org_sireum_Option_A8F8FC.h
        library/org/sireum/org_sireum_Option_A8F8FC.c
        library/org/sireum/type-org_sireum_Option_B47750.h
        library/org/sireum/org_sireum_Option_B47750.h
        library/org/sireum/org_sireum_Option_B47750.c
        library/org/sireum/type-org_sireum_Option_BCC9E8.h
        library/org/sireum/org_sireum_Option_BCC9E8.h
        library/org/sireum/org_sireum_Option_BCC9E8.c
        library/org/sireum/type-org_sireum_Option_C5A124.h
        library/org/sireum/org_sireum_Option_C5A124.h
        library/org/sireum/org_sireum_Option_C5A124.c
        library/org/sireum/type-org_sireum_Option_C622DB.h
        library/org/sireum/org_sireum_Option_C622DB.h
        library/org/sireum/org_sireum_Option_C622DB.c
        library/org/sireum/type-org_sireum_Option_E65AA5.h
        library/org/sireum/org_sireum_Option_E65AA5.h
        library/org/sireum/org_sireum_Option_E65AA5.c
        library/org/sireum/type-org_sireum_Option_EBB396.h
        library/org/sireum/org_sireum_Option_EBB396.h
        library/org/sireum/org_sireum_Option_EBB396.c
        library/org/sireum/type-org_sireum_S64.h
        library/org/sireum/org_sireum_S64.h
        library/org/sireum/org_sireum_S64.c
        library/org/sireum/type-org_sireum_Some.h
        library/org/sireum/org_sireum_Some.h
        library/org/sireum/org_sireum_Some.c
        library/org/sireum/type-org_sireum_Some_040EE4.h
        library/org/sireum/org_sireum_Some_040EE4.h
        library/org/sireum/org_sireum_Some_040EE4.c
        library/org/sireum/type-org_sireum_Some_07AD88.h
        library/org/sireum/org_sireum_Some_07AD88.h
        library/org/sireum/org_sireum_Some_07AD88.c
        library/org/sireum/type-org_sireum_Some_14C467.h
        library/org/sireum/org_sireum_Some_14C467.h
        library/org/sireum/org_sireum_Some_14C467.c
        library/org/sireum/type-org_sireum_Some_2040D2.h
        library/org/sireum/org_sireum_Some_2040D2.h
        library/org/sireum/org_sireum_Some_2040D2.c
        library/org/sireum/type-org_sireum_Some_23FE19.h
        library/org/sireum/org_sireum_Some_23FE19.h
        library/org/sireum/org_sireum_Some_23FE19.c
        library/org/sireum/type-org_sireum_Some_24B656.h
        library/org/sireum/org_sireum_Some_24B656.h
        library/org/sireum/org_sireum_Some_24B656.c
        library/org/sireum/type-org_sireum_Some_3E197E.h
        library/org/sireum/org_sireum_Some_3E197E.h
        library/org/sireum/org_sireum_Some_3E197E.c
        library/org/sireum/type-org_sireum_Some_3EC8A4.h
        library/org/sireum/org_sireum_Some_3EC8A4.h
        library/org/sireum/org_sireum_Some_3EC8A4.c
        library/org/sireum/type-org_sireum_Some_4782C6.h
        library/org/sireum/org_sireum_Some_4782C6.h
        library/org/sireum/org_sireum_Some_4782C6.c
        library/org/sireum/type-org_sireum_Some_482E57.h
        library/org/sireum/org_sireum_Some_482E57.h
        library/org/sireum/org_sireum_Some_482E57.c
        library/org/sireum/type-org_sireum_Some_486E43.h
        library/org/sireum/org_sireum_Some_486E43.h
        library/org/sireum/org_sireum_Some_486E43.c
        library/org/sireum/type-org_sireum_Some_488F47.h
        library/org/sireum/org_sireum_Some_488F47.h
        library/org/sireum/org_sireum_Some_488F47.c
        library/org/sireum/type-org_sireum_Some_779716.h
        library/org/sireum/org_sireum_Some_779716.h
        library/org/sireum/org_sireum_Some_779716.c
        library/org/sireum/type-org_sireum_Some_80A548.h
        library/org/sireum/org_sireum_Some_80A548.h
        library/org/sireum/org_sireum_Some_80A548.c
        library/org/sireum/type-org_sireum_Some_82706F.h
        library/org/sireum/org_sireum_Some_82706F.h
        library/org/sireum/org_sireum_Some_82706F.c
        library/org/sireum/type-org_sireum_Some_A13654.h
        library/org/sireum/org_sireum_Some_A13654.h
        library/org/sireum/org_sireum_Some_A13654.c
        library/org/sireum/type-org_sireum_Some_A89224.h
        library/org/sireum/org_sireum_Some_A89224.h
        library/org/sireum/org_sireum_Some_A89224.c
        library/org/sireum/type-org_sireum_Some_C959A2.h
        library/org/sireum/org_sireum_Some_C959A2.h
        library/org/sireum/org_sireum_Some_C959A2.c
        library/org/sireum/type-org_sireum_Some_D29615.h
        library/org/sireum/org_sireum_Some_D29615.h
        library/org/sireum/org_sireum_Some_D29615.c
        library/org/sireum/type-org_sireum_Some_D50AE7.h
        library/org/sireum/org_sireum_Some_D50AE7.h
        library/org/sireum/org_sireum_Some_D50AE7.c
        library/org/sireum/type-org_sireum_Some_D8D240.h
        library/org/sireum/org_sireum_Some_D8D240.h
        library/org/sireum/org_sireum_Some_D8D240.c
        library/org/sireum/type-org_sireum_Some_E49AF0.h
        library/org/sireum/org_sireum_Some_E49AF0.h
        library/org/sireum/org_sireum_Some_E49AF0.c
        library/org/sireum/type-org_sireum_Tuple2_4DFC06.h
        library/org/sireum/org_sireum_Tuple2_4DFC06.h
        library/org/sireum/org_sireum_Tuple2_4DFC06.c
        library/org/sireum/type-org_sireum_Tuple2_66F7BA.h
        library/org/sireum/org_sireum_Tuple2_66F7BA.h
        library/org/sireum/org_sireum_Tuple2_66F7BA.c
        library/org/sireum/type-org_sireum_Tuple2_A29DBA.h
        library/org/sireum/org_sireum_Tuple2_A29DBA.h
        library/org/sireum/org_sireum_Tuple2_A29DBA.c
        library/org/sireum/type-org_sireum_Tuple2_EC3B57.h
        library/org/sireum/org_sireum_Tuple2_EC3B57.h
        library/org/sireum/org_sireum_Tuple2_EC3B57.c
        library/org/sireum/conversions/type-org_sireum_conversions_Z.h
        library/org/sireum/conversions/org_sireum_conversions_Z.h
        library/org/sireum/conversions/org_sireum_conversions_Z.c
        library/org/sireum/ops/type-org_sireum_ops_ISZOps.h
        library/org/sireum/ops/org_sireum_ops_ISZOps.h
        library/org/sireum/ops/org_sireum_ops_ISZOps.c
        library/org/sireum/ops/type-org_sireum_ops_ops_ISZOps_524353.h
        library/org/sireum/ops/org_sireum_ops_ops_ISZOps_524353.h
        library/org/sireum/ops/org_sireum_ops_ops_ISZOps_524353.c
        library/org/sireum/ops/type-org_sireum_ops_ops_ISZOps_A6D40E.h
        library/org/sireum/ops/org_sireum_ops_ops_ISZOps_A6D40E.h
        library/org/sireum/ops/org_sireum_ops_ops_ISZOps_A6D40E.c
        library/t/type-t_Arch.h
        library/t/t_Arch.h
        library/t/t_Arch.c
        library/t/type-t_Base_Types.h
        library/t/t_Base_Types.h
        library/t/t_Base_Types.c
        library/t/Base_Types/type-t_Base_Types_Boolean_Payload.h
        library/t/Base_Types/t_Base_Types_Boolean_Payload.h
        library/t/Base_Types/t_Base_Types_Boolean_Payload.c
        library/t/Base_Types/type-t_Base_Types_Float_32_Payload.h
        library/t/Base_Types/t_Base_Types_Float_32_Payload.h
        library/t/Base_Types/t_Base_Types_Float_32_Payload.c
        library/t/type-t_Cli.h
        library/t/t_Cli.h
        library/t/t_Cli.c
        library/t/Cli/type-t_Cli_HelpOption.h
        library/t/Cli/t_Cli_HelpOption.h
        library/t/Cli/t_Cli_HelpOption.c
        library/t/Cli/RunChoice/type-t_Cli_RunChoice_Type.h
        library/t/Cli/RunChoice/t_Cli_RunChoice_Type.h
        library/t/Cli/RunChoice/t_Cli_RunChoice_Type.c
        library/t/Cli/type-t_Cli_RunOption.h
        library/t/Cli/t_Cli_RunOption.h
        library/t/Cli/t_Cli_RunOption.c
        library/t/Cli/type-t_Cli_RunTopOption.h
        library/t/Cli/t_Cli_RunTopOption.h
        library/t/Cli/t_Cli_RunTopOption.c
        library/t/type-t_Demo.h
        library/t/t_Demo.h
        library/t/t_Demo.c
        library/t/type-t_ProcessorTimingProperties.h
        library/t/t_ProcessorTimingProperties.h
        library/t/t_ProcessorTimingProperties.c
        library/t/type-t_ScheduleProviderI.h
        library/t/t_ScheduleProviderI.h
        library/t/type-t_Schedulers.h
        library/t/t_Schedulers.h
        library/t/t_Schedulers.c
        library/t/TemperatureControl/FanAck/type-t_TemperatureControl_FanAck_Type.h
        library/t/TemperatureControl/FanAck/t_TemperatureControl_FanAck_Type.h
        library/t/TemperatureControl/FanAck/t_TemperatureControl_FanAck_Type.c
        library/t/TemperatureControl/type-t_TemperatureControl_FanAck_Payload.h
        library/t/TemperatureControl/t_TemperatureControl_FanAck_Payload.h
        library/t/TemperatureControl/t_TemperatureControl_FanAck_Payload.c
        library/t/TemperatureControl/FanCmd/type-t_TemperatureControl_FanCmd_Type.h
        library/t/TemperatureControl/FanCmd/t_TemperatureControl_FanCmd_Type.h
        library/t/TemperatureControl/FanCmd/t_TemperatureControl_FanCmd_Type.c
        library/t/TemperatureControl/type-t_TemperatureControl_FanCmd_Payload.h
        library/t/TemperatureControl/t_TemperatureControl_FanCmd_Payload.h
        library/t/TemperatureControl/t_TemperatureControl_FanCmd_Payload.c
        library/t/TemperatureControl/type-t_TemperatureControl_Fan_i_Api.h
        library/t/TemperatureControl/t_TemperatureControl_Fan_i_Api.h
        library/t/TemperatureControl/t_TemperatureControl_Fan_i_Api.c
        library/t/TemperatureControl/type-t_TemperatureControl_Fan_i_Initialization_Api.h
        library/t/TemperatureControl/t_TemperatureControl_Fan_i_Initialization_Api.h
        library/t/TemperatureControl/t_TemperatureControl_Fan_i_Initialization_Api.c
        library/t/TemperatureControl/type-t_TemperatureControl_Fan_i_Operational_Api.h
        library/t/TemperatureControl/t_TemperatureControl_Fan_i_Operational_Api.h
        library/t/TemperatureControl/t_TemperatureControl_Fan_i_Operational_Api.c
        library/t/TemperatureControl/type-t_TemperatureControl_Fan_i_fp_fan.h
        library/t/TemperatureControl/t_TemperatureControl_Fan_i_fp_fan.h
        library/t/TemperatureControl/type-t_TemperatureControl_Fan_i_fp_fan_Bridge.h
        library/t/TemperatureControl/t_TemperatureControl_Fan_i_fp_fan_Bridge.h
        library/t/TemperatureControl/t_TemperatureControl_Fan_i_fp_fan_Bridge.c
        library/t/TemperatureControl/Fan_i_fp_fan_Bridge/type-t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints.h
        library/t/TemperatureControl/Fan_i_fp_fan_Bridge/t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints.h
        library/t/TemperatureControl/Fan_i_fp_fan_Bridge/t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints.c
        library/t/TemperatureControl/type-t_TemperatureControl_SetPoint_i.h
        library/t/TemperatureControl/t_TemperatureControl_SetPoint_i.h
        library/t/TemperatureControl/t_TemperatureControl_SetPoint_i.c
        library/t/TemperatureControl/type-t_TemperatureControl_SetPoint_i_Payload.h
        library/t/TemperatureControl/t_TemperatureControl_SetPoint_i_Payload.h
        library/t/TemperatureControl/t_TemperatureControl_SetPoint_i_Payload.c
        library/t/TemperatureControl/type-t_TemperatureControl_TempControl_i_Api.h
        library/t/TemperatureControl/t_TemperatureControl_TempControl_i_Api.h
        library/t/TemperatureControl/t_TemperatureControl_TempControl_i_Api.c
        library/t/TemperatureControl/type-t_TemperatureControl_TempControl_i_Initialization_Api.h
        library/t/TemperatureControl/t_TemperatureControl_TempControl_i_Initialization_Api.h
        library/t/TemperatureControl/t_TemperatureControl_TempControl_i_Initialization_Api.c
        library/t/TemperatureControl/type-t_TemperatureControl_TempControl_i_Operational_Api.h
        library/t/TemperatureControl/t_TemperatureControl_TempControl_i_Operational_Api.h
        library/t/TemperatureControl/t_TemperatureControl_TempControl_i_Operational_Api.c
        library/t/TemperatureControl/type-t_TemperatureControl_TempControl_i_tcp_tempControl.h
        library/t/TemperatureControl/t_TemperatureControl_TempControl_i_tcp_tempControl.h
        library/t/TemperatureControl/type-t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge.h
        library/t/TemperatureControl/t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge.h
        library/t/TemperatureControl/t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge.c
        library/t/TemperatureControl/TempControl_i_tcp_tempControl_Bridge/type-t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints.h
        library/t/TemperatureControl/TempControl_i_tcp_tempControl_Bridge/t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints.h
        library/t/TemperatureControl/TempControl_i_tcp_tempControl_Bridge/t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints.c
        library/t/TemperatureControl/type-t_TemperatureControl_TempSensor_i_Api.h
        library/t/TemperatureControl/t_TemperatureControl_TempSensor_i_Api.h
        library/t/TemperatureControl/t_TemperatureControl_TempSensor_i_Api.c
        library/t/TemperatureControl/type-t_TemperatureControl_TempSensor_i_Initialization_Api.h
        library/t/TemperatureControl/t_TemperatureControl_TempSensor_i_Initialization_Api.h
        library/t/TemperatureControl/t_TemperatureControl_TempSensor_i_Initialization_Api.c
        library/t/TemperatureControl/type-t_TemperatureControl_TempSensor_i_Operational_Api.h
        library/t/TemperatureControl/t_TemperatureControl_TempSensor_i_Operational_Api.h
        library/t/TemperatureControl/t_TemperatureControl_TempSensor_i_Operational_Api.c
        library/t/TemperatureControl/type-t_TemperatureControl_TempSensor_i_tsp_tempSensor.h
        library/t/TemperatureControl/t_TemperatureControl_TempSensor_i_tsp_tempSensor.h
        library/t/TemperatureControl/type-t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge.h
        library/t/TemperatureControl/t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge.h
        library/t/TemperatureControl/t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge.c
        library/t/TemperatureControl/TempSensor_i_tsp_tempSensor_Bridge/type-t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints.h
        library/t/TemperatureControl/TempSensor_i_tsp_tempSensor_Bridge/t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints.h
        library/t/TemperatureControl/TempSensor_i_tsp_tempSensor_Bridge/t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints.c
        library/t/TemperatureControl/TempUnit/type-t_TemperatureControl_TempUnit_Type.h
        library/t/TemperatureControl/TempUnit/t_TemperatureControl_TempUnit_Type.h
        library/t/TemperatureControl/TempUnit/t_TemperatureControl_TempUnit_Type.c
        library/t/TemperatureControl/type-t_TemperatureControl_TempUnit_Payload.h
        library/t/TemperatureControl/t_TemperatureControl_TempUnit_Payload.h
        library/t/TemperatureControl/t_TemperatureControl_TempUnit_Payload.c
        library/t/TemperatureControl/type-t_TemperatureControl_Temperature_i.h
        library/t/TemperatureControl/t_TemperatureControl_Temperature_i.h
        library/t/TemperatureControl/t_TemperatureControl_Temperature_i.c
        library/t/TemperatureControl/type-t_TemperatureControl_Temperature_i_Payload.h
        library/t/TemperatureControl/t_TemperatureControl_Temperature_i_Payload.h
        library/t/TemperatureControl/t_TemperatureControl_Temperature_i_Payload.c
        library/t/type-t_ThreadTimingProperties.h
        library/t/t_ThreadTimingProperties.h
        library/t/t_ThreadTimingProperties.c
        library/t/type-t_TranspilerToucher.h
        library/t/t_TranspilerToucher.h
        library/t/t_TranspilerToucher.c
        library/t/type-t_TranspilerUtil.h
        library/t/t_TranspilerUtil.h
        library/t/t_TranspilerUtil.c
        ext/ext-schedule/round_robin.c
        ext/ext-schedule/legacy.c
        ext/ext-schedule/process.c
        ext/ext-schedule/static_scheduler.c
        ext/ext-c/ext.c
        ext/ext-c/TempSensor_i_tsp_tempSensor/TempSensor_i_tsp_tempSensor_api.c
        ext/ext-c/TempSensor_i_tsp_tempSensor/TempSensor_i_tsp_tempSensor_api.h
        ext/ext-c/TempSensor_i_tsp_tempSensor/TempSensor_i_tsp_tempSensor.h
        ext/ext-c/TempSensor_i_tsp_tempSensor/TempSensor_i_tsp_tempSensor.c
        ext/ext-c/TempControl_i_tcp_tempControl/TempControl_i_tcp_tempControl_api.h
        ext/ext-c/TempControl_i_tcp_tempControl/TempControl_i_tcp_tempControl_api.c
        ext/ext-c/TempControl_i_tcp_tempControl/TempControl_i_tcp_tempControl.h
        ext/ext-c/TempControl_i_tcp_tempControl/TempControl_i_tcp_tempControl.c
        ext/ext-c/ext.h
        ext/ext-c/Fan_i_fp_fan/Fan_i_fp_fan_api.c
        ext/ext-c/Fan_i_fp_fan/Fan_i_fp_fan.c
        ext/ext-c/Fan_i_fp_fan/Fan_i_fp_fan.h
        ext/ext-c/Fan_i_fp_fan/Fan_i_fp_fan_api.h
        ext/etc/ipc.c)

target_include_directories(main
        PUBLIC PUBLIC app-Demo
        PUBLIC PUBLIC runtime
        PUBLIC PUBLIC library/art
        PUBLIC PUBLIC library/art/Bridge
        PUBLIC PUBLIC library/art/DispatchPropertyProtocol
        PUBLIC PUBLIC library/art/PortMode
        PUBLIC PUBLIC library/art/scheduling
        PUBLIC PUBLIC library/art/scheduling/legacy
        PUBLIC PUBLIC library/art/scheduling/roundrobin
        PUBLIC PUBLIC library/art/scheduling/static
        PUBLIC PUBLIC library/art/scheduling/static/Explorer
        PUBLIC PUBLIC library/art/scheduling/static/Schedule
        PUBLIC PUBLIC library/org/sireum
        PUBLIC PUBLIC library/org/sireum/conversions
        PUBLIC PUBLIC library/org/sireum/ops
        PUBLIC PUBLIC library/t
        PUBLIC PUBLIC library/t/Base_Types
        PUBLIC PUBLIC library/t/Cli
        PUBLIC PUBLIC library/t/Cli/RunChoice
        PUBLIC PUBLIC library/t/TemperatureControl/FanAck
        PUBLIC PUBLIC library/t/TemperatureControl
        PUBLIC PUBLIC library/t/TemperatureControl/FanCmd
        PUBLIC PUBLIC library/t/TemperatureControl/Fan_i_fp_fan_Bridge
        PUBLIC PUBLIC library/t/TemperatureControl/TempControl_i_tcp_tempControl_Bridge
        PUBLIC PUBLIC library/t/TemperatureControl/TempSensor_i_tsp_tempSensor_Bridge
        PUBLIC PUBLIC library/t/TemperatureControl/TempUnit
        PUBLIC PUBLIC ext/ext-schedule
        PUBLIC PUBLIC ext/ext-c
        PUBLIC PUBLIC ext/ext-c/TempSensor_i_tsp_tempSensor
        PUBLIC PUBLIC ext/ext-c/TempControl_i_tcp_tempControl
        PUBLIC PUBLIC ext/ext-c/Fan_i_fp_fan
        PUBLIC PUBLIC ext/etc)


add_executable(Demo-bin app-Demo/Demo.c)

target_link_libraries(Demo-bin LINK_PUBLIC main m)

set_target_properties(Demo-bin PROPERTIES OUTPUT_NAME Demo)

