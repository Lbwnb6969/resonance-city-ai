// VA 0x1408697c0, PDB extent 395 bytes
// utils::components::transform::Transform::compute_affine
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/components/transform.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::components::transform::Transform::compute_affine
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/components/transform.rs
   Extent: 395 */

void pdb_1408697c0(float *param_1,float *param_2)

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
  
  fVar8 = (float)*(undefined8 *)(param_2 + 8);
  fVar9 = (float)((ulonglong)*(undefined8 *)(param_2 + 8) >> 0x20);
  fVar2 = *param_2;
  fVar3 = param_2[1];
  fVar4 = param_2[3];
  fVar5 = param_2[4];
  fVar6 = param_2[5];
  fVar7 = param_2[6];
  fVar1 = param_2[2];
  fVar11 = fVar3 + fVar3;
  fVar13 = fVar2 * (fVar2 + fVar2);
  fVar16 = fVar1 + fVar1;
  fVar17 = fVar2 * fVar16 - fVar11 * fVar4;
  fVar14 = _UNK_142e378e4 - (fVar13 + fVar1 * fVar16);
  fVar10 = (fVar2 + fVar2) * fVar4;
  fVar12 = fVar3 * fVar16 + fVar10;
  fVar15 = _UNK_142e378e4 - (fVar13 + fVar3 * fVar11);
  fVar13 = param_2[7];
  *param_1 = fVar13 * (_DAT_142e36f28 - (fVar1 * fVar16 + fVar3 * fVar11));
  param_1[1] = fVar13 * (fVar2 * fVar11 + fVar16 * fVar4);
  param_1[2] = fVar13 * fVar17;
  param_1[3] = fVar13 * fVar17;
  param_1[4] = fVar8 * (fVar2 * fVar11 - fVar16 * fVar4);
  param_1[5] = fVar8 * fVar14;
  param_1[6] = fVar8 * fVar12;
  param_1[7] = fVar8 * fVar12;
  param_1[8] = fVar9 * (fVar2 * fVar16 + fVar11 * fVar4);
  param_1[9] = fVar9 * (fVar3 * fVar16 - fVar10);
  param_1[10] = fVar9 * fVar15;
  param_1[0xb] = fVar9 * fVar15;
  param_1[0xc] = fVar5;
  param_1[0xd] = fVar6;
  param_1[0xe] = fVar7;
  param_1[0xf] = fVar7;
  return;
}

