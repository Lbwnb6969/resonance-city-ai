// VA 0x140901040, PDB extent 7 bytes
// country_core::systems::timelapse_replay::TimelapseState::is_active
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/ui_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::timelapse_replay::TimelapseState::is_active
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/ui_state.rs
   Extent: 7 */

bool pdb_140901040(char *param_1)

{
  return *param_1 != '\x02';
}

