// VA 0x140728ab0, PDB extent 75 bytes
// toolbar::mei::widgets::impl$3::render
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::widgets::impl$3::render
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 75 */

void pdb_140728ab0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = pdb_140de9d00(*(undefined4 *)(param_1 + 600),*(undefined4 *)(param_2 + 3));
  pdb_140cb63a0(param_1,uVar1,uVar2,uVar3,*param_2);
  return;
}

