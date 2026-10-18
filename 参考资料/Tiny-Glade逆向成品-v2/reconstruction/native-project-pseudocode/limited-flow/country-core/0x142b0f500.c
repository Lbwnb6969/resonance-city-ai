// VA 0x142b0f500, PDB extent 39 bytes
// country_core::resources::roofs::commands::impl$4::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/commands.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::roofs::commands::impl$4::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/commands.rs
   Extent: 39 */

void pdb_142b0f500(byte *param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))
            (*param_2,&UNK_143646f60 + *(int *)(&UNK_143646f60 + (ulonglong)*param_1 * 4),
             *(undefined8 *)(&UNK_143646f40 + (ulonglong)*param_1 * 8),*(code **)(param_2[1] + 0x18)
            );
  return;
}

