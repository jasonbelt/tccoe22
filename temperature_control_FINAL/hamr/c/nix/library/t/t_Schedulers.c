#include <all.h>

B t_Schedulers_initialized_ = F;

struct t_ProcessorTimingProperties _t_Schedulers_TempControlSystem_i_Instance_t_processor_timingProperties;
struct t_ThreadTimingProperties _t_Schedulers_TempControlSystem_i_Instance_tsp_tempSensor_timingProperties;
struct t_ThreadTimingProperties _t_Schedulers_TempControlSystem_i_Instance_tcp_tempControl_timingProperties;
struct t_ThreadTimingProperties _t_Schedulers_TempControlSystem_i_Instance_fp_fan_timingProperties;
struct IS_7E8796 _t_Schedulers_roundRobinSchedule;
Z _t_Schedulers_framePeriod;
Z _t_Schedulers_numComponents;
Z _t_Schedulers_maxExecutionTime;
struct art_scheduling_static_Schedule_DScheduleSpec _t_Schedulers_staticSchedule;

void t_Schedulers_init(STACK_FRAME_ONLY) {
  if (t_Schedulers_initialized_) return;
  t_Schedulers_initialized_ = T;
  DeclNewStackFrame(caller, "Schedulers.scala", "t.Schedulers", "<init>", 0);
  t_Schedulers_init_TempControlSystem_i_Instance_t_processor_timingProperties(SF_LAST);
  t_Schedulers_init_TempControlSystem_i_Instance_tsp_tempSensor_timingProperties(SF_LAST);
  t_Schedulers_init_TempControlSystem_i_Instance_tcp_tempControl_timingProperties(SF_LAST);
  t_Schedulers_init_TempControlSystem_i_Instance_fp_fan_timingProperties(SF_LAST);
  t_Schedulers_init_roundRobinSchedule(SF_LAST);
  t_Schedulers_init_framePeriod(SF_LAST);
  t_Schedulers_init_numComponents(SF_LAST);
  t_Schedulers_init_maxExecutionTime(SF_LAST);
  t_Schedulers_init_staticSchedule(SF_LAST);
}

t_ProcessorTimingProperties t_Schedulers_TempControlSystem_i_Instance_t_processor_timingProperties(STACK_FRAME_ONLY) {
  t_Schedulers_init(CALLER_LAST);
  return (t_ProcessorTimingProperties) &_t_Schedulers_TempControlSystem_i_Instance_t_processor_timingProperties;
}

t_ThreadTimingProperties t_Schedulers_TempControlSystem_i_Instance_tsp_tempSensor_timingProperties(STACK_FRAME_ONLY) {
  t_Schedulers_init(CALLER_LAST);
  return (t_ThreadTimingProperties) &_t_Schedulers_TempControlSystem_i_Instance_tsp_tempSensor_timingProperties;
}

t_ThreadTimingProperties t_Schedulers_TempControlSystem_i_Instance_tcp_tempControl_timingProperties(STACK_FRAME_ONLY) {
  t_Schedulers_init(CALLER_LAST);
  return (t_ThreadTimingProperties) &_t_Schedulers_TempControlSystem_i_Instance_tcp_tempControl_timingProperties;
}

t_ThreadTimingProperties t_Schedulers_TempControlSystem_i_Instance_fp_fan_timingProperties(STACK_FRAME_ONLY) {
  t_Schedulers_init(CALLER_LAST);
  return (t_ThreadTimingProperties) &_t_Schedulers_TempControlSystem_i_Instance_fp_fan_timingProperties;
}

IS_7E8796 t_Schedulers_roundRobinSchedule(STACK_FRAME_ONLY) {
  t_Schedulers_init(CALLER_LAST);
  return (IS_7E8796) &_t_Schedulers_roundRobinSchedule;
}

Z t_Schedulers_framePeriod(STACK_FRAME_ONLY) {
  t_Schedulers_init(CALLER_LAST);
  return _t_Schedulers_framePeriod;
}

Z t_Schedulers_numComponents(STACK_FRAME_ONLY) {
  t_Schedulers_init(CALLER_LAST);
  return _t_Schedulers_numComponents;
}

Z t_Schedulers_maxExecutionTime(STACK_FRAME_ONLY) {
  t_Schedulers_init(CALLER_LAST);
  return _t_Schedulers_maxExecutionTime;
}

art_scheduling_static_Schedule_DScheduleSpec t_Schedulers_staticSchedule(STACK_FRAME_ONLY) {
  t_Schedulers_init(CALLER_LAST);
  return (art_scheduling_static_Schedule_DScheduleSpec) &_t_Schedulers_staticSchedule;
}

inline B t_Schedulers_getRoundRobinScheduler_extract_59_12_E65AA5(STACK_FRAME_SF Option_E65AA5 t_2, IS_7E8796 *_s_59_17) {
  if (!Some_3EC8A4__is(SF t_2)) return F;
  *_s_59_17 = (IS_7E8796) Some_3EC8A4_value_(Some_3EC8A4__as(SF t_2));
  return T;
}

inline B t_Schedulers_getRoundRobinScheduler_extract_60_12_E65AA5(STACK_FRAME_SF Option_E65AA5 t_2) {
  return T;
}

void t_Schedulers_getRoundRobinScheduler(STACK_FRAME art_scheduling_roundrobin_RoundRobin result, Option_E65AA5 schedule) {
  DeclNewStackFrame(caller, "Schedulers.scala", "t.Schedulers", "getRoundRobinScheduler", 0);

  sfUpdateLoc(57);
  B t_0;
  {
    B t_1 = IS_7E8796_isEmpty(SF t_Schedulers_roundRobinSchedule(SF_LAST));
    t_0 = t_1;
  }
  if (t_0) {
  }

  sfUpdateLoc(58);
  Option_E65AA5 t_2 = schedule;
  B match_58_5 = F;
  if (!match_58_5) {
    IS_7E8796 s_59_17;
    match_58_5 = t_Schedulers_getRoundRobinScheduler_extract_59_12_E65AA5(SF t_2, &s_59_17);
    if (match_58_5) {
      DeclNewart_scheduling_roundrobin_RoundRobin(t_3);
      art_scheduling_roundrobin_RoundRobin_apply(SF &t_3, (IS_7E8796) s_59_17);
      Type_assign(result, (&t_3), sizeof(struct art_scheduling_roundrobin_RoundRobin));
      return;
    }
  }
  if (!match_58_5) {
    match_58_5 = t_Schedulers_getRoundRobinScheduler_extract_60_12_E65AA5(SF t_2);
    if (match_58_5) {
      DeclNewIS_7E8796(t_5);
      t_ScheduleProviderI_getRoundRobinOrder(SF (IS_7E8796) &t_5);
      DeclNewart_scheduling_roundrobin_RoundRobin(t_4);
      art_scheduling_roundrobin_RoundRobin_apply(SF &t_4, (IS_7E8796) ((IS_7E8796) &t_5));
      Type_assign(result, (&t_4), sizeof(struct art_scheduling_roundrobin_RoundRobin));
      return;
    }
  }
  sfAssert(match_58_5, "Error when pattern matching.");
  exit(-1);
}

inline B t_Schedulers_getStaticScheduler_extract_67_12_188779(STACK_FRAME_SF Option_188779 t_2, art_scheduling_static_Schedule_DScheduleSpec *_s_67_17) {
  if (!Some_A13654__is(SF t_2)) return F;
  *_s_67_17 = (art_scheduling_static_Schedule_DScheduleSpec) Some_A13654_value_(Some_A13654__as(SF t_2));
  return T;
}

inline B t_Schedulers_getStaticScheduler_extract_68_12_188779(STACK_FRAME_SF Option_188779 t_2) {
  return T;
}

void t_Schedulers_getStaticScheduler(STACK_FRAME art_scheduling_static_StaticScheduler result, Option_188779 schedule) {
  DeclNewStackFrame(caller, "Schedulers.scala", "t.Schedulers", "getStaticScheduler", 0);

  sfUpdateLoc(65);
  B t_0;
  {
    B t_1 = IS_5AA467_isEmpty(SF art_scheduling_static_Schedule_DSchedule_slots_(art_scheduling_static_Schedule_DScheduleSpec_schedule_(t_Schedulers_staticSchedule(SF_LAST))));
    t_0 = t_1;
  }
  if (t_0) {
  }

  sfUpdateLoc(66);
  Option_188779 t_2 = schedule;
  B match_66_5 = F;
  if (!match_66_5) {
    art_scheduling_static_Schedule_DScheduleSpec s_67_17;
    match_66_5 = t_Schedulers_getStaticScheduler_extract_67_12_188779(SF t_2, &s_67_17);
    if (match_66_5) {
      DeclNewart_scheduling_static_StaticScheduler(t_3);
      art_scheduling_static_StaticScheduler_apply(SF &t_3, (IS_7E8796) art_ArchitectureDescription_components_(t_Arch_ad(SF_LAST)), (art_scheduling_static_Schedule_DScheduleSpec) s_67_17);
      Type_assign(result, (&t_3), sizeof(struct art_scheduling_static_StaticScheduler));
      return;
    }
  }
  if (!match_66_5) {
    match_66_5 = t_Schedulers_getStaticScheduler_extract_68_12_188779(SF t_2);
    if (match_66_5) {
      DeclNewart_scheduling_static_Schedule_DScheduleSpec(t_5);
      t_ScheduleProviderI_getStaticSchedule(SF (art_scheduling_static_Schedule_DScheduleSpec) &t_5);
      DeclNewart_scheduling_static_StaticScheduler(t_4);
      art_scheduling_static_StaticScheduler_apply(SF &t_4, (IS_7E8796) art_ArchitectureDescription_components_(t_Arch_ad(SF_LAST)), (art_scheduling_static_Schedule_DScheduleSpec) ((art_scheduling_static_Schedule_DScheduleSpec) &t_5));
      Type_assign(result, (&t_4), sizeof(struct art_scheduling_static_StaticScheduler));
      return;
    }
  }
  sfAssert(match_66_5, "Error when pattern matching.");
  exit(-1);
}

void t_Schedulers_getLegacyScheduler(STACK_FRAME art_scheduling_legacy_Legacy result) {
  DeclNewStackFrame(caller, "Schedulers.scala", "t.Schedulers", "getLegacyScheduler", 0);
  DeclNewart_scheduling_legacy_Legacy(t_0);
  art_scheduling_legacy_Legacy_apply(SF &t_0, (IS_7E8796) art_ArchitectureDescription_components_(t_Arch_ad(SF_LAST)));
  Type_assign(result, (&t_0), sizeof(struct art_scheduling_legacy_Legacy));
  return;
}

void t_Schedulers_init_TempControlSystem_i_Instance_t_processor_timingProperties(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(23);
  DeclNewSome_488F47(t_1);
  Some_488F47_apply(SF &t_1, Z_C(2));
  DeclNewSome_488F47(t_2);
  Some_488F47_apply(SF &t_2, Z_C(1000));
  DeclNewSome_488F47(t_3);
  Some_488F47_apply(SF &t_3, Z_C(4));
  DeclNewNone_76463B(t_4);
  None_76463B_apply(SF &t_4);
  DeclNewt_ProcessorTimingProperties(t_0);
  t_ProcessorTimingProperties_apply(SF &t_0, (Option_882048) (&t_1), (Option_882048) (&t_2), (Option_882048) (&t_3), (Option_882048) (&t_4));
  Type_assign(&_t_Schedulers_TempControlSystem_i_Instance_t_processor_timingProperties, (&t_0), sizeof(struct t_ProcessorTimingProperties));
};

void t_Schedulers_init_TempControlSystem_i_Instance_tsp_tempSensor_timingProperties(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(29);
  DeclNewSome_488F47(t_6);
  Some_488F47_apply(SF &t_6, Z_C(2));
  DeclNewTuple2_EC3B57(t_8);
  Tuple2_EC3B57_apply(SF &t_8, Z_C(10), Z_C(10));
  DeclNewSome_80A548(t_7);
  Some_80A548_apply(SF &t_7, (Tuple2_EC3B57) (&t_8));
  DeclNewt_ThreadTimingProperties(t_5);
  t_ThreadTimingProperties_apply(SF &t_5, (Option_882048) (&t_6), (Option_B47750) (&t_7));
  Type_assign(&_t_Schedulers_TempControlSystem_i_Instance_tsp_tempSensor_timingProperties, (&t_5), sizeof(struct t_ThreadTimingProperties));
};

void t_Schedulers_init_TempControlSystem_i_Instance_tcp_tempControl_timingProperties(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(33);
  DeclNewSome_488F47(t_10);
  Some_488F47_apply(SF &t_10, Z_C(3));
  DeclNewTuple2_EC3B57(t_12);
  Tuple2_EC3B57_apply(SF &t_12, Z_C(10), Z_C(10));
  DeclNewSome_80A548(t_11);
  Some_80A548_apply(SF &t_11, (Tuple2_EC3B57) (&t_12));
  DeclNewt_ThreadTimingProperties(t_9);
  t_ThreadTimingProperties_apply(SF &t_9, (Option_882048) (&t_10), (Option_B47750) (&t_11));
  Type_assign(&_t_Schedulers_TempControlSystem_i_Instance_tcp_tempControl_timingProperties, (&t_9), sizeof(struct t_ThreadTimingProperties));
};

void t_Schedulers_init_TempControlSystem_i_Instance_fp_fan_timingProperties(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(37);
  DeclNewSome_488F47(t_14);
  Some_488F47_apply(SF &t_14, Z_C(4));
  DeclNewTuple2_EC3B57(t_16);
  Tuple2_EC3B57_apply(SF &t_16, Z_C(10), Z_C(10));
  DeclNewSome_80A548(t_15);
  Some_80A548_apply(SF &t_15, (Tuple2_EC3B57) (&t_16));
  DeclNewt_ThreadTimingProperties(t_13);
  t_ThreadTimingProperties_apply(SF &t_13, (Option_882048) (&t_14), (Option_B47750) (&t_15));
  Type_assign(&_t_Schedulers_TempControlSystem_i_Instance_fp_fan_timingProperties, (&t_13), sizeof(struct t_ThreadTimingProperties));
};

void t_Schedulers_init_roundRobinSchedule(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(42);
  Type_assign(&_t_Schedulers_roundRobinSchedule, art_ArchitectureDescription_components_(t_Arch_ad(SF_LAST)), sizeof(struct IS_7E8796));
};

void t_Schedulers_init_framePeriod(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(44);
  _t_Schedulers_framePeriod = Z_C(1000);
};

void t_Schedulers_init_numComponents(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(45);
  Z t_17 = IS_7E8796_size(SF art_ArchitectureDescription_components_(t_Arch_ad(SF_LAST)));
  _t_Schedulers_numComponents = t_17;
};

void t_Schedulers_init_maxExecutionTime(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(46);
  _t_Schedulers_maxExecutionTime = Z__div(t_Schedulers_numComponents(SF_LAST), t_Schedulers_framePeriod(SF_LAST));
};

void t_Schedulers_init_staticSchedule(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(49);
  STATIC_ASSERT(3 <= MaxIS_5AA467, "Insufficient maximum for IS[Z, art.scheduling.static.Schedule.Slot] elements.");
  DeclNewIS_5AA467(t_20);
  t_20.size = (int8_t) 3;
  DeclNewart_scheduling_static_Schedule_Slot(t_21);
  art_scheduling_static_Schedule_Slot_apply(SF &t_21, t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_id_(t_Arch_TempControlSystem_i_Instance_tsp_tempSensor(SF_LAST)), t_Schedulers_maxExecutionTime(SF_LAST));
  IS_5AA467_up(&t_20, 0, (art_scheduling_static_Schedule_Slot) (&t_21));
  DeclNewart_scheduling_static_Schedule_Slot(t_22);
  art_scheduling_static_Schedule_Slot_apply(SF &t_22, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_id_(t_Arch_TempControlSystem_i_Instance_tcp_tempControl(SF_LAST)), t_Schedulers_maxExecutionTime(SF_LAST));
  IS_5AA467_up(&t_20, 1, (art_scheduling_static_Schedule_Slot) (&t_22));
  DeclNewart_scheduling_static_Schedule_Slot(t_23);
  art_scheduling_static_Schedule_Slot_apply(SF &t_23, t_TemperatureControl_Fan_i_fp_fan_Bridge_id_(t_Arch_TempControlSystem_i_Instance_fp_fan(SF_LAST)), t_Schedulers_maxExecutionTime(SF_LAST));
  IS_5AA467_up(&t_20, 2, (art_scheduling_static_Schedule_Slot) (&t_23));
  DeclNewart_scheduling_static_Schedule_DSchedule(t_19);
  art_scheduling_static_Schedule_DSchedule_apply(SF &t_19, (IS_5AA467) (&t_20));
  DeclNewart_scheduling_static_Schedule_DScheduleSpec(t_18);
  art_scheduling_static_Schedule_DScheduleSpec_apply(SF &t_18, Z_C(0), Z_C(0), (art_scheduling_static_Schedule_DSchedule) (&t_19));
  Type_assign(&_t_Schedulers_staticSchedule, (&t_18), sizeof(struct art_scheduling_static_Schedule_DScheduleSpec));
};