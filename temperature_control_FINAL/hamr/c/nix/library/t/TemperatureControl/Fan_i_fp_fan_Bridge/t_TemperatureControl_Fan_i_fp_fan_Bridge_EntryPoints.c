#include <all.h>

// t.TemperatureControl.Fan_i_fp_fan_Bridge.EntryPoints

B t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints__eq(t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints this, t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints other) {
  if (Z__ne(this->Fan_i_fp_fan_BridgeId, other->Fan_i_fp_fan_BridgeId)) return F;
  if (Z__ne(this->fanCmd_Id, other->fanCmd_Id)) return F;
  if (Z__ne(this->fanAck_Id, other->fanAck_Id)) return F;
  if (Option_9AF35E__ne((Option_9AF35E) &this->dispatchTriggers, (Option_9AF35E) &other->dispatchTriggers)) return F;
  if (t_TemperatureControl_Fan_i_Initialization_Api__ne((t_TemperatureControl_Fan_i_Initialization_Api) &this->initialization_api, (t_TemperatureControl_Fan_i_Initialization_Api) &other->initialization_api)) return F;
  if (t_TemperatureControl_Fan_i_Operational_Api__ne((t_TemperatureControl_Fan_i_Operational_Api) &this->operational_api, (t_TemperatureControl_Fan_i_Operational_Api) &other->operational_api)) return F;
  return T;
}

B t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints__ne(t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints this, t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints other);

void t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints_string_(STACK_FRAME String result, t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "Fan_i_fp_fan_Bridge.scala", "t.TemperatureControl.Fan_i_fp_fan_Bridge.EntryPoints", "string", 0);
  String_string_(SF result, string("EntryPoints("));
  String sep = string(", ");
  Z_string_(SF result, this->Fan_i_fp_fan_BridgeId);
  String_string_(SF result, sep);
  Z_string_(SF result, this->fanCmd_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->fanAck_Id);
  String_string_(SF result, sep);
  Option_9AF35E_string_(SF result, (Option_9AF35E) &this->dispatchTriggers);
  String_string_(SF result, sep);
  t_TemperatureControl_Fan_i_Initialization_Api_string_(SF result, (t_TemperatureControl_Fan_i_Initialization_Api) &this->initialization_api);
  String_string_(SF result, sep);
  t_TemperatureControl_Fan_i_Operational_Api_string_(SF result, (t_TemperatureControl_Fan_i_Operational_Api) &this->operational_api);
  String_string_(SF result, string(")"));
}

void t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints_cprint(t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("EntryPoints("), isOut);
  String sep = string(", ");
  Z_cprint(this->Fan_i_fp_fan_BridgeId, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->fanCmd_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->fanAck_Id, isOut);
  String_cprint(sep, isOut);
  Option_9AF35E_cprint((Option_9AF35E) &this->dispatchTriggers, isOut);
  String_cprint(sep, isOut);
  t_TemperatureControl_Fan_i_Initialization_Api_cprint((t_TemperatureControl_Fan_i_Initialization_Api) &this->initialization_api, isOut);
  String_cprint(sep, isOut);
  t_TemperatureControl_Fan_i_Operational_Api_cprint((t_TemperatureControl_Fan_i_Operational_Api) &this->operational_api, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints__is(STACK_FRAME void* this);
t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints__as(STACK_FRAME void *this);

void t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints_apply(STACK_FRAME t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints this, Z Fan_i_fp_fan_BridgeId, Z fanCmd_Id, Z fanAck_Id, Option_9AF35E dispatchTriggers, t_TemperatureControl_Fan_i_Initialization_Api initialization_api, t_TemperatureControl_Fan_i_Operational_Api operational_api) {
  DeclNewStackFrame(caller, "Fan_i_fp_fan_Bridge.scala", "t.TemperatureControl.Fan_i_fp_fan_Bridge.EntryPoints", "apply", 0);
  this->Fan_i_fp_fan_BridgeId = Fan_i_fp_fan_BridgeId;
  this->fanCmd_Id = fanCmd_Id;
  this->fanAck_Id = fanAck_Id;
  Type_assign(&this->dispatchTriggers, dispatchTriggers, sizeof(union Option_9AF35E));
  Type_assign(&this->initialization_api, initialization_api, sizeof(struct t_TemperatureControl_Fan_i_Initialization_Api));
  Type_assign(&this->operational_api, operational_api, sizeof(struct t_TemperatureControl_Fan_i_Operational_Api));
  {
    sfUpdateLoc(84);
    STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_0);
    t_0.size = (int8_t) 0;
    Type_assign(&this->dataInPortIds, (&t_0), sizeof(struct IS_82ABD8));
  }
  {
    sfUpdateLoc(86);
    STATIC_ASSERT(1 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_1);
    t_1.size = (int8_t) 1;
    IS_82ABD8_up(&t_1, 0, (Z) t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints_fanCmd_Id_(this));
    Type_assign(&this->eventInPortIds, (&t_1), sizeof(struct IS_82ABD8));
  }
  {
    sfUpdateLoc(88);
    STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_2);
    t_2.size = (int8_t) 0;
    Type_assign(&this->dataOutPortIds, (&t_2), sizeof(struct IS_82ABD8));
  }
  {
    sfUpdateLoc(90);
    STATIC_ASSERT(1 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_3);
    t_3.size = (int8_t) 1;
    IS_82ABD8_up(&t_3, 0, (Z) t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints_fanAck_Id_(this));
    Type_assign(&this->eventOutPortIds, (&t_3), sizeof(struct IS_82ABD8));
  }
}

Unit t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints_initialise_(STACK_FRAME t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "Fan_i_fp_fan_Bridge.scala", "t.TemperatureControl.Fan_i_fp_fan_Bridge.EntryPoints", "initialise", 0);

  sfUpdateLoc(180);
  {
    t_TemperatureControl_Fan_i_fp_fan_initialise(SF (t_TemperatureControl_Fan_i_Initialization_Api) t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints_initialization_api_(this));
  }

  sfUpdateLoc(181);
  {
    art_Art_sendOutput(SF (IS_82ABD8) t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints_dataOutPortIds_(this));
  }
}

void t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints_filter_(STACK_FRAME IS_82ABD8 result, t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints this, IS_82ABD8 receivedEvents, IS_82ABD8 triggers) {
  DeclNewStackFrame(caller, "Fan_i_fp_fan_Bridge.scala", "t.TemperatureControl.Fan_i_fp_fan_Bridge.EntryPoints.compute", "filter", 0);

  sfUpdateLoc(95);
  DeclNewIS_82ABD8(_r);
  IS_82ABD8 r = (IS_82ABD8) &_r;
  {
    STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_0);
    t_0.size = (int8_t) 0;
    Type_assign(r, (&t_0), sizeof(struct IS_82ABD8));
  }

  sfUpdateLoc(96);
  ops_ISZOps_A6D40E opsTriggers;
  DeclNewops_ISZOps_A6D40E(t_1);
  ops_ISZOps_A6D40E_apply(SF &t_1, (IS_82ABD8) triggers);
  opsTriggers = (ops_ISZOps_A6D40E) (&t_1);

  sfUpdateLoc(97);
  {
    IS_82ABD8 t_5 = receivedEvents;
    int8_t t_6 = (receivedEvents)->size;
    for (int8_t t_7 = 0; t_7 < t_6; t_7++) {
      Z e = t_5->value[t_7];

      sfUpdateLoc(98);
      B t_2;
      {
        B t_3 = ops_ISZOps_A6D40E_contains_(SF opsTriggers, e);
        t_2 = t_3;
      }
      if (t_2) {

        sfUpdateLoc(99);
        {
          DeclNewIS_82ABD8(t_4);
          IS_82ABD8__append(SF (IS_82ABD8) &t_4, r, e);
          Type_assign(r, ((IS_82ABD8) &t_4), sizeof(struct IS_82ABD8));
        }
      }
    }
  }
  Type_assign(result, r, sizeof(struct IS_82ABD8));
  return;
}

inline B t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints_compute_extract_106_11(STACK_FRAME_SF art_DispatchStatus t_0, t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints this, IS_82ABD8 *_receivedEvents) {
  if (!art_EventTriggered__is(SF t_0)) return F;
  *_receivedEvents = (IS_82ABD8) art_EventTriggered_portIds_(art_EventTriggered__as(SF t_0));
  return T;
}

inline B t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints_compute_extract_117_15_8E9F45(STACK_FRAME_SF Option_8E9F45 t_7, t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints this, t_TemperatureControl_FanCmd_Type *_value) {
  if (!Some_D29615__is(SF t_7)) return F;
  if (!t_TemperatureControl_FanCmd_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_7)))) return F;
  *_value = t_TemperatureControl_FanCmd_Payload_value_(t_TemperatureControl_FanCmd_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_7))));
  return T;
}

Unit t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints_compute_(STACK_FRAME t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "Fan_i_fp_fan_Bridge.scala", "t.TemperatureControl.Fan_i_fp_fan_Bridge.EntryPoints", "compute", 0);

  sfUpdateLoc(106);
  art_DispatchStatus t_0;
  DeclNewart_DispatchStatus(t_1);
  art_Art_dispatchStatus(SF (art_DispatchStatus) &t_1, t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints_Fan_i_fp_fan_BridgeId_(this));
  t_0 = (art_DispatchStatus) ((art_DispatchStatus) &t_1);
  IS_82ABD8 receivedEvents;
  sfAssert(t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints_compute_extract_106_11(SF t_0, this, &receivedEvents), "Error during var pattern matching.");

  sfUpdateLoc(109);
  IS_82ABD8 dispatchableEventPorts;
  B t_2 = Option_9AF35E_isEmpty_(SF t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints_dispatchTriggers_(this));
  DeclNewIS_82ABD8(t_3);
  if (t_2) {
    Type_assign(&t_3, receivedEvents, sizeof(struct IS_82ABD8));
  } else {
    DeclNewIS_82ABD8(t_4);
    Option_9AF35E_get_(SF (IS_82ABD8) &t_4, t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints_dispatchTriggers_(this));
    DeclNewIS_82ABD8(t_5);
    t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints_filter_(SF (IS_82ABD8) &t_5, this, (IS_82ABD8) receivedEvents, (IS_82ABD8) ((IS_82ABD8) &t_4));
    Type_assign(&t_3, ((IS_82ABD8) &t_5), sizeof(struct IS_82ABD8));
  }
  dispatchableEventPorts = (IS_82ABD8) &t_3;

  sfUpdateLoc(113);
  {
    art_Art_receiveInput(SF (IS_82ABD8) t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints_eventInPortIds_(this), (IS_82ABD8) t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints_dataInPortIds_(this));
  }

  sfUpdateLoc(115);
  {
    IS_82ABD8 t_9 = dispatchableEventPorts;
    int8_t t_10 = (dispatchableEventPorts)->size;
    for (int8_t t_11 = 0; t_11 < t_10; t_11++) {
      Z portId = t_9->value[t_11];

      sfUpdateLoc(116);
      B t_6;
      {
        t_6 = Z__eq(portId, t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints_fanCmd_Id_(this));
      }
      if (t_6) {

        sfUpdateLoc(117);
        Option_8E9F45 t_7;
        DeclNewOption_8E9F45(t_8);
        art_Art_getValue(SF (Option_8E9F45) &t_8, t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints_fanCmd_Id_(this));
        t_7 = (Option_8E9F45) ((Option_8E9F45) &t_8);
        t_TemperatureControl_FanCmd_Type value;
        sfAssert(t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints_compute_extract_117_15_8E9F45(SF t_7, this, &value), "Error during var pattern matching.");

        sfUpdateLoc(120);
        {
          t_TemperatureControl_Fan_i_fp_fan_handle_fanCmd(SF (t_TemperatureControl_Fan_i_Operational_Api) t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints_operational_api_(this), value);
        }
      }
    }
  }

  sfUpdateLoc(124);
  {
    art_Art_sendOutput(SF (IS_82ABD8) t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints_dataOutPortIds_(this));
  }
}

Unit t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints_finalise_(STACK_FRAME t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "Fan_i_fp_fan_Bridge.scala", "t.TemperatureControl.Fan_i_fp_fan_Bridge.EntryPoints", "finalise", 0);

  sfUpdateLoc(175);
  {
    t_TemperatureControl_Fan_i_fp_fan_finalise(SF (t_TemperatureControl_Fan_i_Operational_Api) t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints_operational_api_(this));
  }
}