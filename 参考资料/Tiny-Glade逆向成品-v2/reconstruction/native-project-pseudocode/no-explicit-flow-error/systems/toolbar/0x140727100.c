// VA 0x140727100, PDB extent 75 bytes
// toolbar::mei::widgets::LabelView::max_width
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::widgets::LabelView::max_width
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 75 */

undefined8 * pdb_140727100(undefined8 *param_1,undefined8 *param_2,float param_3)

{
  undefined8 uVar1;
  
  uVar1 = pdb_14116e180(param_2);
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  pdb_140cb5df0(uVar1,param_3);
  param_1[2] = param_2[2];
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return param_1;
}

