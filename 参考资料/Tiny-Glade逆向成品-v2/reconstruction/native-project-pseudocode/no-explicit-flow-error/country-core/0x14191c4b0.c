// VA 0x14191c4b0, PDB extent 5386 bytes
// country_core::systems::save::save_game::save_game_to_file<std::io::cursor::Cursor<alloc::vec::Vec<u8,alloc::alloc::Global> >,core::slice::iter::Iter<country_core::resources::history::MultiEdit> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_game.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::save::save_game::save_game_to_file<std::io::cursor::Cursor<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,core::slice::iter::Iter<country_core::resources::history::MultiEdit> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_game.rs
   Extent: 5386 */

longlong *
pdb_14191c4b0(longlong *param_1,ulonglong *param_2,ulonglong param_3,int param_4,undefined8 param_5,
             undefined8 param_6,longlong param_7,undefined8 param_8,int param_9,int param_10,
             longlong param_11,longlong param_12,undefined8 param_13,undefined8 param_14,
             longlong param_15,undefined8 param_16,undefined8 param_17)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined5 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  ulonglong uVar17;
  byte *pbVar18;
  ulonglong uVar19;
  ulonglong *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  undefined7 uStack_407;
  undefined7 uStack_3df;
  byte *pbStack_3b8;
  byte *pbStack_3b0;
  ulonglong uStack_3a8;
  longlong lStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  ulonglong uStack_380;
  ulonglong uStack_378;
  undefined8 uStack_370;
  undefined1 uStack_368;
  undefined4 uStack_367;
  undefined4 uStack_363;
  uint uStack_35f;
  undefined4 uStack_35b;
  undefined4 uStack_357;
  undefined4 uStack_353;
  undefined4 uStack_34f;
  undefined4 uStack_34b;
  undefined7 uStack_347;
  undefined8 uStack_340;
  undefined8 uStack_318;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  byte *pbStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  longlong lStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  ulonglong uStack_268;
  ulonglong uStack_260;
  undefined8 uStack_258;
  undefined1 uStack_250;
  uint uStack_24f;
  undefined4 uStack_24b;
  undefined4 uStack_247;
  undefined4 uStack_243;
  undefined4 uStack_23f;
  undefined4 uStack_23b;
  undefined4 uStack_237;
  undefined4 uStack_233;
  undefined7 uStack_22f;
  undefined1 uStack_228;
  undefined7 uStack_227;
  undefined1 uStack_220;
  undefined7 uStack_21f;
  ulonglong uStack_218;
  ulonglong uStack_210;
  undefined8 uStack_208;
  undefined1 uStack_200;
  undefined7 uStack_1ff;
  undefined1 uStack_1f8;
  undefined7 uStack_1f7;
  ulonglong uStack_1f0;
  ulonglong uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  undefined1 uStack_1d0;
  undefined7 uStack_1cf;
  ulonglong uStack_1c8;
  longlong lStack_1c0;
  undefined8 uStack_1b8;
  longlong lStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  longlong lStack_198;
  longlong lStack_190;
  longlong lStack_188;
  ulonglong *puStack_180;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined4 uStack_15f;
  undefined2 uStack_15b;
  undefined1 uStack_159;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 auStack_148 [8];
  ulonglong uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  uint uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  byte *pbStack_110;
  longlong lStack_108;
  byte *pbStack_100;
  longlong lStack_f8;
  byte *pbStack_f0;
  uint uStack_e8;
  undefined4 uStack_e4;
  uint uStack_e0;
  undefined1 uStack_dc;
  undefined2 uStack_db;
  undefined1 uStack_d9;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined7 uStack_c8;
  undefined8 uStack_c0;
  uint uStack_b8;
  undefined4 uStack_b4;
  uint uStack_b0;
  undefined1 uStack_ac;
  undefined2 uStack_ab;
  undefined1 uStack_a9;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  longlong *plStack_90;
  undefined8 uStack_88;
  uint uStack_80;
  undefined1 uStack_7c;
  undefined2 uStack_7b;
  undefined1 uStack_79;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puVar20 = param_2;
  plStack_90 = param_1;
  plVar15 = (longlong *)pdb_140f3bda0();
  if ((char)plVar15[2] == '\x01') {
    lStack_188 = *plVar15;
    puVar20 = (ulonglong *)plVar15[1];
  }
  else {
    lStack_188 = pdb_140f4fd10();
    *plVar15 = lStack_188;
    plVar15[1] = (longlong)puVar20;
    *(undefined1 *)(plVar15 + 2) = 1;
  }
  *plVar15 = lStack_188 + 1;
  lStack_198 = _DAT_143358ca0;
  lStack_190 = _UNK_143358ca8;
  uStack_1a8 = _DAT_143358c90;
  uStack_1a4 = _UNK_143358c94;
  uStack_1a0 = _UNK_143358c98;
  uStack_19c = _UNK_143358c9c;
  lStack_108 = 0;
  pbStack_100 = (byte *)0x8;
  lStack_f8 = 0;
  uVar17 = param_2[3];
  uVar22 = uVar17 + 1;
  uVar21 = 0xffffffffffffffff;
  if (uVar22 != 0) {
    uVar21 = uVar22;
  }
  puStack_180 = puVar20;
  if (*param_2 < uVar21) {
    uVar19 = param_2[2];
    if (*param_2 - uVar19 < uVar21 - uVar19) {
      pdb_142d7f1b0(param_2,uVar19,uVar21 - uVar19,1,1);
    }
  }
  uVar21 = param_2[2];
  if (uVar21 < uVar17) {
    uVar19 = param_2[1];
    pub_142e32780(uVar21 + uVar19,0);
    param_2[2] = uVar17;
    *(undefined1 *)(uVar19 + uVar17) = 0x7b;
  }
  else {
    *(undefined1 *)(param_2[1] + uVar17) = 0x7b;
    uVar17 = uVar21;
  }
  if (uVar17 < uVar22) {
    param_2[2] = uVar22;
  }
  param_2[3] = uVar22;
  uStack_1d0 = 2;
  uStack_1c8 = 0;
  lStack_1c0 = 0x1e;
  uStack_1d8 = 0;
  uStack_1f8 = 2;
  uStack_1f0 = 0;
  uStack_200 = 1;
  uStack_210 = (ulonglong)param_4;
  uStack_218 = uStack_210 >> 0x3f;
  uStack_220 = 2;
  uStack_228 = 2;
  uStack_1e8 = param_3;
  pdb_141b6a750(&uStack_88,param_5);
  if ((char)uStack_88 == '\x06') {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143358dc0,0x2b,&uStack_c0,&UNK_143358df0,&UNK_143358a38);
  }
  pdb_140ac8ea0(&uStack_88,param_6);
  if ((char)uStack_88 == '\x06') {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143358dc0,0x2b,&uStack_c0,&UNK_143358df0,&UNK_143358a50);
  }
  if (param_7 == 0) {
    uStack_88._0_4_ = (uint)uStack_88 & 0xffffff00;
  }
  else {
    pdb_141b2b130(&uStack_88);
    if ((char)uStack_88 == '\x06') {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143358dc0,0x2b,&uStack_c0,&UNK_143358df0,&UNK_143358a68);
    }
  }
  uStack_167 = CONCAT43(uStack_88._4_4_,uStack_88._1_3_);
  uStack_15f = CONCAT13(uStack_7c,uStack_80._1_3_);
  uStack_158 = (undefined4)uStack_78;
  uStack_154 = uStack_78._4_4_;
  uStack_150 = (undefined4)uStack_70;
  uStack_14c = uStack_70._4_4_;
  uStack_168 = (char)uStack_88;
  uStack_160 = (undefined1)uStack_80;
  uStack_15b = uStack_7b;
  uStack_159 = uStack_79;
  uStack_170 = CONCAT71(uStack_170._1_7_,5);
  pdb_141504d00(&uStack_88,&param_8);
  if ((char)uStack_88 == '\x06') {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143358dc0,0x2b,&uStack_c0,&UNK_143358df0,&UNK_143358a80);
  }
  uStack_124 = CONCAT13(uStack_79,CONCAT21(uStack_7b,uStack_7c));
  uStack_120 = (undefined4)uStack_78;
  uStack_11c = uStack_78._4_4_;
  uStack_118 = (undefined4)uStack_70;
  uStack_114 = uStack_70._4_4_;
  uStack_130 = (uint)uStack_88;
  uStack_12c = uStack_88._4_4_;
  uStack_128 = uStack_80;
  uStack_138 = CONCAT31(uStack_138._1_3_,6);
  if (param_15 == 0) {
    uStack_e8 = uStack_e8 & 0xffffff00;
  }
  else {
    uStack_c0 = (byte *)0x8000000000000000;
    uStack_a8 = 0;
    uStack_98 = 0;
    uStack_49 = 1;
    lVar16 = pdb_141c02990(&uStack_c0,&DAT_143397e34,5);
    if (lVar16 != 0) {
      pdb_141b6eed0(&uStack_c0);
LAB_14191d334:
      uStack_88._0_4_ = (uint)lVar16;
      uStack_88._4_4_ = (undefined4)((ulonglong)lVar16 >> 0x20);
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143358dc0,0x2b,&uStack_88,&UNK_143358df0,&UNK_143358a98);
    }
    uStack_68 = uStack_a0;
    uStack_64 = uStack_9c;
    uStack_60 = (undefined4)uStack_98;
    uStack_5c = uStack_98._4_4_;
    uStack_70 = uStack_a8;
    uStack_88._0_4_ = (uint)uStack_c0;
    uStack_88._4_4_ = uStack_c0._4_4_;
    uStack_80 = uStack_b8;
    uStack_7c = (undefined1)uStack_b4;
    uStack_7b = (undefined2)((uint)uStack_b4 >> 8);
    uStack_79 = (undefined1)((uint)uStack_b4 >> 0x18);
    uStack_49 = 0;
    pdb_140ddcdc0(&uStack_e8,&uStack_88);
    if ((char)uStack_e8 == '\x06') {
      lVar16 = CONCAT17(uStack_d9,CONCAT25(uStack_db,CONCAT14(uStack_dc,uStack_e0)));
      goto LAB_14191d334;
    }
  }
  uStack_a8 = CONCAT44(uStack_d4,uStack_d8);
  uStack_a0 = uStack_d0;
  uStack_9c = uStack_cc;
  uStack_b8 = uStack_e8;
  uStack_b4 = uStack_e4;
  uStack_b0 = uStack_e0;
  uStack_ac = uStack_dc;
  uStack_ab = uStack_db;
  uStack_a9 = uStack_d9;
  uStack_c0 = (byte *)CONCAT71(uStack_c0._1_7_,7);
  pdb_140bbc520(&uStack_e8,param_16);
  if ((char)uStack_e8 == '\x06') {
    uStack_88._4_4_ =
         (undefined4)(CONCAT17(uStack_d9,CONCAT25(uStack_db,CONCAT14(uStack_dc,uStack_e0))) >> 0x20)
    ;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143358dc0,0x2b,&uStack_88,&UNK_143358df0,&UNK_143358ab0);
  }
  uStack_70 = CONCAT44(uStack_d4,uStack_d8);
  uStack_68 = uStack_d0;
  uStack_64 = uStack_cc;
  uStack_80 = uStack_e8;
  uStack_7c = (undefined1)uStack_e4;
  uStack_7b = (undefined2)((uint)uStack_e4 >> 8);
  uStack_79 = (undefined1)((uint)uStack_e4 >> 0x18);
  uStack_78 = CONCAT44(CONCAT13(uStack_d9,CONCAT21(uStack_db,uStack_dc)),uStack_e0);
  uStack_88._0_4_ = CONCAT31(uStack_88._1_3_,8);
  pdb_141bfd110(&uStack_e8,param_17);
  uVar11 = uStack_d0;
  uVar10 = uStack_d4;
  uVar9 = uStack_d8;
  uVar8 = uStack_e0;
  uVar7 = uStack_e4;
  if ((char)uStack_e8 == '\x06') {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143358dc0,0x2b,auStack_148,&UNK_143358df0,&UNK_143358ac8);
  }
  uVar2 = CONCAT44(uStack_e4,uStack_e8);
  uVar6 = CONCAT14(uStack_dc,uStack_e0);
  uVar3 = CONCAT17(uStack_d9,CONCAT25(uStack_db,uVar6));
  uVar4 = CONCAT44(uStack_d4,uStack_d8);
  uVar5 = CONCAT44(uStack_cc,uStack_d0);
  uStack_e4 = CONCAT13((char)uStack_e8,(undefined3)uStack_e4);
  uStack_e0 = (uint)((ulonglong)uVar2 >> 8);
  uStack_dc = (undefined1)((uint)uVar7 >> 8);
  uStack_db = (undefined2)((uint)uVar7 >> 0x10);
  uStack_d9 = (undefined1)uVar8;
  uStack_d8 = (undefined4)((uint5)uVar6 >> 8);
  uStack_d4._0_3_ = (undefined3)((ulonglong)uVar3 >> 0x28);
  uStack_d4._3_1_ = (undefined1)uVar9;
  uStack_d0 = (undefined4)((ulonglong)uVar4 >> 8);
  uStack_cc._3_1_ = (undefined1)uVar11;
  uStack_233 = CONCAT13(uStack_cc._3_1_,(int3)((uint)uVar10 >> 8));
  uStack_c8 = (undefined7)((ulonglong)uVar5 >> 8);
  pbStack_3b8 = (byte *)CONCAT71(uStack_1d7,uStack_1d8);
  pbStack_3b0 = (byte *)CONCAT71(uStack_1cf,uStack_1d0);
  uStack_3a8 = uStack_1c8;
  lStack_3a0 = lStack_1c0;
  uStack_398 = uStack_1b8;
  uStack_370 = uStack_1e0;
  uStack_390 = CONCAT71(uStack_1ff,uStack_200);
  uStack_388 = CONCAT71(uStack_1f7,uStack_1f8);
  uStack_380 = uStack_1f0;
  uStack_378 = uStack_1e8;
  uStack_34b._3_1_ = (undefined1)uStack_208;
  uStack_347 = (undefined7)((ulonglong)uStack_208 >> 8);
  uStack_35b._3_1_ = (undefined1)uStack_218;
  uStack_357 = (undefined4)(uStack_218 >> 8);
  uStack_353._0_3_ = (undefined3)(uStack_218 >> 0x28);
  uStack_353._3_1_ = (undefined1)uStack_210;
  uStack_34f = (undefined4)(uStack_210 >> 8);
  uStack_34b._0_3_ = (undefined3)(uStack_210 >> 0x28);
  uStack_368 = uStack_228;
  uStack_367 = (undefined4)uStack_227;
  uStack_363 = CONCAT13(uStack_220,(int3)((uint7)uStack_227 >> 0x20));
  uStack_35f = (uint)uStack_21f;
  uStack_35b._0_3_ = (undefined3)((uint7)uStack_21f >> 0x20);
  uStack_340 = CONCAT71(uStack_3df,3);
  uStack_318 = CONCAT71(uStack_407,4);
  uStack_2d0 = CONCAT44(uStack_14c,uStack_150);
  uStack_2e8 = CONCAT71(uStack_167,uStack_168);
  uStack_2e0 = CONCAT17(uStack_159,CONCAT25(uStack_15b,CONCAT41(uStack_15f,uStack_160)));
  uStack_2d8 = CONCAT44(uStack_154,uStack_158);
  uStack_2f0 = uStack_170;
  uStack_2a8 = CONCAT44(uStack_114,uStack_118);
  uStack_2c8 = CONCAT44(uStack_134,uStack_138);
  uStack_2c0 = CONCAT44(uStack_12c,uStack_130);
  uStack_2b8 = CONCAT44(uStack_124,uStack_128);
  uStack_2b0 = CONCAT44(uStack_11c,uStack_120);
  uStack_280 = CONCAT44(uStack_9c,uStack_a0);
  uStack_298 = CONCAT44(uStack_b4,uStack_b8);
  uStack_290 = CONCAT17(uStack_a9,CONCAT25(uStack_ab,CONCAT14(uStack_ac,uStack_b0)));
  lStack_288 = uStack_a8;
  pbStack_2a0 = uStack_c0;
  uStack_258 = CONCAT44(uStack_64,uStack_68);
  uStack_278 = CONCAT44(uStack_88._4_4_,(uint)uStack_88);
  uStack_270 = CONCAT17(uStack_79,CONCAT25(uStack_7b,CONCAT14(uStack_7c,uStack_80)));
  uStack_268 = uStack_78;
  uStack_260 = uStack_70;
  uStack_250 = 9;
  uStack_22f = uStack_c8;
  uStack_243 = CONCAT13(uStack_d9,(int3)((uint)uVar7 >> 8));
  uStack_23f = uStack_d8;
  uStack_23b = uStack_d4;
  uStack_237 = uStack_d0;
  uStack_24f = uStack_e8;
  uStack_24b = uStack_e4;
  uStack_247 = uStack_e0;
  uStack_cc = uStack_233;
  lVar16 = pdb_14191d9c0(&pbStack_3b8,10,param_2,&uStack_1a8);
  if (lVar16 == 0) {
    pdb_14191ed70(&pbStack_3b8);
    uVar17 = param_2[3];
    uVar22 = uVar17 + 0xc;
    uVar21 = 0xffffffffffffffff;
    if (uVar17 < 0xfffffffffffffff4) {
      uVar21 = uVar22;
    }
    uVar19 = param_2[2];
    if ((*param_2 < uVar21) && (*param_2 - uVar19 < uVar21 - uVar19)) {
      pdb_142d7f1b0(param_2,uVar19,uVar21 - uVar19,1,1);
      uVar19 = param_2[2];
      if (uVar19 < uVar17) goto LAB_14191cbde;
LAB_14191cd99:
      uVar21 = param_2[1];
    }
    else {
      if (uVar17 <= uVar19) goto LAB_14191cd99;
LAB_14191cbde:
      uVar21 = param_2[1];
      pub_142e32780(uVar19 + uVar21,0);
      param_2[2] = uVar17;
      uVar19 = uVar17;
    }
    *(undefined8 *)(uVar21 + uVar17) = 0x79726f7473694822;
    *(undefined4 *)(uVar21 + 8 + uVar17) = 0xa7b3a22;
    if (uVar19 < uVar22) {
      param_2[2] = uVar22;
    }
    param_2[3] = uVar22;
    uStack_a8 = (longlong)param_9;
    uStack_b8 = CONCAT31(uStack_b8._1_3_,2);
    uStack_b0 = (uint)(param_9 >> 0x1f) >> 0x1f;
    uStack_ac = 0;
    uStack_ab = 0;
    uStack_a9 = 0;
    uStack_c0 = (byte *)CONCAT71(uStack_c0._1_7_,10);
    uStack_70 = (ulonglong)param_10;
    uStack_78 = uStack_70 >> 0x3f;
    uStack_80 = CONCAT31(uStack_80._1_3_,2);
    uStack_88._0_4_ = CONCAT31(uStack_88._1_3_,0xb);
    pdb_141bfbe60(&uStack_138,param_13,param_14);
    uVar13 = uStack_11c;
    uVar12 = uStack_120;
    uVar11 = uStack_124;
    uVar10 = uStack_128;
    uVar9 = uStack_12c;
    uVar8 = uStack_130;
    uVar7 = uStack_134;
    if ((char)uStack_138 == '\x06') {
      uStack_170 = CONCAT44(uStack_12c,uStack_130);
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143358dc0,0x2b,&uStack_170,&UNK_143358df0,&UNK_143358ae0);
    }
    uVar2 = CONCAT44(uStack_134,uStack_138);
    uVar3 = CONCAT44(uStack_12c,uStack_130);
    uVar4 = CONCAT44(uStack_124,uStack_128);
    uVar5 = CONCAT44(uStack_11c,uStack_120);
    uStack_134 = CONCAT13((char)uStack_138,(undefined3)uStack_134);
    uStack_130 = (uint)((ulonglong)uVar2 >> 8);
    uStack_12c._3_1_ = (undefined1)uVar8;
    uStack_35b = CONCAT13(uStack_12c._3_1_,(int3)((uint)uVar7 >> 8));
    uStack_128 = (undefined4)((ulonglong)uVar3 >> 8);
    uStack_124._3_1_ = (undefined1)uVar10;
    uStack_353 = CONCAT13(uStack_124._3_1_,(int3)((uint)uVar9 >> 8));
    uStack_120 = (undefined4)((ulonglong)uVar4 >> 8);
    uStack_11c._3_1_ = (undefined1)uVar12;
    uStack_34b = CONCAT13(uStack_11c._3_1_,(int3)((uint)uVar11 >> 8));
    uStack_118 = (undefined4)((ulonglong)uVar5 >> 8);
    uStack_114._0_3_ = (undefined3)((uint)uVar13 >> 8);
    pbStack_3b0 = (byte *)CONCAT44(uStack_b4,uStack_b8);
    uStack_3a8 = CONCAT17(uStack_a9,CONCAT25(uStack_ab,CONCAT14(uStack_ac,uStack_b0)));
    pbStack_3b8 = uStack_c0;
    lStack_3a0 = uStack_a8;
    uStack_398 = CONCAT44(uStack_9c,uStack_a0);
    uStack_370 = CONCAT44(uStack_64,uStack_68);
    uStack_390 = CONCAT44(uStack_88._4_4_,(uint)uStack_88);
    uStack_388 = CONCAT17(uStack_79,CONCAT25(uStack_7b,CONCAT14(uStack_7c,uStack_80)));
    uStack_380 = uStack_78;
    uStack_378 = uStack_70;
    uStack_368 = 0xc;
    uStack_347 = CONCAT34((undefined3)uStack_114,uStack_118);
    uStack_357 = uStack_128;
    uStack_34f = uStack_120;
    uStack_367 = uStack_138;
    uStack_363 = uStack_134;
    uStack_35f = uStack_130;
    uStack_12c = uStack_35b;
    uStack_124 = uStack_353;
    uStack_11c = uStack_34b;
    lVar16 = pdb_14191d9c0(&pbStack_3b8,3,param_2,&uStack_1a8);
    if (lVar16 == 0) {
      pdb_14191eaa0(&pbStack_3b8);
      lVar16 = pdb_140b34560(param_2,&UNK_143358af8,0xf);
      if (lVar16 == 0) {
        lVar23 = 0;
        lVar16 = param_11;
        while (lVar14 = lStack_f8, lVar16 != param_12) {
          uVar17 = param_2[3];
          if (lStack_f8 == lStack_108) {
            pdb_142db0920(&lStack_108);
          }
          *(ulonglong *)(pbStack_100 + lVar14 * 8) = uVar17;
          lStack_f8 = lVar14 + 1;
          if (lVar23 != 0) {
            uVar17 = param_2[3];
            uVar22 = uVar17 + 2;
            uVar21 = uVar22;
            if (0xfffffffffffffffd < uVar17) {
              uVar21 = 0xffffffffffffffff;
            }
            uVar19 = param_2[2];
            if ((*param_2 < uVar21) && (*param_2 - uVar19 < uVar21 - uVar19)) {
              pdb_142d7f1b0(param_2,uVar19,uVar21 - uVar19,1,1);
              uVar19 = param_2[2];
              if (uVar19 < uVar17) goto LAB_14191cfe4;
LAB_14191d030:
              *(undefined2 *)(param_2[1] + uVar17) = 0xa2c;
            }
            else {
              if (uVar17 <= uVar19) goto LAB_14191d030;
LAB_14191cfe4:
              uVar21 = param_2[1];
              pub_142e32780(uVar19 + uVar21,0);
              param_2[2] = uVar17;
              *(undefined2 *)(uVar21 + uVar17) = 0xa2c;
              uVar19 = uVar17;
            }
            if (uVar19 < uVar22) {
              param_2[2] = uVar22;
            }
            param_2[3] = uVar22;
          }
          pdb_14007ee60();
          pbVar18 = pub_1406abab0(0x80,1);
          if (pbVar18 == (byte *)0x0) {
            pdb_142dc7e2a(1,0x80);
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          pbStack_3b8 = (byte *)0x80;
          uStack_3a8 = 0;
          uStack_88 = &pbStack_3b8;
          pbStack_3b0 = pbVar18;
          pbVar18 = (byte *)pdb_14198c720(lVar16,&uStack_88);
          if (pbVar18 != (byte *)0x0) {
            if (pbStack_3b8 != (byte *)0x0) {
              pub_1406abac0(pbStack_3b0,(ulonglong)pbStack_3b8,1);
            }
LAB_14191d2f8:
            pbStack_3b8 = pbVar18;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_143358dc0,0x2b,&pbStack_3b8,&UNK_143358df0,&UNK_143358b10);
          }
          pbStack_110 = pbStack_3b8;
          pbVar18 = pbStack_3b0;
          if (SBORROW8(0,(longlong)pbStack_3b8)) goto LAB_14191d2f8;
          uVar17 = param_2[3];
          uStack_140 = uStack_3a8;
          uVar22 = uVar17 + uStack_3a8;
          uVar21 = uVar22;
          if (CARRY8(uVar17,uStack_3a8)) {
            uVar21 = 0xffffffffffffffff;
          }
          uVar19 = param_2[2];
          if ((*param_2 < uVar21) && (*param_2 - uVar19 < uVar21 - uVar19)) {
            pbStack_f0 = pbStack_3b0;
            pdb_142d7f1b0(param_2,uVar19,uVar21 - uVar19,1,1);
            uVar19 = param_2[2];
            pbVar18 = pbStack_f0;
            if (uVar19 < uVar17) goto LAB_14191d0fe;
LAB_14191d170:
            uVar21 = param_2[1];
            lStack_1b0 = lVar23;
          }
          else {
            if (uVar17 <= uVar19) goto LAB_14191d170;
LAB_14191d0fe:
            uVar21 = param_2[1];
            lStack_1b0 = lVar23;
            pbStack_f0 = pbVar18;
            pub_142e32780(uVar19 + uVar21,0);
            param_2[2] = uVar17;
            pbVar18 = pbStack_f0;
            uVar19 = uVar17;
          }
          pub_142e32760(uVar21 + uVar17,pbVar18,uStack_140);
          if (uVar19 < uVar22) {
            param_2[2] = uVar22;
          }
          lVar16 = lVar16 + 0x28;
          lVar23 = lStack_1b0 + 1;
          param_2[3] = uVar22;
          if (pbStack_110 != (byte *)0x0) {
            pub_1406abac0(pbVar18,(ulonglong)pbStack_110,1);
          }
        }
        lVar16 = pdb_140b34560(param_2,&UNK_143358b07,4);
        if (lVar16 == 0) {
          *plStack_90 = lStack_108;
          plStack_90[1] = (longlong)pbStack_100;
          plStack_90[4] = CONCAT44(uStack_19c,uStack_1a0);
          plStack_90[5] = lStack_198;
          plStack_90[6] = lStack_190;
          plStack_90[7] = lStack_188;
          plStack_90[2] = lStack_f8;
          plStack_90[3] = CONCAT44(uStack_1a4,uStack_1a8);
          plStack_90[8] = (longlong)puStack_180;
          return plStack_90;
        }
        lVar16 = pdb_142deaf00(lVar16);
      }
      else {
        lVar16 = pdb_142deaf00(lVar16);
      }
      plStack_90[1] = lVar16;
      *plStack_90 = -0x8000000000000000;
      goto joined_r0x00014191d20d;
    }
    plStack_90[1] = lVar16;
    *plStack_90 = -0x8000000000000000;
    pdb_14191eaa0(&pbStack_3b8);
  }
  else {
    plStack_90[1] = lVar16;
    *plStack_90 = -0x8000000000000000;
    pdb_14191ed70(&pbStack_3b8);
  }
joined_r0x00014191d20d:
  if (lStack_108 != 0) {
    pub_1406abac0(pbStack_100,lStack_108 << 3,8);
  }
  lVar16 = CONCAT44(uStack_19c,uStack_1a0);
  if (lVar16 != 0) {
    uVar17 = lVar16 * 0x18 + 0x27U & 0xfffffffffffffff0;
    uVar21 = lVar16 + uVar17 + 0x11;
    if (uVar21 != 0) {
      pub_1406abac0((byte *)(CONCAT44(uStack_1a4,uStack_1a8) - uVar17),uVar21,0x10);
    }
  }
  return plStack_90;
}

