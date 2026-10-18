// VA 0x14092f860, PDB extent 21 bytes
// country_core::resources::walls::public_wall_state::PublicWallState::wall_space
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/public_wall_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::public_wall_state::PublicWallState::wall_space
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/public_wall_state.rs
   Extent: 21 */

bool pdb_14092f860(longlong param_1)

{
  return *(int *)(param_1 + 600) != 2;
}

