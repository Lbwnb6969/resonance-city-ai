// VA 0x142db7050, PDB extent 62 bytes
// asset_pipe::texture::source_image_format::closure$1
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: asset_pipe::texture::source_image_format::closure$1
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture.rs
   Extent: 62 */

void pdb_142db7050(undefined8 param_1)

{
  undefined8 uStack_30;
  code *pcStack_28;
  undefined1 auStack_20 [24];
  
  pcStack_28 = pdb_140117670;
  uStack_30 = param_1;
  pdb_140f60760(auStack_20,&UNK_1431e60ea,&uStack_30);
  pdb_142dff5b0(auStack_20);
  return;
}

