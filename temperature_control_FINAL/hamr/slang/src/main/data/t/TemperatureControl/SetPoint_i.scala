// #Sireum

package t.TemperatureControl

import org.sireum._
import t._

// This file was auto-generated.  Do not edit

object SetPoint_i {
  def example(): TemperatureControl.SetPoint_i = {
    return TemperatureControl.SetPoint_i(TemperatureControl.Temperature_i.example(), TemperatureControl.Temperature_i.example())
  }
}

@datatype class SetPoint_i(
  low : TemperatureControl.Temperature_i,
  high : TemperatureControl.Temperature_i) {
}

object SetPoint_i_Payload {
  def example(): SetPoint_i_Payload = {
    return SetPoint_i_Payload(TemperatureControl.SetPoint_i.example())
  }
}

@datatype class SetPoint_i_Payload(value: TemperatureControl.SetPoint_i) extends art.DataContent
