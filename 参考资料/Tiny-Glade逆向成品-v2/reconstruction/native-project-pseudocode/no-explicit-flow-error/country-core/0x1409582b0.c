// VA 0x1409582b0, PDB extent 10 bytes
// country_core::resources::mouse_capture::CursorVisibilityState::custom_cursor_visible
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/mouse_capture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::mouse_capture::CursorVisibilityState::custom_cursor_visible
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/mouse_capture.rs
   Extent: 10 */

byte pdb_1409582b0(byte *param_1)

{
  return *(int *)(param_1 + 8) == 0 & *param_1;
}

