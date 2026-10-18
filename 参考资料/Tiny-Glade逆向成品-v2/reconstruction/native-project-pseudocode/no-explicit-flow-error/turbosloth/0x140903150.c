// VA 0x140903150, PDB extent 341 bytes
// turbosloth::asset::impl$25::run_boxed<asset::texture::blob::TextureAssetBlob,anyhow::Error,enum2$<asset_pipe::texture::BuildTextureAsset> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::asset::impl$25::run_boxed<asset::texture::blob::TextureAssetBlob,anyhow::Error,enum2$<asset_pipe::texture::BuildTextureAsset>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 341 */

byte * pdb_140903150(byte *param_1,undefined4 *param_2)

{
  byte *pbVar1;
  undefined1 auStack_338 [640];
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
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
  uStack_b8 = *param_2;
  uStack_b4 = param_2[1];
  uStack_b0 = param_2[2];
  uStack_ac = param_2[3];
  uStack_a8 = param_2[4];
  uStack_a4 = param_2[5];
  uStack_a0 = param_2[6];
  uStack_9c = param_2[7];
  uStack_48 = 0;
  pdb_14007ee60();
  pbVar1 = pub_1406abab0(0x300,0x10);
  if (pbVar1 != (byte *)0x0) {
    pub_142e32760(pbVar1,auStack_338,0x300);
    pub_1406abac0(param_1,0x50,0x10);
    return pbVar1;
  }
  pbStack_30 = param_1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(0x10,0x300);
}

