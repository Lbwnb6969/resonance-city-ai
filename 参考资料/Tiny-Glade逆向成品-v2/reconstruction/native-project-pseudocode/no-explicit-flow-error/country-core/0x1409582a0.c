// VA 0x1409582a0, PDB extent 15 bytes
// country_core::resources::mouse_capture::CursorVisibilityState::custom_cursor_size_px
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/mouse_capture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::mouse_capture::CursorVisibilityState::custom_cursor_size_px
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/mouse_capture.rs
   Extent: 15 */

undefined4 pdb_1409582a0(char *param_1)

{
  if (*param_1 == '\0') {
    return 0;
  }
  return *(undefined4 *)(param_1 + 4);
}

