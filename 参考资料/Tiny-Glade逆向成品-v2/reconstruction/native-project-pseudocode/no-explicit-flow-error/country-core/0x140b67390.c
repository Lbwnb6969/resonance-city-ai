// VA 0x140b67390, PDB extent 8 bytes
// country_core::resources::brush_sizes::BrushSizes::reset_garden
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/brush_sizes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::brush_sizes::BrushSizes::reset_garden
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/brush_sizes.rs
   Extent: 8 */

void pdb_140b67390(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0x40400000;
  return;
}

