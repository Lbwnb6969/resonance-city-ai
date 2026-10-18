// VA 0x140b6adb0, PDB extent 16 bytes
// country_core::resources::photo_mode::PhotoModeCameraMode::next
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/photo_mode.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::photo_mode::PhotoModeCameraMode::next
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/photo_mode.rs
   Extent: 16 */

char pdb_140b6adb0(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1 + '\x01';
  if ((char)(*param_1 + '\x01') == '\x04') {
    cVar1 = '\0';
  }
  return cVar1;
}

