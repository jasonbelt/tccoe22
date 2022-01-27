#include <all.h>

B ops_ISZOps_A6D40E_contains_(STACK_FRAME ops_ISZOps_A6D40E this, Z e) {
  DeclNewStackFrame(caller, "SOps.scala", "org.sireum.ops.ISZOps", "contains", 0);

  sfUpdateLoc(233);
  {
    IS_82ABD8 t_1 = ops_ISZOps_A6D40E_s_(this);
    int8_t t_2 = (ops_ISZOps_A6D40E_s_(this))->size;
    for (int8_t t_3 = 0; t_3 < t_2; t_3++) {
      Z v = t_1->value[t_3];

      sfUpdateLoc(234);
      B t_0;
      {
        t_0 = Z__eq(v, e);
      }
      if (t_0) {
        return T;
      }
    }
  }
  return F;
}

void ops_ISZOps_524353_tail_(STACK_FRAME IS_820232 result, ops_ISZOps_524353 this) {
  DeclNewStackFrame(caller, "SOps.scala", "org.sireum.ops.ISZOps", "tail", 0);
  DeclNewIS_820232(t_0);
  ops_ISZOps_524353_drop_(SF (IS_820232) &t_0, this, Z_C(1));
  Type_assign(result, ((IS_820232) &t_0), sizeof(struct IS_820232));
  return;
}

void ops_ISZOps_524353_drop_(STACK_FRAME IS_820232 result, ops_ISZOps_524353 this, Z size) {
  DeclNewStackFrame(caller, "SOps.scala", "org.sireum.ops.ISZOps", "drop", 0);
  Z t_0 = IS_820232_size(SF ops_ISZOps_524353_s_(this));
  DeclNewIS_820232(t_1);
  ops_ISZOps_524353_laxSlice_(SF (IS_820232) &t_1, this, size, t_0);
  Type_assign(result, ((IS_820232) &t_1), sizeof(struct IS_820232));
  return;
}

void ops_ISZOps_524353_laxSlice_(STACK_FRAME IS_820232 result, ops_ISZOps_524353 this, Z from, Z til) {
  DeclNewStackFrame(caller, "SOps.scala", "org.sireum.ops.ISZOps", "laxSlice", 0);

  sfUpdateLoc(376);
  B t_0;
  {
    B t_1 = T;
    if (!Z__ge(from, til)) {
      B t_2 = IS_820232_isEmpty(SF ops_ISZOps_524353_s_(this));
      t_1 = t_2;
    }
    t_0 = t_1;
  }
  if (t_0) {
    STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_3);
    t_3.size = (int8_t) 0;
    Type_assign(result, (&t_3), sizeof(struct IS_820232));
    return;
  }

  sfUpdateLoc(379);
  Z start;
  {
    Z t_4;
    if (Z__lt(from, Z_C(0))) {
      t_4 = Z_C(0);
    } else {
      t_4 = from;
    }
    start = t_4;
  }

  sfUpdateLoc(380);
  Z until;
  {
    Z t_5 = IS_820232_size(SF ops_ISZOps_524353_s_(this));
    Z t_6;
    if (Z__le(til, t_5)) {
      t_6 = til;
    } else {
      Z t_7 = IS_820232_size(SF ops_ISZOps_524353_s_(this));
      t_6 = t_7;
    }
    until = t_6;
  }

  sfUpdateLoc(381);
  Z len;
  {
    len = Z__sub(until, start);
  }

  sfUpdateLoc(382);
  DeclNewMS_D1ED39(_r);
  MS_D1ED39 r = (MS_D1ED39) &_r;
  {
    DeclNewMS_D1ED39(t_8);
    MS_D1ED39_create(SF (MS_D1ED39) &t_8, len, (art_UPort) IS_820232_at(ops_ISZOps_524353_s_(this), Z_C(0)));
    Type_assign(r, ((MS_D1ED39) &t_8), sizeof(struct MS_D1ED39));
  }

  sfUpdateLoc(383);
  {
    Z i;
    {
      i = Z_C(0);
    }
    Z t_9;
    {
      t_9 = len;
    }
    Z t_10;
    {
      t_10 = (Z) 1;
    }
    while (i < t_9) {

      sfUpdateLoc(384);
      {
        MS_D1ED39_up(r, i, (art_UPort) IS_820232_at(ops_ISZOps_524353_s_(this), Z__add(start, i)));
      }

      sfUpdateLoc(383);
      i = (Z) (i + t_10);
    }
  }
  DeclNewIS_820232(t_11);
  MS_D1ED39_toIS(SF (IS_820232) &t_11, r);
  Type_assign(result, ((IS_820232) &t_11), sizeof(struct IS_820232));
  return;
}