// VA 0x14173e240, PDB extent 195 bytes
// turbosloth::asset::impl$25::clone_boxed<clutter_pack_pipe::ClutterObjectList,enum2$<core::convert::Infallible>,turbosloth::asset::StoreAssetRecipe<clutter_pack_pipe::ClutterObjectList> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::asset::impl$25::clone_boxed<clutter_pack_pipe::ClutterObjectList,enum2$<core::convert::Infallible>,turbosloth::asset::StoreAssetRecipe<clutter_pack_pipe::ClutterObjectList>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 195 */

void pdb_14173e240(undefined8 *param_1)

{
  byte *pbVar1;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  pdb_1415e65e0(&uStack_68,param_1 + 2);
  uStack_38 = uStack_68;
  uStack_30 = uStack_60;
  uStack_28 = uStack_58;
  uStack_24 = uStack_54;
  uStack_20 = uStack_50;
  uStack_1c = uStack_4c;
  uStack_78 = (undefined4)*param_1;
  uStack_74 = (undefined4)((ulonglong)*param_1 >> 0x20);
  uStack_70 = (undefined4)param_1[1];
  uStack_6c = (undefined4)((ulonglong)param_1[1] >> 0x20);
  uStack_48 = uStack_78;
  uStack_44 = uStack_74;
  uStack_40 = uStack_70;
  uStack_3c = uStack_6c;
  pdb_14007ee60();
  pbVar1 = pub_1406abab0(0x30,0x10);
  if (pbVar1 != (byte *)0x0) {
    *(ulonglong *)(pbVar1 + 0x20) = CONCAT44(uStack_24,uStack_28);
    *(ulonglong *)(pbVar1 + 0x28) = CONCAT44(uStack_1c,uStack_20);
    *(undefined8 *)(pbVar1 + 0x10) = uStack_38;
    *(undefined8 *)(pbVar1 + 0x18) = uStack_30;
    *(ulonglong *)pbVar1 = CONCAT44(uStack_44,uStack_48);
    *(ulonglong *)(pbVar1 + 8) = CONCAT44(uStack_3c,uStack_40);
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(0x10,0x30);
}

