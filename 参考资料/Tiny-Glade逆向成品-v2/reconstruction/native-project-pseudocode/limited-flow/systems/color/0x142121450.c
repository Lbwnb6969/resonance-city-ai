// VA 0x142121450, PDB extent 568 bytes
// system_color::style_changes::StyleScene::sample
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/style_sample.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_color::style_changes::StyleScene::sample
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/style_sample.rs
   Extent: 568 */

void pdb_142121450(undefined8 param_1,undefined8 param_2,uint *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000142121473. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_14345fcc0 + *(int *)(&UNK_14345fcc0 + (ulonglong)*param_3 * 4)))();
  return;
}

