// VA 0x14152ad80, PDB extent 588 bytes
// country_core::asset_libraries::ssbo_library::AssetSsboLibrary::write_rg_buffer<country_core::systems::render_loop::compute_passes::compute_garden::GardenStoneSsbo,rhapsody::rg::api::GraphApi>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/ssbo_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::asset_libraries::ssbo_library::AssetSsboLibrary::write_rg_buffer<country_core::systems::render_loop::compute_passes::compute_garden::GardenStoneSsbo,rhapsody::rg::api::GraphApi>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/ssbo_library.rs
   Extent: 588 */

undefined4 * pdb_14152ad80(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined **ppuStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  lVar5 = pdb_140bf45b0(param_2,&UNK_14331c850);
  if (lVar5 == 0) {
    pdb_142de7d10();
  }
  else {
    uVar7 = lVar5 + 0x20;
    LOCK();
    bVar8 = *(longlong *)(lVar5 + 0x20) == 0;
    if (bVar8) {
      *(longlong *)(lVar5 + 0x20) = 8;
    }
    UNLOCK();
    if (!bVar8) {
      pdb_142dbc1f0(uVar7);
    }
    pdb_140e9a150(uVar7);
    pdb_140e9a150(uVar7 | 1);
    iVar2 = *(int *)(lVar5 + 0x28);
    if (iVar2 == 0) {
      puVar6 = (undefined8 *)pdb_140bf45b0(param_2,&UNK_14331c850);
      if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14331b3b8);
      }
      puVar6 = (undefined8 *)(**(code **)(puVar6[1] + 0x28))(*puVar6);
      pdb_140e1e250(param_1,*puVar6,param_3,0x23,&UNK_143330058);
      uVar3 = param_1[4];
      uVar4 = *param_1;
      uVar1 = *(undefined1 *)(param_1 + 1);
      *(undefined4 *)(lVar5 + 0x28) = 2;
      *(undefined4 *)(lVar5 + 0x2c) = uVar4;
      *(undefined1 *)(lVar5 + 0x30) = uVar1;
      *(undefined8 *)(lVar5 + 0x34) = *(undefined8 *)(param_1 + 2);
      *(undefined4 *)(lVar5 + 0x3c) = uVar3;
      pdb_140e9a350(uVar7);
      pdb_140e9a350();
      LOCK();
      bVar8 = *(longlong *)(lVar5 + 0x20) == 8;
      if (bVar8) {
        *(longlong *)(lVar5 + 0x20) = 0;
      }
      UNLOCK();
      if (!bVar8) {
        pdb_142dbca40(uVar7,0);
      }
      return param_1;
    }
    if (iVar2 != 1) {
      if (iVar2 != 2) {
        puStack_48 = &UNK_14331df64;
        uStack_40 = 0x53;
        ppuStack_58 = &puStack_48;
        pcStack_50 = pdb_1402ed420;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14331b458,&ppuStack_58,&UNK_14331b478);
      }
      puStack_48 = &UNK_14331df64;
      uStack_40 = 0x53;
      ppuStack_58 = &puStack_48;
      pcStack_50 = pdb_1402ed420;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14331b418,&ppuStack_58,&UNK_14331b440);
    }
  }
  puStack_48 = &UNK_14331df64;
  uStack_40 = 0x53;
  ppuStack_58 = &puStack_48;
  pcStack_50 = pdb_1402ed420;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14331b3d0,&ppuStack_58,&UNK_14331b400);
}

