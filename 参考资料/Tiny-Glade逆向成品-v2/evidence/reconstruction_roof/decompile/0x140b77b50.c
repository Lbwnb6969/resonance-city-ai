// Matched PDB: country_core::resources::roofs::roof_shape::Roof::is_flat
// VA 0x140b77b50, PDB extent 16 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB: country_core::resources::roofs::roof_shape::Roof::is_flat
   Extent: 16 bytes. No whole-program auto-analysis. */

bool pdb_140b77b50(longlong param_1)

{
  return *(float *)(param_1 + 0x30) <= _DAT_142e3b1d8;
}

