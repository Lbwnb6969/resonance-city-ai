// VA 0x1404721a0, PDB extent 39 bytes
// country_core::systems::impl$14::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::impl$14::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod.rs
   Extent: 39 */

void pdb_1404721a0(byte *param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))
            (*param_2,&UNK_142f5bda0 + *(int *)(&UNK_142f5bda0 + (ulonglong)*param_1 * 4),
             *(undefined8 *)(&UNK_142f5bc38 + (ulonglong)*param_1 * 8),*(code **)(param_2[1] + 0x18)
            );
  return;
}

