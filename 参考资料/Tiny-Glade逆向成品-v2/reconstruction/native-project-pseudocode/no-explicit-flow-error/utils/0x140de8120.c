// VA 0x140de8120, PDB extent 241 bytes
// utils::IsoTransform::nested_in
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::IsoTransform::nested_in
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 241 */

float * pdb_140de8120(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
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
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  
  fVar1 = param_3[4];
  fVar2 = param_3[5];
  fVar3 = param_3[6];
  fVar4 = param_3[7];
  fVar20 = fVar3 * fVar3;
  fVar21 = fVar4 * fVar4;
  fVar23 = fVar2 * fVar2 + fVar1 * fVar1;
  fVar5 = *param_2;
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  fVar8 = param_2[3];
  fVar9 = param_2[4];
  fVar10 = param_2[5];
  fVar11 = param_2[6];
  fVar12 = param_2[7];
  fVar24 = fVar3 * fVar7 + fVar2 * fVar6 + fVar1 * fVar5;
  fVar24 = fVar24 + fVar24;
  fVar29 = fVar1 * fVar6 - fVar5 * fVar2;
  fVar22 = fVar4 + fVar4;
  fVar13 = param_3[1];
  fVar14 = param_3[2];
  fVar15 = param_3[3];
  fVar30 = fVar12 * fVar1 * _DAT_142e377b0;
  fVar31 = fVar11 * fVar1 * _UNK_142e377b4;
  fVar32 = fVar10 * fVar1 * _UNK_142e377b8;
  fVar33 = fVar9 * fVar1 * _UNK_142e377bc;
  fVar25 = fVar11 * fVar2 * _DAT_142e377c0;
  fVar26 = fVar12 * fVar2 * _UNK_142e377c4;
  fVar27 = fVar9 * fVar2 * _UNK_142e377c8;
  fVar28 = fVar10 * fVar2 * _UNK_142e377cc;
  fVar16 = fVar10 * fVar3 * _DAT_142e377d0;
  fVar17 = fVar9 * fVar3 * _UNK_142e377d4;
  fVar18 = fVar12 * fVar3 * _UNK_142e377d8;
  fVar19 = fVar11 * fVar3 * _UNK_142e377dc;
  *param_1 = fVar22 * (fVar2 * fVar7 - fVar6 * fVar3) +
             fVar24 * fVar1 + (fVar21 - (fVar23 + fVar20)) * fVar5 + *param_3;
  param_1[1] = fVar22 * (fVar3 * fVar5 - fVar7 * fVar1) +
               fVar24 * fVar2 + (fVar21 - (fVar23 + fVar20)) * fVar6 + fVar13;
  param_1[2] = fVar22 * fVar29 + fVar24 * fVar3 + (fVar21 - (fVar23 + fVar20)) * fVar7 + fVar14;
  param_1[3] = fVar22 * fVar29 + fVar24 * fVar4 + (fVar21 - (fVar23 + fVar20)) * fVar8 + fVar15;
  param_1[4] = fVar16 + fVar25 + fVar30 + fVar4 * fVar9;
  param_1[5] = fVar17 + fVar26 + fVar31 + fVar4 * fVar10;
  param_1[6] = fVar18 + fVar27 + fVar32 + fVar4 * fVar11;
  param_1[7] = fVar19 + fVar28 + fVar33 + fVar4 * fVar12;
  return param_1;
}

