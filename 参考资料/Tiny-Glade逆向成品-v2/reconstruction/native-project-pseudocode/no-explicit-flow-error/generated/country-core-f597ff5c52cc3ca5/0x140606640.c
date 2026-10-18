// VA 0x140606640, PDB extent 659 bytes
// country_core::shader::inc::wall_color_customization::impl$0::descriptors<shabriri_rt::api::EmptyProtocol>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::inc::wall_color_customization::impl$0::descriptors<shabriri_rt::api::EmptyProtocol>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 659 */

undefined8 *
pdb_140606640(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  pdb_14007ee60();
  pbVar2 = pub_1406abab0(0x90,8);
  if (pbVar2 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x90);
  }
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(0xe,1);
  if (pbVar3 == (byte *)0x0) {
    pdb_142dc7e2a(1,0xe);
  }
  else {
    pbVar3[6] = 0x6f;
    pbVar3[7] = 0x6c;
    pbVar3[8] = 0x6f;
    pbVar3[9] = 0x72;
    pbVar3[10] = 0x5f;
    pbVar3[0xb] = 0x69;
    pbVar3[0xc] = 100;
    pbVar3[0xd] = 0x73;
    pbVar3[0] = 0x77;
    pbVar3[1] = 0x61;
    pbVar3[2] = 0x6c;
    pbVar3[3] = 0x6c;
    pbVar3[4] = 0x5f;
    pbVar3[5] = 99;
    pbVar3[6] = 0x6f;
    pbVar3[7] = 0x6c;
    pdb_14007ee60();
    pbVar4 = pub_1406abab0(0xc,1);
    if (pbVar4 == (byte *)0x0) {
      pdb_142dc7e2a(1,0xc);
    }
    else {
      pbVar4[0] = 0x62;
      pbVar4[1] = 0x72;
      pbVar4[2] = 0x69;
      pbVar4[3] = 99;
      pbVar4[4] = 0x6b;
      pbVar4[5] = 0x5f;
      pbVar4[6] = 99;
      pbVar4[7] = 0x6f;
      pbVar4[8] = 0x6c;
      pbVar4[9] = 0x6f;
      pbVar4[10] = 0x72;
      pbVar4[0xb] = 0x73;
      pdb_14007ee60();
      pbVar5 = pub_1406abab0(0xe,1);
      if (pbVar5 != (byte *)0x0) {
        pbVar5[6] = 0x72;
        pbVar5[7] = 0x5f;
        pbVar5[8] = 99;
        pbVar5[9] = 0x6f;
        pbVar5[10] = 0x6c;
        pbVar5[0xb] = 0x6f;
        pbVar5[0xc] = 0x72;
        pbVar5[0xd] = 0x73;
        pbVar5[0] = 0x70;
        pbVar5[1] = 0x6c;
        pbVar5[2] = 0x61;
        pbVar5[3] = 0x73;
        pbVar5[4] = 0x74;
        pbVar5[5] = 0x65;
        pbVar5[6] = 0x72;
        pbVar5[7] = 0x5f;
        pbVar2[0] = 0;
        pbVar2[1] = 0;
        pbVar2[2] = 0;
        pbVar2[3] = 0;
        pbVar2[8] = 0xe;
        pbVar2[9] = 0;
        pbVar2[10] = 0;
        pbVar2[0xb] = 0;
        pbVar2[0xc] = 0;
        pbVar2[0xd] = 0;
        pbVar2[0xe] = 0;
        pbVar2[0xf] = 0;
        *(byte **)(pbVar2 + 0x10) = pbVar3;
        pbVar2[0x18] = 0xe;
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
        pbVar2[0x28] = 0;
        pbVar2[0x30] = 1;
        pbVar2[0x31] = 0;
        pbVar2[0x32] = 0;
        pbVar2[0x33] = 0;
        pbVar2[0x38] = 0xc;
        pbVar2[0x39] = 0;
        pbVar2[0x3a] = 0;
        pbVar2[0x3b] = 0;
        pbVar2[0x3c] = 0;
        pbVar2[0x3d] = 0;
        pbVar2[0x3e] = 0;
        pbVar2[0x3f] = 0;
        *(byte **)(pbVar2 + 0x40) = pbVar4;
        pbVar2[0x48] = 0xc;
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
        pbVar2[0x60] = 2;
        pbVar2[0x61] = 0;
        pbVar2[0x62] = 0;
        pbVar2[99] = 0;
        pbVar2[0x68] = 0xe;
        pbVar2[0x69] = 0;
        pbVar2[0x6a] = 0;
        pbVar2[0x6b] = 0;
        pbVar2[0x6c] = 0;
        pbVar2[0x6d] = 0;
        pbVar2[0x6e] = 0;
        pbVar2[0x6f] = 0;
        *(byte **)(pbVar2 + 0x70) = pbVar5;
        pbVar2[0x78] = 0xe;
        pbVar2[0x79] = 0;
        pbVar2[0x7a] = 0;
        pbVar2[0x7b] = 0;
        pbVar2[0x7c] = 0;
        pbVar2[0x7d] = 0;
        pbVar2[0x7e] = 0;
        pbVar2[0x7f] = 0;
        pbVar2[0x80] = 0;
        pbVar2[0x81] = 0;
        pbVar2[0x82] = 0;
        pbVar2[0x83] = 0;
        pbVar2[0x84] = 1;
        pbVar2[0x85] = 0;
        pbVar2[0x86] = 0;
        pbVar2[0x87] = 0;
        pbVar2[0x88] = 4;
        *param_1 = 3;
        param_1[1] = pbVar2;
        param_1[2] = 3;
        return param_1;
      }
      pdb_142dc7e2a(1,0xe,param_3,param_4,pbVar4,pbVar3,pbVar2);
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

