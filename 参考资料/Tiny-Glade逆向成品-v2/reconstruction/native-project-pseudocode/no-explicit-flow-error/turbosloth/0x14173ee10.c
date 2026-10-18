// VA 0x14173ee10, PDB extent 274 bytes
// turbosloth::asset::impl$25::run_boxed<asset::texture::SourceImageAsset,enum2$<core::convert::Infallible>,turbosloth::asset::StoreAssetRecipe<asset::texture::SourceImageAsset> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::asset::impl$25::run_boxed<asset::texture::SourceImageAsset,enum2$<core::convert::Infallible>,turbosloth::asset::StoreAssetRecipe<asset::texture::SourceImageAsset>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 274 */

byte * pdb_14173ee10(byte *param_1,undefined4 *param_2)

{
  byte *pbVar1;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 uStack_40;
  byte *pbStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  uStack_c8 = *(undefined8 *)param_1;
  uStack_c0 = *(undefined8 *)(param_1 + 8);
  uStack_b8 = *(undefined8 *)(param_1 + 0x10);
  uStack_b0 = *(undefined8 *)(param_1 + 0x18);
  uStack_a8 = *param_2;
  uStack_a4 = param_2[1];
  uStack_a0 = param_2[2];
  uStack_9c = param_2[3];
  uStack_98 = param_2[4];
  uStack_94 = param_2[5];
  uStack_90 = param_2[6];
  uStack_8c = param_2[7];
  uStack_40 = 0;
  pdb_14007ee60();
  pbVar1 = pub_1406abab0(0x90,8);
  if (pbVar1 != (byte *)0x0) {
    pub_142e32760(pbVar1,&uStack_c8,0x90);
    pub_1406abac0(param_1,0x20,8);
    return pbVar1;
  }
  pbStack_30 = param_1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x90);
}

