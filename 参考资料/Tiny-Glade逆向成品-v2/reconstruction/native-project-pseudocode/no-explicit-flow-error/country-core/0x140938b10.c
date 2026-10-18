// VA 0x140938b10, PDB extent 20 bytes
// country_core::input::action_set::ActionSetAction::pressed
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/action_set.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::input::action_set::ActionSetAction::pressed
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/action_set.rs
   Extent: 20 */

bool pdb_140938b10(char *param_1,char param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*param_1 == '\x01') && (param_1[1] == param_2)) {
    bVar1 = *(uint *)(param_1 + 4) < 3;
  }
  return bVar1;
}

