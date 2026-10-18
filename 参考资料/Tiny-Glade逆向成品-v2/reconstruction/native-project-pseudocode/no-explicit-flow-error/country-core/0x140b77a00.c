// VA 0x140b77a00, PDB extent 335 bytes
// country_core::resources::roofs::roof_shape::Roof::height
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_shape.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::roofs::roof_shape::Roof::height
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_shape.rs
   Extent: 335 */

void pdb_140b77a00(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uStack_40;
  float fStack_3c;
  undefined4 *puStack_38;
  code *pcStack_30;
  float *pfStack_28;
  code *pcStack_20;
  
  if (_DAT_142e3b1d8 < *(float *)(param_1 + 0x30)) {
    if (*(int *)(param_1 + 8) == 1) {
      fVar3 = *(float *)(param_1 + 0x1c);
      fVar1 = *(float *)(param_1 + 0x20);
      fVar2 = fVar1;
      if (fVar1 <= fVar3) {
        fVar2 = fVar3;
      }
      fVar1 = ((float)(~-(uint)NAN(fVar3) & (uint)fVar2 | -(uint)NAN(fVar3) & (uint)fVar1) +
              _DAT_14303c690) / _DAT_14303c698;
      fVar3 = _DAT_142f895fc;
    }
    else {
      fVar1 = (*(float *)(param_1 + 0x14) + _DAT_14303c670) / _DAT_14303c674;
      fVar3 = _DAT_142f57bc8;
    }
    fVar2 = 0.0;
    if (0.0 <= fVar1 / _DAT_142e3798c) {
      fVar2 = fVar1 / _DAT_142e3798c;
    }
    fVar1 = _DAT_142e36f28;
    if (fVar2 <= _DAT_142e36f28) {
      fVar1 = fVar2;
    }
    fVar1 = (_DAT_142e3788c - (fVar1 + fVar1)) * fVar1 * fVar1;
    fStack_3c = fVar1 * _DAT_142e37ad8 + (_DAT_142e36f28 - fVar1) * fVar3;
    if (fStack_3c < 0.0) {
      uStack_40 = 0;
      puStack_38 = &uStack_40;
      pcStack_30 = pdb_140f705d0;
      pfStack_28 = &fStack_3c;
      pcStack_20 = pdb_140f705d0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14305bf5c,&puStack_38,&UNK_14305bff8);
    }
  }
  return;
}

