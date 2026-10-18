// VA 0x140b771d0, PDB extent 25 bytes
// country_core::resources::roofs::roof_shape::Roof::is_flat_w_no_rim
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_shape.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::roofs::roof_shape::Roof::is_flat_w_no_rim
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_shape.rs
   Extent: 25 */

bool pdb_140b771d0(longlong param_1)

{
  return *(char *)(param_1 + 0x3d) != '\0' && *(float *)(param_1 + 0x30) <= _DAT_142e3b1d8;
}

