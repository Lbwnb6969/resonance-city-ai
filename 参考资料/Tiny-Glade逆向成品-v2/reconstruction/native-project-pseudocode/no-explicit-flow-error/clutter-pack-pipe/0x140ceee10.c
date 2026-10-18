// VA 0x140ceee10, PDB extent 99 bytes
// clutter_pack_pipe::impl$75::visit_asset_dependencies
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: clutter_pack_pipe::impl$75::visit_asset_dependencies
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
   Extent: 99 */

void pdb_140ceee10(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  pcVar1 = *(code **)(param_3 + 0x20);
  (*pcVar1)(param_2,*param_1,param_1[1]);
  lVar2 = param_1[4];
  if (lVar2 != 0) {
    lVar3 = param_1[3];
    lVar4 = 0;
    do {
      (*pcVar1)(param_2,*(undefined8 *)(lVar3 + lVar4),*(undefined8 *)(lVar3 + 8 + lVar4));
      lVar4 = lVar4 + 0x10;
    } while (lVar2 << 4 != lVar4);
  }
  return;
}

