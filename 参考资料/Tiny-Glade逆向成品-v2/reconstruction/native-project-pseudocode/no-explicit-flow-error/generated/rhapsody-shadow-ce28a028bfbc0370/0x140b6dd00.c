// VA 0x140b6dd00, PDB extent 1075 bytes
// rhapsody_shadow::shader::shadow::impl$3::descriptors<shabriri_rt::api::EmptyProtocol>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-shadow-ce28a028bfbc0370/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   rhapsody_shadow::shader::shadow::impl$3::descriptors<shabriri_rt::api::EmptyProtocol>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-shadow-ce28a028bfbc0370/out/shabriri.rs
   Extent: 1075 */

undefined8 * pdb_140b6dd00(undefined8 *param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined8 uVar6;
  
  pdb_14007ee60();
  if (param_2 == '\0') {
    pbVar2 = pub_1406abab0(0x60,8);
    if (pbVar2 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x60);
    }
    pdb_14007ee60();
    pbVar3 = pub_1406abab0(0xe,1);
    if (pbVar3 == (byte *)0x0) {
      pdb_142dc7e2a(1,0xe);
    }
    else {
      pbVar3[6] = 0x61;
      pbVar3[7] = 100;
      pbVar3[8] = 0x6f;
      pbVar3[9] = 0x77;
      pbVar3[10] = 0x5f;
      pbVar3[0xb] = 0x6d;
      pbVar3[0xc] = 0x61;
      pbVar3[0xd] = 0x70;
      pbVar3[0] = 0x73;
      pbVar3[1] = 0x75;
      pbVar3[2] = 0x6e;
      pbVar3[3] = 0x5f;
      pbVar3[4] = 0x73;
      pbVar3[5] = 0x68;
      pbVar3[6] = 0x61;
      pbVar3[7] = 100;
      pdb_14007ee60();
      pbVar4 = pub_1406abab0(0x16,1);
      uVar6 = _UNK_14305b6b0;
      if (pbVar4 != (byte *)0x0) {
        *(undefined8 *)pbVar4 = _DAT_14305b6a8;
        *(undefined8 *)(pbVar4 + 8) = uVar6;
        pbVar4[0xe] = 0x6e;
        pbVar4[0xf] = 99;
        pbVar4[0x10] = 0x69;
        pbVar4[0x11] = 0x6c;
        pbVar4[0x12] = 0x5f;
        pbVar4[0x13] = 0x6d;
        pbVar4[0x14] = 0x61;
        pbVar4[0x15] = 0x70;
        pbVar2[0] = 1;
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
        pbVar2[0x28] = 4;
        pbVar2[0x30] = 2;
        pbVar2[0x31] = 0;
        pbVar2[0x32] = 0;
        pbVar2[0x33] = 0;
        pbVar2[0x38] = 0x16;
        pbVar2[0x39] = 0;
        pbVar2[0x3a] = 0;
        pbVar2[0x3b] = 0;
        pbVar2[0x3c] = 0;
        pbVar2[0x3d] = 0;
        pbVar2[0x3e] = 0;
        pbVar2[0x3f] = 0;
        *(byte **)(pbVar2 + 0x40) = pbVar4;
        pbVar2[0x48] = 0x16;
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
        uVar6 = 2;
LAB_140b6df42:
        *param_1 = uVar6;
        param_1[1] = pbVar2;
        param_1[2] = uVar6;
        return param_1;
      }
      pdb_142dc7e2a(1,0x16);
    }
  }
  else {
    pbVar2 = pub_1406abab0(0x90,8);
    if (pbVar2 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x90);
    }
    pdb_14007ee60();
    pbVar3 = pub_1406abab0(8,1);
    if (pbVar3 == (byte *)0x0) {
      pdb_142dc7e2a(1,8);
    }
    else {
      pbVar3[0] = 0x24;
      pbVar3[1] = 0x67;
      pbVar3[2] = 0x6c;
      pbVar3[3] = 0x6f;
      pbVar3[4] = 0x62;
      pbVar3[5] = 0x61;
      pbVar3[6] = 0x6c;
      pbVar3[7] = 0x73;
      pdb_14007ee60();
      pbVar4 = pub_1406abab0(0xe,1);
      if (pbVar4 == (byte *)0x0) {
        pdb_142dc7e2a(1,0xe);
      }
      else {
        pbVar4[6] = 0x61;
        pbVar4[7] = 100;
        pbVar4[8] = 0x6f;
        pbVar4[9] = 0x77;
        pbVar4[10] = 0x5f;
        pbVar4[0xb] = 0x6d;
        pbVar4[0xc] = 0x61;
        pbVar4[0xd] = 0x70;
        pbVar4[0] = 0x73;
        pbVar4[1] = 0x75;
        pbVar4[2] = 0x6e;
        pbVar4[3] = 0x5f;
        pbVar4[4] = 0x73;
        pbVar4[5] = 0x68;
        pbVar4[6] = 0x61;
        pbVar4[7] = 100;
        pdb_14007ee60();
        pbVar5 = pub_1406abab0(0x16,1);
        uVar6 = _UNK_14305b6b0;
        if (pbVar5 != (byte *)0x0) {
          *(undefined8 *)pbVar5 = _DAT_14305b6a8;
          *(undefined8 *)(pbVar5 + 8) = uVar6;
          pbVar5[0xe] = 0x6e;
          pbVar5[0xf] = 99;
          pbVar5[0x10] = 0x69;
          pbVar5[0x11] = 0x6c;
          pbVar5[0x12] = 0x5f;
          pbVar5[0x13] = 0x6d;
          pbVar5[0x14] = 0x61;
          pbVar5[0x15] = 0x70;
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
          pbVar2[0x28] = 1;
          pbVar2[0x30] = 1;
          pbVar2[0x31] = 0;
          pbVar2[0x32] = 0;
          pbVar2[0x33] = 0;
          pbVar2[0x38] = 0xe;
          pbVar2[0x39] = 0;
          pbVar2[0x3a] = 0;
          pbVar2[0x3b] = 0;
          pbVar2[0x3c] = 0;
          pbVar2[0x3d] = 0;
          pbVar2[0x3e] = 0;
          pbVar2[0x3f] = 0;
          *(byte **)(pbVar2 + 0x40) = pbVar4;
          pbVar2[0x48] = 0xe;
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
          pbVar2[0x68] = 0x16;
          pbVar2[0x69] = 0;
          pbVar2[0x6a] = 0;
          pbVar2[0x6b] = 0;
          pbVar2[0x6c] = 0;
          pbVar2[0x6d] = 0;
          pbVar2[0x6e] = 0;
          pbVar2[0x6f] = 0;
          *(byte **)(pbVar2 + 0x70) = pbVar5;
          pbVar2[0x78] = 0x16;
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
          uVar6 = 3;
          goto LAB_140b6df42;
        }
        pdb_142dc7e2a(1,0x16,param_3,param_4,pbVar4,pbVar3,pbVar2);
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

