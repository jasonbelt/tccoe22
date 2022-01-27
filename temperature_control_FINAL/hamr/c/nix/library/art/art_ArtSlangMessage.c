#include <all.h>

B art_ArtSlangMessage_initialized_ = F;

Z _art_ArtSlangMessage_UNSET_PORT;
S64 _art_ArtSlangMessage_UNSET_TIME;

void art_ArtSlangMessage_init(STACK_FRAME_ONLY) {
  if (art_ArtSlangMessage_initialized_) return;
  art_ArtSlangMessage_initialized_ = T;
  DeclNewStackFrame(caller, "ArtNativeSlang.scala", "art.ArtSlangMessage", "<init>", 0);
  art_ArtSlangMessage_init_UNSET_PORT(SF_LAST);
  art_ArtSlangMessage_init_UNSET_TIME(SF_LAST);
}

Z art_ArtSlangMessage_UNSET_PORT(STACK_FRAME_ONLY) {
  art_ArtSlangMessage_init(CALLER_LAST);
  return _art_ArtSlangMessage_UNSET_PORT;
}

S64 art_ArtSlangMessage_UNSET_TIME(STACK_FRAME_ONLY) {
  art_ArtSlangMessage_init(CALLER_LAST);
  return _art_ArtSlangMessage_UNSET_TIME;
}

// art.ArtSlangMessage

B art_ArtSlangMessage__eq(art_ArtSlangMessage this, art_ArtSlangMessage other) {
  if (art_DataContent__ne((art_DataContent) &this->data, (art_DataContent) &other->data)) return F;
  if (Z__ne(this->srcPortId, other->srcPortId)) return F;
  if (Z__ne(this->dstPortId, other->dstPortId)) return F;
  if (S64__ne(this->putValueTimestamp, other->putValueTimestamp)) return F;
  if (S64__ne(this->sendOutputTimestamp, other->sendOutputTimestamp)) return F;
  if (S64__ne(this->dstArrivalTimestamp, other->dstArrivalTimestamp)) return F;
  if (S64__ne(this->receiveInputTimestamp, other->receiveInputTimestamp)) return F;
  return T;
}

B art_ArtSlangMessage__ne(art_ArtSlangMessage this, art_ArtSlangMessage other);

void art_ArtSlangMessage_string_(STACK_FRAME String result, art_ArtSlangMessage this) {
  DeclNewStackFrame(caller, "ArtNativeSlang.scala", "art.ArtSlangMessage", "string", 0);
  String_string_(SF result, string("ArtSlangMessage("));
  String sep = string(", ");
  art_DataContent_string_(SF result, (art_DataContent) &this->data);
  String_string_(SF result, sep);
  Z_string_(SF result, this->srcPortId);
  String_string_(SF result, sep);
  Z_string_(SF result, this->dstPortId);
  String_string_(SF result, sep);
  S64_string_(SF result, this->putValueTimestamp);
  String_string_(SF result, sep);
  S64_string_(SF result, this->sendOutputTimestamp);
  String_string_(SF result, sep);
  S64_string_(SF result, this->dstArrivalTimestamp);
  String_string_(SF result, sep);
  S64_string_(SF result, this->receiveInputTimestamp);
  String_string_(SF result, string(")"));
}

void art_ArtSlangMessage_cprint(art_ArtSlangMessage this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("ArtSlangMessage("), isOut);
  String sep = string(", ");
  art_DataContent_cprint((art_DataContent) &this->data, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->srcPortId, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->dstPortId, isOut);
  String_cprint(sep, isOut);
  S64_cprint(this->putValueTimestamp, isOut);
  String_cprint(sep, isOut);
  S64_cprint(this->sendOutputTimestamp, isOut);
  String_cprint(sep, isOut);
  S64_cprint(this->dstArrivalTimestamp, isOut);
  String_cprint(sep, isOut);
  S64_cprint(this->receiveInputTimestamp, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B art_ArtSlangMessage__is(STACK_FRAME void* this);
art_ArtSlangMessage art_ArtSlangMessage__as(STACK_FRAME void *this);

void art_ArtSlangMessage_apply(STACK_FRAME art_ArtSlangMessage this, art_DataContent data, Z srcPortId, Z dstPortId, S64 putValueTimestamp, S64 sendOutputTimestamp, S64 dstArrivalTimestamp, S64 receiveInputTimestamp) {
  DeclNewStackFrame(caller, "ArtNativeSlang.scala", "art.ArtSlangMessage", "apply", 0);
  Type_assign(&this->data, data, sizeof(union art_DataContent));
  this->srcPortId = srcPortId;
  this->dstPortId = dstPortId;
  this->putValueTimestamp = putValueTimestamp;
  this->sendOutputTimestamp = sendOutputTimestamp;
  this->dstArrivalTimestamp = dstArrivalTimestamp;
  this->receiveInputTimestamp = receiveInputTimestamp;
}

void art_ArtSlangMessage_init_UNSET_PORT(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(10);
  _art_ArtSlangMessage_UNSET_PORT = Z_C(-1);
};

void art_ArtSlangMessage_init_UNSET_TIME(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(11);
  _art_ArtSlangMessage_UNSET_TIME = S64_C(-1);
};