// VA 0x1405e1bd0, PDB extent 556 bytes
// country_core::asset_libraries::ssbo_library::AssetSsboLibrary::take_rg_buffer<country_core::resources::walls::dormers::DormerHoleSsbo,rhapsody::rg::api::GraphApi>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/ssbo_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::asset_libraries::ssbo_library::AssetSsboLibrary::take_rg_buffer<country_core::resources::walls::dormers::DormerHoleSsbo,rhapsody::rg::api::GraphApi>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/ssbo_library.rs
   Extent: 556 */

undefined8 pdb_1405e1bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  bool bVar5;
  undefined **ppuStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  lVar2 = pdb_1405c60d0(param_2,&UNK_142f72788);
  if (lVar2 == 0) {
    pdb_142d86900();
  }
  else {
    plVar4 = (longlong *)(lVar2 + 0x20);
    LOCK();
    bVar5 = *(longlong *)(lVar2 + 0x20) == 0;
    if (bVar5) {
      *(longlong *)(lVar2 + 0x20) = 8;
    }
    UNLOCK();
    if (!bVar5) {
      pdb_142dbc1f0(plVar4);
    }
    pdb_140e9a150(plVar4);
    pdb_140e9a150((ulonglong)plVar4 | 1);
    iVar1 = *(int *)(lVar2 + 0x28);
    *(undefined4 *)(lVar2 + 0x28) = 3;
    if (iVar1 == 0) {
      puVar3 = (undefined8 *)pdb_1405c60d0(param_2,&UNK_142f72788);
      if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_142f72648);
      }
      puVar3 = (undefined8 *)(**(code **)(puVar3[1] + 0x28))(*puVar3);
      pdb_140e1e250(param_1,*puVar3,param_3,0x23,&UNK_142f70d08);
      pdb_140e9a350(plVar4);
      pdb_140e9a350();
      LOCK();
      lVar2 = *plVar4;
      if (lVar2 == 8) {
        *plVar4 = 0;
      }
      UNLOCK();
      if (lVar2 != 8) {
        pdb_142dbca40(plVar4,0);
      }
      return param_1;
    }
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        puStack_48 = &UNK_142f72fb4;
        uStack_40 = 0x37;
        ppuStack_58 = &puStack_48;
        pcStack_50 = pdb_1402ed420;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_142f726d8,&ppuStack_58,&UNK_142f726f8);
      }
      puStack_48 = &UNK_142f72fb4;
      uStack_40 = 0x37;
      ppuStack_58 = &puStack_48;
      pcStack_50 = pdb_1402ed420;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_142f72698,&ppuStack_58,&UNK_142f726c0);
    }
  }
  puStack_48 = &UNK_142f72fb4;
  uStack_40 = 0x37;
  ppuStack_58 = &puStack_48;
  pcStack_50 = pdb_1402ed420;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_142f72660,&ppuStack_58,&UNK_142f72680);
}

