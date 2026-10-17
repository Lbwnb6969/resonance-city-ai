// Matched PDB: core::hash::Hash::hash_slice<asset_pipe::texture::TextureLayerAssetDesc,turbosloth::id::Hash128>
// VA 0x1409027f0, PDB extent 209 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB:
   core::hash::Hash::hash_slice<asset_pipe::texture::TextureLayerAssetDesc,turbosloth::id::Hash128>
   Extent: 209 bytes. No whole-program auto-analysis. */

void pdb_1409027f0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (param_2 != 0) {
    param_2 = param_2 * 0x50;
    do {
      pdb_1417ca2e0(param_3,param_1[8],param_1[9]);
      uStack_48 = CONCAT71(uStack_48._1_7_,0xff);
      pdb_1417ca2e0(param_3,&uStack_48,1);
      lVar1 = *param_1;
      uStack_48 = (ulonglong)SBORROW8(0,lVar1);
      pdb_1417ca2e0(param_3,&uStack_48,8);
      if (SBORROW8(0,lVar1)) {
        uStack_48 = param_1[2];
        uStack_40 = (undefined4)param_1[3];
        uStack_3c = *(undefined4 *)((longlong)param_1 + 0x1c);
        pdb_1417ca2e0(param_3,&uStack_48,0x10);
      }
      else {
        pdb_1417ce070(param_1,param_3);
      }
      pdb_140905300(param_1 + 4,param_3);
      param_2 = param_2 + -0x50;
      param_1 = param_1 + 10;
    } while (param_2 != 0);
  }
  return;
}

