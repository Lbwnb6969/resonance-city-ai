// VA 0x140901a00, PDB extent 316 bytes
// country_core::resources::history::decorator_edit::impl$3::from
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/decorator_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::history::decorator_edit::impl$3::from
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/decorator_edit.rs
   Extent: 316 */

void pdb_140901a00(undefined8 param_1,longlong *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000140901a1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_14301e900 + *(int *)(&UNK_14301e900 + *param_2 * 4)))();
  return;
}

