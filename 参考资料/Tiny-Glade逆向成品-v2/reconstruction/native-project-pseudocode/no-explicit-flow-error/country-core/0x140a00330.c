// VA 0x140a00330, PDB extent 15 bytes
// country_core::resources::gui::EscMenuState::can_limit_frame_rate
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/gui.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::gui::EscMenuState::can_limit_frame_rate
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/gui.rs
   Extent: 15 */

bool pdb_140a00330(int *param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if (*param_1 == 7) {
    bVar1 = (char)param_1[2] != '\x01';
  }
  return bVar1;
}

