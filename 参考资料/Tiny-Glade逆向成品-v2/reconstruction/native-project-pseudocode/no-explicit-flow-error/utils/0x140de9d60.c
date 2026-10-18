// VA 0x140de9d60, PDB extent 582 bytes
// utils::xz_projective_rotation_from_forward
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::xz_projective_rotation_from_forward
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 582 */

ulonglong pdb_140de9d60(float *param_1,float *param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  uint uVar7;
  float fVar8;
  float fVar10;
  undefined1 auVar9 [16];
  float fVar11;
  
  fVar5 = *param_2;
  fVar8 = param_2[2];
  fVar6 = _DAT_142e36f28 / SQRT(fVar8 * fVar8 + fVar5 * fVar5);
  uVar1 = (uint)((int)fVar6 - 1U < 0x7fffff ||
                (int)ABS(fVar6) - 0x800000U < 0x7f000000 && -1 < (int)fVar6);
  uVar7 = (int)(uVar1 << 0x1f) >> 0x1f;
  fVar11 = (float)((uint)(fVar6 * fVar8) & (int)(uVar1 << 0x1f) >> 0x1f);
  fVar5 = (float)(~uVar7 & (uint)_DAT_142e36f28 | (uint)(fVar6 * fVar5) & uVar7);
  fVar8 = fVar11 * _DAT_142f46980 + _DAT_142e378f0 * fVar5;
  fVar6 = fVar5 * _UNK_142f46984 + _UNK_142e378f4 * 0.0;
  fVar10 = _UNK_142f46988 * 0.0 + _UNK_142e378f8 * fVar11;
  auVar4._4_4_ = fVar8;
  auVar4._0_4_ = fVar10;
  auVar4._8_4_ = fVar6;
  auVar4._12_4_ = fVar6;
  auVar9._0_4_ = SQRT(fVar6 * fVar6 + fVar10 * fVar10 + fVar8 * fVar8);
  auVar9._4_4_ = auVar9._0_4_;
  auVar9._8_4_ = auVar9._0_4_;
  auVar9._12_4_ = auVar9._0_4_;
  auVar4 = divps(auVar4,auVar9);
  fVar8 = (float)(auVar4._0_4_ ^ _DAT_142e37820);
  fVar10 = (float)(auVar4._4_4_ ^ (uint)_UNK_142e37824);
  fVar6 = (float)(auVar4._8_4_ ^ _UNK_142e37828);
  fVar5 = (float)((uint)fVar5 ^ _DAT_142e37820);
  fVar11 = (float)((uint)fVar11 ^ _UNK_142e37828);
  if (fVar11 <= 0.0) {
    fVar8 = _DAT_142e36f28 - fVar8;
    if (fVar8 <= 0.0) {
      fVar8 = (_DAT_142e36f28 - fVar11) - fVar8;
      fVar3 = 0.0 - _UNK_142e37824;
      fVar11 = SQRT(fVar8);
      fVar2 = _DAT_142e36f50 / fVar11;
      *param_1 = fVar2 * fVar8;
      param_1[1] = fVar2 * (fVar10 + 0.0);
      param_1[2] = fVar2 * (fVar6 + fVar5);
      param_1[3] = fVar2 * fVar3;
      return (ulonglong)(uint)fVar11;
    }
    fVar5 = fVar5 - fVar6;
    fVar6 = fVar10 + 0.0;
    fVar3 = fVar8 + (_DAT_142e36f28 - fVar11);
    fVar8 = _UNK_142e37824 + 0.0;
    fVar2 = SQRT(fVar3);
    fVar11 = fVar3;
    fVar10 = fVar2;
  }
  else {
    fVar8 = fVar8 + _DAT_142e36f28;
    if (0.0 < fVar8) {
      fVar8 = _DAT_142e36f28 + fVar11 + fVar8;
      fVar11 = _DAT_142e36f50 / SQRT(fVar8);
      *param_1 = fVar11 * (0.0 - _UNK_142e37824);
      param_1[1] = fVar11 * (fVar5 - fVar6);
      param_1[2] = fVar11 * fVar10;
      param_1[3] = fVar11 * fVar8;
      return (ulonglong)(uint)fVar8;
    }
    fVar8 = (_DAT_142e36f28 + fVar11) - fVar8;
    fVar2 = 0.0;
    fVar3 = 0.0;
    fVar6 = fVar6 + fVar5;
    fVar11 = _UNK_142e37824 + 0.0;
    fVar5 = fVar10;
    fVar10 = SQRT(fVar8);
  }
  fVar10 = _DAT_142e36f50 / fVar10;
  *param_1 = fVar10 * fVar6;
  param_1[1] = fVar10 * fVar11;
  param_1[2] = fVar10 * fVar8;
  param_1[3] = fVar10 * fVar5;
  return CONCAT44(fVar3,fVar2);
}

