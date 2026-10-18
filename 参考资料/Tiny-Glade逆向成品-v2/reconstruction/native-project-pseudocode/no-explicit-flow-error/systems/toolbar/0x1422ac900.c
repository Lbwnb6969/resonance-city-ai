// VA 0x1422ac900, PDB extent 14 bytes
// toolbar::menu::thumbnail_scroll::impl$3::prepare_layout
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/thumbnail_scroll.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::menu::thumbnail_scroll::impl$3::prepare_layout
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/thumbnail_scroll.rs
   Extent: 14 */

undefined8 * pdb_1422ac900(undefined8 *param_1,longlong param_2)

{
  *(undefined1 *)(param_2 + 0x77) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}

