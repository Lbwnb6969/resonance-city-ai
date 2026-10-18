// VA 0x140a11900, PDB extent 19 bytes
// country_core::game_key_bindings::impl$4::from
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_key_bindings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::game_key_bindings::impl$4::from
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_key_bindings.rs
   Extent: 19 */

undefined4 * pdb_140a11900(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

{
  *(undefined2 *)(param_1 + 1) = param_2;
  *(undefined2 *)((longlong)param_1 + 6) = param_3;
  *param_1 = 0xc3;
  return param_1;
}

