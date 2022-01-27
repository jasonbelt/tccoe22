// #Sireum

package t.TemperatureControl

import org.sireum._
import t._

// This file was auto-generated.  Do not edit

object Temperature_i {
  def example(): TemperatureControl.Temperature_i = {
    return TemperatureControl.Temperature_i(Base_Types.Float_32_example(), TemperatureControl.TempUnit.byOrdinal(0).get)
  }
}

@datatype class Temperature_i(
  degrees : F32,
  unit : TemperatureControl.TempUnit.Type) {
}

object Temperature_i_Payload {
  def example(): Temperature_i_Payload = {
    return Temperature_i_Payload(TemperatureControl.Temperature_i.example())
  }
}

@datatype class Temperature_i_Payload(value: TemperatureControl.Temperature_i) extends art.DataContent
