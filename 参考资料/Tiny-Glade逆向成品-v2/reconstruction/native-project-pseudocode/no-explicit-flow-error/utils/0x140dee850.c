// VA 0x140dee850, PDB extent 473 bytes
// utils::geometry::aabb::intersection_aabb_segment3
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::aabb::intersection_aabb_segment3
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
   Extent: 473 */

void pdb_140dee850(undefined4 *param_1,float *param_2,float *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uVar4;
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
  undefined1 auVar15 [16];
  float fVar16;
  float fVar18;
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  fVar1 = *(float *)(param_4 + 1);
  fVar5 = (float)*param_4;
  fVar9 = (float)*param_5 - fVar5;
  fVar6 = (float)((ulonglong)*param_4 >> 0x20);
  fVar10 = (float)((ulonglong)*param_5 >> 0x20) - fVar6;
  fVar11 = *(float *)(param_5 + 1) - fVar1;
  auVar23._0_4_ = *param_3 - fVar5;
  auVar23._4_4_ = *param_2 - fVar5;
  auVar23._8_8_ = 0;
  auVar20._4_4_ = fVar9;
  auVar20._0_4_ = fVar9;
  auVar20._8_8_ = 0;
  auVar15 = divps(auVar23,auVar20);
  fVar8 = auVar15._4_4_;
  fVar7 = auVar15._0_4_;
  fVar14 = fVar7;
  if (fVar8 <= fVar7) {
    fVar14 = fVar8;
  }
  if (fVar7 <= fVar8) {
    auVar15._0_4_ = fVar8;
  }
  fVar12 = (float)*(undefined8 *)(param_3 + 1);
  fVar13 = (float)((ulonglong)*(undefined8 *)(param_3 + 1) >> 0x20);
  fVar16 = (float)*(undefined8 *)((longlong)param_4 + 4);
  auVar19._0_4_ = fVar12 - fVar16;
  fVar18 = (float)((ulonglong)*(undefined8 *)((longlong)param_4 + 4) >> 0x20);
  auVar19._4_4_ = fVar13 - fVar18;
  auVar19._8_8_ = 0;
  auVar2._4_4_ = fVar11;
  auVar2._0_4_ = fVar10;
  auVar2._8_8_ = 0;
  auVar20 = divps(auVar19,auVar2);
  fVar7 = (float)*(undefined8 *)(param_2 + 1);
  fVar8 = (float)((ulonglong)*(undefined8 *)(param_2 + 1) >> 0x20);
  auVar22._0_4_ = fVar7 - fVar16;
  auVar22._4_4_ = fVar8 - fVar18;
  auVar22._8_8_ = 0;
  auVar3._4_4_ = fVar11;
  auVar3._0_4_ = fVar10;
  auVar3._8_8_ = 0;
  auVar23 = divps(auVar22,auVar3);
  auVar17 = minps(auVar20,auVar23);
  auVar21 = maxps(auVar20,auVar23);
  if (auVar17._0_4_ <= auVar17._4_4_) {
    auVar17._0_4_ = auVar17._4_4_;
  }
  if (fVar14 <= auVar17._0_4_) {
    fVar14 = auVar17._0_4_;
  }
  if (auVar21._4_4_ <= auVar21._0_4_) {
    auVar21._0_4_ = auVar21._4_4_;
  }
  if (auVar21._0_4_ <= auVar15._0_4_) {
    auVar15._0_4_ = auVar21._0_4_;
  }
  uVar4 = 0;
  if ((fVar14 <= auVar15._0_4_) && (fVar14 <= _DAT_142e36f28)) {
    if (0.0 <= fVar14) {
      *(ulonglong *)(param_1 + 1) = CONCAT44(fVar6 + fVar10 * fVar14,fVar5 + fVar9 * fVar14);
      param_1[3] = fVar1 + fVar11 * fVar14;
    }
    else {
      if ((((CONCAT11(fVar6 < fVar12,fVar5 < *param_3) != 0x101) || (fVar13 <= fVar1)) ||
          (CONCAT11(fVar7 < fVar6,*param_2 < fVar5) != 0x101)) || (fVar1 <= fVar8))
      goto LAB_140dee9f2;
      param_1[3] = *(undefined4 *)(param_4 + 1);
      *(undefined8 *)(param_1 + 1) = *param_4;
    }
    uVar4 = 1;
  }
LAB_140dee9f2:
  *param_1 = uVar4;
  return;
}

