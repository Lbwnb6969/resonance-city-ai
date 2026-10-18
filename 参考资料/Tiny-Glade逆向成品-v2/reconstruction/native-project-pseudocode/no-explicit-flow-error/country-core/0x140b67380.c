// VA 0x140b67380, PDB extent 8 bytes
// country_core::resources::brush_sizes::BrushSizes::reset_water
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/brush_sizes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::brush_sizes::BrushSizes::reset_water
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/brush_sizes.rs
   Extent: 8 */

void pdb_140b67380(longlong param_1)

{
  *(undefined4 *)(param_1 + 4) = 0x40000000;
  return;
}

