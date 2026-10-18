// VA 0x140de9770, PDB extent 570 bytes
// utils::xz_rotation_from_forward
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::xz_rotation_from_forward
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 570 */

ulonglong pdb_140de9770(float *param_1,float param_2,float param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  uint uVar6;
  float fVar7;
  float fVar9;
  float fVar10;
  undefined1 auVar8 [16];
  float fVar11;
  
  fVar5 = _DAT_142e36f28 / SQRT(param_3 * param_3 + param_2 * param_2);
  uVar1 = (uint)((int)fVar5 - 1U < 0x7fffff ||
                (int)ABS(fVar5) - 0x800000U < 0x7f000000 && -1 < (int)fVar5);
  uVar6 = (int)(uVar1 << 0x1f) >> 0x1f;
  fVar11 = (float)((uint)(fVar5 * param_3) & (int)(uVar1 << 0x1f) >> 0x1f);
  fVar5 = (float)(~uVar6 & (uint)_DAT_142e36f28 | (uint)(fVar5 * param_2) & uVar6);
  fVar7 = fVar11 * _DAT_142f46980 + _DAT_142e378f0 * fVar5;
  fVar9 = fVar5 * _UNK_142f46984 + _UNK_142e378f4 * 0.0;
  fVar10 = _UNK_142f46988 * 0.0 + _UNK_142e378f8 * fVar11;
  auVar4._4_4_ = fVar7;
  auVar4._0_4_ = fVar10;
  auVar4._8_4_ = fVar9;
  auVar4._12_4_ = fVar9;
  auVar8._0_4_ = SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar7 * fVar7);
  auVar8._4_4_ = auVar8._0_4_;
  auVar8._8_4_ = auVar8._0_4_;
  auVar8._12_4_ = auVar8._0_4_;
  auVar4 = divps(auVar4,auVar8);
  fVar7 = (float)(auVar4._0_4_ ^ _DAT_142e37820);
  fVar10 = (float)(auVar4._4_4_ ^ (uint)_UNK_142e37824);
  fVar9 = (float)(auVar4._8_4_ ^ _UNK_142e37828);
  fVar5 = (float)((uint)fVar5 ^ _DAT_142e37820);
  fVar11 = (float)((uint)fVar11 ^ _UNK_142e37828);
  if (fVar11 <= 0.0) {
    fVar7 = _DAT_142e36f28 - fVar7;
    if (fVar7 <= 0.0) {
      fVar7 = (_DAT_142e36f28 - fVar11) - fVar7;
      fVar3 = 0.0 - _UNK_142e37824;
      fVar11 = SQRT(fVar7);
      fVar2 = _DAT_142e36f50 / fVar11;
      *param_1 = fVar2 * fVar7;
      param_1[1] = fVar2 * (fVar10 + 0.0);
      param_1[2] = fVar2 * (fVar9 + fVar5);
      param_1[3] = fVar2 * fVar3;
      return (ulonglong)(uint)fVar11;
    }
    fVar5 = fVar5 - fVar9;
    fVar9 = fVar10 + 0.0;
    fVar3 = fVar7 + (_DAT_142e36f28 - fVar11);
    fVar7 = _UNK_142e37824 + 0.0;
    fVar2 = SQRT(fVar3);
    fVar11 = fVar3;
    fVar10 = fVar2;
  }
  else {
    fVar7 = fVar7 + _DAT_142e36f28;
    if (0.0 < fVar7) {
      fVar7 = _DAT_142e36f28 + fVar11 + fVar7;
      fVar11 = _DAT_142e36f50 / SQRT(fVar7);
      *param_1 = fVar11 * (0.0 - _UNK_142e37824);
      param_1[1] = fVar11 * (fVar5 - fVar9);
      param_1[2] = fVar11 * fVar10;
      param_1[3] = fVar11 * fVar7;
      return (ulonglong)(uint)fVar7;
    }
    fVar7 = (_DAT_142e36f28 + fVar11) - fVar7;
    fVar2 = 0.0;
    fVar3 = 0.0;
    fVar9 = fVar9 + fVar5;
    fVar11 = _UNK_142e37824 + 0.0;
    fVar5 = fVar10;
    fVar10 = SQRT(fVar7);
  }
  fVar10 = _DAT_142e36f50 / fVar10;
  *param_1 = fVar10 * fVar9;
  param_1[1] = fVar10 * fVar11;
  param_1[2] = fVar10 * fVar7;
  param_1[3] = fVar10 * fVar5;
  return CONCAT44(fVar3,fVar2);
}

