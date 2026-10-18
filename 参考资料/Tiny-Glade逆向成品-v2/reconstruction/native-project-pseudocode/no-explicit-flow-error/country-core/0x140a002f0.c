// VA 0x140a002f0, PDB extent 52 bytes
// country_core::resources::gui::EscMenuState::should_show_world
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/gui.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::gui::EscMenuState::should_show_world
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/gui.rs
   Extent: 52 */

ulonglong pdb_140a002f0(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = *param_1 - 2;
  uVar2 = 4;
  if (1 < *param_1) {
    uVar2 = uVar1;
  }
  if ((0x1afUL >> (uVar2 & 0x3f) & 1) != 0) {
    return CONCAT71((int7)(uVar1 >> 8),1);
  }
  if ((0x50UL >> (uVar2 & 0x3f) & 1) != 0) {
    return 0;
  }
  return (ulonglong)(byte)((byte)param_1[1] ^ 1);
}

