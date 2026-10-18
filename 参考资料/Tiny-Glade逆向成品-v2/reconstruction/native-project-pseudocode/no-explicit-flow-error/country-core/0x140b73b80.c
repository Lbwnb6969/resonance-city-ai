// VA 0x140b73b80, PDB extent 299 bytes
// country_core::resources::roofs::roof_visual_shape::get_roof_expanded_top_and_bottom
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_visual_shape.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::roofs::roof_visual_shape::get_roof_expanded_top_and_bottom
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_visual_shape.rs
   Extent: 299 */

void pdb_140b73b80(undefined4 *param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (*(int *)(param_2 + 8) != 1) {
    *(ulonglong *)(param_1 + 1) =
         CONCAT44(_UNK_142f6a634,
                  ((SQRT(*(float *)(param_2 + 0x2c)) +
                   (_UNK_142e37954 - SQRT(*(float *)(param_2 + 0x2c))) * _UNK_142f89644) *
                   (_DAT_142e37838 * *(float *)(param_2 + 0x38) +
                   (_DAT_142e37950 - *(float *)(param_2 + 0x38)) * _DAT_142f89640) * _DAT_142e37990
                  + _DAT_14300b140) * _DAT_142e36f50 + *(float *)(param_2 + 0x14));
    *param_1 = 0;
    return;
  }
  fVar3 = (float)*(undefined8 *)(param_2 + 0x1c);
  fVar4 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x1c) >> 0x20);
  fVar5 = fVar4;
  if (*(char *)(param_2 + 0x3c) == '\0') {
    fVar5 = fVar3;
  }
  uVar2 = (ulonglong)
          (uint)(fVar5 * *(float *)(param_2 + 0x34) +
                (_DAT_142e36f28 - *(float *)(param_2 + 0x34)) * _DAT_142e3b1d8);
  fVar5 = _DAT_142e37838 * *(float *)(param_2 + 0x38) +
          (_DAT_142e37950 - *(float *)(param_2 + 0x38)) * _DAT_142f89640;
  fVar6 = SQRT(*(float *)(param_2 + 0x2c)) +
          (_UNK_142e37954 - SQRT(*(float *)(param_2 + 0x2c))) * _UNK_142f89644;
  fVar3 = fVar3 + _DAT_14300b130;
  fVar4 = fVar4 + _UNK_14300b134;
  uVar1 = uVar2 | 0x3dcccccd00000000;
  if (*(char *)(param_2 + 0x3c) != '\0') {
    uVar1 = uVar2 << 0x20 | 0x3dcccccd;
  }
  *(ulonglong *)(param_1 + 3) = uVar1;
  *(ulonglong *)(param_1 + 1) = CONCAT44(fVar6 * fVar5 + fVar4,fVar6 * fVar5 + fVar3);
  *param_1 = 1;
  return;
}

