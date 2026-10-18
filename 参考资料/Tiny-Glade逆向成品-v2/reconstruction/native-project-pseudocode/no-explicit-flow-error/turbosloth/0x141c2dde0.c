// VA 0x141c2dde0, PDB extent 74 bytes
// turbosloth::store::SingleTypeAssetStore::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: turbosloth::store::SingleTypeAssetStore::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 74 */

void pdb_141c2dde0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined7 uStack_1f;
  undefined1 uStack_18;
  undefined7 uStack_17;
  undefined1 uStack_10;
  undefined7 uStack_f;
  undefined1 uStack_8;
  
  uVar1 = _UNK_1435584f8;
  uStack_10 = (undefined1)_DAT_1435584f0;
  uStack_f = (undefined7)((ulonglong)_DAT_1435584f0 >> 8);
  uStack_8 = (undefined1)_UNK_1435584f8;
  uStack_20 = (undefined1)_DAT_1435584e0;
  uStack_1f = (undefined7)((ulonglong)_DAT_1435584e0 >> 8);
  uStack_18 = (undefined1)_UNK_1435584e8;
  uStack_17 = (undefined7)((ulonglong)_UNK_1435584e8 >> 8);
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(ulonglong *)((longlong)param_1 + 9) = CONCAT17(uStack_20,uStack_27);
  *(ulonglong *)((longlong)param_1 + 0x11) = CONCAT17(uStack_18,uStack_1f);
  *(ulonglong *)((longlong)param_1 + 0x19) = CONCAT17(uStack_10,uStack_17);
  *(ulonglong *)((longlong)param_1 + 0x21) = CONCAT17(uStack_8,uStack_f);
  param_1[5] = uVar1;
  return;
}

