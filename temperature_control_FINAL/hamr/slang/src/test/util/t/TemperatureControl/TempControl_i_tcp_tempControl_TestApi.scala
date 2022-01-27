package t.TemperatureControl

import org.sireum._
import art.{ArtNative_Ext, Empty}
import t._

// This file was auto-generated.  Do not edit
abstract class TempControl_i_tcp_tempControl_TestApi extends BridgeTestSuite[TempControl_i_tcp_tempControl_Bridge](Arch.TempControlSystem_i_Instance_tcp_tempControl) {

  /** helper function to set the values of all input ports.
   * @param currentTemp payload for data port currentTemp
   * @param fanAck payloads for event data port fanAck.
   *   ART currently supports single element event data queues so
   *   only the last element of fanAck will be used
   * @param setPoint payloads for event data port setPoint.
   *   ART currently supports single element event data queues so
   *   only the last element of setPoint will be used
   * @param tempChanged the number of events to place in the tempChanged event port queue.
   *   ART currently supports single element event queues so at most
   *   one event will be placed in the queue.
   */
  def put_concrete_inputs(currentTemp : TemperatureControl.Temperature_i,
                          fanAck : ISZ[TemperatureControl.FanAck.Type],
                          setPoint : ISZ[TemperatureControl.SetPoint_i],
                          tempChanged : Z): Unit = {
    put_currentTemp(currentTemp)
    for(v <- fanAck){
      put_fanAck(v)
    }
    for(v <- setPoint){
      put_setPoint(v)
    }
    for(i <- 0 until tempChanged) {
      put_tempChanged()
    }
  }


  /** helper function to check TempControl_i_tcp_tempControl's
   * output ports.  Use named arguments to check subsets of the output ports.
   * @param fanCmd method that will be called with the payloads to be sent
   *        on the outgoing event data port 'fanCmd'.
   */
  def check_concrete_output(fanCmd: ISZ[TemperatureControl.FanCmd.Type] => B = fanCmdParam => {T}): Unit = {
    var testFailures: ISZ[ST] = ISZ()

    var fanCmdValue: ISZ[TemperatureControl.FanCmd.Type] = ISZ()
    // TODO: event data port getter should return all of the events/payloads
    //       received on event data ports when queue sizes > 1 support is added
    //       to ART
    if(get_fanCmd().nonEmpty) fanCmdValue = fanCmdValue :+ get_fanCmd().get
    if(!fanCmd(fanCmdValue)) {
      testFailures = testFailures :+ st"'fanCmd' did not match expected: received ${fanCmdValue.size} events with the following payloads ${fanCmdValue}"
    }

    assert(testFailures.isEmpty, st"${(testFailures, "\n")}".render)
  }


  // setter for in DataPort
  def put_currentTemp(value : TemperatureControl.Temperature_i): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.currentTemp_Id, TemperatureControl.Temperature_i_Payload(value))
  }

  // setter for in EventDataPort
  def put_fanAck(value : TemperatureControl.FanAck.Type): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.fanAck_Id, TemperatureControl.FanAck_Payload(value))
  }

  // setter for in EventDataPort
  def put_setPoint(value : TemperatureControl.SetPoint_i): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.setPoint_Id, TemperatureControl.SetPoint_i_Payload(value))
  }

  // setter for in EventPort
  def put_tempChanged(): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.tempChanged_Id, Empty())
  }

  // getter for out EventDataPort
  def get_fanCmd(): Option[TemperatureControl.FanCmd.Type] = {
    val value: Option[TemperatureControl.FanCmd.Type] = get_fanCmd_payload() match {
      case Some(TemperatureControl.FanCmd_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port fanCmd.  Expecting 'TemperatureControl.FanCmd_Payload' but received ${v}")
      case _ => None[TemperatureControl.FanCmd.Type]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_fanCmd_payload(): Option[TemperatureControl.FanCmd_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.fanCmd_Id).asInstanceOf[Option[TemperatureControl.FanCmd_Payload]]
  }

}
