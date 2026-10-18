// VA 0x140a2b210, PDB extent 75 bytes
// country_core::asset_libraries::mesh_library::AssetMeshLibrary::get_by_name
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/mesh_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::asset_libraries::mesh_library::AssetMeshLibrary::get_by_name
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/mesh_library.rs
   Extent: 75 */

void pdb_140a2b210(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  byte bVar2;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  uStack_18 = param_2;
  uStack_10 = param_3;
  bVar2 = pdb_140a2c860();
  if ((bVar2 & 1) != 0) {
    uStack_18 = param_2;
    pdb_140a2b260(param_1);
    pdb_140bf4880(param_1 + 0x20,&uStack_18);
    return;
  }
  pdb_142d8e410(&uStack_18);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

