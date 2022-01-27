#include <all.h>

// art.UrgentPortProto

B art_UrgentPortProto__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    default: return F;
  }
}

art_UrgentPortProto art_UrgentPortProto__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    default:
      fprintf(stderr, "Invalid cast from %s to art.UrgentPortProto.", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (art_UrgentPortProto) this;
}

void art_UrgentPortProto_string_(STACK_FRAME String result, art_UrgentPortProto this);

Z art_UrgentPortProto_urgency_(STACK_FRAME art_UrgentPortProto this) {
  switch (this->type) {
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}

Z art_UrgentPortProto_id_(STACK_FRAME art_UrgentPortProto this) {
  switch (this->type) {
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}