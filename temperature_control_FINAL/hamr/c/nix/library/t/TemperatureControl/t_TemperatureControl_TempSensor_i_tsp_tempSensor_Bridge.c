#include <all.h>

B t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_initialized_ = F;

union Option_87C81A _t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_c_initialization_api;
union Option_10368D _t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_c_operational_api;

void t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_init(STACK_FRAME_ONLY) {
  if (t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_initialized_) return;
  t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_initialized_ = T;
  DeclNewStackFrame(caller, "TempSensor_i_tsp_tempSensor_Bridge.scala", "t.TemperatureControl.TempSensor_i_tsp_tempSensor_Bridge", "<init>", 0);
  t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_init_c_initialization_api(SF_LAST);
  t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_init_c_operational_api(SF_LAST);
}

Option_87C81A t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_c_initialization_api(STACK_FRAME_ONLY) {
  t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_init(CALLER_LAST);
  return (Option_87C81A) &_t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_c_initialization_api;
}

void t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_c_initialization_api_a(STACK_FRAME Option_87C81A p_c_initialization_api) {
  t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_init(CALLER_LAST);
  Type_assign(&_t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_c_initialization_api, p_c_initialization_api, sizeof(union Option_87C81A));
}

Option_10368D t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_c_operational_api(STACK_FRAME_ONLY) {
  t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_init(CALLER_LAST);
  return (Option_10368D) &_t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_c_operational_api;
}

void t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_c_operational_api_a(STACK_FRAME Option_10368D p_c_operational_api) {
  t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_init(CALLER_LAST);
  Type_assign(&_t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_c_operational_api, p_c_operational_api, sizeof(union Option_10368D));
}

// t.TemperatureControl.TempSensor_i_tsp_tempSensor_Bridge

B t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge__eq(t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge this, t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge other) {
  if (Z__ne(this->id, other->id)) return F;
  if (String__ne((String) &this->name, (String) &other->name)) return F;
  if (art_DispatchPropertyProtocol__ne((art_DispatchPropertyProtocol) &this->dispatchProtocol, (art_DispatchPropertyProtocol) &other->dispatchProtocol)) return F;
  if (Option_9AF35E__ne((Option_9AF35E) &this->dispatchTriggers, (Option_9AF35E) &other->dispatchTriggers)) return F;
  if (art_Port_7B28AF__ne((art_Port_7B28AF) &this->currentTemp, (art_Port_7B28AF) &other->currentTemp)) return F;
  if (art_Port_9CBF18__ne((art_Port_9CBF18) &this->tempChanged, (art_Port_9CBF18) &other->tempChanged)) return F;
  return T;
}

B t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge__ne(t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge this, t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge other);

void t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_string_(STACK_FRAME String result, t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge this) {
  DeclNewStackFrame(caller, "TempSensor_i_tsp_tempSensor_Bridge.scala", "t.TemperatureControl.TempSensor_i_tsp_tempSensor_Bridge", "string", 0);
  String_string_(SF result, string("TempSensor_i_tsp_tempSensor_Bridge("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  String_string_(SF result, (String) &this->name);
  String_string_(SF result, sep);
  art_DispatchPropertyProtocol_string_(SF result, (art_DispatchPropertyProtocol) &this->dispatchProtocol);
  String_string_(SF result, sep);
  Option_9AF35E_string_(SF result, (Option_9AF35E) &this->dispatchTriggers);
  String_string_(SF result, sep);
  art_Port_7B28AF_string_(SF result, (art_Port_7B28AF) &this->currentTemp);
  String_string_(SF result, sep);
  art_Port_9CBF18_string_(SF result, (art_Port_9CBF18) &this->tempChanged);
  String_string_(SF result, string(")"));
}

void t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_cprint(t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("TempSensor_i_tsp_tempSensor_Bridge("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  String_cprint((String) &this->name, isOut);
  String_cprint(sep, isOut);
  art_DispatchPropertyProtocol_cprint((art_DispatchPropertyProtocol) &this->dispatchProtocol, isOut);
  String_cprint(sep, isOut);
  Option_9AF35E_cprint((Option_9AF35E) &this->dispatchTriggers, isOut);
  String_cprint(sep, isOut);
  art_Port_7B28AF_cprint((art_Port_7B28AF) &this->currentTemp, isOut);
  String_cprint(sep, isOut);
  art_Port_9CBF18_cprint((art_Port_9CBF18) &this->tempChanged, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge__is(STACK_FRAME void* this);
t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge__as(STACK_FRAME void *this);

void t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_apply(STACK_FRAME t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge this, Z id, String name, art_DispatchPropertyProtocol dispatchProtocol, Option_9AF35E dispatchTriggers, art_Port_7B28AF currentTemp, art_Port_9CBF18 tempChanged) {
  DeclNewStackFrame(caller, "TempSensor_i_tsp_tempSensor_Bridge.scala", "t.TemperatureControl.TempSensor_i_tsp_tempSensor_Bridge", "apply", 0);
  this->id = id;
  Type_assign(&this->name, name, sizeof(struct StaticString));
  Type_assign(&this->dispatchProtocol, dispatchProtocol, sizeof(union art_DispatchPropertyProtocol));
  Type_assign(&this->dispatchTriggers, dispatchTriggers, sizeof(union Option_9AF35E));
  Type_assign(&this->currentTemp, currentTemp, sizeof(struct art_Port_7B28AF));
  Type_assign(&this->tempChanged, tempChanged, sizeof(struct art_Port_9CBF18));
  {
    sfUpdateLoc(22);
    STATIC_ASSERT(2 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_1);
    t_1.size = (int8_t) 2;
    IS_820232_up(&t_1, 0, (art_UPort) t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_currentTemp_(this));
    IS_820232_up(&t_1, 1, (art_UPort) t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_tempChanged_(this));
    STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_2);
    t_2.size = (int8_t) 0;
    STATIC_ASSERT(1 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_3);
    t_3.size = (int8_t) 1;
    IS_820232_up(&t_3, 0, (art_UPort) t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_currentTemp_(this));
    STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_4);
    t_4.size = (int8_t) 0;
    STATIC_ASSERT(1 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_5);
    t_5.size = (int8_t) 1;
    IS_820232_up(&t_5, 0, (art_UPort) t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_tempChanged_(this));
    DeclNewart_Bridge_Ports(t_0);
    art_Bridge_Ports_apply(SF &t_0, (IS_820232) (&t_1), (IS_820232) (&t_2), (IS_820232) (&t_3), (IS_820232) (&t_4), (IS_820232) (&t_5));
    Type_assign(&this->ports, (&t_0), sizeof(struct art_Bridge_Ports));
  }
  {
    sfUpdateLoc(35);
    {

      sfUpdateLoc(36);
      t_TemperatureControl_TempSensor_i_Initialization_Api api;
      DeclNewt_TemperatureControl_TempSensor_i_Initialization_Api(t_6);
      t_TemperatureControl_TempSensor_i_Initialization_Api_apply(SF &t_6, t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_id_(this), art_Port_7B28AF_id_(t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_currentTemp_(this)), art_Port_9CBF18_id_(t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_tempChanged_(this)));
      api = (t_TemperatureControl_TempSensor_i_Initialization_Api) (&t_6);

      sfUpdateLoc(41);
      {
        DeclNewSome_23FE19(t_7);
        Some_23FE19_apply(SF &t_7, (t_TemperatureControl_TempSensor_i_Initialization_Api) api);
        t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_c_initialization_api_a(SF (Option_87C81A) (&t_7));
      }
      Type_assign(&this->initialization_api, api, sizeof(struct t_TemperatureControl_TempSensor_i_Initialization_Api));
    }
  }
  {
    sfUpdateLoc(45);
    {

      sfUpdateLoc(46);
      t_TemperatureControl_TempSensor_i_Operational_Api api;
      DeclNewt_TemperatureControl_TempSensor_i_Operational_Api(t_8);
      t_TemperatureControl_TempSensor_i_Operational_Api_apply(SF &t_8, t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_id_(this), art_Port_7B28AF_id_(t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_currentTemp_(this)), art_Port_9CBF18_id_(t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_tempChanged_(this)));
      api = (t_TemperatureControl_TempSensor_i_Operational_Api) (&t_8);

      sfUpdateLoc(51);
      {
        DeclNewSome_82706F(t_9);
        Some_82706F_apply(SF &t_9, (t_TemperatureControl_TempSensor_i_Operational_Api) api);
        t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_c_operational_api_a(SF (Option_10368D) (&t_9));
      }
      Type_assign(&this->operational_api, api, sizeof(struct t_TemperatureControl_TempSensor_i_Operational_Api));
    }
  }
  {
    sfUpdateLoc(56);
    DeclNewt_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints(t_10);
    t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints_apply(SF &t_10, t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_id_(this), art_Port_7B28AF_id_(t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_currentTemp_(this)), art_Port_9CBF18_id_(t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_tempChanged_(this)), (Option_9AF35E) t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_dispatchTriggers_(this), (t_TemperatureControl_TempSensor_i_Initialization_Api) t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_initialization_api_(this), (t_TemperatureControl_TempSensor_i_Operational_Api) t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_operational_api_(this));
    Type_assign(&this->entryPoints, (&t_10), sizeof(struct t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints));
  }
}

void t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_init_c_initialization_api(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(70);
  DeclNewNone_68DB3B(t_0);
  None_68DB3B_apply(SF &t_0);
  Type_assign(&_t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_c_initialization_api, (&t_0), sizeof(struct None_68DB3B));
};

void t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_init_c_operational_api(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(71);
  DeclNewNone_AC21B6(t_1);
  None_AC21B6_apply(SF &t_1);
  Type_assign(&_t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_c_operational_api, (&t_1), sizeof(struct None_AC21B6));
};