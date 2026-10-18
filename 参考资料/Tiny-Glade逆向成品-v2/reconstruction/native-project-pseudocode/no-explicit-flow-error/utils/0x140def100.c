// VA 0x140def100, PDB extent 44 bytes
// utils::geometry::aabb::Aabb3::scaled
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::geometry::aabb::Aabb3::scaled
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
   Extent: 44 */

float * pdb_140def100(float *param_1,float *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  uVar1 = *(undefined8 *)(param_2 + 4);
  uVar2 = *param_3;
  fVar7 = (float)uVar2;
  uVar3 = *(undefined8 *)((longlong)param_3 + 4);
  fVar8 = (float)((ulonglong)uVar3 >> 0x20);
  *param_1 = fVar7 * *param_2;
  param_1[1] = (float)((ulonglong)uVar2 >> 0x20) * fVar4;
  param_1[2] = fVar8 * fVar5;
  param_1[3] = fVar7 * fVar6;
  *(ulonglong *)(param_1 + 4) =
       CONCAT44((float)((ulonglong)uVar1 >> 0x20) * fVar8,(float)uVar1 * (float)uVar3);
  return param_1;
}

