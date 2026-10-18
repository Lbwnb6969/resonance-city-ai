// VA 0x141c36f00, PDB extent 58 bytes
// asset_pipe::store::locked_store
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: asset_pipe::store::locked_store
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/store.rs
   Extent: 58 */

undefined8 pdb_141c36f00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  undefined4 uStack_30;
  undefined *puStack_10;
  
  puStack_10 = &DAT_143cb30e0;
  uStack_30 = 0x3b9aca01;
  uVar1 = pdb_1426256a0(auStack_38);
  pdb_141c36f80(param_1,uVar1);
  return param_1;
}

