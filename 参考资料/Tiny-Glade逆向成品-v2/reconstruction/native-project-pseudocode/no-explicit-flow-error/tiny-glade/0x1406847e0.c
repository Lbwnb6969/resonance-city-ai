// VA 0x1406847e0, PDB extent 22 bytes
// tiny_glade::gui::gui_tod::impl$2::prepare_layout
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_tod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::gui::gui_tod::impl$2::prepare_layout
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_tod.rs
   Extent: 22 */

undefined8 * pdb_1406847e0(undefined8 *param_1,undefined4 *param_2,longlong param_3)

{
  *param_2 = 0;
  param_2[1] = *(undefined4 *)(param_3 + 0x4c);
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}

