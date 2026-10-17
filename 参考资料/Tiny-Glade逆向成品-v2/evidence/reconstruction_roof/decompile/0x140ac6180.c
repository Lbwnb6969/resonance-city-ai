// Matched PDB: country_core::resources::roofs::roof_ridge::inverse_ridge_01_param
// VA 0x140ac6180, PDB extent 119 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB: country_core::resources::roofs::roof_ridge::inverse_ridge_01_param
   Extent: 119 bytes. No whole-program auto-analysis. */

void pdb_140ac6180(float param_1,char param_2,float param_3,float param_4)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  
  if (param_2 == '\0') {
    param_4 = param_3;
  }
  if ((param_4 != _DAT_142e3b1d8) || (NAN(param_4) || NAN(_DAT_142e3b1d8))) {
    fVar2 = (param_1 + _DAT_142e42360) / (param_4 + _DAT_142e42360);
    fVar3 = 0.0;
    if (0.0 <= fVar2) {
      fVar3 = fVar2;
    }
    fVar2 = _DAT_142e36f28;
    if (fVar3 <= _DAT_142e36f28) {
      fVar2 = fVar3;
    }
    if ((uint)ABS(fVar2) < 0x7f800000) {
      return;
    }
  }
  else {
    pdb_142dc8150(&UNK_14304c388);
  }
  pdb_142dc83b0(&UNK_14304c3a0,0x29,&UNK_14304c3d0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

