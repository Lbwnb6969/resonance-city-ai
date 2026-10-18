// VA 0x141536e30, PDB extent 328 bytes
// country_core::asset_libraries::ssbo_library::AssetSsboLibrary::finish_read_rg_buffer<country_core::resources::plant_sample_raster::PlantSampleRasterStagingSsbo,rhapsody::rg::api::GraphApi>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/ssbo_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::asset_libraries::ssbo_library::AssetSsboLibrary::finish_read_rg_buffer<country_core::resources::plant_sample_raster::PlantSampleRasterStagingSsbo,rhapsody::rg::api::GraphApi>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/ssbo_library.rs
   Extent: 328 */

longlong pdb_141536e30(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  undefined4 uStack_4c;
  undefined1 uStack_48;
  undefined8 uStack_44;
  undefined4 uStack_3c;
  longlong *plStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  lVar3 = pdb_140bf45b0(param_1,&UNK_14331c998);
  if (lVar3 == 0) {
    pdb_142de8010();
    pcVar2 = (code *)swi(3);
    lVar3 = (*pcVar2)();
    return lVar3;
  }
  plVar4 = (longlong *)(lVar3 + 0x20);
  LOCK();
  bVar5 = *(longlong *)(lVar3 + 0x20) == 0;
  if (bVar5) {
    *(longlong *)(lVar3 + 0x20) = 8;
  }
  UNLOCK();
  if (!bVar5) {
    pdb_142dbc1f0(plVar4);
  }
  pdb_140e9a150(plVar4);
  pdb_140e9a150((ulonglong)plVar4 | 1);
  if (*(int *)(lVar3 + 0x28) != 1) {
    plStack_38 = plVar4;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14331b8e0,0x28,&UNK_14331b908);
  }
  piVar1 = (int *)(lVar3 + 0x40);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    uStack_3c = *(undefined4 *)(lVar3 + 0x3c);
    uStack_4c = *(undefined4 *)(lVar3 + 0x2c);
    uStack_48 = *(undefined1 *)(lVar3 + 0x30);
    uStack_44 = *(undefined8 *)(lVar3 + 0x34);
    plStack_38 = plVar4;
    pdb_140e1e2e0(&uStack_4c,param_2,0x23);
    *(undefined4 *)(lVar3 + 0x28) = 0;
    plVar4 = plStack_38;
  }
  pdb_140e9a350(plVar4);
  pdb_140e9a350();
  LOCK();
  lVar3 = *plVar4;
  bVar5 = lVar3 == 8;
  if (bVar5) {
    *plVar4 = 0;
    lVar3 = 8;
  }
  UNLOCK();
  if (!bVar5) {
    lVar3 = pdb_142dbca40(plVar4,0);
  }
  return lVar3;
}

