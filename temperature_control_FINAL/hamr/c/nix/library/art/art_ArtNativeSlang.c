#include <all.h>

B art_ArtNativeSlang_initialized_ = F;

struct Map_9C6840 _art_ArtNativeSlang_inInfrastructurePorts;
struct Map_9C6840 _art_ArtNativeSlang_outInfrastructurePorts;
struct Map_9C6840 _art_ArtNativeSlang_inPortVariables;
struct Map_9C6840 _art_ArtNativeSlang_outPortVariables;

void art_ArtNativeSlang_init(STACK_FRAME_ONLY) {
  if (art_ArtNativeSlang_initialized_) return;
  art_ArtNativeSlang_initialized_ = T;
  DeclNewStackFrame(caller, "ArtNativeSlang.scala", "art.ArtNativeSlang", "<init>", 0);
  art_ArtNativeSlang_init_inInfrastructurePorts(SF_LAST);
  art_ArtNativeSlang_init_outInfrastructurePorts(SF_LAST);
  art_ArtNativeSlang_init_inPortVariables(SF_LAST);
  art_ArtNativeSlang_init_outPortVariables(SF_LAST);
}

Map_9C6840 art_ArtNativeSlang_inInfrastructurePorts(STACK_FRAME_ONLY) {
  art_ArtNativeSlang_init(CALLER_LAST);
  return (Map_9C6840) &_art_ArtNativeSlang_inInfrastructurePorts;
}

void art_ArtNativeSlang_inInfrastructurePorts_a(STACK_FRAME Map_9C6840 p_inInfrastructurePorts) {
  art_ArtNativeSlang_init(CALLER_LAST);
  Type_assign(&_art_ArtNativeSlang_inInfrastructurePorts, p_inInfrastructurePorts, sizeof(struct Map_9C6840));
}

Map_9C6840 art_ArtNativeSlang_outInfrastructurePorts(STACK_FRAME_ONLY) {
  art_ArtNativeSlang_init(CALLER_LAST);
  return (Map_9C6840) &_art_ArtNativeSlang_outInfrastructurePorts;
}

void art_ArtNativeSlang_outInfrastructurePorts_a(STACK_FRAME Map_9C6840 p_outInfrastructurePorts) {
  art_ArtNativeSlang_init(CALLER_LAST);
  Type_assign(&_art_ArtNativeSlang_outInfrastructurePorts, p_outInfrastructurePorts, sizeof(struct Map_9C6840));
}

Map_9C6840 art_ArtNativeSlang_inPortVariables(STACK_FRAME_ONLY) {
  art_ArtNativeSlang_init(CALLER_LAST);
  return (Map_9C6840) &_art_ArtNativeSlang_inPortVariables;
}

void art_ArtNativeSlang_inPortVariables_a(STACK_FRAME Map_9C6840 p_inPortVariables) {
  art_ArtNativeSlang_init(CALLER_LAST);
  Type_assign(&_art_ArtNativeSlang_inPortVariables, p_inPortVariables, sizeof(struct Map_9C6840));
}

Map_9C6840 art_ArtNativeSlang_outPortVariables(STACK_FRAME_ONLY) {
  art_ArtNativeSlang_init(CALLER_LAST);
  return (Map_9C6840) &_art_ArtNativeSlang_outPortVariables;
}

void art_ArtNativeSlang_outPortVariables_a(STACK_FRAME Map_9C6840 p_outPortVariables) {
  art_ArtNativeSlang_init(CALLER_LAST);
  Type_assign(&_art_ArtNativeSlang_outPortVariables, p_outPortVariables, sizeof(struct Map_9C6840));
}

Unit art_ArtNativeSlang_setUpSystemState(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "ArtNativeSlang.scala", "art.ArtNativeSlang", "setUpSystemState", 0);
}

Unit art_ArtNativeSlang_initializePhase(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "ArtNativeSlang.scala", "art.ArtNativeSlang", "initializePhase", 0);
}

Unit art_ArtNativeSlang_computePhase(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "ArtNativeSlang.scala", "art.ArtNativeSlang", "computePhase", 0);
}

Unit art_ArtNativeSlang_finalizePhase(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "ArtNativeSlang.scala", "art.ArtNativeSlang", "finalizePhase", 0);
}

Unit art_ArtNativeSlang_tearDownSystemState(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "ArtNativeSlang.scala", "art.ArtNativeSlang", "tearDownSystemState", 0);
}

Unit art_ArtNativeSlang_logInfo(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "ArtNativeSlang.scala", "art.ArtNativeSlang", "logInfo", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(178);
  {
    String_cprint(title, T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(179);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(180);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit art_ArtNativeSlang_logDebug(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "ArtNativeSlang.scala", "art.ArtNativeSlang", "logDebug", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(184);
  {
    String_cprint(title, F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(185);
  {
    String_cprint(string(": "), F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(186);
  {
    String_cprint(msg, F);
    cprintln(F);
    cflush(F);
  }

  #endif
}

Unit art_ArtNativeSlang_logError(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "ArtNativeSlang.scala", "art.ArtNativeSlang", "logError", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(190);
  {
    String_cprint(title, T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(191);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(192);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit art_ArtNativeSlang_putValue(STACK_FRAME Z portId, art_DataContent data) {
  DeclNewStackFrame(caller, "ArtNativeSlang.scala", "art.ArtNativeSlang", "putValue", 0);

  sfUpdateLoc(131);
  {
    S64 t_1 = art_Art_time(SF_LAST);
    DeclNewart_ArtSlangMessage(t_0);
    art_ArtSlangMessage_apply(SF &t_0, (art_DataContent) data, portId, art_ArtSlangMessage_UNSET_PORT(SF_LAST), t_1, art_ArtSlangMessage_UNSET_TIME(SF_LAST), art_ArtSlangMessage_UNSET_TIME(SF_LAST), art_ArtSlangMessage_UNSET_TIME(SF_LAST));
    DeclNewTuple2_4DFC06(t_2);
    Tuple2_4DFC06_apply(SF &t_2, portId, (&t_0));
    DeclNewMap_9C6840(t_3);
    Map_9C6840__add_(SF (Map_9C6840) &t_3, art_ArtNativeSlang_outPortVariables(SF_LAST), (Tuple2_4DFC06) (&t_2));
    art_ArtNativeSlang_outPortVariables_a(SF (Map_9C6840) ((Map_9C6840) &t_3));
  }
}

void art_ArtNativeSlang_getValue(STACK_FRAME Option_8E9F45 result, Z portId) {
  DeclNewStackFrame(caller, "ArtNativeSlang.scala", "art.ArtNativeSlang", "getValue", 0);

  sfUpdateLoc(141);
  B t_0;
  {
    B t_1 = Map_9C6840_contains_(SF art_ArtNativeSlang_inPortVariables(SF_LAST), portId);
    t_0 = t_1;
  }
  if (t_0) {
    DeclNewOption_376396(t_3);
    Map_9C6840_get_(SF (Option_376396) &t_3, art_ArtNativeSlang_inPortVariables(SF_LAST), portId);
    DeclNewart_ArtSlangMessage(t_4);
    Option_376396_get_(SF (art_ArtSlangMessage) &t_4, ((Option_376396) &t_3));
    DeclNewSome_D29615(t_2);
    Some_D29615_apply(SF &t_2, (art_DataContent) art_ArtSlangMessage_data_(((art_ArtSlangMessage) &t_4)));
    Type_assign(result, (&t_2), sizeof(struct Some_D29615));
    return;
  } else {
    DeclNewNone_964667(t_5);
    None_964667_apply(SF &t_5);
    Type_assign(result, (&t_5), sizeof(struct None_964667));
    return;
  }
}

inline B art_ArtNativeSlang_shouldDispatch_extract_43_12(STACK_FRAME_SF art_DispatchPropertyProtocol t_2) {
  if (!art_DispatchPropertyProtocol_Periodic__is(SF t_2)) return F;
  return T;
}

inline B art_ArtNativeSlang_shouldDispatch_extract_44_12(STACK_FRAME_SF art_DispatchPropertyProtocol t_2, Z *_minRate_44_46) {
  if (!art_DispatchPropertyProtocol_Sporadic__is(SF t_2)) return F;
  *_minRate_44_46 = art_DispatchPropertyProtocol_Sporadic_min_(art_DispatchPropertyProtocol_Sporadic__as(SF t_2));
  return T;
}

B art_ArtNativeSlang_shouldDispatch(STACK_FRAME Z bridgeId) {
  DeclNewStackFrame(caller, "ArtNativeSlang.scala", "art.ArtNativeSlang", "shouldDispatch", 0);

  sfUpdateLoc(40);
  {
    B t_0 = Option_7BBFBE_nonEmpty_(SF MS_83D5EB_at(art_Art_bridges(SF_LAST), bridgeId));
    if (!(t_0)) {
      DeclNewString(t_1);
      String_string_(SF (String) &t_1, string("Bridge "));
      Z_string_(SF (String) &t_1, bridgeId);
      String_string_(SF (String) &t_1, string(" does not exist"));
      sfAbort((((String) &t_1))->value);
    }
  }

  sfUpdateLoc(42);
  DeclNewart_Bridge(t_3);
  Option_7BBFBE_get_(SF (art_Bridge) &t_3, MS_83D5EB_at(art_Art_bridges(SF_LAST), bridgeId));
  DeclNewart_DispatchPropertyProtocol(t_4);
  art_Bridge_dispatchProtocol_(SF (art_DispatchPropertyProtocol) &t_4, ((art_Bridge) &t_3));
  art_DispatchPropertyProtocol t_2 = ((art_DispatchPropertyProtocol) &t_4);
  B match_42_31 = F;
  if (!match_42_31) {
    match_42_31 = art_ArtNativeSlang_shouldDispatch_extract_43_12(SF t_2);
    if (match_42_31) {
      return T;
    }
  }
  if (!match_42_31) {
    Z minRate_44_46;
    match_42_31 = art_ArtNativeSlang_shouldDispatch_extract_44_12(SF t_2, &minRate_44_46);
    if (match_42_31) {

      sfUpdateLoc(46);
      IS_820232 eventIns;
      DeclNewart_Bridge(t_5);
      Option_7BBFBE_get_(SF (art_Bridge) &t_5, MS_83D5EB_at(art_Art_bridges(SF_LAST), bridgeId));
      DeclNewart_Bridge_Ports(t_6);
      art_Bridge_ports_(SF (art_Bridge_Ports) &t_6, ((art_Bridge) &t_5));
      eventIns = (IS_820232) art_Bridge_Ports_eventIns_(((art_Bridge_Ports) &t_6));

      sfUpdateLoc(48);
      B hasEvents;
      {
        hasEvents = F;
      }

      sfUpdateLoc(50);
      {
        IS_820232 t_10 = eventIns;
        int8_t t_11 = (eventIns)->size;
        for (int8_t t_12 = 0; t_12 < t_11; t_12++) {
          art_UPort e = (art_UPort) &(t_10->value[t_12]);

          sfUpdateLoc(51);
          B t_7;
          {
            Z t_8 = art_UPort_id_(SF e);
            B t_9 = Map_9C6840_contains_(SF art_ArtNativeSlang_inInfrastructurePorts(SF_LAST), t_8);
            t_7 = t_9;
          }
          if (t_7) {

            sfUpdateLoc(52);
            {
              hasEvents = T;
            }
          }
        }
      }
      return hasEvents;
    }
  }
  sfAssert(match_42_31, "Error when pattern matching.");
  exit(-1);
}

S64 art_ArtNativeSlang_time(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "ArtNativeSlang.scala", "art.ArtNativeSlang", "time", 0);
  return art_Process_time(SF_LAST);
}

inline B art_ArtNativeSlang_sendOutput_extract_151_14_376396(STACK_FRAME_SF Option_376396 t_0, art_ArtSlangMessage *_msg_151_19) {
  if (!Some_24B656__is(SF t_0)) return F;
  *_msg_151_19 = (art_ArtSlangMessage) Some_24B656_value_(Some_24B656__as(SF t_0));
  return T;
}

inline B art_ArtNativeSlang_sendOutput_extract_170_14_376396(STACK_FRAME_SF Option_376396 t_0) {
  return T;
}

Unit art_ArtNativeSlang_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "ArtNativeSlang.scala", "art.ArtNativeSlang", "sendOutput", 0);

  sfUpdateLoc(149);
  {
    DeclNewIS_82ABD8(t_20);
    IS_82ABD8__appendAll(SF (IS_82ABD8) &t_20, eventPortIds, (IS_82ABD8) dataPortIds);
    IS_82ABD8 t_17 = ((IS_82ABD8) &t_20);
    int8_t t_18 = (((IS_82ABD8) &t_20))->size;
    for (int8_t t_19 = 0; t_19 < t_18; t_19++) {
      Z srcPortId = t_17->value[t_19];

      sfUpdateLoc(150);
      DeclNewOption_376396(t_1);
      Map_9C6840_get_(SF (Option_376396) &t_1, art_ArtNativeSlang_outPortVariables(SF_LAST), srcPortId);
      Option_376396 t_0 = ((Option_376396) &t_1);
      B match_150_24 = F;
      if (!match_150_24) {
        art_ArtSlangMessage msg_151_19;
        match_150_24 = art_ArtNativeSlang_sendOutput_extract_151_14_376396(SF t_0, &msg_151_19);
        if (match_150_24) {

          sfUpdateLoc(154);
          {
            DeclNewTuple2_4DFC06(t_2);
            Tuple2_4DFC06_apply(SF &t_2, srcPortId, msg_151_19);
            DeclNewMap_9C6840(t_3);
            Map_9C6840__add_(SF (Map_9C6840) &t_3, art_ArtNativeSlang_outInfrastructurePorts(SF_LAST), (Tuple2_4DFC06) (&t_2));
            art_ArtNativeSlang_outInfrastructurePorts_a(SF (Map_9C6840) ((Map_9C6840) &t_3));
          }

          sfUpdateLoc(155);
          {
            DeclNewTuple2_4DFC06(t_4);
            Tuple2_4DFC06_apply(SF &t_4, srcPortId, msg_151_19);
            DeclNewMap_9C6840(t_5);
            Map_9C6840__sub_(SF (Map_9C6840) &t_5, art_ArtNativeSlang_outPortVariables(SF_LAST), (Tuple2_4DFC06) (&t_4));
            art_ArtNativeSlang_outPortVariables_a(SF (Map_9C6840) ((Map_9C6840) &t_5));
          }

          sfUpdateLoc(158);
          {
            IS_82ABD8 t_12 = MS_E444B2_at(art_Art_connections(SF_LAST), srcPortId);
            int8_t t_13 = (MS_E444B2_at(art_Art_connections(SF_LAST), srcPortId))->size;
            for (int8_t t_14 = 0; t_14 < t_13; t_14++) {
              Z dstPortId = t_12->value[t_14];

              sfUpdateLoc(159);
              art_ArtSlangMessage _msg;
              S64 t_7 = art_Art_time(SF_LAST);
              DeclNewart_ArtSlangMessage(t_6);
              art_ArtSlangMessage_apply(SF &t_6, (art_DataContent) art_ArtSlangMessage_data_(msg_151_19), art_ArtSlangMessage_srcPortId_(msg_151_19), dstPortId, art_ArtSlangMessage_putValueTimestamp_(msg_151_19), t_7, art_ArtSlangMessage_dstArrivalTimestamp_(msg_151_19), art_ArtSlangMessage_receiveInputTimestamp_(msg_151_19));
              _msg = (art_ArtSlangMessage) (&t_6);

              sfUpdateLoc(163);
              {
                S64 t_9 = art_Art_time(SF_LAST);
                DeclNewart_ArtSlangMessage(t_8);
                art_ArtSlangMessage_apply(SF &t_8, (art_DataContent) art_ArtSlangMessage_data_(_msg), art_ArtSlangMessage_srcPortId_(_msg), art_ArtSlangMessage_dstPortId_(_msg), art_ArtSlangMessage_putValueTimestamp_(_msg), art_ArtSlangMessage_sendOutputTimestamp_(_msg), t_9, art_ArtSlangMessage_receiveInputTimestamp_(_msg));
                DeclNewTuple2_4DFC06(t_10);
                Tuple2_4DFC06_apply(SF &t_10, dstPortId, (&t_8));
                DeclNewMap_9C6840(t_11);
                Map_9C6840__add_(SF (Map_9C6840) &t_11, art_ArtNativeSlang_inInfrastructurePorts(SF_LAST), (Tuple2_4DFC06) (&t_10));
                art_ArtNativeSlang_inInfrastructurePorts_a(SF (Map_9C6840) ((Map_9C6840) &t_11));
              }
            }
          }

          sfUpdateLoc(168);
          {
            DeclNewTuple2_4DFC06(t_15);
            Tuple2_4DFC06_apply(SF &t_15, srcPortId, msg_151_19);
            DeclNewMap_9C6840(t_16);
            Map_9C6840__sub_(SF (Map_9C6840) &t_16, art_ArtNativeSlang_outInfrastructurePorts(SF_LAST), (Tuple2_4DFC06) (&t_15));
            art_ArtNativeSlang_outInfrastructurePorts_a(SF (Map_9C6840) ((Map_9C6840) &t_16));
          }
        }
      }
      if (!match_150_24) {
        match_150_24 = art_ArtNativeSlang_sendOutput_extract_170_14_376396(SF t_0);
        if (match_150_24) {
        }
      }
      sfAssert(match_150_24, "Error when pattern matching.");
    }
  }
}

inline B art_ArtNativeSlang_dispatchStatus_extract_95_12(STACK_FRAME_SF art_DispatchPropertyProtocol t_0) {
  if (!art_DispatchPropertyProtocol_Periodic__is(SF t_0)) return F;
  return T;
}

inline B art_ArtNativeSlang_dispatchStatus_extract_96_12(STACK_FRAME_SF art_DispatchPropertyProtocol t_0) {
  if (!art_DispatchPropertyProtocol_Sporadic__is(SF t_0)) return F;
  return T;
}

void art_ArtNativeSlang_dispatchStatus(STACK_FRAME art_DispatchStatus result, Z bridgeId) {
  DeclNewStackFrame(caller, "ArtNativeSlang.scala", "art.ArtNativeSlang", "dispatchStatus", 0);

  sfUpdateLoc(94);
  art_DispatchStatus ret;
  DeclNewart_Bridge(t_1);
  Option_7BBFBE_get_(SF (art_Bridge) &t_1, MS_83D5EB_at(art_Art_bridges(SF_LAST), bridgeId));
  DeclNewart_DispatchPropertyProtocol(t_2);
  art_Bridge_dispatchProtocol_(SF (art_DispatchPropertyProtocol) &t_2, ((art_Bridge) &t_1));
  art_DispatchPropertyProtocol t_0 = ((art_DispatchPropertyProtocol) &t_2);
  B match_94_57 = F;
  if (!match_94_57) {
    match_94_57 = art_ArtNativeSlang_dispatchStatus_extract_95_12(SF t_0);
    if (match_94_57) {
      DeclNewart_TimeTriggered(t_3);
      art_TimeTriggered_apply(SF &t_3);
      ret = (art_DispatchStatus) (&t_3);
    }
  }
  if (!match_94_57) {
    match_94_57 = art_ArtNativeSlang_dispatchStatus_extract_96_12(SF t_0);
    if (match_94_57) {

      sfUpdateLoc(98);
      IS_82ABD8 portIds;
      DeclNewIS_82ABD8(t_4);
      int8_t t_5 = 0;
      DeclNewart_Bridge(t_13);
      Option_7BBFBE_get_(SF (art_Bridge) &t_13, MS_83D5EB_at(art_Art_bridges(SF_LAST), bridgeId));
      DeclNewart_Bridge_Ports(t_14);
      art_Bridge_ports_(SF (art_Bridge_Ports) &t_14, ((art_Bridge) &t_13));
      IS_820232 t_10 = art_Bridge_Ports_eventIns_(((art_Bridge_Ports) &t_14));
      int8_t t_11 = (art_Bridge_Ports_eventIns_(((art_Bridge_Ports) &t_14)))->size;
      for (int8_t t_12 = 0; t_12 < t_11; t_12++) {
        art_UPort p = (art_UPort) &(t_10->value[t_12]);
        Z t_7 = art_UPort_id_(SF p);
        DeclNewOption_376396(t_8);
        Map_9C6840_get_(SF (Option_376396) &t_8, art_ArtNativeSlang_inInfrastructurePorts(SF_LAST), t_7);
        B t_9 = Option_376396_nonEmpty_(SF ((Option_376396) &t_8));
        if (t_9) {
          sfAssert(t_5 < MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
          Z t_6 = art_UPort_id_(SF p);
          t_4.value[t_5] = t_6;
          t_5++;
        }
      }
      t_4.size = t_5;
      portIds = (IS_82ABD8) &t_4;

      sfUpdateLoc(101);
      B t_15;
      {
        B t_16 = IS_82ABD8_isEmpty(SF portIds);
        t_15 = t_16;
      }
      if (t_15) {

        sfUpdateLoc(102);
        {
          DeclNewString(t_17);
          String t_18 = (String) &t_17;
          DeclNewString(t_19);
          String_string_(SF (String) &t_19, string("Unexpected: shouldDispatch() should have returned true in order to get here, however the incoming event ports are empty for bridge id "));
          Z_string_(SF (String) &t_19, bridgeId);
          String_string_(SF (String) &t_19, string(""));
          String_string_(SF t_18, ((String) &t_19));
          sfAbort(t_18->value);
          abort();
        }
      }

      sfUpdateLoc(105);
      IS_820232 urgentFifo;
      DeclNewIS_820232(t_20);
      int8_t t_21 = 0;
      IS_82ABD8 t_23 = portIds;
      int8_t t_24 = (portIds)->size;
      for (int8_t t_25 = 0; t_25 < t_24; t_25++) {
        Z p = t_23->value[t_25];
        sfAssert(t_21 < MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
        DeclNewart_UPort(t_22);
        art_Art_port(SF (art_UPort) &t_22, p);
        Type_assign(&t_20.value[t_21], ((art_UPort) &t_22), sizeof(union art_UPort));
        t_21++;
      }
      t_20.size = t_21;
      DeclNewIS_820232(t_26);
      art_ArtNativeSlang_sort(SF (IS_820232) &t_26, (IS_820232) &t_20);
      urgentFifo = (IS_820232) ((IS_820232) &t_26);
      DeclNewIS_82ABD8(t_28);
      int8_t t_29 = 0;
      IS_820232 t_31 = urgentFifo;
      int8_t t_32 = (urgentFifo)->size;
      for (int8_t t_33 = 0; t_33 < t_32; t_33++) {
        art_UPort p = (art_UPort) &(t_31->value[t_33]);
        sfAssert(t_29 < MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
        Z t_30 = art_UPort_id_(SF p);
        t_28.value[t_29] = t_30;
        t_29++;
      }
      t_28.size = t_29;
      DeclNewart_EventTriggered(t_27);
      art_EventTriggered_apply(SF &t_27, (IS_82ABD8) &t_28);
      ret = (art_DispatchStatus) (&t_27);
    }
  }
  sfAssert(match_94_57, "Error when pattern matching.");
  Type_assign(result, ret, sizeof(union art_DispatchStatus));
  return;
}

inline B art_ArtNativeSlang_receiveInput_extract_114_14_376396(STACK_FRAME_SF Option_376396 t_0, art_ArtSlangMessage *_data_114_19) {
  if (!Some_24B656__is(SF t_0)) return F;
  *_data_114_19 = (art_ArtSlangMessage) Some_24B656_value_(Some_24B656__as(SF t_0));
  return T;
}

inline B art_ArtNativeSlang_receiveInput_extract_117_14_376396(STACK_FRAME_SF Option_376396 t_0) {
  return T;
}

inline B art_ArtNativeSlang_receiveInput_extract_122_14_376396(STACK_FRAME_SF Option_376396 t_11, art_ArtSlangMessage *_data_122_19) {
  if (!Some_24B656__is(SF t_11)) return F;
  *_data_122_19 = (art_ArtSlangMessage) Some_24B656_value_(Some_24B656__as(SF t_11));
  return T;
}

inline B art_ArtNativeSlang_receiveInput_extract_124_14_376396(STACK_FRAME_SF Option_376396 t_11) {
  return T;
}

Unit art_ArtNativeSlang_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "ArtNativeSlang.scala", "art.ArtNativeSlang", "receiveInput", 0);

  sfUpdateLoc(112);
  {
    IS_82ABD8 t_8 = eventPortIds;
    int8_t t_9 = (eventPortIds)->size;
    for (int8_t t_10 = 0; t_10 < t_9; t_10++) {
      Z portId = t_8->value[t_10];

      sfUpdateLoc(113);
      DeclNewOption_376396(t_1);
      Map_9C6840_get_(SF (Option_376396) &t_1, art_ArtNativeSlang_inInfrastructurePorts(SF_LAST), portId);
      Option_376396 t_0 = ((Option_376396) &t_1);
      B match_113_29 = F;
      if (!match_113_29) {
        art_ArtSlangMessage data_114_19;
        match_113_29 = art_ArtNativeSlang_receiveInput_extract_114_14_376396(SF t_0, &data_114_19);
        if (match_113_29) {

          sfUpdateLoc(115);
          {
            DeclNewTuple2_4DFC06(t_2);
            Tuple2_4DFC06_apply(SF &t_2, portId, data_114_19);
            DeclNewMap_9C6840(t_3);
            Map_9C6840__sub_(SF (Map_9C6840) &t_3, art_ArtNativeSlang_inInfrastructurePorts(SF_LAST), (Tuple2_4DFC06) (&t_2));
            art_ArtNativeSlang_inInfrastructurePorts_a(SF (Map_9C6840) ((Map_9C6840) &t_3));
          }

          sfUpdateLoc(116);
          {
            S64 t_5 = art_Art_time(SF_LAST);
            DeclNewart_ArtSlangMessage(t_4);
            art_ArtSlangMessage_apply(SF &t_4, (art_DataContent) art_ArtSlangMessage_data_(data_114_19), art_ArtSlangMessage_srcPortId_(data_114_19), art_ArtSlangMessage_dstPortId_(data_114_19), art_ArtSlangMessage_putValueTimestamp_(data_114_19), art_ArtSlangMessage_sendOutputTimestamp_(data_114_19), art_ArtSlangMessage_dstArrivalTimestamp_(data_114_19), t_5);
            DeclNewTuple2_4DFC06(t_6);
            Tuple2_4DFC06_apply(SF &t_6, portId, (&t_4));
            DeclNewMap_9C6840(t_7);
            Map_9C6840__add_(SF (Map_9C6840) &t_7, art_ArtNativeSlang_inPortVariables(SF_LAST), (Tuple2_4DFC06) (&t_6));
            art_ArtNativeSlang_inPortVariables_a(SF (Map_9C6840) ((Map_9C6840) &t_7));
          }
        }
      }
      if (!match_113_29) {
        match_113_29 = art_ArtNativeSlang_receiveInput_extract_117_14_376396(SF t_0);
        if (match_113_29) {
        }
      }
      sfAssert(match_113_29, "Error when pattern matching.");
    }
  }

  sfUpdateLoc(120);
  {
    IS_82ABD8 t_15 = dataPortIds;
    int8_t t_16 = (dataPortIds)->size;
    for (int8_t t_17 = 0; t_17 < t_16; t_17++) {
      Z portId = t_15->value[t_17];

      sfUpdateLoc(121);
      DeclNewOption_376396(t_12);
      Map_9C6840_get_(SF (Option_376396) &t_12, art_ArtNativeSlang_inInfrastructurePorts(SF_LAST), portId);
      Option_376396 t_11 = ((Option_376396) &t_12);
      B match_121_29 = F;
      if (!match_121_29) {
        art_ArtSlangMessage data_122_19;
        match_121_29 = art_ArtNativeSlang_receiveInput_extract_122_14_376396(SF t_11, &data_122_19);
        if (match_121_29) {

          sfUpdateLoc(123);
          {
            DeclNewTuple2_4DFC06(t_13);
            Tuple2_4DFC06_apply(SF &t_13, portId, data_122_19);
            DeclNewMap_9C6840(t_14);
            Map_9C6840__add_(SF (Map_9C6840) &t_14, art_ArtNativeSlang_inPortVariables(SF_LAST), (Tuple2_4DFC06) (&t_13));
            art_ArtNativeSlang_inPortVariables_a(SF (Map_9C6840) ((Map_9C6840) &t_14));
          }
        }
      }
      if (!match_121_29) {
        match_121_29 = art_ArtNativeSlang_receiveInput_extract_124_14_376396(SF t_11);
        if (match_121_29) {
        }
      }
      sfAssert(match_121_29, "Error when pattern matching.");
    }
  }
}

void art_ArtNativeSlang_sort_insert(STACK_FRAME IS_820232 result, art_UPort p, IS_820232 sorted) {
  DeclNewStackFrame(caller, "ArtNativeSlang.scala", "art.ArtNativeSlang.sort", "insert", 0);

  sfUpdateLoc(80);
  B t_0;
  {
    B t_1 = IS_820232_isEmpty(SF sorted);
    t_0 = t_1;
  }
  if (t_0) {
    STATIC_ASSERT(1 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_2);
    t_2.size = (int8_t) 1;
    IS_820232_up(&t_2, 0, (art_UPort) p);
    Type_assign(result, (&t_2), sizeof(struct IS_820232));
    return;
  } else {

    sfUpdateLoc(82);
    B t_3;
    {
      B t_4 = art_ArtNativeSlang_lt(SF (art_UPort) IS_820232_at(sorted, Z_C(0)), (art_UPort) p);
      t_3 = t_4;
    }
    if (t_3) {
      DeclNewops_ISZOps_524353(t_5);
      ops_ISZOps_524353_apply(SF &t_5, (IS_820232) sorted);
      DeclNewIS_820232(t_6);
      ops_ISZOps_524353_tail_(SF (IS_820232) &t_6, (&t_5));
      DeclNewIS_820232(t_7);
      art_ArtNativeSlang_sort_insert(SF (IS_820232) &t_7, (art_UPort) p, (IS_820232) ((IS_820232) &t_6));
      DeclNewIS_820232(t_8);
      IS_820232__prepend(SF (IS_820232) &t_8, ((IS_820232) &t_7), (art_UPort) IS_820232_at(sorted, Z_C(0)));
      Type_assign(result, ((IS_820232) &t_8), sizeof(struct IS_820232));
      return;
    } else {
      DeclNewIS_820232(t_9);
      IS_820232__prepend(SF (IS_820232) &t_9, sorted, (art_UPort) p);
      Type_assign(result, ((IS_820232) &t_9), sizeof(struct IS_820232));
      return;
    }
  }
}

void art_ArtNativeSlang_sort(STACK_FRAME IS_820232 result, IS_820232 ports) {
  DeclNewStackFrame(caller, "ArtNativeSlang.scala", "art.ArtNativeSlang", "sort", 0);

  sfUpdateLoc(86);
  B t_0;
  {
    B t_1 = IS_820232_isEmpty(SF ports);
    t_0 = t_1;
  }
  if (t_0) {
    Type_assign(result, ports, sizeof(struct IS_820232));
    return;
  } else {

    sfUpdateLoc(88);
    IS_820232 sorted;
    DeclNewops_ISZOps_524353(t_2);
    ops_ISZOps_524353_apply(SF &t_2, (IS_820232) ports);
    DeclNewIS_820232(t_3);
    ops_ISZOps_524353_tail_(SF (IS_820232) &t_3, (&t_2));
    DeclNewIS_820232(t_4);
    art_ArtNativeSlang_sort(SF (IS_820232) &t_4, (IS_820232) ((IS_820232) &t_3));
    sorted = (IS_820232) ((IS_820232) &t_4);
    DeclNewIS_820232(t_5);
    art_ArtNativeSlang_sort_insert(SF (IS_820232) &t_5, (art_UPort) IS_820232_at(ports, Z_C(0)), (IS_820232) sorted);
    Type_assign(result, ((IS_820232) &t_5), sizeof(struct IS_820232));
    return;
  }
}

inline B art_ArtNativeSlang_lt_extract_63_12_66F7BA(STACK_FRAME_SF Tuple2_66F7BA t_0, art_UrgentPortProto *_p1_63_13, art_UrgentPortProto *_p2_63_34) {
  if (!art_UrgentPortProto__is(SF Tuple2_66F7BA_1(t_0))) return F;
  *_p1_63_13 = (art_UrgentPortProto) Tuple2_66F7BA_1(t_0);
  if (!art_UrgentPortProto__is(SF Tuple2_66F7BA_2(t_0))) return F;
  *_p2_63_34 = (art_UrgentPortProto) Tuple2_66F7BA_2(t_0);
  return T;
}

inline B art_ArtNativeSlang_lt_extract_70_12_66F7BA(STACK_FRAME_SF Tuple2_66F7BA t_0) {
  if (!art_UrgentPortProto__is(SF Tuple2_66F7BA_1(t_0))) return F;
  if (!art_PortProto__is(SF Tuple2_66F7BA_2(t_0))) return F;
  return T;
}

inline B art_ArtNativeSlang_lt_extract_71_12_66F7BA(STACK_FRAME_SF Tuple2_66F7BA t_0) {
  if (!art_PortProto__is(SF Tuple2_66F7BA_1(t_0))) return F;
  if (!art_UrgentPortProto__is(SF Tuple2_66F7BA_2(t_0))) return F;
  return T;
}

inline B art_ArtNativeSlang_lt_extract_72_12_66F7BA(STACK_FRAME_SF Tuple2_66F7BA t_0, art_PortProto *_p1_72_13, art_PortProto *_p2_72_28) {
  if (!art_PortProto__is(SF Tuple2_66F7BA_1(t_0))) return F;
  *_p1_72_13 = (art_PortProto) Tuple2_66F7BA_1(t_0);
  if (!art_PortProto__is(SF Tuple2_66F7BA_2(t_0))) return F;
  *_p2_72_28 = (art_PortProto) Tuple2_66F7BA_2(t_0);
  return T;
}

B art_ArtNativeSlang_lt(STACK_FRAME art_UPort a, art_UPort b) {
  DeclNewStackFrame(caller, "ArtNativeSlang.scala", "art.ArtNativeSlang", "lt", 0);

  sfUpdateLoc(60);
  B r;
  {
    DeclNewTuple2_66F7BA(t_1);
    Tuple2_66F7BA_apply(SF &t_1, a, b);
    Tuple2_66F7BA t_0 = (&t_1);
    B match_60_16 = F;
    if (!match_60_16) {
      art_UrgentPortProto p1_63_13;
      art_UrgentPortProto p2_63_34;
      match_60_16 = art_ArtNativeSlang_lt_extract_63_12_66F7BA(SF t_0, &p1_63_13, &p2_63_34);
      if (match_60_16) {
        Z t_2 = art_UrgentPortProto_urgency_(SF p1_63_13);
        Z t_3 = art_UrgentPortProto_urgency_(SF p2_63_34);
        B t_4;
        if (Z__lt(t_2, t_3)) {
          t_4 = F;
        } else {
          Z t_5 = art_UrgentPortProto_urgency_(SF p1_63_13);
          Z t_6 = art_UrgentPortProto_urgency_(SF p2_63_34);
          B t_7;
          if (Z__gt(t_5, t_6)) {
            t_7 = T;
          } else {
            Z t_8 = art_UrgentPortProto_id_(SF p1_63_13);
            DeclNewOption_376396(t_9);
            Map_9C6840_get_(SF (Option_376396) &t_9, art_ArtNativeSlang_inInfrastructurePorts(SF_LAST), t_8);
            DeclNewart_ArtSlangMessage(t_10);
            Option_376396_get_(SF (art_ArtSlangMessage) &t_10, ((Option_376396) &t_9));
            Z t_11 = art_UrgentPortProto_id_(SF p2_63_34);
            DeclNewOption_376396(t_12);
            Map_9C6840_get_(SF (Option_376396) &t_12, art_ArtNativeSlang_inInfrastructurePorts(SF_LAST), t_11);
            DeclNewart_ArtSlangMessage(t_13);
            Option_376396_get_(SF (art_ArtSlangMessage) &t_13, ((Option_376396) &t_12));
            t_7 = S64__lt(art_ArtSlangMessage_dstArrivalTimestamp_(((art_ArtSlangMessage) &t_10)), art_ArtSlangMessage_dstArrivalTimestamp_(((art_ArtSlangMessage) &t_13)));
          }
          t_4 = t_7;
        }
        r = t_4;
      }
    }
    if (!match_60_16) {
      match_60_16 = art_ArtNativeSlang_lt_extract_70_12_66F7BA(SF t_0);
      if (match_60_16) {
        r = T;
      }
    }
    if (!match_60_16) {
      match_60_16 = art_ArtNativeSlang_lt_extract_71_12_66F7BA(SF t_0);
      if (match_60_16) {
        r = F;
      }
    }
    if (!match_60_16) {
      art_PortProto p1_72_13;
      art_PortProto p2_72_28;
      match_60_16 = art_ArtNativeSlang_lt_extract_72_12_66F7BA(SF t_0, &p1_72_13, &p2_72_28);
      if (match_60_16) {
        Z t_14 = art_PortProto_id_(SF p1_72_13);
        DeclNewOption_376396(t_15);
        Map_9C6840_get_(SF (Option_376396) &t_15, art_ArtNativeSlang_inInfrastructurePorts(SF_LAST), t_14);
        DeclNewart_ArtSlangMessage(t_16);
        Option_376396_get_(SF (art_ArtSlangMessage) &t_16, ((Option_376396) &t_15));
        Z t_17 = art_PortProto_id_(SF p2_72_28);
        DeclNewOption_376396(t_18);
        Map_9C6840_get_(SF (Option_376396) &t_18, art_ArtNativeSlang_inInfrastructurePorts(SF_LAST), t_17);
        DeclNewart_ArtSlangMessage(t_19);
        Option_376396_get_(SF (art_ArtSlangMessage) &t_19, ((Option_376396) &t_18));
        r = S64__lt(art_ArtSlangMessage_dstArrivalTimestamp_(((art_ArtSlangMessage) &t_16)), art_ArtSlangMessage_dstArrivalTimestamp_(((art_ArtSlangMessage) &t_19)));
      }
    }
    sfAssert(match_60_16, "Error when pattern matching.");
  }
  return r;
}

void art_ArtNativeSlang_init_inInfrastructurePorts(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(34);
  DeclNewMap_9C6840(t_0);
  Map_empty_595DD7(SF (Map_9C6840) &t_0);
  Type_assign(&_art_ArtNativeSlang_inInfrastructurePorts, ((Map_9C6840) &t_0), sizeof(struct Map_9C6840));
};

void art_ArtNativeSlang_init_outInfrastructurePorts(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(35);
  DeclNewMap_9C6840(t_1);
  Map_empty_595DD7(SF (Map_9C6840) &t_1);
  Type_assign(&_art_ArtNativeSlang_outInfrastructurePorts, ((Map_9C6840) &t_1), sizeof(struct Map_9C6840));
};

void art_ArtNativeSlang_init_inPortVariables(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(36);
  DeclNewMap_9C6840(t_2);
  Map_empty_595DD7(SF (Map_9C6840) &t_2);
  Type_assign(&_art_ArtNativeSlang_inPortVariables, ((Map_9C6840) &t_2), sizeof(struct Map_9C6840));
};

void art_ArtNativeSlang_init_outPortVariables(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(37);
  DeclNewMap_9C6840(t_3);
  Map_empty_595DD7(SF (Map_9C6840) &t_3);
  Type_assign(&_art_ArtNativeSlang_outPortVariables, ((Map_9C6840) &t_3), sizeof(struct Map_9C6840));
};