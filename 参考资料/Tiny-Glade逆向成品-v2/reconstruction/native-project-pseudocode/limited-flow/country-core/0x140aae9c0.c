// VA 0x140aae9c0, PDB extent 21 bytes
// country_core::startup::swap_replacement_mods::impl$20::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/swap_replacement_mods.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::startup::swap_replacement_mods::impl$20::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/swap_replacement_mods.rs
   Extent: 21 */

void pdb_140aae9c0(undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_143049e20,0x15,*(code **)(param_2[1] + 0x18));
  return;
}

