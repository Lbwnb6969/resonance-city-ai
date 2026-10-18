// VA 0x140df3450, PDB extent 88 bytes
// utils::geometry::rectangle::Rectangle2d::aabb
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::rectangle::Rectangle2d::aabb
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 88 */

float * pdb_140df3450(float *param_1,uint *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (float)*(undefined8 *)(param_2 + 4) * _DAT_142e36f60;
  fVar3 = (float)((ulonglong)*(undefined8 *)(param_2 + 4) >> 0x20) * _UNK_142e36f64;
  fVar1 = (float)(*param_2 & _DAT_142e377e0) * fVar2 + (float)(param_2[1] & _DAT_142e377e0) * fVar3;
  fVar2 = (float)(*param_2 & _DAT_142e377e0) * fVar3 + (float)(param_2[1] & _UNK_142e377e4) * fVar2;
  fVar3 = (float)*(undefined8 *)(param_2 + 2);
  fVar4 = (float)((ulonglong)*(undefined8 *)(param_2 + 2) >> 0x20);
  *param_1 = fVar3 - fVar1;
  param_1[1] = fVar4 - fVar2;
  param_1[2] = fVar3 + fVar1;
  param_1[3] = fVar4 + fVar2;
  return param_1;
}

