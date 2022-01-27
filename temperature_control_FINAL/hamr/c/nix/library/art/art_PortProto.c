#include <all.h>

// art.PortProto

B art_PortProto__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Tart_Port_7B28AF: return T;
    case Tart_Port_9CBF18: return T;
    case Tart_Port_0A16CC: return T;
    case Tart_Port_216126: return T;
    case Tart_Port_2ED9E6: return T;
    default: return F;
  }
}

art_PortProto art_PortProto__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Tart_Port_7B28AF: break;
    case Tart_Port_9CBF18: break;
    case Tart_Port_0A16CC: break;
    case Tart_Port_216126: break;
    case Tart_Port_2ED9E6: break;
    default:
      fprintf(stderr, "Invalid cast from %s to art.PortProto.", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (art_PortProto) this;
}

void art_PortProto_string_(STACK_FRAME String result, art_PortProto this);

Z art_PortProto_id_(STACK_FRAME art_PortProto this) {
  switch (this->type) {
    case Tart_Port_7B28AF: return art_Port_7B28AF_id_((art_Port_7B28AF) this);
    case Tart_Port_9CBF18: return art_Port_9CBF18_id_((art_Port_9CBF18) this);
    case Tart_Port_0A16CC: return art_Port_0A16CC_id_((art_Port_0A16CC) this);
    case Tart_Port_216126: return art_Port_216126_id_((art_Port_216126) this);
    case Tart_Port_2ED9E6: return art_Port_2ED9E6_id_((art_Port_2ED9E6) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}