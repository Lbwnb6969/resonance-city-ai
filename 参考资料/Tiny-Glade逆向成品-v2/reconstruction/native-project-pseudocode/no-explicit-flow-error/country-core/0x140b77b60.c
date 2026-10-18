// VA 0x140b77b60, PDB extent 38 bytes
// country_core::resources::roofs::roof_shape::Roof::is_gable
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_shape.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::roofs::roof_shape::Roof::is_gable
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_shape.rs
   Extent: 38 */

uint pdb_140b77b60(longlong param_1)

{
  return -(uint)(_DAT_142e3b1d8 < *(float *)(param_1 + 0x30) &&
                _DAT_142e36f28 == *(float *)(param_1 + 0x34)) & 0xffffff01;
}

