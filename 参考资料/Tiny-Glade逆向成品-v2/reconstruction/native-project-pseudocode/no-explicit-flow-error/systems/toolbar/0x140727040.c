// VA 0x140727040, PDB extent 55 bytes
// toolbar::mei::widgets::LabelView::color
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::widgets::LabelView::color
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 55 */

undefined8 * pdb_140727040(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = pdb_14116e180(param_2);
  *(undefined4 *)(lVar2 + 600) = param_3;
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}

