// VA 0x140a1ad90, PDB extent 1122 bytes
// country_core::game_key_bindings::impl$5::from
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_key_bindings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::game_key_bindings::impl$5::from
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_key_bindings.rs
   Extent: 1122 */

longlong * pdb_140a1ad90(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (SBORROW8(0,*param_2)) {
    pdb_140a1b200(param_1,param_2 + 1);
    return param_1;
  }
  param_1[5] = param_2[5];
  lVar1 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = lVar1;
  param_1[8] = param_2[8];
  lVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = lVar1;
  param_1[0xb] = param_2[0xb];
  lVar1 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = lVar1;
  param_1[0xe] = param_2[0xe];
  lVar1 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = lVar1;
  param_1[0x11] = param_2[0x11];
  lVar1 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = lVar1;
  lVar1 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = lVar1;
  param_1[0x14] = param_2[0x14];
  lVar1 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = lVar1;
  param_1[0x17] = param_2[0x17];
  param_1[0x1a] = param_2[0x1a];
  lVar1 = param_2[0x19];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = lVar1;
  lVar1 = param_2[0x1c];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = lVar1;
  param_1[0x1d] = param_2[0x1d];
  lVar1 = param_2[0x1f];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = lVar1;
  param_1[0x20] = param_2[0x20];
  param_1[0x23] = param_2[0x23];
  lVar1 = param_2[0x22];
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = lVar1;
  param_1[0x26] = param_2[0x26];
  lVar1 = param_2[0x25];
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = lVar1;
  lVar1 = param_2[0x28];
  param_1[0x27] = param_2[0x27];
  param_1[0x28] = lVar1;
  param_1[0x29] = param_2[0x29];
  lVar1 = param_2[0x2b];
  param_1[0x2a] = param_2[0x2a];
  param_1[0x2b] = lVar1;
  param_1[0x2c] = param_2[0x2c];
  lVar1 = param_2[0x2e];
  param_1[0x2d] = param_2[0x2d];
  param_1[0x2e] = lVar1;
  param_1[0x2f] = param_2[0x2f];
  param_1[0x32] = param_2[0x32];
  lVar1 = param_2[0x31];
  param_1[0x30] = param_2[0x30];
  param_1[0x31] = lVar1;
  lVar1 = param_2[0x34];
  param_1[0x33] = param_2[0x33];
  param_1[0x34] = lVar1;
  param_1[0x35] = param_2[0x35];
  lVar1 = param_2[0x37];
  param_1[0x36] = param_2[0x36];
  param_1[0x37] = lVar1;
  param_1[0x38] = param_2[0x38];
  lVar1 = param_2[0x3a];
  param_1[0x39] = param_2[0x39];
  param_1[0x3a] = lVar1;
  param_1[0x3b] = param_2[0x3b];
  param_1[0x3e] = param_2[0x3e];
  lVar1 = param_2[0x3d];
  param_1[0x3c] = param_2[0x3c];
  param_1[0x3d] = lVar1;
  lVar1 = param_2[0x40];
  param_1[0x3f] = param_2[0x3f];
  param_1[0x40] = lVar1;
  param_1[0x41] = param_2[0x41];
  lVar1 = param_2[0x43];
  param_1[0x42] = param_2[0x42];
  param_1[0x43] = lVar1;
  param_1[0x44] = param_2[0x44];
  lVar1 = param_2[0x46];
  param_1[0x45] = param_2[0x45];
  param_1[0x46] = lVar1;
  param_1[0x47] = param_2[0x47];
  param_1[0x4a] = param_2[0x4a];
  lVar1 = param_2[0x49];
  param_1[0x48] = param_2[0x48];
  param_1[0x49] = lVar1;
  lVar1 = param_2[0x4c];
  param_1[0x4b] = param_2[0x4b];
  param_1[0x4c] = lVar1;
  param_1[0x4d] = param_2[0x4d];
  lVar1 = param_2[0x4f];
  param_1[0x4e] = param_2[0x4e];
  param_1[0x4f] = lVar1;
  param_1[0x50] = param_2[0x50];
  lVar1 = param_2[0x52];
  param_1[0x51] = param_2[0x51];
  param_1[0x52] = lVar1;
  param_1[0x53] = param_2[0x53];
  param_1[0x56] = param_2[0x56];
  lVar1 = param_2[0x55];
  param_1[0x54] = param_2[0x54];
  param_1[0x55] = lVar1;
  lVar1 = param_2[0x58];
  param_1[0x57] = param_2[0x57];
  param_1[0x58] = lVar1;
  param_1[0x59] = param_2[0x59];
  lVar1 = param_2[0x5b];
  param_1[0x5a] = param_2[0x5a];
  param_1[0x5b] = lVar1;
  param_1[0x5c] = param_2[0x5c];
  lVar1 = param_2[0x5e];
  param_1[0x5d] = param_2[0x5d];
  param_1[0x5e] = lVar1;
  param_1[0x5f] = param_2[0x5f];
  param_1[0x62] = param_2[0x62];
  lVar1 = param_2[0x61];
  param_1[0x60] = param_2[0x60];
  param_1[0x61] = lVar1;
  lVar1 = param_2[100];
  param_1[99] = param_2[99];
  param_1[100] = lVar1;
  param_1[0x65] = param_2[0x65];
  lVar1 = param_2[0x67];
  param_1[0x66] = param_2[0x66];
  param_1[0x67] = lVar1;
  param_1[0x68] = param_2[0x68];
  lVar1 = param_2[0x6a];
  param_1[0x69] = param_2[0x69];
  param_1[0x6a] = lVar1;
  param_1[0x6b] = param_2[0x6b];
  param_1[0x6e] = param_2[0x6e];
  lVar1 = param_2[0x6d];
  param_1[0x6c] = param_2[0x6c];
  param_1[0x6d] = lVar1;
  lVar1 = param_2[0x70];
  param_1[0x6f] = param_2[0x6f];
  param_1[0x70] = lVar1;
  param_1[0x71] = param_2[0x71];
  lVar1 = param_2[0x73];
  param_1[0x72] = param_2[0x72];
  param_1[0x73] = lVar1;
  param_1[0x74] = param_2[0x74];
  lVar1 = param_2[0x76];
  param_1[0x75] = param_2[0x75];
  param_1[0x76] = lVar1;
  param_1[0x77] = param_2[0x77];
  param_1[0x7a] = param_2[0x7a];
  lVar1 = param_2[0x79];
  param_1[0x78] = param_2[0x78];
  param_1[0x79] = lVar1;
  lVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = lVar1;
  param_1[2] = param_2[2];
  return param_1;
}

