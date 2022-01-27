#include <all.h>

// art.scheduling.roundrobin.RoundRobin

B art_scheduling_roundrobin_RoundRobin__eq(art_scheduling_roundrobin_RoundRobin this, art_scheduling_roundrobin_RoundRobin other) {
  if (IS_7E8796__ne((IS_7E8796) &this->bridges, (IS_7E8796) &other->bridges)) return F;
  return T;
}

B art_scheduling_roundrobin_RoundRobin__ne(art_scheduling_roundrobin_RoundRobin this, art_scheduling_roundrobin_RoundRobin other);

void art_scheduling_roundrobin_RoundRobin_string_(STACK_FRAME String result, art_scheduling_roundrobin_RoundRobin this) {
  DeclNewStackFrame(caller, "RoundRobin.scala", "art.scheduling.roundrobin.RoundRobin", "string", 0);
  String_string_(SF result, string("RoundRobin("));
  IS_7E8796_string_(SF result, (IS_7E8796) &this->bridges);
  String_string_(SF result, string(")"));
}

void art_scheduling_roundrobin_RoundRobin_cprint(art_scheduling_roundrobin_RoundRobin this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("RoundRobin("), isOut);
  IS_7E8796_cprint((IS_7E8796) &this->bridges, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B art_scheduling_roundrobin_RoundRobin__is(STACK_FRAME void* this);
art_scheduling_roundrobin_RoundRobin art_scheduling_roundrobin_RoundRobin__as(STACK_FRAME void *this);

void art_scheduling_roundrobin_RoundRobin_apply(STACK_FRAME art_scheduling_roundrobin_RoundRobin this, IS_7E8796 bridges) {
  DeclNewStackFrame(caller, "RoundRobin.scala", "art.scheduling.roundrobin.RoundRobin", "apply", 0);
  Type_assign(&this->bridges, bridges, sizeof(struct IS_7E8796));
  {
    sfUpdateLoc(11);
    Z t_0 = IS_7E8796_size(SF art_scheduling_roundrobin_RoundRobin_bridges_(this));
    DeclNewMS_1E4216(t_1);
    MS_1E4216_create(SF (MS_1E4216) &t_1, t_0, S64_C(0));
    Type_assign(&this->lastDispatch, ((MS_1E4216) &t_1), sizeof(struct MS_1E4216));
  }
  {
    sfUpdateLoc(12);
    Z t_2 = IS_7E8796_size(SF art_scheduling_roundrobin_RoundRobin_bridges_(this));
    DeclNewMS_1E4216(t_3);
    MS_1E4216_create(SF (MS_1E4216) &t_3, t_2, S64_C(0));
    Type_assign(&this->lastSporadic, ((MS_1E4216) &t_3), sizeof(struct MS_1E4216));
  }
}

Unit art_scheduling_roundrobin_RoundRobin_initialize_(STACK_FRAME art_scheduling_roundrobin_RoundRobin this) {
  DeclNewStackFrame(caller, "RoundRobin.scala", "art.scheduling.roundrobin.RoundRobin", "initialize", 0);

  sfUpdateLoc(15);
  {
    art_scheduling_roundrobin_RoundRobinExtensions_init(SF_LAST);
  }
}

Unit art_scheduling_roundrobin_RoundRobin_initializationPhase_(STACK_FRAME art_scheduling_roundrobin_RoundRobin this) {
  DeclNewStackFrame(caller, "RoundRobin.scala", "art.scheduling.roundrobin.RoundRobin", "initializationPhase", 0);

  sfUpdateLoc(19);
  {
    IS_7E8796 t_4 = art_scheduling_roundrobin_RoundRobin_bridges_(this);
    int8_t t_5 = (art_scheduling_roundrobin_RoundRobin_bridges_(this))->size;
    for (int8_t t_6 = 0; t_6 < t_5; t_6++) {
      art_Bridge bridge = (art_Bridge) &(t_4->value[t_6]);

      sfUpdateLoc(20);
      {
        DeclNewart_Bridge_EntryPoints(t_0);
        art_Bridge_entryPoints_(SF (art_Bridge_EntryPoints) &t_0, bridge);
        art_Bridge_EntryPoints_initialise_(SF ((art_Bridge_EntryPoints) &t_0));
      }

      sfUpdateLoc(21);
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

Unit art_scheduling_roundrobin_RoundRobin_computePhase_(STACK_FRAME art_scheduling_roundrobin_RoundRobin this) {
  DeclNewStackFrame(caller, "RoundRobin.scala", "art.scheduling.roundrobin.RoundRobin", "computePhase", 0);

  sfUpdateLoc(44);
  B t_44_5;
  {
    t_44_5 = (!art_scheduling_roundrobin_RoundRobinExtensions_shouldStop(SF_LAST));
  }
  while(t_44_5) {

    sfUpdateLoc(45);
    {
      IS_7E8796 t_9 = art_scheduling_roundrobin_RoundRobin_bridges_(this);
      int8_t t_10 = (art_scheduling_roundrobin_RoundRobin_bridges_(this))->size;
      for (int8_t t_11 = 0; t_11 < t_10; t_11++) {
        art_Bridge bridge = (art_Bridge) &(t_9->value[t_11]);

        sfUpdateLoc(46);
        B t_0;
        {
          B t_1 = art_scheduling_roundrobin_RoundRobin_shouldDispatch_(SF this, (art_Bridge) bridge);
          t_0 = t_1;
        }
        if (t_0) {

          sfUpdateLoc(47);
          {
            Z t_2 = art_Bridge_id_(SF bridge);
            S64 t_3 = art_Art_time(SF_LAST);
            MS_1E4216_up(art_scheduling_roundrobin_RoundRobin_lastDispatch_(this), t_2, (S64) t_3);
          }

          sfUpdateLoc(48);
          {
            DeclNewart_Bridge_EntryPoints(t_4);
            art_Bridge_entryPoints_(SF (art_Bridge_EntryPoints) &t_4, bridge);
            art_Bridge_EntryPoints_compute_(SF ((art_Bridge_EntryPoints) &t_4));
          }

          sfUpdateLoc(50);
          B t_5;
          {
            DeclNewart_DispatchPropertyProtocol(t_6);
            art_Bridge_dispatchProtocol_(SF (art_DispatchPropertyProtocol) &t_6, bridge);
            t_5 = art_DispatchPropertyProtocol_Sporadic__is(SF ((art_DispatchPropertyProtocol) &t_6));
          }
          if (t_5) {

            sfUpdateLoc(51);
            {
              Z t_7 = art_Bridge_id_(SF bridge);
              S64 t_8 = art_Art_time(SF_LAST);
              MS_1E4216_up(art_scheduling_roundrobin_RoundRobin_lastSporadic_(this), t_7, (S64) t_8);
            }
          }
        }
      }
    }

    sfUpdateLoc(44);
    t_44_5 = (!art_scheduling_roundrobin_RoundRobinExtensions_shouldStop(SF_LAST));
  }
}

Unit art_scheduling_roundrobin_RoundRobin_finalizePhase_(STACK_FRAME art_scheduling_roundrobin_RoundRobin this) {
  DeclNewStackFrame(caller, "RoundRobin.scala", "art.scheduling.roundrobin.RoundRobin", "finalizePhase", 0);

  sfUpdateLoc(59);
  {
    IS_7E8796 t_4 = art_scheduling_roundrobin_RoundRobin_bridges_(this);
    int8_t t_5 = (art_scheduling_roundrobin_RoundRobin_bridges_(this))->size;
    for (int8_t t_6 = 0; t_6 < t_5; t_6++) {
      art_Bridge bridge = (art_Bridge) &(t_4->value[t_6]);

      sfUpdateLoc(60);
      {
        DeclNewart_Bridge_EntryPoints(t_0);
        art_Bridge_entryPoints_(SF (art_Bridge_EntryPoints) &t_0, bridge);
        art_Bridge_EntryPoints_finalise_(SF ((art_Bridge_EntryPoints) &t_0));
      }

      sfUpdateLoc(61);
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

inline B art_scheduling_roundrobin_RoundRobin_shouldDispatch_extract_27_12(STACK_FRAME_SF art_DispatchPropertyProtocol t_0, art_scheduling_roundrobin_RoundRobin this, Z *_period_27_46) {
  if (!art_DispatchPropertyProtocol_Periodic__is(SF t_0)) return F;
  *_period_27_46 = art_DispatchPropertyProtocol_Periodic_period_(art_DispatchPropertyProtocol_Periodic__as(SF t_0));
  return T;
}

inline B art_scheduling_roundrobin_RoundRobin_shouldDispatch_extract_33_12(STACK_FRAME_SF art_DispatchPropertyProtocol t_0, art_scheduling_roundrobin_RoundRobin this, Z *_minRate_33_46) {
  if (!art_DispatchPropertyProtocol_Sporadic__is(SF t_0)) return F;
  *_minRate_33_46 = art_DispatchPropertyProtocol_Sporadic_min_(art_DispatchPropertyProtocol_Sporadic__as(SF t_0));
  return T;
}

B art_scheduling_roundrobin_RoundRobin_shouldDispatch_(STACK_FRAME art_scheduling_roundrobin_RoundRobin this, art_Bridge bridge) {
  DeclNewStackFrame(caller, "RoundRobin.scala", "art.scheduling.roundrobin.RoundRobin", "shouldDispatch", 0);

  sfUpdateLoc(26);
  DeclNewart_DispatchPropertyProtocol(t_1);
  art_Bridge_dispatchProtocol_(SF (art_DispatchPropertyProtocol) &t_1, bridge);
  art_DispatchPropertyProtocol t_0 = ((art_DispatchPropertyProtocol) &t_1);
  B match_26_12 = F;
  if (!match_26_12) {
    Z period_27_46;
    match_26_12 = art_scheduling_roundrobin_RoundRobin_shouldDispatch_extract_27_12(SF t_0, this, &period_27_46);
    if (match_26_12) {

      sfUpdateLoc(28);
      B t_2;
      {
        S64 t_3 = art_Art_time(SF_LAST);
        Z t_4 = art_Bridge_id_(SF bridge);
        t_2 = S64__gt(S64__sub(t_3, MS_1E4216_at(art_scheduling_roundrobin_RoundRobin_lastDispatch_(this), t_4)), conversions_Z_toS64(SF period_27_46));
      }
      if (t_2) {
        Z t_5 = art_Bridge_id_(SF bridge);
        return art_ArtNativeSlang_shouldDispatch(SF t_5);
      } else {
        return F;
      }
    }
  }
  if (!match_26_12) {
    Z minRate_33_46;
    match_26_12 = art_scheduling_roundrobin_RoundRobin_shouldDispatch_extract_33_12(SF t_0, this, &minRate_33_46);
    if (match_26_12) {

      sfUpdateLoc(34);
      B t_6;
      {
        S64 t_7 = art_Art_time(SF_LAST);
        Z t_8 = art_Bridge_id_(SF bridge);
        t_6 = S64__lt(S64__sub(t_7, MS_1E4216_at(art_scheduling_roundrobin_RoundRobin_lastSporadic_(this), t_8)), conversions_Z_toS64(SF minRate_33_46));
      }
      if (t_6) {
        return F;
      } else {
        Z t_9 = art_Bridge_id_(SF bridge);
        return art_ArtNativeSlang_shouldDispatch(SF t_9);
      }
    }
  }
  sfAssert(match_26_12, "Error when pattern matching.");
  exit(-1);
}