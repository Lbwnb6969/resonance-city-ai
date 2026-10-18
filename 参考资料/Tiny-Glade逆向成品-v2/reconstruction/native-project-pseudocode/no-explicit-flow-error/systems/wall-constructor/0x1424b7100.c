// VA 0x1424b7100, PDB extent 1699 bytes
// system_wall_constructor::construct_platform_stairs::wooden_corners::add_ramp_collision
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_platform_stairs/wooden_corners.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_platform_stairs::wooden_corners::add_ramp_collision
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_platform_stairs/wooden_corners.rs
   Extent: 1699 */

void pdb_1424b7100(undefined8 *param_1,undefined8 *param_2,longlong param_3,float *param_4,
                  longlong *param_5)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined8 uStack_320;
  float fStack_318;
  float fStack_310;
  float fStack_30c;
  float fStack_308;
  undefined4 uStack_304;
  float fStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  float fStack_2f4;
  undefined4 uStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  float fStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  undefined4 uStack_2a0;
  float fStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  float fStack_290;
  undefined4 uStack_28c;
  undefined8 uStack_288;
  float fStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  float fStack_220;
  undefined4 uStack_214;
  undefined4 uStack_208;
  float fStack_1fc;
  float fStack_198;
  float fStack_194;
  float fStack_190;
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
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [256];
  
  if (*(longlong *)(param_3 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14350fc38);
  }
  lVar7 = *(longlong *)(param_3 + 8);
  lVar6 = *(longlong *)(param_3 + 0x10) * 0x10 + lVar7;
  if (lVar6 == 0x10) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14350fc50);
  }
  fVar14 = (*(float *)(param_3 + 0x18) + *param_4) * _DAT_142e36f50;
  fVar17 = *(float *)(lVar6 + -4) + fVar14;
  fVar14 = *(float *)(lVar7 + 0xc) - fVar14;
  fVar3 = param_4[1];
  fVar15 = _DAT_142e36f50 * fVar3;
  fVar16 = *(float *)(lVar7 + 4) + fVar15;
  fVar15 = fVar15 + *(float *)(lVar6 + -0xc);
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  fVar20 = (float)*param_2;
  fVar21 = (float)((ulonglong)*param_2 >> 0x20);
  fVar18 = (float)*param_1;
  fVar19 = (float)((ulonglong)*param_1 >> 0x20);
  uStack_2e0 = CONCAT44(fVar14 * fVar21 + fVar19,fVar14 * fVar20 + fVar18);
  pdb_140df4540(&uStack_320,&uStack_2e0,fVar16);
  uStack_2d8 = CONCAT44(fVar21 * fVar17 + fVar19,fVar20 * fVar17 + fVar18);
  pdb_140df4540(&uStack_338,&uStack_2d8,fVar15);
  fVar20 = (float)param_2[1];
  fVar21 = (float)((ulonglong)param_2[1] >> 0x20);
  fVar18 = (float)param_1[1];
  fVar19 = (float)((ulonglong)param_1[1] >> 0x20);
  uStack_288 = CONCAT44(fVar17 * fVar21 + fVar19,fVar17 * fVar20 + fVar18);
  pdb_140df4540(&uStack_32c,&uStack_288,fVar15);
  uStack_228 = CONCAT44(fVar14 * fVar21 + fVar19,fVar14 * fVar20 + fVar18);
  pdb_140df4540(&fStack_198,&uStack_228,fVar16);
  fStack_310 = (float)uStack_320;
  fVar14 = fVar15;
  if (fVar16 <= fVar15) {
    fVar14 = fVar16;
  }
  fStack_30c = (float)(~-(uint)NAN(fVar16) & (uint)fVar14 | -(uint)NAN(fVar16) & (uint)fVar15) -
               fVar3;
  fStack_308 = fStack_318;
  uStack_304 = uStack_338;
  uStack_2fc = uStack_330;
  uStack_2f8 = uStack_32c;
  uStack_2f0 = uStack_324;
  fStack_2ec = fStack_198;
  fStack_2e4 = fStack_190;
  fStack_300 = fStack_30c;
  fStack_2f4 = fStack_30c;
  fStack_2e8 = fStack_30c;
  if ((((fStack_310 != fStack_198) || (NAN(fStack_310) || NAN(fStack_198))) ||
      ((float)((ulonglong)uStack_320 >> 0x20) != fStack_194)) ||
     ((fStack_318 != fStack_190 || (NAN(fStack_318) || NAN(fStack_190))))) {
    uVar10 = param_5[2];
    uStack_228 = uStack_320;
    fStack_220 = fStack_318;
    uStack_214 = uStack_330;
    uStack_208 = uStack_324;
    fStack_1fc = fStack_190;
    pdb_140b3daf0(&fStack_198,&fStack_310,&uStack_228,uVar10 & 0xffffffff);
    uStack_238 = uStack_148;
    uStack_230 = uStack_140;
    uStack_248 = uStack_158;
    uStack_240 = uStack_150;
    uStack_258 = uStack_168;
    uStack_254 = uStack_164;
    uStack_250 = uStack_160;
    uStack_24c = uStack_15c;
    uStack_268 = uStack_178;
    uStack_264 = uStack_174;
    uStack_260 = uStack_170;
    uStack_25c = uStack_16c;
    uStack_278 = uStack_188;
    uStack_274 = uStack_184;
    uStack_270 = uStack_180;
    uStack_26c = uStack_17c;
    uStack_288 = CONCAT44(fStack_194,fStack_198);
    fStack_280 = fStack_190;
    uStack_27c = uStack_18c;
    pub_142e32760(&uStack_228,auStack_138,0x90);
    if (*param_5 - uVar10 < 8) {
      pdb_142d7f1b0(param_5,uVar10,8,4,0xc);
      uVar10 = param_5[2];
    }
    lVar7 = param_5[1];
    puVar2 = (undefined8 *)(lVar7 + 0x50 + uVar10 * 0xc);
    *puVar2 = uStack_238;
    puVar2[1] = uStack_230;
    puVar2 = (undefined8 *)(lVar7 + 0x40 + uVar10 * 0xc);
    *puVar2 = uStack_248;
    puVar2[1] = uStack_240;
    puVar1 = (undefined4 *)(lVar7 + 0x30 + uVar10 * 0xc);
    *puVar1 = uStack_258;
    puVar1[1] = uStack_254;
    puVar1[2] = uStack_250;
    puVar1[3] = uStack_24c;
    puVar1 = (undefined4 *)(lVar7 + 0x20 + uVar10 * 0xc);
    *puVar1 = uStack_268;
    puVar1[1] = uStack_264;
    puVar1[2] = uStack_260;
    puVar1[3] = uStack_25c;
    puVar1 = (undefined4 *)(lVar7 + 0x10 + uVar10 * 0xc);
    *puVar1 = uStack_278;
    puVar1[1] = uStack_274;
    puVar1[2] = uStack_270;
    puVar1[3] = uStack_26c;
    puVar1 = (undefined4 *)(lVar7 + uVar10 * 0xc);
    *puVar1 = (undefined4)uStack_288;
    puVar1[1] = uStack_288._4_4_;
    puVar1[2] = fStack_280;
    puVar1[3] = uStack_27c;
    param_5[2] = uVar10 + 8;
    lVar7 = param_5[5];
    if ((ulonglong)(param_5[3] - lVar7) < 0x24) {
      pdb_142d7f1b0(param_5 + 3,lVar7,0x24,4,4);
      lVar7 = param_5[5];
    }
    pub_142e32760(lVar7 * 4 + param_5[4],&uStack_228,0x90);
    param_5[5] = lVar7 + 0x24;
  }
  else {
    lVar7 = param_5[2];
    fStack_2a4 = fStack_318;
    uStack_2a0 = uStack_338;
    uStack_298 = uStack_330;
    uStack_28c = uStack_324;
    uStack_294 = uStack_32c;
    uStack_2d0 = uStack_320;
    fStack_2c8 = fStack_318;
    uStack_2c4 = uStack_338;
    uStack_2c0 = uStack_334;
    uStack_2bc = uStack_330;
    uStack_2b8 = uStack_32c;
    uStack_2b4 = uStack_328;
    uStack_2b0 = uStack_324;
    lVar6 = lVar7;
    fStack_290 = fStack_30c;
    fStack_2ac = fStack_310;
    fStack_2a8 = fStack_30c;
    fStack_29c = fStack_30c;
    if ((ulonglong)(*param_5 - lVar7) < 6) {
      pdb_142d7f1b0(param_5,lVar7,6,4,0xc);
      lVar6 = param_5[2];
    }
    lVar4 = param_5[1];
    *(ulonglong *)(lVar4 + 0x40 + lVar6 * 0xc) = CONCAT44(uStack_28c,fStack_290);
    puVar1 = (undefined4 *)(lVar4 + 0x30 + lVar6 * 0xc);
    *puVar1 = uStack_2a0;
    puVar1[1] = fStack_29c;
    puVar1[2] = uStack_298;
    puVar1[3] = uStack_294;
    puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar6 * 0xc);
    *puVar1 = uStack_2b0;
    puVar1[1] = fStack_2ac;
    puVar1[2] = fStack_2a8;
    puVar1[3] = fStack_2a4;
    puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar6 * 0xc);
    *puVar1 = uStack_2c0;
    puVar1[1] = uStack_2bc;
    puVar1[2] = uStack_2b8;
    puVar1[3] = uStack_2b4;
    puVar1 = (undefined4 *)(lVar4 + lVar6 * 0xc);
    *puVar1 = (undefined4)uStack_2d0;
    puVar1[1] = uStack_2d0._4_4_;
    puVar1[2] = fStack_2c8;
    puVar1[3] = uStack_2c4;
    param_5[2] = lVar6 + 6;
    iVar5 = (int)lVar7;
    iVar9 = iVar5 + 1;
    iVar8 = iVar5 + 2;
    iVar12 = iVar5 + 3;
    iVar13 = iVar5 + 5;
    iVar11 = iVar5 + 4;
    lVar7 = param_5[5];
    if ((ulonglong)(param_5[3] - lVar7) < 0x18) {
      pdb_142d7f1b0(param_5 + 3,lVar7,0x18,4,4);
      lVar7 = param_5[5];
    }
    lVar6 = param_5[4];
    *(int *)(lVar6 + lVar7 * 4) = iVar5;
    *(int *)(lVar6 + 4 + lVar7 * 4) = iVar9;
    *(int *)(lVar6 + 8 + lVar7 * 4) = iVar8;
    *(int *)(lVar6 + 0xc + lVar7 * 4) = iVar12;
    *(int *)(lVar6 + 0x10 + lVar7 * 4) = iVar13;
    *(int *)(lVar6 + 0x14 + lVar7 * 4) = iVar11;
    *(int *)(lVar6 + 0x18 + lVar7 * 4) = iVar5;
    *(int *)(lVar6 + 0x1c + lVar7 * 4) = iVar12;
    *(int *)(lVar6 + 0x20 + lVar7 * 4) = iVar11;
    *(int *)(lVar6 + 0x24 + lVar7 * 4) = iVar11;
    *(int *)(lVar6 + 0x28 + lVar7 * 4) = iVar9;
    *(int *)(lVar6 + 0x2c + lVar7 * 4) = iVar5;
    *(int *)(lVar6 + 0x30 + lVar7 * 4) = iVar9;
    *(int *)(lVar6 + 0x34 + lVar7 * 4) = iVar11;
    *(int *)(lVar6 + 0x38 + lVar7 * 4) = iVar13;
    *(int *)(lVar6 + 0x3c + lVar7 * 4) = iVar13;
    *(int *)(lVar6 + 0x40 + lVar7 * 4) = iVar8;
    *(int *)(lVar6 + 0x44 + lVar7 * 4) = iVar9;
    *(int *)(lVar6 + 0x48 + lVar7 * 4) = iVar8;
    *(int *)(lVar6 + 0x4c + lVar7 * 4) = iVar13;
    *(int *)(lVar6 + 0x50 + lVar7 * 4) = iVar12;
    *(int *)(lVar6 + 0x54 + lVar7 * 4) = iVar12;
    *(int *)(lVar6 + 0x58 + lVar7 * 4) = iVar5;
    *(int *)(lVar6 + 0x5c + lVar7 * 4) = iVar8;
    param_5[5] = lVar7 + 0x18;
  }
  return;
}

