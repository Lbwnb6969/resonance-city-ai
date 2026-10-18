// VA 0x140a1eba0, PDB extent 21 bytes
// country_core::game_key_bindings::_::impl$0::deserialize::impl$0::expecting
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_key_bindings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::game_key_bindings::_::impl$0::deserialize::impl$0::expecting
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_key_bindings.rs
   Extent: 21 */

void pdb_140a1eba0(undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_1430373f0,0x12,*(code **)(param_2[1] + 0x18));
  return;
}

