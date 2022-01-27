// #Sireum

package t.TemperatureControl

import org.sireum._
import t._

// This file will not be overwritten so is safe to edit
object TempControl_i_tcp_tempControl {

  def initialise(api: TempControl_i_Initialization_Api): Unit = { }

  def handle_fanAck(api: TempControl_i_Operational_Api, value : TemperatureControl.FanAck.Type): Unit = { }

  def handle_setPoint(api: TempControl_i_Operational_Api, value : TemperatureControl.SetPoint_i): Unit = { }

  def handle_tempChanged(api: TempControl_i_Operational_Api): Unit = { }

  def activate(api: TempControl_i_Operational_Api): Unit = { }

  def deactivate(api: TempControl_i_Operational_Api): Unit = { }

  def finalise(api: TempControl_i_Operational_Api): Unit = { }

  def recover(api: TempControl_i_Operational_Api): Unit = { }
}
