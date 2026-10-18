// VA 0x140a2c590, PDB extent 42 bytes
// country_core::asset_libraries::mesh_library::AssetMeshLibrary::get_handle_by_name
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/mesh_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::asset_libraries::mesh_library::AssetMeshLibrary::get_handle_by_name
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/mesh_library.rs
   Extent: 42 */

undefined8 pdb_140a2c590(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  uStack_10 = param_2;
  uStack_8 = param_3;
  uVar2 = pdb_140a2c860();
  if ((uVar2 & 1) != 0) {
    return param_2;
  }
  pdb_142d8e410(&uStack_10);
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}

