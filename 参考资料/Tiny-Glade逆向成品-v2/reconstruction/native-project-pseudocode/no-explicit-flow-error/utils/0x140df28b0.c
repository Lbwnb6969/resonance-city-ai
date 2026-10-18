// VA 0x140df28b0, PDB extent 191 bytes
// utils::geometry::rectangle::Rectangle2d::distance_to_closest_edge
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::rectangle::Rectangle2d::distance_to_closest_edge
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 191 */

longlong pdb_140df28b0(undefined8 *param_1,float param_2,float param_3)

{
  undefined1 auVar1 [12];
  undefined4 in_EAX;
  int iVar2;
  float fVar3;
  float fVar8;
  undefined1 auVar5 [12];
  longlong lVar4;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar9;
  float fVar10;
  float fVar12;
  undefined1 auVar11 [16];
  undefined8 extraout_XMM0_Qb;
  
  fVar3 = (float)*param_1;
  fVar8 = (float)((ulonglong)*param_1 >> 0x20);
  fVar10 = fVar3 * fVar3;
  fVar12 = (float)(_UNK_142e37824 ^ (uint)fVar8) * fVar8;
  auVar6._0_4_ = fVar10 - fVar12;
  auVar6._4_4_ = fVar10 - fVar12;
  auVar6._8_4_ = fVar10 - fVar12;
  auVar6._12_4_ = fVar10 - fVar12;
  auVar11 = divps(_DAT_14301bc40,auVar6);
  fVar12 = (float)((ulonglong)param_1[1] >> 0x20);
  fVar9 = (float)param_1[1];
  fVar10 = (param_3 - fVar12) * auVar11._8_4_ * (float)(_UNK_142e37824 ^ (uint)fVar8);
  fVar12 = (param_3 - fVar12) * auVar11._12_4_ * fVar3;
  fVar3 = fVar10 + (param_2 - fVar9) * auVar11._0_4_ * fVar3 + (float)param_1[2] * _DAT_142e61230;
  fVar8 = fVar12 + (param_2 - fVar9) * auVar11._4_4_ * fVar8 +
          (float)((ulonglong)param_1[2] >> 0x20) * _UNK_142e61234;
  fVar10 = fVar10 + fVar10 + _UNK_142e61238 * 0.0;
  fVar12 = fVar12 + fVar12 + _UNK_142e6123c * 0.0;
  auVar11._4_4_ = -(uint)(fVar3 < 0.0);
  auVar11._0_4_ = -(uint)(fVar3 < 0.0);
  auVar11._8_4_ = -(uint)(fVar8 < 0.0);
  auVar11._12_4_ = -(uint)(fVar8 < 0.0);
  iVar2 = movmskpd(in_EAX,auVar11);
  if (iVar2 == 0) {
    auVar7._0_8_ = pub_142e32850();
    auVar7._8_8_ = extraout_XMM0_Qb;
    auVar5 = auVar7._0_12_;
  }
  else {
    fVar9 = fVar8;
    if (fVar8 <= fVar3) {
      fVar9 = fVar3;
    }
    auVar5._0_4_ = ~-(uint)NAN(fVar3) & (uint)fVar9;
    auVar5._4_4_ = 0;
    auVar5._8_4_ = ~(uint)fVar10 & (uint)fVar12;
    auVar1._4_4_ = fVar8;
    auVar1._0_4_ = -(uint)NAN(fVar3) & (uint)fVar8;
    auVar1._8_4_ = (uint)fVar10 & (uint)fVar12;
    auVar5 = auVar5 | auVar1;
  }
  lVar4 = auVar5._0_8_;
  if (auVar5._0_4_ <= 0.0) {
    lVar4 = auVar5._4_8_ << 0x20;
  }
  return lVar4;
}

