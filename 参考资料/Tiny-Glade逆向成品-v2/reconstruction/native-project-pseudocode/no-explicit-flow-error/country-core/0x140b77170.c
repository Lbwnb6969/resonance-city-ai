// VA 0x140b77170, PDB extent 30 bytes
// country_core::resources::roofs::roof_shape::Roof::shape_dims
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_shape.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::roofs::roof_shape::Roof::shape_dims
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_shape.rs
   Extent: 30 */

float pdb_140b77170(longlong param_1)

{
  if (*(char *)(param_1 + 8) == '\0') {
    return *(float *)(param_1 + 0x14) + *(float *)(param_1 + 0x14);
  }
  return *(float *)(param_1 + 0x1c);
}

