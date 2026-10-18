// VA 0x1409582c0, PDB extent 18 bytes
// country_core::resources::mouse_capture::CursorVisibilityState::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/mouse_capture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::mouse_capture::CursorVisibilityState::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/mouse_capture.rs
   Extent: 18 */

undefined4 * pdb_1409582c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[2] = 0;
  *param_1 = param_2;
  param_1[1] = param_3;
  return param_1;
}

