// VA 0x140ceeea0, PDB extent 436 bytes
// clutter_pack_pipe::impl$32::visit_asset_dependencies
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: clutter_pack_pipe::impl$32::visit_asset_dependencies
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
   Extent: 436 */

void pdb_140ceeea0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10) << 2;
    lVar1 = *(longlong *)(param_1 + 8);
    do {
      pdb_14007ee60(lVar1,param_2,param_3);
      lVar2 = lVar2 + -4;
      lVar1 = lVar1 + 4;
    } while (lVar2 != 0);
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar1 = lVar2 + *(longlong *)(param_1 + 0x28) * 0xc;
    do {
      pdb_14007ee60(lVar2,param_2,param_3);
      pdb_14007ee60(lVar2 + 4,param_2,param_3);
      pdb_14007ee60(lVar2 + 8,param_2,param_3);
      lVar2 = lVar2 + 0xc;
    } while (lVar2 != lVar1);
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar1 = lVar2 + *(longlong *)(param_1 + 0x40) * 0xc;
    do {
      pdb_14007ee60(lVar2,param_2,param_3);
      pdb_14007ee60(lVar2 + 4,param_2,param_3);
      pdb_14007ee60(lVar2 + 8,param_2,param_3);
      lVar2 = lVar2 + 0xc;
    } while (lVar2 != lVar1);
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x50);
    lVar1 = lVar2 + *(longlong *)(param_1 + 0x58) * 0xc;
    do {
      pdb_14007ee60(lVar2,param_2,param_3);
      pdb_14007ee60(lVar2 + 4,param_2,param_3);
      pdb_14007ee60(lVar2 + 8,param_2,param_3);
      lVar2 = lVar2 + 0xc;
    } while (lVar2 != lVar1);
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x68);
    lVar1 = lVar2 + *(longlong *)(param_1 + 0x70) * 8;
    do {
      pdb_14007ee60(lVar2,param_2,param_3);
      pdb_14007ee60(lVar2 + 4,param_2,param_3);
      lVar2 = lVar2 + 8;
    } while (lVar2 != lVar1);
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x88) << 2;
    lVar1 = *(longlong *)(param_1 + 0x80);
    do {
      pdb_14007ee60(lVar1,param_2,param_3);
      lVar2 = lVar2 + -4;
      lVar1 = lVar1 + 4;
    } while (lVar2 != 0);
  }
  return;
}

