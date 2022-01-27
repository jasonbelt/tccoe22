#include <all.h>

// t.Cli.RunChoice.Type

B t_Cli_RunChoice_Type__eq(t_Cli_RunChoice_Type this, t_Cli_RunChoice_Type other);
B t_Cli_RunChoice_Type__ne(t_Cli_RunChoice_Type this, t_Cli_RunChoice_Type other);
Z t_Cli_RunChoice_Type__ordinal(t_Cli_RunChoice_Type this);
void t_Cli_RunChoice_Type_name_(String result, t_Cli_RunChoice_Type this);

void t_Cli_RunChoice_Type_byName(STACK_FRAME Option_5F39ED result, String s) {
  if (String__eq(s, string("Default"))) Type_assign(result, &((struct Some_2040D2) { .type = TSome_2040D2, .value = t_Cli_RunChoice_Type_Default }), sizeof(union Option_5F39ED));
  else if (String__eq(s, string("RoundRobin"))) Type_assign(result, &((struct Some_2040D2) { .type = TSome_2040D2, .value = t_Cli_RunChoice_Type_RoundRobin }), sizeof(union Option_5F39ED));
  else if (String__eq(s, string("Static"))) Type_assign(result, &((struct Some_2040D2) { .type = TSome_2040D2, .value = t_Cli_RunChoice_Type_Static }), sizeof(union Option_5F39ED));
  else if (String__eq(s, string("Legacy"))) Type_assign(result, &((struct Some_2040D2) { .type = TSome_2040D2, .value = t_Cli_RunChoice_Type_Legacy }), sizeof(union Option_5F39ED));
  else Type_assign(result, &((struct None_72E81E) { .type = TNone_72E81E }), sizeof(union Option_5F39ED));
}

void t_Cli_RunChoice_Type_byOrdinal(STACK_FRAME Option_5F39ED result, Z n) {
  switch ((t_Cli_RunChoice_Type) n) {
    case t_Cli_RunChoice_Type_Default: Type_assign(result, &((struct Some_2040D2) { .type = TSome_2040D2, .value = t_Cli_RunChoice_Type_Default }), sizeof(union Option_5F39ED)); return;
    case t_Cli_RunChoice_Type_RoundRobin: Type_assign(result, &((struct Some_2040D2) { .type = TSome_2040D2, .value = t_Cli_RunChoice_Type_RoundRobin }), sizeof(union Option_5F39ED)); return;
    case t_Cli_RunChoice_Type_Static: Type_assign(result, &((struct Some_2040D2) { .type = TSome_2040D2, .value = t_Cli_RunChoice_Type_Static }), sizeof(union Option_5F39ED)); return;
    case t_Cli_RunChoice_Type_Legacy: Type_assign(result, &((struct Some_2040D2) { .type = TSome_2040D2, .value = t_Cli_RunChoice_Type_Legacy }), sizeof(union Option_5F39ED)); return;
    default: Type_assign(result, &((struct None_72E81E) { .type = TNone_72E81E }), sizeof(union Option_5F39ED)); return;
  }
}

Z t_Cli_RunChoice_Type_numOfElements(void) {
  return Z_C(4);
}

void t_Cli_RunChoice_Type_cprint(t_Cli_RunChoice_Type this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  switch (this) {
    case t_Cli_RunChoice_Type_Default: String_cprint(string("Default"), isOut); return;
    case t_Cli_RunChoice_Type_RoundRobin: String_cprint(string("RoundRobin"), isOut); return;
    case t_Cli_RunChoice_Type_Static: String_cprint(string("Static"), isOut); return;
    case t_Cli_RunChoice_Type_Legacy: String_cprint(string("Legacy"), isOut); return;
  }
  #endif
}

void t_Cli_RunChoice_Type_string_(STACK_FRAME String result, t_Cli_RunChoice_Type this) {
  DeclNewStackFrame(caller, "Demo.scala", "t_Cli_RunChoice_Type", "string", 0);
  switch (this) {
    case t_Cli_RunChoice_Type_Default: String_string_(SF result, string("Default")); return;
    case t_Cli_RunChoice_Type_RoundRobin: String_string_(SF result, string("RoundRobin")); return;
    case t_Cli_RunChoice_Type_Static: String_string_(SF result, string("Static")); return;
    case t_Cli_RunChoice_Type_Legacy: String_string_(SF result, string("Legacy")); return;
  }
}