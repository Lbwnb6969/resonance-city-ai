// Matched PDB: country_core::resources::roofs::roof_shape::Roof::shape_dims
// VA 0x140b77170, PDB extent 30 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB: country_core::resources::roofs::roof_shape::Roof::shape_dims
   Extent: 30 bytes. No whole-program auto-analysis. */

float pdb_140b77170(longlong param_1)

{
  if (*(char *)(param_1 + 8) == '\0') {
    return *(float *)(param_1 + 0x14) + *(float *)(param_1 + 0x14);
  }
  return *(float *)(param_1 + 0x1c);
}

