// VA 0x140a118f0, PDB extent 16 bytes
// country_core::game_key_bindings::impl$3::from
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_key_bindings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::game_key_bindings::impl$3::from
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_key_bindings.rs
   Extent: 16 */

void pdb_140a118f0(undefined8 *param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  return;
}

