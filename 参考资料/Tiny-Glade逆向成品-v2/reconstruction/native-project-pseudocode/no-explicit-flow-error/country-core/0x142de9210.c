// VA 0x142de9210, PDB extent 94 bytes
// country_core::asset_libraries::placement_data_library::impl$1::load::closure$0<std::path::PathBuf>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/placement_data_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::asset_libraries::placement_data_library::impl$1::load::closure$0<std::path::PathBuf>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/placement_data_library.rs
   Extent: 94 */

void pdb_142de9210(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  code *pcStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  uStack_10 = 0xfffffffffffffffe;
  pcStack_20 = pdb_140f58250;
  uStack_28 = param_1;
  uStack_18 = param_2;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_143326f58,&uStack_28,&UNK_143326f70);
}

