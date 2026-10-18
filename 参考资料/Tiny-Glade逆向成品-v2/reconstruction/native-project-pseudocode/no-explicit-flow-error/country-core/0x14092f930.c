// VA 0x14092f930, PDB extent 9 bytes
// country_core::resources::walls::public_wall_state::PublicWallState::wall_space_length
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/public_wall_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::public_wall_state::PublicWallState::wall_space_length
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/public_wall_state.rs
   Extent: 9 */

undefined4 pdb_14092f930(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x290);
}

