// Matched PDB: country_core::resources::roofs::roof_shape::roof_height_ws_from_wall_shape
// VA 0x140b76fd0, PDB extent 208 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB: country_core::resources::roofs::roof_shape::roof_height_ws_from_wall_shape
   Extent: 208 bytes. No whole-program auto-analysis. */

float pdb_140b76fd0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (*param_1 == 1) {
    fVar2 = (float)param_1[5];
    fVar3 = (float)param_1[6];
    fVar1 = fVar3;
    if (fVar3 <= fVar2) {
      fVar1 = fVar2;
    }
    fVar1 = ((float)(~-(uint)NAN(fVar2) & (uint)fVar1 | -(uint)NAN(fVar2) & (uint)fVar3) +
            _DAT_14303c690) / _DAT_14303c698;
    fVar2 = _DAT_142e37900;
    fVar3 = _DAT_142e3788c;
  }
  else {
    fVar1 = ((float)param_1[3] + _DAT_14303c670) / _DAT_14303c674;
    fVar2 = _DAT_142e37878;
    fVar3 = _DAT_142e37adc;
  }
  fVar1 = (float)pdb_140dedcd0(&UNK_14305c380,fVar1);
  fVar3 = (fVar2 * fVar1 + (_DAT_142e36f28 - fVar1) * fVar3) / _DAT_142e37ad8;
  fVar2 = 0.0;
  if (0.0 <= fVar3) {
    fVar2 = fVar3;
  }
  fVar3 = _DAT_142e36f28;
  if (fVar2 <= _DAT_142e36f28) {
    fVar3 = fVar2;
  }
  return fVar3 * _DAT_142e37ad8;
}

