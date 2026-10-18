// VA 0x140d9d1b0, PDB extent 110 bytes
// asset_pipe::texture::source_image_format
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: asset_pipe::texture::source_image_format
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture.rs
   Extent: 110 */

undefined1 * pdb_140d9d1b0(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  int aiStack_20 [2];
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  uStack_30 = param_2;
  uStack_28 = param_3;
  lVar1 = pdb_140f3ec80(param_2,param_3);
  if (lVar1 != 0) {
    pdb_140f69110(aiStack_20,lVar1,param_3);
    if (aiStack_20[0] != 1) {
      pdb_1417f0560(param_1,uStack_18,uStack_10);
      return param_1;
    }
  }
  uVar2 = pdb_142db7050(&uStack_30);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *param_1 = 1;
  return param_1;
}

