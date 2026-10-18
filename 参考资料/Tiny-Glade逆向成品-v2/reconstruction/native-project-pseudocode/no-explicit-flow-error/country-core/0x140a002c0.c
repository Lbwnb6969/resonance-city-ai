// VA 0x140a002c0, PDB extent 44 bytes
// country_core::resources::gui::EscMenuState::cast_ui_shadows
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/gui.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::gui::EscMenuState::cast_ui_shadows
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/gui.rs
   Extent: 44 */

ulonglong pdb_140a002c0(ulonglong *param_1)

{
  longlong lVar1;
  
  lVar1 = 4;
  if (1 < *param_1) {
    lVar1 = *param_1 - 2;
  }
  if ((int)lVar1 - 1U < 2) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  if (lVar1 == 5) {
    return (ulonglong)((char)param_1[1] == '\x01');
  }
  return 0;
}

