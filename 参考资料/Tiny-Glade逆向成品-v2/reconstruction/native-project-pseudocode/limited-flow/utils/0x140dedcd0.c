// VA 0x140dedcd0, PDB extent 734 bytes
// utils::easing_functions::EasingFunction::apply
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/easing_functions.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::easing_functions::EasingFunction::apply
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/easing_functions.rs
   Extent: 734 */

void pdb_140dedcd0(uint *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140dedcf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_1431ff458 + *(int *)(&UNK_1431ff458 + (ulonglong)*param_1 * 4)))();
  return;
}

