// Matched PDB: core::hash::Hash::hash_slice<asset_pipe::texture::TextureAssetListEntry,turbosloth::id::Hash128>
// VA 0x1409028d0, PDB extent 168 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB:
   core::hash::Hash::hash_slice<asset_pipe::texture::TextureAssetListEntry,turbosloth::id::Hash128>
   Extent: 168 bytes. No whole-program auto-analysis. */

void pdb_1409028d0(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (param_2 != 0) {
    param_2 = param_2 * 0x50;
    param_1 = param_1 + 0x28;
    do {
      pdb_1417ca2e0(param_3,*(undefined8 *)(param_1 + -0x10),*(undefined8 *)(param_1 + -8));
      uStack_38 = CONCAT31(uStack_38._1_3_,0xff);
      pdb_1417ca2e0(param_3,&uStack_38,1);
      uStack_38 = *(undefined4 *)(param_1 + -0x28);
      uStack_34 = *(undefined4 *)(param_1 + -0x24);
      uStack_30 = *(undefined4 *)(param_1 + -0x20);
      uStack_2c = *(undefined4 *)(param_1 + -0x1c);
      pdb_1417ca2e0(param_3,&uStack_38,0x10);
      pdb_140905300(param_1,param_3);
      uStack_38 = CONCAT31(uStack_38._1_3_,*(undefined1 *)(param_1 + 0x18));
      pdb_1417ca2e0(param_3,&uStack_38,1);
      param_1 = param_1 + 0x50;
      param_2 = param_2 + -0x50;
    } while (param_2 != 0);
  }
  return;
}

