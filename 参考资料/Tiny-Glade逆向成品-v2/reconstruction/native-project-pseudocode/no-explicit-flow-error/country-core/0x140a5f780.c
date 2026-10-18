// VA 0x140a5f780, PDB extent 9 bytes
// country_core::resources::stairs::stairs_state::StairsState::unset_endpoint
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::stairs::stairs_state::StairsState::unset_endpoint
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
   Extent: 9 */

void pdb_140a5f780(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 3;
  return;
}

