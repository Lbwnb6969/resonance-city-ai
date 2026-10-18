// VA 0x1409583d0, PDB extent 42 bytes
// country_core::resources::mouse_capture::CustomCursorSsboGpuData::write
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/mouse_capture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::mouse_capture::CustomCursorSsboGpuData::write
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/mouse_capture.rs
   Extent: 42 */

undefined8 pdb_1409583d0(undefined8 *param_1)

{
  char cVar1;
  
  cVar1 = pdb_140e579a0(param_1[2] + 0x10);
  if (cVar1 == '\0') {
    return *param_1;
  }
  return 0;
}

