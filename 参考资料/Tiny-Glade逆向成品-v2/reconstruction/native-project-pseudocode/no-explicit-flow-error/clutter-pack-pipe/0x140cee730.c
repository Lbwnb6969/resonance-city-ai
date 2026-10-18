// VA 0x140cee730, PDB extent 154 bytes
// clutter_pack_pipe::impl$21::resolve
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: clutter_pack_pipe::impl$21::resolve
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
   Extent: 154 */

void pdb_140cee730(longlong param_1,uint param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  bool bVar2;
  
  if ((param_2 & 1) == 0) {
    *param_3 = 0;
  }
  else {
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 4);
    *param_3 = 1;
  }
  if ((param_2 & 0x100) == 0) {
    param_3[8] = 0;
  }
  else {
    *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    param_3[8] = 1;
  }
  if ((param_2 & 0x10000) == 0) {
    param_3[0x10] = 0;
  }
  else {
    *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    param_3[0x10] = 1;
  }
  bVar2 = (param_2 & 0x1000000) != 0;
  if (bVar2) {
    *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  }
  param_3[0x18] = bVar2;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_3 + 0x28) = uVar1;
  *(undefined4 *)(param_3 + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined8 *)(param_3 + 0x34) = *(undefined8 *)(param_1 + 0x34);
  return;
}

