// VA 0x140a83f50, PDB extent 694 bytes
// country_core::utils::dirty_tiles::DirtyTiles::extend
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/dirty_tiles.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::utils::dirty_tiles::DirtyTiles::extend
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/dirty_tiles.rs
   Extent: 694 */

void pdb_140a83f50(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_1 | *param_2;
  param_1[1] = param_1[1] | uVar1;
  param_1[2] = param_1[2] | uVar2;
  param_1[3] = param_1[3] | uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_1[4] = param_2[4] | param_1[4];
  param_1[5] = uVar1 | param_1[5];
  param_1[6] = uVar2 | param_1[6];
  param_1[7] = uVar3 | param_1[7];
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  param_1[8] = param_1[8] | param_2[8];
  param_1[9] = param_1[9] | uVar1;
  param_1[10] = param_1[10] | uVar2;
  param_1[0xb] = param_1[0xb] | uVar3;
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  param_1[0xc] = param_1[0xc] | param_2[0xc];
  param_1[0xd] = param_1[0xd] | uVar1;
  param_1[0xe] = param_1[0xe] | uVar2;
  param_1[0xf] = param_1[0xf] | uVar3;
  uVar1 = param_2[0x11];
  uVar2 = param_2[0x12];
  uVar3 = param_2[0x13];
  param_1[0x10] = param_1[0x10] | param_2[0x10];
  param_1[0x11] = param_1[0x11] | uVar1;
  param_1[0x12] = param_1[0x12] | uVar2;
  param_1[0x13] = param_1[0x13] | uVar3;
  uVar1 = param_2[0x15];
  uVar2 = param_2[0x16];
  uVar3 = param_2[0x17];
  param_1[0x14] = param_1[0x14] | param_2[0x14];
  param_1[0x15] = param_1[0x15] | uVar1;
  param_1[0x16] = param_1[0x16] | uVar2;
  param_1[0x17] = param_1[0x17] | uVar3;
  uVar1 = param_2[0x19];
  uVar2 = param_2[0x1a];
  uVar3 = param_2[0x1b];
  param_1[0x18] = param_1[0x18] | param_2[0x18];
  param_1[0x19] = param_1[0x19] | uVar1;
  param_1[0x1a] = param_1[0x1a] | uVar2;
  param_1[0x1b] = param_1[0x1b] | uVar3;
  uVar1 = param_2[0x1d];
  uVar2 = param_2[0x1e];
  uVar3 = param_2[0x1f];
  param_1[0x1c] = param_1[0x1c] | param_2[0x1c];
  param_1[0x1d] = param_1[0x1d] | uVar1;
  param_1[0x1e] = param_1[0x1e] | uVar2;
  param_1[0x1f] = param_1[0x1f] | uVar3;
  uVar1 = param_2[0x21];
  uVar2 = param_2[0x22];
  uVar3 = param_2[0x23];
  param_1[0x20] = param_1[0x20] | param_2[0x20];
  param_1[0x21] = param_1[0x21] | uVar1;
  param_1[0x22] = param_1[0x22] | uVar2;
  param_1[0x23] = param_1[0x23] | uVar3;
  uVar1 = param_2[0x25];
  uVar2 = param_2[0x26];
  uVar3 = param_2[0x27];
  param_1[0x24] = param_1[0x24] | param_2[0x24];
  param_1[0x25] = param_1[0x25] | uVar1;
  param_1[0x26] = param_1[0x26] | uVar2;
  param_1[0x27] = param_1[0x27] | uVar3;
  uVar1 = param_2[0x29];
  uVar2 = param_2[0x2a];
  uVar3 = param_2[0x2b];
  param_1[0x28] = param_1[0x28] | param_2[0x28];
  param_1[0x29] = param_1[0x29] | uVar1;
  param_1[0x2a] = param_1[0x2a] | uVar2;
  param_1[0x2b] = param_1[0x2b] | uVar3;
  uVar1 = param_2[0x2d];
  uVar2 = param_2[0x2e];
  uVar3 = param_2[0x2f];
  param_1[0x2c] = param_1[0x2c] | param_2[0x2c];
  param_1[0x2d] = param_1[0x2d] | uVar1;
  param_1[0x2e] = param_1[0x2e] | uVar2;
  param_1[0x2f] = param_1[0x2f] | uVar3;
  uVar1 = param_2[0x31];
  uVar2 = param_2[0x32];
  uVar3 = param_2[0x33];
  param_1[0x30] = param_1[0x30] | param_2[0x30];
  param_1[0x31] = param_1[0x31] | uVar1;
  param_1[0x32] = param_1[0x32] | uVar2;
  param_1[0x33] = param_1[0x33] | uVar3;
  uVar1 = param_2[0x35];
  uVar2 = param_2[0x36];
  uVar3 = param_2[0x37];
  param_1[0x34] = param_1[0x34] | param_2[0x34];
  param_1[0x35] = param_1[0x35] | uVar1;
  param_1[0x36] = param_1[0x36] | uVar2;
  param_1[0x37] = param_1[0x37] | uVar3;
  uVar1 = param_2[0x39];
  uVar2 = param_2[0x3a];
  uVar3 = param_2[0x3b];
  param_1[0x38] = param_1[0x38] | param_2[0x38];
  param_1[0x39] = param_1[0x39] | uVar1;
  param_1[0x3a] = param_1[0x3a] | uVar2;
  param_1[0x3b] = param_1[0x3b] | uVar3;
  uVar1 = param_2[0x3d];
  uVar2 = param_2[0x3e];
  uVar3 = param_2[0x3f];
  param_1[0x3c] = param_1[0x3c] | param_2[0x3c];
  param_1[0x3d] = param_1[0x3d] | uVar1;
  param_1[0x3e] = param_1[0x3e] | uVar2;
  param_1[0x3f] = param_1[0x3f] | uVar3;
  return;
}

