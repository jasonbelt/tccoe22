#include <all.h>

void Map_empty_595DD7(STACK_FRAME Map_9C6840 result) {
  DeclNewStackFrame(caller, "Map.scala", "org.sireum.Map", "empty", 0);
  STATIC_ASSERT(0 <= MaxIS_4D6DA5, "Insufficient maximum for IS[Z, (Z, art.ArtSlangMessage)] elements.");
  DeclNewIS_4D6DA5(t_1);
  t_1.size = (int8_t) 0;
  DeclNewMap_9C6840(t_0);
  Map_9C6840_apply(SF &t_0, (IS_4D6DA5) (&t_1));
  Type_assign(result, (&t_0), sizeof(struct Map_9C6840));
  return;
}

inline B Map__add_extract_72_9_4DFC06(STACK_FRAME_SF Tuple2_4DFC06 t_0, Map_9C6840 this, Z *_key, art_ArtSlangMessage *_value) {
  *_key = Tuple2_4DFC06_1(t_0);
  *_value = (art_ArtSlangMessage) Tuple2_4DFC06_2(t_0);
  return T;
}

void Map_9C6840__add_(STACK_FRAME Map_9C6840 result, Map_9C6840 this, Tuple2_4DFC06 p) {
  DeclNewStackFrame(caller, "Map.scala", "org.sireum.Map", "+", 0);

  sfUpdateLoc(72);
  Tuple2_4DFC06 t_0;
  t_0 = (Tuple2_4DFC06) p;
  Z key;
  art_ArtSlangMessage value;
  sfAssert(Map__add_extract_72_9_4DFC06(SF t_0, this, &key, &value), "Error during var pattern matching.");

  sfUpdateLoc(73);
  Z index;
  {
    Z t_1 = Map_9C6840_indexOf_(SF this, key);
    index = t_1;
  }

  sfUpdateLoc(74);
  IS_4D6DA5 newEntries;
  DeclNewIS_4D6DA5(t_2);
  if (Z__lt(index, Z_C(0))) {
    DeclNewTuple2_4DFC06(t_3);
    Tuple2_4DFC06_apply(SF &t_3, key, value);
    DeclNewIS_4D6DA5(t_4);
    IS_4D6DA5__append(SF (IS_4D6DA5) &t_4, Map_9C6840_entries_(this), (Tuple2_4DFC06) (&t_3));
    Type_assign(&t_2, ((IS_4D6DA5) &t_4), sizeof(struct IS_4D6DA5));
  } else {
    DeclNewIS_4D6DA5(t_5);
    Type_assign(&t_5, Map_9C6840_entries_(this), sizeof(struct IS_4D6DA5));
    DeclNewTuple2_4DFC06(t_7);
    Tuple2_4DFC06_apply(SF &t_7, key, value);
    DeclNewTuple2_A29DBA(t_6);
    Tuple2_A29DBA_apply(SF &t_6, index, (&t_7));
    IS_4D6DA5_up(&t_5, Tuple2_A29DBA_1((&t_6)), (Tuple2_4DFC06) Tuple2_A29DBA_2((&t_6)));
    Type_assign(&t_2, (&t_5), sizeof(struct IS_4D6DA5));
  }
  newEntries = (IS_4D6DA5) &t_2;
  DeclNewMap_9C6840(t_8);
  Map_9C6840_apply(SF &t_8, (IS_4D6DA5) newEntries);
  Type_assign(result, (&t_8), sizeof(struct Map_9C6840));
  return;
}

B Map_9C6840_contains_(STACK_FRAME Map_9C6840 this, Z key) {
  DeclNewStackFrame(caller, "Map.scala", "org.sireum.Map", "contains", 0);
  Z t_0 = Map_9C6840_indexOf_(SF this, key);
  return Z__ge(t_0, Z_C(0));
}

void Map_9C6840_get_(STACK_FRAME Option_376396 result, Map_9C6840 this, Z key) {
  DeclNewStackFrame(caller, "Map.scala", "org.sireum.Map", "get", 0);

  sfUpdateLoc(89);
  Z index;
  {
    Z t_0 = Map_9C6840_indexOf_(SF this, key);
    index = t_0;
  }
  DeclNewOption_376396(t_1);
  if (Z__lt(index, Z_C(0))) {
    DeclNewNone_50AF88(t_2);
    None_50AF88_apply(SF &t_2);
    Type_assign(&t_1, (&t_2), sizeof(union Option_376396));
  } else {
    DeclNewSome_24B656(t_3);
    Some_24B656_apply(SF &t_3, (art_ArtSlangMessage) Tuple2_4DFC06_2(IS_4D6DA5_at(Map_9C6840_entries_(this), index)));
    Type_assign(&t_1, (&t_3), sizeof(union Option_376396));
  }
  Type_assign(result, &t_1, sizeof(union Option_376396));
  return;
}

Z Map_9C6840_indexOf_(STACK_FRAME Map_9C6840 this, Z key) {
  DeclNewStackFrame(caller, "Map.scala", "org.sireum.Map", "indexOf", 0);

  sfUpdateLoc(109);
  Z index;
  {
    index = Z_C(-1);
  }

  sfUpdateLoc(110);
  {
    IS_4D6DA5 t_1 = Map_9C6840_entries_(this);
    int8_t t_2 = (Map_9C6840_entries_(this))->size;
    for (int8_t t_3 = 0; t_3 < t_2; t_3++) {
      Z i = (Z) t_3;
      if (Z__eq(index, Z_C(-1))) {

        sfUpdateLoc(111);
        B t_0;
        {
          t_0 = Z__eq(Tuple2_4DFC06_1(IS_4D6DA5_at(Map_9C6840_entries_(this), i)), key);
        }
        if (t_0) {

          sfUpdateLoc(112);
          {
            index = i;
          }
        }
      }
    }
  }
  return index;
}

void Map_9C6840__sub_(STACK_FRAME Map_9C6840 result, Map_9C6840 this, Tuple2_4DFC06 p) {
  DeclNewStackFrame(caller, "Map.scala", "org.sireum.Map", "-", 0);
  DeclNewIS_4D6DA5(t_1);
  IS_4D6DA5__sub(SF (IS_4D6DA5) &t_1, Map_9C6840_entries_(this), (Tuple2_4DFC06) p);
  DeclNewMap_9C6840(t_0);
  Map_9C6840_apply(SF &t_0, (IS_4D6DA5) ((IS_4D6DA5) &t_1));
  Type_assign(result, (&t_0), sizeof(struct Map_9C6840));
  return;
}