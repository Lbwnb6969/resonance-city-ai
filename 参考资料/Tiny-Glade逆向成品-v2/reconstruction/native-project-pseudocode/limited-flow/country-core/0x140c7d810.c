// VA 0x140c7d810, PDB extent 39 bytes
// country_core::resources::roofs::roof_shape::impl$52::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_shape.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::roofs::roof_shape::impl$52::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_shape.rs
   Extent: 39 */

void pdb_140c7d810(byte *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_143074508;
  if ((ulonglong)*param_1 != 0) {
    puVar1 = &UNK_14307450d;
  }
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))
            (*param_2,puVar1,(ulonglong)*param_1 + 5,*(code **)(param_2[1] + 0x18));
  return;
}

