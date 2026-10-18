// VA 0x140901030, PDB extent 7 bytes
// country_core::systems::ui::resources::ui_state::DragState::is_finished
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/ui_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui::resources::ui_state::DragState::is_finished
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/ui_state.rs
   Extent: 7 */

bool pdb_140901030(byte *param_1)

{
  return *param_1 < 2;
}

