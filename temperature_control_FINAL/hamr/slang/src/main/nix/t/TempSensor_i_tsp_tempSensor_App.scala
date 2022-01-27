// #Sireum

package t

import org.sireum._
import art._
import art.scheduling.nop.NopScheduler

// This file was auto-generated.  Do not edit

object TempSensor_i_tsp_tempSensor_App extends App {

  val entryPoints: Bridge.EntryPoints = Arch.TempControlSystem_i_Instance_tsp_tempSensor.entryPoints
  val appPortId: Art.PortId = IPCPorts.TempSensor_i_tsp_tempSensor_App
  val appPortIdOpt: Option[Art.PortId] = Some(appPortId)

  def initialiseArchitecture(seed: Z): Unit = {
    Platform.initialise(seed, appPortIdOpt)

    Art.run(Arch.ad, NopScheduler())
  }

  def initialise(): Unit = {
    entryPoints.initialise()
  }

  def compute(): Unit = {

    entryPoints.compute()
    t.Process.sleep(1000)
  }

  def finalise(): Unit = {
    entryPoints.finalise()
  }

  def main(args: ISZ[String]): Z = {

    val seed: Z = if (args.size == z"1") {
      val n = Z(args(0)).get
      if (n == z"0") 1 else n
    } else {
      1
    }

    initialiseArchitecture(seed)

    Platform.receive(appPortIdOpt, IPCPorts.emptyReceiveOut) // pause after setting up component

    initialise()

    Platform.receive(appPortIdOpt, IPCPorts.emptyReceiveOut) // pause after component init

    println("TempSensor_i_tsp_tempSensor_App starting ...")

    ArtNix.timeDispatch()

    var terminated = F
    while (!terminated) {
      val out = IPCPorts.emptyReceiveAsyncOut
      Platform.receiveAsync(appPortIdOpt, out)
      if (out.value2.isEmpty) {
        compute()
      } else {
        terminated = T
      }
    }
    exit()

    touch()

    return 0
  }

  def touch(): Unit = {
    if(F) {
      TranspilerToucher.touch()

      // add types used in Platform.receive and Platform.receiveAsync
      val mbox2Boolean_Payload: MBox2[Art.PortId, DataContent] = MBox2(0, Base_Types.Boolean_Payload(T))
      val mbox2OptionDataContent: MBox2[Art.PortId, Option[DataContent]] = MBox2(0, None())

      // touch each payload/type in case some are only used as a field in a record
      def printDataContent(a: art.DataContent): Unit = { println(s"${a}") }

      printDataContent(Base_Types.Float_32_Payload(Base_Types.Float_32_example()))
      printDataContent(TemperatureControl.TempUnit_Payload(TemperatureControl.TempUnit.byOrdinal(0).get))
      printDataContent(TemperatureControl.Temperature_i_Payload(TemperatureControl.Temperature_i.example()))
      printDataContent(TemperatureControl.SetPoint_i_Payload(TemperatureControl.SetPoint_i.example()))
      printDataContent(TemperatureControl.FanAck_Payload(TemperatureControl.FanAck.byOrdinal(0).get))
      printDataContent(TemperatureControl.FanCmd_Payload(TemperatureControl.FanCmd.byOrdinal(0).get))
      printDataContent(art.Empty())

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
  }

  def exit(): Unit = {
    finalise()
    Platform.finalise()
  }

  override def atExit(): Unit = {
    exit()
  }
}