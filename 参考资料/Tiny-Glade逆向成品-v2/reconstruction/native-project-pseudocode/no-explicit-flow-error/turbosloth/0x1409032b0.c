// VA 0x1409032b0, PDB extent 325 bytes
// turbosloth::asset::impl$25::run_boxed<asset::texture::blob::TextureAssetBlob,anyhow::Error,asset_pipe::texture::BuildTextureLayer>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::asset::impl$25::run_boxed<asset::texture::blob::TextureAssetBlob,anyhow::Error,asset_pipe::texture::BuildTextureLayer>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 325 */

byte * pdb_1409032b0(byte *param_1,undefined4 *param_2)

{
  byte *pbVar1;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  byte *pbStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  uStack_58 = *(undefined8 *)(param_1 + 0x40);
  uStack_50 = *(undefined8 *)(param_1 + 0x48);
  uStack_98 = *(undefined8 *)param_1;
  uStack_90 = *(undefined8 *)(param_1 + 8);
  uStack_88 = *(undefined8 *)(param_1 + 0x10);
  uStack_80 = *(undefined8 *)(param_1 + 0x18);
  uStack_78 = *(undefined4 *)(param_1 + 0x20);
  uStack_74 = *(undefined4 *)(param_1 + 0x24);
  uStack_70 = *(undefined4 *)(param_1 + 0x28);
  uStack_6c = *(undefined4 *)(param_1 + 0x2c);
  uStack_68 = *(undefined4 *)(param_1 + 0x30);
  uStack_64 = *(undefined4 *)(param_1 + 0x34);
  uStack_60 = *(undefined4 *)(param_1 + 0x38);
  uStack_5c = *(undefined4 *)(param_1 + 0x3c);
  uStack_268 = *param_2;
  uStack_264 = param_2[1];
  uStack_260 = param_2[2];
  uStack_25c = param_2[3];
  uStack_258 = param_2[4];
  uStack_254 = param_2[5];
  uStack_250 = param_2[6];
  uStack_24c = param_2[7];
  uStack_48 = 0;
  pdb_14007ee60();
  pbVar1 = pub_1406abab0(0x230,0x10);
  if (pbVar1 != (byte *)0x0) {
    pub_142e32760(pbVar1,&uStack_268,0x230);
    pub_1406abac0(param_1,0x50,0x10);
    return pbVar1;
  }
  pbStack_30 = param_1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(0x10,0x230);
}

