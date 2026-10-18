// VA 0x1414c5500, PDB extent 3889 bytes
// system_decorator::ui_systems::handle_splitting_wall_decorators::handle_moving_out_wall_decorator_part
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/handle_splitting_wall_decorators.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::ui_systems::handle_splitting_wall_decorators::handle_moving_out_wall_decorator_part
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/handle_splitting_wall_decorators.rs
   Extent: 3889 */

undefined4 *
pdb_1414c5500(undefined4 *param_1,ulonglong param_2,undefined8 param_3,ulonglong *param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7,longlong *param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined1 param_14)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  ulonglong uVar10;
  byte *arg0;
  float fVar11;
  float fVar12;
  char cVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  uint uVar16;
  undefined4 uVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  longlong lVar20;
  ulonglong *puVar21;
  undefined4 *puVar22;
  ulonglong *puVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  byte *pbVar27;
  ulonglong uVar28;
  bool bVar29;
  float fVar30;
  float fVar31;
  float unaff_XMM6_Da;
  float unaff_XMM6_Db;
  uint uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  uint uVar36;
  uint uVar37;
  undefined1 unaff_XMM10 [16];
  undefined1 auVar38 [16];
  ulonglong uStack_358;
  longlong lStack_350;
  longlong lStack_348;
  longlong lStack_340;
  longlong lStack_338;
  ulonglong uStack_328;
  ulonglong uStack_320;
  ulonglong uStack_318;
  ulonglong uStack_310;
  ulonglong uStack_308;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2c8;
  ulonglong *puStack_2c0;
  int *piStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 uStack_2a8;
  undefined4 *puStack_2a0;
  ulonglong uStack_298;
  ulonglong uStack_290;
  longlong lStack_288;
  longlong lStack_280;
  longlong lStack_278;
  int iStack_26c;
  undefined8 uStack_268;
  undefined8 uStack_260;
  ulonglong uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  ulonglong uStack_240;
  ulonglong uStack_238;
  ulonglong uStack_230;
  ulonglong uStack_228;
  longlong *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  ulonglong uStack_208;
  ulonglong uStack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  ulonglong uStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  ulonglong uStack_1a0;
  longlong lStack_198;
  ulonglong uStack_190;
  ulonglong uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  longlong lStack_160;
  longlong lStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined1 uStack_140;
  byte bStack_13f;
  undefined1 uStack_13e;
  undefined1 uStack_13c;
  longlong lStack_138;
  longlong lStack_130;
  undefined4 uStack_128;
  longlong lStack_120;
  undefined8 uStack_118;
  ulonglong uStack_110;
  ulonglong uStack_108;
  longlong lStack_100;
  undefined4 *puStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  ulonglong *puStack_e0;
  undefined4 uStack_d4;
  longlong lStack_d0;
  undefined4 uStack_c8;
  byte bStack_c2;
  undefined1 uStack_c1;
  undefined8 uStack_c0;
  
  uStack_c0 = 0xfffffffffffffffe;
  uStack_110 = *param_4;
  uStack_108 = param_4[1];
  uStack_118 = param_3;
  plVar18 = (longlong *)pdb_140c3ec10(param_3,uStack_110,uStack_108,param_5);
  if (plVar18 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143312e60);
  }
  lStack_120 = *plVar18;
  uStack_228 = plVar18[1];
  lStack_338 = plVar18[6];
  lStack_348 = plVar18[4];
  lStack_340 = plVar18[5];
  uStack_358 = plVar18[2];
  lStack_350 = plVar18[3];
  bVar6 = *(byte *)((longlong)plVar18 + 0x59);
  uStack_d4 = (undefined4)plVar18[10];
  lStack_278 = plVar18[9];
  lStack_288 = plVar18[7];
  lStack_280 = plVar18[8];
  puVar19 = (undefined8 *)pdb_1409012b0(plVar18);
  if (puVar19 == (undefined8 *)0x0) {
    uStack_2d8._0_3_ = CONCAT12(2,(undefined2)uStack_2d8);
    iStack_26c = 0;
  }
  else {
    uVar8 = puVar19[4];
    uStack_2f8 = *puVar19;
    uStack_2f0 = puVar19[1];
    uStack_2e8 = puVar19[2];
    uStack_2e0 = puVar19[3];
    iStack_26c = 0;
    uStack_2d8._2_1_ = (char)((ulonglong)uVar8 >> 0x10);
    bVar29 = uStack_2d8._2_1_ != '\x02';
    uStack_2d8 = uVar8;
    if (bVar29) {
      iStack_26c = 1;
      uStack_268 = uStack_2f8;
    }
  }
  uStack_1b8 = 0;
  uStack_c1 = 1;
  puStack_2a0 = param_1;
  plStack_220 = plVar18;
  puStack_e0 = param_4;
  bStack_c2 = bVar6;
  lVar20 = pdb_1409012b0(plVar18);
  if (lVar20 != 0) {
    uStack_c1 = 1;
    cVar13 = pdb_140b86c70(*(undefined1 *)(lVar20 + 0x20));
    if (cVar13 != '\0') {
      if (bStack_c2 == 0) {
        uStack_c1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143312e90);
      }
      uStack_1d8 = 0;
      uStack_1cc = CONCAT31(uStack_1cc._1_3_,bStack_c2 - 1);
      uStack_1b8 = 1;
      uStack_c8 = 0;
      uVar25 = 1;
      goto LAB_1414c5aed;
    }
  }
  if (iStack_26c == 0) {
    uVar25 = 0;
    uStack_c8 = 0;
  }
  else {
    uStack_c1 = 1;
    uVar14 = pdb_140c45920(param_8,param_5);
    uStack_c8 = CONCAT31(uStack_c8._1_3_,uVar14);
    uVar15 = *(undefined1 *)((longlong)plStack_220 + 0x59);
    lStack_e8 = *param_8;
    uStack_c1 = 1;
    uVar14 = pdb_1409012c0(uVar14);
    lStack_d0 = param_8[1];
    uStack_c1 = 1;
    uVar15 = pdb_140c44ba0(uVar15);
    uStack_218._0_2_ = CONCAT11(uVar14,uVar15);
    uStack_c1 = 1;
    lVar20 = pdb_141494370(lStack_d0,&uStack_218);
    fVar12 = _UNK_142e36f68;
    fVar11 = _UNK_142e36f64;
    fVar31 = _DAT_142e36f60;
    if (lVar20 == 0) {
      pcStack_1a8 = pdb_1414942d0;
      uStack_c1 = 1;
      uStack_1b0 = &uStack_218;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14330e2c6,&uStack_1b0,&UNK_14330e2f8);
    }
    fVar30 = *(float *)(lVar20 + 0x3c) - *(float *)(lVar20 + 0x38);
    fVar1 = *(float *)(lVar20 + 0x30);
    uStack_290 = (ulonglong)bStack_c2;
    uVar25 = ~param_2 + (ulonglong)bStack_c2;
    pcStack_1a8 = (code *)0x2;
    uStack_298 = param_2;
    uStack_1a0 = param_2;
    lStack_198 = CONCAT44(lStack_198._4_4_,0xbf800000);
    uStack_190 = uVar25;
    uStack_188 = CONCAT44(uStack_188._4_4_,0x3f800000);
    uVar16 = (uint)(lStack_120 == 2);
    uVar32 = (int)(uVar16 << 0x1f) >> 0x1f;
    fVar34 = (float)((int)(uVar16 << 0x1f) >> 0x1f & _UNK_142e378e4);
    fVar35 = (float)((int)(uVar16 << 0x1f) >> 0x1f & _UNK_142e378e8);
    fVar33 = (float)(uVar32 & _DAT_142e378e0 | ~uVar32 & _DAT_142e36f28);
    uVar16 = (uint)(lStack_120 != 2);
    lVar20 = 0;
    uVar32 = (int)(uVar16 * -0x80000000) >> 0x1f;
    uVar36 = (int)(uVar16 * -0x80000000) >> 0x1f;
    uVar37 = (int)(uVar16 * -0x80000000) >> 0x1f;
    do {
      uVar26 = lVar20 + 1;
      if ((&uStack_1a0)[lVar20 * 2] == 0) {
        if (uVar26 == 2) break;
        uVar26 = 2;
        puVar21 = &uStack_190;
        uVar28 = uVar25;
        if (uVar25 == 0) break;
      }
      else {
        puVar21 = &uStack_1a0 + lVar20 * 2;
        uVar28 = (&uStack_1a0)[lVar20 * 2];
      }
      uStack_1b0 = (undefined8 *)uVar26;
      fVar2 = *(float *)(puVar21 + 1);
      uStack_c1 = 1;
      uVar15 = pdb_1409012c0((undefined1)uStack_c8,lStack_e8);
      uStack_c1 = 1;
      uVar14 = pdb_140c44ba0(uVar28 & 0xffffffff);
      uStack_260._0_2_ = CONCAT11(uVar15,uVar14);
      uStack_c1 = 1;
      lVar20 = pdb_141494370(lStack_d0,&uStack_260);
      if (lVar20 == 0) {
        uStack_218 = &uStack_260;
        uStack_210 = pdb_1414942d0;
        uStack_c1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14330e2c6,&uStack_218,&UNK_14330e2f8);
      }
      fVar3 = *(float *)(lVar20 + 0x3c);
      fVar4 = *(float *)(lVar20 + 0x38);
      fVar5 = *(float *)(lVar20 + 0x30);
      bVar29 = 2 < uStack_1b8;
      puVar22 = (undefined4 *)CONCAT44(uStack_1d4,uStack_1d8);
      if (!bVar29) {
        puVar22 = &uStack_1d8;
      }
      puVar21 = &uStack_1b8;
      if (bVar29) {
        puVar21 = (ulonglong *)&uStack_1d0;
      }
      puVar23 = (ulonglong *)&uStack_1d0;
      uVar10 = uStack_1b8;
      if (!bVar29) {
        puVar23 = &uStack_1b8;
        uVar10 = 2;
      }
      uVar24 = *puVar23;
      if (uVar24 == uVar10) {
        uStack_c1 = 1;
        pdb_142de6750(&uStack_1d8);
        puVar22 = (undefined4 *)CONCAT44(uStack_1d4,uStack_1d8);
        uVar24 = CONCAT44(uStack_1cc,uStack_1d0);
        puVar21 = (ulonglong *)&uStack_1d0;
      }
      auVar9._4_4_ = uVar36;
      auVar9._0_4_ = uVar32;
      auVar9._8_4_ = uVar37;
      auVar9._12_4_ = 0;
      auVar38._0_4_ = (uint)(fVar2 * (fVar1 - fVar5) * fVar31 * fVar33) & uVar32;
      auVar38._4_4_ = (uint)(fVar2 * (fVar30 - (fVar3 - fVar4)) * fVar11 * fVar34) & uVar36;
      auVar38._8_4_ = (uint)(fVar12 * 0.0 * fVar35 * 0.0) & uVar37;
      auVar38._12_4_ = 0;
      unaff_XMM10 = auVar38 | ~auVar9 & unaff_XMM10;
      puVar22[uVar24 * 4] = uVar16;
      *(longlong *)(puVar22 + uVar24 * 4 + 1) = unaff_XMM10._0_8_;
      *(char *)(puVar22 + uVar24 * 4 + 3) = (char)uVar28;
      *puVar21 = *puVar21 + 1;
      lVar20 = 1;
    } while (uVar26 != 2);
    uStack_c1 = 1;
    uVar15 = pdb_14008fbf0();
    uStack_c1 = 1;
    uVar14 = pdb_1409012c0((undefined1)uStack_c8,lStack_e8);
    uStack_c1 = 1;
    uVar15 = pdb_140c44ba0(CONCAT71((int7)(uVar25 >> 8),uVar15) & 0xffffffff);
    uStack_218._0_2_ = CONCAT11(uVar14,uVar15);
    uStack_c1 = 1;
    lVar20 = pdb_141494370(lStack_d0,&uStack_218);
    if (lVar20 == 0) {
      pcStack_1a8 = pdb_1414942d0;
      uStack_c1 = 1;
      uStack_1b0 = &uStack_218;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14330e2c6,&uStack_1b0,&UNK_14330e2f8);
    }
    if (bStack_c2 == 0) {
      uStack_c1 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143312e78);
    }
    fVar31 = (float)uStack_298 / (float)((int)uStack_290 + -1);
    fVar31 = fVar31 + fVar31 + _DAT_142e36f34;
    unaff_XMM6_Da = fVar31 * fVar33 * (fVar1 - *(float *)(lVar20 + 0x30)) * _DAT_142e36f60;
    unaff_XMM6_Db =
         fVar31 * fVar34 * (fVar30 - (*(float *)(lVar20 + 0x3c) - *(float *)(lVar20 + 0x38))) *
                           _UNK_142e36f64;
    uStack_c8 = 1;
    uVar25 = uStack_1b8;
  }
LAB_1414c5aed:
  uStack_2c8 = param_6;
  puStack_2c0 = puStack_e0;
  piStack_2b8 = &iStack_26c;
  puStack_2b0 = &uStack_2f8;
  uStack_2a8 = param_7;
  arg0 = (byte *)CONCAT44(uStack_1d4,uStack_1d8);
  uStack_250 = uStack_1c8;
  uStack_248 = uStack_1c0;
  uVar26 = 0;
  uStack_258 = CONCAT44(uStack_1cc,uStack_1d0);
  uVar28 = uVar25;
  if (2 < uVar25) {
    uStack_258 = uVar26;
    uVar28 = CONCAT44(uStack_1cc,uStack_1d0);
  }
  uStack_240 = 0;
  if (2 < uVar25) {
    uStack_240 = uVar25;
  }
  uStack_260 = arg0;
  uStack_238 = 0;
  uStack_230 = uVar28;
  lStack_100 = 0;
  puStack_f8 = (undefined4 *)0x4;
  lStack_f0 = 0;
  if (uVar28 != 0) {
    uStack_238 = 1;
    pbVar27 = (byte *)&uStack_260;
    if (2 < uVar25) {
      pbVar27 = arg0;
    }
    iVar7 = *(int *)pbVar27;
    if (iVar7 != 2) {
      uVar8 = *(undefined8 *)(pbVar27 + 4);
      lStack_d0 = CONCAT71(lStack_d0._1_7_,pbVar27[0xc]);
      pdb_142d8d710(&lStack_100);
      *puStack_f8 = param_5;
      lStack_f0 = 1;
      lStack_e8 = *plStack_220;
      lVar20 = plStack_220[1];
      uStack_1b0 = (undefined8 *)CONCAT44(iVar7,param_5);
      pcStack_1a8 = (code *)uVar8;
      pdb_1414c6440(&uStack_218,&uStack_2c8,param_5,(longlong)&uStack_1b0 + 4);
      uStack_1a0 = (ulonglong)uStack_218;
      lStack_198 = (longlong)uStack_210;
      uStack_190 = uStack_208;
      uStack_188 = uStack_200;
      uStack_180 = CONCAT44(uStack_1f4,uStack_1f8);
      uStack_178 = CONCAT44(uStack_1ec,uStack_1f0);
      uStack_170 = CONCAT44(uStack_1e4,uStack_1e8);
      uStack_168 = CONCAT44(uStack_1dc,uStack_1e0);
      uStack_1b0 = (undefined8 *)uStack_110;
      pcStack_1a8 = (code *)uStack_108;
      lStack_160 = 8;
      uStack_150 = (ulonglong)uStack_150._4_4_ << 0x20;
      uStack_148 = 0;
      uStack_140 = 1;
      bStack_13f = (byte)lStack_d0;
      uStack_13e = 0;
      uStack_13c = 2;
      lStack_138 = lStack_e8;
      uStack_128 = param_5;
      uStack_210._0_5_ = CONCAT14(2,(undefined4)uStack_210);
      lStack_130 = lVar20;
      pdb_1414c40f0(&uStack_1b0,param_14,&uStack_218,uStack_118,param_10,param_11,param_13,param_12)
      ;
    }
    uVar26 = 1;
    if (uVar28 != 1) {
      uStack_238 = 2;
      pbVar27 = (byte *)&uStack_260;
      if (2 < uVar25) {
        pbVar27 = arg0;
      }
      iVar7 = *(int *)(pbVar27 + 0x10);
      if (iVar7 != 2) {
        lStack_d0 = *(longlong *)(pbVar27 + 0x14);
        bVar6 = pbVar27[0x1c];
        uVar17 = pdb_140901720(param_9);
        lVar20 = lStack_f0;
        if (lStack_f0 == lStack_100) {
          pdb_142d8d710(&lStack_100);
        }
        puStack_f8[lVar20] = uVar17;
        lStack_f0 = lVar20 + 1;
        uStack_1b0 = (undefined8 *)CONCAT44(iVar7,uVar17);
        pcStack_1a8 = (code *)lStack_d0;
        pdb_1414c6440(&uStack_218,&uStack_2c8,uVar17,(longlong)&uStack_1b0 + 4);
        puVar21 = &uStack_358;
        if ((int)uStack_218 != 3) {
          puVar21 = &uStack_208;
        }
        uStack_188 = *puVar21;
        uStack_180 = puVar21[1];
        uStack_178 = puVar21[2];
        uStack_170 = puVar21[3];
        uStack_168 = puVar21[4];
        uStack_150 = lStack_278;
        lStack_160 = lStack_288;
        lStack_158 = lStack_280;
        pcStack_1a8 = (code *)uStack_110;
        uStack_1a0 = uStack_108;
        lStack_198 = lStack_120;
        uStack_190 = uStack_228;
        uStack_144 = uStack_d4;
        uStack_140 = 1;
        uStack_1b0 = (undefined8 *)0x3;
        uStack_210._0_5_ = CONCAT14(2,(undefined4)uStack_210);
        uStack_148 = uVar17;
        bStack_13f = bVar6;
        pdb_1414c40f0(&uStack_1b0,param_14,&uStack_218,uStack_118,param_10,param_11,param_13,
                      param_12);
      }
      uVar26 = 2;
      if (uVar28 != 2) {
        pbVar27 = (byte *)&uStack_260;
        if (2 < uVar25) {
          pbVar27 = arg0;
        }
        uStack_238 = 3;
        uVar26 = 3;
        if (*(int *)(pbVar27 + 0x20) != 2) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_143312ea8,0x32,&UNK_143312ee0);
        }
      }
    }
  }
  uVar17 = pdb_140901720(param_9);
  uStack_218 = (undefined8 *)CONCAT44(uStack_c8,uVar17);
  uStack_210 = (code *)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  pdb_1414c6440(&uStack_1b0,&uStack_2c8,uVar17,(longlong)&uStack_218 + 4);
  puVar21 = &uStack_358;
  if ((int)uStack_1b0 != 3) {
    puVar21 = &uStack_1a0;
  }
  uStack_328 = *puVar21;
  uStack_320 = puVar21[1];
  uStack_318 = puVar21[2];
  uStack_310 = puVar21[3];
  uStack_308 = puVar21[4];
  bStack_13f = pdb_14008fbf0();
  uStack_168 = uStack_308;
  uStack_178 = uStack_318;
  uStack_170 = uStack_310;
  uStack_188 = uStack_328;
  uStack_180 = uStack_320;
  lStack_160 = lStack_288;
  lStack_158 = lStack_280;
  uStack_150 = lStack_278;
  pcStack_1a8 = (code *)uStack_110;
  uStack_1a0 = uStack_108;
  lStack_198 = lStack_120;
  uStack_190 = uStack_228;
  uStack_144 = uStack_d4;
  uStack_140 = 1;
  uStack_1b0 = (undefined8 *)0x3;
  uStack_210._0_5_ = CONCAT14(2,(undefined4)uStack_210);
  uStack_148 = uVar17;
  pdb_1414c40f0(&uStack_1b0,param_14,&uStack_218,uStack_118,param_10,param_11,param_13,param_12);
  puVar22 = puStack_2a0;
  *(longlong *)(puStack_2a0 + 6) = lStack_f0;
  *(longlong *)(puStack_2a0 + 2) = lStack_100;
  *(undefined4 **)(puStack_2a0 + 4) = puStack_f8;
  *puStack_2a0 = uVar17;
  pbVar27 = (byte *)&uStack_260;
  if (2 < uVar25) {
    pbVar27 = arg0;
  }
  pbVar27 = pbVar27 + (uint)((int)uVar26 << 4);
  do {
    uVar26 = uVar26 + 1;
    if (uVar26 - uVar28 == 1) break;
    uStack_238 = uVar26;
    iVar7 = *(int *)pbVar27;
    pbVar27 = pbVar27 + 0x10;
  } while (iVar7 != 2);
  if (2 < uVar25) {
    pub_1406abac0(arg0,uVar25 << 4,4);
  }
  return puVar22;
}

