// Matched PDB: country_core::resources::roofs::roof_shape::Roof::is_gable
// VA 0x140b77b60, PDB extent 38 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB: country_core::resources::roofs::roof_shape::Roof::is_gable
   Extent: 38 bytes. No whole-program auto-analysis. */

uint pdb_140b77b60(longlong param_1)

{
  return -(uint)(_DAT_142e3b1d8 < *(float *)(param_1 + 0x30) &&
                _DAT_142e36f28 == *(float *)(param_1 + 0x34)) & 0xffffff01;
}

