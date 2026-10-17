// Matched PDB: country_core::resources::roofs::roof_ridge::RoofRidgeDims::calc
// VA 0x140ac60c0, PDB extent 70 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB: country_core::resources::roofs::roof_ridge::RoofRidgeDims::calc
   Extent: 70 bytes. No whole-program auto-analysis. */

ulonglong pdb_140ac60c0(float param_1,char param_2,float param_3,float param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == '\0') {
    param_4 = param_3;
  }
  uVar2 = (ulonglong)(uint)(param_4 * param_1 + (_DAT_142e36f28 - param_1) * _DAT_142e3b1d8);
  uVar1 = uVar2 | 0x3dcccccd00000000;
  if (param_2 != '\0') {
    uVar1 = uVar2 << 0x20 | 0x3dcccccd;
  }
  return uVar1;
}

