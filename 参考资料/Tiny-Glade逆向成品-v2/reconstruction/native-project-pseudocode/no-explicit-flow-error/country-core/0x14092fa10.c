// VA 0x14092fa10, PDB extent 21 bytes
// country_core::resources::walls::public_wall_state::PublicWallState::try_get_wall_shape
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/public_wall_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::public_wall_state::PublicWallState::try_get_wall_shape
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/public_wall_state.rs
   Extent: 21 */

longlong pdb_14092fa10(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (*(uint *)(param_1 + 600) < 2) {
    lVar1 = param_1 + 600;
  }
  return lVar1;
}

