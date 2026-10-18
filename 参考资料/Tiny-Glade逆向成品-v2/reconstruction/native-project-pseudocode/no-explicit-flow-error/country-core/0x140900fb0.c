// VA 0x140900fb0, PDB extent 23 bytes
// country_core::systems::ui::resources::ui_state::UiState::is_active
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/ui_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::ui::resources::ui_state::UiState::is_active
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/ui_state.rs
   Extent: 23 */

bool pdb_140900fb0(longlong param_1,longlong param_2)

{
  if ((*(char *)(param_1 + 0x18) != '\0') && (*(longlong *)(param_1 + 0x38) == param_2)) {
    return *(int *)(param_1 + 0x28) != 2;
  }
  return false;
}

