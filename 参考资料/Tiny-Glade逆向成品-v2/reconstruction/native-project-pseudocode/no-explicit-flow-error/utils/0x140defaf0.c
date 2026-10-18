// VA 0x140defaf0, PDB extent 473 bytes
// utils::geometry::circle::Circle2d::lerp
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::circle::Circle2d::lerp
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
   Extent: 473 */

float * pdb_140defaf0(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  
  fVar11 = _DAT_142f57bcc;
  fVar3 = *param_2;
  fVar4 = param_2[1];
  fVar5 = *param_3;
  fVar6 = param_3[1];
  fVar1 = param_2[2];
  fVar2 = param_3[2];
  fVar7 = (float)pub_142e32a70();
  fVar12 = (float)(~-(uint)(fVar7 < 0.0) & (uint)fVar7 |
                  (uint)(fVar7 + fVar11) & -(uint)(fVar7 < 0.0));
  uVar8 = pub_142e32a70();
  fVar7 = (float)uVar8;
  auVar9._4_4_ = (int)((ulonglong)uVar8 >> 0x20);
  auVar9._0_4_ = (uint)(fVar7 + fVar11) & -(uint)(fVar7 < 0.0);
  auVar9._8_4_ = (int)extraout_XMM0_Qb;
  auVar9._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
  auVar9 = ZEXT416(~-(uint)(fVar7 < 0.0) & (uint)fVar7) | auVar9;
  auVar10._4_12_ = auVar9._4_12_;
  fVar7 = auVar9._0_4_ - fVar12;
  if (_DAT_142f95164 <= fVar7) {
    if (_DAT_142f94714 <= fVar7) {
      fVar7 = fVar7 + _DAT_14304fc78;
    }
  }
  else {
    fVar7 = fVar7 + _DAT_142f57bcc;
  }
  auVar10._0_4_ = fVar7 * param_4 + fVar12;
  pub_142e32a70(auVar10._0_8_);
  fVar7 = (float)pub_142e32a70();
  fVar12 = _DAT_142e36f28 - param_4;
  fVar11 = _UNK_142e4e65c *
           (float)(~-(uint)(fVar7 < 0.0) & (uint)fVar7 |
                  (uint)(fVar11 + fVar7) & -(uint)(fVar7 < 0.0));
  fVar7 = _UNK_142e4e65c * _UNK_14300c764;
  *param_1 = fVar5 * param_4 + fVar3 * fVar12;
  param_1[1] = fVar6 * param_4 + fVar4 * fVar12;
  param_1[2] = fVar2 * param_4 + fVar1 * fVar12;
  param_1[3] = fVar7 + fVar11;
  return param_1;
}

