// VA 0x140a212a0, PDB extent 42 bytes
// country_core::resources::walls::inner_wall_state::impl$33::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_wall_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::walls::inner_wall_state::impl$33::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_wall_state.rs
   Extent: 42 */

void pdb_140a212a0(byte *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1430374c2;
  if (*param_1 != 0) {
    puVar1 = &UNK_143037541;
  }
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,puVar1,*param_1 ^ 5,*(code **)(param_2[1] + 0x18));
  return;
}

