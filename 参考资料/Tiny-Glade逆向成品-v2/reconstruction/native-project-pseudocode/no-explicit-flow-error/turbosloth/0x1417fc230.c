// VA 0x1417fc230, PDB extent 501 bytes
// turbosloth::store::read_packaged_asset<asset_pipe::texture::TextureAssetList,ref$<std::path::PathBuf> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::store::read_packaged_asset<asset_pipe::texture::TextureAssetList,ref$<std::path::PathBuf>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 501 */

ulonglong * pdb_1417fc230(ulonglong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
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
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  pdb_141c2d570(&uStack_48,param_3,param_4);
  pbStack_30 = pbStack_40;
  pdb_140f3e9e0(&uStack_70,uVar1,uVar2,pbStack_40,uStack_38);
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
    pdb_1414dd530(&uStack_48,pbStack_40,uStack_38);
    if (SBORROW8(0,uStack_48)) {
      uVar3 = pdb_140f3fdf0(CONCAT71((int7)(-uStack_48 >> 8),0x28),1,&UNK_143071248);
      param_1[1] = uVar3;
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

