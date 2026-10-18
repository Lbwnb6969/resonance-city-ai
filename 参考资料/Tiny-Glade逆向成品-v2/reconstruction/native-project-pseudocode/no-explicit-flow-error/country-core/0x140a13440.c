// VA 0x140a13440, PDB extent 40 bytes
// country_core::game_key_bindings::KeyBinding::get_assigned_inputs
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_key_bindings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::game_key_bindings::KeyBinding::get_assigned_inputs
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_key_bindings.rs
   Extent: 40 */

undefined8 pdb_140a13440(byte *param_1,longlong param_2)

{
  return *(undefined8 *)(param_2 + *(longlong *)(&UNK_143037548 + (ulonglong)*param_1 * 8));
}

