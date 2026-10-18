// VA 0x140deea90, PDB extent 56 bytes
// utils::geometry::aabb::Aabb2::intersect_ray
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::geometry::aabb::Aabb2::intersect_ray
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
   Extent: 56 */

undefined8 pdb_140deea90(undefined8 *param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar5;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar2;
  
  fVar1 = (float)*param_2;
  auVar6._0_4_ = (float)param_1[1] - fVar1;
  fVar5 = (float)((ulonglong)*param_2 >> 0x20);
  auVar6._4_4_ = (float)((ulonglong)param_1[1] >> 0x20) - fVar5;
  auVar6._8_8_ = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2[1];
  auVar6 = divps(auVar6,auVar3);
  auVar7._0_4_ = (float)*param_1 - fVar1;
  auVar7._4_4_ = (float)((ulonglong)*param_1 >> 0x20) - fVar5;
  auVar7._8_8_ = 0;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_2[1];
  auVar8 = divps(auVar7,auVar8);
  auVar3 = minps(auVar6,auVar8);
  uVar2 = auVar3._0_8_;
  maxps(auVar6,auVar8);
  if (auVar3._0_4_ <= auVar3._4_4_) {
    auVar4._4_12_ = auVar3._4_12_;
    auVar4._0_4_ = auVar3._4_4_;
    uVar2 = auVar4._0_8_;
  }
  return uVar2;
}

