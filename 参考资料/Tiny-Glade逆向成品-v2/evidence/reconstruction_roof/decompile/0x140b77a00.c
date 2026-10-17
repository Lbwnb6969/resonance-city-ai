// Matched PDB: country_core::resources::roofs::roof_shape::Roof::height
// VA 0x140b77a00, PDB extent 335 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB: country_core::resources::roofs::roof_shape::Roof::height
   Extent: 335 bytes. No whole-program auto-analysis. */

void pdb_140b77a00(longlong param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uStack_40;
  float fStack_3c;
  undefined4 *puStack_38;
  code *pcStack_30;
  float *pfStack_28;
  code *pcStack_20;
  
  if (_DAT_142e3b1d8 < *(float *)(param_1 + 0x30)) {
    if (*(int *)(param_1 + 8) == 1) {
      fVar4 = *(float *)(param_1 + 0x1c);
      fVar2 = *(float *)(param_1 + 0x20);
      fVar3 = fVar2;
      if (fVar2 <= fVar4) {
        fVar3 = fVar4;
      }
      fVar2 = ((float)(~-(uint)NAN(fVar4) & (uint)fVar3 | -(uint)NAN(fVar4) & (uint)fVar2) +
              _DAT_14303c690) / _DAT_14303c698;
      fVar4 = _DAT_142f895fc;
    }
    else {
      fVar2 = (*(float *)(param_1 + 0x14) + _DAT_14303c670) / _DAT_14303c674;
      fVar4 = _DAT_142f57bc8;
    }
    fVar3 = 0.0;
    if (0.0 <= fVar2 / _DAT_142e3798c) {
      fVar3 = fVar2 / _DAT_142e3798c;
    }
    fVar2 = _DAT_142e36f28;
    if (fVar3 <= _DAT_142e36f28) {
      fVar2 = fVar3;
    }
    fVar2 = (_DAT_142e3788c - (fVar2 + fVar2)) * fVar2 * fVar2;
    fStack_3c = fVar2 * _DAT_142e37ad8 + (_DAT_142e36f28 - fVar2) * fVar4;
    if (fStack_3c < 0.0) {
      uStack_40 = 0;
      puStack_38 = &uStack_40;
      pcStack_30 = pdb_140f705d0;
      pfStack_28 = &fStack_3c;
      pcStack_20 = pdb_140f705d0;
      pdb_142dc83d0(&UNK_14305bf5c,&puStack_38,&UNK_14305bff8);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

