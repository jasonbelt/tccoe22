#include <all.h>

// t.TemperatureControl.Fan_i_Operational_Api

B t_TemperatureControl_Fan_i_Operational_Api__eq(t_TemperatureControl_Fan_i_Operational_Api this, t_TemperatureControl_Fan_i_Operational_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->fanCmd_Id, other->fanCmd_Id)) return F;
  if (Z__ne(this->fanAck_Id, other->fanAck_Id)) return F;
  return T;
}

B t_TemperatureControl_Fan_i_Operational_Api__ne(t_TemperatureControl_Fan_i_Operational_Api this, t_TemperatureControl_Fan_i_Operational_Api other);

void t_TemperatureControl_Fan_i_Operational_Api_string_(STACK_FRAME String result, t_TemperatureControl_Fan_i_Operational_Api this) {
  DeclNewStackFrame(caller, "Fan_i_Api.scala", "t.TemperatureControl.Fan_i_Operational_Api", "string", 0);
  String_string_(SF result, string("Fan_i_Operational_Api("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->fanCmd_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->fanAck_Id);
  String_string_(SF result, string(")"));
}

void t_TemperatureControl_Fan_i_Operational_Api_cprint(t_TemperatureControl_Fan_i_Operational_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Fan_i_Operational_Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->fanCmd_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->fanAck_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B t_TemperatureControl_Fan_i_Operational_Api__is(STACK_FRAME void* this);
t_TemperatureControl_Fan_i_Operational_Api t_TemperatureControl_Fan_i_Operational_Api__as(STACK_FRAME void *this);

void t_TemperatureControl_Fan_i_Operational_Api_apply(STACK_FRAME t_TemperatureControl_Fan_i_Operational_Api this, Z id, Z fanCmd_Id, Z fanAck_Id) {
  DeclNewStackFrame(caller, "Fan_i_Api.scala", "t.TemperatureControl.Fan_i_Operational_Api", "apply", 0);
  this->id = id;
  this->fanCmd_Id = fanCmd_Id;
  this->fanAck_Id = fanAck_Id;
}

inline B t_TemperatureControl_Fan_i_Operational_Api_get_fanCmd_extract_43_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, t_TemperatureControl_Fan_i_Operational_Api this, t_TemperatureControl_FanCmd_Type *_v_43_51) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!t_TemperatureControl_FanCmd_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_43_51 = t_TemperatureControl_FanCmd_Payload_value_(t_TemperatureControl_FanCmd_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

inline B t_TemperatureControl_Fan_i_Operational_Api_get_fanCmd_extract_44_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, t_TemperatureControl_Fan_i_Operational_Api this, art_DataContent *_v_44_17) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_44_17 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

inline B t_TemperatureControl_Fan_i_Operational_Api_get_fanCmd_extract_47_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, t_TemperatureControl_Fan_i_Operational_Api this) {
  return T;
}

void t_TemperatureControl_Fan_i_Operational_Api_get_fanCmd_(STACK_FRAME Option_2B0611 result, t_TemperatureControl_Fan_i_Operational_Api this) {
  DeclNewStackFrame(caller, "Fan_i_Api.scala", "t.TemperatureControl.Fan_i_Operational_Api", "get_fanCmd", 0);

  sfUpdateLoc(42);
  Option_2B0611 value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, t_TemperatureControl_Fan_i_Operational_Api_fanCmd_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_42_62 = F;
  if (!match_42_62) {
    t_TemperatureControl_FanCmd_Type v_43_51;
    match_42_62 = t_TemperatureControl_Fan_i_Operational_Api_get_fanCmd_extract_43_12_8E9F45(SF t_0, this, &v_43_51);
    if (match_42_62) {
      DeclNewSome_779716(t_2);
      Some_779716_apply(SF &t_2, v_43_51);
      value = (Option_2B0611) (&t_2);
    }
  }
  if (!match_42_62) {
    art_DataContent v_44_17;
    match_42_62 = t_TemperatureControl_Fan_i_Operational_Api_get_fanCmd_extract_44_12_8E9F45(SF t_0, this, &v_44_17);
    if (match_42_62) {

      sfUpdateLoc(45);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port fanCmd.  Expecting 'TemperatureControl.FanCmd_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_44_17);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF t_TemperatureControl_Fan_i_Operational_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_380ACD(t_4);
      None_380ACD_apply(SF &t_4);
      value = (Option_2B0611) (&t_4);
    }
  }
  if (!match_42_62) {
    match_42_62 = t_TemperatureControl_Fan_i_Operational_Api_get_fanCmd_extract_47_12_8E9F45(SF t_0, this);
    if (match_42_62) {
      DeclNewNone_380ACD(t_5);
      None_380ACD_apply(SF &t_5);
      value = (Option_2B0611) (&t_5);
    }
  }
  sfAssert(match_42_62, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_2B0611));
  return;
}