// #Sireum

package t.TemperatureControl

import org.sireum._
import t._

// This file was auto-generated.  Do not edit

@enum object FanCmd {
  "On"
  "Off"
}

object FanCmd_Payload {
  def example(): FanCmd_Payload = {
    return FanCmd_Payload(TemperatureControl.FanCmd.byOrdinal(0).get)
  }
}

@datatype class FanCmd_Payload(value: TemperatureControl.FanCmd.Type) extends art.DataContent
