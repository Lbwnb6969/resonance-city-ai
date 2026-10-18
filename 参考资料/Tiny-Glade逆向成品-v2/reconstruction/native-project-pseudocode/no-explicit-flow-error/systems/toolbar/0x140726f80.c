// VA 0x140726f80, PDB extent 48 bytes
// toolbar::mei::widgets::ImageView::blur_extend
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::widgets::ImageView::blur_extend
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 48 */

undefined8 * pdb_140726f80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = pdb_14116e440(param_2);
  *(undefined1 *)(lVar2 + 0x44) = 1;
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}

