// VA 0x140c44950, PDB extent 431 bytes
// rhapsody_core::shader::blue_noise::impl$0::descriptors<shabriri_rt::api::EmptyProtocol>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-core-b9cc11a0f70aa384/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   rhapsody_core::shader::blue_noise::impl$0::descriptors<shabriri_rt::api::EmptyProtocol>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-core-b9cc11a0f70aa384/out/shabriri.rs
   Extent: 431 */

undefined8 *
pdb_140c44950(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(0x60,8);
  if (pbVar3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x60);
  }
  pdb_14007ee60();
  pbVar4 = pub_1406abab0(9,1);
  if (pbVar4 == (byte *)0x0) {
    pdb_142dc7e2a(1,9);
  }
  else {
    pbVar4[0] = 0x75;
    pbVar4[1] = 0x6e;
    pbVar4[2] = 0x69;
    pbVar4[3] = 0x66;
    pbVar4[4] = 0x6f;
    pbVar4[5] = 0x72;
    pbVar4[6] = 0x6d;
    pbVar4[7] = 0x30;
    pbVar4[8] = 0x31;
    pdb_14007ee60();
    pbVar5 = pub_1406abab0(0x16,1);
    uVar2 = _UNK_14306d604;
    if (pbVar5 != (byte *)0x0) {
      *(undefined8 *)pbVar5 = _DAT_14306d5fc;
      *(undefined8 *)(pbVar5 + 8) = uVar2;
      pbVar5[0xe] = 0x6c;
      pbVar5[0xf] = 100;
      pbVar5[0x10] = 0x72;
      pbVar5[0x11] = 0x5f;
      pbVar5[0x12] = 0x72;
      pbVar5[0x13] = 0x67;
      pbVar5[0x14] = 0x62;
      pbVar5[0x15] = 0x61;
      pbVar3[0] = 0;
      pbVar3[1] = 0;
      pbVar3[2] = 0;
      pbVar3[3] = 0;
      pbVar3[8] = 9;
      pbVar3[9] = 0;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0;
      pbVar3[0xc] = 0;
      pbVar3[0xd] = 0;
      pbVar3[0xe] = 0;
      pbVar3[0xf] = 0;
      *(byte **)(pbVar3 + 0x10) = pbVar4;
      pbVar3[0x18] = 9;
      pbVar3[0x19] = 0;
      pbVar3[0x1a] = 0;
      pbVar3[0x1b] = 0;
      pbVar3[0x1c] = 0;
      pbVar3[0x1d] = 0;
      pbVar3[0x1e] = 0;
      pbVar3[0x1f] = 0;
      pbVar3[0x20] = 0;
      pbVar3[0x21] = 0;
      pbVar3[0x22] = 0;
      pbVar3[0x23] = 0;
      pbVar3[0x24] = 1;
      pbVar3[0x25] = 0;
      pbVar3[0x26] = 0;
      pbVar3[0x27] = 0;
      pbVar3[0x28] = 4;
      pbVar3[0x30] = 1;
      pbVar3[0x31] = 0;
      pbVar3[0x32] = 0;
      pbVar3[0x33] = 0;
      pbVar3[0x38] = 0x16;
      pbVar3[0x39] = 0;
      pbVar3[0x3a] = 0;
      pbVar3[0x3b] = 0;
      pbVar3[0x3c] = 0;
      pbVar3[0x3d] = 0;
      pbVar3[0x3e] = 0;
      pbVar3[0x3f] = 0;
      *(byte **)(pbVar3 + 0x40) = pbVar5;
      pbVar3[0x48] = 0x16;
      pbVar3[0x49] = 0;
      pbVar3[0x4a] = 0;
      pbVar3[0x4b] = 0;
      pbVar3[0x4c] = 0;
      pbVar3[0x4d] = 0;
      pbVar3[0x4e] = 0;
      pbVar3[0x4f] = 0;
      pbVar3[0x50] = 0;
      pbVar3[0x51] = 0;
      pbVar3[0x52] = 0;
      pbVar3[0x53] = 0;
      pbVar3[0x54] = 1;
      pbVar3[0x55] = 0;
      pbVar3[0x56] = 0;
      pbVar3[0x57] = 0;
      pbVar3[0x58] = 4;
      *param_1 = 2;
      param_1[1] = pbVar3;
      param_1[2] = 2;
      return param_1;
    }
    pdb_142dc7e2a(1,0x16,param_3,param_4,pbVar4,pbVar3);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

