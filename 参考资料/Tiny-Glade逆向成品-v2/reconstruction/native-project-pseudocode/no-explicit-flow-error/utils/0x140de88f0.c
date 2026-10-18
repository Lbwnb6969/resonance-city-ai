// VA 0x140de88f0, PDB extent 524 bytes
// utils::xz_rotation_bad
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::xz_rotation_bad
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 524 */

void pdb_140de88f0(float *param_1,float param_2,float param_3)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar6 = _DAT_142e36f28 / SQRT(param_3 * param_3 + param_2 * param_2);
  uVar1 = (uint)((int)fVar6 - 1U < 0x7fffff ||
                (int)ABS(fVar6) - 0x800000U < 0x7f000000 && -1 < (int)fVar6);
  uVar2 = (int)(uVar1 << 0x1f) >> 0x1f;
  fVar4 = (float)((uint)(fVar6 * param_3) & (int)(uVar1 << 0x1f) >> 0x1f);
  fVar6 = (float)(~uVar2 & (uint)_DAT_142e36f28 | (uint)(fVar6 * param_2) & uVar2);
  fVar9 = fVar4 * _DAT_142f46980 + fVar6 * _DAT_142e378f0;
  fVar11 = fVar6 * _UNK_142f46984 + _UNK_142e378f4 * 0.0;
  fVar12 = _UNK_142f46988 * 0.0 + fVar4 * _UNK_142e378f8;
  auVar7._4_4_ = fVar9;
  auVar7._0_4_ = fVar12;
  auVar7._8_4_ = fVar11;
  auVar7._12_4_ = _UNK_142f4698c * 0.0 + fVar4 * _UNK_142e378fc;
  fVar9 = SQRT(fVar11 * fVar11 + fVar12 * fVar12 + fVar9 * fVar9);
  auVar8._4_4_ = fVar9;
  auVar8._0_4_ = fVar9;
  auVar8._8_4_ = fVar9;
  auVar8._12_4_ = fVar9;
  auVar8 = divps(auVar7,auVar8);
  fVar11 = auVar8._8_4_;
  fVar9 = auVar8._4_4_;
  if (fVar4 <= 0.0) {
    fVar12 = _DAT_142e36f28 - auVar8._0_4_;
    if (fVar12 <= 0.0) {
      fVar12 = (_DAT_142e36f28 - fVar4) - fVar12;
      fVar3 = _DAT_142e36f50 / SQRT(fVar12);
      fVar4 = fVar12 * fVar3;
      fVar12 = (fVar9 + 0.0) * fVar3;
      fVar5 = (fVar6 + fVar11) * fVar3;
      fVar3 = fVar3 * 0.0;
    }
    else {
      fVar12 = (_DAT_142e36f28 - fVar4) + fVar12;
      fVar3 = _DAT_142e36f50 / SQRT(fVar12);
      fVar4 = (fVar9 + 0.0) * fVar3;
      fVar12 = fVar12 * fVar3;
      fVar5 = fVar3 * 0.0;
      fVar3 = (fVar6 - fVar11) * fVar3;
    }
  }
  else {
    fVar10 = auVar8._0_4_ + _DAT_142e36f28;
    if (fVar10 <= 0.0) {
      fVar10 = (_DAT_142e36f28 + fVar4) - fVar10;
      fVar3 = _DAT_142e36f50 / SQRT(fVar10);
      fVar4 = fVar3 * (fVar6 + fVar11);
      fVar12 = fVar3 * 0.0;
      fVar5 = fVar3 * fVar10;
      fVar3 = fVar3 * fVar9;
    }
    else {
      fVar10 = _DAT_142e36f28 + fVar4 + fVar10;
      fVar3 = _DAT_142e36f50 / SQRT(fVar10);
      fVar4 = fVar3 * 0.0;
      fVar12 = fVar3 * (fVar6 - fVar11);
      fVar5 = fVar3 * fVar9;
      fVar3 = fVar3 * fVar10;
    }
  }
  *param_1 = fVar4;
  param_1[1] = fVar12;
  param_1[2] = fVar5;
  param_1[3] = fVar3;
  return;
}

