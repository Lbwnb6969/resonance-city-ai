// VA 0x140b2e910, PDB extent 7 bytes
// country_core::resources::walls::material_stats::MaterialStats::set_lintel_pillars_count
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/material_stats.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::material_stats::MaterialStats::set_lintel_pillars_count
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/material_stats.rs
   Extent: 7 */

void pdb_140b2e910(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xb4) = param_2;
  return;
}

