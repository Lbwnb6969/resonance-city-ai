// VA 0x1414ce0c0, PDB extent 220 bytes
// utils::geometry::plane::Plane::intersect_ray
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/plane.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::geometry::plane::Plane::intersect_ray
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/plane.rs
   Extent: 220 */

void pdb_1414ce0c0(uint *param_1,float *param_2,undefined8 *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *(float *)(param_3 + 1);
  fVar4 = (float)((ulonglong)*param_3 >> 0x20);
  fVar2 = *(float *)((longlong)param_3 + 0x14);
  fVar3 = (float)*param_3;
  fVar7 = (float)*(undefined8 *)((longlong)param_3 + 0xc);
  fVar8 = (float)((ulonglong)*(undefined8 *)((longlong)param_3 + 0xc) >> 0x20);
  fVar5 = (float)*(undefined8 *)(param_2 + 3);
  fVar6 = (float)((ulonglong)*(undefined8 *)(param_2 + 3) >> 0x20);
  fVar5 = (param_2[5] * (param_2[2] - fVar1) +
          (*param_2 - fVar3) * fVar5 + fVar6 * (param_2[1] - fVar4)) /
          (param_2[5] * fVar2 + fVar8 * fVar6 + fVar5 * fVar7);
  if (param_4 <= fVar5) {
    param_1[1] = (uint)fVar5;
    *(ulonglong *)(param_1 + 2) = CONCAT44(fVar4 + fVar8 * fVar5,fVar3 + fVar7 * fVar5);
    param_1[4] = (uint)(fVar1 + fVar2 * fVar5);
  }
  *param_1 = (uint)(param_4 <= fVar5);
  return;
}

