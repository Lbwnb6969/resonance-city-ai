// VA 0x14198fd40, PDB extent 42 bytes
// country_core::resources::roofs::roof_shape::impl$30::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_shape.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::roofs::roof_shape::impl$30::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_shape.rs
   Extent: 42 */

void pdb_14198fd40(byte *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_14335c7b0;
  if (*param_1 != 0) {
    puVar1 = &UNK_14335c7b5;
  }
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,puVar1,*param_1 ^ 5,*(code **)(param_2[1] + 0x18));
  return;
}

