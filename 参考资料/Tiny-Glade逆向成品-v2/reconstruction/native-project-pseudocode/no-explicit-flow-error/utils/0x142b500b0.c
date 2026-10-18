// VA 0x142b500b0, PDB extent 256 bytes
// utils::geometry::line_relation::LineInterval::relate
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/line_relation.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::geometry::line_relation::LineInterval::relate
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/line_relation.rs
   Extent: 256 */

void pdb_142b500b0(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar9 [16];
  
  fVar12 = (float)*param_2;
  fVar5 = (float)param_2[1] - fVar12;
  fVar4 = (float)((ulonglong)*param_2 >> 0x20);
  fVar6 = (float)((ulonglong)param_2[1] >> 0x20) - fVar4;
  fVar11 = (float)*param_3;
  fVar14 = (float)param_3[1] - fVar11;
  fVar13 = (float)((ulonglong)*param_3 >> 0x20);
  fVar15 = (float)((ulonglong)param_3[1] >> 0x20) - fVar13;
  fVar16 = fVar5 * fVar15 - fVar6 * fVar14;
  fVar11 = fVar11 - fVar12;
  fVar13 = fVar13 - fVar4;
  if ((fVar16 != 0.0) || (NAN(fVar16))) {
    auVar7._4_4_ = fVar5;
    auVar7._0_4_ = fVar14;
    auVar7._8_8_ = 0;
    auVar8._4_4_ = fVar16;
    auVar8._0_4_ = fVar16;
    auVar8._8_8_ = 0;
    auVar8 = divps(auVar7,auVar8);
    auVar17._4_4_ = fVar6;
    auVar17._0_4_ = fVar15;
    auVar17._8_8_ = 0;
    auVar18._4_4_ = fVar16;
    auVar18._0_4_ = fVar16;
    auVar18._8_8_ = 0;
    auVar18 = divps(auVar17,auVar18);
    fVar14 = fVar11 * auVar18._0_4_ - fVar13 * auVar8._0_4_;
    fVar11 = fVar11 * auVar18._4_4_ - fVar13 * auVar8._4_4_;
    uVar1 = 1;
    if ((*(float *)(param_2 + 2) <= fVar14) && (*(float *)(param_3 + 2) <= fVar11)) {
      iVar2 = -(uint)(fVar14 <= *(float *)((longlong)param_2 + 0x14));
      iVar3 = -(uint)(fVar11 <= *(float *)((longlong)param_3 + 0x14));
      auVar10._4_4_ = iVar3;
      auVar10._0_4_ = iVar2;
      auVar10._8_4_ = iVar3;
      auVar10._12_4_ = iVar3;
      auVar9._8_8_ = auVar10._8_8_;
      auVar9._4_4_ = iVar2;
      auVar9._0_4_ = iVar2;
      iVar2 = movmskpd((int)param_2,auVar9);
      if (iVar2 == 3) {
        *(ulonglong *)(param_1 + 1) = CONCAT44(fVar4 + fVar6 * fVar14,fVar12 + fVar5 * fVar14);
        *param_1 = 0;
        return;
      }
    }
  }
  else {
    fVar12 = fVar11 * fVar6 - fVar13 * fVar5;
    if ((fVar12 != 0.0) || (NAN(fVar12))) {
      *param_1 = 3;
      return;
    }
    uVar1 = 2;
  }
  *param_1 = uVar1;
  return;
}

