// VA 0x142d8fad0, PDB extent 234 bytes
// country_core::startup::background_terrain_maps::upload_r16f_texture::closure$1
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/background_terrain_maps.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::startup::background_terrain_maps::upload_r16f_texture::closure$1
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/background_terrain_maps.rs
   Extent: 234 */

void pdb_142d8fad0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  pcStack_38 = pdb_1402ed420;
  pcStack_28 = pdb_140b0f1d0;
  uStack_40 = param_1;
  uStack_30 = param_2;
  uStack_20 = param_2;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_143054190,&uStack_40,&UNK_1430541b8);
}

