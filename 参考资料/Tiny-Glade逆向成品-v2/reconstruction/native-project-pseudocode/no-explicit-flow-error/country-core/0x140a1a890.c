// VA 0x140a1a890, PDB extent 5 bytes
// country_core::systems::mode_manager::WallSelectionGroups::len
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/wall_compound_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::mode_manager::WallSelectionGroups::len
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/wall_compound_edit.rs
   Extent: 5 */

undefined8 pdb_140a1a890(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}

