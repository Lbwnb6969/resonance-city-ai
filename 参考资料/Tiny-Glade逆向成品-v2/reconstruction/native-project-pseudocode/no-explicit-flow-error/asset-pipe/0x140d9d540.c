// VA 0x140d9d540, PDB extent 78 bytes
// asset_pipe::texture::impl$5::run
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: asset_pipe::texture::impl$5::run
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture.rs
   Extent: 78 */

undefined8 * pdb_140d9d540(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = param_2[9];
  param_1[0x16] = param_2[8];
  param_1[0x17] = uVar1;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[7];
  param_1[0x14] = param_2[6];
  param_1[0x15] = uVar7;
  param_1[0x12] = uVar5;
  param_1[0x13] = uVar6;
  param_1[0x10] = uVar3;
  param_1[0x11] = uVar4;
  param_1[0xe] = uVar1;
  param_1[0xf] = uVar2;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  *(undefined1 *)(param_1 + 0x18) = 0;
  return param_1;
}

