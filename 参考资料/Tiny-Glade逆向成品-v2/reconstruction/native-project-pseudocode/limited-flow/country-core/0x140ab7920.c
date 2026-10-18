// VA 0x140ab7920, PDB extent 203 bytes
// country_core::utils::debug_viz::impl$7::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/debug_viz.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::utils::debug_viz::impl$7::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/debug_viz.rs
   Extent: 203 */

void pdb_140ab7920(uint *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140ab7937. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_14304aaf8 + *(int *)(&UNK_14304aaf8 + (ulonglong)*param_1 * 4)))
            (param_1,&UNK_14304aaf8 + *(int *)(&UNK_14304aaf8 + (ulonglong)*param_1 * 4));
  return;
}

