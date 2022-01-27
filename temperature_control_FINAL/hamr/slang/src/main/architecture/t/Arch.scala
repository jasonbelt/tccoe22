// #Sireum

package t

import org.sireum._
import art._
import art.PortMode._
import art.DispatchPropertyProtocol._

// This file was auto-generated.  Do not edit

object Arch {
  val TempControlSystem_i_Instance_tsp_tempSensor : t.TemperatureControl.TempSensor_i_tsp_tempSensor_Bridge = {
    val currentTemp = Port[TemperatureControl.Temperature_i] (id = 0, name = "TempControlSystem_i_Instance_tsp_tempSensor_currentTemp", mode = DataOut)
    val tempChanged = Port[art.Empty] (id = 1, name = "TempControlSystem_i_Instance_tsp_tempSensor_tempChanged", mode = EventOut)

    t.TemperatureControl.TempSensor_i_tsp_tempSensor_Bridge(
      id = 0,
      name = "TempControlSystem_i_Instance_tsp_tempSensor",
      dispatchProtocol = Periodic(period = 1000),
      dispatchTriggers = None(),

      currentTemp = currentTemp,
      tempChanged = tempChanged
    )
  }
  val TempControlSystem_i_Instance_tcp_tempControl : t.TemperatureControl.TempControl_i_tcp_tempControl_Bridge = {
    val currentTemp = Port[TemperatureControl.Temperature_i] (id = 2, name = "TempControlSystem_i_Instance_tcp_tempControl_currentTemp", mode = DataIn)
    val fanAck = Port[TemperatureControl.FanAck.Type] (id = 3, name = "TempControlSystem_i_Instance_tcp_tempControl_fanAck", mode = EventIn)
    val setPoint = Port[TemperatureControl.SetPoint_i] (id = 4, name = "TempControlSystem_i_Instance_tcp_tempControl_setPoint", mode = EventIn)
    val fanCmd = Port[TemperatureControl.FanCmd.Type] (id = 5, name = "TempControlSystem_i_Instance_tcp_tempControl_fanCmd", mode = EventOut)
    val tempChanged = Port[art.Empty] (id = 6, name = "TempControlSystem_i_Instance_tcp_tempControl_tempChanged", mode = EventIn)

    t.TemperatureControl.TempControl_i_tcp_tempControl_Bridge(
      id = 1,
      name = "TempControlSystem_i_Instance_tcp_tempControl",
      dispatchProtocol = Sporadic(min = 1),
      dispatchTriggers = None(),

      currentTemp = currentTemp,
      fanAck = fanAck,
      setPoint = setPoint,
      fanCmd = fanCmd,
      tempChanged = tempChanged
    )
  }
  val TempControlSystem_i_Instance_fp_fan : t.TemperatureControl.Fan_i_fp_fan_Bridge = {
    val fanCmd = Port[TemperatureControl.FanCmd.Type] (id = 7, name = "TempControlSystem_i_Instance_fp_fan_fanCmd", mode = EventIn)
    val fanAck = Port[TemperatureControl.FanAck.Type] (id = 8, name = "TempControlSystem_i_Instance_fp_fan_fanAck", mode = EventOut)

    t.TemperatureControl.Fan_i_fp_fan_Bridge(
      id = 2,
      name = "TempControlSystem_i_Instance_fp_fan",
      dispatchProtocol = Sporadic(min = 1),
      dispatchTriggers = None(),

      fanCmd = fanCmd,
      fanAck = fanAck
    )
  }

  val ad : ArchitectureDescription = {
    TranspilerUtil.touch()

    ArchitectureDescription(
      components = ISZ (TempControlSystem_i_Instance_tsp_tempSensor, TempControlSystem_i_Instance_tcp_tempControl, TempControlSystem_i_Instance_fp_fan),

      connections = ISZ (Connection(from = TempControlSystem_i_Instance_tsp_tempSensor.currentTemp, to = TempControlSystem_i_Instance_tcp_tempControl.currentTemp),
                         Connection(from = TempControlSystem_i_Instance_tsp_tempSensor.tempChanged, to = TempControlSystem_i_Instance_tcp_tempControl.tempChanged),
                         Connection(from = TempControlSystem_i_Instance_tcp_tempControl.fanCmd, to = TempControlSystem_i_Instance_fp_fan.fanCmd),
                         Connection(from = TempControlSystem_i_Instance_fp_fan.fanAck, to = TempControlSystem_i_Instance_tcp_tempControl.fanAck))
    )
  }
}

object TranspilerUtil {
  def touch(): Unit = {
    if(F) {
      TranspilerToucher.touch()

      // add types used in Platform.receive and Platform.receiveAsync
      val mbox2Boolean_Payload: MBox2[Art.PortId, DataContent] = MBox2(0, Base_Types.Boolean_Payload(T))
      val mbox2OptionDataContent: MBox2[Art.PortId, Option[DataContent]] = MBox2(0, None())

      // touch process/thread timing properties
      println(Schedulers.TempControlSystem_i_Instance_t_processor_timingProperties)
      println(Schedulers.TempControlSystem_i_Instance_tsp_tempSensor_timingProperties)
      println(Schedulers.TempControlSystem_i_Instance_tcp_tempControl_timingProperties)
      println(Schedulers.TempControlSystem_i_Instance_fp_fan_timingProperties)

      // touch each payload/type in case some are only used as a field in a record
      def printDataContent(a: art.DataContent): Unit = { println(s"${a}") }

      printDataContent(Base_Types.Float_32_Payload(Base_Types.Float_32_example()))
      printDataContent(TemperatureControl.TempUnit_Payload(TemperatureControl.TempUnit.byOrdinal(0).get))
      printDataContent(TemperatureControl.Temperature_i_Payload(TemperatureControl.Temperature_i.example()))
      printDataContent(TemperatureControl.SetPoint_i_Payload(TemperatureControl.SetPoint_i.example()))
      printDataContent(TemperatureControl.FanAck_Payload(TemperatureControl.FanAck.byOrdinal(0).get))
      printDataContent(TemperatureControl.FanCmd_Payload(TemperatureControl.FanCmd.byOrdinal(0).get))
      printDataContent(art.Empty())

      {
        t.TemperatureControl.TempSensor_i_tsp_tempSensor_Bridge.c_initialization_api.get.logInfo("")
        t.TemperatureControl.TempSensor_i_tsp_tempSensor_Bridge.c_initialization_api.get.logDebug("")
        t.TemperatureControl.TempSensor_i_tsp_tempSensor_Bridge.c_initialization_api.get.logError("")
        t.TemperatureControl.TempSensor_i_tsp_tempSensor_Bridge.c_operational_api.get.logInfo("")
        t.TemperatureControl.TempSensor_i_tsp_tempSensor_Bridge.c_operational_api.get.logDebug("")
        t.TemperatureControl.TempSensor_i_tsp_tempSensor_Bridge.c_operational_api.get.logError("")
        t.TemperatureControl.TempSensor_i_tsp_tempSensor_Bridge.c_initialization_api.get.put_currentTemp(TemperatureControl.Temperature_i.example())
        t.TemperatureControl.TempSensor_i_tsp_tempSensor_Bridge.c_operational_api.get.put_currentTemp(TemperatureControl.Temperature_i.example())
        t.TemperatureControl.TempSensor_i_tsp_tempSensor_Bridge.c_initialization_api.get.put_tempChanged()
        t.TemperatureControl.TempSensor_i_tsp_tempSensor_Bridge.c_operational_api.get.put_tempChanged()
      }
      {
        t.TemperatureControl.TempControl_i_tcp_tempControl_Bridge.c_initialization_api.get.logInfo("")
        t.TemperatureControl.TempControl_i_tcp_tempControl_Bridge.c_initialization_api.get.logDebug("")
        t.TemperatureControl.TempControl_i_tcp_tempControl_Bridge.c_initialization_api.get.logError("")
        t.TemperatureControl.TempControl_i_tcp_tempControl_Bridge.c_operational_api.get.logInfo("")
        t.TemperatureControl.TempControl_i_tcp_tempControl_Bridge.c_operational_api.get.logDebug("")
        t.TemperatureControl.TempControl_i_tcp_tempControl_Bridge.c_operational_api.get.logError("")
        val apiUsage_currentTemp: Option[TemperatureControl.Temperature_i] = t.TemperatureControl.TempControl_i_tcp_tempControl_Bridge.c_operational_api.get.get_currentTemp()
        val apiUsage_fanAck: Option[TemperatureControl.FanAck.Type] = t.TemperatureControl.TempControl_i_tcp_tempControl_Bridge.c_operational_api.get.get_fanAck()
        val apiUsage_setPoint: Option[TemperatureControl.SetPoint_i] = t.TemperatureControl.TempControl_i_tcp_tempControl_Bridge.c_operational_api.get.get_setPoint()
        t.TemperatureControl.TempControl_i_tcp_tempControl_Bridge.c_initialization_api.get.put_fanCmd(TemperatureControl.FanCmd.byOrdinal(0).get)
        t.TemperatureControl.TempControl_i_tcp_tempControl_Bridge.c_operational_api.get.put_fanCmd(TemperatureControl.FanCmd.byOrdinal(0).get)
        val apiUsage_tempChanged: Option[art.Empty] = t.TemperatureControl.TempControl_i_tcp_tempControl_Bridge.c_operational_api.get.get_tempChanged()
      }
      {
        t.TemperatureControl.Fan_i_fp_fan_Bridge.c_initialization_api.get.logInfo("")
        t.TemperatureControl.Fan_i_fp_fan_Bridge.c_initialization_api.get.logDebug("")
        t.TemperatureControl.Fan_i_fp_fan_Bridge.c_initialization_api.get.logError("")
        t.TemperatureControl.Fan_i_fp_fan_Bridge.c_operational_api.get.logInfo("")
        t.TemperatureControl.Fan_i_fp_fan_Bridge.c_operational_api.get.logDebug("")
        t.TemperatureControl.Fan_i_fp_fan_Bridge.c_operational_api.get.logError("")
        val apiUsage_fanCmd: Option[TemperatureControl.FanCmd.Type] = t.TemperatureControl.Fan_i_fp_fan_Bridge.c_operational_api.get.get_fanCmd()
        t.TemperatureControl.Fan_i_fp_fan_Bridge.c_initialization_api.get.put_fanAck(TemperatureControl.FanAck.byOrdinal(0).get)
        t.TemperatureControl.Fan_i_fp_fan_Bridge.c_operational_api.get.put_fanAck(TemperatureControl.FanAck.byOrdinal(0).get)
      }
    }
  }
}

