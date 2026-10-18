// VA 0x140d9d500, PDB extent 50 bytes
// asset_pipe::texture::impl$2::run
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: asset_pipe::texture::impl$2::run
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture.rs
   Extent: 50 */

undefined8 * pdb_140d9d500(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar5;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  param_1[6] = *param_3;
  param_1[7] = uVar1;
  param_1[8] = uVar2;
  param_1[9] = uVar3;
  *(undefined1 *)(param_1 + 0x23) = 0;
  return param_1;
}

