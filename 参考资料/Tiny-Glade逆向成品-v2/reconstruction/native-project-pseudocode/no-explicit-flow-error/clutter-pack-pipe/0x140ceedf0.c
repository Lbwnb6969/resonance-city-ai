// VA 0x140ceedf0, PDB extent 32 bytes
// clutter_pack_pipe::impl$10::run
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: clutter_pack_pipe::impl$10::run
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
   Extent: 32 */

undefined8 *
pdb_140ceedf0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1[5] = param_3;
  param_1[4] = param_2;
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *param_1 = *param_4;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  *(undefined1 *)(param_1 + 6) = 0;
  return param_1;
}

