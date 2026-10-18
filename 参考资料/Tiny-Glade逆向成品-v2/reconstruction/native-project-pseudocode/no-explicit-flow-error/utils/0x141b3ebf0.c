// VA 0x141b3ebf0, PDB extent 357 bytes
// utils::geometry::barycentric::barycentric
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/barycentric.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::barycentric::barycentric
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/barycentric.rs
   Extent: 357 */

void pdb_141b3ebf0(float *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar10;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar6 = (float)*param_4;
  fVar17 = (float)((ulonglong)*param_4 >> 0x20);
  fVar12 = (float)((ulonglong)*param_5 >> 0x20);
  fVar15 = (float)*param_5;
  fVar14 = (float)*param_3;
  fVar1 = fVar6 - fVar14;
  fVar2 = fVar15 - fVar14;
  fVar3 = fVar17 - 0.0;
  fVar4 = fVar12 - 0.0;
  fVar16 = (float)((ulonglong)*param_3 >> 0x20);
  fVar18 = (float)*param_2;
  fVar19 = (float)((ulonglong)*param_2 >> 0x20);
  fVar11 = fVar17 - fVar16;
  fVar13 = fVar12 - fVar16;
  fVar5 = *(float *)(param_3 + 1);
  fVar7 = *(float *)(param_4 + 1) - fVar5;
  fVar10 = *(float *)(param_5 + 1) - fVar5;
  fVar15 = (*(float *)(param_2 + 1) - fVar5) * (*(float *)(param_5 + 1) - fVar5) +
           (fVar19 - fVar16) * (fVar12 - fVar16) + (fVar18 - fVar14) * (fVar15 - fVar14);
  fVar17 = (*(float *)(param_4 + 1) - fVar5) * (*(float *)(param_2 + 1) - fVar5) +
           (fVar6 - fVar14) * (fVar18 - fVar14) + (fVar19 - fVar16) * (fVar17 - fVar16);
  fVar5 = fVar10 * fVar7 + fVar13 * fVar11 + fVar2 * fVar1;
  fVar6 = fVar4 * fVar3 + 0.0 + 0.0;
  fVar1 = fVar7 * fVar7 + fVar11 * fVar11 + fVar1 * fVar1;
  fVar2 = fVar10 * fVar10 + fVar13 * fVar13 + fVar2 * fVar2;
  fVar4 = fVar4 * fVar4 + 0.0 + 0.0;
  auVar8._0_4_ = fVar1 * fVar15 - fVar17 * fVar5;
  auVar8._4_4_ = fVar2 * fVar17 - fVar15 * fVar5;
  auVar8._8_4_ = (fVar3 * fVar3 + 0.0 + 0.0) * 0.0 - fVar6 * 0.0;
  auVar8._12_4_ = fVar4 * 0.0 - fVar6 * 0.0;
  fVar5 = fVar2 * fVar1 - fVar5 * fVar5;
  auVar9._4_4_ = fVar5;
  auVar9._0_4_ = fVar5;
  auVar9._8_4_ = fVar4;
  auVar9._12_4_ = fVar4;
  auVar9 = divps(auVar8,auVar9);
  *param_1 = (_DAT_142e36f28 - auVar9._4_4_) - auVar9._0_4_;
  *(ulonglong *)(param_1 + 1) = CONCAT44(auVar9._0_4_,auVar9._4_4_);
  return;
}

