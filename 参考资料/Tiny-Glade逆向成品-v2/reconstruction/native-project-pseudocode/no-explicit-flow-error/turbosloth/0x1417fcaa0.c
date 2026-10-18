// VA 0x1417fcaa0, PDB extent 552 bytes
// turbosloth::store::read_packaged_asset<asset::foliage::Grass2RuntimeConfigAsset,ref$<std::path::PathBuf> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::store::read_packaged_asset<asset::foliage::Grass2RuntimeConfigAsset,ref$<std::path::PathBuf>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 552 */

ulonglong * pdb_1417fcaa0(ulonglong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uStack_a8;
  byte *pbStack_a0;
  undefined8 uStack_98;
  ulonglong uStack_88;
  byte *pbStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  byte *pbStack_38;
  byte *pbStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  pdb_141c2d570(&uStack_88,param_3,param_4);
  pbStack_30 = pbStack_80;
  pdb_140f3e9e0(&uStack_a8,uVar1,uVar2,pbStack_80,uStack_78);
  if (uStack_88 != 0) {
    pub_1406abac0(pbStack_30,uStack_88,1);
  }
  pbStack_30 = pbStack_a0;
  pdb_140f55fb0(&uStack_88,pbStack_a0,uStack_98);
  if (uStack_a8 != 0) {
    pub_1406abac0(pbStack_30,uStack_a8,1);
  }
  if (SBORROW8(0,uStack_88)) {
    *param_1 = (ulonglong)pbStack_80;
    param_1[6] = 0x8000000000000000;
  }
  else {
    pbStack_30 = (byte *)uStack_88;
    pbStack_38 = pbStack_80;
    pdb_1414de380(&uStack_88,pbStack_80,uStack_78);
    if (SBORROW8(0,uStack_58)) {
      uVar3 = pdb_140f3fdf0(CONCAT71((int7)(-uStack_58 >> 8),0x28),1,&UNK_143071248);
      *param_1 = uVar3;
      param_1[6] = 0x8000000000000000;
    }
    else {
      param_1[4] = uStack_68;
      param_1[5] = uStack_60;
      param_1[2] = uStack_78;
      param_1[3] = uStack_70;
      param_1[7] = uStack_50;
      param_1[8] = uStack_48;
      param_1[9] = uStack_40;
      *param_1 = uStack_88;
      param_1[1] = (ulonglong)pbStack_80;
      param_1[6] = uStack_58;
    }
    if (pbStack_30 != (byte *)0x0) {
      pub_1406abac0(pbStack_38,(ulonglong)pbStack_30,1);
    }
  }
  return param_1;
}

