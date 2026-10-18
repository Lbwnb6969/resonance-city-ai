// VA 0x140deee20, PDB extent 336 bytes
// utils::geometry::aabb::Aabb3::classify_ray_intersection
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::geometry::aabb::Aabb3::classify_ray_intersection
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
   Extent: 336 */

void pdb_140deee20(undefined4 *param_1,float *param_2,float *param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar7;
  undefined1 auVar6 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  fVar1 = *param_3;
  fVar8 = param_3[3];
  auVar19._0_4_ = param_2[3] - fVar1;
  auVar19._4_4_ = *param_2 - fVar1;
  auVar19._8_8_ = 0;
  auVar14._4_4_ = fVar8;
  auVar14._0_4_ = fVar8;
  auVar14._8_4_ = fVar8;
  auVar14._12_4_ = fVar8;
  auVar6 = divps(auVar19,auVar14);
  fVar7 = auVar6._4_4_;
  fVar5 = auVar6._0_4_;
  fVar8 = fVar5;
  if (fVar7 <= fVar5) {
    fVar8 = fVar7;
  }
  if (fVar5 <= fVar7) {
    auVar6._0_4_ = fVar7;
  }
  fVar11 = (float)*(undefined8 *)(param_2 + 4);
  fVar12 = (float)((ulonglong)*(undefined8 *)(param_2 + 4) >> 0x20);
  fVar9 = (float)*(undefined8 *)(param_3 + 1);
  auVar13._0_4_ = fVar11 - fVar9;
  fVar10 = (float)((ulonglong)*(undefined8 *)(param_3 + 1) >> 0x20);
  auVar13._4_4_ = fVar12 - fVar10;
  auVar13._8_8_ = 0;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = *(ulonglong *)(param_3 + 4);
  auVar14 = divps(auVar13,auVar16);
  fVar5 = (float)*(undefined8 *)(param_2 + 1);
  fVar7 = (float)((ulonglong)*(undefined8 *)(param_2 + 1) >> 0x20);
  auVar18._0_4_ = fVar5 - fVar9;
  auVar18._4_4_ = fVar7 - fVar10;
  auVar18._8_8_ = 0;
  auVar19 = divps(auVar18,auVar16);
  auVar17 = minps(auVar14,auVar19);
  auVar15 = maxps(auVar14,auVar19);
  if (auVar17._0_4_ <= auVar17._4_4_) {
    auVar17._0_4_ = auVar17._4_4_;
  }
  if (fVar8 <= auVar17._0_4_) {
    fVar8 = auVar17._0_4_;
  }
  if (auVar15._4_4_ <= auVar15._0_4_) {
    auVar15._0_4_ = auVar15._4_4_;
  }
  if (auVar15._0_4_ <= auVar6._0_4_) {
    auVar6._0_4_ = auVar15._0_4_;
  }
  uVar2 = 0;
  uVar3 = 0;
  if ((fVar8 <= auVar6._0_4_) &&
     ((uVar4 = 2, 0.0 <= fVar8 ||
      ((((uVar3 = uVar2, CONCAT11(fVar9 < fVar11,fVar1 < param_2[3]) == 0x101 && (fVar10 < fVar12))
        && (CONCAT11(fVar5 < fVar9,*param_2 < fVar1) == 0x101)) && (uVar4 = 1, fVar7 < fVar10))))))
  {
    param_1[1] = fVar8;
    param_1[2] = auVar6._0_4_;
    uVar3 = uVar4;
  }
  *param_1 = uVar3;
  return;
}

