// Matched PDB: country_core::resources::roofs::roof_ridge::calc_roof_tip_center_ls
// VA 0x140ac6200, PDB extent 55 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB: country_core::resources::roofs::roof_ridge::calc_roof_tip_center_ls
   Extent: 55 bytes. No whole-program auto-analysis. */

float pdb_140ac6200(longlong param_1,float param_2)

{
  float fVar1;
  
  if (*(char *)(param_1 + 8) == '\0') {
    fVar1 = *(float *)(param_1 + 0x14) + *(float *)(param_1 + 0x14);
  }
  else {
    fVar1 = *(float *)(param_1 + 0x1c);
  }
  return param_2 * fVar1 * *(float *)(param_1 + 0x24);
}

