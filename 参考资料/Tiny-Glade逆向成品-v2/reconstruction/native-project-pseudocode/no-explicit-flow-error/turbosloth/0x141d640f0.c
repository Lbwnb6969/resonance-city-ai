// VA 0x141d640f0, PDB extent 501 bytes
// turbosloth::store::read_packaged_asset<asset_pipe::texture::TextureAssetList,ref$<std::path::Path> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::store::read_packaged_asset<asset_pipe::texture::TextureAssetList,ref$<std::path::Path>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 501 */

ulonglong *
pdb_141d640f0(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulonglong uVar1;
  ulonglong uStack_70;
  byte *pbStack_68;
  undefined8 uStack_60;
  byte *pbStack_50;
  ulonglong uStack_48;
  byte *pbStack_40;
  ulonglong uStack_38;
  byte *pbStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  pdb_141c2d570(&uStack_48,param_4,param_5);
  pbStack_30 = pbStack_40;
  pdb_140f3e9e0(&uStack_70,param_2,param_3,pbStack_40,uStack_38);
  if (uStack_48 != 0) {
    pub_1406abac0(pbStack_30,uStack_48,1);
  }
  pbStack_30 = pbStack_68;
  pdb_140f55fb0(&uStack_48,pbStack_68,uStack_60);
  if (uStack_70 != 0) {
    pub_1406abac0(pbStack_30,uStack_70,1);
  }
  if (SBORROW8(0,uStack_48)) {
    param_1[1] = (ulonglong)pbStack_40;
    *param_1 = 0x8000000000000000;
  }
  else {
    pbStack_30 = (byte *)uStack_48;
    pbStack_50 = pbStack_40;
    pdb_1426d80b0(&uStack_48,pbStack_40,uStack_38);
    if (SBORROW8(0,uStack_48)) {
      uVar1 = pdb_140f3fdf0(CONCAT71((int7)(-uStack_48 >> 8),0x28),1,&UNK_143584e78);
      param_1[1] = uVar1;
      *param_1 = 0x8000000000000000;
    }
    else {
      *param_1 = uStack_48;
      param_1[1] = (ulonglong)pbStack_40;
      param_1[2] = uStack_38;
    }
    if (pbStack_30 != (byte *)0x0) {
      pub_1406abac0(pbStack_50,(ulonglong)pbStack_30,1);
    }
  }
  return param_1;
}

