#include <all.h>

inline B t_Demo_main_extract_30_16(STACK_FRAME_SF t_Cli_RunChoice_Type t_3) {
  if (!t_Cli_RunChoice_Type__eq(t_3, t_Cli_RunChoice_Type_Default)) return F;
  return T;
}

inline B t_Demo_main_extract_31_16(STACK_FRAME_SF t_Cli_RunChoice_Type t_3) {
  if (!t_Cli_RunChoice_Type__eq(t_3, t_Cli_RunChoice_Type_RoundRobin)) return F;
  return T;
}

inline B t_Demo_main_extract_32_16(STACK_FRAME_SF t_Cli_RunChoice_Type t_3) {
  if (!t_Cli_RunChoice_Type__eq(t_3, t_Cli_RunChoice_Type_Static)) return F;
  return T;
}

inline B t_Demo_main_extract_33_16(STACK_FRAME_SF t_Cli_RunChoice_Type t_3) {
  if (!t_Cli_RunChoice_Type__eq(t_3, t_Cli_RunChoice_Type_Legacy)) return F;
  return T;
}

inline B t_Demo_main_extract_28_12_89E471(STACK_FRAME_SF Option_89E471 t_0, t_Cli_RunOption *_o_28_17) {
  if (!Some_040EE4__is(SF t_0)) return F;
  if (!t_Cli_RunOption__is(SF Some_040EE4_value_(Some_040EE4__as(SF t_0)))) return F;
  *_o_28_17 = (t_Cli_RunOption) Some_040EE4_value_(Some_040EE4__as(SF t_0));
  return T;
}

inline B t_Demo_main_extract_36_12_89E471(STACK_FRAME_SF Option_89E471 t_0, t_Cli_HelpOption *_o_36_17) {
  if (!Some_040EE4__is(SF t_0)) return F;
  if (!t_Cli_HelpOption__is(SF Some_040EE4_value_(Some_040EE4__as(SF t_0)))) return F;
  *_o_36_17 = (t_Cli_HelpOption) Some_040EE4_value_(Some_040EE4__as(SF t_0));
  return T;
}

inline B t_Demo_main_extract_37_12_89E471(STACK_FRAME_SF Option_89E471 t_0) {
  return T;
}

Z t_Demo_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "Demo.scala", "t.Demo", "main", 0);

  sfUpdateLoc(27);
  DeclNewt_Cli(t_1);
  t_Cli_apply(SF &t_1, ' ');
  DeclNewOption_89E471(t_2);
  t_Cli_parseRun_(SF (Option_89E471) &t_2, (&t_1), (IS_948B60) args, Z_C(0));
  Option_89E471 t_0 = ((Option_89E471) &t_2);
  B match_27_14 = F;
  if (!match_27_14) {
    t_Cli_RunOption o_28_17;
    match_27_14 = t_Demo_main_extract_28_12_89E471(SF t_0, &o_28_17);
    if (match_27_14) {

      sfUpdateLoc(29);
      DeclNewart_scheduling_Scheduler(_scheduler);
      art_scheduling_Scheduler scheduler = (art_scheduling_Scheduler) &_scheduler;
      {
        t_Cli_RunChoice_Type t_3 = t_Cli_RunOption_scheduler_(o_28_17);
        B match_29_38 = F;
        if (!match_29_38) {
          match_29_38 = t_Demo_main_extract_30_16(SF t_3);
          if (match_29_38) {
            DeclNewart_scheduling_Scheduler(t_4);
            t_Demo_defaultScheduler(SF (art_scheduling_Scheduler) &t_4);
            Type_assign(scheduler, ((art_scheduling_Scheduler) &t_4), sizeof(union art_scheduling_Scheduler));
          }
        }
        if (!match_29_38) {
          match_29_38 = t_Demo_main_extract_31_16(SF t_3);
          if (match_29_38) {
            DeclNewNone_C92EDC(t_5);
            None_C92EDC_apply(SF &t_5);
            DeclNewart_scheduling_roundrobin_RoundRobin(t_6);
            t_Schedulers_getRoundRobinScheduler(SF (art_scheduling_roundrobin_RoundRobin) &t_6, (Option_E65AA5) (&t_5));
            Type_assign(scheduler, ((art_scheduling_roundrobin_RoundRobin) &t_6), sizeof(struct art_scheduling_roundrobin_RoundRobin));
          }
        }
        if (!match_29_38) {
          match_29_38 = t_Demo_main_extract_32_16(SF t_3);
          if (match_29_38) {
            DeclNewNone_FD0D39(t_7);
            None_FD0D39_apply(SF &t_7);
            DeclNewart_scheduling_static_StaticScheduler(t_8);
            t_Schedulers_getStaticScheduler(SF (art_scheduling_static_StaticScheduler) &t_8, (Option_188779) (&t_7));
            Type_assign(scheduler, ((art_scheduling_static_StaticScheduler) &t_8), sizeof(struct art_scheduling_static_StaticScheduler));
          }
        }
        if (!match_29_38) {
          match_29_38 = t_Demo_main_extract_33_16(SF t_3);
          if (match_29_38) {
            DeclNewart_scheduling_legacy_Legacy(t_9);
            t_Schedulers_getLegacyScheduler(SF (art_scheduling_legacy_Legacy) &t_9);
            Type_assign(scheduler, ((art_scheduling_legacy_Legacy) &t_9), sizeof(struct art_scheduling_legacy_Legacy));
          }
        }
        sfAssert(match_29_38, "Error when pattern matching.");
      }

      sfUpdateLoc(35);
      {
        art_Art_run(SF (art_ArchitectureDescription) t_Arch_ad(SF_LAST), (art_scheduling_Scheduler) scheduler);
      }
    }
  }
  if (!match_27_14) {
    t_Cli_HelpOption o_36_17;
    match_27_14 = t_Demo_main_extract_36_12_89E471(SF t_0, &o_36_17);
    if (match_27_14) {
    }
  }
  if (!match_27_14) {
    match_27_14 = t_Demo_main_extract_37_12_89E471(SF t_0);
    if (match_27_14) {
      return Z_C(1);
    }
  }
  sfAssert(match_27_14, "Error when pattern matching.");
  return Z_C(0);
}

void t_Demo_defaultScheduler(STACK_FRAME art_scheduling_Scheduler result) {
  DeclNewStackFrame(caller, "Demo.scala", "t.Demo", "defaultScheduler", 0);
  DeclNewNone_C92EDC(t_0);
  None_C92EDC_apply(SF &t_0);
  DeclNewart_scheduling_roundrobin_RoundRobin(t_1);
  t_Schedulers_getRoundRobinScheduler(SF (art_scheduling_roundrobin_RoundRobin) &t_1, (Option_E65AA5) (&t_0));
  Type_assign(result, ((art_scheduling_roundrobin_RoundRobin) &t_1), sizeof(struct art_scheduling_roundrobin_RoundRobin));
  return;
}