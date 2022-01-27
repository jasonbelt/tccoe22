#include <all.h>

// t.TemperatureControl.TempSensor_i_tsp_tempSensor_Bridge.EntryPoints

B t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints__eq(t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints this, t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints other) {
  if (Z__ne(this->TempSensor_i_tsp_tempSensor_BridgeId, other->TempSensor_i_tsp_tempSensor_BridgeId)) return F;
  if (Z__ne(this->currentTemp_Id, other->currentTemp_Id)) return F;
  if (Z__ne(this->tempChanged_Id, other->tempChanged_Id)) return F;
  if (Option_9AF35E__ne((Option_9AF35E) &this->dispatchTriggers, (Option_9AF35E) &other->dispatchTriggers)) return F;
  if (t_TemperatureControl_TempSensor_i_Initialization_Api__ne((t_TemperatureControl_TempSensor_i_Initialization_Api) &this->initialization_api, (t_TemperatureControl_TempSensor_i_Initialization_Api) &other->initialization_api)) return F;
  if (t_TemperatureControl_TempSensor_i_Operational_Api__ne((t_TemperatureControl_TempSensor_i_Operational_Api) &this->operational_api, (t_TemperatureControl_TempSensor_i_Operational_Api) &other->operational_api)) return F;
  return T;
}

B t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints__ne(t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints this, t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints other);

void t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints_string_(STACK_FRAME String result, t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "TempSensor_i_tsp_tempSensor_Bridge.scala", "t.TemperatureControl.TempSensor_i_tsp_tempSensor_Bridge.EntryPoints", "string", 0);
  String_string_(SF result, string("EntryPoints("));
  String sep = string(", ");
  Z_string_(SF result, this->TempSensor_i_tsp_tempSensor_BridgeId);
  String_string_(SF result, sep);
  Z_string_(SF result, this->currentTemp_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->tempChanged_Id);
  String_string_(SF result, sep);
  Option_9AF35E_string_(SF result, (Option_9AF35E) &this->dispatchTriggers);
  String_string_(SF result, sep);
  t_TemperatureControl_TempSensor_i_Initialization_Api_string_(SF result, (t_TemperatureControl_TempSensor_i_Initialization_Api) &this->initialization_api);
  String_string_(SF result, sep);
  t_TemperatureControl_TempSensor_i_Operational_Api_string_(SF result, (t_TemperatureControl_TempSensor_i_Operational_Api) &this->operational_api);
  String_string_(SF result, string(")"));
}

void t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints_cprint(t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("EntryPoints("), isOut);
  String sep = string(", ");
  Z_cprint(this->TempSensor_i_tsp_tempSensor_BridgeId, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->currentTemp_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->tempChanged_Id, isOut);
  String_cprint(sep, isOut);
  Option_9AF35E_cprint((Option_9AF35E) &this->dispatchTriggers, isOut);
  String_cprint(sep, isOut);
  t_TemperatureControl_TempSensor_i_Initialization_Api_cprint((t_TemperatureControl_TempSensor_i_Initialization_Api) &this->initialization_api, isOut);
  String_cprint(sep, isOut);
  t_TemperatureControl_TempSensor_i_Operational_Api_cprint((t_TemperatureControl_TempSensor_i_Operational_Api) &this->operational_api, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints__is(STACK_FRAME void* this);
t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints__as(STACK_FRAME void *this);

void t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints_apply(STACK_FRAME t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints this, Z TempSensor_i_tsp_tempSensor_BridgeId, Z currentTemp_Id, Z tempChanged_Id, Option_9AF35E dispatchTriggers, t_TemperatureControl_TempSensor_i_Initialization_Api initialization_api, t_TemperatureControl_TempSensor_i_Operational_Api operational_api) {
  DeclNewStackFrame(caller, "TempSensor_i_tsp_tempSensor_Bridge.scala", "t.TemperatureControl.TempSensor_i_tsp_tempSensor_Bridge.EntryPoints", "apply", 0);
  this->TempSensor_i_tsp_tempSensor_BridgeId = TempSensor_i_tsp_tempSensor_BridgeId;
  this->currentTemp_Id = currentTemp_Id;
  this->tempChanged_Id = tempChanged_Id;
  Type_assign(&this->dispatchTriggers, dispatchTriggers, sizeof(union Option_9AF35E));
  Type_assign(&this->initialization_api, initialization_api, sizeof(struct t_TemperatureControl_TempSensor_i_Initialization_Api));
  Type_assign(&this->operational_api, operational_api, sizeof(struct t_TemperatureControl_TempSensor_i_Operational_Api));
  {
    sfUpdateLoc(84);
    STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_0);
    t_0.size = (int8_t) 0;
    Type_assign(&this->dataInPortIds, (&t_0), sizeof(struct IS_82ABD8));
  }
  {
    sfUpdateLoc(86);
    STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_1);
    t_1.size = (int8_t) 0;
    Type_assign(&this->eventInPortIds, (&t_1), sizeof(struct IS_82ABD8));
  }
  {
    sfUpdateLoc(88);
    STATIC_ASSERT(1 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_2);
    t_2.size = (int8_t) 1;
    IS_82ABD8_up(&t_2, 0, (Z) t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints_currentTemp_Id_(this));
    Type_assign(&this->dataOutPortIds, (&t_2), sizeof(struct IS_82ABD8));
  }
  {
    sfUpdateLoc(90);
    STATIC_ASSERT(1 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_3);
    t_3.size = (int8_t) 1;
    IS_82ABD8_up(&t_3, 0, (Z) t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints_tempChanged_Id_(this));
    Type_assign(&this->eventOutPortIds, (&t_3), sizeof(struct IS_82ABD8));
  }
}

Unit t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints_initialise_(STACK_FRAME t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "TempSensor_i_tsp_tempSensor_Bridge.scala", "t.TemperatureControl.TempSensor_i_tsp_tempSensor_Bridge.EntryPoints", "initialise", 0);

  sfUpdateLoc(128);
  {
    t_TemperatureControl_TempSensor_i_tsp_tempSensor_initialise(SF (t_TemperatureControl_TempSensor_i_Initialization_Api) t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints_initialization_api_(this));
  }

  sfUpdateLoc(129);
  {
    art_Art_sendOutput(SF (IS_82ABD8) t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints_dataOutPortIds_(this));
  }
}

Unit t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints_compute_(STACK_FRAME t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "TempSensor_i_tsp_tempSensor_Bridge.scala", "t.TemperatureControl.TempSensor_i_tsp_tempSensor_Bridge.EntryPoints", "compute", 0);

  sfUpdateLoc(93);
  {
    art_Art_receiveInput(SF (IS_82ABD8) t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints_eventInPortIds_(this), (IS_82ABD8) t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints_dataInPortIds_(this));
  }

  sfUpdateLoc(96);
  {
    t_TemperatureControl_TempSensor_i_tsp_tempSensor_timeTriggered(SF (t_TemperatureControl_TempSensor_i_Operational_Api) t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints_operational_api_(this));
  }

  sfUpdateLoc(98);
  {
    art_Art_sendOutput(SF (IS_82ABD8) t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints_dataOutPortIds_(this));
  }
}

Unit t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints_finalise_(STACK_FRAME t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "TempSensor_i_tsp_tempSensor_Bridge.scala", "t.TemperatureControl.TempSensor_i_tsp_tempSensor_Bridge.EntryPoints", "finalise", 0);

  sfUpdateLoc(123);
  {
    t_TemperatureControl_TempSensor_i_tsp_tempSensor_finalise(SF (t_TemperatureControl_TempSensor_i_Operational_Api) t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints_operational_api_(this));
  }
}