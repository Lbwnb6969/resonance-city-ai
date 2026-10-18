// PDB country_core::systems::save::save_game::save_game_to_file<std::fs::File,core::slice::iter::Iter<country_core::resources::history::MultiEdit> >

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB:
   country_core::systems::save::save_game::save_game_to_file<std::fs::File,core::slice::iter::Iter<country_core::resources::history::MultiEdit>
   >
   Extent: 5834 bytes. No whole-program auto-analysis. */

longlong *
pdb_1405f1e60(longlong *param_1,longlong param_2,ulonglong param_3,int param_4,undefined8 param_5,
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
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  longlong lVar14;
  undefined4 uVar15;
  byte bVar16;
  longlong *plVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong arg1;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  undefined7 uStack_3ef;
  undefined7 uStack_3c7;
  undefined7 uStack_39f;
  undefined7 uStack_397;
  undefined8 uStack_380;
  undefined7 uStack_377;
  undefined7 uStack_36f;
  undefined8 uStack_358;
  uint7 uStack_34f;
  undefined7 uStack_347;
  undefined8 uStack_330;
  byte *pbStack_328;
  byte *pbStack_320;
  byte *pbStack_318;
  longlong lStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  ulonglong uStack_2f0;
  ulonglong uStack_2e8;
  undefined8 uStack_2e0;
  undefined1 uStack_2d8;
  undefined4 uStack_2d7;
  undefined4 uStack_2d3;
  uint uStack_2cf;
  undefined4 uStack_2cb;
  uint uStack_2c7;
  int iStack_2c3;
  int iStack_2bf;
  int3 iStack_2bb;
  undefined1 uStack_2b8;
  undefined7 uStack_2b7;
  undefined8 uStack_2b0;
  undefined8 uStack_288;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  byte *pbStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  longlong lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  ulonglong uStack_1d8;
  ulonglong uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 uStack_1c0;
  uint uStack_1bf;
  undefined4 uStack_1bb;
  uint uStack_1b7;
  undefined4 uStack_1b3;
  undefined4 uStack_1af;
  undefined4 uStack_1ab;
  undefined4 uStack_1a7;
  undefined4 uStack_1a3;
  undefined7 uStack_19f;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  longlong lStack_188;
  longlong lStack_180;
  longlong lStack_178;
  longlong lStack_170;
  undefined8 uStack_168;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  undefined1 uStack_158;
  undefined4 uStack_157;
  undefined2 uStack_153;
  undefined1 uStack_151;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined1 auStack_140 [8];
  undefined4 uStack_138;
  undefined4 uStack_134;
  uint uStack_130;
  undefined4 uStack_12c;
  uint uStack_128;
  undefined4 uStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  longlong lStack_110;
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
  byte *pbStack_90;
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
  longlong *plStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lVar18 = param_2;
  plStack_58 = param_1;
  plVar17 = (longlong *)pdb_140f3bda0();
  if ((char)plVar17[2] == '\x01') {
    lStack_178 = *plVar17;
    lVar18 = plVar17[1];
  }
  else {
    lStack_178 = pdb_140f4fd10();
    *plVar17 = lStack_178;
    plVar17[1] = lVar18;
    *(undefined1 *)(plVar17 + 2) = 1;
  }
  lStack_110 = param_11;
  *plVar17 = lStack_178 + 1;
  lStack_188 = _DAT_142f74d80;
  lStack_180 = _UNK_142f74d88;
  uStack_198 = _DAT_142f74d70;
  uStack_194 = _UNK_142f74d74;
  uStack_190 = _UNK_142f74d78;
  uStack_18c = _UNK_142f74d7c;
  lStack_108 = 0;
  pbStack_100 = (byte *)0x8;
  lStack_f8 = 0;
  pbVar22 = &UNK_142f74b08;
  lStack_170 = lVar18;
  do {
    while (pbVar23 = pbVar22, pbStack_328 = (byte *)pdb_140f5aed0(param_2,pbVar22,1),
          pbStack_320 = pbVar23, pbStack_328 == (byte *)0x1) {
      switch((uint)pbVar23 & 3) {
      case 0:
        bVar16 = pbVar23[0x10];
        break;
      case 1:
        bVar16 = pbVar23[0xf];
        break;
      case 2:
        goto code_r0x0001405f1fbf;
      case 3:
        bVar16 = (byte)((ulonglong)pbVar23 >> 0x20);
        if (0x29 < (uint)((ulonglong)pbVar23 >> 0x20)) {
          bVar16 = 0x2a;
        }
      }
      if (bVar16 != 0x23) {
code_r0x0001405f1fbf:
        if (pbVar23 != (byte *)0x0) {
LAB_1405f1fc4:
          lVar18 = pdb_142d88fc0(pbVar23);
          goto LAB_1405f1fca;
        }
        goto LAB_1405f1fe7;
      }
      pdb_1404b38e0(&pbStack_320);
    }
    if (pbVar23 == (byte *)0x0) {
      pbVar23 = &UNK_142f52c60;
      goto LAB_1405f1fc4;
    }
    if ((byte *)0x1 < pbVar23) {
      pdb_142dc8420(pbVar23,1,1,&UNK_142f52ce8);
      goto LAB_1405f2eab;
    }
    pbVar22 = pbVar22 + (longlong)pbVar23;
  } while (pbVar23 != (byte *)0x1);
LAB_1405f1fe7:
  pdb_140614c10(&uStack_88,param_5);
  lVar18 = param_15;
  if ((char)uStack_88 == '\x06') {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_142f74ec0,0x2b,&uStack_c0,&UNK_142f74ef0,&UNK_142f74b40);
  }
  pdb_140235ce0(&uStack_88,param_6);
  if ((char)uStack_88 == '\x06') {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_142f74ec0,0x2b,&uStack_c0,&UNK_142f74ef0,&UNK_142f74b58);
  }
  if (param_7 == 0) {
    uStack_88._0_4_ = (uint)uStack_88 & 0xffffff00;
  }
  else {
    pdb_140676fa0(&uStack_88);
    if ((char)uStack_88 == '\x06') {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_142f74ec0,0x2b,&uStack_c0,&UNK_142f74ef0,&UNK_142f74b70);
    }
  }
  uStack_15f = CONCAT43(uStack_88._4_4_,uStack_88._1_3_);
  uStack_157 = CONCAT13(uStack_7c,uStack_80._1_3_);
  uStack_150 = (int)uStack_78;
  uStack_14c = uStack_78._4_4_;
  uStack_148 = (undefined4)uStack_70;
  uStack_144 = uStack_70._4_4_;
  uStack_160 = (char)uStack_88;
  uStack_158 = (undefined1)uStack_80;
  uStack_153 = uStack_7b;
  uStack_151 = uStack_79;
  uStack_168 = CONCAT71(uStack_168._1_7_,5);
  pdb_1403a8260(&uStack_88,&param_8);
  if ((char)uStack_88 == '\x06') {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_142f74ec0,0x2b,&uStack_c0,&UNK_142f74ef0,&UNK_142f74b88);
  }
  uStack_124 = CONCAT13(uStack_79,CONCAT21(uStack_7b,uStack_7c));
  iStack_120 = (int)uStack_78;
  uStack_11c = uStack_78._4_4_;
  uStack_118 = (undefined4)uStack_70;
  uStack_114 = uStack_70._4_4_;
  uStack_130 = (uint)uStack_88;
  uStack_12c = uStack_88._4_4_;
  uStack_128 = uStack_80;
  uStack_138 = CONCAT31(uStack_138._1_3_,6);
  if (lVar18 != 0) {
    uStack_c0 = (byte *)0x8000000000000000;
    uStack_a8 = 0;
    uStack_98 = 0;
    uStack_49 = 1;
    lVar18 = pdb_1403bdbc0(&uStack_c0,&UNK_142f3883e,5,lVar18);
    if (lVar18 == 0) {
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
      if ((char)uStack_e8 != '\x06') goto LAB_1405f2284;
      lVar18 = CONCAT17(uStack_d9,CONCAT25(uStack_db,CONCAT14(uStack_dc,uStack_e0)));
    }
    else {
      pdb_1402ecfa0(&uStack_c0);
    }
    uStack_88._0_4_ = (uint)lVar18;
    uStack_88._4_4_ = (undefined4)((ulonglong)lVar18 >> 0x20);
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_142f74ec0,0x2b,&uStack_88,&UNK_142f74ef0,&UNK_142f74ba0);
  }
  uStack_e8 = uStack_e8 & 0xffffff00;
LAB_1405f2284:
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
  pdb_14067dfa0(&uStack_e8,param_16);
  if ((char)uStack_e8 == '\x06') {
    uStack_88._4_4_ =
         (undefined4)(CONCAT17(uStack_d9,CONCAT25(uStack_db,CONCAT14(uStack_dc,uStack_e0))) >> 0x20)
    ;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_142f74ec0,0x2b,&uStack_88,&UNK_142f74ef0,&UNK_142f74bb8);
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
  pdb_1403bc8c0(&uStack_e8,param_17);
  uVar15 = uStack_d0;
  uVar13 = uStack_d4;
  uVar9 = uStack_d8;
  uVar8 = uStack_e0;
  uVar7 = uStack_e4;
  if ((char)uStack_e8 == '\x06') {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_142f74ec0,0x2b,auStack_140,&UNK_142f74ef0,&UNK_142f74bd0);
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
  uStack_cc._3_1_ = (undefined1)uVar15;
  uStack_1a3 = CONCAT13(uStack_cc._3_1_,(int3)((uint)uVar13 >> 8));
  uStack_c8 = (undefined7)((ulonglong)uVar5 >> 8);
  pbStack_328 = (byte *)((ulonglong)uStack_34f << 8);
  pbStack_320 = (byte *)CONCAT71(uStack_347,2);
  pbStack_318 = (byte *)0x0;
  lStack_310 = 0x1e;
  uStack_308 = uStack_330;
  uStack_2e0 = uStack_358;
  uStack_300 = CONCAT71(uStack_377,1);
  uStack_2f8 = CONCAT71(uStack_36f,2);
  uStack_2f0 = 0;
  uStack_2b8 = (undefined1)uStack_380;
  uStack_2b7 = (undefined7)((ulonglong)uStack_380 >> 8);
  uStack_2cb._3_1_ = (byte)(param_4 >> 0x1f) >> 7;
  uStack_2c7 = 0;
  iStack_2c3 = param_4 << 0x18;
  iStack_2bf = (int)(int3)((uint)param_4 >> 8);
  iStack_2bb = (int3)(param_4 >> 0x1f);
  uStack_2d8 = 2;
  uStack_2d7 = (undefined4)uStack_39f;
  uStack_2d3 = CONCAT13(2,(int3)((uint7)uStack_39f >> 0x20));
  uStack_2cf = (uint)uStack_397;
  uStack_2cb._0_3_ = (undefined3)((uint7)uStack_397 >> 0x20);
  uStack_2b0 = CONCAT71(uStack_3c7,3);
  uStack_288 = CONCAT71(uStack_3ef,4);
  uStack_240 = CONCAT44(uStack_144,uStack_148);
  uStack_258 = CONCAT71(uStack_15f,uStack_160);
  uStack_250 = CONCAT17(uStack_151,CONCAT25(uStack_153,CONCAT41(uStack_157,uStack_158)));
  uStack_248 = CONCAT44(uStack_14c,uStack_150);
  uStack_260 = uStack_168;
  uStack_218 = CONCAT44(uStack_114,uStack_118);
  uStack_238 = CONCAT44(uStack_134,uStack_138);
  uStack_230 = CONCAT44(uStack_12c,uStack_130);
  uStack_228 = CONCAT44(uStack_124,uStack_128);
  uStack_220 = CONCAT44(uStack_11c,iStack_120);
  uStack_1f0 = CONCAT44(uStack_9c,uStack_a0);
  uStack_208 = CONCAT44(uStack_b4,uStack_b8);
  uStack_200 = CONCAT17(uStack_a9,CONCAT25(uStack_ab,CONCAT14(uStack_ac,uStack_b0)));
  lStack_1f8 = uStack_a8;
  pbStack_210 = uStack_c0;
  uStack_1c8 = CONCAT44(uStack_64,uStack_68);
  uStack_1e8 = CONCAT44(uStack_88._4_4_,(uint)uStack_88);
  uStack_1e0 = CONCAT17(uStack_79,CONCAT25(uStack_7b,CONCAT14(uStack_7c,uStack_80)));
  uStack_1d8 = uStack_78;
  uStack_1d0 = uStack_70;
  uStack_1c0 = 9;
  uStack_19f = uStack_c8;
  uStack_1b3 = CONCAT13(uStack_d9,(int3)((uint)uVar7 >> 8));
  uStack_1af = uStack_d8;
  uStack_1ab = uStack_d4;
  uStack_1a7 = uStack_d0;
  uStack_1bf = uStack_e8;
  uStack_1bb = uStack_e4;
  uStack_1b7 = uStack_e0;
  uStack_2e8 = param_3;
  uStack_cc = uStack_1a3;
  lVar18 = pdb_1405f3530(&pbStack_328,10,param_2,&uStack_198);
  if (lVar18 == 0) {
    pdb_1405f4920(&pbStack_328);
    pbVar22 = (byte *)0xc;
    pbVar23 = &UNK_142f74be8;
    do {
      pbVar21 = pbVar23;
      pbStack_328 = (byte *)pdb_140f5aed0(param_2,pbVar23,pbVar22);
      pbStack_320 = pbVar21;
      if (pbStack_328 == (byte *)0x1) {
        switch((uint)pbVar21 & 3) {
        case 0:
          bVar16 = pbVar21[0x10];
          break;
        case 1:
          bVar16 = pbVar21[0xf];
          break;
        case 2:
          goto code_r0x0001405f2660;
        case 3:
          bVar16 = (byte)((ulonglong)pbVar21 >> 0x20);
          if (0x29 < (uint)((ulonglong)pbVar21 >> 0x20)) {
            bVar16 = 0x2a;
          }
        }
        if (bVar16 != 0x23) {
code_r0x0001405f2660:
          if (pbVar21 != (byte *)0x0) {
LAB_1405f2665:
            lVar18 = pdb_142d88fc0(pbVar21);
            goto LAB_1405f1fca;
          }
          break;
        }
        pdb_1404b38e0(&pbStack_320);
      }
      else {
        if (pbVar21 == (byte *)0x0) {
          pbVar21 = &UNK_142f52c60;
          goto LAB_1405f2665;
        }
        if (pbVar22 < pbVar21) {
          pdb_142dc8420(pbVar21,pbVar22,pbVar22,&UNK_142f52ce8);
          goto LAB_1405f2eab;
        }
        pbVar23 = pbVar23 + (longlong)pbVar21;
        pbVar22 = pbVar22 + -(longlong)pbVar21;
      }
    } while (pbVar22 != (byte *)0x0);
    uStack_a8 = (ulonglong)param_9;
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
    pdb_1403bcd40(&uStack_138,param_13,param_14);
    uVar13 = uStack_11c;
    iVar12 = iStack_120;
    iVar11 = uStack_124;
    uVar10 = uStack_128;
    uVar9 = uStack_12c;
    uVar8 = uStack_130;
    uVar7 = uStack_134;
    if ((char)uStack_138 == '\x06') {
      uStack_168 = CONCAT44(uStack_12c,uStack_130);
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_142f74ec0,0x2b,&uStack_168,&UNK_142f74ef0,&UNK_142f74bf8);
    }
    uVar2 = CONCAT44(uStack_134,uStack_138);
    uVar3 = CONCAT44(uStack_12c,uStack_130);
    uVar4 = CONCAT44(uStack_124,uStack_128);
    uVar5 = CONCAT44(uStack_11c,iStack_120);
    uStack_134 = CONCAT13((char)uStack_138,(undefined3)uStack_134);
    uStack_130 = (uint)((ulonglong)uVar2 >> 8);
    uStack_12c._3_1_ = (undefined1)uVar8;
    uStack_2cb = CONCAT13(uStack_12c._3_1_,(int3)((uint)uVar7 >> 8));
    uStack_128 = (uint)((ulonglong)uVar3 >> 8);
    uStack_124._3_1_ = (undefined1)uVar10;
    iStack_2c3 = CONCAT13(uStack_124._3_1_,(int3)((uint)uVar9 >> 8));
    iStack_120 = (int)((ulonglong)uVar4 >> 8);
    uStack_11c._3_1_ = (undefined1)iVar12;
    _iStack_2bb = CONCAT13(uStack_11c._3_1_,(int3)((uint)iVar11 >> 8));
    uStack_118 = (undefined4)((ulonglong)uVar5 >> 8);
    uStack_114._0_3_ = (undefined3)((uint)uVar13 >> 8);
    pbStack_320 = (byte *)CONCAT44(uStack_b4,uStack_b8);
    pbStack_318 = (byte *)CONCAT17(uStack_a9,CONCAT25(uStack_ab,CONCAT14(uStack_ac,uStack_b0)));
    pbStack_328 = uStack_c0;
    lStack_310 = uStack_a8;
    uStack_308 = CONCAT44(uStack_9c,uStack_a0);
    uStack_2e0 = CONCAT44(uStack_64,uStack_68);
    uStack_300 = CONCAT44(uStack_88._4_4_,(uint)uStack_88);
    uStack_2f8 = CONCAT17(uStack_79,CONCAT25(uStack_7b,CONCAT14(uStack_7c,uStack_80)));
    uStack_2f0 = uStack_78;
    uStack_2e8 = uStack_70;
    uStack_2d8 = 0xc;
    uStack_2b7 = CONCAT34((undefined3)uStack_114,uStack_118);
    uStack_2c7 = uStack_128;
    iStack_2bf = iStack_120;
    uStack_2d7 = uStack_138;
    uStack_2d3 = uStack_134;
    uStack_2cf = uStack_130;
    uStack_12c = uStack_2cb;
    uStack_124 = iStack_2c3;
    uStack_11c = _iStack_2bb;
    lVar18 = pdb_1405f3530(&pbStack_328,3,param_2,&uStack_198);
    if (lVar18 == 0) {
      pdb_1405f4650(&pbStack_328);
      pbVar22 = &UNK_142f74c10;
      lVar18 = pdb_1403ee0d0(param_2,&UNK_142f74c10,0xf);
      if (lVar18 == 0) {
        lVar18 = 0;
        while (lStack_110 != param_12) {
          lVar20 = pdb_140f5aef0(param_2);
          lVar14 = lStack_f8;
          if (lVar20 == 1) {
            pbStack_328 = pbVar22;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_142f74ec0,0x2b,&pbStack_328,&UNK_142f74ea0,&UNK_142f74c28);
          }
          if (lStack_f8 == lStack_108) {
            pdb_142db0920(&lStack_108);
          }
          *(byte **)(pbStack_100 + lVar14 * 8) = pbVar22;
          lStack_f8 = lVar14 + 1;
          if (lVar18 != 0) {
            pbVar22 = (byte *)0x2;
            pbVar23 = &UNK_142f74c40;
            do {
              pbVar21 = pbVar23;
              pbStack_328 = (byte *)pdb_140f5aed0(param_2,pbVar23,pbVar22);
              pbStack_320 = pbVar21;
              if (pbStack_328 == (byte *)0x1) {
                switch((uint)pbVar21 & 3) {
                case 0:
                  bVar16 = pbVar21[0x10];
                  break;
                case 1:
                  bVar16 = pbVar21[0xf];
                  break;
                case 2:
                  goto code_r0x0001405f292c;
                case 3:
                  bVar16 = (byte)((ulonglong)pbVar21 >> 0x20);
                  if (0x29 < (uint)((ulonglong)pbVar21 >> 0x20)) {
                    bVar16 = 0x2a;
                  }
                }
                if (bVar16 != 0x23) {
code_r0x0001405f292c:
                  if (pbVar21 != (byte *)0x0) {
code_r0x0001405f2aa8:
                    lVar18 = pdb_142d88fc0(pbVar21);
                    goto LAB_1405f1fca;
                  }
                  break;
                }
                pdb_1404b38e0(&pbStack_320);
              }
              else {
                if (pbVar21 == (byte *)0x0) {
                  pbVar21 = &UNK_142f52c60;
                  goto code_r0x0001405f2aa8;
                }
                if (pbVar22 < pbVar21) {
                  pdb_142dc8420(pbVar21,pbVar22,pbVar22,&UNK_142f52ce8);
                  goto LAB_1405f2eab;
                }
                pbVar23 = pbVar23 + (longlong)pbVar21;
                pbVar22 = pbVar22 + -(longlong)pbVar21;
              }
            } while (pbVar22 != (byte *)0x0);
          }
          pdb_14007ee60();
          pbVar22 = pub_1406abab0(0x80,1);
          if (pbVar22 == (byte *)0x0) {
            pdb_142dc7e2a(1,0x80);
LAB_1405f2eab:
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          pbStack_328 = (byte *)0x80;
          pbStack_318 = (byte *)0x0;
          uStack_88 = &pbStack_328;
          pbStack_320 = pbVar22;
          pbStack_90 = (byte *)pdb_1403dc750(lStack_110,&uStack_88);
          if (pbStack_90 != (byte *)0x0) {
            if (pbStack_328 != (byte *)0x0) {
              pub_1406abac0(pbStack_320,(ulonglong)pbStack_328,1);
            }
LAB_1405f2e71:
            pbStack_328 = pbStack_90;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_142f74ec0,0x2b,&pbStack_328,&UNK_142f74ef0,&UNK_142f74c48);
          }
          pbStack_90 = pbStack_320;
          pbStack_f0 = pbStack_328;
          pbVar22 = pbStack_320;
          pbVar23 = pbStack_318;
          if (SBORROW8(0,(longlong)pbStack_328)) goto LAB_1405f2e71;
joined_r0x0001405f29cc:
          if (pbVar23 != (byte *)0x0) {
            pbVar21 = pbVar22;
            pbStack_328 = (byte *)pdb_140f5aed0(param_2,pbVar22,pbVar23);
            pbStack_320 = pbVar21;
            if (pbStack_328 == (byte *)0x1) {
              switch((uint)pbVar21 & 3) {
              case 0:
                bVar16 = pbVar21[0x10];
                break;
              case 1:
                bVar16 = pbVar21[0xf];
                break;
              case 2:
                goto code_r0x0001405f2a5e;
              case 3:
                bVar16 = (byte)((ulonglong)pbVar21 >> 0x20);
                if (0x29 < (uint)((ulonglong)pbVar21 >> 0x20)) {
                  bVar16 = 0x2a;
                }
              }
              if (bVar16 == 0x23) {
                pdb_1404b38e0(&pbStack_320);
                goto joined_r0x0001405f29cc;
              }
code_r0x0001405f2a5e:
              if (pbVar21 == (byte *)0x0) goto LAB_1405f2a63;
            }
            else {
              if (pbVar21 != (byte *)0x0) {
                if (pbVar21 <= pbVar23) goto LAB_1405f29db;
                pdb_142dc8420(pbVar21,pbVar23,pbVar23,&UNK_142f52ce8);
                goto LAB_1405f2eab;
              }
              pbVar21 = &UNK_142f52c60;
            }
            lVar18 = pdb_142d88fc0(pbVar21);
            plStack_58[1] = lVar18;
            *plStack_58 = -0x8000000000000000;
            if (pbStack_f0 != (byte *)0x0) {
              pub_1406abac0(pbStack_90,(ulonglong)pbStack_f0,1);
            }
            goto LAB_1405f2537;
          }
LAB_1405f2a63:
          lStack_110 = lStack_110 + 0x28;
          lVar18 = lVar18 + 1;
          pbVar22 = pbStack_f0;
          if (pbStack_f0 != (byte *)0x0) {
            pub_1406abac0(pbStack_90,(ulonglong)pbStack_f0,1);
          }
        }
        lVar18 = pdb_1403ee0d0(param_2,&UNK_142f74c1f,4);
        if (lVar18 == 0) {
          *plStack_58 = lStack_108;
          plStack_58[1] = (longlong)pbStack_100;
          plStack_58[4] = CONCAT44(uStack_18c,uStack_190);
          plStack_58[5] = lStack_188;
          plStack_58[6] = lStack_180;
          plStack_58[7] = lStack_178;
          plStack_58[2] = lStack_f8;
          plStack_58[3] = CONCAT44(uStack_194,uStack_198);
          plStack_58[8] = lStack_170;
          return plStack_58;
        }
        lVar18 = pdb_142d88fc0(lVar18);
      }
      else {
        lVar18 = pdb_142d88fc0(lVar18);
      }
LAB_1405f1fca:
      plStack_58[1] = lVar18;
      *plStack_58 = -0x8000000000000000;
    }
    else {
      plStack_58[1] = lVar18;
      *plStack_58 = -0x8000000000000000;
      pdb_1405f4650(&pbStack_328);
    }
  }
  else {
    plStack_58[1] = lVar18;
    *plStack_58 = -0x8000000000000000;
    pdb_1405f4920(&pbStack_328);
  }
LAB_1405f2537:
  if (lStack_108 != 0) {
    pub_1406abac0(pbStack_100,lStack_108 << 3,8);
  }
  lVar18 = CONCAT44(uStack_18c,uStack_190);
  if (lVar18 != 0) {
    uVar19 = lVar18 * 0x18 + 0x27U & 0xfffffffffffffff0;
    arg1 = lVar18 + uVar19 + 0x11;
    if (arg1 != 0) {
      pub_1406abac0((byte *)(CONCAT44(uStack_194,uStack_198) - uVar19),arg1,0x10);
    }
  }
  return plStack_58;
LAB_1405f29db:
  pbVar22 = pbVar22 + (longlong)pbVar21;
  pbVar23 = pbVar23 + -(longlong)pbVar21;
  goto joined_r0x0001405f29cc;
}

