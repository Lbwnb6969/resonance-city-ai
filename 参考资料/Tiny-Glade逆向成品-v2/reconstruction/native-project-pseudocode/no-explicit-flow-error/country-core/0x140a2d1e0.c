// VA 0x140a2d1e0, PDB extent 42 bytes
// country_core::asset_libraries::mesh_library::AssetMeshLibrary::get
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/mesh_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::asset_libraries::mesh_library::AssetMeshLibrary::get
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/mesh_library.rs
   Extent: 42 */

void pdb_140a2d1e0(longlong param_1,undefined8 param_2)

{
  undefined8 uStack_10;
  
  uStack_10 = param_2;
  pdb_140a2b260();
  pdb_140bf4880(param_1 + 0x20,&uStack_10);
  return;
}

