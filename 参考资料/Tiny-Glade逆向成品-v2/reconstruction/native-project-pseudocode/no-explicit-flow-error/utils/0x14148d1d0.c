// VA 0x14148d1d0, PDB extent 1473 bytes
// utils::curve::Curve::try_slice<glam::f32::vec3::Vec3,utils::curve::CurveCoordSemantic3D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::Curve::try_slice<glam::f32::vec3::Vec3,utils::curve::CurveCoordSemantic3D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 1473 */

undefined8 pdb_14148d1d0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  longlong lStack_108;
  undefined8 uStack_100;
  ulonglong uStack_f8;
  float *pfStack_f0;
  code *pcStack_e8;
  float *pfStack_e0;
  code *pcStack_d8;
  longlong lStack_d0;
  float fStack_c8;
  float fStack_c4;
  longlong lStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  undefined1 uStack_a1;
  undefined8 uStack_a0;
  
  fStack_c8 = (float)param_4;
  fStack_c4 = (float)param_3;
  uStack_a0 = 0xfffffffffffffffe;
  lStack_c0 = 0;
  lStack_b8 = 4;
  lStack_b0 = 0;
  if (fStack_c8 <= fStack_c4) {
    pfStack_f0 = &fStack_c4;
    pcStack_e8 = pdb_14148d9b0;
    pfStack_e0 = &fStack_c8;
    pcStack_d8 = pdb_14148d9b0;
    uStack_a1 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14330d56d,&pfStack_f0,&UNK_14330d5b8);
  }
  uStack_a1 = 1;
  uVar6 = pdb_14148c300(param_2,param_3);
  uStack_a1 = 1;
  uVar7 = pdb_14148c300(param_2,param_4);
  uVar9 = (ulonglong)uVar6;
  uVar3 = *(ulonglong *)(param_2 + 0x10);
  if (uVar3 <= uVar9) {
    uStack_a1 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar9,uVar3,&UNK_14330d718);
  }
  uVar12 = uVar9 + 1;
  if (uVar3 <= uVar12) {
    uStack_a1 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar12,uVar3,&UNK_14330d730);
  }
  uVar11 = (ulonglong)uVar7;
  if (uVar3 <= uVar11) {
    uStack_a1 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar11,uVar3,&UNK_14330d718);
  }
  uVar1 = uVar11 + 1;
  if (uVar3 <= uVar1) {
    uStack_a1 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar1,uVar3,&UNK_14330d730);
  }
  lVar4 = *(longlong *)(param_2 + 8);
  fVar22 = *(float *)(lVar4 + 8 + uVar12 * 0xc);
  fVar16 = _DAT_142e36f28 - extraout_XMM0_Da;
  uVar25 = *(undefined8 *)(lVar4 + uVar9 * 0xc);
  uVar2 = *(undefined8 *)(lVar4 + uVar12 * 0xc);
  fVar14 = (float)uVar2;
  fVar15 = (float)((ulonglong)uVar2 >> 0x20);
  fVar23 = extraout_XMM0_Da * fVar14 + (float)uVar25 * fVar16;
  fVar24 = extraout_XMM0_Da * fVar15 + (float)((ulonglong)uVar25 >> 0x20) * fVar16;
  fVar20 = extraout_XMM0_Da * fVar22 + fVar16 * *(float *)(lVar4 + 8 + uVar9 * 0xc);
  fVar16 = *(float *)(lVar4 + 8 + uVar11 * 0xc);
  fVar17 = _DAT_142e36f28 - extraout_XMM0_Da_00;
  fVar21 = *(float *)(lVar4 + 8 + uVar1 * 0xc) * extraout_XMM0_Da_00 + fVar17 * fVar16;
  uVar25 = *(undefined8 *)(lVar4 + uVar11 * 0xc);
  uVar2 = *(undefined8 *)(lVar4 + uVar1 * 0xc);
  fVar18 = (float)uVar25;
  fVar19 = (float)((ulonglong)uVar25 >> 0x20);
  uVar9 = uVar9 + 2;
  if (fVar20 != fVar22) {
    uVar9 = uVar12;
  }
  if (NAN(fVar20) || NAN(fVar22)) {
    uVar9 = uVar12;
  }
  fVar22 = extraout_XMM0_Da_00 * (float)uVar2 + fVar17 * fVar18;
  fVar17 = extraout_XMM0_Da_00 * (float)((ulonglong)uVar2 >> 0x20) + fVar17 * fVar19;
  if (fVar24 != fVar15) {
    uVar9 = uVar12;
  }
  if (fVar23 != fVar14) {
    uVar9 = uVar12;
  }
  if (NAN(fVar23) || NAN(fVar14)) {
    uVar9 = uVar12;
  }
  uVar12 = (uVar11 - 1) + (ulonglong)(uVar11 == 0);
  if (fVar21 != fVar16) {
    uVar12 = uVar11;
  }
  if (NAN(fVar21) || NAN(fVar16)) {
    uVar12 = uVar11;
  }
  if (fVar19 != fVar17) {
    uVar12 = uVar11;
  }
  if (fVar22 != fVar18) {
    uVar12 = uVar11;
  }
  if (NAN(fVar22) || NAN(fVar18)) {
    uVar12 = uVar11;
  }
  uStack_f8 = uVar12 + 1;
  lVar8 = uStack_f8 - uVar9;
  if (uStack_f8 < uVar9) {
    lVar8 = 0;
  }
  lVar8 = lVar8 + 2;
  lStack_d0 = 0;
  uStack_a1 = 1;
  uVar25 = 0xc;
  lStack_108 = lVar8;
  pdb_142d7f1b0(&lStack_c0,0,lVar8,4,0xc);
  uStack_100 = param_1;
  if (lStack_c0 == lStack_b0) {
    uStack_a1 = 1;
    uVar25 = 0xc;
    pdb_142d7f1b0(&lStack_c0,lStack_b0,1,4,0xc);
  }
  *(ulonglong *)(lStack_b8 + lStack_b0 * 0xc) = CONCAT44(fVar24,fVar23);
  *(float *)(lStack_b8 + 8 + lStack_b0 * 0xc) = fVar20;
  lStack_b0 = lStack_b0 + 1;
  if (uVar12 < uVar9 == uVar9 < uVar12) {
    if (uVar3 <= uVar9) {
      uStack_a1 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar9,uVar3,&UNK_14330d5e8);
    }
    pcStack_e8 = (code *)CONCAT44(pcStack_e8._4_4_,*(undefined4 *)(lVar4 + 8 + uVar9 * 0xc));
    pfStack_f0 = *(float **)(lVar4 + uVar9 * 0xc);
    if (lStack_c0 == lStack_b0) {
      uStack_a1 = 1;
      uVar25 = 0xc;
      pdb_142d7f1b0(&lStack_c0,lStack_b0,1,4,0xc);
    }
    *(undefined4 *)(lStack_b8 + 8 + lStack_b0 * 0xc) = pcStack_e8._0_4_;
    *(float **)(lStack_b8 + lStack_b0 * 0xc) = pfStack_f0;
    lStack_b0 = lStack_b0 + 1;
    lVar10 = 3;
    lVar13 = lStack_b8;
  }
  else {
    lVar10 = 2;
    lVar13 = lStack_b8;
    if ((char)((uVar12 < uVar9) - (uVar9 < uVar12)) != '\x01') {
      if ((uVar3 <= uVar12) || (uVar11 = uStack_f8 - uVar9, uVar12 = uStack_f8, uStack_f8 < uVar9))
      {
        uStack_a1 = 1;
        pdb_142dc8420(uVar9,uVar12,uVar3,&UNK_14330d5d0);
        goto LAB_14148d6fc;
      }
      if ((ulonglong)(lStack_c0 - lStack_b0) < uVar11) {
        uStack_a1 = 1;
        uVar25 = 0xc;
        pdb_142d7f1b0(&lStack_c0,lStack_b0,uVar11,4,0xc);
LAB_14148d44f:
        lVar10 = lStack_b0;
        lVar13 = lStack_b8;
        pub_142e32760(lStack_b8 + lStack_b0 * 0xc,lVar4 + uVar9 * 0xc,uVar11 * 0xc);
        lStack_b0 = lVar10 + uVar11;
      }
      else if (uStack_f8 != uVar9) goto LAB_14148d44f;
      lVar10 = uVar11 + 2;
    }
  }
  lStack_d0 = lVar10;
  if (lStack_c0 == lStack_b0) {
    uStack_a1 = 1;
    uVar25 = 0xc;
    pdb_142d7f1b0(&lStack_c0,lStack_b0,1,4,0xc);
    lVar13 = lStack_b8;
  }
  uVar2 = uStack_100;
  *(ulonglong *)(lVar13 + lStack_b0 * 0xc) = CONCAT44(fVar17,fVar22);
  *(float *)(lVar13 + 8 + lStack_b0 * 0xc) = fVar21;
  lStack_b0 = lStack_b0 + 1;
  if (lVar10 == lVar8) {
    uStack_a1 = 0;
    pdb_140080930(uStack_100,&lStack_c0,0);
    return uVar2;
  }
  uStack_a1 = 1;
  pdb_142dc7fb4(0,&lStack_d0,&lStack_108,0,uVar25,&UNK_14330d600);
LAB_14148d6fc:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}

