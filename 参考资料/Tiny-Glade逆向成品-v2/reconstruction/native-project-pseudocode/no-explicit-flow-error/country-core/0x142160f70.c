// VA 0x142160f70, PDB extent 403 bytes
// country_core::asset_libraries::ssbo_library::AssetSsboLibrary::add_existing<country_core::resources::color_id::StoneFoundationColorIdSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/ssbo_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::asset_libraries::ssbo_library::AssetSsboLibrary::add_existing<country_core::resources::color_id::StoneFoundationColorIdSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/ssbo_library.rs
   Extent: 403 */

void pdb_142160f70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  byte *pbVar2;
  longlong lVar3;
  longlong lVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  puStack_70 = &UNK_143464b1c;
  uStack_68 = 0x3d;
  pdb_14090e410(&uStack_60,param_2,param_3,&UNK_143464b1c,0x3d);
  pdb_14007ee60();
  pbVar2 = pub_1406abab0(0x48,8);
  if (pbVar2 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x48);
  }
  *(undefined8 *)(pbVar2 + 0x40) = uStack_20;
  *(undefined4 *)(pbVar2 + 0x30) = uStack_30;
  *(undefined4 *)(pbVar2 + 0x34) = uStack_2c;
  *(undefined4 *)(pbVar2 + 0x38) = uStack_28;
  *(undefined4 *)(pbVar2 + 0x3c) = uStack_24;
  *(undefined4 *)(pbVar2 + 0x20) = (undefined4)uStack_40;
  *(undefined4 *)(pbVar2 + 0x24) = uStack_40._4_4_;
  *(undefined4 *)(pbVar2 + 0x28) = (undefined4)uStack_38;
  *(undefined4 *)(pbVar2 + 0x2c) = uStack_38._4_4_;
  *(undefined4 *)(pbVar2 + 0x10) = (undefined4)uStack_50;
  *(undefined4 *)(pbVar2 + 0x14) = uStack_50._4_4_;
  *(undefined4 *)(pbVar2 + 0x18) = (undefined4)uStack_48;
  *(undefined4 *)(pbVar2 + 0x1c) = uStack_48._4_4_;
  *(undefined4 *)pbVar2 = (undefined4)uStack_60;
  *(undefined4 *)(pbVar2 + 4) = uStack_60._4_4_;
  *(undefined4 *)(pbVar2 + 8) = (undefined4)uStack_58;
  *(undefined4 *)(pbVar2 + 0xc) = uStack_58._4_4_;
  lVar4 = -0x2e5c26bd8061b0d0;
  lVar3 = pdb_1421634e0(param_1,0xd1a3d9427f9e4f30,pbVar2);
  if (lVar3 != 1) {
    return;
  }
  if (*(longlong *)(lVar4 + 0x18) == 0x3d) {
    iVar1 = pub_142e32750(&UNK_143464b1c,*(undefined8 *)(lVar4 + 0x10),0x3d);
    if (iVar1 == 0) {
      uStack_60 = &UNK_1434647c0;
      uStack_58 = pdb_1402ed420;
      uStack_50 = &puStack_70;
      uStack_48 = pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_1434646d8,&uStack_60,&UNK_143464718);
    }
  }
  uStack_60 = &UNK_1434647c0;
  uStack_58 = pdb_1402ed420;
  uStack_48 = pdb_1402ed400;
  uStack_40 = &puStack_70;
  uStack_38 = pdb_1402ed400;
  uStack_50 = (undefined **)(lVar4 + 0x10);
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_143464610,&uStack_60,&UNK_1434646c0);
}

