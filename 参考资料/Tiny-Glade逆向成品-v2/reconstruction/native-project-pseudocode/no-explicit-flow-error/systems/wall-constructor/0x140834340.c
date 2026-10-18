// VA 0x140834340, PDB extent 8517 bytes
// system_wall_constructor::construct_playermade_stairs::preprocess_curve
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_playermade_stairs/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_playermade_stairs::preprocess_curve
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_playermade_stairs/mod.rs
   Extent: 8517 */

undefined8 *
pdb_140834340(undefined8 *param_1,longlong param_2,char *param_3,undefined4 *param_4,float *param_5,
             byte param_6,ushort param_7,float *******param_8,float *******param_9,
             float *******param_10)

{
  float ******ppppppfVar1;
  undefined4 uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  float ******ppppppfVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  float *******pppppppfVar10;
  float *******pppppppfVar11;
  float *******pppppppfVar12;
  float *******pppppppfVar13;
  uint uVar14;
  float *******arg0;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float *******pppppppfStack_300;
  float *******pppppppfStack_2f8;
  float *******pppppppfStack_2f0;
  float *pfStack_2e8;
  float ******ppppppfStack_2e0;
  float ******ppppppfStack_2d8;
  ulonglong uStack_2d0;
  float *******pppppppfStack_2c8;
  float *******pppppppfStack_2c0;
  float *******pppppppfStack_2b0;
  float *******pppppppfStack_2a8;
  float *******pppppppfStack_2a0;
  float *pfStack_298;
  float ******ppppppfStack_290;
  undefined4 uStack_288;
  undefined4 uStack_284;
  float fStack_280;
  undefined4 uStack_27c;
  float *******pppppppfStack_278;
  float *******pppppppfStack_270;
  float *******pppppppfStack_268;
  float *pfStack_260;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  ulonglong uStack_248;
  float ******ppppppfStack_240;
  undefined8 uStack_238;
  float *******pppppppfStack_230;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  ulonglong uStack_208;
  float *******pppppppfStack_200;
  float *******pppppppfStack_1f8;
  float *******pppppppfStack_1f0;
  float *******pppppppfStack_1e8;
  undefined8 *puStack_1e0;
  float *******pppppppfStack_1d8;
  float *******pppppppfStack_1d0;
  float *******pppppppfStack_1c8;
  float *pfStack_1c0;
  float ******ppppppfStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  byte *pbStack_198;
  float *******pppppppfStack_190;
  float fStack_188;
  float fStack_184;
  float *******pppppppfStack_180;
  float *******pppppppfStack_178;
  float *******pppppppfStack_170;
  float *******pppppppfStack_168;
  float *******pppppppfStack_160;
  float *******pppppppfStack_158;
  float *******pppppppfStack_150;
  float *******pppppppfStack_148;
  float *******pppppppfStack_140;
  float *******pppppppfStack_138;
  float *******pppppppfStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulonglong uStack_108;
  float *******pppppppfStack_f8;
  float *******pppppppfStack_f0;
  byte *pbStack_e8;
  float *******pppppppfStack_e0;
  undefined1 uStack_d6;
  undefined1 uStack_d5;
  undefined1 uStack_d4;
  undefined1 uStack_d3;
  undefined1 uStack_d2;
  undefined1 uStack_d1;
  undefined8 uStack_d0;
  
  uStack_d0 = 0xfffffffffffffffe;
  pdb_14017ede0(&pppppppfStack_138,*(longlong *)(param_2 + 8),
                *(longlong *)(param_2 + 8) + *(longlong *)(param_2 + 0x10) * 0xc);
  pdb_140080c90(&pppppppfStack_1d8,&pppppppfStack_138,0);
  uStack_238 = pppppppfStack_1d0;
  pppppppfStack_230 = pppppppfStack_1c8;
  if (SBORROW8(0,(longlong)pppppppfStack_1d8)) {
    param_1[1] = pppppppfStack_1d0;
    param_1[2] = pppppppfStack_1c8;
    *param_1 = 0x8000000000000000;
    return param_1;
  }
  fVar20 = (float)uStack_1a8;
  uStack_288 = (undefined4)uStack_1b0;
  uStack_284 = uStack_1b0._4_4_;
  fStack_280 = (float)uStack_1a8;
  uStack_27c = uStack_1a8._4_4_;
  pfStack_298 = pfStack_1c0;
  ppppppfStack_290 = ppppppfStack_1b8;
  pppppppfStack_2a8 = pppppppfStack_1d0;
  pppppppfStack_2a0 = pppppppfStack_1c8;
  pppppppfStack_2b0 = pppppppfStack_1d8;
  fVar18 = _DAT_14300a330 / (float)uStack_1a8;
  if (_DAT_142e3787c <= _DAT_14300a330 / (float)uStack_1a8) {
    fVar18 = _DAT_142e3787c;
  }
  fStack_188 = fVar18;
  if (*param_3 == '\0') {
    fStack_188 = 0.0;
  }
  fStack_184 = _DAT_142e36f28;
  if (param_3[1] != '\0') {
    fStack_184 = _DAT_142e36f28 - fVar18;
  }
  pppppppfStack_160 = (float *******)0x0;
  pppppppfStack_158 = (float *******)0x4;
  pppppppfStack_150 = (float *******)0x0;
  pdb_14007ee60(-(longlong)pppppppfStack_1d8);
  pbStack_e8 = pub_1406abab0(0x10,8);
  if (pbStack_e8 == (byte *)0x0) {
    uStack_d2 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x10);
  }
  pbStack_e8[0] = 0;
  pbStack_e8[1] = 0;
  pbStack_e8[2] = 0;
  pbStack_e8[3] = 0;
  pbStack_e8[4] = 0;
  pbStack_e8[5] = 0;
  pbStack_e8[6] = 0;
  pbStack_e8[7] = 0;
  pbStack_e8[8] = 0;
  pppppppfStack_f0 = (float *******)0x1;
  pppppppfStack_e0 = (float *******)0x1;
  uVar14 = (uint)(param_7 >> 8);
  if (param_6 == 0) {
    pppppppfStack_278 = param_8;
    pppppppfStack_270 = param_9;
    pppppppfStack_268 = param_10;
    pfStack_260 = param_5;
    uVar21 = *param_4;
    uVar2 = param_4[1];
    uStack_d1 = 1;
    bVar4 = pdb_140836490(&pppppppfStack_278,uVar21,uVar2);
    uStack_d1 = 1;
    cVar5 = pdb_140836490(&pppppppfStack_278,uVar2,uVar21);
    fVar22 = _DAT_142e37830;
    uVar3 = 1;
    if (cVar5 == '\0') {
      uVar3 = uVar14;
    }
    uVar14 = uVar3;
    if (((bVar4 | (byte)param_7) & 1) == 0) {
      if ((uVar14 & 1) == 0) {
        pppppppfStack_140 = (float *******)0x4;
        pppppppfVar12 = (float *******)0x0;
      }
      else {
        pppppppfStack_140 = (float *******)0x4;
        pppppppfVar12 = (float *******)0x0;
        fVar18 = _DAT_143007998 - fVar18;
LAB_1408345d5:
        fVar22 = _DAT_142e36f28 - fVar22 / fVar20;
        fVar18 = _DAT_142e36f28 - fVar18;
        fVar20 = fVar18;
        if (fVar18 <= fVar22) {
          fVar20 = fVar22;
        }
        fStack_184 = (float)(~-(uint)NAN(fVar22) & (uint)fVar20 | -(uint)NAN(fVar22) & (uint)fVar18)
        ;
      }
      goto LAB_14083471a;
    }
    fVar19 = _DAT_14300a334;
    if ((uVar14 & 1) == 0) {
      fVar19 = _DAT_143007998 - fVar18;
    }
    fVar23 = _DAT_142e37830 / fVar20;
    fVar18 = fVar19;
    if (fVar23 <= fVar19) {
      fVar18 = fVar23;
    }
    fVar18 = (float)(~-(uint)NAN(fVar23) & (uint)fVar18 | -(uint)NAN(fVar23) & (uint)fVar19);
    pppppppfStack_1f8 = (float *******)CONCAT44(pppppppfStack_1f8._4_4_,fVar18);
    if ((fVar18 < 0.0) || (_DAT_142e36f28 < fVar18)) {
      pppppppfStack_178 = (float *******)&pppppppfStack_1f8;
      pppppppfStack_170 = (float *******)pdb_140f70fc0;
      uStack_d1 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_143307ab0,&pppppppfStack_178,&UNK_14300a390);
    }
    pppppppfStack_1f8 = (float *******)0x0;
    pppppppfStack_1f0 = (float *******)0x4;
    pppppppfStack_1e8 = (float *******)0x0;
    uStack_d3 = 1;
    pdb_1413f8720(&pppppppfStack_2b0,0,fVar18,&pppppppfStack_1f8);
    pppppppfStack_168 = pppppppfStack_1e8;
    pppppppfStack_178 = pppppppfStack_1f8;
    pppppppfStack_170 = pppppppfStack_1f0;
    uStack_d3 = 0;
    pdb_140080c90(&pppppppfStack_1d8,&pppppppfStack_178,0);
    pppppppfVar10 = pppppppfStack_1d8;
    pppppppfStack_2c8 = pppppppfStack_1d0;
    pppppppfStack_2c0 = pppppppfStack_1c8;
    if (SBORROW8(0,(longlong)pppppppfStack_1d8)) {
LAB_140834986:
      param_1[1] = pppppppfStack_1d0;
      param_1[2] = pppppppfStack_1c8;
      goto LAB_140834ee4;
    }
    uStack_110 = uStack_1b0;
    uStack_108 = uStack_1a8;
    uStack_120 = pfStack_1c0;
    uStack_118 = ppppppfStack_1b8;
    pppppppfStack_130 = pppppppfStack_1d0;
    uStack_128 = pppppppfStack_1c8;
    pppppppfStack_138 = pppppppfStack_1d8;
    if (pppppppfStack_1c8 < (float *******)0x2) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_143306650,0x28,&UNK_143306678);
    }
    if (((float)uStack_1a8 == 0.0) && (!NAN((float)uStack_1a8))) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_1433066d0,0x24,&UNK_1433066f8);
    }
    fVar19 = (float)pub_142e32b00();
    uVar7 = 0;
    if (0.0 <= fVar19) {
      uVar7 = (longlong)(fVar19 - _DAT_142e36f2c) & (longlong)fVar19 >> 0x3f | (longlong)fVar19;
    }
    uVar8 = 0xffffffffffffffff;
    if (fVar19 <= _DAT_142e36f30) {
      uVar8 = uVar7;
    }
    pdb_1413fa980(&uStack_238,&pppppppfStack_138,uVar8 + 1 + (ulonglong)(uVar8 == 0),1);
    pppppppfVar11 = uStack_238;
    lVar9 = CONCAT44(uStack_224,uStack_228);
    if (!SBORROW8(0,(longlong)uStack_238)) {
      pppppppfStack_f8 = pppppppfStack_230;
      pppppppfStack_148 = (float *******)CONCAT44(uStack_21c,uStack_220);
      pppppppfStack_180 = (float *******)CONCAT44(uStack_214,uStack_218);
      if (pppppppfVar10 != (float *******)0x0) {
        pub_1406abac0((byte *)pppppppfStack_130,(longlong)pppppppfVar10 << 3,4);
      }
      if (uStack_120 != (float *)0x0) {
        pub_1406abac0((byte *)uStack_118,(longlong)uStack_120 << 2,4);
      }
      if (lVar9 == 0) {
        pppppppfStack_140 = (float *******)0x4;
        pppppppfVar12 = (float *******)0x0;
      }
      else {
        pppppppfStack_200 = pppppppfVar11;
        pdb_142d7f1b0(&pppppppfStack_160,0,lVar9,4,8);
        pppppppfVar12 = pppppppfStack_150;
        pppppppfStack_140 = pppppppfStack_158;
        pub_142e32760(pppppppfStack_158 + (longlong)pppppppfStack_150,pppppppfStack_f8,lVar9 * 8);
        pppppppfVar11 = pppppppfStack_200;
      }
      pppppppfVar12 = (float *******)((longlong)pppppppfVar12 + lVar9);
      pppppppfStack_150 = pppppppfVar12;
      if (pppppppfVar11 != (float *******)0x0) {
        pub_1406abac0((byte *)pppppppfStack_f8,(longlong)pppppppfVar11 << 3,4);
      }
      pppppppfVar10 = pppppppfStack_e0;
      if (pppppppfVar12 == (float *******)0x0) {
        pppppppfVar12 = (float *******)0x0;
      }
      else {
        pppppppfVar12 = (float *******)((longlong)pppppppfVar12 + -1);
        pppppppfStack_150 = pppppppfVar12;
      }
      if (pppppppfStack_e0 == (float *******)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(0,0,&UNK_14300a3a8);
      }
      pbStack_e8[8] = 2;
      if (pppppppfStack_e0 == pppppppfStack_f0) {
        pdb_142d7e980(&pppppppfStack_f0);
      }
      lVar9 = (longlong)pppppppfVar10 * 0x10;
      *(float ********)(pbStack_e8 + lVar9) = pppppppfVar12;
      pbStack_e8[lVar9 + 8] = 2;
      pppppppfStack_e0 = (float *******)((longlong)pppppppfVar10 + 1);
      fStack_188 = fVar18;
      if (pppppppfStack_148 != (float *******)0x0) {
        pub_1406abac0((byte *)pppppppfStack_180,(longlong)pppppppfStack_148 << 2,4);
      }
      fVar18 = _DAT_14300a334;
      if ((uVar14 & 1) != 0) goto LAB_1408345d5;
      goto LAB_14083471a;
    }
    param_1[1] = pppppppfStack_230;
    param_1[2] = lVar9;
    *param_1 = 0x8000000000000000;
joined_r0x00014083536b:
    if (pppppppfVar10 != (float *******)0x0) {
      pub_1406abac0((byte *)pppppppfStack_130,(longlong)pppppppfVar10 << 3,4);
    }
    if (uStack_120 != (float *)0x0) {
      pub_1406abac0((byte *)uStack_118,(longlong)uStack_120 << 2,4);
    }
  }
  else {
    pppppppfStack_140 = (float *******)0x4;
    pppppppfVar12 = (float *******)0x0;
LAB_14083471a:
    pppppppfStack_180 = (float *******)CONCAT44(pppppppfStack_180._4_4_,uVar14);
    puStack_1e0 = param_1;
    fVar16 = (float)pub_142e32b00();
    fVar23 = _DAT_142e36f50;
    fVar19 = _DAT_142e36f30;
    fVar22 = _DAT_142e36f2c;
    fVar20 = _DAT_142e36f28;
    fVar18 = _DAT_142e36f24;
    uVar7 = 0;
    if (0.0 <= fVar16) {
      uVar7 = (longlong)(fVar16 - _DAT_142e36f2c) & (longlong)fVar16 >> 0x3f | (longlong)fVar16;
    }
    uVar8 = 0xffffffffffffffff;
    if (fVar16 <= _DAT_142e36f30) {
      uVar8 = uVar7;
    }
    ppppppfStack_240 = (float ******)(uVar8 + (uVar8 == 0));
    pppppppfStack_1d8 = (float *******)0x0;
    pppppppfStack_1d0 = &ppppppfStack_240;
    pppppppfStack_1c8 = (float *******)&fStack_188;
    pfStack_1c0 = &fStack_184;
    ppppppfStack_1b8 = (float ******)0x0;
    uStack_1a8 = uStack_1a8 & 0xffffffffffffff00;
    uStack_1a0 = (float *******)((ulonglong)uStack_1a0._4_4_ << 0x20);
    uStack_1b0 = ppppppfStack_240;
LAB_14083499f:
    do {
      ppppppfVar6 = ppppppfStack_1b8;
      if (uStack_1b0 < ppppppfStack_1b8) break;
      if (ppppppfStack_1b8 < uStack_1b0) {
        ppppppfVar1 = (float ******)((longlong)ppppppfStack_1b8 + 1);
        bVar15 = (longlong)ppppppfStack_1b8 < 0;
        ppppppfStack_1b8 = ppppppfVar1;
        if (bVar15) goto LAB_1408349c5;
LAB_140834a1c:
        fVar16 = (float)(longlong)ppppppfVar6;
        ppppppfVar6 = *pppppppfStack_1d0;
        if (-1 < (longlong)ppppppfVar6) goto LAB_140834a33;
LAB_1408349ec:
        fVar17 = (float)ppppppfVar6;
      }
      else {
        uStack_1a8 = CONCAT71(uStack_1a8._1_7_,1);
        if (-1 < (longlong)ppppppfStack_1b8) goto LAB_140834a1c;
LAB_1408349c5:
        fVar16 = (float)ppppppfVar6;
        ppppppfVar6 = *pppppppfStack_1d0;
        if ((longlong)ppppppfVar6 < 0) goto LAB_1408349ec;
LAB_140834a33:
        fVar17 = (float)(longlong)ppppppfVar6;
      }
      fVar16 = (fVar16 / fVar17) * *pfStack_1c0 +
               (fVar20 - fVar16 / fVar17) * *(float *)pppppppfStack_1c8;
      pppppppfStack_278 = (float *******)CONCAT44(pppppppfStack_278._4_4_,fVar16);
      if ((fVar16 < 0.0) || (fVar20 < fVar16)) {
        pppppppfStack_138 = (float *******)&pppppppfStack_278;
        pppppppfStack_130 = (float *******)pdb_140f70fc0;
        uStack_d1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_143307ab0,&pppppppfStack_138,&UNK_14330ace8);
      }
      if ((int)uStack_1a0 == 1) {
        uVar21 = pbStack_198._0_4_;
        pbStack_198 = (byte *)CONCAT44(pbStack_198._4_4_,fVar16);
        uStack_1a0 = (float *******)CONCAT44(uVar21,1);
      }
      else {
        uStack_238 = (float *******)CONCAT44(fVar16,1);
        uStack_d1 = 1;
        pppppppfStack_230 = (float *******)&pppppppfStack_1d0;
        pdb_141409570(&pppppppfStack_138,&uStack_238);
        pbStack_198 = (byte *)CONCAT44(pbStack_198._4_4_,pppppppfStack_130._0_4_);
        uStack_1a0 = pppppppfStack_138;
        pppppppfVar10 = uStack_1a0;
        uStack_1a0._0_4_ = (int)pppppppfStack_138;
        bVar15 = (int)uStack_1a0 != 1;
        uStack_1a0 = pppppppfStack_138;
        if (bVar15) break;
        uStack_1a0._4_4_ = (uint)((ulonglong)pppppppfStack_138 >> 0x20);
        uVar21 = uStack_1a0._4_4_;
        fVar16 = pppppppfStack_130._0_4_;
        uStack_1a0 = pppppppfVar10;
      }
      pppppppfVar13 = pppppppfStack_e0;
      pppppppfVar11 = pppppppfStack_1d8;
      pppppppfVar10 = (float *******)((longlong)pppppppfStack_1d8 + 1);
      bVar15 = pppppppfStack_1d8 != (float *******)0x0;
      pppppppfStack_1d8 = pppppppfVar10;
      if (bVar15) {
        if (pppppppfStack_e0 == pppppppfStack_f0) {
          uStack_d1 = 1;
          pdb_142d7e980(&pppppppfStack_f0,uVar21,fVar16);
        }
        lVar9 = (longlong)pppppppfVar13 * 0x10;
        *(float ********)(pbStack_e8 + lVar9) = pppppppfVar12;
        pbStack_e8[lVar9 + 8] = param_6;
        pppppppfStack_e0 = (float *******)((longlong)pppppppfVar13 + 1);
      }
      pppppppfStack_178 = (float *******)0x0;
      pppppppfStack_170 = (float *******)0x4;
      pppppppfStack_168 = (float *******)0x0;
      uStack_d5 = 1;
      pdb_1413f8720(&pppppppfStack_2b0,uVar21,fVar16,&pppppppfStack_178);
      uStack_128 = pppppppfStack_168;
      pppppppfStack_138 = pppppppfStack_178;
      pppppppfStack_130 = pppppppfStack_170;
      uStack_d5 = 0;
      pdb_140080c90(&uStack_238,&pppppppfStack_138,0);
      if (!SBORROW8(0,(longlong)uStack_238)) {
        uStack_128 = (float *******)CONCAT44(uStack_224,uStack_228);
        uStack_120 = (float *)CONCAT44(uStack_21c,uStack_220);
        uStack_108 = uStack_208;
        uVar7 = uStack_108;
        uStack_118 = (float ******)CONCAT44(uStack_214,uStack_218);
        uStack_110 = (float ******)CONCAT44(uStack_20c,uStack_210);
        pppppppfStack_138 = uStack_238;
        pppppppfStack_130 = pppppppfStack_230;
        if (uStack_128 < (float *******)0x2) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_143306650,0x28,&UNK_143306678);
        }
        uStack_108._0_4_ = (float)uStack_208;
        uStack_108 = uVar7;
        if (((float)uStack_108 == 0.0) && (!NAN((float)uStack_108))) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_1433066d0,0x24,&UNK_1433066f8);
        }
        if ((float)uStack_108 <= fVar18) {
          uStack_108._0_4_ = fVar18;
        }
        fVar16 = fVar23 / (float)uStack_108;
        if (fVar20 <= fVar23 / (float)uStack_108) {
          fVar16 = fVar20;
        }
        fVar16 = (float)pub_142e32b00(fVar20 / fVar16);
        uVar7 = 0;
        if (0.0 <= fVar16) {
          uVar7 = (longlong)(fVar16 - fVar22) & (longlong)fVar16 >> 0x3f | (longlong)fVar16;
        }
        uVar8 = 0xffffffffffffffff;
        if (fVar16 <= fVar19) {
          uVar8 = uVar7;
        }
        pdb_1413fa980(&pppppppfStack_278,&uStack_238,uVar8 + 1 + (ulonglong)(uVar8 == 0),1);
        if (pppppppfStack_138 != (float *******)0x0) {
          pub_1406abac0((byte *)pppppppfStack_130,(longlong)pppppppfStack_138 << 3,4);
        }
        if (uStack_120 != (float *)0x0) {
          pub_1406abac0((byte *)uStack_118,(longlong)uStack_120 << 2,4);
        }
        pppppppfVar10 = pppppppfStack_268;
        if (!SBORROW8(0,(longlong)pppppppfStack_278)) {
          uStack_108 = uStack_248;
          uStack_118 = (float ******)CONCAT44(uStack_254,uStack_258);
          uStack_110 = (float ******)CONCAT44(uStack_24c,uStack_250);
          uStack_128 = pppppppfStack_268;
          uStack_120 = pfStack_260;
          pppppppfStack_138 = pppppppfStack_278;
          pppppppfStack_130 = pppppppfStack_270;
          if (pppppppfStack_268 < (float *******)0x5) {
            uStack_d6 = 1;
            pdb_1413fa980(&pppppppfStack_300,&pppppppfStack_138,5,1);
            if (!SBORROW8(0,(longlong)pppppppfStack_300)) {
              if (pppppppfStack_138 != (float *******)0x0) {
                pub_1406abac0((byte *)pppppppfStack_130,(longlong)pppppppfStack_138 << 3,4);
              }
              if (uStack_120 != (float *)0x0) {
                pub_1406abac0((byte *)uStack_118,(longlong)uStack_120 << 2,4);
              }
              uStack_128 = pppppppfStack_2f0;
              uStack_120 = pfStack_2e8;
              uStack_108 = uStack_2d0;
              uStack_118 = ppppppfStack_2e0;
              uStack_110 = ppppppfStack_2d8;
              pppppppfStack_138 = pppppppfStack_300;
              pppppppfStack_130 = pppppppfStack_2f8;
              pppppppfVar10 = pppppppfStack_2f0;
            }
          }
          pppppppfStack_148 = pppppppfStack_138;
          pppppppfStack_f8 = pppppppfStack_130;
          if ((float *******)((longlong)pppppppfStack_160 - (longlong)pppppppfVar12) < pppppppfVar10
             ) {
            pdb_142d7f1b0(&pppppppfStack_160,pppppppfVar12,pppppppfVar10,4,8);
            pppppppfStack_140 = pppppppfStack_158;
            pppppppfVar12 = pppppppfStack_150;
LAB_140834e00:
            pub_142e32760(pppppppfStack_140 + (longlong)pppppppfVar12,pppppppfStack_f8);
          }
          else if (pppppppfVar10 != (float *******)0x0) goto LAB_140834e00;
          pppppppfVar12 = (float *******)((longlong)pppppppfVar12 + (longlong)pppppppfVar10);
          pppppppfStack_150 = pppppppfVar12;
          if (pppppppfStack_148 != (float *******)0x0) {
            pub_1406abac0((byte *)pppppppfStack_f8,(longlong)pppppppfStack_148 << 3,4);
          }
          if ((pppppppfVar11 < (float *******)((longlong)ppppppfStack_240 + -1)) &&
             (pppppppfVar12 != (float *******)0x0)) {
            pppppppfVar12 = (float *******)((longlong)pppppppfVar12 + -1);
            pppppppfStack_150 = pppppppfVar12;
          }
          if (uStack_120 != (float *)0x0) {
            pub_1406abac0((byte *)uStack_118,(longlong)uStack_120 << 2,4);
          }
          if ((uStack_1a8 & 1) != 0) break;
          goto LAB_14083499f;
        }
      }
    } while ((uStack_1a8 & 1) == 0);
    pppppppfVar10 = pppppppfStack_e0;
    pppppppfVar11 = pppppppfStack_160;
    if (pppppppfVar12 != (float *******)0x0) {
      pppppppfVar12 = (float *******)((longlong)pppppppfVar12 + -1);
      if (((ulonglong)pppppppfStack_180 & 1) == 0) {
        if (pppppppfStack_e0 == pppppppfStack_f0) {
          uStack_d1 = 1;
          pdb_142d7e980(&pppppppfStack_f0);
        }
        *(float ********)(pbStack_e8 + (longlong)pppppppfVar10 * 0x10) = pppppppfVar12;
        pbStack_e8[(longlong)pppppppfVar10 * 0x10 + 8] = param_6;
        pppppppfStack_e0 = (float *******)((longlong)pppppppfVar10 + 1);
      }
      else {
        pppppppfStack_150 = pppppppfVar12;
        if (pppppppfStack_e0 == pppppppfStack_f0) {
          uStack_d1 = 1;
          pdb_142d7e980(&pppppppfStack_f0);
        }
        *(float ********)(pbStack_e8 + (longlong)pppppppfVar10 * 0x10) = pppppppfVar12;
        pbStack_e8[(longlong)pppppppfVar10 * 0x10 + 8] = 1;
        pppppppfStack_e0 = (float *******)((longlong)pppppppfVar10 + 1);
        pppppppfStack_178 = (float *******)CONCAT44(pppppppfStack_178._4_4_,fStack_184);
        if ((fStack_184 < 0.0) || (fVar20 < fStack_184)) {
          pppppppfStack_278 = (float *******)&pppppppfStack_178;
          pppppppfStack_270 = (float *******)pdb_140f70fc0;
          uStack_d1 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_143307ab0,&pppppppfStack_278,&UNK_14300a3c0);
        }
        pppppppfStack_178 = (float *******)0x0;
        pppppppfStack_170 = (float *******)0x4;
        pppppppfStack_168 = (float *******)0x0;
        uStack_d4 = 1;
        pdb_1413f8720(&pppppppfStack_2b0,fStack_184,_DAT_142e36f28,&pppppppfStack_178);
        param_1 = puStack_1e0;
        pppppppfStack_268 = pppppppfStack_168;
        pppppppfStack_278 = pppppppfStack_178;
        pppppppfStack_270 = pppppppfStack_170;
        uStack_d4 = 0;
        pdb_140080c90(&pppppppfStack_1d8,&pppppppfStack_278,0);
        pppppppfVar10 = pppppppfStack_1d8;
        pppppppfStack_1f8 = pppppppfStack_1d0;
        pppppppfStack_1f0 = pppppppfStack_1c8;
        if (SBORROW8(0,(longlong)pppppppfStack_1d8)) goto LAB_140834986;
        uStack_110 = uStack_1b0;
        uStack_108 = uStack_1a8;
        uStack_120 = pfStack_1c0;
        uStack_118 = ppppppfStack_1b8;
        pppppppfStack_130 = pppppppfStack_1d0;
        uStack_128 = pppppppfStack_1c8;
        pppppppfStack_138 = pppppppfStack_1d8;
        if (pppppppfStack_1c8 < (float *******)0x2) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_143306650,0x28,&UNK_143306678);
        }
        if (((float)uStack_1a8 == 0.0) && (!NAN((float)uStack_1a8))) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_1433066d0,0x24,&UNK_1433066f8);
        }
        fVar18 = (float)pub_142e32b00();
        uVar7 = 0;
        if (0.0 <= fVar18) {
          uVar7 = (longlong)(fVar18 - _DAT_142e36f2c) & (longlong)fVar18 >> 0x3f | (longlong)fVar18;
        }
        uVar8 = 0xffffffffffffffff;
        if (fVar18 <= _DAT_142e36f30) {
          uVar8 = uVar7;
        }
        pdb_1413fa980(&uStack_238,&pppppppfStack_138,uVar8 + 1 + (ulonglong)(uVar8 == 0),1);
        arg0 = pppppppfStack_230;
        pppppppfVar13 = uStack_238;
        uVar7 = CONCAT44(uStack_224,uStack_228);
        if (SBORROW8(0,(longlong)uStack_238)) {
          param_1[1] = pppppppfStack_230;
          param_1[2] = uVar7;
          *param_1 = 0x8000000000000000;
          goto joined_r0x00014083536b;
        }
        pppppppfStack_f8 = (float *******)CONCAT44(uStack_21c,uStack_220);
        pppppppfStack_148 = (float *******)CONCAT44(uStack_214,uStack_218);
        if (pppppppfVar10 != (float *******)0x0) {
          pub_1406abac0((byte *)pppppppfStack_130,(longlong)pppppppfVar10 << 3,4);
        }
        if (uStack_120 != (float *)0x0) {
          pub_1406abac0((byte *)uStack_118,(longlong)uStack_120 << 2,4);
        }
        if ((ulonglong)((longlong)pppppppfVar11 - (longlong)pppppppfVar12) < uVar7) {
          pppppppfStack_180 = arg0;
          pppppppfStack_140 = pppppppfVar13;
          pdb_142d7f1b0(&pppppppfStack_160,pppppppfVar12,uVar7,4,8);
          pppppppfVar12 = pppppppfStack_150;
          pppppppfVar13 = pppppppfStack_140;
          arg0 = pppppppfStack_180;
LAB_14083541e:
          pub_142e32760(pppppppfStack_158 + (longlong)pppppppfVar12,arg0,uVar7 * 8);
        }
        else if (uVar7 != 0) goto LAB_14083541e;
        pppppppfVar12 = (float *******)((longlong)pppppppfVar12 + uVar7);
        pppppppfStack_150 = pppppppfVar12;
        if (pppppppfVar13 != (float *******)0x0) {
          pub_1406abac0((byte *)arg0,(longlong)pppppppfVar13 << 3,4);
        }
        pppppppfVar10 = pppppppfStack_e0;
        if (pppppppfStack_e0 == pppppppfStack_f0) {
          pdb_142d7e980(&pppppppfStack_f0);
        }
        lVar9 = (longlong)pppppppfVar10 * 0x10;
        *(longlong *)(pbStack_e8 + lVar9) = (longlong)pppppppfVar12 + -1;
        pbStack_e8[lVar9 + 8] = 1;
        pppppppfStack_e0 = (float *******)((longlong)pppppppfVar10 + 1);
        if (pppppppfStack_f8 != (float *******)0x0) {
          pub_1406abac0((byte *)pppppppfStack_148,(longlong)pppppppfStack_f8 << 2,4);
        }
      }
      pppppppfStack_1c8 = pppppppfStack_150;
      pppppppfStack_1d8 = pppppppfStack_160;
      pppppppfStack_1d0 = pppppppfStack_158;
      uStack_d1 = 0;
      pdb_140080c90(&pppppppfStack_138,&pppppppfStack_1d8,1);
      param_1 = puStack_1e0;
      if (SBORROW8(0,(longlong)pppppppfStack_138)) {
        puStack_1e0[1] = pppppppfStack_130;
        puStack_1e0[2] = uStack_128;
        *puStack_1e0 = 0x8000000000000000;
        if (pppppppfStack_f0 != (float *******)0x0) {
          pub_1406abac0(pbStack_e8,(longlong)pppppppfStack_f0 << 4,8);
        }
      }
      else {
        pppppppfStack_190 = pppppppfStack_e0;
        uStack_1a0 = pppppppfStack_f0;
        pbStack_198 = pbStack_e8;
        uStack_1a8 = uStack_108;
        ppppppfStack_1b8 = uStack_118;
        uStack_1b0 = uStack_110;
        pppppppfStack_1c8 = uStack_128;
        pfStack_1c0 = uStack_120;
        pppppppfStack_1d8 = pppppppfStack_138;
        pppppppfStack_1d0 = pppppppfStack_130;
        puStack_1e0[2] = uStack_128;
        puStack_1e0[3] = uStack_120;
        *puStack_1e0 = pppppppfStack_138;
        puStack_1e0[1] = pppppppfStack_130;
        puStack_1e0[4] = uStack_118;
        puStack_1e0[5] = uStack_110;
        puStack_1e0[8] = pbStack_e8;
        puStack_1e0[9] = pppppppfStack_e0;
        puStack_1e0[6] = uStack_108;
        puStack_1e0[7] = pppppppfStack_f0;
      }
      goto LAB_1408350b1;
    }
    *(undefined1 *)(puStack_1e0 + 1) = 1;
    param_1 = puStack_1e0;
LAB_140834ee4:
    *param_1 = 0x8000000000000000;
  }
  if (pppppppfStack_f0 != (float *******)0x0) {
    pub_1406abac0(pbStack_e8,(longlong)pppppppfStack_f0 << 4,8);
  }
  if (pppppppfStack_160 != (float *******)0x0) {
    pub_1406abac0((byte *)pppppppfStack_158,(longlong)pppppppfStack_160 << 3,4);
  }
LAB_1408350b1:
  if (pppppppfStack_2b0 != (float *******)0x0) {
    pub_1406abac0((byte *)pppppppfStack_2a8,(longlong)pppppppfStack_2b0 << 3,4);
  }
  if (pfStack_298 != (float *)0x0) {
    pub_1406abac0((byte *)ppppppfStack_290,(longlong)pfStack_298 << 2,4);
  }
  return param_1;
}

