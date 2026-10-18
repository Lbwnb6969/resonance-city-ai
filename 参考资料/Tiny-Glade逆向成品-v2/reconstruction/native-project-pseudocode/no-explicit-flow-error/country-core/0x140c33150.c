// VA 0x140c33150, PDB extent 8 bytes
// country_core::resources::walls::inner_wall_state::WallState::is_premade_shape
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_wall_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::inner_wall_state::WallState::is_premade_shape
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_wall_state.rs
   Extent: 8 */

bool pdb_140c33150(longlong param_1)

{
  return *(uint *)(param_1 + 0x38) < 2;
}

