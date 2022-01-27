#include <all.h>

B t_Arch_initialized_ = F;

struct t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge _t_Arch_TempControlSystem_i_Instance_tsp_tempSensor;
struct t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge _t_Arch_TempControlSystem_i_Instance_tcp_tempControl;
struct t_TemperatureControl_Fan_i_fp_fan_Bridge _t_Arch_TempControlSystem_i_Instance_fp_fan;
struct art_ArchitectureDescription _t_Arch_ad;

void t_Arch_init(STACK_FRAME_ONLY) {
  if (t_Arch_initialized_) return;
  t_Arch_initialized_ = T;
  DeclNewStackFrame(caller, "Arch.scala", "t.Arch", "<init>", 0);
  t_Arch_init_TempControlSystem_i_Instance_tsp_tempSensor(SF_LAST);
  t_Arch_init_TempControlSystem_i_Instance_tcp_tempControl(SF_LAST);
  t_Arch_init_TempControlSystem_i_Instance_fp_fan(SF_LAST);
  t_Arch_init_ad(SF_LAST);
}

t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge t_Arch_TempControlSystem_i_Instance_tsp_tempSensor(STACK_FRAME_ONLY) {
  t_Arch_init(CALLER_LAST);
  return (t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge) &_t_Arch_TempControlSystem_i_Instance_tsp_tempSensor;
}

t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge t_Arch_TempControlSystem_i_Instance_tcp_tempControl(STACK_FRAME_ONLY) {
  t_Arch_init(CALLER_LAST);
  return (t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge) &_t_Arch_TempControlSystem_i_Instance_tcp_tempControl;
}

t_TemperatureControl_Fan_i_fp_fan_Bridge t_Arch_TempControlSystem_i_Instance_fp_fan(STACK_FRAME_ONLY) {
  t_Arch_init(CALLER_LAST);
  return (t_TemperatureControl_Fan_i_fp_fan_Bridge) &_t_Arch_TempControlSystem_i_Instance_fp_fan;
}

art_ArchitectureDescription t_Arch_ad(STACK_FRAME_ONLY) {
  t_Arch_init(CALLER_LAST);
  return (art_ArchitectureDescription) &_t_Arch_ad;
}

void t_Arch_init_TempControlSystem_i_Instance_tsp_tempSensor(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(13);
  {

    sfUpdateLoc(14);
    art_Port_7B28AF currentTemp;
    DeclNewart_Port_7B28AF(t_0);
    art_Port_7B28AF_apply(SF &t_0, Z_C(0), (String) string("TempControlSystem_i_Instance_tsp_tempSensor_currentTemp"), art_PortMode_Type_DataOut);
    currentTemp = (art_Port_7B28AF) (&t_0);

    sfUpdateLoc(15);
    art_Port_9CBF18 tempChanged;
    DeclNewart_Port_9CBF18(t_1);
    art_Port_9CBF18_apply(SF &t_1, Z_C(1), (String) string("TempControlSystem_i_Instance_tsp_tempSensor_tempChanged"), art_PortMode_Type_EventOut);
    tempChanged = (art_Port_9CBF18) (&t_1);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_3);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_3, Z_C(1000));
    DeclNewNone_5C1355(t_4);
    None_5C1355_apply(SF &t_4);
    DeclNewt_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge(t_2);
    t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_apply(SF &t_2, Z_C(0), (String) string("TempControlSystem_i_Instance_tsp_tempSensor"), (art_DispatchPropertyProtocol) (&t_3), (Option_9AF35E) (&t_4), (art_Port_7B28AF) currentTemp, (art_Port_9CBF18) tempChanged);
    Type_assign(&_t_Arch_TempControlSystem_i_Instance_tsp_tempSensor, (&t_2), sizeof(struct t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge));
  }
};

void t_Arch_init_TempControlSystem_i_Instance_tcp_tempControl(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(27);
  {

    sfUpdateLoc(28);
    art_Port_7B28AF currentTemp;
    DeclNewart_Port_7B28AF(t_5);
    art_Port_7B28AF_apply(SF &t_5, Z_C(2), (String) string("TempControlSystem_i_Instance_tcp_tempControl_currentTemp"), art_PortMode_Type_DataIn);
    currentTemp = (art_Port_7B28AF) (&t_5);

    sfUpdateLoc(29);
    art_Port_0A16CC fanAck;
    DeclNewart_Port_0A16CC(t_6);
    art_Port_0A16CC_apply(SF &t_6, Z_C(3), (String) string("TempControlSystem_i_Instance_tcp_tempControl_fanAck"), art_PortMode_Type_EventIn);
    fanAck = (art_Port_0A16CC) (&t_6);

    sfUpdateLoc(30);
    art_Port_216126 setPoint;
    DeclNewart_Port_216126(t_7);
    art_Port_216126_apply(SF &t_7, Z_C(4), (String) string("TempControlSystem_i_Instance_tcp_tempControl_setPoint"), art_PortMode_Type_EventIn);
    setPoint = (art_Port_216126) (&t_7);

    sfUpdateLoc(31);
    art_Port_2ED9E6 fanCmd;
    DeclNewart_Port_2ED9E6(t_8);
    art_Port_2ED9E6_apply(SF &t_8, Z_C(5), (String) string("TempControlSystem_i_Instance_tcp_tempControl_fanCmd"), art_PortMode_Type_EventOut);
    fanCmd = (art_Port_2ED9E6) (&t_8);

    sfUpdateLoc(32);
    art_Port_9CBF18 tempChanged;
    DeclNewart_Port_9CBF18(t_9);
    art_Port_9CBF18_apply(SF &t_9, Z_C(6), (String) string("TempControlSystem_i_Instance_tcp_tempControl_tempChanged"), art_PortMode_Type_EventIn);
    tempChanged = (art_Port_9CBF18) (&t_9);
    DeclNewart_DispatchPropertyProtocol_Sporadic(t_11);
    art_DispatchPropertyProtocol_Sporadic_apply(SF &t_11, Z_C(1));
    DeclNewNone_5C1355(t_12);
    None_5C1355_apply(SF &t_12);
    DeclNewt_TemperatureControl_TempControl_i_tcp_tempControl_Bridge(t_10);
    t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_apply(SF &t_10, Z_C(1), (String) string("TempControlSystem_i_Instance_tcp_tempControl"), (art_DispatchPropertyProtocol) (&t_11), (Option_9AF35E) (&t_12), (art_Port_7B28AF) currentTemp, (art_Port_0A16CC) fanAck, (art_Port_216126) setPoint, (art_Port_2ED9E6) fanCmd, (art_Port_9CBF18) tempChanged);
    Type_assign(&_t_Arch_TempControlSystem_i_Instance_tcp_tempControl, (&t_10), sizeof(struct t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge));
  }
};

void t_Arch_init_TempControlSystem_i_Instance_fp_fan(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(47);
  {

    sfUpdateLoc(48);
    art_Port_2ED9E6 fanCmd;
    DeclNewart_Port_2ED9E6(t_13);
    art_Port_2ED9E6_apply(SF &t_13, Z_C(7), (String) string("TempControlSystem_i_Instance_fp_fan_fanCmd"), art_PortMode_Type_EventIn);
    fanCmd = (art_Port_2ED9E6) (&t_13);

    sfUpdateLoc(49);
    art_Port_0A16CC fanAck;
    DeclNewart_Port_0A16CC(t_14);
    art_Port_0A16CC_apply(SF &t_14, Z_C(8), (String) string("TempControlSystem_i_Instance_fp_fan_fanAck"), art_PortMode_Type_EventOut);
    fanAck = (art_Port_0A16CC) (&t_14);
    DeclNewart_DispatchPropertyProtocol_Sporadic(t_16);
    art_DispatchPropertyProtocol_Sporadic_apply(SF &t_16, Z_C(1));
    DeclNewNone_5C1355(t_17);
    None_5C1355_apply(SF &t_17);
    DeclNewt_TemperatureControl_Fan_i_fp_fan_Bridge(t_15);
    t_TemperatureControl_Fan_i_fp_fan_Bridge_apply(SF &t_15, Z_C(2), (String) string("TempControlSystem_i_Instance_fp_fan"), (art_DispatchPropertyProtocol) (&t_16), (Option_9AF35E) (&t_17), (art_Port_2ED9E6) fanCmd, (art_Port_0A16CC) fanAck);
    Type_assign(&_t_Arch_TempControlSystem_i_Instance_fp_fan, (&t_15), sizeof(struct t_TemperatureControl_Fan_i_fp_fan_Bridge));
  }
};

void t_Arch_init_ad(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(62);
  {

    sfUpdateLoc(63);
    {
      t_TranspilerUtil_touch(SF_LAST);
    }
    STATIC_ASSERT(3 <= MaxIS_7E8796, "Insufficient maximum for IS[Z, art.Bridge] elements.");
    DeclNewIS_7E8796(t_19);
    t_19.size = (int8_t) 3;
    IS_7E8796_up(&t_19, 0, (art_Bridge) t_Arch_TempControlSystem_i_Instance_tsp_tempSensor(SF_LAST));
    IS_7E8796_up(&t_19, 1, (art_Bridge) t_Arch_TempControlSystem_i_Instance_tcp_tempControl(SF_LAST));
    IS_7E8796_up(&t_19, 2, (art_Bridge) t_Arch_TempControlSystem_i_Instance_fp_fan(SF_LAST));
    STATIC_ASSERT(4 <= MaxIS_08117A, "Insufficient maximum for IS[Z, art.UConnection] elements.");
    DeclNewIS_08117A(t_20);
    t_20.size = (int8_t) 4;
    DeclNewart_Connection(t_21);
    art_Connection_apply(SF &t_21, (art_UPort) t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_currentTemp_(t_Arch_TempControlSystem_i_Instance_tsp_tempSensor(SF_LAST)), (art_UPort) t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_currentTemp_(t_Arch_TempControlSystem_i_Instance_tcp_tempControl(SF_LAST)));
    IS_08117A_up(&t_20, 0, (art_UConnection) (&t_21));
    DeclNewart_Connection(t_22);
    art_Connection_apply(SF &t_22, (art_UPort) t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_tempChanged_(t_Arch_TempControlSystem_i_Instance_tsp_tempSensor(SF_LAST)), (art_UPort) t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_tempChanged_(t_Arch_TempControlSystem_i_Instance_tcp_tempControl(SF_LAST)));
    IS_08117A_up(&t_20, 1, (art_UConnection) (&t_22));
    DeclNewart_Connection(t_23);
    art_Connection_apply(SF &t_23, (art_UPort) t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_fanCmd_(t_Arch_TempControlSystem_i_Instance_tcp_tempControl(SF_LAST)), (art_UPort) t_TemperatureControl_Fan_i_fp_fan_Bridge_fanCmd_(t_Arch_TempControlSystem_i_Instance_fp_fan(SF_LAST)));
    IS_08117A_up(&t_20, 2, (art_UConnection) (&t_23));
    DeclNewart_Connection(t_24);
    art_Connection_apply(SF &t_24, (art_UPort) t_TemperatureControl_Fan_i_fp_fan_Bridge_fanAck_(t_Arch_TempControlSystem_i_Instance_fp_fan(SF_LAST)), (art_UPort) t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_fanAck_(t_Arch_TempControlSystem_i_Instance_tcp_tempControl(SF_LAST)));
    IS_08117A_up(&t_20, 3, (art_UConnection) (&t_24));
    DeclNewart_ArchitectureDescription(t_18);
    art_ArchitectureDescription_apply(SF &t_18, (IS_7E8796) (&t_19), (IS_08117A) (&t_20));
    Type_assign(&_t_Arch_ad, (&t_18), sizeof(struct art_ArchitectureDescription));
  }
};