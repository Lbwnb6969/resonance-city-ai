// VA 0x140de9ab0, PDB extent 536 bytes
// utils::xz_projective_rotation_bad
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::xz_projective_rotation_bad
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 536 */

void pdb_140de9ab0(float *param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar3 = *param_2;
  fVar10 = param_2[2];
  fVar7 = _DAT_142e36f28 / SQRT(fVar10 * fVar10 + fVar3 * fVar3);
  uVar1 = (uint)((int)fVar7 - 1U < 0x7fffff ||
                (int)ABS(fVar7) - 0x800000U < 0x7f000000 && -1 < (int)fVar7);
  uVar2 = (int)(uVar1 << 0x1f) >> 0x1f;
  fVar5 = (float)((uint)(fVar7 * fVar10) & (int)(uVar1 << 0x1f) >> 0x1f);
  fVar3 = (float)(~uVar2 & (uint)_DAT_142e36f28 | (uint)(fVar7 * fVar3) & uVar2);
  fVar10 = fVar5 * _DAT_142f46980 + fVar3 * _DAT_142e378f0;
  fVar7 = fVar3 * _UNK_142f46984 + _UNK_142e378f4 * 0.0;
  fVar12 = _UNK_142f46988 * 0.0 + fVar5 * _UNK_142e378f8;
  auVar8._4_4_ = fVar10;
  auVar8._0_4_ = fVar12;
  auVar8._8_4_ = fVar7;
  auVar8._12_4_ = _UNK_142f4698c * 0.0 + fVar5 * _UNK_142e378fc;
  fVar10 = SQRT(fVar7 * fVar7 + fVar12 * fVar12 + fVar10 * fVar10);
  auVar9._4_4_ = fVar10;
  auVar9._0_4_ = fVar10;
  auVar9._8_4_ = fVar10;
  auVar9._12_4_ = fVar10;
  auVar9 = divps(auVar8,auVar9);
  fVar7 = auVar9._8_4_;
  fVar10 = auVar9._4_4_;
  if (fVar5 <= 0.0) {
    fVar12 = _DAT_142e36f28 - auVar9._0_4_;
    if (fVar12 <= 0.0) {
      fVar12 = (_DAT_142e36f28 - fVar5) - fVar12;
      fVar4 = _DAT_142e36f50 / SQRT(fVar12);
      fVar5 = fVar12 * fVar4;
      fVar12 = (fVar10 + 0.0) * fVar4;
      fVar6 = (fVar3 + fVar7) * fVar4;
      fVar4 = fVar4 * 0.0;
    }
    else {
      fVar12 = (_DAT_142e36f28 - fVar5) + fVar12;
      fVar4 = _DAT_142e36f50 / SQRT(fVar12);
      fVar5 = (fVar10 + 0.0) * fVar4;
      fVar12 = fVar12 * fVar4;
      fVar6 = fVar4 * 0.0;
      fVar4 = (fVar3 - fVar7) * fVar4;
    }
  }
  else {
    fVar11 = auVar9._0_4_ + _DAT_142e36f28;
    if (fVar11 <= 0.0) {
      fVar11 = (_DAT_142e36f28 + fVar5) - fVar11;
      fVar4 = _DAT_142e36f50 / SQRT(fVar11);
      fVar5 = fVar4 * (fVar3 + fVar7);
      fVar12 = fVar4 * 0.0;
      fVar6 = fVar4 * fVar11;
      fVar4 = fVar4 * fVar10;
    }
    else {
      fVar11 = _DAT_142e36f28 + fVar5 + fVar11;
      fVar4 = _DAT_142e36f50 / SQRT(fVar11);
      fVar5 = fVar4 * 0.0;
      fVar12 = fVar4 * (fVar3 - fVar7);
      fVar6 = fVar4 * fVar10;
      fVar4 = fVar4 * fVar11;
    }
  }
  *param_1 = fVar5;
  param_1[1] = fVar12;
  param_1[2] = fVar6;
  param_1[3] = fVar4;
  return;
}

