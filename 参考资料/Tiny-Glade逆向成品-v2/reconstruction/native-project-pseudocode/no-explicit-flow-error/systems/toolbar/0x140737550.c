// VA 0x140737550, PDB extent 50 bytes
// toolbar::mei::layout::LayoutStyle::size
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/layout.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::layout::LayoutStyle::size
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/layout.rs
   Extent: 50 */

void pdb_140737550(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_3[1];
  param_2[5] = *param_3;
  param_2[6] = uVar1;
  param_1[8] = param_2[8];
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  return;
}

