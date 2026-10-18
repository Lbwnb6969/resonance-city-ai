// VA 0x1402a1800, PDB extent 415 bytes
// country_core::shader::inc::flag::impl$0::descriptors<shabriri_rt::api::EmptyProtocol>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::inc::flag::impl$0::descriptors<shabriri_rt::api::EmptyProtocol>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 415 */

undefined8 *
pdb_1402a1800(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pdb_14007ee60();
  pbVar2 = pub_1406abab0(0x60,8);
  if (pbVar2 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x60);
  }
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(8,1);
  if (pbVar3 == (byte *)0x0) {
    pdb_142dc7e2a(1,8);
  }
  else {
    pbVar3[0] = 0x70;
    pbVar3[1] = 0x61;
    pbVar3[2] = 0x6c;
    pbVar3[3] = 0x65;
    pbVar3[4] = 0x74;
    pbVar3[5] = 0x74;
    pbVar3[6] = 0x65;
    pbVar3[7] = 0x73;
    pdb_14007ee60();
    pbVar4 = pub_1406abab0(8,1);
    if (pbVar4 != (byte *)0x0) {
      pbVar4[0] = 0x70;
      pbVar4[1] = 0x61;
      pbVar4[2] = 0x74;
      pbVar4[3] = 0x74;
      pbVar4[4] = 0x65;
      pbVar4[5] = 0x72;
      pbVar4[6] = 0x6e;
      pbVar4[7] = 0x73;
      pbVar2[0] = 0;
      pbVar2[1] = 0;
      pbVar2[2] = 0;
      pbVar2[3] = 0;
      pbVar2[8] = 8;
      pbVar2[9] = 0;
      pbVar2[10] = 0;
      pbVar2[0xb] = 0;
      pbVar2[0xc] = 0;
      pbVar2[0xd] = 0;
      pbVar2[0xe] = 0;
      pbVar2[0xf] = 0;
      *(byte **)(pbVar2 + 0x10) = pbVar3;
      pbVar2[0x18] = 8;
      pbVar2[0x19] = 0;
      pbVar2[0x1a] = 0;
      pbVar2[0x1b] = 0;
      pbVar2[0x1c] = 0;
      pbVar2[0x1d] = 0;
      pbVar2[0x1e] = 0;
      pbVar2[0x1f] = 0;
      pbVar2[0x20] = 0;
      pbVar2[0x21] = 0;
      pbVar2[0x22] = 0;
      pbVar2[0x23] = 0;
      pbVar2[0x24] = 1;
      pbVar2[0x25] = 0;
      pbVar2[0x26] = 0;
      pbVar2[0x27] = 0;
      pbVar2[0x28] = 4;
      pbVar2[0x30] = 1;
      pbVar2[0x31] = 0;
      pbVar2[0x32] = 0;
      pbVar2[0x33] = 0;
      pbVar2[0x38] = 8;
      pbVar2[0x39] = 0;
      pbVar2[0x3a] = 0;
      pbVar2[0x3b] = 0;
      pbVar2[0x3c] = 0;
      pbVar2[0x3d] = 0;
      pbVar2[0x3e] = 0;
      pbVar2[0x3f] = 0;
      *(byte **)(pbVar2 + 0x40) = pbVar4;
      pbVar2[0x48] = 8;
      pbVar2[0x49] = 0;
      pbVar2[0x4a] = 0;
      pbVar2[0x4b] = 0;
      pbVar2[0x4c] = 0;
      pbVar2[0x4d] = 0;
      pbVar2[0x4e] = 0;
      pbVar2[0x4f] = 0;
      pbVar2[0x50] = 0;
      pbVar2[0x51] = 0;
      pbVar2[0x52] = 0;
      pbVar2[0x53] = 0;
      pbVar2[0x54] = 1;
      pbVar2[0x55] = 0;
      pbVar2[0x56] = 0;
      pbVar2[0x57] = 0;
      pbVar2[0x58] = 4;
      *param_1 = 2;
      param_1[1] = pbVar2;
      param_1[2] = 2;
      return param_1;
    }
    pdb_142dc7e2a(1,8,param_3,param_4,pbVar3,pbVar2);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

