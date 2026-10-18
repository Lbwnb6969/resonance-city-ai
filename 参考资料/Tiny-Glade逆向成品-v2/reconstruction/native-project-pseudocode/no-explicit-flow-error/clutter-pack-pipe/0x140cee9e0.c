// VA 0x140cee9e0, PDB extent 75 bytes
// clutter_pack_pipe::impl$62::resolve
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: clutter_pack_pipe::impl$62::resolve
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
   Extent: 75 */

longlong pdb_140cee9e0(undefined8 *param_1,uint param_2,int *param_3,ulonglong param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 uVar5;
  
  iVar3 = (int)param_1[4];
  lVar4 = param_2 - param_4;
  uVar5 = lVar4 < 0;
  if (param_4 <= param_2) goto LAB_140cee9f6;
  if (!(bool)uVar5) {
    do {
      iVar3 = pdb_142df6ca0();
LAB_140cee9f6:
    } while ((bool)uVar5);
  }
  if ((int)lVar4 == lVar4) {
    *param_3 = (int)lVar4;
    param_3[1] = iVar3;
    uVar2 = param_1[1];
    *(undefined8 *)(param_3 + 4) = *param_1;
    *(undefined8 *)(param_3 + 6) = uVar2;
    return param_4 + 0x10;
  }
  pdb_142df6ce0();
  pcVar1 = (code *)swi(3);
  lVar4 = (*pcVar1)();
  return lVar4;
}

