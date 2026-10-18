// VA 0x1420bf380, PDB extent 278 bytes
// system_onboarding::hint_state::HintDisplayState::clear
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_onboarding::hint_state::HintDisplayState::clear
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_state.rs
   Extent: 278 */

void pdb_1420bf380(longlong param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = *(longlong *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  while (uStack_28 != 0) {
    uStack_28 = uStack_28 + -1;
    pdb_141086700();
  }
  uStack_28 = *(longlong *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  while (uStack_28 != 0) {
    uStack_28 = uStack_28 + -1;
    pdb_141086700();
  }
  return;
}

