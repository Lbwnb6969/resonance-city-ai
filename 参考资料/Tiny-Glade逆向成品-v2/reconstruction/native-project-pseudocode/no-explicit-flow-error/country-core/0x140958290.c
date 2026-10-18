// VA 0x140958290, PDB extent 9 bytes
// country_core::resources::mouse_capture::CursorVisibilityState::os_cursor_visible
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/mouse_capture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::mouse_capture::CursorVisibilityState::os_cursor_visible
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/mouse_capture.rs
   Extent: 9 */

undefined4 pdb_140958290(uint *param_1)

{
  return CONCAT31((int3)((param_1[2] | *param_1) >> 8),(param_1[2] | *param_1) == 0);
}

