// VA 0x14173e310, PDB extent 142 bytes
// turbosloth::asset::impl$25::clone_boxed<asset_pipe::texture::TextureAssetList,enum2$<core::convert::Infallible>,turbosloth::asset::StoreAssetRecipe<asset_pipe::texture::TextureAssetList> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::asset::impl$25::clone_boxed<asset_pipe::texture::TextureAssetList,enum2$<core::convert::Infallible>,turbosloth::asset::StoreAssetRecipe<asset_pipe::texture::TextureAssetList>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 142 */

void pdb_14173e310(undefined8 param_1)

{
  byte *pbVar1;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  uStack_10 = 0xfffffffffffffffe;
  pdb_1415e7700(&uStack_28,param_1);
  pdb_14007ee60();
  pbVar1 = pub_1406abab0(0x18,8);
  if (pbVar1 != (byte *)0x0) {
    *(undefined8 *)(pbVar1 + 0x10) = uStack_18;
    *(undefined8 *)pbVar1 = uStack_28;
    *(undefined8 *)(pbVar1 + 8) = uStack_20;
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x18);
}

