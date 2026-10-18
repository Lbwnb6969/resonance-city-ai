// VA 0x140dee740, PDB extent 264 bytes
// utils::geometry::aabb::intersection_aabb_segment2
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::aabb::intersection_aabb_segment2
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
   Extent: 264 */

void pdb_140dee740(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  float param_5,float param_6,float param_7,float param_8,float param_9)

{
  undefined4 uVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  param_8 = param_8 - param_6;
  param_9 = param_9 - param_7;
  auVar4._0_4_ = (float)param_4 - param_6;
  auVar4._4_4_ = param_5 - param_7;
  auVar4._8_4_ = (float)((ulonglong)param_4 >> 0x20) - 0.0;
  auVar4._12_4_ = 0;
  auVar7._0_4_ = (float)param_2 - param_6;
  auVar7._4_4_ = (float)param_3 - param_7;
  auVar7._8_4_ = (float)((ulonglong)param_2 >> 0x20) - 0.0;
  auVar7._12_4_ = (float)((ulonglong)param_3 >> 0x20) - 0.0;
  auVar5._4_4_ = param_9;
  auVar5._0_4_ = param_8;
  auVar5._8_8_ = 0;
  auVar5 = divps(auVar4,auVar5);
  auVar8._4_4_ = param_9;
  auVar8._0_4_ = param_8;
  auVar8._8_8_ = 0;
  auVar8 = divps(auVar7,auVar8);
  auVar3 = minps(auVar5,auVar8);
  auVar6 = maxps(auVar5,auVar8);
  if (auVar3._0_4_ <= auVar3._4_4_) {
    auVar3._0_4_ = auVar3._4_4_;
  }
  if (auVar6._4_4_ <= auVar6._0_4_) {
    auVar6._0_4_ = auVar6._4_4_;
  }
  uVar1 = 0;
  fVar2 = auVar3._0_4_;
  if ((fVar2 <= auVar6._0_4_) && (fVar2 <= _DAT_142e36f28)) {
    if (0.0 <= fVar2) {
      param_6 = param_6 + param_8 * fVar2;
      param_7 = param_7 + param_9 * fVar2;
    }
    else if (((((float)param_4 <= param_6) || (param_5 <= param_7)) || (param_6 <= (float)param_2))
            || (param_7 <= (float)param_3)) goto LAB_140dee826;
    *(ulonglong *)(param_1 + 1) = CONCAT44(param_7,param_6);
    uVar1 = 1;
  }
LAB_140dee826:
  *param_1 = uVar1;
  return;
}

