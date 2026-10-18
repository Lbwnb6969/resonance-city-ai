// VA 0x140a64f10, PDB extent 296 bytes
// country_core::asset_libraries::placement_data_library::AssetPlacementDataLibrary::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/placement_data_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::asset_libraries::placement_data_library::AssetPlacementDataLibrary::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/placement_data_library.rs
   Extent: 296 */

undefined8 * pdb_140a64f10(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  plVar5 = (longlong *)pdb_140f3bda0();
  if ((char)plVar5[2] == '\x01') {
    lVar6 = *plVar5;
    param_2 = plVar5[1];
  }
  else {
    lVar6 = pdb_140f4fd10();
    *plVar5 = lVar6;
    plVar5[1] = param_2;
    *(undefined1 *)(plVar5 + 2) = 1;
  }
  *plVar5 = lVar6 + 1;
  uVar4 = _UNK_1430403f8;
  uVar3 = _DAT_1430403f0;
  uVar2 = _UNK_1430403e8;
  uVar1 = _DAT_1430403e0;
  lVar8 = param_2;
  plVar5 = (longlong *)pdb_140f3bda0();
  if ((char)plVar5[2] == '\x01') {
    lVar7 = *plVar5;
    lVar8 = plVar5[1];
  }
  else {
    lVar7 = pdb_140f4fd10();
    *plVar5 = lVar7;
    plVar5[1] = lVar8;
    *(undefined1 *)(plVar5 + 2) = 1;
  }
  *plVar5 = lVar7 + 1;
  param_1[4] = lVar6;
  param_1[5] = param_2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  param_1[8] = uVar3;
  param_1[9] = uVar4;
  param_1[10] = lVar7;
  param_1[0xb] = lVar8;
  return param_1;
}

