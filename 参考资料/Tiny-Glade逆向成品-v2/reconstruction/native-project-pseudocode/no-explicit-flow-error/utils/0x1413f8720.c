// VA 0x1413f8720, PDB extent 1094 bytes
// utils::curve::Curve::slice_into<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D,alloc::vec::Vec<glam::f32::vec2::Vec2,alloc::alloc::Global> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::Curve::slice_into<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D,alloc::vec::Vec<glam::f32::vec2::Vec2,alloc::alloc::Global>
   >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 1094 */

void pdb_1413f8720(longlong param_1,float param_2,float param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  float *pfVar16;
  longlong lVar17;
  float *pfVar18;
  ulonglong uVar19;
  longlong lVar20;
  float *pfVar21;
  ulonglong uVar22;
  float *pfVar23;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fStack_98;
  float fStack_94;
  float *pfStack_90;
  float *pfStack_88;
  code *pcStack_80;
  float *pfStack_78;
  code *pcStack_70;
  
  fStack_98 = param_2;
  fStack_94 = param_3;
  if (param_3 <= param_2) {
    pfStack_88 = &fStack_98;
    pcStack_80 = pdb_1413fb750;
    pfStack_78 = &fStack_94;
    pcStack_70 = pdb_1413fb750;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14330647b,&pfStack_88,&UNK_1433064a8);
  }
  uVar12 = pdb_1413f9030();
  uVar13 = pdb_1413f9030(param_1,param_3);
  uVar7 = *(ulonglong *)(param_1 + 0x10);
  uVar19 = (ulonglong)uVar12;
  if (uVar7 <= uVar19) goto LAB_1413f8b0e;
  uVar22 = uVar19 + 1;
  if (uVar7 <= uVar22) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar22,uVar7,&UNK_143306620);
  }
  uVar15 = (ulonglong)uVar13;
  if (uVar7 <= uVar15) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar15,uVar7,&UNK_143306608);
  }
  if (uVar7 <= uVar15 + 1) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar15 + 1,uVar7,&UNK_143306620);
  }
  lVar8 = *(longlong *)(param_1 + 8);
  uVar5 = *(undefined8 *)(lVar8 + uVar19 * 8);
  uVar6 = *(undefined8 *)(lVar8 + 8 + uVar19 * 8);
  fVar26 = (float)uVar6;
  fVar27 = (float)((ulonglong)uVar6 >> 0x20);
  fVar30 = extraout_XMM0_Da * fVar26 + (_DAT_142e36f28 - extraout_XMM0_Da) * (float)uVar5;
  fVar31 = extraout_XMM0_Da * fVar27 +
           (_DAT_142e36f28 - extraout_XMM0_Da) * (float)((ulonglong)uVar5 >> 0x20);
  uVar5 = *(undefined8 *)(lVar8 + uVar15 * 8);
  fVar24 = (float)uVar5;
  fVar25 = (float)((ulonglong)uVar5 >> 0x20);
  uVar5 = *(undefined8 *)(lVar8 + 8 + uVar15 * 8);
  fVar28 = extraout_XMM0_Da_00 * (float)uVar5 + (_DAT_142e36f28 - extraout_XMM0_Da_00) * fVar24;
  fVar29 = extraout_XMM0_Da_00 * (float)((ulonglong)uVar5 >> 0x20) +
           (_DAT_142e36f28 - extraout_XMM0_Da_00) * fVar25;
  uVar19 = uVar19 + 2;
  if (fVar31 != fVar27) {
    uVar19 = uVar22;
  }
  if (fVar30 != fVar26) {
    uVar19 = uVar22;
  }
  if (NAN(fVar30) || NAN(fVar26)) {
    uVar19 = uVar22;
  }
  uVar22 = (uVar15 - 1) + (ulonglong)(uVar15 == 0);
  if (fVar25 != fVar29) {
    uVar22 = uVar15;
  }
  if (fVar28 != fVar24) {
    uVar22 = uVar15;
  }
  if (NAN(fVar28) || NAN(fVar24)) {
    uVar22 = uVar15;
  }
  uVar15 = uVar22 + 1;
  lVar14 = 0;
  if (uVar19 <= uVar15) {
    lVar14 = uVar15 - uVar19;
  }
  pfVar18 = (float *)(lVar14 + 2);
  lVar14 = *param_4;
  lVar17 = param_4[2];
  pfStack_90 = pfVar18;
  if ((float *)(lVar14 - lVar17) < pfVar18) {
    pdb_142d7f1b0(param_4,lVar17,pfVar18,4,8);
    lVar14 = *param_4;
    lVar17 = param_4[2];
    if (lVar14 == lVar17) goto LAB_1413f897b;
  }
  else if (lVar14 == lVar17) {
LAB_1413f897b:
    pdb_142d7f1b0(param_4,lVar14,1,4,8);
    lVar17 = param_4[2];
  }
  lVar14 = param_4[1];
  *(ulonglong *)(lVar14 + lVar17 * 8) = CONCAT44(fVar31,fVar30);
  lVar17 = lVar17 + 1;
  param_4[2] = lVar17;
  if (uVar22 < uVar19 == uVar19 < uVar22) {
    if (uVar7 <= uVar19) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar19,uVar7,&UNK_1433064d8);
    }
    uVar5 = *(undefined8 *)(lVar8 + uVar19 * 8);
    if (*param_4 == lVar17) {
      pdb_142d7f1b0(param_4,lVar17,1,4,8);
      lVar14 = param_4[1];
      lVar17 = param_4[2];
    }
    *(undefined8 *)(lVar14 + lVar17 * 8) = uVar5;
    lVar17 = lVar17 + 1;
    param_4[2] = lVar17;
    pfVar23 = (float *)0x3;
  }
  else {
    pfVar23 = (float *)0x2;
    if ((char)((uVar22 < uVar19) - (uVar19 < uVar22)) != '\x01') {
      if ((uVar22 < uVar7) &&
         (pfVar23 = (float *)(uVar15 - uVar19), uVar22 = uVar15, uVar19 <= uVar15)) {
        if ((float *)(*param_4 - lVar17) < pfVar23) goto LAB_1413f89e6;
        if (uVar15 == uVar19) goto LAB_1413f8a87;
        if ((float *)0x3 < pfVar23) goto LAB_1413f8a12;
LAB_1413f88de:
        pfVar16 = (float *)0x0;
LAB_1413f8a64:
        uVar19 = uVar19 + (longlong)pfVar16;
        do {
          *(undefined8 *)(lVar14 + lVar17 * 8) = *(undefined8 *)(lVar8 + uVar19 * 8);
          lVar17 = lVar17 + 1;
          uVar19 = uVar19 + 1;
        } while (uVar15 != uVar19);
      }
      else {
        pdb_142dc8420(uVar19,uVar22,uVar7,&UNK_1433064c0);
LAB_1413f89e6:
        pdb_142d7f1b0();
        lVar14 = param_4[1];
        lVar17 = param_4[2];
        if (pfVar23 < (float *)0x4) goto LAB_1413f88de;
LAB_1413f8a12:
        pfVar16 = (float *)((ulonglong)pfVar23 & 0x1fffffffc);
        lVar20 = uVar19 * 8 + 0x10 + lVar8;
        lVar1 = lVar14 + lVar17 * 8;
        lVar17 = lVar17 + (longlong)pfVar16;
        pfVar21 = (float *)0x0;
        do {
          puVar3 = (undefined4 *)(lVar20 + -0x10 + (longlong)pfVar21 * 8);
          uVar9 = puVar3[1];
          uVar10 = puVar3[2];
          uVar11 = puVar3[3];
          puVar2 = (undefined8 *)(lVar20 + (longlong)pfVar21 * 8);
          uVar5 = *puVar2;
          uVar6 = puVar2[1];
          puVar4 = (undefined4 *)(lVar1 + (longlong)pfVar21 * 8);
          *puVar4 = *puVar3;
          puVar4[1] = uVar9;
          puVar4[2] = uVar10;
          puVar4[3] = uVar11;
          puVar2 = (undefined8 *)(lVar1 + 0x10 + (longlong)pfVar21 * 8);
          *puVar2 = uVar5;
          puVar2[1] = uVar6;
          pfVar21 = pfVar21 + 1;
        } while (pfVar16 != pfVar21);
        if (pfVar23 != pfVar16) goto LAB_1413f8a64;
      }
LAB_1413f8a87:
      param_4[2] = lVar17;
      pfVar23 = (float *)((longlong)pfVar23 + 2);
    }
  }
  pfStack_88 = pfVar23;
  if (*param_4 == lVar17) {
    pdb_142d7f1b0(param_4,lVar17,1,4,8);
    lVar14 = param_4[1];
    lVar17 = param_4[2];
  }
  *(ulonglong *)(lVar14 + lVar17 * 8) = CONCAT44(fVar29,fVar28);
  param_4[2] = lVar17 + 1;
  if (pfVar23 == pfVar18) {
    return;
  }
  pdb_142dc7fb4(0,&pfStack_88,&pfStack_90,0);
LAB_1413f8b0e:
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(uVar19,uVar7,&UNK_143306608);
}

