// VA 0x1419c2680, PDB extent 39 bytes
// country_core::startup::startup_window_cut_sdf::impl$9::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_window_cut_sdf.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::startup::startup_window_cut_sdf::impl$9::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_window_cut_sdf.rs
   Extent: 39 */

void pdb_1419c2680(byte *param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))
            (*param_2,&UNK_1433615d8 + *(int *)(&UNK_1433615d8 + (ulonglong)*param_1 * 4),
             *(undefined8 *)(&UNK_143361548 + (ulonglong)*param_1 * 8),*(code **)(param_2[1] + 0x18)
            );
  return;
}

