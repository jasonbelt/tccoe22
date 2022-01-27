#include <all.h>

// art.UPort

B art_UPort__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Tart_Port_7B28AF: return T;
    case Tart_Port_9CBF18: return T;
    case Tart_Port_0A16CC: return T;
    case Tart_Port_216126: return T;
    case Tart_Port_2ED9E6: return T;
    default: return F;
  }
}

art_UPort art_UPort__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Tart_Port_7B28AF: break;
    case Tart_Port_9CBF18: break;
    case Tart_Port_0A16CC: break;
    case Tart_Port_216126: break;
    case Tart_Port_2ED9E6: break;
    default:
      fprintf(stderr, "Invalid cast from %s to art.UPort.", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (art_UPort) this;
}

void art_UPort_string_(STACK_FRAME String result, art_UPort this);

Z art_UPort_id_(STACK_FRAME art_UPort this) {
  switch (this->type) {
    case Tart_Port_7B28AF: return art_Port_7B28AF_id_((art_Port_7B28AF) this);
    case Tart_Port_9CBF18: return art_Port_9CBF18_id_((art_Port_9CBF18) this);
    case Tart_Port_0A16CC: return art_Port_0A16CC_id_((art_Port_0A16CC) this);
    case Tart_Port_216126: return art_Port_216126_id_((art_Port_216126) this);
    case Tart_Port_2ED9E6: return art_Port_2ED9E6_id_((art_Port_2ED9E6) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}

art_PortMode_Type art_UPort_mode_(STACK_FRAME art_UPort this) {
  switch (this->type) {
    case Tart_Port_7B28AF: return art_Port_7B28AF_mode_((art_Port_7B28AF) this);
    case Tart_Port_9CBF18: return art_Port_9CBF18_mode_((art_Port_9CBF18) this);
    case Tart_Port_0A16CC: return art_Port_0A16CC_mode_((art_Port_0A16CC) this);
    case Tart_Port_216126: return art_Port_216126_mode_((art_Port_216126) this);
    case Tart_Port_2ED9E6: return art_Port_2ED9E6_mode_((art_Port_2ED9E6) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}

void art_UPort_name_(STACK_FRAME String result, art_UPort this) {
  switch (this->type) {
    case Tart_Port_7B28AF: Type_assign(result, art_Port_7B28AF_name_((art_Port_7B28AF) this), sizeof(struct StaticString)); return;
    case Tart_Port_9CBF18: Type_assign(result, art_Port_9CBF18_name_((art_Port_9CBF18) this), sizeof(struct StaticString)); return;
    case Tart_Port_0A16CC: Type_assign(result, art_Port_0A16CC_name_((art_Port_0A16CC) this), sizeof(struct StaticString)); return;
    case Tart_Port_216126: Type_assign(result, art_Port_216126_name_((art_Port_216126) this), sizeof(struct StaticString)); return;
    case Tart_Port_2ED9E6: Type_assign(result, art_Port_2ED9E6_name_((art_Port_2ED9E6) this), sizeof(struct StaticString)); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}