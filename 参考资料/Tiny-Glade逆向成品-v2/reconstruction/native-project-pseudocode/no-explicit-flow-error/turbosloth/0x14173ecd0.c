// VA 0x14173ecd0, PDB extent 320 bytes
// turbosloth::asset::impl$25::run_boxed<asset_pipe::texture::TextureAssetList,enum2$<core::convert::Infallible>,turbosloth::asset::StoreAssetRecipe<asset_pipe::texture::TextureAssetList> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::asset::impl$25::run_boxed<asset_pipe::texture::TextureAssetList,enum2$<core::convert::Infallible>,turbosloth::asset::StoreAssetRecipe<asset_pipe::texture::TextureAssetList>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 320 */

byte * pdb_14173ecd0(byte *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  uint7 uStack_2f;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)param_1;
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  pdb_14007ee60();
  pbVar8 = pub_1406abab0(0x80,8);
  if (pbVar8 != (byte *)0x0) {
    *(undefined8 *)(pbVar8 + 0x70) = uStack_38;
    *(ulonglong *)(pbVar8 + 0x78) = (ulonglong)uStack_2f << 8;
    *(undefined8 *)(pbVar8 + 0x60) = uStack_48;
    *(undefined8 *)(pbVar8 + 0x68) = uStack_40;
    *(undefined8 *)(pbVar8 + 0x50) = uStack_58;
    *(undefined8 *)(pbVar8 + 0x58) = uStack_50;
    *(undefined8 *)(pbVar8 + 0x40) = uStack_68;
    *(undefined8 *)(pbVar8 + 0x48) = uStack_60;
    *(undefined8 *)(pbVar8 + 0x30) = uVar7;
    *(undefined8 *)(pbVar8 + 0x38) = uStack_70;
    *(undefined8 *)(pbVar8 + 0x20) = uVar5;
    *(undefined8 *)(pbVar8 + 0x28) = uVar6;
    *(undefined8 *)(pbVar8 + 0x10) = uVar1;
    *(undefined8 *)(pbVar8 + 0x18) = uVar4;
    *(undefined8 *)pbVar8 = uVar2;
    *(undefined8 *)(pbVar8 + 8) = uVar3;
    pub_1406abac0(param_1,0x18,8);
    return pbVar8;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x80);
}

