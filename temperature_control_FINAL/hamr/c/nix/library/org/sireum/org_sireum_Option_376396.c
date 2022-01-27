#include <all.h>

// Option[art.ArtSlangMessage]

B Option_376396__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_24B656: return T;
    case TNone_50AF88: return T;
    default: return F;
  }
}

Option_376396 Option_376396__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_24B656: break;
    case TNone_50AF88: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[art.ArtSlangMessage].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_376396) this;
}

void Option_376396_string_(STACK_FRAME String result, Option_376396 this);

void Option_376396_get_(STACK_FRAME art_ArtSlangMessage result, Option_376396 this) {
  switch (this->type) {
    case TSome_24B656: Some_24B656_get_(CALLER (art_ArtSlangMessage) result, (Some_24B656) this); return;
    case TNone_50AF88: None_50AF88_get_(CALLER (art_ArtSlangMessage) result, (None_50AF88) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}

B Option_376396_nonEmpty_(STACK_FRAME Option_376396 this) {
  switch (this->type) {
    case TSome_24B656: return Some_24B656_nonEmpty_(CALLER (Some_24B656) this);
    case TNone_50AF88: return None_50AF88_nonEmpty_(CALLER (None_50AF88) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}