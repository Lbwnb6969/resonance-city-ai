// VA 0x140df32b0, PDB extent 188 bytes
// utils::geometry::rectangle::Rectangle2d::signed_distance_to_closest_edge
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::geometry::rectangle::Rectangle2d::signed_distance_to_closest_edge
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 188 */

ulonglong pdb_140df32b0(undefined8 *param_1,float param_2,float param_3)

{
  undefined1 auVar1 [16];
  undefined4 in_EAX;
  int iVar2;
  float fVar4;
  float fVar5;
  ulonglong uVar3;
  float fVar6;
  float fVar7;
  float fVar9;
  undefined1 auVar8 [16];
  
  fVar5 = (float)*param_1;
  fVar4 = (float)((ulonglong)*param_1 >> 0x20);
  fVar7 = fVar5 * fVar5;
  fVar9 = (float)(_UNK_142e37824 ^ (uint)fVar4) * fVar4;
  auVar8._4_4_ = fVar7 - fVar9;
  auVar8._0_4_ = fVar7 - fVar9;
  auVar8._8_4_ = fVar7 - fVar9;
  auVar8._12_4_ = fVar7 - fVar9;
  auVar8 = divps(_DAT_14301bc40,auVar8);
  fVar6 = (float)((ulonglong)param_1[1] >> 0x20);
  fVar9 = (float)param_1[1];
  fVar7 = (param_3 - fVar6) * auVar8._8_4_ * (float)(_UNK_142e37824 ^ (uint)fVar4) +
          (param_2 - fVar9) * auVar8._0_4_ * fVar5 + (float)param_1[2] * _DAT_142e61230;
  fVar5 = (param_3 - fVar6) * auVar8._12_4_ * fVar5 + (param_2 - fVar9) * auVar8._4_4_ * fVar4 +
          (float)((ulonglong)param_1[2] >> 0x20) * _UNK_142e61234;
  auVar1._4_4_ = -(uint)(fVar7 < 0.0);
  auVar1._0_4_ = -(uint)(fVar7 < 0.0);
  auVar1._8_4_ = -(uint)(fVar5 < 0.0);
  auVar1._12_4_ = -(uint)(fVar5 < 0.0);
  iVar2 = movmskpd(in_EAX,auVar1);
  if (iVar2 != 0) {
    fVar4 = fVar5;
    if (fVar5 <= fVar7) {
      fVar4 = fVar7;
    }
    return (ulonglong)(~-(uint)NAN(fVar7) & (uint)fVar4) |
           CONCAT44(fVar5,-(uint)NAN(fVar7) & (uint)fVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x000142e32850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = _hypotf();
  return uVar3;
}

