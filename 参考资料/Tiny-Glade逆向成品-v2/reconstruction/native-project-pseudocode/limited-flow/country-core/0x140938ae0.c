// VA 0x140938ae0, PDB extent 48 bytes
// country_core::input::action_set::ActionSetAction::just_pressed
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/action_set.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::input::action_set::ActionSetAction::just_pressed
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/action_set.rs
   Extent: 48 */

undefined8 pdb_140938ae0(char *param_1,char param_2)

{
  undefined8 uVar1;
  
  if ((*param_1 == '\x01') && (param_1[1] == param_2)) {
                    /* WARNING: Could not recover jumptable at 0x000140938afd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&UNK_143023cc0 +
                      *(int *)(&UNK_143023cc0 + (ulonglong)*(uint *)(param_1 + 4) * 4)))();
    return uVar1;
  }
  return 0;
}

