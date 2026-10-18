// VA 0x140a39750, PDB extent 51 bytes
// country_core::game_config::impl$1::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::game_config::impl$1::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_config.rs
   Extent: 51 */

void pdb_140a39750(char *param_1,undefined8 *param_2)

{
  if (*param_1 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000140a39770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_14303b304,3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140a39780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_14303b300,4);
  return;
}

