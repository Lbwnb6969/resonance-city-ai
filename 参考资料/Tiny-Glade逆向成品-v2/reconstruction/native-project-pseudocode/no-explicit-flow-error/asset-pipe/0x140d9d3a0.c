// VA 0x140d9d3a0, PDB extent 31 bytes
// asset_pipe::texture::build_texture_assets
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: asset_pipe::texture::build_texture_assets
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture.rs
   Extent: 31 */

void pdb_140d9d3a0(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  param_1[3] = param_2;
  *(undefined1 *)(param_1 + 0xe) = param_3;
  uVar1 = param_4[1];
  *param_1 = *param_4;
  param_1[1] = uVar1;
  param_1[2] = param_4[2];
  *(undefined1 *)((longlong)param_1 + 0x71) = 0;
  return;
}

