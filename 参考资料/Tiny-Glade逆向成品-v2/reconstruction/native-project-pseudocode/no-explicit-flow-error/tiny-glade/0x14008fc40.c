// VA 0x14008fc40, PDB extent 23 bytes
// tiny_glade::gui::gui_fog::impl$2::prepare_layout
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_fog.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::gui::gui_fog::impl$2::prepare_layout
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_fog.rs
   Extent: 23 */

undefined8 * pdb_14008fc40(undefined8 *param_1,longlong param_2,longlong param_3)

{
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_3 + 0x4c);
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}

