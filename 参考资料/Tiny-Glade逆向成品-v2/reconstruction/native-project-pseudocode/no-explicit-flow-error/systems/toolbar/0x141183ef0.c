// VA 0x141183ef0, PDB extent 1064 bytes
// toolbar::mei::config::impl$0::deserialize::impl$0::visit_map<ron::de::CommaSeparated>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::config::impl$0::deserialize::impl$0::visit_map<ron::de::CommaSeparated>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 1064 */

undefined8 * pdb_141183ef0(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined3 uVar2;
  undefined8 uVar3;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  char *pcStack_1a0;
  code *pcStack_198;
  undefined7 uStack_188;
  undefined4 uStack_181;
  undefined4 uStack_17d;
  undefined4 uStack_179;
  undefined4 uStack_175;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined7 uStack_128;
  undefined7 uStack_118;
  undefined1 uStack_111;
  undefined7 uStack_110;
  undefined1 uStack_109;
  undefined7 uStack_108;
  undefined1 uStack_101;
  undefined7 uStack_100;
  undefined1 uStack_f9;
  undefined7 uStack_f8;
  undefined1 uStack_f1;
  undefined7 uStack_f0;
  undefined1 uStack_e9;
  undefined7 uStack_e8;
  undefined8 uStack_e1;
  char cStack_d8;
  char cStack_d7;
  undefined6 uStack_d6;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 **ppuStack_80;
  char cStack_78;
  undefined4 uStack_77;
  undefined4 uStack_73;
  undefined4 uStack_6f;
  undefined4 uStack_6b;
  undefined4 uStack_67;
  undefined4 uStack_63;
  undefined4 uStack_5f;
  undefined4 uStack_5b;
  undefined4 uStack_57;
  undefined4 uStack_53;
  undefined4 uStack_4f;
  undefined4 uStack_4b;
  undefined4 uStack_47;
  undefined4 uStack_43;
  undefined4 uStack_3f;
  undefined4 uStack_3b;
  undefined7 uStack_37;
  undefined1 uStack_21;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  uStack_1b8 = *param_2;
  uStack_1b4 = param_2[1];
  uStack_1b0 = param_2[2];
  uStack_1ac = param_2[3];
  pdb_14230f7b0(&cStack_d8,&uStack_1b8);
  if (cStack_d8 == '2') {
    if (cStack_d7 == '\x01') {
      uStack_73._3_1_ = (undefined1)uStack_1b8;
      uStack_6f = (undefined4)(CONCAT44(uStack_1b4,uStack_1b8) >> 8);
      uStack_6b._3_1_ = (undefined1)uStack_1b0;
      uStack_6b = CONCAT13(uStack_6b._3_1_,(int3)((uint)uStack_1b4 >> 8));
      uStack_67 = (undefined4)(CONCAT44(uStack_1ac,uStack_1b0) >> 8);
      uStack_63._0_3_ = (undefined3)((uint)uStack_1ac >> 8);
    }
    else {
      pcStack_1a0 = (char *)CONCAT71(pcStack_1a0._1_7_,0xb);
      pdb_142db7ac0(&cStack_78,&pcStack_1a0,&UNK_1434d9628,&UNK_1434d9638);
      if (cStack_78 != '2') goto LAB_141184074;
    }
LAB_141183f9f:
    uStack_208 = CONCAT31((undefined3)uStack_6f,uStack_73._3_1_);
    uStack_204 = CONCAT31((undefined3)uStack_6b,uStack_6f._3_1_);
    uStack_200 = CONCAT31((undefined3)uStack_67,uStack_6b._3_1_);
    uStack_1fc = CONCAT31((undefined3)uStack_63,uStack_67._3_1_);
    uStack_181 = uStack_208;
    uStack_17d = uStack_204;
    uStack_179 = uStack_200;
    uStack_175 = uStack_1fc;
    pdb_142310250(&cStack_d8,&uStack_208);
    if (cStack_d8 != '2') {
      uStack_128 = uStack_97;
      uStack_168 = CONCAT17(uStack_d0,CONCAT61(uStack_d6,cStack_d7));
      uStack_138 = (undefined4)uStack_a7;
      uStack_134 = (undefined4)(CONCAT17(uStack_a0,uStack_a7) >> 0x20);
      uStack_130 = (undefined4)uStack_9f;
      uStack_12c = (undefined4)(CONCAT17(uStack_98,uStack_9f) >> 0x20);
      uStack_148 = (undefined4)uStack_b7;
      uStack_144 = (undefined4)(CONCAT17(uStack_b0,uStack_b7) >> 0x20);
      uStack_140 = (undefined4)uStack_af;
      uStack_13c = (undefined4)(CONCAT17(uStack_a8,uStack_af) >> 0x20);
      uStack_158 = (undefined4)uStack_c7;
      uStack_154 = (undefined4)(CONCAT17(uStack_c0,uStack_c7) >> 0x20);
      uStack_150 = (undefined4)uStack_bf;
      uStack_14c = (undefined4)(CONCAT17(uStack_b8,uStack_bf) >> 0x20);
      uStack_160 = (undefined4)uStack_cf;
      uStack_15c = (undefined4)(CONCAT17(uStack_c8,uStack_cf) >> 0x20);
      cStack_78 = cStack_d8;
      goto LAB_1411840bb;
    }
    uStack_e1 = CONCAT71(uStack_9f,uStack_a0);
    uStack_111 = uStack_d0;
    uStack_110 = uStack_cf;
    uStack_109 = uStack_c8;
    uStack_108 = uStack_c7;
    uStack_101 = uStack_c0;
    uStack_100 = uStack_bf;
    uStack_f9 = uStack_b8;
    uStack_f8 = uStack_b7;
    uStack_f1 = uStack_b0;
    uStack_f0 = uStack_af;
    uStack_e9 = uStack_a8;
    uStack_e8 = uStack_a7;
LAB_141184201:
    param_1[7] = uStack_e1;
    param_1[5] = CONCAT71(uStack_f0,uStack_f1);
    param_1[6] = CONCAT71(uStack_e8,uStack_e9);
    param_1[3] = CONCAT71(uStack_100,uStack_101);
    param_1[4] = CONCAT71(uStack_f8,uStack_f9);
    param_1[1] = CONCAT71(uStack_110,uStack_111);
    param_1[2] = CONCAT71(uStack_108,uStack_109);
    uVar3 = 0x8000000000000000;
  }
  else {
    uStack_37 = uStack_97;
    uStack_47 = (undefined4)uStack_a7;
    uStack_43._0_3_ = (undefined3)((uint7)uStack_a7 >> 0x20);
    uStack_43 = CONCAT13(uStack_a0,(undefined3)uStack_43);
    uStack_3f = (undefined4)uStack_9f;
    uStack_3b._0_3_ = (undefined3)((uint7)uStack_9f >> 0x20);
    uStack_3b = CONCAT13(uStack_98,(undefined3)uStack_3b);
    uStack_57 = (undefined4)uStack_b7;
    uStack_53 = CONCAT13(uStack_b0,(int3)((uint7)uStack_b7 >> 0x20));
    uStack_4f = (undefined4)uStack_af;
    uStack_4b = CONCAT13(uStack_a8,(int3)((uint7)uStack_af >> 0x20));
    uStack_67 = (undefined4)uStack_c7;
    uStack_63._0_3_ = (undefined3)((uint7)uStack_c7 >> 0x20);
    uStack_63 = CONCAT13(uStack_c0,(undefined3)uStack_63);
    uStack_5f = (undefined4)uStack_bf;
    uStack_5b = CONCAT13(uStack_b8,(int3)((uint7)uStack_bf >> 0x20));
    uStack_77 = (undefined4)(CONCAT62(uStack_d6,CONCAT11(cStack_d7,cStack_d8)) >> 8);
    uStack_73._0_3_ = (undefined3)((uint6)uStack_d6 >> 0x18);
    uStack_73 = CONCAT13(uStack_d0,(undefined3)uStack_73);
    uStack_6f = (undefined4)uStack_cf;
    uStack_6b._0_3_ = (undefined3)((uint7)uStack_cf >> 0x20);
    uStack_6b = CONCAT13(uStack_c8,(undefined3)uStack_6b);
    cStack_78 = cStack_d8;
    if (cStack_d8 == '2') goto LAB_141183f9f;
LAB_141184074:
    uStack_175 = (undefined4)(CONCAT34((undefined3)uStack_63,uStack_67) >> 0x18);
    uStack_188 = (undefined7)CONCAT44(uStack_73,uStack_77);
    uVar1 = (undefined1)((uint)uStack_73 >> 0x18);
    uStack_181._1_3_ = (undefined3)uStack_6f;
    uStack_181 = CONCAT31(uStack_181._1_3_,uVar1);
    uStack_17d = (undefined4)(CONCAT44(uStack_6b,uStack_6f) >> 0x18);
    uStack_179._1_3_ = (undefined3)uStack_67;
    uStack_179._0_1_ = (undefined1)((uint)uStack_6b >> 0x18);
    uStack_150 = uStack_5f;
    uStack_14c = uStack_5b;
    uStack_148 = uStack_57;
    uStack_144 = uStack_53;
    uStack_140 = uStack_4f;
    uStack_13c = uStack_4b;
    uStack_138 = uStack_47;
    uStack_134 = uStack_43;
    uStack_130 = uStack_3f;
    uStack_12c = uStack_3b;
    uStack_128 = uStack_37;
    uStack_168 = CONCAT17(uVar1,uStack_188);
    uStack_160 = (undefined4)CONCAT43(uStack_17d,uStack_181._1_3_);
    uStack_15c = uStack_6b;
    uStack_158 = (undefined4)(CONCAT44(uStack_175,uStack_179) >> 8);
    uStack_154 = uStack_63;
LAB_1411840bb:
    uStack_77 = (undefined4)uStack_168;
    uStack_73 = uStack_168._4_4_;
    uStack_6f = uStack_160;
    uStack_6b = uStack_15c;
    uStack_67 = uStack_158;
    uStack_63 = uStack_154;
    uStack_5f = uStack_150;
    uStack_5b = uStack_14c;
    uStack_57 = uStack_148;
    uStack_53 = uStack_144;
    uStack_4f = uStack_140;
    uStack_4b = uStack_13c;
    uStack_47 = uStack_138;
    uStack_43 = uStack_134;
    uStack_3f = uStack_130;
    uStack_3b._0_3_ = (undefined3)uStack_12c;
    uVar2 = (undefined3)uStack_3b;
    uStack_3b = uStack_12c;
    uStack_37 = uStack_128;
    if (*_DAT_143ca8e90 == 0) {
      uStack_43._0_3_ = (undefined3)uStack_134;
      uStack_e8 = CONCAT34((undefined3)uStack_43,uStack_138);
      uStack_43._3_1_ = (undefined1)((uint)uStack_134 >> 0x18);
      uStack_e1 = CONCAT35(uVar2,CONCAT41(uStack_130,uStack_43._3_1_));
      uStack_f8 = (undefined7)CONCAT44(uStack_144,uStack_148);
      uStack_f1 = (undefined1)((uint)uStack_144 >> 0x18);
      uStack_f0 = (undefined7)CONCAT44(uStack_13c,uStack_140);
      uStack_e9 = (undefined1)((uint)uStack_13c >> 0x18);
      uStack_108 = (undefined7)CONCAT44(uStack_154,uStack_158);
      uStack_101 = (undefined1)((uint)uStack_154 >> 0x18);
      uStack_100 = (undefined7)CONCAT44(uStack_14c,uStack_150);
      uStack_f9 = (undefined1)((uint)uStack_14c >> 0x18);
      uStack_118 = (undefined7)uStack_168;
      uStack_111 = (undefined1)((ulonglong)uStack_168 >> 0x38);
      uStack_110 = (undefined7)CONCAT44(uStack_15c,uStack_160);
      uStack_109 = (undefined1)((uint)uStack_15c >> 0x18);
    }
    else {
      pcStack_1a0 = &cStack_78;
      pcStack_198 = pdb_1411851a0;
      cStack_d8 = '\0';
      cStack_d7 = 0;
      uStack_d6 = 0;
      uStack_d0 = 0x88;
      uStack_cf = 0x14329e6;
      uStack_c8 = 0x14;
      uStack_c7 = 0;
      uStack_c0 = 0;
      uStack_bf = 0;
      uStack_b8 = 0x38;
      uStack_b7 = 0x14329e6;
      uStack_b0 = 0x28;
      uStack_af = 0;
      uStack_a8 = 1;
      uStack_a7 = 0;
      uStack_a0 = 0x88;
      uStack_9f = 0x14329e6;
      uStack_98 = 0x14;
      uStack_97 = 0;
      uStack_90 = 0x4000000001;
      puStack_88 = &UNK_14329e661;
      ppuStack_80 = &pcStack_1a0;
      pdb_140f332f0(&uStack_21,&cStack_d8);
      uStack_e1 = CONCAT35((undefined3)uStack_3b,CONCAT41(uStack_3f,uStack_43._3_1_));
      uStack_118 = (undefined7)CONCAT44(uStack_73,uStack_77);
      uStack_111 = (undefined1)((uint)uStack_73 >> 0x18);
      uStack_110 = (undefined7)CONCAT44(uStack_6b,uStack_6f);
      uStack_109 = (undefined1)((uint)uStack_6b >> 0x18);
      uStack_108 = (undefined7)CONCAT44(uStack_63,uStack_67);
      uStack_101 = (undefined1)((uint)uStack_63 >> 0x18);
      uStack_100 = (undefined7)CONCAT44(uStack_5b,uStack_5f);
      uStack_f9 = (undefined1)((uint)uStack_5b >> 0x18);
      uStack_f8 = (undefined7)CONCAT44(uStack_53,uStack_57);
      uStack_f1 = (undefined1)((uint)uStack_53 >> 0x18);
      uStack_f0 = (undefined7)CONCAT44(uStack_4b,uStack_4f);
      uStack_e9 = uStack_4b._3_1_;
      uStack_e8 = (undefined7)
                  (CONCAT35((undefined3)uStack_43,CONCAT41(uStack_47,uStack_4b._3_1_)) >> 8);
      if (cStack_78 == '2') goto LAB_141184201;
    }
    param_1[7] = CONCAT71(uStack_e8,uStack_e9);
    param_1[8] = uStack_e1;
    *(ulonglong *)((longlong)param_1 + 0x29) = CONCAT17(uStack_f1,uStack_f8);
    *(ulonglong *)((longlong)param_1 + 0x31) = CONCAT17(uStack_e9,uStack_f0);
    *(ulonglong *)((longlong)param_1 + 0x19) = CONCAT17(uStack_101,uStack_108);
    *(ulonglong *)((longlong)param_1 + 0x21) = CONCAT17(uStack_f9,uStack_100);
    *(ulonglong *)((longlong)param_1 + 9) = CONCAT17(uStack_111,uStack_118);
    *(ulonglong *)((longlong)param_1 + 0x11) = CONCAT17(uStack_109,uStack_110);
    *(char *)(param_1 + 1) = cStack_78;
    param_1[9] = CONCAT71(uStack_37,uStack_3b._3_1_);
    uVar3 = 0x8000000000000001;
  }
  *param_1 = uVar3;
  return param_1;
}

