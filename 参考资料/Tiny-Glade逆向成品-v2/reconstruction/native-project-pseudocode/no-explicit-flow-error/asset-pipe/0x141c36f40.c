// VA 0x141c36f40, PDB extent 61 bytes
// asset_pipe::store::try_locked_store
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: asset_pipe::store::try_locked_store
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/store.rs
   Extent: 61 */

ulonglong * pdb_141c36f40(ulonglong *param_1)

{
  bool bVar1;
  
  LOCK();
  bVar1 = _DAT_143cb30e0 == 0;
  if (bVar1) {
    _DAT_143cb30e0 = 1;
  }
  UNLOCK();
  if (bVar1) {
    pdb_141c36f80(param_1 + 1,&DAT_143cb30e0);
  }
  *param_1 = (ulonglong)bVar1;
  return param_1;
}

