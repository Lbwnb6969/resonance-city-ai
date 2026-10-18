// VA 0x14153ee20, PDB extent 595 bytes
// country_core::asset_libraries::ssbo_library::AssetSsboLibrary::add_new<country_core::resources::roofs::roof_buffers::WoodenPlankSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/ssbo_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::asset_libraries::ssbo_library::AssetSsboLibrary::add_new<country_core::resources::roofs::roof_buffers::WoodenPlankSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/ssbo_library.rs
   Extent: 595 */

void pdb_14153ee20(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  byte *pbVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
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
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
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
  pdb_141a7a9d0(&uStack_f0,param_2,0);
  pdb_14007ee60();
  uStack_60 = pub_1406abab0(0x80,8);
  if (uStack_60 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x80);
  }
  *(undefined8 *)(uStack_60 + 0x70) = uStack_80;
  *(undefined8 *)(uStack_60 + 0x78) = uStack_78;
  *(undefined8 *)(uStack_60 + 0x60) = uStack_90;
  *(undefined8 *)(uStack_60 + 0x68) = uStack_88;
  *(undefined8 *)(uStack_60 + 0x50) = uStack_a0;
  *(undefined8 *)(uStack_60 + 0x58) = uStack_98;
  *(undefined8 *)(uStack_60 + 0x40) = uStack_b0;
  *(undefined8 *)(uStack_60 + 0x48) = uStack_a8;
  *(undefined4 *)(uStack_60 + 0x30) = uStack_c0;
  *(undefined4 *)(uStack_60 + 0x34) = uStack_bc;
  *(undefined4 *)(uStack_60 + 0x38) = uStack_b8;
  *(undefined4 *)(uStack_60 + 0x3c) = uStack_b4;
  *(undefined4 *)(uStack_60 + 0x20) = uStack_d0;
  *(undefined4 *)(uStack_60 + 0x24) = uStack_cc;
  *(undefined4 *)(uStack_60 + 0x28) = uStack_c8;
  *(undefined4 *)(uStack_60 + 0x2c) = uStack_c4;
  *(undefined4 *)(uStack_60 + 0x10) = uStack_e0;
  *(undefined4 *)(uStack_60 + 0x14) = uStack_dc;
  *(undefined4 *)(uStack_60 + 0x18) = uStack_d8;
  *(undefined4 *)(uStack_60 + 0x1c) = uStack_d4;
  *(undefined4 *)uStack_60 = uStack_f0;
  *(undefined4 *)(uStack_60 + 4) = uStack_ec;
  *(undefined4 *)(uStack_60 + 8) = uStack_e8;
  *(undefined4 *)(uStack_60 + 0xc) = uStack_e4;
  puStack_70 = &UNK_14331cde9;
  uStack_68 = 0x3d;
  uStack_58 = (code *)&UNK_14331c038;
  uStack_40 = (undefined **)0x0;
  uStack_38._0_4_ = 0;
  uStack_50 = (undefined **)&UNK_14331cde9;
  uStack_48 = (code *)0x3d;
  pdb_14007ee60();
  pbVar2 = pub_1406abab0(0x48,8);
  if (pbVar2 != (byte *)0x0) {
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
    lVar4 = 0x153e2eb3e8651534;
    lVar3 = pdb_140bf4e90(param_1,0x153e2eb3e8651534,pbVar2);
    if (lVar3 != 1) {
      return;
    }
    if (*(longlong *)(lVar4 + 0x18) == 0x3d) {
      iVar1 = pub_142e32750(&UNK_14331cde9,*(undefined8 *)(lVar4 + 0x10),0x3d);
      if (iVar1 == 0) {
        uStack_60 = &UNK_14331af08;
        uStack_58 = pdb_1402ed420;
        uStack_50 = &puStack_70;
        uStack_48 = pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14331a628,&uStack_60,&UNK_14331a668);
      }
    }
    uStack_60 = &UNK_14331af08;
    uStack_58 = pdb_1402ed420;
    uStack_48 = pdb_1402ed400;
    uStack_40 = &puStack_70;
    uStack_38 = pdb_1402ed400;
    uStack_50 = (undefined **)(lVar4 + 0x10);
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14331a560,&uStack_60,&UNK_14331a610);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x48);
}

