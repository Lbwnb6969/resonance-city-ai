// VA 0x140b43530, PDB extent 23 bytes
// country_core::systems::mode_manager::WallSelectionGroups::get
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::mode_manager::WallSelectionGroups::get
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
   Extent: 23 */

longlong pdb_140b43530(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (param_2 < *(ulonglong *)(param_1 + 0x10)) {
    lVar1 = param_2 * 0x18 + *(longlong *)(param_1 + 8);
  }
  return lVar1;
}

