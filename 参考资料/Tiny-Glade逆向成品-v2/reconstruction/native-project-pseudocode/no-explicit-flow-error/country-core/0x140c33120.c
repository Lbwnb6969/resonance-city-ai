// VA 0x140c33120, PDB extent 4 bytes
// country_core::resources::walls::inner_wall_state::FreehandHeightType::toggle
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_wall_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::inner_wall_state::FreehandHeightType::toggle
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_wall_state.rs
   Extent: 4 */

void pdb_140c33120(byte *param_1)

{
  *param_1 = *param_1 ^ 1;
  return;
}

