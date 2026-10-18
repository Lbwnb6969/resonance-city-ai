// VA 0x140df21b0, PDB extent 204 bytes
// utils::geometry::rectangle::Rectangle2d::closest_edge_normal
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::rectangle::Rectangle2d::closest_edge_normal
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 204 */

undefined8 pdb_140df21b0(undefined8 *param_1,float param_2,float param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  undefined1 auVar10 [16];
  
  fVar7 = (float)*param_1;
  fVar8 = (float)((ulonglong)*param_1 >> 0x20);
  fVar11 = (float)(_UNK_142e37824 ^ (uint)fVar8);
  fVar9 = fVar7 * fVar7;
  fVar12 = fVar11 * fVar8;
  auVar1._4_4_ = fVar9 - fVar12;
  auVar1._0_4_ = fVar9 - fVar12;
  auVar1._8_4_ = fVar9 - fVar12;
  auVar1._12_4_ = fVar9 - fVar12;
  auVar10 = divps(_DAT_14301bc40,auVar1);
  fVar12 = (float)((ulonglong)param_1[1] >> 0x20);
  fVar6 = (float)param_1[1];
  fVar9 = (param_3 - fVar12) * auVar10._8_4_ * fVar11;
  fVar12 = (param_3 - fVar12) * auVar10._12_4_ * fVar7;
  fVar5 = fVar9 + (param_2 - fVar6) * auVar10._0_4_ * fVar7;
  fVar6 = fVar12 + (param_2 - fVar6) * auVar10._4_4_ * fVar8;
  auVar4._4_4_ = fVar6;
  auVar4._0_4_ = fVar5;
  auVar4._8_4_ = fVar9 + fVar9;
  auVar4._12_4_ = fVar12 + fVar12;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_1[2];
  auVar10 = divps(auVar4,auVar10);
  if ((float)(auVar10._0_4_ & _DAT_142e377e0) <= (float)(auVar10._4_4_ & _UNK_142e377e4)) {
    fVar9 = _DAT_1431ff8d0;
    fVar12 = _UNK_1431ff8d4;
    fVar2 = _UNK_1431ff8d8;
    fVar3 = _UNK_1431ff8dc;
    if (0.0 < fVar6) {
      fVar9 = _DAT_142f98000;
      fVar12 = _UNK_142f98004;
      fVar2 = _UNK_142f98008;
      fVar3 = _UNK_142f9800c;
    }
  }
  else {
    fVar9 = _DAT_1431ff8e0;
    fVar12 = _UNK_1431ff8e4;
    fVar2 = _UNK_1431ff8e8;
    fVar3 = _UNK_1431ff8ec;
    if (0.0 < fVar5) {
      fVar9 = (float)_DAT_142e37950;
      fVar12 = (float)((ulonglong)_DAT_142e37950 >> 0x20);
      fVar2 = 0.0;
      fVar3 = 0.0;
    }
  }
  return CONCAT44(fVar7 * fVar3 + fVar8 * fVar12,fVar11 * fVar2 + fVar7 * fVar9);
}

