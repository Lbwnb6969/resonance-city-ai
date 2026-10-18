// VA 0x140938b60, PDB extent 34 bytes
// country_core::input::action_set::DigitalActionState::just_pressed
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/action_set.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::input::action_set::DigitalActionState::just_pressed
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/action_set.rs
   Extent: 34 */

void pdb_140938b60(ulonglong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140938b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_143023cd4 + *(int *)(&UNK_143023cd4 + (param_1 & 0xffffffff) * 4)))();
  return;
}

