#include <all.h>

B art_Art_initialized_ = F;

Z _art_Art_maxComponents;
Z _art_Art_maxPorts;
struct StaticString _art_Art_logTitle;
struct MS_83D5EB _art_Art_bridges;
struct MS_E444B2 _art_Art_connections;
struct MS_F55A18 _art_Art_ports;

void art_Art_init(STACK_FRAME_ONLY) {
  if (art_Art_initialized_) return;
  art_Art_initialized_ = T;
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "<init>", 0);
  art_Art_init_maxComponents(SF_LAST);
  art_Art_init_maxPorts(SF_LAST);
  art_Art_init_logTitle(SF_LAST);
  art_Art_init_bridges(SF_LAST);
  art_Art_init_connections(SF_LAST);
  art_Art_init_ports(SF_LAST);
}

Z art_Art_maxComponents(STACK_FRAME_ONLY) {
  art_Art_init(CALLER_LAST);
  return _art_Art_maxComponents;
}

Z art_Art_maxPorts(STACK_FRAME_ONLY) {
  art_Art_init(CALLER_LAST);
  return _art_Art_maxPorts;
}

String art_Art_logTitle(STACK_FRAME_ONLY) {
  art_Art_init(CALLER_LAST);
  return (String) &_art_Art_logTitle;
}

MS_83D5EB art_Art_bridges(STACK_FRAME_ONLY) {
  art_Art_init(CALLER_LAST);
  return (MS_83D5EB) &_art_Art_bridges;
}

MS_E444B2 art_Art_connections(STACK_FRAME_ONLY) {
  art_Art_init(CALLER_LAST);
  return (MS_E444B2) &_art_Art_connections;
}

MS_F55A18 art_Art_ports(STACK_FRAME_ONLY) {
  art_Art_init(CALLER_LAST);
  return (MS_F55A18) &_art_Art_ports;
}

Unit art_Art_run(STACK_FRAME art_ArchitectureDescription system, art_scheduling_Scheduler scheduler) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "run", 0);

  sfUpdateLoc(121);
  {
    art_Art_assemble(SF (art_ArchitectureDescription) system);
  }

  sfUpdateLoc(123);
  {
    art_Art_setUpArchitecture(SF_LAST);
  }

  sfUpdateLoc(124);
  {
    art_Art_setUpPlatform(SF_LAST);
  }

  sfUpdateLoc(125);
  {
    art_Art_setUpSystemState(SF (art_scheduling_Scheduler) scheduler);
  }

  sfUpdateLoc(127);
  {
    art_Art_initializePhase(SF (art_scheduling_Scheduler) scheduler);
  }

  sfUpdateLoc(128);
  {
    art_Art_computePhase(SF (art_scheduling_Scheduler) scheduler);
  }

  sfUpdateLoc(129);
  {
    art_Art_finalizePhase(SF (art_scheduling_Scheduler) scheduler);
  }

  sfUpdateLoc(131);
  {
    art_Art_tearDownSystemState(SF_LAST);
  }

  sfUpdateLoc(132);
  {
    art_Art_tearDownPlatform(SF_LAST);
  }

  sfUpdateLoc(133);
  {
    art_Art_tearDownArchitecture(SF_LAST);
  }
}

Unit art_Art_assemble(STACK_FRAME art_ArchitectureDescription system) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "assemble", 0);

  sfUpdateLoc(109);
  {
    IS_7E8796 t_0 = art_ArchitectureDescription_components_(system);
    int8_t t_1 = (art_ArchitectureDescription_components_(system))->size;
    for (int8_t t_2 = 0; t_2 < t_1; t_2++) {
      art_Bridge component = (art_Bridge) &(t_0->value[t_2]);

      sfUpdateLoc(110);
      {
        art_Art_m_register(SF (art_Bridge) component);
      }
    }
  }

  sfUpdateLoc(113);
  {
    IS_08117A t_5 = art_ArchitectureDescription_connections_(system);
    int8_t t_6 = (art_ArchitectureDescription_connections_(system))->size;
    for (int8_t t_7 = 0; t_7 < t_6; t_7++) {
      art_UConnection connection = (art_UConnection) &(t_5->value[t_7]);

      sfUpdateLoc(114);
      {
        DeclNewart_UPort(t_3);
        art_UConnection_from_(SF (art_UPort) &t_3, connection);
        DeclNewart_UPort(t_4);
        art_UConnection_to_(SF (art_UPort) &t_4, connection);
        art_Art_connect(SF (art_UPort) ((art_UPort) &t_3), (art_UPort) ((art_UPort) &t_4));
      }
    }
  }
}

Unit art_Art_setUpArchitecture(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "setUpArchitecture", 0);
}

Unit art_Art_setUpPlatform(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "setUpPlatform", 0);
}

Unit art_Art_setUpSystemState(STACK_FRAME art_scheduling_Scheduler scheduler) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "setUpSystemState", 0);

  sfUpdateLoc(158);
  {
    art_ArtNativeSlang_setUpSystemState(SF_LAST);
  }

  sfUpdateLoc(159);
  {
    art_scheduling_Scheduler_initialize_(SF scheduler);
  }
}

Unit art_Art_initializePhase(STACK_FRAME art_scheduling_Scheduler scheduler) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "initializePhase", 0);

  sfUpdateLoc(137);
  {
    art_ArtNativeSlang_initializePhase(SF_LAST);
  }

  sfUpdateLoc(138);
  {
    art_scheduling_Scheduler_initializationPhase_(SF scheduler);
  }
}

Unit art_Art_computePhase(STACK_FRAME art_scheduling_Scheduler scheduler) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "computePhase", 0);

  sfUpdateLoc(142);
  {
    art_ArtNativeSlang_computePhase(SF_LAST);
  }

  sfUpdateLoc(143);
  {
    art_scheduling_Scheduler_computePhase_(SF scheduler);
  }
}

Unit art_Art_finalizePhase(STACK_FRAME art_scheduling_Scheduler scheduler) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "finalizePhase", 0);

  sfUpdateLoc(147);
  {
    art_ArtNativeSlang_finalizePhase(SF_LAST);
  }

  sfUpdateLoc(148);
  {
    art_scheduling_Scheduler_finalizePhase_(SF scheduler);
  }
}

Unit art_Art_tearDownSystemState(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "tearDownSystemState", 0);

  sfUpdateLoc(163);
  {
    art_ArtNativeSlang_tearDownSystemState(SF_LAST);
  }
}

Unit art_Art_tearDownPlatform(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "tearDownPlatform", 0);
}

Unit art_Art_tearDownArchitecture(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "tearDownArchitecture", 0);
}

inline B art_Art_register_extract_36_12(STACK_FRAME_SF art_DispatchPropertyProtocol t_2, Z *_period_36_46) {
  if (!art_DispatchPropertyProtocol_Periodic__is(SF t_2)) return F;
  *_period_36_46 = art_DispatchPropertyProtocol_Periodic_period_(art_DispatchPropertyProtocol_Periodic__as(SF t_2));
  return T;
}

inline B art_Art_register_extract_38_12(STACK_FRAME_SF art_DispatchPropertyProtocol t_2, Z *_min_38_46) {
  if (!art_DispatchPropertyProtocol_Sporadic__is(SF t_2)) return F;
  *_min_38_46 = art_DispatchPropertyProtocol_Sporadic_min_(art_DispatchPropertyProtocol_Sporadic__as(SF t_2));
  return T;
}

inline B art_Art_register_extract_44_14(STACK_FRAME_SF art_PortMode_Type t_10) {
  if (!art_PortMode_Type__eq(t_10, art_PortMode_Type_DataIn)) return F;
  return T;
}

inline B art_Art_register_extract_45_14(STACK_FRAME_SF art_PortMode_Type t_10) {
  if (!art_PortMode_Type__eq(t_10, art_PortMode_Type_DataOut)) return F;
  return T;
}

inline B art_Art_register_extract_46_14(STACK_FRAME_SF art_PortMode_Type t_10) {
  if (!art_PortMode_Type__eq(t_10, art_PortMode_Type_EventIn)) return F;
  return T;
}

inline B art_Art_register_extract_47_14(STACK_FRAME_SF art_PortMode_Type t_10) {
  if (!art_PortMode_Type__eq(t_10, art_PortMode_Type_EventOut)) return F;
  return T;
}

Unit art_Art_m_register(STACK_FRAME art_Bridge bridge) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "register", 0);

  sfUpdateLoc(34);
  {
    Z t_0 = art_Bridge_id_(SF bridge);
    DeclNewSome_482E57(t_1);
    Some_482E57_apply(SF &t_1, (art_Bridge) bridge);
    MS_83D5EB_up(art_Art_bridges(SF_LAST), t_0, (Option_7BBFBE) (&t_1));
  }

  sfUpdateLoc(35);
  DeclNewart_DispatchPropertyProtocol(t_3);
  art_Bridge_dispatchProtocol_(SF (art_DispatchPropertyProtocol) &t_3, bridge);
  art_DispatchPropertyProtocol t_2 = ((art_DispatchPropertyProtocol) &t_3);
  B match_35_12 = F;
  if (!match_35_12) {
    Z period_36_46;
    match_35_12 = art_Art_register_extract_36_12(SF t_2, &period_36_46);
    if (match_35_12) {

      sfUpdateLoc(37);
      {
        DeclNewString(t_4);
        String_string_(SF (String) &t_4, string("Registered component: "));
        DeclNewString(t_5);
        art_Bridge_name_(SF (String) &t_5, bridge);
        String_string_(SF (String) &t_4, ((String) &t_5));
        String_string_(SF (String) &t_4, string(" (periodic: "));
        Z_string_(SF (String) &t_4, period_36_46);
        String_string_(SF (String) &t_4, string(")"));
        art_ArtNativeSlang_logInfo(SF (String) art_Art_logTitle(SF_LAST), (String) ((String) &t_4));
      }
    }
  }
  if (!match_35_12) {
    Z min_38_46;
    match_35_12 = art_Art_register_extract_38_12(SF t_2, &min_38_46);
    if (match_35_12) {

      sfUpdateLoc(39);
      {
        DeclNewString(t_6);
        String_string_(SF (String) &t_6, string("Registered component: "));
        DeclNewString(t_7);
        art_Bridge_name_(SF (String) &t_7, bridge);
        String_string_(SF (String) &t_6, ((String) &t_7));
        String_string_(SF (String) &t_6, string(" (sporadic: "));
        Z_string_(SF (String) &t_6, min_38_46);
        String_string_(SF (String) &t_6, string(")"));
        art_ArtNativeSlang_logInfo(SF (String) art_Art_logTitle(SF_LAST), (String) ((String) &t_6));
      }
    }
  }
  sfAssert(match_35_12, "Error when pattern matching.");

  sfUpdateLoc(41);
  {
    DeclNewart_Bridge_Ports(t_23);
    art_Bridge_ports_(SF (art_Bridge_Ports) &t_23, bridge);
    IS_820232 t_20 = art_Bridge_Ports_all_(((art_Bridge_Ports) &t_23));
    int8_t t_21 = (art_Bridge_Ports_all_(((art_Bridge_Ports) &t_23)))->size;
    for (int8_t t_22 = 0; t_22 < t_21; t_22++) {
      art_UPort port = (art_UPort) &(t_20->value[t_22]);

      sfUpdateLoc(42);
      {
        Z t_8 = art_UPort_id_(SF port);
        DeclNewSome_3E197E(t_9);
        Some_3E197E_apply(SF &t_9, (art_UPort) port);
        MS_F55A18_up(art_Art_ports(SF_LAST), t_8, (Option_6239DB) (&t_9));
      }

      sfUpdateLoc(43);
      art_PortMode_Type t_11 = art_UPort_mode_(SF port);
      art_PortMode_Type t_10 = t_11;
      B match_43_12 = F;
      if (!match_43_12) {
        match_43_12 = art_Art_register_extract_44_14(SF t_10);
        if (match_43_12) {

          sfUpdateLoc(44);
          {
            DeclNewString(t_12);
            String_string_(SF (String) &t_12, string("- Registered port: "));
            DeclNewString(t_13);
            art_UPort_name_(SF (String) &t_13, port);
            String_string_(SF (String) &t_12, ((String) &t_13));
            String_string_(SF (String) &t_12, string(" (data in)"));
            art_ArtNativeSlang_logInfo(SF (String) art_Art_logTitle(SF_LAST), (String) ((String) &t_12));
          }
        }
      }
      if (!match_43_12) {
        match_43_12 = art_Art_register_extract_45_14(SF t_10);
        if (match_43_12) {

          sfUpdateLoc(45);
          {
            DeclNewString(t_14);
            String_string_(SF (String) &t_14, string("- Registered port: "));
            DeclNewString(t_15);
            art_UPort_name_(SF (String) &t_15, port);
            String_string_(SF (String) &t_14, ((String) &t_15));
            String_string_(SF (String) &t_14, string(" (data out)"));
            art_ArtNativeSlang_logInfo(SF (String) art_Art_logTitle(SF_LAST), (String) ((String) &t_14));
          }
        }
      }
      if (!match_43_12) {
        match_43_12 = art_Art_register_extract_46_14(SF t_10);
        if (match_43_12) {

          sfUpdateLoc(46);
          {
            DeclNewString(t_16);
            String_string_(SF (String) &t_16, string("- Registered port: "));
            DeclNewString(t_17);
            art_UPort_name_(SF (String) &t_17, port);
            String_string_(SF (String) &t_16, ((String) &t_17));
            String_string_(SF (String) &t_16, string(" (event in)"));
            art_ArtNativeSlang_logInfo(SF (String) art_Art_logTitle(SF_LAST), (String) ((String) &t_16));
          }
        }
      }
      if (!match_43_12) {
        match_43_12 = art_Art_register_extract_47_14(SF t_10);
        if (match_43_12) {

          sfUpdateLoc(47);
          {
            DeclNewString(t_18);
            String_string_(SF (String) &t_18, string("- Registered port: "));
            DeclNewString(t_19);
            art_UPort_name_(SF (String) &t_19, port);
            String_string_(SF (String) &t_18, ((String) &t_19));
            String_string_(SF (String) &t_18, string(" (event out)"));
            art_ArtNativeSlang_logInfo(SF (String) art_Art_logTitle(SF_LAST), (String) ((String) &t_18));
          }
        }
      }
      sfAssert(match_43_12, "Error when pattern matching.");
    }
  }
}

Unit art_Art_connect(STACK_FRAME art_UPort from, art_UPort to) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "connect", 0);

  sfUpdateLoc(102);
  {
    Z t_0 = art_UPort_id_(SF from);
    Z t_1 = art_UPort_id_(SF from);
    Z t_2 = art_UPort_id_(SF to);
    DeclNewIS_82ABD8(t_3);
    IS_82ABD8__append(SF (IS_82ABD8) &t_3, MS_E444B2_at(art_Art_connections(SF_LAST), t_1), t_2);
    MS_E444B2_up(art_Art_connections(SF_LAST), t_0, (IS_82ABD8) ((IS_82ABD8) &t_3));
  }

  sfUpdateLoc(103);
  {
    DeclNewString(t_4);
    String_string_(SF (String) &t_4, string("Connected ports: "));
    DeclNewString(t_5);
    art_UPort_name_(SF (String) &t_5, from);
    String_string_(SF (String) &t_4, ((String) &t_5));
    String_string_(SF (String) &t_4, string(" -> "));
    DeclNewString(t_6);
    art_UPort_name_(SF (String) &t_6, to);
    String_string_(SF (String) &t_4, ((String) &t_6));
    String_string_(SF (String) &t_4, string(""));
    art_ArtNativeSlang_logInfo(SF (String) art_Art_logTitle(SF_LAST), (String) ((String) &t_4));
  }
}

Unit art_Art_logInfo(STACK_FRAME Z bridgeId, String msg) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "logInfo", 0);

  sfUpdateLoc(78);
  B t_0;
  {
    B t_1 = Option_7BBFBE_nonEmpty_(SF MS_83D5EB_at(art_Art_bridges(SF_LAST), bridgeId));
    t_0 = t_1;
  }
  if (t_0) {

    sfUpdateLoc(79);
    {
      DeclNewart_Bridge(t_2);
      Option_7BBFBE_get_(SF (art_Bridge) &t_2, MS_83D5EB_at(art_Art_bridges(SF_LAST), bridgeId));
      DeclNewString(t_3);
      art_Bridge_name_(SF (String) &t_3, ((art_Bridge) &t_2));
      art_ArtNativeSlang_logInfo(SF (String) ((String) &t_3), (String) msg);
    }
  } else {

    sfUpdateLoc(81);
    {
      art_ArtNativeSlang_logInfo(SF (String) string(""), (String) msg);
    }
  }
}

Unit art_Art_logDebug(STACK_FRAME Z bridgeId, String msg) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "logDebug", 0);

  sfUpdateLoc(94);
  B t_0;
  {
    B t_1 = Option_7BBFBE_nonEmpty_(SF MS_83D5EB_at(art_Art_bridges(SF_LAST), bridgeId));
    t_0 = t_1;
  }
  if (t_0) {

    sfUpdateLoc(95);
    {
      DeclNewart_Bridge(t_2);
      Option_7BBFBE_get_(SF (art_Bridge) &t_2, MS_83D5EB_at(art_Art_bridges(SF_LAST), bridgeId));
      DeclNewString(t_3);
      art_Bridge_name_(SF (String) &t_3, ((art_Bridge) &t_2));
      art_ArtNativeSlang_logDebug(SF (String) ((String) &t_3), (String) msg);
    }
  } else {

    sfUpdateLoc(97);
    {
      art_ArtNativeSlang_logDebug(SF (String) string(""), (String) msg);
    }
  }
}

Unit art_Art_logError(STACK_FRAME Z bridgeId, String msg) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "logError", 0);

  sfUpdateLoc(86);
  B t_0;
  {
    B t_1 = Option_7BBFBE_nonEmpty_(SF MS_83D5EB_at(art_Art_bridges(SF_LAST), bridgeId));
    t_0 = t_1;
  }
  if (t_0) {

    sfUpdateLoc(87);
    {
      DeclNewart_Bridge(t_2);
      Option_7BBFBE_get_(SF (art_Bridge) &t_2, MS_83D5EB_at(art_Art_bridges(SF_LAST), bridgeId));
      DeclNewString(t_3);
      art_Bridge_name_(SF (String) &t_3, ((art_Bridge) &t_2));
      art_ArtNativeSlang_logError(SF (String) ((String) &t_3), (String) msg);
    }
  } else {

    sfUpdateLoc(89);
    {
      art_ArtNativeSlang_logError(SF (String) string(""), (String) msg);
    }
  }
}

Unit art_Art_putValue(STACK_FRAME Z portId, art_DataContent data) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "putValue", 0);

  sfUpdateLoc(62);
  {
    art_ArtNativeSlang_putValue(SF portId, (art_DataContent) data);
  }
}

void art_Art_getValue(STACK_FRAME Option_8E9F45 result, Z portId) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "getValue", 0);
  DeclNewOption_8E9F45(t_0);
  art_ArtNativeSlang_getValue(SF (Option_8E9F45) &t_0, portId);
  Type_assign(result, ((Option_8E9F45) &t_0), sizeof(union Option_8E9F45));
  return;
}

S64 art_Art_time(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "time", 0);
  return art_ArtNativeSlang_time(SF_LAST);
}

Unit art_Art_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "sendOutput", 0);

  sfUpdateLoc(70);
  {
    art_ArtNativeSlang_sendOutput(SF (IS_82ABD8) eventPortIds, (IS_82ABD8) dataPortIds);
  }
}

void art_Art_dispatchStatus(STACK_FRAME art_DispatchStatus result, Z bridgeId) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "dispatchStatus", 0);
  DeclNewart_DispatchStatus(t_0);
  art_ArtNativeSlang_dispatchStatus(SF (art_DispatchStatus) &t_0, bridgeId);
  Type_assign(result, ((art_DispatchStatus) &t_0), sizeof(union art_DispatchStatus));
  return;
}

Unit art_Art_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "receiveInput", 0);

  sfUpdateLoc(58);
  {
    art_ArtNativeSlang_receiveInput(SF (IS_82ABD8) eventPortIds, (IS_82ABD8) dataPortIds);
  }
}

inline B art_Art_port_extract_29_9_6239DB(STACK_FRAME_SF Option_6239DB t_0, art_UPort *_r) {
  if (!Some_3E197E__is(SF t_0)) return F;
  *_r = (art_UPort) Some_3E197E_value_(Some_3E197E__as(SF t_0));
  return T;
}

void art_Art_port(STACK_FRAME art_UPort result, Z p) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "port", 0);

  sfUpdateLoc(29);
  DeclNewOption_6239DB(_t_0);
  Option_6239DB t_0 = (Option_6239DB) &_t_0;;
  {
    Type_assign(t_0, MS_F55A18_at(art_Art_ports(SF_LAST), p), sizeof(union Option_6239DB));
  }
  art_UPort r;
  sfAssert(art_Art_port_extract_29_9_6239DB(SF t_0, &r), "Error during var pattern matching.");
  Type_assign(result, r, sizeof(union art_UPort));
  return;
}

void art_Art_init_maxComponents(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(15);
  _art_Art_maxComponents = Z_C(3);
};

void art_Art_init_maxPorts(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(16);
  _art_Art_maxPorts = Z_C(13);
};

void art_Art_init_logTitle(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(18);
  Type_assign(&_art_Art_logTitle, string("Art"), sizeof(struct StaticString));
};

void art_Art_init_bridges(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(19);
  DeclNewNone_734370(t_0);
  None_734370_apply(SF &t_0);
  DeclNewMS_83D5EB(t_1);
  MS_83D5EB_create(SF (MS_83D5EB) &t_1, art_Art_maxComponents(SF_LAST), (Option_7BBFBE) (&t_0));
  Type_assign(&_art_Art_bridges, ((MS_83D5EB) &t_1), sizeof(struct MS_83D5EB));
};

void art_Art_init_connections(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(20);
  STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_2);
  t_2.size = (int8_t) 0;
  DeclNewMS_E444B2(t_3);
  MS_E444B2_create(SF (MS_E444B2) &t_3, art_Art_maxPorts(SF_LAST), (IS_82ABD8) (&t_2));
  Type_assign(&_art_Art_connections, ((MS_E444B2) &t_3), sizeof(struct MS_E444B2));
};

void art_Art_init_ports(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(21);
  DeclNewNone_39BC5F(t_4);
  None_39BC5F_apply(SF &t_4);
  DeclNewMS_F55A18(t_5);
  MS_F55A18_create(SF (MS_F55A18) &t_5, art_Art_maxPorts(SF_LAST), (Option_6239DB) (&t_4));
  Type_assign(&_art_Art_ports, ((MS_F55A18) &t_5), sizeof(struct MS_F55A18));
};