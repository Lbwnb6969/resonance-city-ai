// VA 0x14173ef30, PDB extent 309 bytes
// turbosloth::asset::impl$25::run_boxed<clutter_pack_pipe::ClutterMeshAsset,enum2$<core::convert::Infallible>,turbosloth::asset::StoreAssetRecipe<clutter_pack_pipe::ClutterMeshAsset> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::asset::impl$25::run_boxed<clutter_pack_pipe::ClutterMeshAsset,enum2$<core::convert::Infallible>,turbosloth::asset::StoreAssetRecipe<clutter_pack_pipe::ClutterMeshAsset>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 309 */

byte * pdb_14173ef30(byte *param_1,undefined4 *param_2)

{
  byte *pbVar1;
  undefined1 auStack_210 [200];
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 uStack_38;
  byte *pbStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  pub_142e32760(auStack_210,param_1,200);
  uStack_148 = *param_2;
  uStack_144 = param_2[1];
  uStack_140 = param_2[2];
  uStack_13c = param_2[3];
  uStack_138 = param_2[4];
  uStack_134 = param_2[5];
  uStack_130 = param_2[6];
  uStack_12c = param_2[7];
  uStack_38 = 0;
  pdb_14007ee60();
  pbVar1 = pub_1406abab0(0x1e0,8);
  if (pbVar1 != (byte *)0x0) {
    pub_142e32760(pbVar1,auStack_210,0x1e0);
    pub_1406abac0(param_1,200,8);
    return pbVar1;
  }
  pbStack_30 = param_1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x1e0);
}

