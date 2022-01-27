#include <all.h>

// t.Cli

B t_Cli__eq(t_Cli this, t_Cli other) {
  if (C__ne(this->pathSep, other->pathSep)) return F;
  return T;
}

B t_Cli__ne(t_Cli this, t_Cli other);

void t_Cli_string_(STACK_FRAME String result, t_Cli this) {
  DeclNewStackFrame(caller, "Demo.scala", "t.Cli", "string", 0);
  String_string_(SF result, string("Cli("));
  C_string_(SF result, this->pathSep);
  String_string_(SF result, string(")"));
}

void t_Cli_cprint(t_Cli this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Cli("), isOut);
  C_cprint(this->pathSep, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B t_Cli__is(STACK_FRAME void* this);
t_Cli t_Cli__as(STACK_FRAME void *this);

void t_Cli_apply(STACK_FRAME t_Cli this, C pathSep) {
  DeclNewStackFrame(caller, "Demo.scala", "t.Cli", "apply", 0);
  this->pathSep = pathSep;
}

Unit t_Cli_help_(STACK_FRAME t_Cli this) {
  DeclNewStackFrame(caller, "Demo.scala", "t.Cli.parseRun", "help", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(91);
  {
    String_cprint(string("Run Slang Embedded Program"), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(92);
  {
    cprintln(T);
    cflush(T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(93);
  {
    String_cprint(string("Usage: <option>*"), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(94);
  {
    cprintln(T);
    cflush(T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(95);
  {
    String_cprint(string("Available Options:"), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(96);
  {
    String_cprint(string("-s, --scheduler          The scheduler to use.  See Demo.scala for information"), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(97);
  {
    String_cprint(string("                           on 'default' (expects one of { default, roundRobin,"), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(98);
  {
    String_cprint(string("                           static, legacy }; default: default)"), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(99);
  {
    String_cprint(string("-h, --help               Display this information"), T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

inline B t_Cli_parseRun_extract_113_16_5F39ED(STACK_FRAME_SF Option_5F39ED t_9, t_Cli this, t_Cli_RunChoice_Type *_v_113_21) {
  if (!Some_2040D2__is(SF t_9)) return F;
  *_v_113_21 = Some_2040D2_value_(Some_2040D2__as(SF t_9));
  return T;
}

inline B t_Cli_parseRun_extract_114_16_5F39ED(STACK_FRAME_SF Option_5F39ED t_9, t_Cli this) {
  return T;
}

void t_Cli_parseRun_(STACK_FRAME Option_89E471 result, t_Cli this, IS_948B60 args, Z i) {
  DeclNewStackFrame(caller, "Demo.scala", "t.Cli", "parseRun", 0);

  sfUpdateLoc(102);
  t_Cli_RunChoice_Type scheduler;
  {
    scheduler = t_Cli_RunChoice_Type_Default;
  }

  sfUpdateLoc(103);
  Z j;
  {
    j = i;
  }

  sfUpdateLoc(104);
  B isOption;
  {
    isOption = T;
  }

  sfUpdateLoc(105);
  B t_105_5;
  {
    B t_0 = F;
    Z t_1 = IS_948B60_size(SF args);
    if (Z__lt(j, t_1)) {
      t_0 = isOption;
    }
    t_105_5 = t_0;
  }
  while(t_105_5) {

    sfUpdateLoc(106);
    DeclNewString(_arg);
    String arg = (String) &_arg;
    {
      Type_assign(arg, IS_948B60_at(args, j), sizeof(struct StaticString));
    }

    sfUpdateLoc(107);
    B t_2;
    {
      B t_3 = T;
      if (!String__eq(arg, string("-h"))) {
        t_3 = String__eq(arg, string("--help"));
      }
      t_2 = t_3;
    }
    if (t_2) {

      sfUpdateLoc(108);
      {
        t_Cli_help_(SF this);
      }
      DeclNewt_Cli_HelpOption(t_5);
      t_Cli_HelpOption_apply(SF &t_5);
      DeclNewSome_040EE4(t_4);
      Some_040EE4_apply(SF &t_4, (t_Cli_RunTopOption) (&t_5));
      Type_assign(result, (&t_4), sizeof(struct Some_040EE4));
      return;
    } else {

      sfUpdateLoc(110);
      B t_6;
      {
        B t_7 = T;
        if (!String__eq(arg, string("-s"))) {
          t_7 = String__eq(arg, string("--scheduler"));
        }
        t_6 = t_7;
      }
      if (t_6) {

        sfUpdateLoc(111);
        Option_5F39ED o;
        DeclNewOption_5F39ED(t_8);
        t_Cli_parseRunChoice_(SF (Option_5F39ED) &t_8, this, (IS_948B60) args, Z__add(j, Z_C(1)));
        o = (Option_5F39ED) ((Option_5F39ED) &t_8);

        sfUpdateLoc(112);
        Option_5F39ED t_9 = o;
        B match_112_9 = F;
        if (!match_112_9) {
          t_Cli_RunChoice_Type v_113_21;
          match_112_9 = t_Cli_parseRun_extract_113_16_5F39ED(SF t_9, this, &v_113_21);
          if (match_112_9) {

            sfUpdateLoc(113);
            {
              scheduler = v_113_21;
            }
          }
        }
        if (!match_112_9) {
          match_112_9 = t_Cli_parseRun_extract_114_16_5F39ED(SF t_9, this);
          if (match_112_9) {
            DeclNewNone_892E2E(t_10);
            None_892E2E_apply(SF &t_10);
            Type_assign(result, (&t_10), sizeof(struct None_892E2E));
            return;
          }
        }
        sfAssert(match_112_9, "Error when pattern matching.");
      } else {

        #ifndef SIREUM_NO_PRINT

        sfUpdateLoc(117);
        {
          DeclNewString(t_11);
          String_string_(SF (String) &t_11, string("Unrecognized option '"));
          String_string_(SF (String) &t_11, arg);
          String_string_(SF (String) &t_11, string("'."));
          String_cprint(((String) &t_11), F);
          cprintln(F);
          cflush(F);
        }

        #endif
        DeclNewNone_892E2E(t_12);
        None_892E2E_apply(SF &t_12);
        Type_assign(result, (&t_12), sizeof(struct None_892E2E));
        return;
      }
    }

    sfUpdateLoc(120);
    {
      j = Z__add(j, Z_C(2));
    }

    sfUpdateLoc(105);
    B t_13 = F;
    Z t_14 = IS_948B60_size(SF args);
    if (Z__lt(j, t_14)) {
      t_13 = isOption;
    }
    t_105_5 = t_13;
  }
  DeclNewt_Cli_RunOption(t_16);
  t_Cli_RunOption_apply(SF &t_16, (String) string(""), (IS_948B60) args, scheduler);
  DeclNewSome_040EE4(t_15);
  Some_040EE4_apply(SF &t_15, (t_Cli_RunTopOption) (&t_16));
  Type_assign(result, (&t_15), sizeof(struct Some_040EE4));
  return;
}

void t_Cli_parseRunChoice_(STACK_FRAME Option_5F39ED result, t_Cli this, IS_948B60 args, Z i) {
  DeclNewStackFrame(caller, "Demo.scala", "t.Cli", "parseRunChoice", 0);

  sfUpdateLoc(80);
  B t_0;
  {
    Z t_1 = IS_948B60_size(SF args);
    t_0 = Z__ge(i, t_1);
  }
  if (t_0) {

    #ifndef SIREUM_NO_PRINT

    sfUpdateLoc(81);
    {
      String_cprint(string("Expecting one of the following: { default, roundRobin, static, legacy }, but none found."), F);
      cprintln(F);
      cflush(F);
    }

    #endif
    DeclNewNone_72E81E(t_2);
    None_72E81E_apply(SF &t_2);
    Type_assign(result, (&t_2), sizeof(struct None_72E81E));
    return;
  }

  sfUpdateLoc(84);
  Option_5F39ED r;
  DeclNewOption_5F39ED(t_3);
  t_Cli_parseRunChoiceH_(SF (Option_5F39ED) &t_3, this, (String) IS_948B60_at(args, i));
  r = (Option_5F39ED) ((Option_5F39ED) &t_3);
  Type_assign(result, r, sizeof(union Option_5F39ED));
  return;
}

inline B t_Cli_parseRunChoiceH_extract_69_12(STACK_FRAME_SF String t_0, t_Cli this) {
  if (!String__eq((String) t_0, (String) string("default"))) return F;
  return T;
}

inline B t_Cli_parseRunChoiceH_extract_70_12(STACK_FRAME_SF String t_0, t_Cli this) {
  if (!String__eq((String) t_0, (String) string("roundRobin"))) return F;
  return T;
}

inline B t_Cli_parseRunChoiceH_extract_71_12(STACK_FRAME_SF String t_0, t_Cli this) {
  if (!String__eq((String) t_0, (String) string("static"))) return F;
  return T;
}

inline B t_Cli_parseRunChoiceH_extract_72_12(STACK_FRAME_SF String t_0, t_Cli this) {
  if (!String__eq((String) t_0, (String) string("legacy"))) return F;
  return T;
}

inline B t_Cli_parseRunChoiceH_extract_73_12(STACK_FRAME_SF String t_0, t_Cli this, String *_s_73_12) {
  *_s_73_12 = (String) t_0;
  return T;
}

void t_Cli_parseRunChoiceH_(STACK_FRAME Option_5F39ED result, t_Cli this, String arg) {
  DeclNewStackFrame(caller, "Demo.scala", "t.Cli", "parseRunChoiceH", 0);

  sfUpdateLoc(68);
  String t_0 = arg;
  B match_68_5 = F;
  if (!match_68_5) {
    match_68_5 = t_Cli_parseRunChoiceH_extract_69_12(SF t_0, this);
    if (match_68_5) {
      DeclNewSome_2040D2(t_1);
      Some_2040D2_apply(SF &t_1, t_Cli_RunChoice_Type_Default);
      Type_assign(result, (&t_1), sizeof(struct Some_2040D2));
      return;
    }
  }
  if (!match_68_5) {
    match_68_5 = t_Cli_parseRunChoiceH_extract_70_12(SF t_0, this);
    if (match_68_5) {
      DeclNewSome_2040D2(t_2);
      Some_2040D2_apply(SF &t_2, t_Cli_RunChoice_Type_RoundRobin);
      Type_assign(result, (&t_2), sizeof(struct Some_2040D2));
      return;
    }
  }
  if (!match_68_5) {
    match_68_5 = t_Cli_parseRunChoiceH_extract_71_12(SF t_0, this);
    if (match_68_5) {
      DeclNewSome_2040D2(t_3);
      Some_2040D2_apply(SF &t_3, t_Cli_RunChoice_Type_Static);
      Type_assign(result, (&t_3), sizeof(struct Some_2040D2));
      return;
    }
  }
  if (!match_68_5) {
    match_68_5 = t_Cli_parseRunChoiceH_extract_72_12(SF t_0, this);
    if (match_68_5) {
      DeclNewSome_2040D2(t_4);
      Some_2040D2_apply(SF &t_4, t_Cli_RunChoice_Type_Legacy);
      Type_assign(result, (&t_4), sizeof(struct Some_2040D2));
      return;
    }
  }
  if (!match_68_5) {
    String s_73_12;
    match_68_5 = t_Cli_parseRunChoiceH_extract_73_12(SF t_0, this, &s_73_12);
    if (match_68_5) {

      #ifndef SIREUM_NO_PRINT

      sfUpdateLoc(74);
      {
        DeclNewString(t_5);
        String_string_(SF (String) &t_5, string("Expecting one of the following: { default, roundRobin, static, legacy }, but found '"));
        String_string_(SF (String) &t_5, s_73_12);
        String_string_(SF (String) &t_5, string("'."));
        String_cprint(((String) &t_5), F);
        cprintln(F);
        cflush(F);
      }

      #endif
      DeclNewNone_72E81E(t_6);
      None_72E81E_apply(SF &t_6);
      Type_assign(result, (&t_6), sizeof(struct None_72E81E));
      return;
    }
  }
  sfAssert(match_68_5, "Error when pattern matching.");
  exit(-1);
}