// VA 0x140a173d0, PDB extent 34 bytes
// country_core::game_key_bindings::keycode_to_str
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_key_bindings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::game_key_bindings::keycode_to_str
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_key_bindings.rs
   Extent: 34 */

undefined8 pdb_140a173d0(char *param_1)

{
  return *(undefined8 *)(&UNK_143037fd8 + (ulonglong)(byte)(*param_1 + 0x80) * 8);
}

