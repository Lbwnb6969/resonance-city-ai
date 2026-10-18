// VA 0x1407262e0, PDB extent 62 bytes
// toolbar::mei::widgets::PillButtonView::inactive_opacity
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::widgets::PillButtonView::inactive_opacity
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 62 */

undefined8 * pdb_1407262e0(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = pdb_14116e020(param_2);
  *(undefined4 *)(lVar2 + 0x40) = param_3;
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}

