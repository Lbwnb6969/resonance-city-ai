// VA 0x141c2e960, PDB extent 492 bytes
// turbosloth::store::DiskStore::artifact_path
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: turbosloth::store::DiskStore::artifact_path
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 492 */

undefined8 pdb_141c2e960(undefined8 param_1,longlong param_2,ulonglong *param_3,undefined8 param_4)

{
  ulonglong uStack_b0;
  byte *pbStack_a8;
  undefined8 uStack_a0;
  ulonglong uStack_90;
  byte *pbStack_88;
  undefined8 **ppuStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  ulonglong *puStack_58;
  code *pcStack_50;
  byte *pbStack_40;
  undefined8 **ppuStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  pdb_140f3e9e0(&uStack_b0,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
                &UNK_14339ef2e,9);
  pbStack_40 = pbStack_a8;
  pcStack_70 = pdb_140f71da0;
  ppuStack_78 = &puStack_58;
  puStack_58 = param_3;
  pcStack_50 = (code *)param_4;
  pdb_140f60760(&uStack_90,&UNK_14339ee67,&ppuStack_78);
  pcStack_50 = pdb_140001020;
  puStack_58 = &uStack_90;
  pdb_140f60760(&ppuStack_78,&UNK_14339ee60,&puStack_58);
  if (uStack_90 != 0) {
    pub_1406abac0(pbStack_88,uStack_90,1);
  }
  ppuStack_38 = ppuStack_78;
  pcStack_60 = pcStack_70;
  pdb_140f3e9e0(param_1,pbStack_40,uStack_a0,pcStack_70,uStack_68);
  if (ppuStack_38 != (ulonglong **)0x0) {
    pub_1406abac0((byte *)pcStack_60,(ulonglong)ppuStack_38,1);
  }
  if (uStack_b0 != 0) {
    pub_1406abac0(pbStack_40,uStack_b0,1);
  }
  return param_1;
}

