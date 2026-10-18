// VA 0x140def070, PDB extent 82 bytes
// utils::geometry::aabb::Aabb3::expand
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::aabb::Aabb3::expand
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
   Extent: 82 */

void pdb_140def070(undefined8 *param_1,float *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = (float)*param_3;
  fVar3 = (float)((ulonglong)*param_3 >> 0x20) * _UNK_142e36f44;
  fVar4 = *(float *)(param_3 + 1) * _UNK_142e36f48;
  fVar5 = fVar2 * _UNK_142e36f4c;
  *param_2 = *param_2 - fVar2 * _DAT_142e36f40;
  param_2[1] = param_2[1] - fVar3;
  param_2[2] = param_2[2] - fVar4;
  param_2[3] = param_2[3] + fVar5;
  *(ulonglong *)(param_2 + 4) =
       CONCAT44(fVar4 + (float)((ulonglong)*(undefined8 *)(param_2 + 4) >> 0x20),
                fVar3 + (float)*(undefined8 *)(param_2 + 4));
  param_1[2] = *(undefined8 *)(param_2 + 4);
  uVar1 = *(undefined8 *)(param_2 + 2);
  *param_1 = *(undefined8 *)param_2;
  param_1[1] = uVar1;
  return;
}

