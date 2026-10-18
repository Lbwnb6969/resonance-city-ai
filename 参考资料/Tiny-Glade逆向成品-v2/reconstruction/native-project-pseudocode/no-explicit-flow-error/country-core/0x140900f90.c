// VA 0x140900f90, PDB extent 19 bytes
// country_core::systems::ui::resources::ui_state::UiState::dragged
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/ui_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::ui::resources::ui_state::UiState::dragged
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/ui_state.rs
   Extent: 19 */

undefined1 pdb_140900f90(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = 2;
  if ((*(char *)(param_1 + 0x18) == '\x02') && (*(longlong *)(param_1 + 0x38) == param_2)) {
    uVar1 = *(undefined1 *)(param_1 + 0x19);
  }
  return uVar1;
}

