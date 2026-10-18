// VA 0x140cf9a60, PDB extent 62 bytes
// clutter_icon_pipe::IconPart::whole_mesh
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-icon-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: clutter_icon_pipe::IconPart::whole_mesh
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-icon-pipe/src/lib.rs
   Extent: 62 */

void pdb_140cf9a60(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar1;
  uVar2 = param_3[1];
  *param_1 = *param_3;
  param_1[1] = uVar2;
  param_1[2] = param_3[2];
  param_1[3] = 2;
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  return;
}

