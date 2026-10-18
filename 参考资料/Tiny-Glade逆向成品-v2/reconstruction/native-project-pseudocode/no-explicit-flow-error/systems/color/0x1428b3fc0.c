// VA 0x1428b3fc0, PDB extent 1673 bytes
// system_color::style_picker_target::pick_target
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/style_picker_target.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_color::style_picker_target::pick_target
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/style_picker_target.rs
   Extent: 1673 */

undefined4 *
pdb_1428b3fc0(undefined4 *param_1,undefined8 *param_2,undefined8 param_3,float *param_4,
             undefined8 param_5,uint *param_6,longlong param_7)

{
  undefined1 uVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong *puVar9;
  int iVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint uStack_278;
  uint uStack_274;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  uint uStack_238;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  uint uStack_1f8;
  int iStack_1f4;
  longlong lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  float fStack_188;
  undefined8 uStack_180;
  int iStack_178;
  undefined8 uStack_170;
  undefined4 *puStack_160;
  longlong lStack_158;
  byte *pbStack_150;
  longlong lStack_148;
  longlong lStack_140;
  longlong lStack_138;
  longlong lStack_130;
  uint uStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  uint uStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined8 uStack_b0;
  int iStack_a8;
  undefined8 uStack_a0;
  longlong lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  uint uStack_68;
  int iStack_64;
  
  if (param_6 == (uint *)0x0) {
    uVar4 = 0x5fff;
    uStack_274 = 1;
    uStack_278 = 0;
  }
  else {
    uStack_278 = *param_6;
    uVar4 = uStack_278 << 8 | 0x5eff;
    uStack_274 = uStack_278;
  }
  pdb_1409ef4a0(&uStack_1a8,param_3,param_4,0);
  if (param_7 != 0) {
    uVar12 = *(longlong *)(param_7 + 0x10) << 6;
    lVar8 = *(longlong *)(param_7 + 8);
    do {
      if (uVar12 == 0) goto LAB_1428b4424;
      lVar13 = lVar8 + 0x40;
      pdb_1409ed440(&uStack_228,lVar8 + 0x20,lVar8,param_4,0x7f7fffff,uVar4);
      uVar12 = uVar12 - 0x40;
      lVar8 = lVar13;
    } while (iStack_1f4 == 2);
    uStack_238 = uStack_1f8;
    uStack_248 = (undefined4)uStack_208;
    uStack_244 = uStack_208._4_4_;
    uStack_240 = (undefined4)uStack_200;
    uStack_23c = uStack_200._4_4_;
    uStack_258 = (undefined4)uStack_218;
    uStack_254 = uStack_218._4_4_;
    uStack_250 = (undefined4)uStack_210;
    uStack_24c = uStack_210._4_4_;
    uStack_268 = (int)uStack_228;
    uStack_264 = uStack_228._4_4_;
    uStack_260 = (undefined4)uStack_220;
    uStack_25c = uStack_220._4_4_;
    if (uVar12 == 0) {
      uStack_128 = uStack_1f8;
      lStack_138 = uStack_208;
      lStack_130 = uStack_200;
      lStack_148 = uStack_218;
      lStack_140 = (longlong)uStack_210;
      lStack_158 = (longlong)uStack_228;
      pbStack_150 = uStack_220;
    }
    else {
      uVar12 = uVar12 >> 6;
      iVar10 = iStack_1f4;
      puStack_160 = param_1;
      do {
        pdb_1409ed440(&lStack_98,lVar13 + 0x20,lVar13,param_4,0x7f7fffff,uVar4);
        if (iStack_64 == 2) {
          uStack_e8 = uStack_238;
          uStack_118 = CONCAT44(uStack_264,uStack_268);
          uStack_110 = (byte *)CONCAT44(uStack_25c,uStack_260);
          uStack_108 = CONCAT44(uStack_254,uStack_258);
          uStack_100 = CONCAT44(uStack_24c,uStack_250);
          uStack_f8 = CONCAT44(uStack_244,uStack_248);
          uStack_f0 = CONCAT44(uStack_23c,uStack_240);
        }
        else {
          uStack_1c8 = uStack_78;
          uStack_1c0 = uStack_70;
          uStack_1d8 = uStack_88;
          uStack_1d0 = uStack_80;
          lStack_1e8 = lStack_98;
          uStack_1e0 = uStack_90;
          uStack_228 = (byte *)CONCAT44(uStack_264,uStack_268);
          uStack_220 = (byte *)CONCAT44(uStack_25c,uStack_260);
          uStack_218 = CONCAT44(uStack_254,uStack_258);
          uStack_210 = (byte *)CONCAT44(uStack_24c,uStack_250);
          uStack_208 = CONCAT44(uStack_244,uStack_248);
          uStack_200 = CONCAT44(uStack_23c,uStack_240);
          uStack_1f8 = uStack_238;
          uStack_238 = (uint)((int)uStack_238 >> 0x1f) >> 1 ^ uStack_238;
          uVar5 = (uint)((int)uStack_68 >> 0x1f) >> 1 ^ uStack_68;
          plVar7 = &uStack_228;
          if ((int)uVar5 < (int)uStack_238) {
            plVar7 = &lStack_1e8;
          }
          uStack_118 = *plVar7;
          uStack_110 = (byte *)plVar7[1];
          uStack_108 = plVar7[2];
          uStack_100 = plVar7[3];
          uStack_f8 = plVar7[4];
          uStack_f0 = plVar7[5];
          uStack_e8 = *(uint *)(plVar7 + 6);
          if ((int)uVar5 < (int)uStack_238) {
            iVar10 = iStack_64;
          }
        }
        uStack_268 = (undefined4)uStack_118;
        uStack_264 = uStack_118._4_4_;
        uStack_260 = (undefined4)uStack_110;
        uStack_25c = uStack_110._4_4_;
        uStack_258 = (undefined4)uStack_108;
        uStack_254 = uStack_108._4_4_;
        uStack_250 = (undefined4)uStack_100;
        uStack_24c = uStack_100._4_4_;
        uStack_248 = (undefined4)uStack_f8;
        uStack_244 = uStack_f8._4_4_;
        uStack_240 = (undefined4)uStack_f0;
        uStack_23c = uStack_f0._4_4_;
        uStack_238 = uStack_e8;
        lVar13 = lVar13 + 0x40;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      uStack_128 = uStack_e8;
      lStack_158 = uStack_118;
      pbStack_150 = uStack_110;
      lStack_148 = uStack_108;
      lStack_140 = uStack_100;
      lStack_138 = uStack_f8;
      lStack_130 = uStack_f0;
      param_1 = puStack_160;
      if (iVar10 == 2) goto LAB_1428b4424;
    }
    uStack_1f8 = uStack_128;
    uStack_208 = lStack_138;
    uStack_200 = lStack_130;
    uStack_218 = lStack_148;
    uStack_210 = (byte *)lStack_140;
    uStack_228 = (byte *)lStack_158;
    uStack_220 = pbStack_150;
    pdb_1409f9a10(&uStack_d8,&uStack_228);
    if (iStack_a8 != 2) {
      if (iStack_178 != 2) {
        fVar15 = *param_4 - fStack_c0;
        fVar16 = param_4[2] - fStack_b8;
        fVar19 = *param_4 - (float)uStack_190;
        fVar14 = param_4[2] - fStack_188;
        fVar17 = param_4[1] - fStack_bc;
        fVar18 = param_4[1] - uStack_190._4_4_;
        if (fVar14 * fVar14 + fVar19 * fVar19 + fVar18 * fVar18 <=
            fVar16 * fVar16 + fVar15 * fVar15 + fVar17 * fVar17) goto LAB_1428b4424;
      }
      uStack_190 = CONCAT44(fStack_bc,fStack_c0);
      fStack_188 = fStack_b8;
      iStack_178 = iStack_a8;
      uStack_170 = uStack_a0;
      uStack_180 = uStack_b0;
      uStack_198 = uStack_c8;
      uStack_1a8 = uStack_d8;
      uStack_1a0 = uStack_d0;
    }
  }
LAB_1428b4424:
  uVar2 = uStack_1a0;
  if (iStack_178 == 2) {
LAB_1428b44c0:
    *param_1 = 4;
    return param_1;
  }
  uVar1 = (undefined1)uStack_1a8;
  uVar6 = uStack_1a8._4_4_;
  fVar19 = SQRT((param_4[2] - fStack_188) * (param_4[2] - fStack_188) +
                (param_4[1] - uStack_190._4_4_) * (param_4[1] - uStack_190._4_4_) +
                (*param_4 - (float)uStack_190) * (*param_4 - (float)uStack_190));
  pdb_142b3d420(&uStack_228,param_5,param_4,fVar19);
  if ((int)uStack_228 != 0) goto LAB_1428b44c0;
  switch(uVar1) {
  case 0:
  case 1:
  case 2:
  case 6:
  case 7:
  case 8:
  case 9:
    lVar8 = pdb_140b0e4b0(*param_2,uVar2);
    if (lVar8 == 0) goto LAB_1428b44c0;
    if ((char)uStack_278 == '\0') {
      uVar11 = 0;
    }
    else {
      cVar3 = pdb_1408ff980(lVar8 + 0x6a);
      if (cVar3 != '\0') goto LAB_1428b44c0;
      uVar11 = 3;
    }
    goto code_r0x0001428b462f;
  case 3:
  case 4:
  case 5:
    puVar9 = (ulonglong *)pdb_140c40010(param_2[0x18],uVar6);
    if (puVar9 == (ulonglong *)0x0) goto LAB_1428b44c0;
    if (*puVar9 < 3) {
      if ((char)uStack_274 != '\0') {
        uVar11 = 2;
        goto code_r0x0001428b462f;
      }
      goto LAB_1428b44c0;
    }
    if ((int)*puVar9 != 7 || (uStack_278 & 1) != 0) goto LAB_1428b44c0;
    break;
  default:
    goto LAB_1428b44c0;
  case 0xd:
  case 0xe:
    if ((char)uStack_278 != '\0') goto LAB_1428b44c0;
  }
  uVar11 = 1;
  if (param_6 != (uint *)0x0) {
    pdb_140a60320(&uStack_228,param_2[8],uVar6);
    lVar8 = (longlong)uStack_228;
    if (uStack_218 == 0) {
      if (uStack_228 != (byte *)0x0) {
        pub_1406abac0(uStack_220,(longlong)uStack_228 << 2,4);
      }
    }
    else {
      uStack_210 = uStack_220 + uStack_218 * 4;
      uVar6 = *(undefined4 *)uStack_220;
      uStack_228 = uStack_220;
      uStack_218 = lVar8;
      uStack_220 = uStack_220 + 4;
      uVar6 = pdb_142b395c0(&uStack_228,uVar6);
    }
  }
code_r0x0001428b462f:
  *param_1 = uVar11;
  param_1[1] = uVar6;
  *(undefined8 *)(param_1 + 2) = uVar2;
  param_1[4] = fVar19;
  return param_1;
}

