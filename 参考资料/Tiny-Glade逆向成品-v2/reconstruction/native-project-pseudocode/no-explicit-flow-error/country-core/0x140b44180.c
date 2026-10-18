// VA 0x140b44180, PDB extent 14 bytes
// country_core::systems::mode_manager::AppMode::is_tool_selected
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::mode_manager::AppMode::is_tool_selected
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
   Extent: 14 */

undefined4 pdb_140b44180(uint *param_1)

{
  return CONCAT31((int3)(*param_1 >> 8),(0xf9feU >> (*param_1 & 0x1f) & 1) != 0);
}

