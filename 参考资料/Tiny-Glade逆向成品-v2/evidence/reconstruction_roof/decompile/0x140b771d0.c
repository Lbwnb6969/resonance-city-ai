// Matched PDB: country_core::resources::roofs::roof_shape::Roof::is_flat_w_no_rim
// VA 0x140b771d0, PDB extent 25 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB: country_core::resources::roofs::roof_shape::Roof::is_flat_w_no_rim
   Extent: 25 bytes. No whole-program auto-analysis. */

bool pdb_140b771d0(longlong param_1)

{
  return *(char *)(param_1 + 0x3d) != '\0' && *(float *)(param_1 + 0x30) <= _DAT_142e3b1d8;
}

