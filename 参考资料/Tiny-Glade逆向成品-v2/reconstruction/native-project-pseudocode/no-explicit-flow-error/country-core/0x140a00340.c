// VA 0x140a00340, PDB extent 37 bytes
// country_core::resources::gui::EscMenuState::is_open
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/gui.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::gui::EscMenuState::is_open
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/gui.rs
   Extent: 37 */

ulonglong pdb_140a00340(ulonglong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar1 = *param_1 - 2;
  lVar3 = 4;
  if (1 < *param_1) {
    lVar3 = lVar1;
  }
  if (lVar3 == 9) {
    uVar2 = (ulonglong)(byte)param_1[1];
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
    if (lVar3 == 0) {
      return 0;
    }
  }
  return uVar2;
}

