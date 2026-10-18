// VA 0x140728a60, PDB extent 73 bytes
// toolbar::mei::widgets::impl$3::prepare_layout
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::widgets::impl$3::prepare_layout
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 73 */

undefined4 * pdb_140728a60(undefined4 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  pdb_140cb6740(param_2,*param_3);
  puVar3 = (undefined4 *)pdb_140cb6390(param_2);
  uVar1 = *puVar3;
  uVar2 = puVar3[1];
  *param_1 = 0;
  param_1[1] = uVar1;
  param_1[2] = 0;
  param_1[3] = uVar2;
  return param_1;
}

