#include <all.h>

// t.TemperatureControl.TempControl_i_tcp_tempControl_Bridge.EntryPoints

B t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints__eq(t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints this, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints other) {
  if (Z__ne(this->TempControl_i_tcp_tempControl_BridgeId, other->TempControl_i_tcp_tempControl_BridgeId)) return F;
  if (Z__ne(this->currentTemp_Id, other->currentTemp_Id)) return F;
  if (Z__ne(this->fanAck_Id, other->fanAck_Id)) return F;
  if (Z__ne(this->setPoint_Id, other->setPoint_Id)) return F;
  if (Z__ne(this->fanCmd_Id, other->fanCmd_Id)) return F;
  if (Z__ne(this->tempChanged_Id, other->tempChanged_Id)) return F;
  if (Option_9AF35E__ne((Option_9AF35E) &this->dispatchTriggers, (Option_9AF35E) &other->dispatchTriggers)) return F;
  if (t_TemperatureControl_TempControl_i_Initialization_Api__ne((t_TemperatureControl_TempControl_i_Initialization_Api) &this->initialization_api, (t_TemperatureControl_TempControl_i_Initialization_Api) &other->initialization_api)) return F;
  if (t_TemperatureControl_TempControl_i_Operational_Api__ne((t_TemperatureControl_TempControl_i_Operational_Api) &this->operational_api, (t_TemperatureControl_TempControl_i_Operational_Api) &other->operational_api)) return F;
  return T;
}

B t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints__ne(t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints this, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints other);

void t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints_string_(STACK_FRAME String result, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "TempControl_i_tcp_tempControl_Bridge.scala", "t.TemperatureControl.TempControl_i_tcp_tempControl_Bridge.EntryPoints", "string", 0);
  String_string_(SF result, string("EntryPoints("));
  String sep = string(", ");
  Z_string_(SF result, this->TempControl_i_tcp_tempControl_BridgeId);
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
  String_string_(SF result, sep);
  Option_9AF35E_string_(SF result, (Option_9AF35E) &this->dispatchTriggers);
  String_string_(SF result, sep);
  t_TemperatureControl_TempControl_i_Initialization_Api_string_(SF result, (t_TemperatureControl_TempControl_i_Initialization_Api) &this->initialization_api);
  String_string_(SF result, sep);
  t_TemperatureControl_TempControl_i_Operational_Api_string_(SF result, (t_TemperatureControl_TempControl_i_Operational_Api) &this->operational_api);
  String_string_(SF result, string(")"));
}

void t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints_cprint(t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("EntryPoints("), isOut);
  String sep = string(", ");
  Z_cprint(this->TempControl_i_tcp_tempControl_BridgeId, isOut);
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
  String_cprint(sep, isOut);
  Option_9AF35E_cprint((Option_9AF35E) &this->dispatchTriggers, isOut);
  String_cprint(sep, isOut);
  t_TemperatureControl_TempControl_i_Initialization_Api_cprint((t_TemperatureControl_TempControl_i_Initialization_Api) &this->initialization_api, isOut);
  String_cprint(sep, isOut);
  t_TemperatureControl_TempControl_i_Operational_Api_cprint((t_TemperatureControl_TempControl_i_Operational_Api) &this->operational_api, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints__is(STACK_FRAME void* this);
t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints__as(STACK_FRAME void *this);

void t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints_apply(STACK_FRAME t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints this, Z TempControl_i_tcp_tempControl_BridgeId, Z currentTemp_Id, Z fanAck_Id, Z setPoint_Id, Z fanCmd_Id, Z tempChanged_Id, Option_9AF35E dispatchTriggers, t_TemperatureControl_TempControl_i_Initialization_Api initialization_api, t_TemperatureControl_TempControl_i_Operational_Api operational_api) {
  DeclNewStackFrame(caller, "TempControl_i_tcp_tempControl_Bridge.scala", "t.TemperatureControl.TempControl_i_tcp_tempControl_Bridge.EntryPoints", "apply", 0);
  this->TempControl_i_tcp_tempControl_BridgeId = TempControl_i_tcp_tempControl_BridgeId;
  this->currentTemp_Id = currentTemp_Id;
  this->fanAck_Id = fanAck_Id;
  this->setPoint_Id = setPoint_Id;
  this->fanCmd_Id = fanCmd_Id;
  this->tempChanged_Id = tempChanged_Id;
  Type_assign(&this->dispatchTriggers, dispatchTriggers, sizeof(union Option_9AF35E));
  Type_assign(&this->initialization_api, initialization_api, sizeof(struct t_TemperatureControl_TempControl_i_Initialization_Api));
  Type_assign(&this->operational_api, operational_api, sizeof(struct t_TemperatureControl_TempControl_i_Operational_Api));
  {
    sfUpdateLoc(104);
    STATIC_ASSERT(1 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_0);
    t_0.size = (int8_t) 1;
    IS_82ABD8_up(&t_0, 0, (Z) t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints_currentTemp_Id_(this));
    Type_assign(&this->dataInPortIds, (&t_0), sizeof(struct IS_82ABD8));
  }
  {
    sfUpdateLoc(106);
    STATIC_ASSERT(3 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_1);
    t_1.size = (int8_t) 3;
    IS_82ABD8_up(&t_1, 0, (Z) t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints_fanAck_Id_(this));
    IS_82ABD8_up(&t_1, 1, (Z) t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints_setPoint_Id_(this));
    IS_82ABD8_up(&t_1, 2, (Z) t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints_tempChanged_Id_(this));
    Type_assign(&this->eventInPortIds, (&t_1), sizeof(struct IS_82ABD8));
  }
  {
    sfUpdateLoc(110);
    STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_2);
    t_2.size = (int8_t) 0;
    Type_assign(&this->dataOutPortIds, (&t_2), sizeof(struct IS_82ABD8));
  }
  {
    sfUpdateLoc(112);
    STATIC_ASSERT(1 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_3);
    t_3.size = (int8_t) 1;
    IS_82ABD8_up(&t_3, 0, (Z) t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints_fanCmd_Id_(this));
    Type_assign(&this->eventOutPortIds, (&t_3), sizeof(struct IS_82ABD8));
  }
}

Unit t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints_initialise_(STACK_FRAME t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "TempControl_i_tcp_tempControl_Bridge.scala", "t.TemperatureControl.TempControl_i_tcp_tempControl_Bridge.EntryPoints", "initialise", 0);

  sfUpdateLoc(222);
  {
    t_TemperatureControl_TempControl_i_tcp_tempControl_initialise(SF (t_TemperatureControl_TempControl_i_Initialization_Api) t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints_initialization_api_(this));
  }

  sfUpdateLoc(223);
  {
    art_Art_sendOutput(SF (IS_82ABD8) t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints_dataOutPortIds_(this));
  }
}

void t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints_filter_(STACK_FRAME IS_82ABD8 result, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints this, IS_82ABD8 receivedEvents, IS_82ABD8 triggers) {
  DeclNewStackFrame(caller, "TempControl_i_tcp_tempControl_Bridge.scala", "t.TemperatureControl.TempControl_i_tcp_tempControl_Bridge.EntryPoints.compute", "filter", 0);

  sfUpdateLoc(117);
  DeclNewIS_82ABD8(_r);
  IS_82ABD8 r = (IS_82ABD8) &_r;
  {
    STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_0);
    t_0.size = (int8_t) 0;
    Type_assign(r, (&t_0), sizeof(struct IS_82ABD8));
  }

  sfUpdateLoc(118);
  ops_ISZOps_A6D40E opsTriggers;
  DeclNewops_ISZOps_A6D40E(t_1);
  ops_ISZOps_A6D40E_apply(SF &t_1, (IS_82ABD8) triggers);
  opsTriggers = (ops_ISZOps_A6D40E) (&t_1);

  sfUpdateLoc(119);
  {
    IS_82ABD8 t_5 = receivedEvents;
    int8_t t_6 = (receivedEvents)->size;
    for (int8_t t_7 = 0; t_7 < t_6; t_7++) {
      Z e = t_5->value[t_7];

      sfUpdateLoc(120);
      B t_2;
      {
        B t_3 = ops_ISZOps_A6D40E_contains_(SF opsTriggers, e);
        t_2 = t_3;
      }
      if (t_2) {

        sfUpdateLoc(121);
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

inline B t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints_compute_extract_128_11(STACK_FRAME_SF art_DispatchStatus t_0, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints this, IS_82ABD8 *_receivedEvents) {
  if (!art_EventTriggered__is(SF t_0)) return F;
  *_receivedEvents = (IS_82ABD8) art_EventTriggered_portIds_(art_EventTriggered__as(SF t_0));
  return T;
}

inline B t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints_compute_extract_139_15_8E9F45(STACK_FRAME_SF Option_8E9F45 t_7, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints this, t_TemperatureControl_FanAck_Type *_value) {
  if (!Some_D29615__is(SF t_7)) return F;
  if (!t_TemperatureControl_FanAck_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_7)))) return F;
  *_value = t_TemperatureControl_FanAck_Payload_value_(t_TemperatureControl_FanAck_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_7))));
  return T;
}

inline B t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints_compute_extract_145_15_8E9F45(STACK_FRAME_SF Option_8E9F45 t_10, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints this, t_TemperatureControl_SetPoint_i *_value) {
  if (!Some_D29615__is(SF t_10)) return F;
  if (!t_TemperatureControl_SetPoint_i_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_10)))) return F;
  *_value = (t_TemperatureControl_SetPoint_i) t_TemperatureControl_SetPoint_i_Payload_value_(t_TemperatureControl_SetPoint_i_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_10))));
  return T;
}

Unit t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints_compute_(STACK_FRAME t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "TempControl_i_tcp_tempControl_Bridge.scala", "t.TemperatureControl.TempControl_i_tcp_tempControl_Bridge.EntryPoints", "compute", 0);

  sfUpdateLoc(128);
  art_DispatchStatus t_0;
  DeclNewart_DispatchStatus(t_1);
  art_Art_dispatchStatus(SF (art_DispatchStatus) &t_1, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints_TempControl_i_tcp_tempControl_BridgeId_(this));
  t_0 = (art_DispatchStatus) ((art_DispatchStatus) &t_1);
  IS_82ABD8 receivedEvents;
  sfAssert(t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints_compute_extract_128_11(SF t_0, this, &receivedEvents), "Error during var pattern matching.");

  sfUpdateLoc(131);
  IS_82ABD8 dispatchableEventPorts;
  B t_2 = Option_9AF35E_isEmpty_(SF t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints_dispatchTriggers_(this));
  DeclNewIS_82ABD8(t_3);
  if (t_2) {
    Type_assign(&t_3, receivedEvents, sizeof(struct IS_82ABD8));
  } else {
    DeclNewIS_82ABD8(t_4);
    Option_9AF35E_get_(SF (IS_82ABD8) &t_4, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints_dispatchTriggers_(this));
    DeclNewIS_82ABD8(t_5);
    t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints_filter_(SF (IS_82ABD8) &t_5, this, (IS_82ABD8) receivedEvents, (IS_82ABD8) ((IS_82ABD8) &t_4));
    Type_assign(&t_3, ((IS_82ABD8) &t_5), sizeof(struct IS_82ABD8));
  }
  dispatchableEventPorts = (IS_82ABD8) &t_3;

  sfUpdateLoc(135);
  {
    art_Art_receiveInput(SF (IS_82ABD8) t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints_eventInPortIds_(this), (IS_82ABD8) t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints_dataInPortIds_(this));
  }

  sfUpdateLoc(137);
  {
    IS_82ABD8 t_13 = dispatchableEventPorts;
    int8_t t_14 = (dispatchableEventPorts)->size;
    for (int8_t t_15 = 0; t_15 < t_14; t_15++) {
      Z portId = t_13->value[t_15];

      sfUpdateLoc(138);
      B t_6;
      {
        t_6 = Z__eq(portId, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints_fanAck_Id_(this));
      }
      if (t_6) {

        sfUpdateLoc(139);
        Option_8E9F45 t_7;
        DeclNewOption_8E9F45(t_8);
        art_Art_getValue(SF (Option_8E9F45) &t_8, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints_fanAck_Id_(this));
        t_7 = (Option_8E9F45) ((Option_8E9F45) &t_8);
        t_TemperatureControl_FanAck_Type value;
        sfAssert(t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints_compute_extract_139_15_8E9F45(SF t_7, this, &value), "Error during var pattern matching.");

        sfUpdateLoc(142);
        {
          t_TemperatureControl_TempControl_i_tcp_tempControl_handle_fanAck(SF (t_TemperatureControl_TempControl_i_Operational_Api) t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints_operational_api_(this), value);
        }
      } else {

        sfUpdateLoc(144);
        B t_9;
        {
          t_9 = Z__eq(portId, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints_setPoint_Id_(this));
        }
        if (t_9) {

          sfUpdateLoc(145);
          Option_8E9F45 t_10;
          DeclNewOption_8E9F45(t_11);
          art_Art_getValue(SF (Option_8E9F45) &t_11, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints_setPoint_Id_(this));
          t_10 = (Option_8E9F45) ((Option_8E9F45) &t_11);
          t_TemperatureControl_SetPoint_i value;
          sfAssert(t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints_compute_extract_145_15_8E9F45(SF t_10, this, &value), "Error during var pattern matching.");

          sfUpdateLoc(148);
          {
            t_TemperatureControl_TempControl_i_tcp_tempControl_handle_setPoint(SF (t_TemperatureControl_TempControl_i_Operational_Api) t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints_operational_api_(this), (t_TemperatureControl_SetPoint_i) value);
          }
        } else {

          sfUpdateLoc(150);
          B t_12;
          {
            t_12 = Z__eq(portId, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints_tempChanged_Id_(this));
          }
          if (t_12) {

            sfUpdateLoc(152);
            {
              t_TemperatureControl_TempControl_i_tcp_tempControl_handle_tempChanged(SF (t_TemperatureControl_TempControl_i_Operational_Api) t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints_operational_api_(this));
            }
          }
        }
      }
    }
  }

  sfUpdateLoc(156);
  {
    art_Art_sendOutput(SF (IS_82ABD8) t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints_dataOutPortIds_(this));
  }
}

Unit t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints_finalise_(STACK_FRAME t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "TempControl_i_tcp_tempControl_Bridge.scala", "t.TemperatureControl.TempControl_i_tcp_tempControl_Bridge.EntryPoints", "finalise", 0);

  sfUpdateLoc(217);
  {
    t_TemperatureControl_TempControl_i_tcp_tempControl_finalise(SF (t_TemperatureControl_TempControl_i_Operational_Api) t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints_operational_api_(this));
  }
}