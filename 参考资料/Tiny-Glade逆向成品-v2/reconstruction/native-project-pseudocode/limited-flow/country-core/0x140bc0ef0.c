// VA 0x140bc0ef0, PDB extent 38 bytes
// country_core::resources::walls::decorator::impl$103::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::walls::decorator::impl$103::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 38 */

void pdb_140bc0ef0(char *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_14306328a;
  if (*param_1 != '\0') {
    puVar1 = &UNK_143062f40;
  }
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,puVar1,4,*(code **)(param_2[1] + 0x18));
  return;
}

