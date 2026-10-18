// VA 0x140c33160, PDB extent 15 bytes
// country_core::resources::walls::inner_wall_state::WallState::get_enclosure_params
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_wall_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::inner_wall_state::WallState::get_enclosure_params
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_wall_state.rs
   Extent: 15 */

longlong pdb_140c33160(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (*(uint *)(param_1 + 0x38) < 2) {
    lVar1 = param_1 + 0x38;
  }
  return lVar1;
}

