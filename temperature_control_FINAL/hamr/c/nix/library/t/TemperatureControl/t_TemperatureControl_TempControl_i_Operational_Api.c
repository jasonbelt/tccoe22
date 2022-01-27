#include <all.h>

// t.TemperatureControl.TempControl_i_Operational_Api

B t_TemperatureControl_TempControl_i_Operational_Api__eq(t_TemperatureControl_TempControl_i_Operational_Api this, t_TemperatureControl_TempControl_i_Operational_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->currentTemp_Id, other->currentTemp_Id)) return F;
  if (Z__ne(this->fanAck_Id, other->fanAck_Id)) return F;
  if (Z__ne(this->setPoint_Id, other->setPoint_Id)) return F;
  if (Z__ne(this->fanCmd_Id, other->fanCmd_Id)) return F;
  if (Z__ne(this->tempChanged_Id, other->tempChanged_Id)) return F;
  return T;
}

B t_TemperatureControl_TempControl_i_Operational_Api__ne(t_TemperatureControl_TempControl_i_Operational_Api this, t_TemperatureControl_TempControl_i_Operational_Api other);

void t_TemperatureControl_TempControl_i_Operational_Api_string_(STACK_FRAME String result, t_TemperatureControl_TempControl_i_Operational_Api this) {
  DeclNewStackFrame(caller, "TempControl_i_Api.scala", "t.TemperatureControl.TempControl_i_Operational_Api", "string", 0);
  String_string_(SF result, string("TempControl_i_Operational_Api("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->currentTemp_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->fanAck_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->setPoint_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->fanCmd_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->tempChanged_Id);
  String_string_(SF result, string(")"));
}

void t_TemperatureControl_TempControl_i_Operational_Api_cprint(t_TemperatureControl_TempControl_i_Operational_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("TempControl_i_Operational_Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->currentTemp_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->fanAck_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->setPoint_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->fanCmd_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->tempChanged_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B t_TemperatureControl_TempControl_i_Operational_Api__is(STACK_FRAME void* this);
t_TemperatureControl_TempControl_i_Operational_Api t_TemperatureControl_TempControl_i_Operational_Api__as(STACK_FRAME void *this);

void t_TemperatureControl_TempControl_i_Operational_Api_apply(STACK_FRAME t_TemperatureControl_TempControl_i_Operational_Api this, Z id, Z currentTemp_Id, Z fanAck_Id, Z setPoint_Id, Z fanCmd_Id, Z tempChanged_Id) {
  DeclNewStackFrame(caller, "TempControl_i_Api.scala", "t.TemperatureControl.TempControl_i_Operational_Api", "apply", 0);
  this->id = id;
  this->currentTemp_Id = currentTemp_Id;
  this->fanAck_Id = fanAck_Id;
  this->setPoint_Id = setPoint_Id;
  this->fanCmd_Id = fanCmd_Id;
  this->tempChanged_Id = tempChanged_Id;
}

inline B t_TemperatureControl_TempControl_i_Operational_Api_get_currentTemp_extract_52_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, t_TemperatureControl_TempControl_i_Operational_Api this, t_TemperatureControl_Temperature_i *_v_52_58) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!t_TemperatureControl_Temperature_i_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_52_58 = (t_TemperatureControl_Temperature_i) t_TemperatureControl_Temperature_i_Payload_value_(t_TemperatureControl_Temperature_i_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

inline B t_TemperatureControl_TempControl_i_Operational_Api_get_currentTemp_extract_53_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, t_TemperatureControl_TempControl_i_Operational_Api this, art_DataContent *_v_53_17) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_53_17 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

inline B t_TemperatureControl_TempControl_i_Operational_Api_get_currentTemp_extract_56_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, t_TemperatureControl_TempControl_i_Operational_Api this) {
  return T;
}

void t_TemperatureControl_TempControl_i_Operational_Api_get_currentTemp_(STACK_FRAME Option_78CB14 result, t_TemperatureControl_TempControl_i_Operational_Api this) {
  DeclNewStackFrame(caller, "TempControl_i_Api.scala", "t.TemperatureControl.TempControl_i_Operational_Api", "get_currentTemp", 0);

  sfUpdateLoc(51);
  Option_78CB14 value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, t_TemperatureControl_TempControl_i_Operational_Api_currentTemp_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_51_64 = F;
  if (!match_51_64) {
    t_TemperatureControl_Temperature_i v_52_58;
    match_51_64 = t_TemperatureControl_TempControl_i_Operational_Api_get_currentTemp_extract_52_12_8E9F45(SF t_0, this, &v_52_58);
    if (match_51_64) {
      DeclNewSome_14C467(t_2);
      Some_14C467_apply(SF &t_2, (t_TemperatureControl_Temperature_i) v_52_58);
      value = (Option_78CB14) (&t_2);
    }
  }
  if (!match_51_64) {
    art_DataContent v_53_17;
    match_51_64 = t_TemperatureControl_TempControl_i_Operational_Api_get_currentTemp_extract_53_12_8E9F45(SF t_0, this, &v_53_17);
    if (match_51_64) {

      sfUpdateLoc(54);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port currentTemp.  Expecting 'TemperatureControl.Temperature_i_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_53_17);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF t_TemperatureControl_TempControl_i_Operational_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_4CBE13(t_4);
      None_4CBE13_apply(SF &t_4);
      value = (Option_78CB14) (&t_4);
    }
  }
  if (!match_51_64) {
    match_51_64 = t_TemperatureControl_TempControl_i_Operational_Api_get_currentTemp_extract_56_12_8E9F45(SF t_0, this);
    if (match_51_64) {
      DeclNewNone_4CBE13(t_5);
      None_4CBE13_apply(SF &t_5);
      value = (Option_78CB14) (&t_5);
    }
  }
  sfAssert(match_51_64, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_78CB14));
  return;
}

inline B t_TemperatureControl_TempControl_i_Operational_Api_get_fanAck_extract_63_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, t_TemperatureControl_TempControl_i_Operational_Api this, t_TemperatureControl_FanAck_Type *_v_63_51) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!t_TemperatureControl_FanAck_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_63_51 = t_TemperatureControl_FanAck_Payload_value_(t_TemperatureControl_FanAck_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

inline B t_TemperatureControl_TempControl_i_Operational_Api_get_fanAck_extract_64_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, t_TemperatureControl_TempControl_i_Operational_Api this, art_DataContent *_v_64_17) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_64_17 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

inline B t_TemperatureControl_TempControl_i_Operational_Api_get_fanAck_extract_67_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, t_TemperatureControl_TempControl_i_Operational_Api this) {
  return T;
}

void t_TemperatureControl_TempControl_i_Operational_Api_get_fanAck_(STACK_FRAME Option_C5A124 result, t_TemperatureControl_TempControl_i_Operational_Api this) {
  DeclNewStackFrame(caller, "TempControl_i_Api.scala", "t.TemperatureControl.TempControl_i_Operational_Api", "get_fanAck", 0);

  sfUpdateLoc(62);
  Option_C5A124 value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, t_TemperatureControl_TempControl_i_Operational_Api_fanAck_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_62_62 = F;
  if (!match_62_62) {
    t_TemperatureControl_FanAck_Type v_63_51;
    match_62_62 = t_TemperatureControl_TempControl_i_Operational_Api_get_fanAck_extract_63_12_8E9F45(SF t_0, this, &v_63_51);
    if (match_62_62) {
      DeclNewSome_07AD88(t_2);
      Some_07AD88_apply(SF &t_2, v_63_51);
      value = (Option_C5A124) (&t_2);
    }
  }
  if (!match_62_62) {
    art_DataContent v_64_17;
    match_62_62 = t_TemperatureControl_TempControl_i_Operational_Api_get_fanAck_extract_64_12_8E9F45(SF t_0, this, &v_64_17);
    if (match_62_62) {

      sfUpdateLoc(65);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port fanAck.  Expecting 'TemperatureControl.FanAck_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_64_17);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF t_TemperatureControl_TempControl_i_Operational_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_831682(t_4);
      None_831682_apply(SF &t_4);
      value = (Option_C5A124) (&t_4);
    }
  }
  if (!match_62_62) {
    match_62_62 = t_TemperatureControl_TempControl_i_Operational_Api_get_fanAck_extract_67_12_8E9F45(SF t_0, this);
    if (match_62_62) {
      DeclNewNone_831682(t_5);
      None_831682_apply(SF &t_5);
      value = (Option_C5A124) (&t_5);
    }
  }
  sfAssert(match_62_62, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_C5A124));
  return;
}

inline B t_TemperatureControl_TempControl_i_Operational_Api_get_setPoint_extract_74_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, t_TemperatureControl_TempControl_i_Operational_Api this, t_TemperatureControl_SetPoint_i *_v_74_55) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!t_TemperatureControl_SetPoint_i_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_74_55 = (t_TemperatureControl_SetPoint_i) t_TemperatureControl_SetPoint_i_Payload_value_(t_TemperatureControl_SetPoint_i_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

inline B t_TemperatureControl_TempControl_i_Operational_Api_get_setPoint_extract_75_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, t_TemperatureControl_TempControl_i_Operational_Api this, art_DataContent *_v_75_17) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_75_17 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

inline B t_TemperatureControl_TempControl_i_Operational_Api_get_setPoint_extract_78_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, t_TemperatureControl_TempControl_i_Operational_Api this) {
  return T;
}

void t_TemperatureControl_TempControl_i_Operational_Api_get_setPoint_(STACK_FRAME Option_EBB396 result, t_TemperatureControl_TempControl_i_Operational_Api this) {
  DeclNewStackFrame(caller, "TempControl_i_Api.scala", "t.TemperatureControl.TempControl_i_Operational_Api", "get_setPoint", 0);

  sfUpdateLoc(73);
  Option_EBB396 value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, t_TemperatureControl_TempControl_i_Operational_Api_setPoint_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_73_61 = F;
  if (!match_73_61) {
    t_TemperatureControl_SetPoint_i v_74_55;
    match_73_61 = t_TemperatureControl_TempControl_i_Operational_Api_get_setPoint_extract_74_12_8E9F45(SF t_0, this, &v_74_55);
    if (match_73_61) {
      DeclNewSome_D8D240(t_2);
      Some_D8D240_apply(SF &t_2, (t_TemperatureControl_SetPoint_i) v_74_55);
      value = (Option_EBB396) (&t_2);
    }
  }
  if (!match_73_61) {
    art_DataContent v_75_17;
    match_73_61 = t_TemperatureControl_TempControl_i_Operational_Api_get_setPoint_extract_75_12_8E9F45(SF t_0, this, &v_75_17);
    if (match_73_61) {

      sfUpdateLoc(76);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port setPoint.  Expecting 'TemperatureControl.SetPoint_i_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_75_17);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF t_TemperatureControl_TempControl_i_Operational_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_B473AE(t_4);
      None_B473AE_apply(SF &t_4);
      value = (Option_EBB396) (&t_4);
    }
  }
  if (!match_73_61) {
    match_73_61 = t_TemperatureControl_TempControl_i_Operational_Api_get_setPoint_extract_78_12_8E9F45(SF t_0, this);
    if (match_73_61) {
      DeclNewNone_B473AE(t_5);
      None_B473AE_apply(SF &t_5);
      value = (Option_EBB396) (&t_5);
    }
  }
  sfAssert(match_73_61, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_EBB396));
  return;
}

inline B t_TemperatureControl_TempControl_i_Operational_Api_get_tempChanged_extract_85_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, t_TemperatureControl_TempControl_i_Operational_Api this) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!art_Empty__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  return T;
}

inline B t_TemperatureControl_TempControl_i_Operational_Api_get_tempChanged_extract_86_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, t_TemperatureControl_TempControl_i_Operational_Api this, art_DataContent *_v_86_17) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_86_17 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

inline B t_TemperatureControl_TempControl_i_Operational_Api_get_tempChanged_extract_89_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, t_TemperatureControl_TempControl_i_Operational_Api this) {
  return T;
}

void t_TemperatureControl_TempControl_i_Operational_Api_get_tempChanged_(STACK_FRAME Option_C622DB result, t_TemperatureControl_TempControl_i_Operational_Api this) {
  DeclNewStackFrame(caller, "TempControl_i_Api.scala", "t.TemperatureControl.TempControl_i_Operational_Api", "get_tempChanged", 0);

  sfUpdateLoc(84);
  Option_C622DB value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, t_TemperatureControl_TempControl_i_Operational_Api_tempChanged_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_84_41 = F;
  if (!match_84_41) {
    match_84_41 = t_TemperatureControl_TempControl_i_Operational_Api_get_tempChanged_extract_85_12_8E9F45(SF t_0, this);
    if (match_84_41) {
      DeclNewart_Empty(t_3);
      art_Empty_apply(SF &t_3);
      DeclNewSome_4782C6(t_2);
      Some_4782C6_apply(SF &t_2, (art_Empty) (&t_3));
      value = (Option_C622DB) (&t_2);
    }
  }
  if (!match_84_41) {
    art_DataContent v_86_17;
    match_84_41 = t_TemperatureControl_TempControl_i_Operational_Api_get_tempChanged_extract_86_12_8E9F45(SF t_0, this, &v_86_17);
    if (match_84_41) {

      sfUpdateLoc(87);
      {
        DeclNewString(t_4);
        String_string_(SF (String) &t_4, string("Unexpected payload on port tempChanged.  Expecting 'Empty' but received "));
        art_DataContent_string_(SF (String) &t_4, v_86_17);
        String_string_(SF (String) &t_4, string(""));
        art_Art_logError(SF t_TemperatureControl_TempControl_i_Operational_Api_id_(this), (String) ((String) &t_4));
      }
      DeclNewNone_ED72E1(t_5);
      None_ED72E1_apply(SF &t_5);
      value = (Option_C622DB) (&t_5);
    }
  }
  if (!match_84_41) {
    match_84_41 = t_TemperatureControl_TempControl_i_Operational_Api_get_tempChanged_extract_89_12_8E9F45(SF t_0, this);
    if (match_84_41) {
      DeclNewNone_ED72E1(t_6);
      None_ED72E1_apply(SF &t_6);
      value = (Option_C622DB) (&t_6);
    }
  }
  sfAssert(match_84_41, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_C622DB));
  return;
}