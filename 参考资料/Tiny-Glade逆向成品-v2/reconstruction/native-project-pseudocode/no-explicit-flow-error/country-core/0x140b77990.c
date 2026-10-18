// VA 0x140b77990, PDB extent 16 bytes
// country_core::resources::roofs::roof_shape::Roof::ty
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_shape.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::roofs::roof_shape::Roof::ty
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_shape.rs
   Extent: 16 */

bool pdb_140b77990(longlong param_1)

{
  return _DAT_142e3b1d8 < *(float *)(param_1 + 0x30);
}

