// VA 0x141183c60, PDB extent 646 bytes
// toolbar::mei::config::impl$0::deserialize::impl$0::visit_map<ron::de::SerdeEnumContent>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::config::impl$0::deserialize::impl$0::visit_map<ron::de::SerdeEnumContent>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 646 */

undefined8 * pdb_141183c60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 uStack_160;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined4 **ppuStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined4 *puStack_68;
  code *pcStack_60;
  undefined1 uStack_51;
  undefined7 uStack_50;
  undefined1 uStack_49;
  undefined7 uStack_48;
  undefined1 uStack_41;
  undefined7 uStack_40;
  undefined1 uStack_39;
  undefined7 uStack_38;
  undefined1 uStack_31;
  undefined7 uStack_30;
  undefined1 uStack_29;
  undefined7 uStack_28;
  undefined8 uStack_21;
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  uStack_108 = param_2[2];
  uStack_118 = *param_2;
  puStack_110 = (undefined *)param_2[1];
  pdb_1411845c0(&uStack_1a0,&uStack_118);
  if ((char)uStack_1a0 == '2') {
    uStack_21 = CONCAT44(uStack_164,uStack_168);
    uStack_31 = (undefined1)uStack_178;
    uStack_30 = (undefined7)(CONCAT44(uStack_174,uStack_178) >> 8);
    uStack_29 = (undefined1)uStack_170;
    uStack_28 = (undefined7)(CONCAT44(uStack_16c,uStack_170) >> 8);
    uStack_41 = (undefined1)uStack_188;
    uStack_40 = (undefined7)(CONCAT44(uStack_184,uStack_188) >> 8);
    uStack_39 = (undefined1)uStack_180;
    uStack_38 = (undefined7)(CONCAT44(uStack_17c,uStack_180) >> 8);
    uStack_51 = (undefined1)uStack_198;
    uStack_50 = (undefined7)(CONCAT44(uStack_194,uStack_198) >> 8);
    uStack_49 = (undefined1)uStack_190;
    uStack_48 = (undefined7)(CONCAT44(uStack_18c,uStack_190) >> 8);
  }
  else {
    uStack_78 = uStack_160;
    uStack_88 = uStack_170;
    uStack_84 = uStack_16c;
    uStack_80 = uStack_168;
    uStack_7c = uStack_164;
    uStack_98 = uStack_180;
    uStack_94 = uStack_17c;
    uStack_90 = uStack_178;
    uStack_8c = uStack_174;
    uStack_a8 = uStack_190;
    uStack_a4 = uStack_18c;
    uStack_a0 = uStack_188;
    uStack_9c = uStack_184;
    uStack_b8 = uStack_1a0;
    uStack_b4 = uStack_19c;
    uStack_b0 = uStack_198;
    uStack_ac = uStack_194;
    if (*_DAT_143ca8e90 != 0) {
      puStack_68 = &uStack_b8;
      pcStack_60 = pdb_1411851a0;
      uStack_118 = 0;
      puStack_110 = &UNK_14329e688;
      uStack_108 = 0x14;
      uStack_100 = 0;
      puStack_f8 = &UNK_14329e638;
      uStack_f0 = 0x28;
      uStack_e8 = 1;
      puStack_e0 = &UNK_14329e688;
      uStack_d8 = 0x14;
      uStack_d0 = 0x4000000001;
      puStack_c8 = &UNK_14329e661;
      ppuStack_c0 = &puStack_68;
      pdb_140f332f0(&uStack_19,&uStack_118);
    }
    uStack_50 = CONCAT43(uStack_ac,uStack_b0._1_3_);
    uStack_51 = (undefined1)uStack_b0;
    uStack_49 = (undefined1)uStack_a8;
    uStack_48 = CONCAT43(uStack_a4,uStack_a8._1_3_);
    uStack_40 = CONCAT43(uStack_9c,uStack_a0._1_3_);
    uStack_41 = (undefined1)uStack_a0;
    uStack_39 = (undefined1)uStack_98;
    uStack_38 = CONCAT43(uStack_94,uStack_98._1_3_);
    uStack_30 = CONCAT43(uStack_8c,uStack_90._1_3_);
    uStack_31 = (undefined1)uStack_90;
    uStack_21 = CONCAT44(uStack_7c,uStack_80);
    uStack_29 = (undefined1)uStack_88;
    uStack_28 = (undefined7)(CONCAT44(uStack_84,uStack_88) >> 8);
    if ((char)uStack_b8 != '2') {
      param_1[7] = CONCAT71(uStack_28,uStack_29);
      param_1[8] = uStack_21;
      *(ulonglong *)((longlong)param_1 + 0x29) = CONCAT17((undefined1)uStack_90,uStack_38);
      *(ulonglong *)((longlong)param_1 + 0x31) = CONCAT17(uStack_29,uStack_30);
      *(ulonglong *)((longlong)param_1 + 0x19) = CONCAT17((undefined1)uStack_a0,uStack_48);
      *(ulonglong *)((longlong)param_1 + 0x21) = CONCAT17((undefined1)uStack_98,uStack_40);
      *(ulonglong *)((longlong)param_1 + 9) =
           CONCAT17((undefined1)uStack_b0,CONCAT43(uStack_b4,uStack_b8._1_3_));
      *(ulonglong *)((longlong)param_1 + 0x11) = CONCAT17((undefined1)uStack_a8,uStack_50);
      *(char *)(param_1 + 1) = (char)uStack_b8;
      param_1[9] = uStack_78;
      uVar1 = 0x8000000000000001;
      goto LAB_141183ea4;
    }
  }
  param_1[7] = uStack_21;
  param_1[5] = CONCAT71(uStack_30,uStack_31);
  param_1[6] = CONCAT71(uStack_28,uStack_29);
  param_1[3] = CONCAT71(uStack_40,uStack_41);
  param_1[4] = CONCAT71(uStack_38,uStack_39);
  param_1[1] = CONCAT71(uStack_50,uStack_51);
  param_1[2] = CONCAT71(uStack_48,uStack_49);
  uVar1 = 0x8000000000000000;
LAB_141183ea4:
  *param_1 = uVar1;
  return param_1;
}

