#include <all.h>

// art.Port[t.TemperatureControl.Temperature_i]

B art_Port_7B28AF__eq(art_Port_7B28AF this, art_Port_7B28AF other) {
  if (Z__ne(this->id, other->id)) return F;
  if (String__ne((String) &this->name, (String) &other->name)) return F;
  if (art_PortMode_Type__ne(this->mode, other->mode)) return F;
  return T;
}

B art_Port_7B28AF__ne(art_Port_7B28AF this, art_Port_7B28AF other);

void art_Port_7B28AF_string_(STACK_FRAME String result, art_Port_7B28AF this) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.Port", "string", 0);
  String_string_(SF result, string("Port("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  String_string_(SF result, (String) &this->name);
  String_string_(SF result, sep);
  art_PortMode_Type_string_(SF result, this->mode);
  String_string_(SF result, string(")"));
}

void art_Port_7B28AF_cprint(art_Port_7B28AF this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Port("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  String_cprint((String) &this->name, isOut);
  String_cprint(sep, isOut);
  art_PortMode_Type_cprint(this->mode, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B art_Port_7B28AF__is(STACK_FRAME void* this);
art_Port_7B28AF art_Port_7B28AF__as(STACK_FRAME void *this);

void art_Port_7B28AF_apply(STACK_FRAME art_Port_7B28AF this, Z id, String name, art_PortMode_Type mode) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.art_Port_7B28AF", "apply", 0);
  this->id = id;
  Type_assign(&this->name, name, sizeof(struct StaticString));
  this->mode = mode;
}