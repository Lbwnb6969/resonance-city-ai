// VA 0x140a00370, PDB extent 40 bytes
// country_core::resources::gui::EscMenuState::is_closed
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/gui.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::gui::EscMenuState::is_closed
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/gui.rs
   Extent: 40 */

byte pdb_140a00370(ulonglong *param_1)

{
  longlong lVar1;
  
  lVar1 = 4;
  if (1 < *param_1) {
    lVar1 = *param_1 - 2;
  }
  if (lVar1 != 9) {
    if (lVar1 == 0) {
      return 1;
    }
    return 0;
  }
  return (byte)param_1[1] ^ 1;
}

