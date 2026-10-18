// VA 0x1420f0b30, PDB extent 3274 bytes
// system_onboarding::hint_popup::hint_draw
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_popup.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_onboarding::hint_popup::hint_draw
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_popup.rs
   Extent: 3274 */

void pdb_1420f0b30(undefined8 *param_1,float param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined8 uVar1;
  uint uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *in_RDX;
  ulonglong uVar13;
  undefined1 *puVar14;
  longlong lVar15;
  undefined1 *puVar16;
  longlong lVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint *puVar24;
  uint *puVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 in_stack_fffffffffffffd48;
  undefined4 uVar35;
  longlong *plVar34;
  undefined4 uVar36;
  undefined1 uStack_281;
  longlong lStack_280;
  longlong lStack_278;
  ulonglong uStack_270;
  longlong lStack_268;
  longlong lStack_260;
  longlong lStack_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  longlong lStack_248;
  longlong lStack_240;
  ulonglong uStack_238;
  longlong *plStack_230;
  undefined4 *puStack_228;
  undefined8 uStack_220;
  longlong lStack_218;
  undefined4 *puStack_210;
  undefined8 *puStack_208;
  longlong lStack_200;
  uint *puStack_1f8;
  undefined8 uStack_1f0;
  uint *puStack_1e8;
  longlong lStack_1e0;
  longlong lStack_1d8;
  longlong lStack_1d0;
  longlong lStack_1c8;
  longlong lStack_1c0;
  longlong *plStack_1b8;
  code *pcStack_1b0;
  undefined8 uStack_1a8;
  longlong *plStack_190;
  undefined1 *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  uint *puStack_170;
  uint *puStack_168;
  longlong lStack_150;
  longlong lStack_140;
  byte bStack_138;
  longlong lStack_130;
  byte bStack_128;
  longlong lStack_120;
  byte bStack_118;
  longlong lStack_110;
  longlong lStack_100;
  undefined4 uStack_f4;
  longlong lStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  byte bStack_d8;
  uint uStack_d0;
  uint uStack_cc;
  byte bStack_c8;
  undefined4 auStack_c0 [32];
  
  uVar35 = (undefined4)((ulonglong)in_stack_fffffffffffffd48 >> 0x20);
  uStack_1f0 = param_4;
  uStack_281 = pdb_140a82300(*param_3);
  puVar3 = (ulonglong *)*param_7;
  lVar11 = param_7[1];
  uVar8 = *puVar3;
  uVar10 = 0;
  uVar12 = uVar8 - *(ulonglong *)(lVar11 + 0x18);
  if (uVar8 < *(ulonglong *)(lVar11 + 0x18)) {
    uVar12 = uVar10;
  }
  uVar13 = uVar8 - *(ulonglong *)(lVar11 + 0x38);
  if (uVar8 < *(ulonglong *)(lVar11 + 0x38)) {
    uVar13 = uVar10;
  }
  uVar8 = *(ulonglong *)(lVar11 + 0x30);
  uVar21 = uVar8 - uVar13;
  if (uVar13 > uVar8) {
    uVar21 = uVar10;
  }
  uVar4 = *(ulonglong *)(lVar11 + 0x10);
  uVar23 = uVar4 - uVar12;
  if (uVar12 > uVar4) {
    uVar23 = uVar10;
  }
  uVar10 = *(ulonglong *)(lVar11 + 0x40);
  *puVar3 = uVar10 - (uVar23 + uVar21);
  if (uVar12 <= uVar4 && uVar4 - uVar12 != 0 || uVar13 <= uVar8 && uVar8 - uVar13 != 0) {
    *puVar3 = uVar10;
    uStack_220 = *param_6;
    pdb_140a6ad50();
    fVar31 = *(float *)*param_8;
    fVar27 = ((float *)*param_8)[1];
    uStack_250 = *(undefined4 *)((longlong)param_1 + 0x1c);
    puStack_228 = (undefined4 *)param_1[2];
    *puStack_228 = uStack_250;
    plVar34 = (longlong *)*param_1;
    plStack_1b8 = (longlong *)&UNK_14345dd40;
    pcStack_1b0 = (code *)0x11;
    fVar29 = param_2;
    uVar8 = pdb_14072aeb0(&plStack_1b8);
    puVar16 = (undefined1 *)(uVar8 ^ 0xb1695320004fb443);
    puVar14 = puVar16;
    lVar11 = pdb_14072c2d0(plVar34);
    *(undefined1 *)(lVar11 + 0x5e) = 0;
    if (((ulonglong)puVar14 & 1) == 0) {
      param_2 = param_2 / _DAT_142e4bfe4;
      fVar31 = fVar31 / param_2 + _DAT_142f6d800;
      lVar11 = plVar34[2];
      if (lVar11 == *plVar34) {
        pdb_142d7f080(plVar34);
      }
      lVar5 = plVar34[1];
      lVar15 = lVar11 * 0x38;
      *(undefined4 *)(lVar5 + lVar15) = 4;
      *(float *)(lVar5 + 4 + lVar15) = fVar31;
      *(float *)(lVar5 + 8 + lVar15) = fVar27 / param_2;
      *(undefined8 *)(lVar5 + 0xc + lVar15) = _DAT_14345dd30;
      *(undefined4 *)(lVar5 + 0x14 + lVar15) = 0;
      *(undefined1 **)(lVar5 + 0x30 + lVar15) = puVar16;
      plVar34[2] = lVar11 + 1;
    }
    uStack_180 = 0;
    plStack_230 = plVar34;
    plStack_190 = plVar34;
    puStack_188 = puVar16;
    pdb_14072c7c0(&plStack_1b8,&plStack_190);
    pdb_140734630(&plStack_190,&plStack_1b8,&UNK_14345dd51,0x16);
    lVar11 = pdb_140737690(&plStack_190);
    *(undefined4 *)(lVar11 + 0xc4) = 0x3f800000;
    pdb_1428a08f0(&plStack_190,&UNK_14345dd67,4);
  }
  else {
    uStack_220 = *param_6;
    uStack_250 = *(undefined4 *)((longlong)param_1 + 0x1c);
    plStack_230 = (longlong *)*param_1;
    puStack_228 = (undefined4 *)param_1[2];
    fVar29 = param_2;
  }
  lVar11 = *in_RDX;
  lVar5 = in_RDX[1];
  plVar34 = (longlong *)CONCAT44(uVar35,*(undefined4 *)((longlong)in_RDX + 0x14));
  pdb_1428a1b10(&puStack_170,lVar5,lVar11,(int)in_RDX[2],plVar34);
  fVar31 = _DAT_142e4bfe4;
  uVar35 = _DAT_142e36f34;
  lStack_218 = lStack_150;
  lStack_260 = lStack_130;
  lStack_268 = lStack_120;
  lStack_240 = lStack_110;
  lStack_248 = lStack_100;
  uStack_24c = uStack_f4;
  lStack_278 = lStack_f0;
  lStack_280 = lStack_e8;
  lStack_258 = lStack_e0;
  uStack_270 = (ulonglong)bStack_d8;
  uVar8 = (ulonglong)uStack_d0;
  lStack_200 = 0;
  puStack_1f8 = puStack_168;
  puVar24 = puStack_170;
  puVar25 = puStack_168;
  lStack_1d8 = lVar11;
  bVar18 = bStack_138;
  bVar19 = bStack_128;
  bVar20 = bStack_118;
  do {
    uVar36 = (undefined4)((ulonglong)plVar34 >> 0x20);
    uVar12 = (ulonglong)uStack_cc;
    uStack_238 = uVar12;
    if ((bStack_c8 & 1) == 0) {
      if (uStack_cc == (uint)uVar8) {
        do {
          if (puVar24 == puVar25) {
            return;
          }
          uVar2 = *puVar24;
          puVar24 = puVar24 + 1;
          uVar8 = *(ulonglong *)(*(longlong *)(lVar5 + 0x100) + 0x58 + (ulonglong)uVar2 * 0xa0);
        } while (uVar8 == 0);
        lVar17 = *(longlong *)(lVar5 + 0x100) + (ulonglong)uVar2 * 0xa0;
        uVar10 = (ulonglong)*(uint *)(lVar17 + 0x94);
        lVar11 = *(longlong *)(lVar5 + 0x1a0);
        uVar12 = *(ulonglong *)(lVar11 + 0x40 + uVar10 * 0x48);
        lVar15 = *(longlong *)(lVar11 + 0x18 + uVar10 * 0x48);
        lVar11 = *(longlong *)(lVar11 + 0x38 + uVar10 * 0x48);
        if ((*(ulonglong *)(lStack_1d8 + 0x118) < uVar12) &&
           (uVar10 = *(ulonglong *)(lVar11 + *(ulonglong *)(lStack_1d8 + 0x118) * 8), uVar10 != 0))
        {
          lStack_278 = *(longlong *)(lVar15 + 0x10 + ~uVar10 * 0x30);
          uVar10 = *(ulonglong *)(lStack_1d8 + 0x120);
          uVar13 = *(ulonglong *)(lVar17 + 0x88);
          if (uVar13 <= uVar10) goto LAB_1420f118a;
LAB_1420f10f5:
          if (*(longlong *)(*(longlong *)(lVar17 + 0x80) + uVar10 * 8) == 0) goto LAB_1420f118a;
          bVar18 = 1;
          if ((uVar12 <= uVar10) || (uVar10 = *(ulonglong *)(lVar11 + uVar10 * 8), uVar10 == 0)) {
            lStack_140 = 0;
            uVar10 = *(ulonglong *)(lStack_1d8 + 0x128);
            goto joined_r0x0001420f119c;
          }
          lStack_140 = *(longlong *)(lVar15 + 0x10 + ~uVar10 * 0x30);
          uVar10 = *(ulonglong *)(lStack_1d8 + 0x128);
          if (uVar10 < uVar12) goto LAB_1420f12d1;
LAB_1420f12fd:
          lStack_280 = 0;
          uVar10 = *(ulonglong *)(lStack_1d8 + 0x130);
          if (uVar13 <= uVar10) goto LAB_1420f1359;
LAB_1420f1312:
          if (*(longlong *)(*(longlong *)(lVar17 + 0x80) + uVar10 * 8) == 0) goto LAB_1420f1359;
          bVar19 = 1;
          if ((uVar12 <= uVar10) || (uVar10 = *(ulonglong *)(lVar11 + uVar10 * 8), uVar10 == 0)) {
            lStack_260 = 0;
            uVar10 = *(ulonglong *)(lStack_1d8 + 0x138);
            if (uVar13 <= uVar10) goto LAB_1420f13bf;
            goto LAB_1420f1384;
          }
          lStack_260 = *(longlong *)(lVar15 + 0x10 + ~uVar10 * 0x30);
          uVar10 = *(ulonglong *)(lStack_1d8 + 0x138);
          if (uVar10 < uVar13) goto LAB_1420f1384;
LAB_1420f13bf:
          bVar20 = 0;
        }
        else {
          lStack_278 = 0;
          uVar10 = *(ulonglong *)(lStack_1d8 + 0x120);
          uVar13 = *(ulonglong *)(lVar17 + 0x88);
          if (uVar10 < uVar13) goto LAB_1420f10f5;
LAB_1420f118a:
          bVar18 = 0;
          uVar10 = *(ulonglong *)(lStack_1d8 + 0x128);
joined_r0x0001420f119c:
          if (uVar12 <= uVar10) goto LAB_1420f12fd;
LAB_1420f12d1:
          uVar10 = *(ulonglong *)(lVar11 + uVar10 * 8);
          if (uVar10 == 0) goto LAB_1420f12fd;
          lStack_280 = *(longlong *)(lVar15 + 0x10 + ~uVar10 * 0x30);
          uVar10 = *(ulonglong *)(lStack_1d8 + 0x130);
          if (uVar10 < uVar13) goto LAB_1420f1312;
LAB_1420f1359:
          bVar19 = 0;
          uVar10 = *(ulonglong *)(lStack_1d8 + 0x138);
          if (uVar13 <= uVar10) goto LAB_1420f13bf;
LAB_1420f1384:
          if (*(longlong *)(*(longlong *)(lVar17 + 0x80) + uVar10 * 8) == 0) goto LAB_1420f13bf;
          bVar20 = 1;
          if ((uVar10 < uVar12) && (uVar10 = *(ulonglong *)(lVar11 + uVar10 * 8), uVar10 != 0)) {
            lStack_268 = *(longlong *)(lVar15 + 0x10 + ~uVar10 * 0x30);
          }
          else {
            lStack_268 = 0;
          }
        }
        lVar22 = ~*(ulonglong *)(lVar11 + *(longlong *)(lStack_1d8 + 0x110) * 8) * 0x30;
        lStack_240 = *(longlong *)(lVar15 + 0x10 + lVar22);
        lStack_248 = *(longlong *)(lVar15 + 0x28 + lVar22);
        uVar10 = *(ulonglong *)(lStack_1d8 + 0x140);
        uStack_238 = 0;
        if ((uVar10 < uVar13) && (*(longlong *)(*(longlong *)(lVar17 + 0x80) + uVar10 * 8) != 0)) {
          uStack_270 = CONCAT71((int7)((ulonglong)*(longlong *)(lVar17 + 0x80) >> 8),1);
          if ((uVar10 < uVar12) && (uVar12 = *(ulonglong *)(lVar11 + uVar10 * 8), uVar12 != 0)) {
            lStack_258 = *(longlong *)(lVar15 + 0x10 + ~uVar12 * 0x30);
          }
          else {
            lStack_258 = 0;
          }
        }
        else {
          uStack_270 = 0;
        }
        lStack_218 = *(longlong *)(lVar17 + 0x50);
      }
      uVar12 = (ulonglong)~*(uint *)(lStack_218 + 8 + uStack_238 * 0x10);
      lStack_1e0 = lStack_140;
    }
    else {
      lStack_1e0 = lStack_140;
      if (uStack_cc == (uint)uVar8) {
        do {
          if (puVar24 == puVar25) {
            return;
          }
          uVar2 = *puVar24;
          puVar24 = puVar24 + 1;
          uVar8 = *(ulonglong *)(*(longlong *)(lVar5 + 0x1a0) + 0x10 + (ulonglong)uVar2 * 0x48);
        } while (uVar8 == 0);
        lVar11 = *(longlong *)(lVar5 + 0x1a0) + (ulonglong)uVar2 * 0x48;
        uVar12 = *(ulonglong *)(lVar11 + 0x40);
        lVar15 = *(longlong *)(lVar11 + 0x18);
        lVar11 = *(longlong *)(lVar11 + 0x38);
        if ((*(ulonglong *)(lStack_1d8 + 0x118) < uVar12) &&
           (uVar10 = *(ulonglong *)(lVar11 + *(ulonglong *)(lStack_1d8 + 0x118) * 8), uVar10 != 0))
        {
          lStack_278 = *(longlong *)(lVar15 + 0x10 + ~uVar10 * 0x30);
          uVar10 = *(ulonglong *)(lStack_1d8 + 0x120);
          if (uVar12 <= uVar10) goto LAB_1420f114a;
LAB_1420f1098:
          uVar10 = *(ulonglong *)(lVar11 + uVar10 * 8);
          if (uVar10 == 0) goto LAB_1420f114a;
          lStack_140 = *(longlong *)(lVar15 + 0x10 + ~uVar10 * 0x30);
          bVar18 = 1;
          uVar10 = *(ulonglong *)(lStack_1d8 + 0x128);
          if (uVar10 < uVar12) goto LAB_1420f115e;
LAB_1420f11a7:
          lStack_280 = 0;
          uVar10 = *(ulonglong *)(lStack_1d8 + 0x130);
          if (uVar12 <= uVar10) goto LAB_1420f11f0;
LAB_1420f11bc:
          uVar10 = *(ulonglong *)(lVar11 + uVar10 * 8);
          if (uVar10 == 0) goto LAB_1420f11f0;
          lStack_260 = *(longlong *)(lVar15 + 0x10 + ~uVar10 * 0x30);
          bVar19 = 1;
          uVar10 = *(ulonglong *)(lStack_1d8 + 0x138);
          if (uVar10 < uVar12) goto LAB_1420f1204;
LAB_1420f123a:
          bVar20 = 0;
          uVar10 = *(ulonglong *)(lStack_1d8 + 0x140);
          if (uVar12 <= uVar10) goto LAB_1420f127a;
LAB_1420f1250:
          uVar12 = *(ulonglong *)(lVar11 + uVar10 * 8);
          if (uVar12 == 0) goto LAB_1420f127a;
          lStack_258 = *(longlong *)(lVar15 + 0x10 + ~uVar12 * 0x30);
          uStack_270 = CONCAT71((int7)((ulonglong)lStack_258 >> 8),1);
        }
        else {
          lStack_278 = 0;
          uVar10 = *(ulonglong *)(lStack_1d8 + 0x120);
          if (uVar10 < uVar12) goto LAB_1420f1098;
LAB_1420f114a:
          bVar18 = 0;
          uVar10 = *(ulonglong *)(lStack_1d8 + 0x128);
          if (uVar12 <= uVar10) goto LAB_1420f11a7;
LAB_1420f115e:
          uVar10 = *(ulonglong *)(lVar11 + uVar10 * 8);
          if (uVar10 == 0) goto LAB_1420f11a7;
          lStack_280 = *(longlong *)(lVar15 + 0x10 + ~uVar10 * 0x30);
          uVar10 = *(ulonglong *)(lStack_1d8 + 0x130);
          if (uVar10 < uVar12) goto LAB_1420f11bc;
LAB_1420f11f0:
          bVar19 = 0;
          uVar10 = *(ulonglong *)(lStack_1d8 + 0x138);
          if (uVar12 <= uVar10) goto LAB_1420f123a;
LAB_1420f1204:
          uVar10 = *(ulonglong *)(lVar11 + uVar10 * 8);
          if (uVar10 == 0) goto LAB_1420f123a;
          lStack_268 = *(longlong *)(lVar15 + 0x10 + ~uVar10 * 0x30);
          bVar20 = 1;
          uVar10 = *(ulonglong *)(lStack_1d8 + 0x140);
          if (uVar10 < uVar12) goto LAB_1420f1250;
LAB_1420f127a:
          uStack_270 = 0;
        }
        uVar12 = 0;
        lVar11 = ~*(ulonglong *)(lVar11 + *(longlong *)(lStack_1d8 + 0x110) * 8) * 0x30;
        lStack_240 = *(longlong *)(lVar15 + 0x10 + lVar11);
        lStack_248 = *(longlong *)(lVar15 + 0x28 + lVar11);
        lStack_1e0 = lStack_140;
        uStack_238 = uVar12;
      }
    }
    puStack_208 = (undefined8 *)(lStack_240 + uVar12 * 0x18);
    puStack_210 = (undefined4 *)(lStack_248 + uVar12 * 4);
    puStack_1e8 = (uint *)(lStack_278 + uVar12 * 0xc);
    lStack_1c8 = uVar12 * 0x30 + lStack_1e0;
    if ((bVar18 & 1) == 0) {
      lStack_1c8 = 0;
    }
    lVar11 = lStack_280 + uVar12 * 0x14;
    lVar15 = uVar12 * 0x18 + lStack_260;
    if ((bVar19 & 1) == 0) {
      lVar15 = 0;
    }
    lVar17 = lStack_268 + uVar12 * 8;
    if ((bVar20 & 1) == 0) {
      lVar17 = 0;
    }
    lVar22 = 0;
    if ((uStack_270 & 1) != 0) {
      lVar22 = lStack_258;
    }
    fVar27 = (float)puStack_1e8[1];
    if (0.0 < fVar27) {
      lStack_1d0 = lStack_200;
      lStack_1c0 = lVar22;
      pdb_140a6ad50(uStack_220);
      fVar30 = fVar29 / fVar31;
      uVar1 = *(undefined8 *)(lVar11 + 8);
      fVar32 = (float)uVar1;
      fVar33 = (float)((ulonglong)uVar1 >> 0x20);
      *puStack_228 = uStack_250;
      plStack_1b8 = &lStack_1d0;
      pcStack_1b0 = pdb_140f72a40;
      pdb_140f60760(&plStack_190,&UNK_14345dd6b,&plStack_1b8);
      plStack_1b8 = plStack_190;
      pcStack_1b0 = (code *)puStack_188;
      uStack_1a8 = uStack_180;
      auStack_c0[0] = 0;
      uVar26 = uVar35;
      if (lVar22 != 0) {
        uVar26 = 0;
      }
      fVar29 = fVar33 / fVar30;
      plVar34 = (longlong *)CONCAT44(uVar36,fVar29);
      pdb_1428a1bd0(&plStack_190,plStack_230,&plStack_1b8,fVar32 / fVar30,plVar34,auStack_c0,uVar26,
                    uVar26,0);
      pdb_14072c7c0(auStack_c0,&plStack_190);
      pdb_140734630(&plStack_1b8,auStack_c0,&UNK_14345dd51,0x16);
      lVar11 = pdb_140737690(&plStack_1b8);
      puVar7 = puStack_208;
      puVar6 = puStack_210;
      *(float *)(lVar11 + 0xc4) = fVar27;
      *puStack_210 = uStack_24c;
      *puStack_208 = uVar1;
      puVar9 = (undefined8 *)pdb_140732b30(lVar11);
      puVar25 = puStack_1f8;
      if (puVar9 == (undefined8 *)0x0) {
        fVar27 = 0.0;
        fVar28 = 0.0;
      }
      else {
        fVar32 = (float)puVar9[1] * fVar30;
        fVar33 = (float)((ulonglong)puVar9[1] >> 0x20) * fVar30;
        fVar27 = (float)*puVar9 * fVar30;
        fVar28 = (float)((ulonglong)*puVar9 >> 0x20) * fVar30;
        fVar29 = fVar30;
      }
      puVar7[1] = CONCAT44(fVar33,fVar32);
      *puVar6 = uStack_24c;
      puVar7[2] = CONCAT44(fVar28,fVar27);
      if (lVar15 != 0) {
        plVar34 = &lStack_1c0;
        pdb_1428a1190(&plStack_1b8,&UNK_14345dd67,4,lVar15,plVar34);
      }
      plStack_190 = &lStack_1c8;
      puStack_188 = &uStack_281;
      uStack_180 = param_5;
      uStack_178 = uStack_1f0;
      puStack_170 = puStack_1e8;
      pdb_1428a0b70(&plStack_1b8,&UNK_14345dd72,5,&plStack_190);
      if (lVar17 != 0) {
        pdb_1428a18c0(&plStack_1b8,&UNK_14345dd77,4,lVar17);
      }
    }
    uStack_cc = (int)uStack_238 + 1;
    lStack_200 = lStack_200 + 1;
    lStack_140 = lStack_1e0;
  } while( true );
}

