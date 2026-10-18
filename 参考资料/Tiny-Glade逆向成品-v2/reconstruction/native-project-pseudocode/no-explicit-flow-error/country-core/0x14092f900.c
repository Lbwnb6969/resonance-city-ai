// VA 0x14092f900, PDB extent 41 bytes
// country_core::resources::walls::public_wall_state::PublicWallState::get_wall_shape
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/public_wall_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::public_wall_state::PublicWallState::get_wall_shape
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/public_wall_state.rs
   Extent: 41 */

longlong pdb_14092f900(longlong param_1)

{
  if (*(uint *)(param_1 + 600) < 2) {
    return param_1 + 600;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143021f00);
}

