// VA 0x140df3fa0, PDB extent 40 bytes
// utils::geometry::rectangle::Rectangle3d::rotate_projective_xz
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::geometry::rectangle::Rectangle3d::rotate_projective_xz
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 40 */

void pdb_140df3fa0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar7 = (float)*(undefined8 *)(param_1 + 2);
  fVar8 = (float)((ulonglong)*(undefined8 *)(param_1 + 2) >> 0x20);
  fVar6 = (float)((ulonglong)*(undefined8 *)param_1 >> 0x20);
  fVar5 = (float)*(undefined8 *)param_1;
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  *param_1 = fVar6 * fVar3 + fVar5 * fVar1;
  param_1[1] = fVar6 * fVar4 + fVar5 * fVar2;
  param_1[2] = fVar8 * fVar3 + fVar7 * fVar1;
  param_1[3] = fVar8 * fVar4 + fVar7 * fVar2;
  return;
}

