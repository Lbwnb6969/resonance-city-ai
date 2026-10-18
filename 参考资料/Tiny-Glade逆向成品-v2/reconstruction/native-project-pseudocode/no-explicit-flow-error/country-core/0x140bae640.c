// VA 0x140bae640, PDB extent 19 bytes
// country_core::systems::wall::eraser::ui_bulldozer::is_eraser_bulldoze_mode_active
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/eraser/ui_bulldozer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::wall::eraser::ui_bulldozer::is_eraser_bulldoze_mode_active
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/eraser/ui_bulldozer.rs
   Extent: 19 */

undefined8 pdb_140bae640(undefined8 *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)*param_1;
  if (*pcVar1 == '\x04') {
    return CONCAT71((int7)((ulonglong)pcVar1 >> 8),pcVar1[1] == '\x03');
  }
  return 0;
}

