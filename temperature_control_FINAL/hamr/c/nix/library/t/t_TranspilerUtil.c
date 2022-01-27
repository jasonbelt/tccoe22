#include <all.h>

Unit t_TranspilerUtil_touch_printDataContent(STACK_FRAME art_DataContent a) {
  DeclNewStackFrame(caller, "Arch.scala", "t.TranspilerUtil.touch", "printDataContent", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(92);
  {
    DeclNewString(t_0);
    String_string_(SF (String) &t_0, string(""));
    art_DataContent_string_(SF (String) &t_0, a);
    String_string_(SF (String) &t_0, string(""));
    String_cprint(((String) &t_0), T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit t_TranspilerUtil_touch(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Arch.scala", "t.TranspilerUtil", "touch", 0);

  sfUpdateLoc(78);
  B t_0;
  {
    t_0 = F;
  }
  if (t_0) {

    sfUpdateLoc(79);
    {
      t_TranspilerToucher_touch(SF_LAST);
    }

    sfUpdateLoc(82);
    DeclNewMBox2_1CBFC4(_mbox2Boolean_Payload);
    MBox2_1CBFC4 mbox2Boolean_Payload = (MBox2_1CBFC4) &_mbox2Boolean_Payload;
    {
      DeclNewt_Base_Types_Boolean_Payload(t_2);
      t_Base_Types_Boolean_Payload_apply(SF &t_2, T);
      DeclNewMBox2_1CBFC4(t_1);
      MBox2_1CBFC4_apply(SF &t_1, Z_C(0), (art_DataContent) (&t_2));
      Type_assign(mbox2Boolean_Payload, (&t_1), sizeof(struct MBox2_1CBFC4));
    }

    sfUpdateLoc(83);
    DeclNewMBox2_1029D1(_mbox2OptionDataContent);
    MBox2_1029D1 mbox2OptionDataContent = (MBox2_1029D1) &_mbox2OptionDataContent;
    {
      DeclNewNone_964667(t_4);
      None_964667_apply(SF &t_4);
      DeclNewMBox2_1029D1(t_3);
      MBox2_1029D1_apply(SF &t_3, Z_C(0), (Option_8E9F45) (&t_4));
      Type_assign(mbox2OptionDataContent, (&t_3), sizeof(struct MBox2_1029D1));
    }

    #ifndef SIREUM_NO_PRINT

    sfUpdateLoc(86);
    {
      t_ProcessorTimingProperties_cprint(t_Schedulers_TempControlSystem_i_Instance_t_processor_timingProperties(SF_LAST), T);
      cprintln(T);
      cflush(T);
    }

    #endif

    #ifndef SIREUM_NO_PRINT

    sfUpdateLoc(87);
    {
      t_ThreadTimingProperties_cprint(t_Schedulers_TempControlSystem_i_Instance_tsp_tempSensor_timingProperties(SF_LAST), T);
      cprintln(T);
      cflush(T);
    }

    #endif

    #ifndef SIREUM_NO_PRINT

    sfUpdateLoc(88);
    {
      t_ThreadTimingProperties_cprint(t_Schedulers_TempControlSystem_i_Instance_tcp_tempControl_timingProperties(SF_LAST), T);
      cprintln(T);
      cflush(T);
    }

    #endif

    #ifndef SIREUM_NO_PRINT

    sfUpdateLoc(89);
    {
      t_ThreadTimingProperties_cprint(t_Schedulers_TempControlSystem_i_Instance_fp_fan_timingProperties(SF_LAST), T);
      cprintln(T);
      cflush(T);
    }

    #endif

    sfUpdateLoc(94);
    {
      F32 t_6 = t_Base_Types_Float_32_example(SF_LAST);
      DeclNewt_Base_Types_Float_32_Payload(t_5);
      t_Base_Types_Float_32_Payload_apply(SF &t_5, t_6);
      t_TranspilerUtil_touch_printDataContent(SF (art_DataContent) (&t_5));
    }

    sfUpdateLoc(95);
    {
      DeclNewOption_40D664(t_8);
      t_TemperatureControl_TempUnit_Type_byOrdinal(SF (Option_40D664) &t_8, Z_C(0));
      t_TemperatureControl_TempUnit_Type t_9 = Option_40D664_get_(SF ((Option_40D664) &t_8));
      DeclNewt_TemperatureControl_TempUnit_Payload(t_7);
      t_TemperatureControl_TempUnit_Payload_apply(SF &t_7, t_9);
      t_TranspilerUtil_touch_printDataContent(SF (art_DataContent) (&t_7));
    }

    sfUpdateLoc(96);
    {
      DeclNewt_TemperatureControl_Temperature_i(t_11);
      t_TemperatureControl_Temperature_i_example(SF (t_TemperatureControl_Temperature_i) &t_11);
      DeclNewt_TemperatureControl_Temperature_i_Payload(t_10);
      t_TemperatureControl_Temperature_i_Payload_apply(SF &t_10, (t_TemperatureControl_Temperature_i) ((t_TemperatureControl_Temperature_i) &t_11));
      t_TranspilerUtil_touch_printDataContent(SF (art_DataContent) (&t_10));
    }

    sfUpdateLoc(97);
    {
      DeclNewt_TemperatureControl_SetPoint_i(t_13);
      t_TemperatureControl_SetPoint_i_example(SF (t_TemperatureControl_SetPoint_i) &t_13);
      DeclNewt_TemperatureControl_SetPoint_i_Payload(t_12);
      t_TemperatureControl_SetPoint_i_Payload_apply(SF &t_12, (t_TemperatureControl_SetPoint_i) ((t_TemperatureControl_SetPoint_i) &t_13));
      t_TranspilerUtil_touch_printDataContent(SF (art_DataContent) (&t_12));
    }

    sfUpdateLoc(98);
    {
      DeclNewOption_C5A124(t_15);
      t_TemperatureControl_FanAck_Type_byOrdinal(SF (Option_C5A124) &t_15, Z_C(0));
      t_TemperatureControl_FanAck_Type t_16 = Option_C5A124_get_(SF ((Option_C5A124) &t_15));
      DeclNewt_TemperatureControl_FanAck_Payload(t_14);
      t_TemperatureControl_FanAck_Payload_apply(SF &t_14, t_16);
      t_TranspilerUtil_touch_printDataContent(SF (art_DataContent) (&t_14));
    }

    sfUpdateLoc(99);
    {
      DeclNewOption_2B0611(t_18);
      t_TemperatureControl_FanCmd_Type_byOrdinal(SF (Option_2B0611) &t_18, Z_C(0));
      t_TemperatureControl_FanCmd_Type t_19 = Option_2B0611_get_(SF ((Option_2B0611) &t_18));
      DeclNewt_TemperatureControl_FanCmd_Payload(t_17);
      t_TemperatureControl_FanCmd_Payload_apply(SF &t_17, t_19);
      t_TranspilerUtil_touch_printDataContent(SF (art_DataContent) (&t_17));
    }

    sfUpdateLoc(100);
    {
      DeclNewart_Empty(t_20);
      art_Empty_apply(SF &t_20);
      t_TranspilerUtil_touch_printDataContent(SF (art_DataContent) (&t_20));
    }
    {

      sfUpdateLoc(103);
      {
        DeclNewt_TemperatureControl_TempSensor_i_Initialization_Api(t_21);
        Option_87C81A_get_(SF (t_TemperatureControl_TempSensor_i_Initialization_Api) &t_21, t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_c_initialization_api(SF_LAST));
        t_TemperatureControl_TempSensor_i_Initialization_Api_logInfo_(SF ((t_TemperatureControl_TempSensor_i_Initialization_Api) &t_21), (String) string(""));
      }

      sfUpdateLoc(104);
      {
        DeclNewt_TemperatureControl_TempSensor_i_Initialization_Api(t_22);
        Option_87C81A_get_(SF (t_TemperatureControl_TempSensor_i_Initialization_Api) &t_22, t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_c_initialization_api(SF_LAST));
        t_TemperatureControl_TempSensor_i_Initialization_Api_logDebug_(SF ((t_TemperatureControl_TempSensor_i_Initialization_Api) &t_22), (String) string(""));
      }

      sfUpdateLoc(105);
      {
        DeclNewt_TemperatureControl_TempSensor_i_Initialization_Api(t_23);
        Option_87C81A_get_(SF (t_TemperatureControl_TempSensor_i_Initialization_Api) &t_23, t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_c_initialization_api(SF_LAST));
        t_TemperatureControl_TempSensor_i_Initialization_Api_logError_(SF ((t_TemperatureControl_TempSensor_i_Initialization_Api) &t_23), (String) string(""));
      }

      sfUpdateLoc(106);
      {
        DeclNewt_TemperatureControl_TempSensor_i_Operational_Api(t_24);
        Option_10368D_get_(SF (t_TemperatureControl_TempSensor_i_Operational_Api) &t_24, t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_c_operational_api(SF_LAST));
        t_TemperatureControl_TempSensor_i_Operational_Api_logInfo_(SF ((t_TemperatureControl_TempSensor_i_Operational_Api) &t_24), (String) string(""));
      }

      sfUpdateLoc(107);
      {
        DeclNewt_TemperatureControl_TempSensor_i_Operational_Api(t_25);
        Option_10368D_get_(SF (t_TemperatureControl_TempSensor_i_Operational_Api) &t_25, t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_c_operational_api(SF_LAST));
        t_TemperatureControl_TempSensor_i_Operational_Api_logDebug_(SF ((t_TemperatureControl_TempSensor_i_Operational_Api) &t_25), (String) string(""));
      }

      sfUpdateLoc(108);
      {
        DeclNewt_TemperatureControl_TempSensor_i_Operational_Api(t_26);
        Option_10368D_get_(SF (t_TemperatureControl_TempSensor_i_Operational_Api) &t_26, t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_c_operational_api(SF_LAST));
        t_TemperatureControl_TempSensor_i_Operational_Api_logError_(SF ((t_TemperatureControl_TempSensor_i_Operational_Api) &t_26), (String) string(""));
      }

      sfUpdateLoc(109);
      {
        DeclNewt_TemperatureControl_TempSensor_i_Initialization_Api(t_27);
        Option_87C81A_get_(SF (t_TemperatureControl_TempSensor_i_Initialization_Api) &t_27, t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_c_initialization_api(SF_LAST));
        DeclNewt_TemperatureControl_Temperature_i(t_28);
        t_TemperatureControl_Temperature_i_example(SF (t_TemperatureControl_Temperature_i) &t_28);
        t_TemperatureControl_TempSensor_i_Initialization_Api_put_currentTemp_(SF ((t_TemperatureControl_TempSensor_i_Initialization_Api) &t_27), (t_TemperatureControl_Temperature_i) ((t_TemperatureControl_Temperature_i) &t_28));
      }

      sfUpdateLoc(110);
      {
        DeclNewt_TemperatureControl_TempSensor_i_Operational_Api(t_29);
        Option_10368D_get_(SF (t_TemperatureControl_TempSensor_i_Operational_Api) &t_29, t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_c_operational_api(SF_LAST));
        DeclNewt_TemperatureControl_Temperature_i(t_30);
        t_TemperatureControl_Temperature_i_example(SF (t_TemperatureControl_Temperature_i) &t_30);
        t_TemperatureControl_TempSensor_i_Operational_Api_put_currentTemp_(SF ((t_TemperatureControl_TempSensor_i_Operational_Api) &t_29), (t_TemperatureControl_Temperature_i) ((t_TemperatureControl_Temperature_i) &t_30));
      }

      sfUpdateLoc(111);
      {
        DeclNewt_TemperatureControl_TempSensor_i_Initialization_Api(t_31);
        Option_87C81A_get_(SF (t_TemperatureControl_TempSensor_i_Initialization_Api) &t_31, t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_c_initialization_api(SF_LAST));
        t_TemperatureControl_TempSensor_i_Initialization_Api_put_tempChanged_(SF ((t_TemperatureControl_TempSensor_i_Initialization_Api) &t_31));
      }

      sfUpdateLoc(112);
      {
        DeclNewt_TemperatureControl_TempSensor_i_Operational_Api(t_32);
        Option_10368D_get_(SF (t_TemperatureControl_TempSensor_i_Operational_Api) &t_32, t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_c_operational_api(SF_LAST));
        t_TemperatureControl_TempSensor_i_Operational_Api_put_tempChanged_(SF ((t_TemperatureControl_TempSensor_i_Operational_Api) &t_32));
      }
    }
    {

      sfUpdateLoc(115);
      {
        DeclNewt_TemperatureControl_TempControl_i_Initialization_Api(t_33);
        Option_BCC9E8_get_(SF (t_TemperatureControl_TempControl_i_Initialization_Api) &t_33, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_c_initialization_api(SF_LAST));
        t_TemperatureControl_TempControl_i_Initialization_Api_logInfo_(SF ((t_TemperatureControl_TempControl_i_Initialization_Api) &t_33), (String) string(""));
      }

      sfUpdateLoc(116);
      {
        DeclNewt_TemperatureControl_TempControl_i_Initialization_Api(t_34);
        Option_BCC9E8_get_(SF (t_TemperatureControl_TempControl_i_Initialization_Api) &t_34, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_c_initialization_api(SF_LAST));
        t_TemperatureControl_TempControl_i_Initialization_Api_logDebug_(SF ((t_TemperatureControl_TempControl_i_Initialization_Api) &t_34), (String) string(""));
      }

      sfUpdateLoc(117);
      {
        DeclNewt_TemperatureControl_TempControl_i_Initialization_Api(t_35);
        Option_BCC9E8_get_(SF (t_TemperatureControl_TempControl_i_Initialization_Api) &t_35, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_c_initialization_api(SF_LAST));
        t_TemperatureControl_TempControl_i_Initialization_Api_logError_(SF ((t_TemperatureControl_TempControl_i_Initialization_Api) &t_35), (String) string(""));
      }

      sfUpdateLoc(118);
      {
        DeclNewt_TemperatureControl_TempControl_i_Operational_Api(t_36);
        Option_3B7208_get_(SF (t_TemperatureControl_TempControl_i_Operational_Api) &t_36, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_c_operational_api(SF_LAST));
        t_TemperatureControl_TempControl_i_Operational_Api_logInfo_(SF ((t_TemperatureControl_TempControl_i_Operational_Api) &t_36), (String) string(""));
      }

      sfUpdateLoc(119);
      {
        DeclNewt_TemperatureControl_TempControl_i_Operational_Api(t_37);
        Option_3B7208_get_(SF (t_TemperatureControl_TempControl_i_Operational_Api) &t_37, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_c_operational_api(SF_LAST));
        t_TemperatureControl_TempControl_i_Operational_Api_logDebug_(SF ((t_TemperatureControl_TempControl_i_Operational_Api) &t_37), (String) string(""));
      }

      sfUpdateLoc(120);
      {
        DeclNewt_TemperatureControl_TempControl_i_Operational_Api(t_38);
        Option_3B7208_get_(SF (t_TemperatureControl_TempControl_i_Operational_Api) &t_38, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_c_operational_api(SF_LAST));
        t_TemperatureControl_TempControl_i_Operational_Api_logError_(SF ((t_TemperatureControl_TempControl_i_Operational_Api) &t_38), (String) string(""));
      }

      sfUpdateLoc(121);
      Option_78CB14 apiUsage_currentTemp;
      DeclNewt_TemperatureControl_TempControl_i_Operational_Api(t_39);
      Option_3B7208_get_(SF (t_TemperatureControl_TempControl_i_Operational_Api) &t_39, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_78CB14(t_40);
      t_TemperatureControl_TempControl_i_Operational_Api_get_currentTemp_(SF (Option_78CB14) &t_40, ((t_TemperatureControl_TempControl_i_Operational_Api) &t_39));
      apiUsage_currentTemp = (Option_78CB14) ((Option_78CB14) &t_40);

      sfUpdateLoc(122);
      Option_C5A124 apiUsage_fanAck;
      DeclNewt_TemperatureControl_TempControl_i_Operational_Api(t_41);
      Option_3B7208_get_(SF (t_TemperatureControl_TempControl_i_Operational_Api) &t_41, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_C5A124(t_42);
      t_TemperatureControl_TempControl_i_Operational_Api_get_fanAck_(SF (Option_C5A124) &t_42, ((t_TemperatureControl_TempControl_i_Operational_Api) &t_41));
      apiUsage_fanAck = (Option_C5A124) ((Option_C5A124) &t_42);

      sfUpdateLoc(123);
      Option_EBB396 apiUsage_setPoint;
      DeclNewt_TemperatureControl_TempControl_i_Operational_Api(t_43);
      Option_3B7208_get_(SF (t_TemperatureControl_TempControl_i_Operational_Api) &t_43, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_EBB396(t_44);
      t_TemperatureControl_TempControl_i_Operational_Api_get_setPoint_(SF (Option_EBB396) &t_44, ((t_TemperatureControl_TempControl_i_Operational_Api) &t_43));
      apiUsage_setPoint = (Option_EBB396) ((Option_EBB396) &t_44);

      sfUpdateLoc(124);
      {
        DeclNewt_TemperatureControl_TempControl_i_Initialization_Api(t_45);
        Option_BCC9E8_get_(SF (t_TemperatureControl_TempControl_i_Initialization_Api) &t_45, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_c_initialization_api(SF_LAST));
        DeclNewOption_2B0611(t_46);
        t_TemperatureControl_FanCmd_Type_byOrdinal(SF (Option_2B0611) &t_46, Z_C(0));
        t_TemperatureControl_FanCmd_Type t_47 = Option_2B0611_get_(SF ((Option_2B0611) &t_46));
        t_TemperatureControl_TempControl_i_Initialization_Api_put_fanCmd_(SF ((t_TemperatureControl_TempControl_i_Initialization_Api) &t_45), t_47);
      }

      sfUpdateLoc(125);
      {
        DeclNewt_TemperatureControl_TempControl_i_Operational_Api(t_48);
        Option_3B7208_get_(SF (t_TemperatureControl_TempControl_i_Operational_Api) &t_48, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_c_operational_api(SF_LAST));
        DeclNewOption_2B0611(t_49);
        t_TemperatureControl_FanCmd_Type_byOrdinal(SF (Option_2B0611) &t_49, Z_C(0));
        t_TemperatureControl_FanCmd_Type t_50 = Option_2B0611_get_(SF ((Option_2B0611) &t_49));
        t_TemperatureControl_TempControl_i_Operational_Api_put_fanCmd_(SF ((t_TemperatureControl_TempControl_i_Operational_Api) &t_48), t_50);
      }

      sfUpdateLoc(126);
      Option_C622DB apiUsage_tempChanged;
      DeclNewt_TemperatureControl_TempControl_i_Operational_Api(t_51);
      Option_3B7208_get_(SF (t_TemperatureControl_TempControl_i_Operational_Api) &t_51, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_C622DB(t_52);
      t_TemperatureControl_TempControl_i_Operational_Api_get_tempChanged_(SF (Option_C622DB) &t_52, ((t_TemperatureControl_TempControl_i_Operational_Api) &t_51));
      apiUsage_tempChanged = (Option_C622DB) ((Option_C622DB) &t_52);
    }
    {

      sfUpdateLoc(129);
      {
        DeclNewt_TemperatureControl_Fan_i_Initialization_Api(t_53);
        Option_74C297_get_(SF (t_TemperatureControl_Fan_i_Initialization_Api) &t_53, t_TemperatureControl_Fan_i_fp_fan_Bridge_c_initialization_api(SF_LAST));
        t_TemperatureControl_Fan_i_Initialization_Api_logInfo_(SF ((t_TemperatureControl_Fan_i_Initialization_Api) &t_53), (String) string(""));
      }

      sfUpdateLoc(130);
      {
        DeclNewt_TemperatureControl_Fan_i_Initialization_Api(t_54);
        Option_74C297_get_(SF (t_TemperatureControl_Fan_i_Initialization_Api) &t_54, t_TemperatureControl_Fan_i_fp_fan_Bridge_c_initialization_api(SF_LAST));
        t_TemperatureControl_Fan_i_Initialization_Api_logDebug_(SF ((t_TemperatureControl_Fan_i_Initialization_Api) &t_54), (String) string(""));
      }

      sfUpdateLoc(131);
      {
        DeclNewt_TemperatureControl_Fan_i_Initialization_Api(t_55);
        Option_74C297_get_(SF (t_TemperatureControl_Fan_i_Initialization_Api) &t_55, t_TemperatureControl_Fan_i_fp_fan_Bridge_c_initialization_api(SF_LAST));
        t_TemperatureControl_Fan_i_Initialization_Api_logError_(SF ((t_TemperatureControl_Fan_i_Initialization_Api) &t_55), (String) string(""));
      }

      sfUpdateLoc(132);
      {
        DeclNewt_TemperatureControl_Fan_i_Operational_Api(t_56);
        Option_A8F8FC_get_(SF (t_TemperatureControl_Fan_i_Operational_Api) &t_56, t_TemperatureControl_Fan_i_fp_fan_Bridge_c_operational_api(SF_LAST));
        t_TemperatureControl_Fan_i_Operational_Api_logInfo_(SF ((t_TemperatureControl_Fan_i_Operational_Api) &t_56), (String) string(""));
      }

      sfUpdateLoc(133);
      {
        DeclNewt_TemperatureControl_Fan_i_Operational_Api(t_57);
        Option_A8F8FC_get_(SF (t_TemperatureControl_Fan_i_Operational_Api) &t_57, t_TemperatureControl_Fan_i_fp_fan_Bridge_c_operational_api(SF_LAST));
        t_TemperatureControl_Fan_i_Operational_Api_logDebug_(SF ((t_TemperatureControl_Fan_i_Operational_Api) &t_57), (String) string(""));
      }

      sfUpdateLoc(134);
      {
        DeclNewt_TemperatureControl_Fan_i_Operational_Api(t_58);
        Option_A8F8FC_get_(SF (t_TemperatureControl_Fan_i_Operational_Api) &t_58, t_TemperatureControl_Fan_i_fp_fan_Bridge_c_operational_api(SF_LAST));
        t_TemperatureControl_Fan_i_Operational_Api_logError_(SF ((t_TemperatureControl_Fan_i_Operational_Api) &t_58), (String) string(""));
      }

      sfUpdateLoc(135);
      Option_2B0611 apiUsage_fanCmd;
      DeclNewt_TemperatureControl_Fan_i_Operational_Api(t_59);
      Option_A8F8FC_get_(SF (t_TemperatureControl_Fan_i_Operational_Api) &t_59, t_TemperatureControl_Fan_i_fp_fan_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_2B0611(t_60);
      t_TemperatureControl_Fan_i_Operational_Api_get_fanCmd_(SF (Option_2B0611) &t_60, ((t_TemperatureControl_Fan_i_Operational_Api) &t_59));
      apiUsage_fanCmd = (Option_2B0611) ((Option_2B0611) &t_60);

      sfUpdateLoc(136);
      {
        DeclNewt_TemperatureControl_Fan_i_Initialization_Api(t_61);
        Option_74C297_get_(SF (t_TemperatureControl_Fan_i_Initialization_Api) &t_61, t_TemperatureControl_Fan_i_fp_fan_Bridge_c_initialization_api(SF_LAST));
        DeclNewOption_C5A124(t_62);
        t_TemperatureControl_FanAck_Type_byOrdinal(SF (Option_C5A124) &t_62, Z_C(0));
        t_TemperatureControl_FanAck_Type t_63 = Option_C5A124_get_(SF ((Option_C5A124) &t_62));
        t_TemperatureControl_Fan_i_Initialization_Api_put_fanAck_(SF ((t_TemperatureControl_Fan_i_Initialization_Api) &t_61), t_63);
      }

      sfUpdateLoc(137);
      {
        DeclNewt_TemperatureControl_Fan_i_Operational_Api(t_64);
        Option_A8F8FC_get_(SF (t_TemperatureControl_Fan_i_Operational_Api) &t_64, t_TemperatureControl_Fan_i_fp_fan_Bridge_c_operational_api(SF_LAST));
        DeclNewOption_C5A124(t_65);
        t_TemperatureControl_FanAck_Type_byOrdinal(SF (Option_C5A124) &t_65, Z_C(0));
        t_TemperatureControl_FanAck_Type t_66 = Option_C5A124_get_(SF ((Option_C5A124) &t_65));
        t_TemperatureControl_Fan_i_Operational_Api_put_fanAck_(SF ((t_TemperatureControl_Fan_i_Operational_Api) &t_64), t_66);
      }
    }
  }
}