// VA 0x140938b30, PDB extent 34 bytes
// country_core::input::action_set::ActionSetAction::as_analog
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/action_set.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::input::action_set::ActionSetAction::as_analog
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/action_set.rs
   Extent: 34 */

void pdb_140938b30(undefined4 *param_1,char *param_2,char param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*param_2 == '\0') && (param_2[1] == param_3)) {
    *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 4);
    uVar1 = 1;
  }
  *param_1 = uVar1;
  return;
}

