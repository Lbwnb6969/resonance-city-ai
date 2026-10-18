// VA 0x142af2dc0, PDB extent 352 bytes
// turbosloth::asset::impl$12::serialize<asset::texture::blob::TextureAssetBlob,serde_json::value::ser::Serializer>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::asset::impl$12::serialize<asset::texture::blob::TextureAssetBlob,serde_json::value::ser::Serializer>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 352 */

undefined1 * pdb_142af2dc0(undefined1 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  uStack_88 = 0x8000000000000000;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_19 = 1;
  pdb_141c2d650(&uStack_58,*param_2,param_2[1]);
  lVar1 = pdb_142715c80(&uStack_88,&UNK_143643f90,4,&uStack_58);
  if (lVar1 == 0) {
    if (CONCAT44(uStack_54,uStack_58) != 0) {
      pub_1406abac0((byte *)CONCAT44(uStack_4c,uStack_50),CONCAT44(uStack_54,uStack_58),1);
    }
    uStack_38 = uStack_68;
    uStack_34 = uStack_64;
    uStack_30 = (undefined4)uStack_60;
    uStack_2c = uStack_60._4_4_;
    uStack_48 = uStack_78;
    uStack_44 = uStack_74;
    uStack_40 = (undefined4)uStack_70;
    uStack_3c = uStack_70._4_4_;
    uStack_58 = (undefined4)uStack_88;
    uStack_54 = uStack_88._4_4_;
    uStack_50 = uStack_80;
    uStack_4c = uStack_7c;
    uStack_19 = 0;
    pdb_140ddcdc0(param_1,&uStack_58);
  }
  else {
    *(longlong *)(param_1 + 8) = lVar1;
    *param_1 = 6;
    if (CONCAT44(uStack_54,uStack_58) != 0) {
      pub_1406abac0((byte *)CONCAT44(uStack_4c,uStack_50),CONCAT44(uStack_54,uStack_58),1);
    }
    pdb_142af2a50(&uStack_88);
  }
  return param_1;
}

