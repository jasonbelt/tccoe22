#include <all.h>

B art_scheduling_static_Explorer_initialized_ = F;

struct art_scheduling_static_Explorer_ScheduleState _art_scheduling_static_Explorer_scheduleState;

void art_scheduling_static_Explorer_init(STACK_FRAME_ONLY) {
  if (art_scheduling_static_Explorer_initialized_) return;
  art_scheduling_static_Explorer_initialized_ = T;
  DeclNewStackFrame(caller, "Explorer.scala", "art.scheduling.static.Explorer", "<init>", 0);
  art_scheduling_static_Explorer_init_scheduleState(SF_LAST);
}

art_scheduling_static_Explorer_ScheduleState art_scheduling_static_Explorer_scheduleState(STACK_FRAME_ONLY) {
  art_scheduling_static_Explorer_init(CALLER_LAST);
  return (art_scheduling_static_Explorer_ScheduleState) &_art_scheduling_static_Explorer_scheduleState;
}

void art_scheduling_static_Explorer_scheduleState_a(STACK_FRAME art_scheduling_static_Explorer_ScheduleState p_scheduleState) {
  art_scheduling_static_Explorer_init(CALLER_LAST);
  Type_assign(&_art_scheduling_static_Explorer_scheduleState, p_scheduleState, sizeof(struct art_scheduling_static_Explorer_ScheduleState));
}

Unit art_scheduling_static_Explorer_runSystem(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Explorer.scala", "art.scheduling.static.Explorer", "runSystem", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(299);
  {
    B t_0 = F;
    String_cprint(string("...Running system according to static schedule"), t_0);
    cprintln(t_0);
    cflush(t_0);
  }

  #endif

  sfUpdateLoc(300);
  {
    art_scheduling_static_Explorer_initializeScheduleStateIMP(SF_LAST);
  }

  sfUpdateLoc(301);
  B systemStopCondition;
  {
    systemStopCondition = F;
  }

  sfUpdateLoc(302);
  B t_302_5;
  {
    t_302_5 = (!systemStopCondition);
  }
  while(t_302_5) {

    sfUpdateLoc(303);
    {
      art_scheduling_static_Explorer_executeSlotNumIMP(SF art_scheduling_static_Explorer_ScheduleState_slotNum_(art_scheduling_static_Explorer_scheduleState(SF_LAST)));
    }

    sfUpdateLoc(304);
    {
      art_scheduling_static_Explorer_advanceStateIMP(SF_LAST);
    }

    sfUpdateLoc(305);
    {
      Z i;
      {
        i = Z_C(1);
      }
      Z t_3;
      {
        t_3 = Z_C(100000);
      }
      Z t_4;
      {
        t_4 = (Z) 1;
      }
      while (i <= t_3) {

        sfUpdateLoc(306);
        {
          DeclNewNone_C2CCA4(t_1);
          None_C2CCA4_apply(SF &t_1);
          None_C2CCA4 t_2 = (&t_1);
        }

        sfUpdateLoc(305);
        i = (Z) (i + t_4);
      }
    }

    sfUpdateLoc(302);
    t_302_5 = (!systemStopCondition);
  }
}

Unit art_scheduling_static_Explorer_initializeScheduleStateIMP(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Explorer.scala", "art.scheduling.static.Explorer", "initializeScheduleStateIMP", 0);

  sfUpdateLoc(67);
  {
    DeclNewart_scheduling_static_Explorer_ScheduleState(t_0);
    art_scheduling_static_Explorer_initialScheduleState(SF (art_scheduling_static_Explorer_ScheduleState) &t_0);
    art_scheduling_static_Explorer_scheduleState_a(SF (art_scheduling_static_Explorer_ScheduleState) ((art_scheduling_static_Explorer_ScheduleState) &t_0));
  }
}

Unit art_scheduling_static_Explorer_executeSlotNumIMP(STACK_FRAME Z slotNum) {
  DeclNewStackFrame(caller, "Explorer.scala", "art.scheduling.static.Explorer", "executeSlotNumIMP", 0);

  sfUpdateLoc(101);
  {
    Z t_0 = IS_5AA467_size(SF art_scheduling_static_Schedule_DSchedule_slots_(art_scheduling_static_Schedule_DScheduleSpec_schedule_(art_scheduling_static_Schedule_dScheduleSpec(SF_LAST))));
    if (!(B__and(Z__ge(slotNum, Z_C(0)), Z__lt(slotNum, t_0)))) {
      DeclNewString(t_1);
      String_string_(SF (String) &t_1, string("slotNum: "));
      Z_string_(SF (String) &t_1, slotNum);
      String_string_(SF (String) &t_1, string(", Slot Size: "));
      Z t_2 = IS_5AA467_size(SF art_scheduling_static_Schedule_DSchedule_slots_(art_scheduling_static_Schedule_DScheduleSpec_schedule_(art_scheduling_static_Schedule_dScheduleSpec(SF_LAST))));
      Z_string_(SF (String) &t_1, t_2);
      String_string_(SF (String) &t_1, string(""));
      sfAbort((((String) &t_1))->value);
    }
  }

  sfUpdateLoc(103);
  IS_5AA467 slots;
  slots = (IS_5AA467) art_scheduling_static_Schedule_DSchedule_slots_(art_scheduling_static_Schedule_DScheduleSpec_schedule_(art_scheduling_static_Schedule_dScheduleSpec(SF_LAST)));

  sfUpdateLoc(104);
  {
    art_scheduling_static_Explorer_executeSlotIMP(SF (art_scheduling_static_Schedule_Slot) IS_5AA467_at(slots, slotNum));
  }
}

void art_scheduling_static_Explorer_initialScheduleState(STACK_FRAME art_scheduling_static_Explorer_ScheduleState result) {
  DeclNewStackFrame(caller, "Explorer.scala", "art.scheduling.static.Explorer", "initialScheduleState", 0);

  sfUpdateLoc(62);
  {
    DeclNewart_scheduling_static_Explorer_ScheduleState(t_0);
    art_scheduling_static_Explorer_ScheduleState_apply(SF &t_0, Z_C(0), Z_C(0));
    art_scheduling_static_Explorer_ScheduleState t_1 = (&t_0);
  }
}

Unit art_scheduling_static_Explorer_advanceStateIMP(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Explorer.scala", "art.scheduling.static.Explorer", "advanceStateIMP", 0);

  sfUpdateLoc(149);
  {
    DeclNewart_scheduling_static_Explorer_ScheduleState(t_0);
    art_scheduling_static_Explorer_nextState(SF (art_scheduling_static_Explorer_ScheduleState) &t_0, (art_scheduling_static_Explorer_ScheduleState) art_scheduling_static_Explorer_scheduleState(SF_LAST), (art_scheduling_static_Schedule_DScheduleSpec) art_scheduling_static_Schedule_dScheduleSpec(SF_LAST));
    art_scheduling_static_Explorer_scheduleState_a(SF (art_scheduling_static_Explorer_ScheduleState) ((art_scheduling_static_Explorer_ScheduleState) &t_0));
  }
}

Unit art_scheduling_static_Explorer_executeSlotIMP(STACK_FRAME art_scheduling_static_Schedule_Slot slot) {
  DeclNewStackFrame(caller, "Explorer.scala", "art.scheduling.static.Explorer", "executeSlotIMP", 0);

  sfUpdateLoc(87);
  Z bridgeId;
  {
    bridgeId = art_scheduling_static_Schedule_Slot_bridgeId_(slot);
  }

  sfUpdateLoc(93);
  B t_0;
  {
    t_0 = art_ArtNativeSlang_shouldDispatch(SF bridgeId);
  }
  if (t_0) {

    sfUpdateLoc(94);
    {
      DeclNewart_Bridge(t_1);
      Option_7BBFBE_get_(SF (art_Bridge) &t_1, MS_83D5EB_at(art_Art_bridges(SF_LAST), bridgeId));
      DeclNewart_Bridge_EntryPoints(t_2);
      art_Bridge_entryPoints_(SF (art_Bridge_EntryPoints) &t_2, ((art_Bridge) &t_1));
      art_Bridge_EntryPoints_compute_(SF ((art_Bridge_EntryPoints) &t_2));
    }
  }
}

void art_scheduling_static_Explorer_nextState(STACK_FRAME art_scheduling_static_Explorer_ScheduleState result, art_scheduling_static_Explorer_ScheduleState state, art_scheduling_static_Schedule_DScheduleSpec dScheduleSpec) {
  DeclNewStackFrame(caller, "Explorer.scala", "art.scheduling.static.Explorer", "nextState", 0);

  sfUpdateLoc(112);
  {
    B t_0 = art_scheduling_static_Explorer_validState(SF (art_scheduling_static_Explorer_ScheduleState) state, (art_scheduling_static_Schedule_DScheduleSpec) dScheduleSpec);
    if (!(t_0)) { sfAbort("Assertion failure"); }
  }

  sfUpdateLoc(114);
  IS_5AA467 slots;
  slots = (IS_5AA467) art_scheduling_static_Schedule_DSchedule_slots_(art_scheduling_static_Schedule_DScheduleSpec_schedule_(dScheduleSpec));

  sfUpdateLoc(115);
  Z nextSlotNum;
  {
    nextSlotNum = Z__add(art_scheduling_static_Explorer_ScheduleState_slotNum_(state), Z_C(1));
  }

  sfUpdateLoc(116);
  Z nextHyperPeriodNum;
  {
    nextHyperPeriodNum = art_scheduling_static_Explorer_ScheduleState_hyperperiodNum_(state);
  }

  sfUpdateLoc(118);
  B t_1;
  {
    Z t_2 = IS_5AA467_size(SF slots);
    t_1 = Z__eq(nextSlotNum, t_2);
  }
  if (t_1) {

    sfUpdateLoc(119);
    {
      nextSlotNum = Z_C(0);
    }

    sfUpdateLoc(120);
    {
      nextHyperPeriodNum = Z__add(nextHyperPeriodNum, Z_C(1));
    }
  }
  DeclNewart_scheduling_static_Explorer_ScheduleState(t_3);
  art_scheduling_static_Explorer_ScheduleState_apply(SF &t_3, nextSlotNum, nextHyperPeriodNum);
  Type_assign(result, (&t_3), sizeof(struct art_scheduling_static_Explorer_ScheduleState));
  return;
}

B art_scheduling_static_Explorer_validState(STACK_FRAME art_scheduling_static_Explorer_ScheduleState state, art_scheduling_static_Schedule_DScheduleSpec dScheduleSpec) {
  DeclNewStackFrame(caller, "Explorer.scala", "art.scheduling.static.Explorer", "validState", 0);

  sfUpdateLoc(41);
  Z slotNum;
  {
    slotNum = art_scheduling_static_Explorer_ScheduleState_slotNum_(state);
  }

  sfUpdateLoc(43);
  B slotInRange;
  {
    Z t_0 = IS_5AA467_size(SF art_scheduling_static_Schedule_DSchedule_slots_(art_scheduling_static_Schedule_DScheduleSpec_schedule_(dScheduleSpec)));
    slotInRange = B__and(Z__ge(slotNum, Z_C(0)), Z__lt(slotNum, t_0));
  }

  sfUpdateLoc(44);
  B hyperperiodInRange;
  {
    hyperperiodInRange = Z__ge(art_scheduling_static_Explorer_ScheduleState_hyperperiodNum_(state), Z_C(0));
  }
  return B__and(slotInRange, hyperperiodInRange);
}

void art_scheduling_static_Explorer_init_scheduleState(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(58);
  DeclNewart_scheduling_static_Explorer_ScheduleState(t_0);
  art_scheduling_static_Explorer_initialScheduleState(SF (art_scheduling_static_Explorer_ScheduleState) &t_0);
  Type_assign(&_art_scheduling_static_Explorer_scheduleState, ((art_scheduling_static_Explorer_ScheduleState) &t_0), sizeof(struct art_scheduling_static_Explorer_ScheduleState));
};