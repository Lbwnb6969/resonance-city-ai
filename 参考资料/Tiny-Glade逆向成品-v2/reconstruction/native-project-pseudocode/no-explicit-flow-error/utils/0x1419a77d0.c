// VA 0x1419a77d0, PDB extent 1427 bytes
// utils::curve::Curve::crashy_slice<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::Curve::crashy_slice<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 1427 */

void pdb_1419a77d0(longlong *param_1,longlong param_2,float param_3,float param_4,undefined8 param_5
                  )

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  float *pfVar15;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  float *pfVar20;
  ulonglong uVar21;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  float *pfStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  longlong *plStack_b0;
  float *pfStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  float fStack_98;
  float fStack_94;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  undefined1 uStack_71;
  undefined8 uStack_70;
  longlong lVar16;
  
  uStack_70 = 0xfffffffffffffffe;
  lStack_90 = 0;
  lStack_88 = 4;
  lStack_80 = 0;
  fStack_98 = param_4;
  fStack_94 = param_3;
  if (param_4 <= param_3) {
    pfStack_e8 = &fStack_94;
    pcStack_e0 = pdb_1419ad250;
    pcStack_d0 = pdb_1419ad250;
    uStack_71 = 1;
    uStack_d8 = &fStack_98;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14335e2f8,&pfStack_e8,&UNK_14335e328);
  }
  uStack_71 = 1;
  plStack_b0 = param_1;
  uVar11 = pdb_1419a9060(param_2,param_3);
  uStack_71 = 1;
  uVar12 = pdb_1419a9060(param_2,param_4);
  uVar17 = (ulonglong)uVar11;
  uVar14 = *(ulonglong *)(param_2 + 0x10);
  if (uVar14 <= uVar17) {
    uStack_71 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar17,uVar14,&UNK_14335e4e0);
  }
  uVar19 = uVar17 + 1;
  if (uVar14 <= uVar19) {
    uStack_71 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar19,uVar14,&UNK_14335e4f8);
  }
  uVar13 = (ulonglong)uVar12;
  if (uVar14 <= uVar13) {
    uStack_71 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar13,uVar14,&UNK_14335e4e0);
  }
  if (uVar14 <= uVar13 + 1) {
    uStack_71 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar13 + 1,uVar14,&UNK_14335e4f8);
  }
  lVar5 = *(longlong *)(param_2 + 8);
  uVar30 = *(undefined8 *)(lVar5 + uVar17 * 8);
  uVar4 = *(undefined8 *)(lVar5 + 8 + uVar17 * 8);
  fVar24 = (float)uVar4;
  fVar25 = (float)((ulonglong)uVar4 >> 0x20);
  fVar28 = extraout_XMM0_Da * fVar24 + (_DAT_142e36f28 - extraout_XMM0_Da) * (float)uVar30;
  fVar29 = extraout_XMM0_Da * fVar25 +
           (_DAT_142e36f28 - extraout_XMM0_Da) * (float)((ulonglong)uVar30 >> 0x20);
  uVar30 = *(undefined8 *)(lVar5 + uVar13 * 8);
  fVar22 = (float)uVar30;
  fVar23 = (float)((ulonglong)uVar30 >> 0x20);
  uVar30 = *(undefined8 *)(lVar5 + 8 + uVar13 * 8);
  fVar26 = extraout_XMM0_Da_00 * (float)uVar30 + (_DAT_142e36f28 - extraout_XMM0_Da_00) * fVar22;
  fVar27 = extraout_XMM0_Da_00 * (float)((ulonglong)uVar30 >> 0x20) +
           (_DAT_142e36f28 - extraout_XMM0_Da_00) * fVar23;
  uVar17 = uVar17 + 2;
  if (fVar29 != fVar25) {
    uVar17 = uVar19;
  }
  if (fVar28 != fVar24) {
    uVar17 = uVar19;
  }
  if (NAN(fVar28) || NAN(fVar24)) {
    uVar17 = uVar19;
  }
  uVar19 = (uVar13 - 1) + (ulonglong)(uVar13 == 0);
  if (fVar23 != fVar27) {
    uVar19 = uVar13;
  }
  if (fVar26 != fVar22) {
    uVar19 = uVar13;
  }
  if (NAN(fVar26) || NAN(fVar22)) {
    uVar19 = uVar13;
  }
  uVar13 = uVar19 + 1;
  lVar16 = uVar13 - uVar17;
  if (uVar13 < uVar17) {
    lVar16 = 0;
  }
  pfVar15 = (float *)(lVar16 + 2);
  uStack_71 = 1;
  uVar30 = 8;
  pfStack_a8 = pfVar15;
  pdb_142d7f1b0(&lStack_90,0,pfVar15,4,8);
  if (lStack_90 == lStack_80) {
    uStack_71 = 1;
    uVar30 = 8;
    pdb_142d7f1b0(&lStack_90,lStack_80,1,4,8);
  }
  *(ulonglong *)(lStack_88 + lStack_80 * 8) = CONCAT44(fVar29,fVar28);
  lStack_80 = lStack_80 + 1;
  if (uVar19 < uVar17 == uVar17 < uVar19) {
    if (uVar14 <= uVar17) {
      uStack_71 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar17,uVar14,&UNK_14335e358);
    }
    uVar4 = *(undefined8 *)(lVar5 + uVar17 * 8);
    if (lStack_90 == lStack_80) {
      uStack_71 = 1;
      uVar30 = 8;
      pdb_142d7f1b0(&lStack_90,lStack_80,1,4,8);
    }
    *(undefined8 *)(lStack_88 + lStack_80 * 8) = uVar4;
    lStack_80 = lStack_80 + 1;
    pfVar20 = (float *)0x3;
  }
  else {
    pfVar20 = (float *)0x2;
    if ((char)((uVar19 < uVar17) - (uVar17 < uVar19)) != '\x01') {
      if ((uVar14 <= uVar19) || (uVar21 = uVar13 - uVar17, uVar19 = uVar13, uVar13 < uVar17)) {
        uStack_71 = 1;
        pdb_142dc8420(uVar17,uVar19,uVar14,&UNK_14335e340);
        goto LAB_1419a7cf4;
      }
      if ((ulonglong)(lStack_90 - lStack_80) < uVar21) {
        uStack_71 = 1;
        uVar30 = 8;
        pdb_142d7f1b0(&lStack_90,lStack_80,uVar21,4,8);
        if (uVar21 < 4) goto LAB_1419a79d4;
LAB_1419a7afa:
        uVar14 = uVar21 & 0x1fffffffc;
        lVar18 = uVar17 * 8 + 0x10 + lVar5;
        lVar16 = lStack_88 + lStack_80 * 8;
        lStack_80 = lStack_80 + uVar14;
        uVar19 = 0;
        do {
          puVar2 = (undefined4 *)(lVar18 + -0x10 + uVar19 * 8);
          uVar7 = puVar2[1];
          uVar8 = puVar2[2];
          uVar9 = puVar2[3];
          puVar1 = (undefined8 *)(lVar18 + uVar19 * 8);
          uVar4 = *puVar1;
          uVar10 = puVar1[1];
          puVar3 = (undefined4 *)(lVar16 + uVar19 * 8);
          *puVar3 = *puVar2;
          puVar3[1] = uVar7;
          puVar3[2] = uVar8;
          puVar3[3] = uVar9;
          puVar1 = (undefined8 *)(lVar16 + 0x10 + uVar19 * 8);
          *puVar1 = uVar4;
          puVar1[1] = uVar10;
          uVar19 = uVar19 + 4;
        } while (uVar14 != uVar19);
        if (uVar21 == uVar14) goto LAB_1419a7b67;
LAB_1419a7b44:
        uVar17 = uVar17 + uVar14;
        do {
          *(undefined8 *)(lStack_88 + lStack_80 * 8) = *(undefined8 *)(lVar5 + uVar17 * 8);
          lStack_80 = lStack_80 + 1;
          uVar17 = uVar17 + 1;
        } while (uVar13 != uVar17);
      }
      else if (uVar13 != uVar17) {
        if (3 < uVar21) goto LAB_1419a7afa;
LAB_1419a79d4:
        uVar14 = 0;
        goto LAB_1419a7b44;
      }
LAB_1419a7b67:
      pfVar20 = (float *)(uVar21 + 2);
    }
  }
  pfStack_e8 = pfVar20;
  if (lStack_90 == lStack_80) {
    uStack_71 = 1;
    uVar30 = 8;
    pdb_142d7f1b0(&lStack_90,lStack_80,1,4,8);
  }
  *(ulonglong *)(lStack_88 + lStack_80 * 8) = CONCAT44(fVar27,fVar26);
  lStack_80 = lStack_80 + 1;
  if (pfVar20 == pfVar15) {
    uStack_71 = 0;
    pdb_140080c90(&pfStack_e8,&lStack_90,0);
    if (SBORROW8(0,(longlong)pfStack_e8)) {
      uStack_a0 = (undefined4)uStack_d8;
      uStack_9c = uStack_d8._4_4_;
      uStack_71 = 0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14335e278,0x2b,&pfStack_a8,&UNK_14335e258,param_5);
    }
    plStack_b0[6] = lStack_b8;
    plStack_b0[4] = lStack_c8;
    plStack_b0[5] = lStack_c0;
    plStack_b0[2] = (longlong)uStack_d8;
    plStack_b0[3] = (longlong)pcStack_d0;
    *plStack_b0 = (longlong)pfStack_e8;
    plStack_b0[1] = (longlong)pcStack_e0;
    return;
  }
  uStack_71 = 1;
  pdb_142dc7fb4(0,&pfStack_e8,&pfStack_a8,0,uVar30,&UNK_14335e370);
LAB_1419a7cf4:
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}

