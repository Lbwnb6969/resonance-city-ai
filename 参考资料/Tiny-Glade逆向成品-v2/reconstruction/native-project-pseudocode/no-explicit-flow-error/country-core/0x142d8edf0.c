// VA 0x142d8edf0, PDB extent 142 bytes
// country_core::resources::render::mesh_atlas_library::impl$7::add::closure$0<ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/render/mesh_atlas_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::render::mesh_atlas_library::impl$7::add::closure$0<ref$<str$> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/render/mesh_atlas_library.rs
   Extent: 142 */

void pdb_142d8edf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined8 *puStack_28;
  code *pcStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  uStack_10 = 0xfffffffffffffffe;
  pcStack_40 = pdb_140a4f660;
  pcStack_30 = pdb_140a593a0;
  puStack_28 = &uStack_18;
  pcStack_20 = pdb_140f36c30;
  uStack_48 = param_1;
  uStack_38 = param_2;
  uStack_18 = param_3;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14303ddf8,&uStack_48,&UNK_14303de30);
}

