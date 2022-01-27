// #Sireum

package t.TemperatureControl

import org.sireum._
import t._

// This file will not be overwritten so is safe to edit
object Fan_i_fp_fan {

  def initialise(api: Fan_i_Initialization_Api): Unit = { }

  def handle_fanCmd(api: Fan_i_Operational_Api, value : TemperatureControl.FanCmd.Type): Unit = { }

  def activate(api: Fan_i_Operational_Api): Unit = { }

  def deactivate(api: Fan_i_Operational_Api): Unit = { }

  def finalise(api: Fan_i_Operational_Api): Unit = { }

  def recover(api: Fan_i_Operational_Api): Unit = { }
}
