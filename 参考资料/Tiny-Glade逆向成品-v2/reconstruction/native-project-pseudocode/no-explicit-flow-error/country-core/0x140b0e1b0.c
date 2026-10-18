// VA 0x140b0e1b0, PDB extent 12 bytes
// country_core::resources::walls::inner_walls::InnerWalls::reset_max_id
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_walls.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::inner_walls::InnerWalls::reset_max_id
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_walls.rs
   Extent: 12 */

void pdb_140b0e1b0(longlong param_1)

{
  *(undefined8 *)(param_1 + 0xc0) = 0;
  return;
}

