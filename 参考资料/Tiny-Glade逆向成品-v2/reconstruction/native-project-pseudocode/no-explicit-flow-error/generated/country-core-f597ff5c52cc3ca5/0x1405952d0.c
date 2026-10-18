// VA 0x1405952d0, PDB extent 1431 bytes
// country_core::shader::inc::rt_defs::impl$9::descriptors<shabriri_rt::api::EmptyProtocol>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::shader::inc::rt_defs::impl$9::descriptors<shabriri_rt::api::EmptyProtocol>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 1431 */

undefined8 * pdb_1405952d0(undefined8 *param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  
  pdb_14007ee60();
  if (param_2 == '\0') {
    pbVar5 = pub_1406abab0(0x90,8);
    if (pbVar5 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x90);
    }
    pdb_14007ee60();
    pbVar6 = pub_1406abab0(0x10,1);
    uVar4 = _UNK_142f6dee5;
    uVar3 = _UNK_142f6dee1;
    uVar2 = _UNK_142f6dedd;
    if (pbVar6 == (byte *)0x0) {
      pdb_142dc7e2a(1,0x10);
    }
    else {
      *(undefined4 *)pbVar6 = _DAT_142f6ded9;
      *(undefined4 *)(pbVar6 + 4) = uVar2;
      *(undefined4 *)(pbVar6 + 8) = uVar3;
      *(undefined4 *)(pbVar6 + 0xc) = uVar4;
      pdb_14007ee60();
      pbVar7 = pub_1406abab0(9,1);
      if (pbVar7 == (byte *)0x0) {
        pdb_142dc7e2a(1,9);
      }
      else {
        pbVar7[0] = 0x72;
        pbVar7[1] = 0x74;
        pbVar7[2] = 0x5f;
        pbVar7[3] = 0x62;
        pbVar7[4] = 0x6c;
        pbVar7[5] = 0x5f;
        pbVar7[6] = 0x62;
        pbVar7[7] = 0x76;
        pbVar7[8] = 0x68;
        pdb_14007ee60();
        pbVar8 = pub_1406abab0(0xc,1);
        if (pbVar8 != (byte *)0x0) {
          pbVar8[0] = 0x72;
          pbVar8[1] = 0x74;
          pbVar8[2] = 0x5f;
          pbVar8[3] = 0x74;
          pbVar8[4] = 0x72;
          pbVar8[5] = 0x69;
          pbVar8[6] = 0x61;
          pbVar8[7] = 0x6e;
          pbVar8[8] = 0x67;
          pbVar8[9] = 0x6c;
          pbVar8[10] = 0x65;
          pbVar8[0xb] = 0x73;
          pbVar5[0] = 1;
          pbVar5[1] = 0;
          pbVar5[2] = 0;
          pbVar5[3] = 0;
          pbVar5[8] = 0x10;
          pbVar5[9] = 0;
          pbVar5[10] = 0;
          pbVar5[0xb] = 0;
          pbVar5[0xc] = 0;
          pbVar5[0xd] = 0;
          pbVar5[0xe] = 0;
          pbVar5[0xf] = 0;
          *(byte **)(pbVar5 + 0x10) = pbVar6;
          pbVar5[0x18] = 0x10;
          pbVar5[0x19] = 0;
          pbVar5[0x1a] = 0;
          pbVar5[0x1b] = 0;
          pbVar5[0x1c] = 0;
          pbVar5[0x1d] = 0;
          pbVar5[0x1e] = 0;
          pbVar5[0x1f] = 0;
          pbVar5[0x20] = 0;
          pbVar5[0x21] = 0;
          pbVar5[0x22] = 0;
          pbVar5[0x23] = 0;
          pbVar5[0x24] = 1;
          pbVar5[0x25] = 0;
          pbVar5[0x26] = 0;
          pbVar5[0x27] = 0;
          pbVar5[0x28] = 0;
          pbVar5[0x30] = 2;
          pbVar5[0x31] = 0;
          pbVar5[0x32] = 0;
          pbVar5[0x33] = 0;
          pbVar5[0x38] = 9;
          pbVar5[0x39] = 0;
          pbVar5[0x3a] = 0;
          pbVar5[0x3b] = 0;
          pbVar5[0x3c] = 0;
          pbVar5[0x3d] = 0;
          pbVar5[0x3e] = 0;
          pbVar5[0x3f] = 0;
          *(byte **)(pbVar5 + 0x40) = pbVar7;
          pbVar5[0x48] = 9;
          pbVar5[0x49] = 0;
          pbVar5[0x4a] = 0;
          pbVar5[0x4b] = 0;
          pbVar5[0x4c] = 0;
          pbVar5[0x4d] = 0;
          pbVar5[0x4e] = 0;
          pbVar5[0x4f] = 0;
          pbVar5[0x50] = 0;
          pbVar5[0x51] = 0;
          pbVar5[0x52] = 0;
          pbVar5[0x53] = 0;
          pbVar5[0x54] = 1;
          pbVar5[0x55] = 0;
          pbVar5[0x56] = 0;
          pbVar5[0x57] = 0;
          pbVar5[0x58] = 0;
          pbVar5[0x60] = 3;
          pbVar5[0x61] = 0;
          pbVar5[0x62] = 0;
          pbVar5[99] = 0;
          pbVar5[0x68] = 0xc;
          pbVar5[0x69] = 0;
          pbVar5[0x6a] = 0;
          pbVar5[0x6b] = 0;
          pbVar5[0x6c] = 0;
          pbVar5[0x6d] = 0;
          pbVar5[0x6e] = 0;
          pbVar5[0x6f] = 0;
          *(byte **)(pbVar5 + 0x70) = pbVar8;
          pbVar5[0x78] = 0xc;
          pbVar5[0x79] = 0;
          pbVar5[0x7a] = 0;
          pbVar5[0x7b] = 0;
          pbVar5[0x7c] = 0;
          pbVar5[0x7d] = 0;
          pbVar5[0x7e] = 0;
          pbVar5[0x7f] = 0;
          pbVar5[0x80] = 0;
          pbVar5[0x81] = 0;
          pbVar5[0x82] = 0;
          pbVar5[0x83] = 0;
          pbVar5[0x84] = 1;
          pbVar5[0x85] = 0;
          pbVar5[0x86] = 0;
          pbVar5[0x87] = 0;
          pbVar5[0x88] = 0;
          uVar10 = 3;
LAB_1405955ac:
          *param_1 = uVar10;
          param_1[1] = pbVar5;
          param_1[2] = uVar10;
          return param_1;
        }
        pdb_142dc7e2a(1,0xc);
      }
    }
  }
  else {
    pbVar5 = pub_1406abab0(0xc0,8);
    if (pbVar5 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0xc0);
    }
    pdb_14007ee60();
    pbVar6 = pub_1406abab0(8,1);
    if (pbVar6 == (byte *)0x0) {
      pdb_142dc7e2a(1,8);
    }
    else {
      pbVar6[0] = 0x24;
      pbVar6[1] = 0x67;
      pbVar6[2] = 0x6c;
      pbVar6[3] = 0x6f;
      pbVar6[4] = 0x62;
      pbVar6[5] = 0x61;
      pbVar6[6] = 0x6c;
      pbVar6[7] = 0x73;
      pdb_14007ee60();
      pbVar7 = pub_1406abab0(0x10,1);
      uVar4 = _UNK_142f6dee5;
      uVar3 = _UNK_142f6dee1;
      uVar2 = _UNK_142f6dedd;
      if (pbVar7 == (byte *)0x0) {
        pdb_142dc7e2a(1,0x10);
      }
      else {
        *(undefined4 *)pbVar7 = _DAT_142f6ded9;
        *(undefined4 *)(pbVar7 + 4) = uVar2;
        *(undefined4 *)(pbVar7 + 8) = uVar3;
        *(undefined4 *)(pbVar7 + 0xc) = uVar4;
        pdb_14007ee60();
        pbVar8 = pub_1406abab0(9,1);
        if (pbVar8 == (byte *)0x0) {
          pdb_142dc7e2a(1,9);
        }
        else {
          pbVar8[0] = 0x72;
          pbVar8[1] = 0x74;
          pbVar8[2] = 0x5f;
          pbVar8[3] = 0x62;
          pbVar8[4] = 0x6c;
          pbVar8[5] = 0x5f;
          pbVar8[6] = 0x62;
          pbVar8[7] = 0x76;
          pbVar8[8] = 0x68;
          pdb_14007ee60();
          pbVar9 = pub_1406abab0(0xc,1);
          if (pbVar9 != (byte *)0x0) {
            pbVar9[0] = 0x72;
            pbVar9[1] = 0x74;
            pbVar9[2] = 0x5f;
            pbVar9[3] = 0x74;
            pbVar9[4] = 0x72;
            pbVar9[5] = 0x69;
            pbVar9[6] = 0x61;
            pbVar9[7] = 0x6e;
            pbVar9[8] = 0x67;
            pbVar9[9] = 0x6c;
            pbVar9[10] = 0x65;
            pbVar9[0xb] = 0x73;
            pbVar5[0] = 0;
            pbVar5[1] = 0;
            pbVar5[2] = 0;
            pbVar5[3] = 0;
            pbVar5[8] = 8;
            pbVar5[9] = 0;
            pbVar5[10] = 0;
            pbVar5[0xb] = 0;
            pbVar5[0xc] = 0;
            pbVar5[0xd] = 0;
            pbVar5[0xe] = 0;
            pbVar5[0xf] = 0;
            *(byte **)(pbVar5 + 0x10) = pbVar6;
            pbVar5[0x18] = 8;
            pbVar5[0x19] = 0;
            pbVar5[0x1a] = 0;
            pbVar5[0x1b] = 0;
            pbVar5[0x1c] = 0;
            pbVar5[0x1d] = 0;
            pbVar5[0x1e] = 0;
            pbVar5[0x1f] = 0;
            pbVar5[0x20] = 0;
            pbVar5[0x21] = 0;
            pbVar5[0x22] = 0;
            pbVar5[0x23] = 0;
            pbVar5[0x24] = 1;
            pbVar5[0x25] = 0;
            pbVar5[0x26] = 0;
            pbVar5[0x27] = 0;
            pbVar5[0x28] = 1;
            pbVar5[0x30] = 1;
            pbVar5[0x31] = 0;
            pbVar5[0x32] = 0;
            pbVar5[0x33] = 0;
            pbVar5[0x38] = 0x10;
            pbVar5[0x39] = 0;
            pbVar5[0x3a] = 0;
            pbVar5[0x3b] = 0;
            pbVar5[0x3c] = 0;
            pbVar5[0x3d] = 0;
            pbVar5[0x3e] = 0;
            pbVar5[0x3f] = 0;
            *(byte **)(pbVar5 + 0x40) = pbVar7;
            pbVar5[0x48] = 0x10;
            pbVar5[0x49] = 0;
            pbVar5[0x4a] = 0;
            pbVar5[0x4b] = 0;
            pbVar5[0x4c] = 0;
            pbVar5[0x4d] = 0;
            pbVar5[0x4e] = 0;
            pbVar5[0x4f] = 0;
            pbVar5[0x50] = 0;
            pbVar5[0x51] = 0;
            pbVar5[0x52] = 0;
            pbVar5[0x53] = 0;
            pbVar5[0x54] = 1;
            pbVar5[0x55] = 0;
            pbVar5[0x56] = 0;
            pbVar5[0x57] = 0;
            pbVar5[0x58] = 0;
            pbVar5[0x60] = 2;
            pbVar5[0x61] = 0;
            pbVar5[0x62] = 0;
            pbVar5[99] = 0;
            pbVar5[0x68] = 9;
            pbVar5[0x69] = 0;
            pbVar5[0x6a] = 0;
            pbVar5[0x6b] = 0;
            pbVar5[0x6c] = 0;
            pbVar5[0x6d] = 0;
            pbVar5[0x6e] = 0;
            pbVar5[0x6f] = 0;
            *(byte **)(pbVar5 + 0x70) = pbVar8;
            pbVar5[0x78] = 9;
            pbVar5[0x79] = 0;
            pbVar5[0x7a] = 0;
            pbVar5[0x7b] = 0;
            pbVar5[0x7c] = 0;
            pbVar5[0x7d] = 0;
            pbVar5[0x7e] = 0;
            pbVar5[0x7f] = 0;
            pbVar5[0x80] = 0;
            pbVar5[0x81] = 0;
            pbVar5[0x82] = 0;
            pbVar5[0x83] = 0;
            pbVar5[0x84] = 1;
            pbVar5[0x85] = 0;
            pbVar5[0x86] = 0;
            pbVar5[0x87] = 0;
            pbVar5[0x88] = 0;
            pbVar5[0x90] = 3;
            pbVar5[0x91] = 0;
            pbVar5[0x92] = 0;
            pbVar5[0x93] = 0;
            pbVar5[0x98] = 0xc;
            pbVar5[0x99] = 0;
            pbVar5[0x9a] = 0;
            pbVar5[0x9b] = 0;
            pbVar5[0x9c] = 0;
            pbVar5[0x9d] = 0;
            pbVar5[0x9e] = 0;
            pbVar5[0x9f] = 0;
            *(byte **)(pbVar5 + 0xa0) = pbVar9;
            pbVar5[0xa8] = 0xc;
            pbVar5[0xa9] = 0;
            pbVar5[0xaa] = 0;
            pbVar5[0xab] = 0;
            pbVar5[0xac] = 0;
            pbVar5[0xad] = 0;
            pbVar5[0xae] = 0;
            pbVar5[0xaf] = 0;
            pbVar5[0xb0] = 0;
            pbVar5[0xb1] = 0;
            pbVar5[0xb2] = 0;
            pbVar5[0xb3] = 0;
            pbVar5[0xb4] = 1;
            pbVar5[0xb5] = 0;
            pbVar5[0xb6] = 0;
            pbVar5[0xb7] = 0;
            pbVar5[0xb8] = 0;
            uVar10 = 4;
            goto LAB_1405955ac;
          }
          pdb_142dc7e2a(1,0xc,param_3,param_4,pbVar8,pbVar7,pbVar6,pbVar5);
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

