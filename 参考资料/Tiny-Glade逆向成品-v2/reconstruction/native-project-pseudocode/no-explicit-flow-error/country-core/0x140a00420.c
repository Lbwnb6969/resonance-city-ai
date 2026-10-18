// VA 0x140a00420, PDB extent 10 bytes
// country_core::resources::gui::PrevEscMenuState::get
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/gui.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::gui::PrevEscMenuState::get
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/gui.rs
   Extent: 10 */

int * pdb_140a00420(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)0x0;
  if (*param_1 != 0xc) {
    piVar1 = param_1;
  }
  return piVar1;
}

