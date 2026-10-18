// VA 0x140b2e940, PDB extent 470 bytes
// country_core::resources::walls::material_stats::MaterialStats::which_material_changed_the_most
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/material_stats.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::material_stats::MaterialStats::which_material_changed_the_most
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/material_stats.rs
   Extent: 470 */

ulonglong pdb_140b2e940(longlong param_1)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar8 = (float)((uint)(*(float *)(param_1 + 0x9c) - *(float *)(param_1 + 0x34)) & _DAT_142e377e0);
  fVar9 = (float)((uint)(*(float *)(param_1 + 0x98) - *(float *)(param_1 + 0x30)) & _UNK_142e377e4);
  fVar7 = (float)((uint)(*(float *)(param_1 + 0xa0) - *(float *)(param_1 + 0x38)) & _DAT_142e377e0);
  fVar10 = (float)((uint)(*(float *)(param_1 + 0x94) - *(float *)(param_1 + 0x2c)) & _DAT_142e377e0)
  ;
  fVar11 = _UNK_143056a14 +
           (float)((uint)(*(float *)(param_1 + 0x90) - *(float *)(param_1 + 0x28)) & _UNK_142e377e4)
  ;
  uVar1 = CONCAT71((uint7)(uint3)((uint)*(float *)(param_1 + 0x94) >> 8),7);
  if (0.0 < fVar8 + fVar9 + fVar10 + fVar11 + fVar7) {
    fVar3 = ABS(*(float *)(param_1 + 0xa8) - *(float *)(param_1 + 0x40));
    uVar6 = (uint)((int)fVar11 >> 0x1f) >> 1 ^ (uint)fVar11;
    fVar2 = fVar8;
    if ((int)fVar8 < (int)uVar6) {
      fVar2 = fVar11;
    }
    uVar4 = (uint)((int)fVar2 >> 0x1f) >> 1 ^ (uint)fVar2;
    if ((int)uVar4 <= (int)fVar10) {
      fVar2 = fVar10;
    }
    uVar5 = 1;
    if ((int)fVar10 < (int)uVar4) {
      uVar5 = (uint)((int)uVar6 <= (int)fVar8) * 3;
    }
    uVar6 = (uint)((int)fVar2 >> 0x1f) >> 1 ^ (uint)fVar2;
    if ((int)uVar6 <= (int)fVar9) {
      fVar2 = fVar9;
    }
    uVar4 = 2;
    if ((int)fVar9 < (int)uVar6) {
      uVar4 = uVar5;
    }
    uVar6 = (uint)((int)fVar2 >> 0x1f) >> 1 ^ (uint)fVar2;
    if ((int)uVar6 <= (int)fVar7) {
      fVar2 = fVar7;
    }
    uVar5 = 4;
    if ((int)fVar7 < (int)uVar6) {
      uVar5 = uVar4;
    }
    uVar6 = (uint)((int)fVar2 >> 0x1f) >> 1 ^ (uint)fVar2;
    if ((int)uVar6 <= (int)fVar3) {
      fVar2 = fVar3;
    }
    uVar4 = 5;
    if ((int)fVar3 < (int)uVar6) {
      uVar4 = uVar5;
    }
    uVar1 = 6;
    if ((int)ABS(*(float *)(param_1 + 0xa4) - *(float *)(param_1 + 0x3c)) <
        (int)((uint)((int)fVar2 >> 0x1f) >> 1 ^ (uint)fVar2)) {
      uVar1 = (ulonglong)uVar4;
    }
  }
  return uVar1;
}

