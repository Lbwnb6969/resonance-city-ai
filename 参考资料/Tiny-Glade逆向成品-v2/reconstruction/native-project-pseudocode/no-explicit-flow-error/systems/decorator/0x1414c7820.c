// VA 0x1414c7820, PDB extent 3311 bytes
// system_decorator::ui_systems::handle_splitting_roof_decorators::handle_moving_out_roof_decorator_part
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/handle_splitting_roof_decorators.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::ui_systems::handle_splitting_roof_decorators::handle_moving_out_roof_decorator_part
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/handle_splitting_roof_decorators.rs
   Extent: 3311 */

longlong *
pdb_1414c7820(longlong *param_1,undefined4 *param_2,undefined8 param_3,ulonglong *param_4,
             undefined4 param_5,longlong param_6,undefined8 *param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined1 param_13,undefined8 param_14)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  float fVar8;
  char cVar9;
  byte bVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  ulonglong *puVar16;
  byte ****ppppbVar17;
  uint uVar18;
  longlong *plVar19;
  ulonglong *puVar20;
  ulonglong uVar21;
  int *piVar22;
  ulonglong uVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  longlong lStack_318;
  longlong lStack_310;
  longlong lStack_308;
  longlong lStack_300;
  longlong lStack_2f8;
  undefined8 uStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  ulonglong *puStack_2d0;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  longlong lStack_2a8;
  undefined8 uStack_298;
  undefined4 uStack_290;
  undefined8 uStack_288;
  undefined4 uStack_280;
  longlong *plStack_278;
  ulonglong uStack_270;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  longlong lStack_258;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  longlong lStack_218;
  longlong lStack_210;
  byte ***pppbStack_208;
  ulonglong uStack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  ulonglong uStack_1e8;
  ulonglong uStack_1e0;
  ulonglong uStack_1d8;
  longlong lStack_1d0;
  ulonglong *puStack_1c8;
  byte ***pppbStack_1c0;
  ulonglong uStack_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  ulonglong uStack_1a0;
  undefined4 *puStack_198;
  code *pcStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  longlong lStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 uStack_128;
  byte bStack_127;
  undefined1 uStack_126;
  undefined1 uStack_124;
  longlong lStack_120;
  longlong lStack_118;
  undefined4 uStack_110;
  undefined8 uStack_108;
  undefined4 *puStack_100;
  undefined4 *puStack_f8;
  longlong lStack_f0;
  undefined4 *puStack_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  undefined4 uStack_cc;
  longlong *plStack_c8;
  byte ***pppbStack_c0;
  byte bStack_b2;
  undefined1 uStack_b1;
  undefined8 uStack_b0;
  
  uStack_b0 = 0xfffffffffffffffe;
  uStack_280 = *(undefined4 *)(param_6 + 0x18);
  uStack_288 = *(undefined8 *)(param_6 + 0x10);
  puStack_100 = (undefined4 *)*param_4;
  puStack_f8 = (undefined4 *)param_4[1];
  uStack_108 = param_3;
  pppbStack_c0 = (byte ***)param_2;
  plStack_c8 = (longlong *)pdb_140c3ec10(param_3,puStack_100,puStack_f8,param_5);
  if (plStack_c8 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_1433130d8);
  }
  lStack_d8 = *plStack_c8;
  lStack_1d0 = plStack_c8[1];
  lStack_2f8 = plStack_c8[6];
  lStack_308 = plStack_c8[4];
  lStack_300 = plStack_c8[5];
  lStack_318 = plStack_c8[2];
  lStack_310 = plStack_c8[3];
  bStack_b2 = *(byte *)((longlong)plStack_c8 + 0x59);
  uStack_cc = (undefined4)plStack_c8[10];
  lStack_258 = plStack_c8[9];
  uStack_268 = (undefined4)plStack_c8[7];
  uStack_264 = *(undefined4 *)((longlong)plStack_c8 + 0x3c);
  uStack_260 = (undefined4)plStack_c8[8];
  uStack_25c = *(undefined4 *)((longlong)plStack_c8 + 0x44);
  plStack_278 = param_1;
  puStack_1c8 = param_4;
  puVar14 = (undefined8 *)pdb_1409010f0(plStack_c8,&UNK_1433130f0);
  uStack_298 = *puVar14;
  uStack_290 = *(undefined4 *)(puVar14 + 1);
  uStack_1a0 = 0;
  uStack_b1 = 1;
  cVar9 = pdb_140c45920(param_7,param_5);
  if (cVar9 == '\b') {
    uVar12 = *(undefined1 *)((longlong)plStack_c8 + 0x59);
    uStack_b1 = 1;
    uVar11 = pdb_1409012c0(8,*param_7);
    uVar5 = param_7[1];
    uStack_b1 = 1;
    uVar12 = pdb_140c44ba0(CONCAT71((int7)((ulonglong)param_4 >> 8),uVar12) & 0xffffffff);
    uStack_248._0_2_ = CONCAT11(uVar11,uVar12);
    uStack_b1 = 1;
    lVar15 = pdb_141494370(uVar5,&uStack_248);
    if (lVar15 == 0) {
      pcStack_190 = pdb_1414942d0;
      uStack_b1 = 1;
      puStack_198 = &uStack_248;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14330e2c6,&puStack_198,&UNK_14330e310);
    }
    fVar27 = *(float *)(lVar15 + 0x30);
    fVar25 = ((*(float *)(lVar15 + 0x3c) - *(float *)(lVar15 + 0x38)) + _DAT_142e36f34) *
             _DAT_142e36f50;
  }
  else {
    if (cVar9 != '\x02') {
      uStack_b1 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_143313170,0xad,&UNK_1433131c8);
    }
    bVar10 = *(char *)((longlong)plStack_c8 + 0x59) - 1;
    if (2 < bVar10) {
      uStack_b1 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_143011c40,0x28,&UNK_143011cb8);
    }
    fVar27 = *(float *)(&UNK_1433132a0 + (ulonglong)bVar10 * 4);
    fVar25 = 0.0;
  }
  fVar8 = _DAT_142e36f50;
  uStack_270 = (ulonglong)bStack_b2;
  pcStack_190 = (code *)0x2;
  uStack_188 = (undefined4 *)pppbStack_c0;
  uStack_180 = CONCAT44(uStack_180._4_4_,0xbf800000);
  uStack_178 = ~(ulonglong)pppbStack_c0 + (ulonglong)bStack_b2;
  uStack_170 = CONCAT44(uStack_170._4_4_,0x3f800000);
  fVar26 = _DAT_142e36f28;
  if (lStack_d8 != 2) {
    fVar26 = 0.0;
  }
  fVar28 = 0.0;
  if ((int)lStack_d8 != 2) {
    fVar28 = _DAT_142e36f28;
  }
  lVar15 = 0;
  bVar10 = bStack_b2;
  do {
    lVar6 = (&uStack_188)[lVar15 * 2];
    if (lVar6 != 0) {
      uVar18 = (int)lVar6 - 1;
      if (2 < (byte)uVar18) {
        uStack_b1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143011c40,0x28,&UNK_143011cb8);
      }
      fVar1 = *(float *)(&UNK_1433132a0 + (ulonglong)(uVar18 & 0xff) * 4);
      bVar24 = 2 < uStack_1a0;
      ppppbVar17 = (byte ****)pppbStack_1c0;
      if (!bVar24) {
        ppppbVar17 = &pppbStack_1c0;
      }
      puVar20 = &uStack_1a0;
      if (bVar24) {
        puVar20 = &uStack_1b8;
      }
      fVar2 = *(float *)(&uStack_180 + lVar15 * 2);
      puVar16 = &uStack_1b8;
      uVar7 = uStack_1a0;
      if (!bVar24) {
        puVar16 = &uStack_1a0;
        uVar7 = 2;
      }
      uVar21 = *puVar16;
      if (*puVar16 == uVar7) {
        uStack_b1 = 1;
        pdb_142de6750(&pppbStack_1c0);
        puVar20 = &uStack_1b8;
        uVar21 = uStack_1b8;
        ppppbVar17 = (byte ****)pppbStack_1c0;
        bVar10 = bStack_b2;
      }
      *(int *)(ppppbVar17 + uVar21 * 2) = 1;
      *(ulonglong *)((longlong)ppppbVar17 + uVar21 * 0x10 + 4) =
           CONCAT44(fVar2 * fVar26 * fVar25,fVar2 * (fVar27 - fVar1) * fVar8 * fVar28);
      *(char *)((longlong)ppppbVar17 + uVar21 * 0x10 + 0xc) = (char)lVar6;
      *puVar20 = *puVar20 + 1;
    }
    uVar7 = uStack_1a0;
    bVar24 = lVar15 != 1;
    lVar15 = 1;
  } while (bVar24);
  if (bVar10 == 0) {
    uStack_b1 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143313108);
  }
  uVar21 = 0;
  uVar23 = uStack_1a0;
  if (2 < uStack_1a0) {
    uVar23 = uStack_1b8;
  }
  uStack_1e8 = 0;
  if (2 < uStack_1a0) {
    uStack_1b8 = uVar21;
    uStack_1e8 = uStack_1a0;
  }
  uStack_1f8 = uStack_1b0;
  uStack_1f4 = uStack_1ac;
  uStack_1f0 = uStack_1a8;
  uStack_1ec = uStack_1a4;
  pppbStack_c0 = pppbStack_1c0;
  pppbStack_208 = pppbStack_1c0;
  uStack_200 = uStack_1b8;
  uStack_1e0 = 0;
  uStack_1d8 = uVar23;
  lStack_f0 = 0;
  puStack_e8 = (undefined4 *)0x4;
  lStack_e0 = 0;
  uStack_2e8 = param_14;
  puStack_2e0 = &uStack_288;
  puStack_2d8 = &uStack_298;
  puStack_2d0 = puStack_1c8;
  if (uVar23 != 0) {
    uStack_1e0 = 1;
    ppppbVar17 = &pppbStack_208;
    if (2 < uStack_1a0) {
      ppppbVar17 = (byte ****)pppbStack_1c0;
    }
    iVar3 = *(int *)ppppbVar17;
    if (iVar3 != 2) {
      iVar4 = *(int *)((longlong)ppppbVar17 + 4);
      bStack_b2 = *(byte *)((longlong)ppppbVar17 + 0xc);
      pdb_142d8d710(&lStack_f0);
      *puStack_e8 = param_5;
      lStack_e0 = 1;
      lVar15 = *plStack_c8;
      lVar6 = plStack_c8[1];
      pdb_1414c8510(&uStack_248,&uStack_2e8,iVar3,iVar4);
      uStack_158 = lStack_218;
      lStack_150 = lStack_210;
      uStack_168 = CONCAT44(uStack_224,uStack_228);
      uStack_160 = uStack_220;
      uStack_15c = uStack_21c;
      uStack_178 = CONCAT44(uStack_234,uStack_238);
      uStack_170 = CONCAT44(uStack_22c,uStack_230);
      uStack_188 = (undefined4 *)CONCAT44(uStack_244,uStack_248);
      uStack_180 = CONCAT44(uStack_23c,uStack_240);
      puStack_198 = puStack_100;
      pcStack_190 = (code *)puStack_f8;
      uStack_148 = 8;
      uStack_138 = (ulonglong)uStack_138._4_4_ << 0x20;
      uStack_130 = 0;
      uStack_128 = 1;
      bStack_127 = bStack_b2;
      uStack_126 = 0;
      uStack_124 = 2;
      uStack_110 = param_5;
      uStack_23c = CONCAT31(uStack_23c._1_3_,2);
      lStack_120 = lVar15;
      lStack_118 = lVar6;
      pdb_1414c40f0(&puStack_198,param_13,&uStack_248,uStack_108,param_9,param_10,param_12,param_11)
      ;
    }
    uVar21 = 1;
    if (uVar23 != 1) {
      uStack_1e0 = 2;
      ppppbVar17 = &pppbStack_208;
      if (2 < uVar7) {
        ppppbVar17 = (byte ****)pppbStack_c0;
      }
      iVar3 = *(int *)(ppppbVar17 + 2);
      if (iVar3 != 2) {
        iVar4 = *(int *)((longlong)ppppbVar17 + 0x14);
        plStack_c8 = (longlong *)
                     CONCAT71(plStack_c8._1_7_,*(undefined1 *)((longlong)ppppbVar17 + 0x1c));
        uVar13 = pdb_140901720(param_8);
        lVar15 = lStack_e0;
        if (lStack_e0 == lStack_f0) {
          pdb_142d8d710(&lStack_f0);
        }
        puStack_e8[lVar15] = uVar13;
        lStack_e0 = lVar15 + 1;
        pdb_1414c8510(&uStack_248,&uStack_2e8,iVar3,iVar4);
        plVar19 = &lStack_318;
        if (uStack_248 != 3) {
          plVar19 = (longlong *)&uStack_238;
        }
        uStack_170 = *plVar19;
        uStack_168 = plVar19[1];
        uStack_160 = (int)plVar19[2];
        uStack_15c = *(undefined4 *)((longlong)plVar19 + 0x14);
        uStack_158 = plVar19[3];
        lStack_150 = plVar19[4];
        uStack_138 = lStack_258;
        uStack_148 = CONCAT44(uStack_264,uStack_268);
        uStack_140 = uStack_260;
        uStack_13c = uStack_25c;
        pcStack_190 = (code *)puStack_100;
        uStack_188 = puStack_f8;
        uStack_180 = lStack_d8;
        uStack_178 = lStack_1d0;
        uStack_12c = uStack_cc;
        uStack_128 = 1;
        bStack_127 = (byte)plStack_c8;
        puStack_198 = (undefined4 *)0x3;
        uStack_23c = CONCAT31(uStack_23c._1_3_,2);
        uStack_130 = uVar13;
        pdb_1414c40f0(&puStack_198,param_13,&uStack_248,uStack_108,param_9,param_10,param_12,
                      param_11);
      }
      uVar21 = 2;
      if (uVar23 != 2) {
        ppppbVar17 = &pppbStack_208;
        if (2 < uVar7) {
          ppppbVar17 = (byte ****)pppbStack_c0;
        }
        uStack_1e0 = 3;
        uVar21 = 3;
        if (*(int *)(ppppbVar17 + 4) != 2) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_143313120,0x32,&UNK_143313158);
        }
      }
    }
  }
  uVar13 = pdb_140901720(param_8);
  pdb_1414c8510(&puStack_198,&uStack_2e8,1);
  plVar19 = &uStack_188;
  if ((int)puStack_198 == 3) {
    plVar19 = &lStack_318;
  }
  uStack_2c8 = (int)*plVar19;
  uStack_2c4 = *(undefined4 *)((longlong)plVar19 + 4);
  uStack_2c0 = (int)plVar19[1];
  uStack_2bc = *(undefined4 *)((longlong)plVar19 + 0xc);
  uStack_2b8 = (int)plVar19[2];
  uStack_2b4 = *(undefined4 *)((longlong)plVar19 + 0x14);
  uStack_2b0 = (int)plVar19[3];
  uStack_2ac = *(undefined4 *)((longlong)plVar19 + 0x1c);
  lStack_2a8 = plVar19[4];
  bStack_127 = pdb_14008fbf0();
  lStack_150 = lStack_2a8;
  uStack_170 = CONCAT44(uStack_2c4,uStack_2c8);
  uStack_168 = CONCAT44(uStack_2bc,uStack_2c0);
  uStack_160 = uStack_2b8;
  uStack_15c = uStack_2b4;
  uStack_158 = CONCAT44(uStack_2ac,uStack_2b0);
  uStack_148 = CONCAT44(uStack_264,uStack_268);
  uStack_140 = uStack_260;
  uStack_13c = uStack_25c;
  uStack_138 = lStack_258;
  pcStack_190 = (code *)puStack_100;
  uStack_188 = puStack_f8;
  uStack_180 = lStack_d8;
  uStack_178 = lStack_1d0;
  uStack_12c = uStack_cc;
  uStack_128 = 1;
  puStack_198 = (undefined4 *)0x3;
  uStack_23c = CONCAT31(uStack_23c._1_3_,2);
  uStack_130 = uVar13;
  pdb_1414c40f0(&puStack_198,param_13,&uStack_248,uStack_108,param_9,param_10,param_12,param_11);
  plVar19 = plStack_278;
  plStack_278[2] = lStack_e0;
  *plStack_278 = lStack_f0;
  plStack_278[1] = (longlong)puStack_e8;
  *(undefined4 *)(plStack_278 + 3) = uVar13;
  plStack_278[4] = CONCAT44(uStack_2c4,uStack_2c8);
  plStack_278[5] = CONCAT44(uStack_2bc,uStack_2c0);
  plStack_278[6] = CONCAT44(uStack_2b4,uStack_2b8);
  plStack_278[7] = CONCAT44(uStack_2ac,uStack_2b0);
  plStack_278[8] = lStack_2a8;
  ppppbVar17 = &pppbStack_208;
  if (2 < uVar7) {
    ppppbVar17 = (byte ****)pppbStack_c0;
  }
  piVar22 = (int *)((longlong)ppppbVar17 + (ulonglong)(uint)((int)uVar21 << 4));
  do {
    uVar21 = uVar21 + 1;
    if (uVar21 - uVar23 == 1) break;
    uStack_1e0 = uVar21;
    iVar3 = *piVar22;
    piVar22 = piVar22 + 4;
  } while (iVar3 != 2);
  if (2 < uVar7) {
    pub_1406abac0((byte *)pppbStack_c0,uVar7 << 4,4);
  }
  return plVar19;
}

