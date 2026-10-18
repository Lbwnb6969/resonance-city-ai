// VA 0x140a17400, PDB extent 2422 bytes
// country_core::game_key_bindings::mouse_button_to_string
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_key_bindings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::game_key_bindings::mouse_button_to_string
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_key_bindings.rs
   Extent: 2422 */

void pdb_140a17400(undefined8 param_1,ushort param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000140a1743b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_143038998 + *(int *)(&UNK_143038998 + (ulonglong)param_2 * 4)))();
  return;
}

