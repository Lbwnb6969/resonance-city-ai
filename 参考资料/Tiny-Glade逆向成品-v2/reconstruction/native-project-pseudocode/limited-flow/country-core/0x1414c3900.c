// VA 0x1414c3900, PDB extent 39 bytes
// country_core::resources::walls::decorator::impl$87::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::walls::decorator::impl$87::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 39 */

void pdb_1414c3900(byte *param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))
            (*param_2,&UNK_1433129e0 + *(int *)(&UNK_1433129e0 + (ulonglong)*param_1 * 4),
             *(undefined8 *)(&UNK_1433129c0 + (ulonglong)*param_1 * 8),*(code **)(param_2[1] + 0x18)
            );
  return;
}

