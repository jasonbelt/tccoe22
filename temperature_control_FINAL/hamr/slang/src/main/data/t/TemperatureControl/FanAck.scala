// #Sireum

package t.TemperatureControl

import org.sireum._
import t._

// This file was auto-generated.  Do not edit

@enum object FanAck {
  "Ok"
  "Error"
}

object FanAck_Payload {
  def example(): FanAck_Payload = {
    return FanAck_Payload(TemperatureControl.FanAck.byOrdinal(0).get)
  }
}

@datatype class FanAck_Payload(value: TemperatureControl.FanAck.Type) extends art.DataContent
