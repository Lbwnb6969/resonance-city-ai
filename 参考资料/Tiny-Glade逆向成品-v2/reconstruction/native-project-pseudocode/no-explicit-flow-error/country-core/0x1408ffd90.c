// VA 0x1408ffd90, PDB extent 40 bytes
// country_core::systems::ui::resources::ui_state::UiState::manipulated_widget
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/ui_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui::resources::ui_state::UiState::manipulated_widget
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/ui_state.rs
   Extent: 40 */

bool pdb_1408ffd90(longlong param_1)

{
  if ((*(char *)(param_1 + 0x18) == '\x02') && (*(char *)(param_1 + 0x19) == '\x04')) {
    return _DAT_14301e000 <= *(float *)(param_1 + 200);
  }
  return false;
}

