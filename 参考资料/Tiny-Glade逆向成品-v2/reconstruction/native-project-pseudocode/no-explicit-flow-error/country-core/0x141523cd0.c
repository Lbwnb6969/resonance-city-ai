// VA 0x141523cd0, PDB extent 419 bytes
// country_core::asset_libraries::ssbo_library::AssetSsboLibrary::add_existing<country_core::shader::nani::inc::uber_material::UberMaterial>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/ssbo_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::asset_libraries::ssbo_library::AssetSsboLibrary::add_existing<country_core::shader::nani::inc::uber_material::UberMaterial>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/ssbo_library.rs
   Extent: 419 */

void pdb_141523cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  puStack_70 = &UNK_14331d6a9;
  uStack_68 = 0x3c;
  uStack_40 = (undefined **)0x0;
  uStack_38 = (code *)((ulonglong)uStack_38 & 0xffffffff00000000);
  uStack_50 = (undefined **)&UNK_14331d6a9;
  uStack_48 = (code *)0x3c;
  uStack_60 = (undefined *)param_2;
  uStack_58 = (code *)param_3;
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
  lVar4 = -0x1c6649a2f6c7b667;
  lVar3 = pdb_140bf4e90(param_1,0xe399b65d09384999,pbVar2);
  if (lVar3 != 1) {
    return;
  }
  if (*(longlong *)(lVar4 + 0x18) == 0x3c) {
    iVar1 = pub_142e32750(&UNK_14331d6a9,*(undefined8 *)(lVar4 + 0x10),0x3c);
    if (iVar1 == 0) {
      uStack_60 = &UNK_14331ae70;
      uStack_58 = pdb_1402ed420;
      uStack_50 = &puStack_70;
      uStack_48 = pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14331a628,&uStack_60,&UNK_14331a668);
    }
  }
  uStack_60 = &UNK_14331ae70;
  uStack_58 = pdb_1402ed420;
  uStack_48 = pdb_1402ed400;
  uStack_40 = &puStack_70;
  uStack_38 = pdb_1402ed400;
  uStack_50 = (undefined **)(lVar4 + 0x10);
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14331a560,&uStack_60,&UNK_14331a610);
}

