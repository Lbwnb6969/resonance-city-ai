// VA 0x140deed50, PDB extent 70 bytes
// utils::geometry::aabb::Aabb3::expand_to_contain_point
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::geometry::aabb::Aabb3::expand_to_contain_point
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
   Extent: 70 */

void pdb_140deed50(float *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar9;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  fVar5 = (float)(*(ulonglong *)((longlong)param_2 + 4) >> 0x20);
  fVar6 = (float)*param_2;
  fVar9 = (float)((ulonglong)*param_2 >> 0x20);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = *(ulonglong *)(param_1 + 4);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = *(ulonglong *)((longlong)param_2 + 4);
  auVar8 = maxps(auVar7,auVar8);
  uVar1 = -(uint)(*param_1 < fVar6);
  uVar2 = -(uint)(param_1[1] < fVar9);
  uVar3 = -(uint)(param_1[2] < fVar5);
  uVar4 = -(uint)(fVar6 < param_1[3]);
  *param_1 = (float)(~uVar1 & (uint)fVar6 | (uint)*param_1 & uVar1);
  param_1[1] = (float)(~uVar2 & (uint)fVar9 | (uint)param_1[1] & uVar2);
  param_1[2] = (float)(~uVar3 & (uint)fVar5 | (uint)param_1[2] & uVar3);
  param_1[3] = (float)(~uVar4 & (uint)fVar6 | (uint)param_1[3] & uVar4);
  *(longlong *)(param_1 + 4) = auVar8._0_8_;
  return;
}

