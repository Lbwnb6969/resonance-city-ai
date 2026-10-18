// VA 0x140a2e880, PDB extent 71 bytes
// country_core::asset_libraries::texture_library::AssetTextureLibrary::never_accessed_assets
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/texture_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::asset_libraries::texture_library::AssetTextureLibrary::never_accessed_assets
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/texture_library.rs
   Extent: 71 */

undefined8 pdb_140a2e880(undefined8 param_1,longlong param_2)

{
  longlong lStack_30;
  longlong lStack_28;
  undefined8 uStack_20;
  longlong lStack_18;
  longlong lStack_10;
  
  lStack_30 = *(longlong *)(param_2 + 8);
  lStack_28 = lStack_30 + *(longlong *)(param_2 + 0x10) * 8;
  uStack_20 = 0;
  lStack_18 = param_2;
  lStack_10 = param_2;
  pdb_1415ef0e0(param_1,&lStack_30);
  return param_1;
}

