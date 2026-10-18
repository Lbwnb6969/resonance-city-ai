// VA 0x141827150, PDB extent 450 bytes
// country_core::game_key_bindings::_::impl$0::deserialize::impl$2::visit_enum<serde::private::de::content::EnumRefDeserializer<enum2$<ron::error::Error> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_key_bindings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::game_key_bindings::_::impl$0::deserialize::impl$2::visit_enum<serde::private::de::content::EnumRefDeserializer<enum2$<ron::error::Error>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_key_bindings.rs
   Extent: 450 */

char * pdb_141827150(char *param_1)

{
  char cStack_68;
  undefined1 uStack_67;
  undefined2 uStack_66;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined2 uStack_62;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 auStack_20 [24];
  
  pdb_141b4c540(&cStack_68);
  if (cStack_68 != '2') {
    *(uint *)(param_1 + 4) = CONCAT22(uStack_62,CONCAT11(uStack_63,uStack_64));
    *(uint *)(param_1 + 1) = CONCAT13(uStack_64,CONCAT21(uStack_66,uStack_67));
    *(undefined4 *)(param_1 + 0xc) = uStack_5c;
    *(uint *)(param_1 + 9) = CONCAT13((undefined1)uStack_5c,uStack_60._1_3_);
    *(undefined8 *)(param_1 + 0x28) = uStack_40;
    *(undefined8 *)(param_1 + 0x30) = uStack_38;
    *(undefined8 *)(param_1 + 0x38) = uStack_30;
    *(undefined8 *)(param_1 + 0x40) = uStack_28;
    *(undefined8 *)(param_1 + 0x18) = uStack_50;
    *(undefined8 *)(param_1 + 0x20) = uStack_48;
    *param_1 = cStack_68;
    param_1[8] = (char)uStack_60;
    *(longlong *)(param_1 + 0x10) = lStack_58;
    return param_1;
  }
  if ((char)uStack_60 == '\x01') {
    if (lStack_58 == 0) {
      auStack_20[0] = 0xd;
      pdb_142db7ac0(&cStack_68,auStack_20,&UNK_143396a68,&UNK_1433966f8);
    }
    else {
      pdb_141b4d2f0(&cStack_68,lStack_58,&UNK_14337c6f0,0xb,&UNK_14337c720,6);
    }
    if (cStack_68 != '2') {
LAB_1418272da:
      *(undefined8 *)(param_1 + 0x40) = uStack_28;
      *(undefined8 *)(param_1 + 0x30) = uStack_38;
      *(undefined8 *)(param_1 + 0x38) = uStack_30;
      *(undefined8 *)(param_1 + 0x20) = uStack_48;
      *(undefined8 *)(param_1 + 0x28) = uStack_40;
      *(longlong *)(param_1 + 0x10) = lStack_58;
      *(undefined8 *)(param_1 + 0x18) = uStack_50;
      *(ulonglong *)param_1 =
           CONCAT26(uStack_62,
                    CONCAT15(uStack_63,
                             CONCAT14(uStack_64,CONCAT22(uStack_66,CONCAT11(uStack_67,cStack_68)))))
      ;
      *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_5c,uStack_60);
      return param_1;
    }
    param_1[4] = -0x3d;
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    *(uint *)(param_1 + 8) = CONCAT13(uStack_63,CONCAT12(uStack_64,uStack_66));
  }
  else {
    if (lStack_58 == 0) {
      auStack_20[0] = 0xd;
      pdb_142db7ac0(&cStack_68,auStack_20,&UNK_143396a68,&UNK_1433966f8);
    }
    else {
      pdb_141b4d790(&cStack_68,lStack_58,&UNK_1433a5587,7,&UNK_1433a5ad8,0xc3);
    }
    if (cStack_68 != '2') goto LAB_1418272da;
    *(undefined4 *)(param_1 + 0xc) = uStack_5c;
    *(ulonglong *)(param_1 + 4) =
         CONCAT44(uStack_60,CONCAT22(uStack_62,CONCAT11(uStack_63,uStack_64)));
  }
  *param_1 = '2';
  return param_1;
}

