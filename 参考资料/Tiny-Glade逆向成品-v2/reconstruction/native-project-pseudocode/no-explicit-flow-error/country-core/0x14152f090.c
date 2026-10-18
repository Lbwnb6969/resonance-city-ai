// VA 0x14152f090, PDB extent 565 bytes
// country_core::asset_libraries::ssbo_library::AssetSsboLibrary::add_new_with_data<country_core::systems::render_loop::compute_passes::grass2::Grass2ActiveInstanceSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/ssbo_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::asset_libraries::ssbo_library::AssetSsboLibrary::add_new_with_data<country_core::systems::render_loop::compute_passes::grass2::Grass2ActiveInstanceSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/ssbo_library.rs
   Extent: 565 */

void pdb_14152f090(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  byte *pbVar3;
  longlong lVar4;
  longlong lVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  uVar2 = pdb_141b12e70(param_2,param_3,param_4 * 4);
  uStack_68 = (byte *)uVar2;
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(8,8);
  if (pbVar3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,8);
  }
  *(undefined8 *)pbVar3 = uVar2;
  puStack_78 = &UNK_14331e107;
  uStack_70 = 0x54;
  uStack_60 = (code *)&UNK_14331b4c8;
  uStack_48 = (undefined **)0x0;
  uStack_40._0_4_ = 0;
  uStack_58 = (undefined **)&UNK_14331e107;
  uStack_50 = (code *)0x54;
  uStack_68 = pbVar3;
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(0x48,8);
  if (pbVar3 != (byte *)0x0) {
    *(undefined8 *)(pbVar3 + 0x40) = uStack_28;
    *(undefined4 *)(pbVar3 + 0x30) = uStack_38;
    *(undefined4 *)(pbVar3 + 0x34) = uStack_34;
    *(undefined4 *)(pbVar3 + 0x38) = uStack_30;
    *(undefined4 *)(pbVar3 + 0x3c) = uStack_2c;
    *(undefined4 *)(pbVar3 + 0x20) = (undefined4)uStack_48;
    *(undefined4 *)(pbVar3 + 0x24) = uStack_48._4_4_;
    *(undefined4 *)(pbVar3 + 0x28) = (undefined4)uStack_40;
    *(undefined4 *)(pbVar3 + 0x2c) = uStack_40._4_4_;
    *(undefined4 *)(pbVar3 + 0x10) = (undefined4)uStack_58;
    *(undefined4 *)(pbVar3 + 0x14) = uStack_58._4_4_;
    *(undefined4 *)(pbVar3 + 0x18) = (undefined4)uStack_50;
    *(undefined4 *)(pbVar3 + 0x1c) = uStack_50._4_4_;
    *(undefined4 *)pbVar3 = (undefined4)uStack_68;
    *(undefined4 *)(pbVar3 + 4) = uStack_68._4_4_;
    *(undefined4 *)(pbVar3 + 8) = (undefined4)uStack_60;
    *(undefined4 *)(pbVar3 + 0xc) = uStack_60._4_4_;
    lVar5 = 0x15acf357112ef4f6;
    lVar4 = pdb_140bf4e90(param_1,0x15acf357112ef4f6,pbVar3);
    if (lVar4 != 1) {
      return;
    }
    if (*(longlong *)(lVar5 + 0x18) == 0x54) {
      iVar1 = pub_142e32750(&UNK_14331e107,*(undefined8 *)(lVar5 + 0x10),0x54);
      if (iVar1 == 0) {
        uStack_68 = &UNK_14331afb0;
        uStack_60 = pdb_1402ed420;
        uStack_58 = &puStack_78;
        uStack_50 = pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14331a628,&uStack_68,&UNK_14331a668);
      }
    }
    uStack_68 = &UNK_14331afb0;
    uStack_60 = pdb_1402ed420;
    uStack_50 = pdb_1402ed400;
    uStack_48 = &puStack_78;
    uStack_40 = pdb_1402ed400;
    uStack_58 = (undefined **)(lVar5 + 0x10);
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14331a560,&uStack_68,&UNK_14331a610);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x48);
}

