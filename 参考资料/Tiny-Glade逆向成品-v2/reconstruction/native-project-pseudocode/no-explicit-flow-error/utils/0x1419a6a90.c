// VA 0x1419a6a90, PDB extent 1308 bytes
// utils::curve::Curve::slice_into<glam::f32::vec3::Vec3,utils::curve::CurveCoordSemantic3D,alloc::vec::Vec<glam::f32::vec3::Vec3,alloc::alloc::Global> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::Curve::slice_into<glam::f32::vec3::Vec3,utils::curve::CurveCoordSemantic3D,alloc::vec::Vec<glam::f32::vec3::Vec3,alloc::alloc::Global>
   >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 1308 */

void pdb_1419a6a90(longlong param_1,float param_2,undefined8 param_3,longlong *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
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
  float fVar25;
  float fStack_d0;
  float fStack_cc;
  ulonglong uStack_c8;
  float *pfStack_c0;
  code *pcStack_b8;
  float *pfStack_b0;
  code *pcStack_a8;
  ulonglong auStack_a0 [12];
  
  fStack_cc = (float)param_3;
  fStack_d0 = param_2;
  if (fStack_cc <= param_2) {
    pfStack_c0 = &fStack_d0;
    pcStack_b8 = pdb_1419ad2d0;
    pfStack_b0 = &fStack_cc;
    pcStack_a8 = pdb_1419ad2d0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14335e2f8,&pfStack_c0,&UNK_14335e328);
  }
  uVar5 = pdb_1419a9060();
  uVar6 = pdb_1419a9060(param_1,param_3);
  uVar10 = (ulonglong)uVar5;
  uVar3 = *(ulonglong *)(param_1 + 0x10);
  if (uVar3 <= uVar10) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar10,uVar3,&UNK_14335e4e0);
  }
  uVar13 = uVar10 + 1;
  if (uVar3 <= uVar13) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar13,uVar3,&UNK_14335e4f8);
  }
  uVar7 = (ulonglong)uVar6;
  if (uVar3 <= uVar7) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar7,uVar3,&UNK_14335e4e0);
  }
  uVar9 = uVar7 + 1;
  if (uVar3 <= uVar9) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar9,uVar3,&UNK_14335e4f8);
  }
  lVar4 = *(longlong *)(param_1 + 8);
  fVar23 = *(float *)(lVar4 + 8 + uVar13 * 0xc);
  fVar18 = _DAT_142e36f28 - extraout_XMM0_Da;
  uVar1 = *(undefined8 *)(lVar4 + uVar10 * 0xc);
  uVar2 = *(undefined8 *)(lVar4 + uVar13 * 0xc);
  fVar16 = (float)uVar2;
  fVar17 = (float)((ulonglong)uVar2 >> 0x20);
  fVar24 = extraout_XMM0_Da * fVar16 + (float)uVar1 * fVar18;
  fVar25 = extraout_XMM0_Da * fVar17 + (float)((ulonglong)uVar1 >> 0x20) * fVar18;
  fVar22 = extraout_XMM0_Da * fVar23 + fVar18 * *(float *)(lVar4 + 8 + uVar10 * 0xc);
  fVar18 = *(float *)(lVar4 + 8 + uVar7 * 0xc);
  fVar19 = _DAT_142e36f28 - extraout_XMM0_Da_00;
  fVar15 = extraout_XMM0_Da_00 * *(float *)(lVar4 + 8 + uVar9 * 0xc) + fVar19 * fVar18;
  uVar1 = *(undefined8 *)(lVar4 + uVar7 * 0xc);
  uVar2 = *(undefined8 *)(lVar4 + uVar9 * 0xc);
  fVar20 = (float)uVar1;
  fVar21 = (float)((ulonglong)uVar1 >> 0x20);
  uVar10 = uVar10 + 2;
  if (fVar22 != fVar23) {
    uVar10 = uVar13;
  }
  if (NAN(fVar22) || NAN(fVar23)) {
    uVar10 = uVar13;
  }
  fVar23 = extraout_XMM0_Da_00 * (float)uVar2 + fVar19 * fVar20;
  fVar19 = extraout_XMM0_Da_00 * (float)((ulonglong)uVar2 >> 0x20) + fVar19 * fVar21;
  if (fVar25 != fVar17) {
    uVar10 = uVar13;
  }
  if (fVar24 != fVar16) {
    uVar10 = uVar13;
  }
  if (NAN(fVar24) || NAN(fVar16)) {
    uVar10 = uVar13;
  }
  uVar13 = (uVar7 - 1) + (ulonglong)(uVar7 == 0);
  if (fVar15 != fVar18) {
    uVar13 = uVar7;
  }
  if (NAN(fVar15) || NAN(fVar18)) {
    uVar13 = uVar7;
  }
  if (fVar21 != fVar19) {
    uVar13 = uVar7;
  }
  if (fVar23 != fVar20) {
    uVar13 = uVar7;
  }
  if (NAN(fVar23) || NAN(fVar20)) {
    uVar13 = uVar7;
  }
  uVar7 = uVar13 + 1;
  lVar8 = 0;
  if (uVar10 <= uVar7) {
    lVar8 = uVar7 - uVar10;
  }
  uVar9 = lVar8 + 2;
  uStack_c8 = 0;
  lVar8 = *param_4;
  lVar14 = param_4[2];
  auStack_a0[0] = uVar9;
  if ((ulonglong)(lVar8 - lVar14) < uVar9) {
    pdb_142d7f1b0(param_4,lVar14,uVar9,4,0xc);
    lVar8 = *param_4;
    lVar14 = param_4[2];
    if (lVar8 == lVar14) goto LAB_1419a6e44;
  }
  else if (lVar8 == lVar14) {
LAB_1419a6e44:
    pdb_142d7f1b0(param_4,lVar8,1,4,0xc);
    lVar14 = param_4[2];
  }
  lVar8 = param_4[1];
  *(ulonglong *)(lVar8 + lVar14 * 0xc) = CONCAT44(fVar25,fVar24);
  *(float *)(lVar8 + 8 + lVar14 * 0xc) = fVar22;
  lVar14 = lVar14 + 1;
  param_4[2] = lVar14;
  if (uVar13 < uVar10 == uVar10 < uVar13) {
    if (uVar3 <= uVar10) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar10,uVar3,&UNK_14335e358);
    }
    pcStack_b8 = (code *)CONCAT44(pcStack_b8._4_4_,*(undefined4 *)(lVar4 + 8 + uVar10 * 0xc));
    pfStack_c0 = *(float **)(lVar4 + uVar10 * 0xc);
    plVar11 = param_4;
    if (*param_4 == lVar14) goto LAB_1419a6ed5;
    goto LAB_1419a6d3d;
  }
  uVar12 = 2;
  if ((char)((uVar13 < uVar10) - (uVar10 < uVar13)) == '\x01') goto LAB_1419a6d5f;
  plVar11 = param_4;
  if ((uVar13 < uVar3) && (uVar12 = uVar7 - uVar10, uVar13 = uVar7, uVar10 <= uVar7)) {
    fVar22 = fVar15;
    if ((ulonglong)(*param_4 - lVar14) < uVar12) goto LAB_1419a6f25;
    if (uVar7 != uVar10) goto LAB_1419a6cd8;
  }
  else {
    pdb_142dc8420(uVar10,uVar13,uVar3,&UNK_14335e340);
LAB_1419a6f25:
    pdb_142d7f1b0(plVar11,lVar14,uVar12,4,0xc);
    lVar8 = param_4[1];
    lVar14 = param_4[2];
LAB_1419a6cd8:
    pub_142e32760(lVar8 + lVar14 * 0xc,uVar10 * 0xc + lVar4,uVar12 * 0xc);
    lVar14 = lVar14 + uVar12;
    fVar15 = fVar22;
  }
  param_4[2] = lVar14;
  uVar12 = uVar12 + 2;
LAB_1419a6d5f:
  while( true ) {
    uStack_c8 = uVar12;
    if (*param_4 == lVar14) {
      pdb_142d7f1b0(param_4,lVar14,1,4,0xc);
      lVar8 = param_4[1];
      lVar14 = param_4[2];
    }
    *(ulonglong *)(lVar8 + lVar14 * 0xc) = CONCAT44(fVar19,fVar23);
    *(float *)(lVar8 + 8 + lVar14 * 0xc) = fVar15;
    lVar14 = lVar14 + 1;
    param_4[2] = lVar14;
    if (uVar12 == uVar9) break;
    plVar11 = param_4;
    fVar15 = (float)pdb_142dc7fb4(0,&uStack_c8,auStack_a0,0);
LAB_1419a6ed5:
    pdb_142d7f1b0(plVar11,lVar14,1,4,0xc);
    lVar8 = param_4[1];
    lVar14 = param_4[2];
LAB_1419a6d3d:
    *(undefined4 *)(lVar8 + 8 + lVar14 * 0xc) = pcStack_b8._0_4_;
    *(float **)(lVar8 + lVar14 * 0xc) = pfStack_c0;
    lVar14 = lVar14 + 1;
    param_4[2] = lVar14;
    uVar12 = 3;
  }
  return;
}

