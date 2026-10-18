// VA 0x141473350, PDB extent 232 bytes
// utils::geometry::intersect::ray_sphere_intersection
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/intersect.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::intersect::ray_sphere_intersection
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/intersect.rs
   Extent: 232 */

void pdb_141473350(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3,float param_4)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar11;
  float fVar12;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar10 [16];
  float fVar13;
  float fVar14;
  undefined1 auVar9 [16];
  
  fVar1 = *(float *)((longlong)param_2 + 0xc);
  fVar3 = *(float *)(param_2 + 1) - *(float *)(param_3 + 1);
  fVar5 = (float)((ulonglong)param_2[2] >> 0x20);
  fVar13 = (float)*param_2 - (float)*param_3;
  fVar14 = (float)((ulonglong)*param_2 >> 0x20) - (float)((ulonglong)*param_3 >> 0x20);
  fVar4 = (float)param_2[2];
  fVar11 = fVar5 * fVar5 + fVar4 * fVar4 + fVar1 * fVar1;
  fVar12 = fVar1 * fVar1 + 0.0 + 0.0;
  uVar2 = 0;
  if ((fVar11 != 0.0) || (NAN(fVar11))) {
    fVar5 = (fVar5 * fVar3 + fVar14 * fVar4 + fVar13 * fVar1) * _DAT_1431ff7d0;
    fVar4 = ((fVar3 * fVar3 + fVar14 * fVar14 + fVar13 * fVar13) - param_4 * param_4) *
            fVar11 * _UNK_1431ff7d4;
    fVar3 = fVar5 * fVar5 - fVar4;
    if (0.0 <= fVar3) {
      fVar3 = SQRT(fVar3);
      auVar6._0_4_ = (float)((uint)fVar5 ^ _DAT_142e37820);
      auVar6._4_4_ = (uint)(fVar11 * _UNK_1431ff7d4) ^ _UNK_142e37824;
      auVar6._8_4_ = (uint)((fVar14 * fVar1 + 0.0 + 0.0) * _UNK_1431ff7d8) ^ _UNK_142e37828;
      auVar6._12_4_ = (uint)(fVar12 * _UNK_1431ff7dc) ^ _UNK_142e3782c;
      auVar7._4_12_ = auVar6._4_12_;
      auVar7._0_4_ = auVar6._0_4_ - fVar3;
      auVar9._0_8_ = auVar7._0_8_;
      auVar9._8_4_ = auVar6._4_4_;
      auVar9._12_4_ = fVar4;
      auVar8._8_8_ = auVar9._8_8_;
      auVar8._4_4_ = fVar3 - fVar5;
      auVar8._0_4_ = auVar7._0_4_;
      auVar10._4_4_ = fVar11 + fVar11;
      auVar10._0_4_ = fVar11 + fVar11;
      auVar10._8_4_ = fVar12;
      auVar10._12_4_ = fVar12;
      auVar10 = divps(auVar8,auVar10);
      *(longlong *)(param_1 + 1) = auVar10._0_8_;
      uVar2 = 1;
    }
  }
  *param_1 = uVar2;
  return;
}

