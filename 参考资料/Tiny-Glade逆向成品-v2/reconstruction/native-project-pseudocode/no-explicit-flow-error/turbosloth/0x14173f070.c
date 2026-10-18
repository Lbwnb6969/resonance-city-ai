// VA 0x14173f070, PDB extent 290 bytes
// turbosloth::asset::impl$25::run_boxed<clutter_pack_pipe::ClutterObjectList,enum2$<core::convert::Infallible>,turbosloth::asset::StoreAssetRecipe<clutter_pack_pipe::ClutterObjectList> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::asset::impl$25::run_boxed<clutter_pack_pipe::ClutterObjectList,enum2$<core::convert::Infallible>,turbosloth::asset::StoreAssetRecipe<clutter_pack_pipe::ClutterObjectList>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 290 */

byte * pdb_14173f070(byte *param_1,undefined4 *param_2)

{
  byte *pbVar1;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 uStack_48;
  byte *pbStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  uStack_f8 = *(undefined8 *)param_1;
  uStack_f0 = *(undefined8 *)(param_1 + 8);
  uStack_e8 = *(undefined8 *)(param_1 + 0x10);
  uStack_e0 = *(undefined8 *)(param_1 + 0x18);
  uStack_d8 = *(undefined4 *)(param_1 + 0x20);
  uStack_d4 = *(undefined4 *)(param_1 + 0x24);
  uStack_d0 = *(undefined4 *)(param_1 + 0x28);
  uStack_cc = *(undefined4 *)(param_1 + 0x2c);
  uStack_c8 = *param_2;
  uStack_c4 = param_2[1];
  uStack_c0 = param_2[2];
  uStack_bc = param_2[3];
  uStack_b8 = param_2[4];
  uStack_b4 = param_2[5];
  uStack_b0 = param_2[6];
  uStack_ac = param_2[7];
  uStack_48 = 0;
  pdb_14007ee60();
  pbVar1 = pub_1406abab0(0xc0,0x10);
  if (pbVar1 != (byte *)0x0) {
    pub_142e32760(pbVar1,&uStack_f8,0xc0);
    pub_1406abac0(param_1,0x30,0x10);
    return pbVar1;
  }
  pbStack_30 = param_1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(0x10,0xc0);
}

