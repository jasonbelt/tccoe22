#include <all.h>

// art.scheduling.static.StaticScheduler

B art_scheduling_static_StaticScheduler__eq(art_scheduling_static_StaticScheduler this, art_scheduling_static_StaticScheduler other) {
  if (IS_7E8796__ne((IS_7E8796) &this->bridges, (IS_7E8796) &other->bridges)) return F;
  if (art_scheduling_static_Schedule_DScheduleSpec__ne((art_scheduling_static_Schedule_DScheduleSpec) &this->staticSchedule, (art_scheduling_static_Schedule_DScheduleSpec) &other->staticSchedule)) return F;
  return T;
}

B art_scheduling_static_StaticScheduler__ne(art_scheduling_static_StaticScheduler this, art_scheduling_static_StaticScheduler other);

void art_scheduling_static_StaticScheduler_string_(STACK_FRAME String result, art_scheduling_static_StaticScheduler this) {
  DeclNewStackFrame(caller, "StaticScheduler.scala", "art.scheduling.static.StaticScheduler", "string", 0);
  String_string_(SF result, string("StaticScheduler("));
  String sep = string(", ");
  IS_7E8796_string_(SF result, (IS_7E8796) &this->bridges);
  String_string_(SF result, sep);
  art_scheduling_static_Schedule_DScheduleSpec_string_(SF result, (art_scheduling_static_Schedule_DScheduleSpec) &this->staticSchedule);
  String_string_(SF result, string(")"));
}

void art_scheduling_static_StaticScheduler_cprint(art_scheduling_static_StaticScheduler this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("StaticScheduler("), isOut);
  String sep = string(", ");
  IS_7E8796_cprint((IS_7E8796) &this->bridges, isOut);
  String_cprint(sep, isOut);
  art_scheduling_static_Schedule_DScheduleSpec_cprint((art_scheduling_static_Schedule_DScheduleSpec) &this->staticSchedule, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B art_scheduling_static_StaticScheduler__is(STACK_FRAME void* this);
art_scheduling_static_StaticScheduler art_scheduling_static_StaticScheduler__as(STACK_FRAME void *this);

void art_scheduling_static_StaticScheduler_apply(STACK_FRAME art_scheduling_static_StaticScheduler this, IS_7E8796 bridges, art_scheduling_static_Schedule_DScheduleSpec staticSchedule) {
  DeclNewStackFrame(caller, "StaticScheduler.scala", "art.scheduling.static.StaticScheduler", "apply", 0);
  Type_assign(&this->bridges, bridges, sizeof(struct IS_7E8796));
  Type_assign(&this->staticSchedule, staticSchedule, sizeof(struct art_scheduling_static_Schedule_DScheduleSpec));
}

Unit art_scheduling_static_StaticScheduler_initialize_(STACK_FRAME art_scheduling_static_StaticScheduler this) {
  DeclNewStackFrame(caller, "StaticScheduler.scala", "art.scheduling.static.StaticScheduler", "initialize", 0);

  sfUpdateLoc(13);
  {
    art_scheduling_static_Schedule_dScheduleSpec_a(SF (art_scheduling_static_Schedule_DScheduleSpec) art_scheduling_static_StaticScheduler_staticSchedule_(this));
  }
}

Unit art_scheduling_static_StaticScheduler_initializationPhase_(STACK_FRAME art_scheduling_static_StaticScheduler this) {
  DeclNewStackFrame(caller, "StaticScheduler.scala", "art.scheduling.static.StaticScheduler", "initializationPhase", 0);

  sfUpdateLoc(17);
  {
    IS_7E8796 t_4 = art_scheduling_static_StaticScheduler_bridges_(this);
    int8_t t_5 = (art_scheduling_static_StaticScheduler_bridges_(this))->size;
    for (int8_t t_6 = 0; t_6 < t_5; t_6++) {
      art_Bridge bridge = (art_Bridge) &(t_4->value[t_6]);

      sfUpdateLoc(18);
      {
        DeclNewart_Bridge_EntryPoints(t_0);
        art_Bridge_entryPoints_(SF (art_Bridge_EntryPoints) &t_0, bridge);
        art_Bridge_EntryPoints_initialise_(SF ((art_Bridge_EntryPoints) &t_0));
      }

      sfUpdateLoc(19);
      {
        Z t_1 = art_Bridge_id_(SF bridge);
        DeclNewString(t_2);
        String_string_(SF (String) &t_2, string("Initialized bridge: "));
        DeclNewString(t_3);
        art_Bridge_name_(SF (String) &t_3, bridge);
        String_string_(SF (String) &t_2, ((String) &t_3));
        String_string_(SF (String) &t_2, string(""));
        art_Art_logInfo(SF t_1, (String) ((String) &t_2));
      }
    }
  }
}

Unit art_scheduling_static_StaticScheduler_computePhase_(STACK_FRAME art_scheduling_static_StaticScheduler this) {
  DeclNewStackFrame(caller, "StaticScheduler.scala", "art.scheduling.static.StaticScheduler", "computePhase", 0);

  sfUpdateLoc(24);
  {
    art_scheduling_static_Explorer_runSystem(SF_LAST);
  }
}

Unit art_scheduling_static_StaticScheduler_finalizePhase_(STACK_FRAME art_scheduling_static_StaticScheduler this) {
  DeclNewStackFrame(caller, "StaticScheduler.scala", "art.scheduling.static.StaticScheduler", "finalizePhase", 0);

  sfUpdateLoc(28);
  {
    IS_7E8796 t_4 = art_scheduling_static_StaticScheduler_bridges_(this);
    int8_t t_5 = (art_scheduling_static_StaticScheduler_bridges_(this))->size;
    for (int8_t t_6 = 0; t_6 < t_5; t_6++) {
      art_Bridge bridge = (art_Bridge) &(t_4->value[t_6]);

      sfUpdateLoc(29);
      {
        DeclNewart_Bridge_EntryPoints(t_0);
        art_Bridge_entryPoints_(SF (art_Bridge_EntryPoints) &t_0, bridge);
        art_Bridge_EntryPoints_finalise_(SF ((art_Bridge_EntryPoints) &t_0));
      }

      sfUpdateLoc(30);
      {
        Z t_1 = art_Bridge_id_(SF bridge);
        DeclNewString(t_2);
        String_string_(SF (String) &t_2, string("Finalized bridge: "));
        DeclNewString(t_3);
        art_Bridge_name_(SF (String) &t_3, bridge);
        String_string_(SF (String) &t_2, ((String) &t_3));
        String_string_(SF (String) &t_2, string(""));
        art_Art_logInfo(SF t_1, (String) ((String) &t_2));
      }
    }
  }
}