// VA 0x142d90230, PDB extent 126 bytes
// country_core::render::load_texture::load_packaged_texture_image::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/load_texture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::load_texture::load_packaged_texture_image::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/load_texture.rs
   Extent: 126 */

void pdb_142d90230(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  code *pcStack_30;
  undefined8 *puStack_28;
  code *pcStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  uStack_10 = 0xfffffffffffffffe;
  pcStack_30 = pdb_140f58250;
  puStack_28 = &uStack_18;
  pcStack_20 = pdb_140f56800;
  uStack_38 = param_1;
  uStack_18 = param_2;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14305e3b8,&uStack_38,&UNK_14305e3d0);
}

