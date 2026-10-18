// VA 0x140cee7d0, PDB extent 85 bytes
// clutter_pack_pipe::impl$70::resolve
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: clutter_pack_pipe::impl$70::resolve
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
   Extent: 85 */

void pdb_140cee7d0(longlong param_1,uint param_2,longlong param_3,longlong param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 uVar4;
  
  pdb_141c36ef0(param_1,param_3,param_4);
  uVar2 = (undefined4)*(undefined8 *)(param_1 + 0x20);
  lVar3 = (ulonglong)param_2 - (param_4 + 0x10U);
  uVar4 = lVar3 < 0;
  if (param_4 + 0x10U <= (ulonglong)param_2) goto LAB_140cee805;
  if (!(bool)uVar4) {
    do {
      uVar2 = pdb_142df6ca0();
LAB_140cee805:
    } while ((bool)uVar4);
  }
  if ((int)lVar3 == lVar3) {
    *(int *)(param_3 + 0x10) = (int)lVar3;
    *(undefined4 *)(param_3 + 0x14) = uVar2;
    return;
  }
  pdb_142df6ce0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

