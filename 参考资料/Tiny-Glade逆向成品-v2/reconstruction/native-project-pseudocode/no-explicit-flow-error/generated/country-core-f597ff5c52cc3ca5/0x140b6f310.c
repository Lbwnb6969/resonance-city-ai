// VA 0x140b6f310, PDB extent 5730 bytes
// country_core::shader::roof::inc::stone_floor::impl$0::descriptors<shabriri_rt::api::EmptyProtocol>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::shader::roof::inc::stone_floor::impl$0::descriptors<shabriri_rt::api::EmptyProtocol>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 5730 */

undefined8 * pdb_140b6f310(undefined8 *param_1,char param_2)

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
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined8 uVar19;
  
  pdb_14007ee60();
  if (param_2 == '\0') {
    pbVar5 = pub_1406abab0(0x240,8);
    if (pbVar5 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x240);
    }
    pdb_14007ee60();
    pbVar6 = pub_1406abab0(0x12,1);
    uVar4 = _UNK_14305b6f2;
    uVar3 = _UNK_14305b6ee;
    uVar2 = _UNK_14305b6ea;
    if (pbVar6 == (byte *)0x0) {
      pdb_142dc7e2a(1,0x12);
    }
    else {
      *(undefined4 *)pbVar6 = _DAT_14305b6e6;
      *(undefined4 *)(pbVar6 + 4) = uVar2;
      *(undefined4 *)(pbVar6 + 8) = uVar3;
      *(undefined4 *)(pbVar6 + 0xc) = uVar4;
      pbVar6[0x10] = 0x61;
      pbVar6[0x11] = 0x6c;
      pdb_14007ee60();
      pbVar7 = pub_1406abab0(0x10,1);
      uVar4 = _UNK_14305b704;
      uVar3 = _UNK_14305b700;
      uVar2 = _UNK_14305b6fc;
      if (pbVar7 == (byte *)0x0) {
        pdb_142dc7e2a(1,0x10);
      }
      else {
        *(undefined4 *)pbVar7 = _DAT_14305b6f8;
        *(undefined4 *)(pbVar7 + 4) = uVar2;
        *(undefined4 *)(pbVar7 + 8) = uVar3;
        *(undefined4 *)(pbVar7 + 0xc) = uVar4;
        pdb_14007ee60();
        pbVar8 = pub_1406abab0(0x12,1);
        uVar4 = _UNK_14305b714;
        uVar3 = _UNK_14305b710;
        uVar2 = _UNK_14305b70c;
        if (pbVar8 == (byte *)0x0) {
          pdb_142dc7e2a(1,0x12);
        }
        else {
          *(undefined4 *)pbVar8 = _DAT_14305b708;
          *(undefined4 *)(pbVar8 + 4) = uVar2;
          *(undefined4 *)(pbVar8 + 8) = uVar3;
          *(undefined4 *)(pbVar8 + 0xc) = uVar4;
          pbVar8[0x10] = 0x68;
          pbVar8[0x11] = 0x74;
          pdb_14007ee60();
          pbVar9 = pub_1406abab0(0x15,1);
          uVar4 = _UNK_14305b726;
          uVar3 = _UNK_14305b722;
          uVar2 = _UNK_14305b71e;
          if (pbVar9 == (byte *)0x0) {
            pdb_142dc7e2a(1,0x15);
          }
          else {
            *(undefined4 *)pbVar9 = _DAT_14305b71a;
            *(undefined4 *)(pbVar9 + 4) = uVar2;
            *(undefined4 *)(pbVar9 + 8) = uVar3;
            *(undefined4 *)(pbVar9 + 0xc) = uVar4;
            pbVar9[0xd] = 0x6f;
            pbVar9[0xe] = 0x75;
            pbVar9[0xf] = 0x67;
            pbVar9[0x10] = 0x68;
            pbVar9[0x11] = 0x6e;
            pbVar9[0x12] = 0x65;
            pbVar9[0x13] = 0x73;
            pbVar9[0x14] = 0x73;
            pdb_14007ee60();
            pbVar10 = pub_1406abab0(0x12,1);
            uVar4 = _UNK_14305b73b;
            uVar3 = _UNK_14305b737;
            uVar2 = _UNK_14305b733;
            if (pbVar10 == (byte *)0x0) {
              pdb_142dc7e2a(1,0x12);
            }
            else {
              *(undefined4 *)pbVar10 = _DAT_14305b72f;
              *(undefined4 *)(pbVar10 + 4) = uVar2;
              *(undefined4 *)(pbVar10 + 8) = uVar3;
              *(undefined4 *)(pbVar10 + 0xc) = uVar4;
              pbVar10[0x10] = 0x5f;
              pbVar10[0x11] = 0x32;
              pdb_14007ee60();
              pbVar11 = pub_1406abab0(0x14,1);
              uVar4 = _UNK_14305b74d;
              uVar3 = _UNK_14305b749;
              uVar2 = _UNK_14305b745;
              if (pbVar11 == (byte *)0x0) {
                pdb_142dc7e2a(1,0x14);
              }
              else {
                *(undefined4 *)pbVar11 = _DAT_14305b741;
                *(undefined4 *)(pbVar11 + 4) = uVar2;
                *(undefined4 *)(pbVar11 + 8) = uVar3;
                *(undefined4 *)(pbVar11 + 0xc) = uVar4;
                pbVar11[0x10] = 0x61;
                pbVar11[0x11] = 0x6c;
                pbVar11[0x12] = 0x5f;
                pbVar11[0x13] = 0x32;
                pdb_14007ee60();
                pbVar12 = pub_1406abab0(0x14,1);
                uVar4 = _UNK_14305b761;
                uVar3 = _UNK_14305b75d;
                uVar2 = _UNK_14305b759;
                if (pbVar12 == (byte *)0x0) {
                  pdb_142dc7e2a(1,0x14);
                }
                else {
                  *(undefined4 *)pbVar12 = _DAT_14305b755;
                  *(undefined4 *)(pbVar12 + 4) = uVar2;
                  *(undefined4 *)(pbVar12 + 8) = uVar3;
                  *(undefined4 *)(pbVar12 + 0xc) = uVar4;
                  pbVar12[0x10] = 0x68;
                  pbVar12[0x11] = 0x74;
                  pbVar12[0x12] = 0x5f;
                  pbVar12[0x13] = 0x32;
                  pdb_14007ee60();
                  pbVar13 = pub_1406abab0(0x17,1);
                  uVar4 = _UNK_14305b775;
                  uVar3 = _UNK_14305b771;
                  uVar2 = _UNK_14305b76d;
                  if (pbVar13 == (byte *)0x0) {
                    pdb_142dc7e2a(1,0x17);
                  }
                  else {
                    *(undefined4 *)pbVar13 = _DAT_14305b769;
                    *(undefined4 *)(pbVar13 + 4) = uVar2;
                    *(undefined4 *)(pbVar13 + 8) = uVar3;
                    *(undefined4 *)(pbVar13 + 0xc) = uVar4;
                    pbVar13[0xf] = 0x67;
                    pbVar13[0x10] = 0x68;
                    pbVar13[0x11] = 0x6e;
                    pbVar13[0x12] = 0x65;
                    pbVar13[0x13] = 0x73;
                    pbVar13[0x14] = 0x73;
                    pbVar13[0x15] = 0x5f;
                    pbVar13[0x16] = 0x32;
                    pdb_14007ee60();
                    pbVar14 = pub_1406abab0(0x12,1);
                    uVar4 = _UNK_14305b78c;
                    uVar3 = _UNK_14305b788;
                    uVar2 = _UNK_14305b784;
                    if (pbVar14 == (byte *)0x0) {
                      pdb_142dc7e2a(1,0x12);
                    }
                    else {
                      *(undefined4 *)pbVar14 = _DAT_14305b780;
                      *(undefined4 *)(pbVar14 + 4) = uVar2;
                      *(undefined4 *)(pbVar14 + 8) = uVar3;
                      *(undefined4 *)(pbVar14 + 0xc) = uVar4;
                      pbVar14[0x10] = 0x5f;
                      pbVar14[0x11] = 0x33;
                      pdb_14007ee60();
                      pbVar15 = pub_1406abab0(0x14,1);
                      uVar4 = _UNK_14305b79e;
                      uVar3 = _UNK_14305b79a;
                      uVar2 = _UNK_14305b796;
                      if (pbVar15 == (byte *)0x0) {
                        pdb_142dc7e2a(1,0x14);
                      }
                      else {
                        *(undefined4 *)pbVar15 = _DAT_14305b792;
                        *(undefined4 *)(pbVar15 + 4) = uVar2;
                        *(undefined4 *)(pbVar15 + 8) = uVar3;
                        *(undefined4 *)(pbVar15 + 0xc) = uVar4;
                        pbVar15[0x10] = 0x61;
                        pbVar15[0x11] = 0x6c;
                        pbVar15[0x12] = 0x5f;
                        pbVar15[0x13] = 0x33;
                        pdb_14007ee60();
                        pbVar16 = pub_1406abab0(0x14,1);
                        uVar4 = _UNK_14305b7b2;
                        uVar3 = _UNK_14305b7ae;
                        uVar2 = _UNK_14305b7aa;
                        if (pbVar16 == (byte *)0x0) {
                          pdb_142dc7e2a(1,0x14);
                        }
                        else {
                          *(undefined4 *)pbVar16 = _DAT_14305b7a6;
                          *(undefined4 *)(pbVar16 + 4) = uVar2;
                          *(undefined4 *)(pbVar16 + 8) = uVar3;
                          *(undefined4 *)(pbVar16 + 0xc) = uVar4;
                          pbVar16[0x10] = 0x68;
                          pbVar16[0x11] = 0x74;
                          pbVar16[0x12] = 0x5f;
                          pbVar16[0x13] = 0x33;
                          pdb_14007ee60();
                          pbVar17 = pub_1406abab0(0x17,1);
                          uVar19 = _UNK_14305b7c2;
                          if (pbVar17 != (byte *)0x0) {
                            *(undefined8 *)pbVar17 = _DAT_14305b7ba;
                            *(undefined8 *)(pbVar17 + 8) = uVar19;
                            pbVar17[0xf] = 0x67;
                            pbVar17[0x10] = 0x68;
                            pbVar17[0x11] = 0x6e;
                            pbVar17[0x12] = 0x65;
                            pbVar17[0x13] = 0x73;
                            pbVar17[0x14] = 0x73;
                            pbVar17[0x15] = 0x5f;
                            pbVar17[0x16] = 0x33;
                            pbVar5[0] = 1;
                            pbVar5[1] = 0;
                            pbVar5[2] = 0;
                            pbVar5[3] = 0;
                            pbVar5[8] = 0x12;
                            pbVar5[9] = 0;
                            pbVar5[10] = 0;
                            pbVar5[0xb] = 0;
                            pbVar5[0xc] = 0;
                            pbVar5[0xd] = 0;
                            pbVar5[0xe] = 0;
                            pbVar5[0xf] = 0;
                            *(byte **)(pbVar5 + 0x10) = pbVar6;
                            pbVar5[0x18] = 0x12;
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
                            pbVar5[0x28] = 4;
                            pbVar5[0x30] = 2;
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
                            pbVar5[0x58] = 4;
                            pbVar5[0x60] = 3;
                            pbVar5[0x61] = 0;
                            pbVar5[0x62] = 0;
                            pbVar5[99] = 0;
                            pbVar5[0x68] = 0x12;
                            pbVar5[0x69] = 0;
                            pbVar5[0x6a] = 0;
                            pbVar5[0x6b] = 0;
                            pbVar5[0x6c] = 0;
                            pbVar5[0x6d] = 0;
                            pbVar5[0x6e] = 0;
                            pbVar5[0x6f] = 0;
                            *(byte **)(pbVar5 + 0x70) = pbVar8;
                            pbVar5[0x78] = 0x12;
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
                            pbVar5[0x88] = 4;
                            pbVar5[0x90] = 4;
                            pbVar5[0x91] = 0;
                            pbVar5[0x92] = 0;
                            pbVar5[0x93] = 0;
                            pbVar5[0x98] = 0x15;
                            pbVar5[0x99] = 0;
                            pbVar5[0x9a] = 0;
                            pbVar5[0x9b] = 0;
                            pbVar5[0x9c] = 0;
                            pbVar5[0x9d] = 0;
                            pbVar5[0x9e] = 0;
                            pbVar5[0x9f] = 0;
                            *(byte **)(pbVar5 + 0xa0) = pbVar9;
                            pbVar5[0xa8] = 0x15;
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
                            pbVar5[0xb8] = 4;
                            pbVar5[0xc0] = 5;
                            pbVar5[0xc1] = 0;
                            pbVar5[0xc2] = 0;
                            pbVar5[0xc3] = 0;
                            pbVar5[200] = 0x12;
                            pbVar5[0xc9] = 0;
                            pbVar5[0xca] = 0;
                            pbVar5[0xcb] = 0;
                            pbVar5[0xcc] = 0;
                            pbVar5[0xcd] = 0;
                            pbVar5[0xce] = 0;
                            pbVar5[0xcf] = 0;
                            *(byte **)(pbVar5 + 0xd0) = pbVar10;
                            pbVar5[0xd8] = 0x12;
                            pbVar5[0xd9] = 0;
                            pbVar5[0xda] = 0;
                            pbVar5[0xdb] = 0;
                            pbVar5[0xdc] = 0;
                            pbVar5[0xdd] = 0;
                            pbVar5[0xde] = 0;
                            pbVar5[0xdf] = 0;
                            pbVar5[0xe0] = 0;
                            pbVar5[0xe1] = 0;
                            pbVar5[0xe2] = 0;
                            pbVar5[0xe3] = 0;
                            pbVar5[0xe4] = 1;
                            pbVar5[0xe5] = 0;
                            pbVar5[0xe6] = 0;
                            pbVar5[0xe7] = 0;
                            pbVar5[0xe8] = 4;
                            pbVar5[0xf0] = 6;
                            pbVar5[0xf1] = 0;
                            pbVar5[0xf2] = 0;
                            pbVar5[0xf3] = 0;
                            pbVar5[0xf8] = 0x14;
                            pbVar5[0xf9] = 0;
                            pbVar5[0xfa] = 0;
                            pbVar5[0xfb] = 0;
                            pbVar5[0xfc] = 0;
                            pbVar5[0xfd] = 0;
                            pbVar5[0xfe] = 0;
                            pbVar5[0xff] = 0;
                            *(byte **)(pbVar5 + 0x100) = pbVar11;
                            pbVar5[0x108] = 0x14;
                            pbVar5[0x109] = 0;
                            pbVar5[0x10a] = 0;
                            pbVar5[0x10b] = 0;
                            pbVar5[0x10c] = 0;
                            pbVar5[0x10d] = 0;
                            pbVar5[0x10e] = 0;
                            pbVar5[0x10f] = 0;
                            pbVar5[0x110] = 0;
                            pbVar5[0x111] = 0;
                            pbVar5[0x112] = 0;
                            pbVar5[0x113] = 0;
                            pbVar5[0x114] = 1;
                            pbVar5[0x115] = 0;
                            pbVar5[0x116] = 0;
                            pbVar5[0x117] = 0;
                            pbVar5[0x118] = 4;
                            pbVar5[0x120] = 7;
                            pbVar5[0x121] = 0;
                            pbVar5[0x122] = 0;
                            pbVar5[0x123] = 0;
                            pbVar5[0x128] = 0x14;
                            pbVar5[0x129] = 0;
                            pbVar5[0x12a] = 0;
                            pbVar5[299] = 0;
                            pbVar5[300] = 0;
                            pbVar5[0x12d] = 0;
                            pbVar5[0x12e] = 0;
                            pbVar5[0x12f] = 0;
                            *(byte **)(pbVar5 + 0x130) = pbVar12;
                            pbVar5[0x138] = 0x14;
                            pbVar5[0x139] = 0;
                            pbVar5[0x13a] = 0;
                            pbVar5[0x13b] = 0;
                            pbVar5[0x13c] = 0;
                            pbVar5[0x13d] = 0;
                            pbVar5[0x13e] = 0;
                            pbVar5[0x13f] = 0;
                            pbVar5[0x140] = 0;
                            pbVar5[0x141] = 0;
                            pbVar5[0x142] = 0;
                            pbVar5[0x143] = 0;
                            pbVar5[0x144] = 1;
                            pbVar5[0x145] = 0;
                            pbVar5[0x146] = 0;
                            pbVar5[0x147] = 0;
                            pbVar5[0x148] = 4;
                            pbVar5[0x150] = 8;
                            pbVar5[0x151] = 0;
                            pbVar5[0x152] = 0;
                            pbVar5[0x153] = 0;
                            pbVar5[0x158] = 0x17;
                            pbVar5[0x159] = 0;
                            pbVar5[0x15a] = 0;
                            pbVar5[0x15b] = 0;
                            pbVar5[0x15c] = 0;
                            pbVar5[0x15d] = 0;
                            pbVar5[0x15e] = 0;
                            pbVar5[0x15f] = 0;
                            *(byte **)(pbVar5 + 0x160) = pbVar13;
                            pbVar5[0x168] = 0x17;
                            pbVar5[0x169] = 0;
                            pbVar5[0x16a] = 0;
                            pbVar5[0x16b] = 0;
                            pbVar5[0x16c] = 0;
                            pbVar5[0x16d] = 0;
                            pbVar5[0x16e] = 0;
                            pbVar5[0x16f] = 0;
                            pbVar5[0x170] = 0;
                            pbVar5[0x171] = 0;
                            pbVar5[0x172] = 0;
                            pbVar5[0x173] = 0;
                            pbVar5[0x174] = 1;
                            pbVar5[0x175] = 0;
                            pbVar5[0x176] = 0;
                            pbVar5[0x177] = 0;
                            pbVar5[0x178] = 4;
                            pbVar5[0x180] = 9;
                            pbVar5[0x181] = 0;
                            pbVar5[0x182] = 0;
                            pbVar5[0x183] = 0;
                            pbVar5[0x188] = 0x12;
                            pbVar5[0x189] = 0;
                            pbVar5[0x18a] = 0;
                            pbVar5[0x18b] = 0;
                            pbVar5[0x18c] = 0;
                            pbVar5[0x18d] = 0;
                            pbVar5[0x18e] = 0;
                            pbVar5[399] = 0;
                            *(byte **)(pbVar5 + 400) = pbVar14;
                            pbVar5[0x198] = 0x12;
                            pbVar5[0x199] = 0;
                            pbVar5[0x19a] = 0;
                            pbVar5[0x19b] = 0;
                            pbVar5[0x19c] = 0;
                            pbVar5[0x19d] = 0;
                            pbVar5[0x19e] = 0;
                            pbVar5[0x19f] = 0;
                            pbVar5[0x1a0] = 0;
                            pbVar5[0x1a1] = 0;
                            pbVar5[0x1a2] = 0;
                            pbVar5[0x1a3] = 0;
                            pbVar5[0x1a4] = 1;
                            pbVar5[0x1a5] = 0;
                            pbVar5[0x1a6] = 0;
                            pbVar5[0x1a7] = 0;
                            pbVar5[0x1a8] = 4;
                            pbVar5[0x1b0] = 10;
                            pbVar5[0x1b1] = 0;
                            pbVar5[0x1b2] = 0;
                            pbVar5[0x1b3] = 0;
                            pbVar5[0x1b8] = 0x14;
                            pbVar5[0x1b9] = 0;
                            pbVar5[0x1ba] = 0;
                            pbVar5[0x1bb] = 0;
                            pbVar5[0x1bc] = 0;
                            pbVar5[0x1bd] = 0;
                            pbVar5[0x1be] = 0;
                            pbVar5[0x1bf] = 0;
                            *(byte **)(pbVar5 + 0x1c0) = pbVar15;
                            pbVar5[0x1c8] = 0x14;
                            pbVar5[0x1c9] = 0;
                            pbVar5[0x1ca] = 0;
                            pbVar5[0x1cb] = 0;
                            pbVar5[0x1cc] = 0;
                            pbVar5[0x1cd] = 0;
                            pbVar5[0x1ce] = 0;
                            pbVar5[0x1cf] = 0;
                            pbVar5[0x1d0] = 0;
                            pbVar5[0x1d1] = 0;
                            pbVar5[0x1d2] = 0;
                            pbVar5[0x1d3] = 0;
                            pbVar5[0x1d4] = 1;
                            pbVar5[0x1d5] = 0;
                            pbVar5[0x1d6] = 0;
                            pbVar5[0x1d7] = 0;
                            pbVar5[0x1d8] = 4;
                            pbVar5[0x1e0] = 0xb;
                            pbVar5[0x1e1] = 0;
                            pbVar5[0x1e2] = 0;
                            pbVar5[0x1e3] = 0;
                            pbVar5[0x1e8] = 0x14;
                            pbVar5[0x1e9] = 0;
                            pbVar5[0x1ea] = 0;
                            pbVar5[0x1eb] = 0;
                            pbVar5[0x1ec] = 0;
                            pbVar5[0x1ed] = 0;
                            pbVar5[0x1ee] = 0;
                            pbVar5[0x1ef] = 0;
                            *(byte **)(pbVar5 + 0x1f0) = pbVar16;
                            pbVar5[0x1f8] = 0x14;
                            pbVar5[0x1f9] = 0;
                            pbVar5[0x1fa] = 0;
                            pbVar5[0x1fb] = 0;
                            pbVar5[0x1fc] = 0;
                            pbVar5[0x1fd] = 0;
                            pbVar5[0x1fe] = 0;
                            pbVar5[0x1ff] = 0;
                            pbVar5[0x200] = 0;
                            pbVar5[0x201] = 0;
                            pbVar5[0x202] = 0;
                            pbVar5[0x203] = 0;
                            pbVar5[0x204] = 1;
                            pbVar5[0x205] = 0;
                            pbVar5[0x206] = 0;
                            pbVar5[0x207] = 0;
                            pbVar5[0x208] = 4;
                            pbVar5[0x210] = 0xc;
                            pbVar5[0x211] = 0;
                            pbVar5[0x212] = 0;
                            pbVar5[0x213] = 0;
                            pbVar5[0x218] = 0x17;
                            pbVar5[0x219] = 0;
                            pbVar5[0x21a] = 0;
                            pbVar5[0x21b] = 0;
                            pbVar5[0x21c] = 0;
                            pbVar5[0x21d] = 0;
                            pbVar5[0x21e] = 0;
                            pbVar5[0x21f] = 0;
                            *(byte **)(pbVar5 + 0x220) = pbVar17;
                            pbVar5[0x228] = 0x17;
                            pbVar5[0x229] = 0;
                            pbVar5[0x22a] = 0;
                            pbVar5[0x22b] = 0;
                            pbVar5[0x22c] = 0;
                            pbVar5[0x22d] = 0;
                            pbVar5[0x22e] = 0;
                            pbVar5[0x22f] = 0;
                            pbVar5[0x230] = 0;
                            pbVar5[0x231] = 0;
                            pbVar5[0x232] = 0;
                            pbVar5[0x233] = 0;
                            pbVar5[0x234] = 1;
                            pbVar5[0x235] = 0;
                            pbVar5[0x236] = 0;
                            pbVar5[0x237] = 0;
                            pbVar5[0x238] = 4;
                            uVar19 = 0xc;
LAB_140b6fd81:
                            *param_1 = uVar19;
                            param_1[1] = pbVar5;
                            param_1[2] = uVar19;
                            return param_1;
                          }
                          pdb_142dc7e2a(1,0x17);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    pbVar5 = pub_1406abab0(0x270,8);
    if (pbVar5 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x270);
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
      pbVar7 = pub_1406abab0(0x12,1);
      uVar4 = _UNK_14305b6f2;
      uVar3 = _UNK_14305b6ee;
      uVar2 = _UNK_14305b6ea;
      if (pbVar7 == (byte *)0x0) {
        pdb_142dc7e2a(1,0x12);
      }
      else {
        *(undefined4 *)pbVar7 = _DAT_14305b6e6;
        *(undefined4 *)(pbVar7 + 4) = uVar2;
        *(undefined4 *)(pbVar7 + 8) = uVar3;
        *(undefined4 *)(pbVar7 + 0xc) = uVar4;
        pbVar7[0x10] = 0x61;
        pbVar7[0x11] = 0x6c;
        pdb_14007ee60();
        pbVar8 = pub_1406abab0(0x10,1);
        uVar4 = _UNK_14305b704;
        uVar3 = _UNK_14305b700;
        uVar2 = _UNK_14305b6fc;
        if (pbVar8 == (byte *)0x0) {
          pdb_142dc7e2a(1,0x10);
        }
        else {
          *(undefined4 *)pbVar8 = _DAT_14305b6f8;
          *(undefined4 *)(pbVar8 + 4) = uVar2;
          *(undefined4 *)(pbVar8 + 8) = uVar3;
          *(undefined4 *)(pbVar8 + 0xc) = uVar4;
          pdb_14007ee60();
          pbVar9 = pub_1406abab0(0x12,1);
          uVar4 = _UNK_14305b714;
          uVar3 = _UNK_14305b710;
          uVar2 = _UNK_14305b70c;
          if (pbVar9 == (byte *)0x0) {
            pdb_142dc7e2a(1,0x12);
          }
          else {
            *(undefined4 *)pbVar9 = _DAT_14305b708;
            *(undefined4 *)(pbVar9 + 4) = uVar2;
            *(undefined4 *)(pbVar9 + 8) = uVar3;
            *(undefined4 *)(pbVar9 + 0xc) = uVar4;
            pbVar9[0x10] = 0x68;
            pbVar9[0x11] = 0x74;
            pdb_14007ee60();
            pbVar10 = pub_1406abab0(0x15,1);
            uVar4 = _UNK_14305b726;
            uVar3 = _UNK_14305b722;
            uVar2 = _UNK_14305b71e;
            if (pbVar10 == (byte *)0x0) {
              pdb_142dc7e2a(1,0x15);
            }
            else {
              *(undefined4 *)pbVar10 = _DAT_14305b71a;
              *(undefined4 *)(pbVar10 + 4) = uVar2;
              *(undefined4 *)(pbVar10 + 8) = uVar3;
              *(undefined4 *)(pbVar10 + 0xc) = uVar4;
              pbVar10[0xd] = 0x6f;
              pbVar10[0xe] = 0x75;
              pbVar10[0xf] = 0x67;
              pbVar10[0x10] = 0x68;
              pbVar10[0x11] = 0x6e;
              pbVar10[0x12] = 0x65;
              pbVar10[0x13] = 0x73;
              pbVar10[0x14] = 0x73;
              pdb_14007ee60();
              pbVar11 = pub_1406abab0(0x12,1);
              uVar4 = _UNK_14305b73b;
              uVar3 = _UNK_14305b737;
              uVar2 = _UNK_14305b733;
              if (pbVar11 == (byte *)0x0) {
                pdb_142dc7e2a(1,0x12);
              }
              else {
                *(undefined4 *)pbVar11 = _DAT_14305b72f;
                *(undefined4 *)(pbVar11 + 4) = uVar2;
                *(undefined4 *)(pbVar11 + 8) = uVar3;
                *(undefined4 *)(pbVar11 + 0xc) = uVar4;
                pbVar11[0x10] = 0x5f;
                pbVar11[0x11] = 0x32;
                pdb_14007ee60();
                pbVar12 = pub_1406abab0(0x14,1);
                uVar4 = _UNK_14305b74d;
                uVar3 = _UNK_14305b749;
                uVar2 = _UNK_14305b745;
                if (pbVar12 == (byte *)0x0) {
                  pdb_142dc7e2a(1,0x14);
                }
                else {
                  *(undefined4 *)pbVar12 = _DAT_14305b741;
                  *(undefined4 *)(pbVar12 + 4) = uVar2;
                  *(undefined4 *)(pbVar12 + 8) = uVar3;
                  *(undefined4 *)(pbVar12 + 0xc) = uVar4;
                  pbVar12[0x10] = 0x61;
                  pbVar12[0x11] = 0x6c;
                  pbVar12[0x12] = 0x5f;
                  pbVar12[0x13] = 0x32;
                  pdb_14007ee60();
                  pbVar13 = pub_1406abab0(0x14,1);
                  uVar4 = _UNK_14305b761;
                  uVar3 = _UNK_14305b75d;
                  uVar2 = _UNK_14305b759;
                  if (pbVar13 == (byte *)0x0) {
                    pdb_142dc7e2a(1,0x14);
                  }
                  else {
                    *(undefined4 *)pbVar13 = _DAT_14305b755;
                    *(undefined4 *)(pbVar13 + 4) = uVar2;
                    *(undefined4 *)(pbVar13 + 8) = uVar3;
                    *(undefined4 *)(pbVar13 + 0xc) = uVar4;
                    pbVar13[0x10] = 0x68;
                    pbVar13[0x11] = 0x74;
                    pbVar13[0x12] = 0x5f;
                    pbVar13[0x13] = 0x32;
                    pdb_14007ee60();
                    pbVar14 = pub_1406abab0(0x17,1);
                    uVar4 = _UNK_14305b775;
                    uVar3 = _UNK_14305b771;
                    uVar2 = _UNK_14305b76d;
                    if (pbVar14 == (byte *)0x0) {
                      pdb_142dc7e2a(1,0x17);
                    }
                    else {
                      *(undefined4 *)pbVar14 = _DAT_14305b769;
                      *(undefined4 *)(pbVar14 + 4) = uVar2;
                      *(undefined4 *)(pbVar14 + 8) = uVar3;
                      *(undefined4 *)(pbVar14 + 0xc) = uVar4;
                      pbVar14[0xf] = 0x67;
                      pbVar14[0x10] = 0x68;
                      pbVar14[0x11] = 0x6e;
                      pbVar14[0x12] = 0x65;
                      pbVar14[0x13] = 0x73;
                      pbVar14[0x14] = 0x73;
                      pbVar14[0x15] = 0x5f;
                      pbVar14[0x16] = 0x32;
                      pdb_14007ee60();
                      pbVar15 = pub_1406abab0(0x12,1);
                      uVar4 = _UNK_14305b78c;
                      uVar3 = _UNK_14305b788;
                      uVar2 = _UNK_14305b784;
                      if (pbVar15 == (byte *)0x0) {
                        pdb_142dc7e2a(1,0x12);
                      }
                      else {
                        *(undefined4 *)pbVar15 = _DAT_14305b780;
                        *(undefined4 *)(pbVar15 + 4) = uVar2;
                        *(undefined4 *)(pbVar15 + 8) = uVar3;
                        *(undefined4 *)(pbVar15 + 0xc) = uVar4;
                        pbVar15[0x10] = 0x5f;
                        pbVar15[0x11] = 0x33;
                        pdb_14007ee60();
                        pbVar16 = pub_1406abab0(0x14,1);
                        uVar4 = _UNK_14305b79e;
                        uVar3 = _UNK_14305b79a;
                        uVar2 = _UNK_14305b796;
                        if (pbVar16 == (byte *)0x0) {
                          pdb_142dc7e2a(1,0x14);
                        }
                        else {
                          *(undefined4 *)pbVar16 = _DAT_14305b792;
                          *(undefined4 *)(pbVar16 + 4) = uVar2;
                          *(undefined4 *)(pbVar16 + 8) = uVar3;
                          *(undefined4 *)(pbVar16 + 0xc) = uVar4;
                          pbVar16[0x10] = 0x61;
                          pbVar16[0x11] = 0x6c;
                          pbVar16[0x12] = 0x5f;
                          pbVar16[0x13] = 0x33;
                          pdb_14007ee60();
                          pbVar17 = pub_1406abab0(0x14,1);
                          uVar4 = _UNK_14305b7b2;
                          uVar3 = _UNK_14305b7ae;
                          uVar2 = _UNK_14305b7aa;
                          if (pbVar17 == (byte *)0x0) {
                            pdb_142dc7e2a(1,0x14);
                          }
                          else {
                            *(undefined4 *)pbVar17 = _DAT_14305b7a6;
                            *(undefined4 *)(pbVar17 + 4) = uVar2;
                            *(undefined4 *)(pbVar17 + 8) = uVar3;
                            *(undefined4 *)(pbVar17 + 0xc) = uVar4;
                            pbVar17[0x10] = 0x68;
                            pbVar17[0x11] = 0x74;
                            pbVar17[0x12] = 0x5f;
                            pbVar17[0x13] = 0x33;
                            pdb_14007ee60();
                            pbVar18 = pub_1406abab0(0x17,1);
                            uVar19 = _UNK_14305b7c2;
                            if (pbVar18 != (byte *)0x0) {
                              *(undefined8 *)pbVar18 = _DAT_14305b7ba;
                              *(undefined8 *)(pbVar18 + 8) = uVar19;
                              pbVar18[0xf] = 0x67;
                              pbVar18[0x10] = 0x68;
                              pbVar18[0x11] = 0x6e;
                              pbVar18[0x12] = 0x65;
                              pbVar18[0x13] = 0x73;
                              pbVar18[0x14] = 0x73;
                              pbVar18[0x15] = 0x5f;
                              pbVar18[0x16] = 0x33;
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
                              pbVar5[0x38] = 0x12;
                              pbVar5[0x39] = 0;
                              pbVar5[0x3a] = 0;
                              pbVar5[0x3b] = 0;
                              pbVar5[0x3c] = 0;
                              pbVar5[0x3d] = 0;
                              pbVar5[0x3e] = 0;
                              pbVar5[0x3f] = 0;
                              *(byte **)(pbVar5 + 0x40) = pbVar7;
                              pbVar5[0x48] = 0x12;
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
                              pbVar5[0x58] = 4;
                              pbVar5[0x60] = 2;
                              pbVar5[0x61] = 0;
                              pbVar5[0x62] = 0;
                              pbVar5[99] = 0;
                              pbVar5[0x68] = 0x10;
                              pbVar5[0x69] = 0;
                              pbVar5[0x6a] = 0;
                              pbVar5[0x6b] = 0;
                              pbVar5[0x6c] = 0;
                              pbVar5[0x6d] = 0;
                              pbVar5[0x6e] = 0;
                              pbVar5[0x6f] = 0;
                              *(byte **)(pbVar5 + 0x70) = pbVar8;
                              pbVar5[0x78] = 0x10;
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
                              pbVar5[0x88] = 4;
                              pbVar5[0x90] = 3;
                              pbVar5[0x91] = 0;
                              pbVar5[0x92] = 0;
                              pbVar5[0x93] = 0;
                              pbVar5[0x98] = 0x12;
                              pbVar5[0x99] = 0;
                              pbVar5[0x9a] = 0;
                              pbVar5[0x9b] = 0;
                              pbVar5[0x9c] = 0;
                              pbVar5[0x9d] = 0;
                              pbVar5[0x9e] = 0;
                              pbVar5[0x9f] = 0;
                              *(byte **)(pbVar5 + 0xa0) = pbVar9;
                              pbVar5[0xa8] = 0x12;
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
                              pbVar5[0xb8] = 4;
                              pbVar5[0xc0] = 4;
                              pbVar5[0xc1] = 0;
                              pbVar5[0xc2] = 0;
                              pbVar5[0xc3] = 0;
                              pbVar5[200] = 0x15;
                              pbVar5[0xc9] = 0;
                              pbVar5[0xca] = 0;
                              pbVar5[0xcb] = 0;
                              pbVar5[0xcc] = 0;
                              pbVar5[0xcd] = 0;
                              pbVar5[0xce] = 0;
                              pbVar5[0xcf] = 0;
                              *(byte **)(pbVar5 + 0xd0) = pbVar10;
                              pbVar5[0xd8] = 0x15;
                              pbVar5[0xd9] = 0;
                              pbVar5[0xda] = 0;
                              pbVar5[0xdb] = 0;
                              pbVar5[0xdc] = 0;
                              pbVar5[0xdd] = 0;
                              pbVar5[0xde] = 0;
                              pbVar5[0xdf] = 0;
                              pbVar5[0xe0] = 0;
                              pbVar5[0xe1] = 0;
                              pbVar5[0xe2] = 0;
                              pbVar5[0xe3] = 0;
                              pbVar5[0xe4] = 1;
                              pbVar5[0xe5] = 0;
                              pbVar5[0xe6] = 0;
                              pbVar5[0xe7] = 0;
                              pbVar5[0xe8] = 4;
                              pbVar5[0xf0] = 5;
                              pbVar5[0xf1] = 0;
                              pbVar5[0xf2] = 0;
                              pbVar5[0xf3] = 0;
                              pbVar5[0xf8] = 0x12;
                              pbVar5[0xf9] = 0;
                              pbVar5[0xfa] = 0;
                              pbVar5[0xfb] = 0;
                              pbVar5[0xfc] = 0;
                              pbVar5[0xfd] = 0;
                              pbVar5[0xfe] = 0;
                              pbVar5[0xff] = 0;
                              *(byte **)(pbVar5 + 0x100) = pbVar11;
                              pbVar5[0x108] = 0x12;
                              pbVar5[0x109] = 0;
                              pbVar5[0x10a] = 0;
                              pbVar5[0x10b] = 0;
                              pbVar5[0x10c] = 0;
                              pbVar5[0x10d] = 0;
                              pbVar5[0x10e] = 0;
                              pbVar5[0x10f] = 0;
                              pbVar5[0x110] = 0;
                              pbVar5[0x111] = 0;
                              pbVar5[0x112] = 0;
                              pbVar5[0x113] = 0;
                              pbVar5[0x114] = 1;
                              pbVar5[0x115] = 0;
                              pbVar5[0x116] = 0;
                              pbVar5[0x117] = 0;
                              pbVar5[0x118] = 4;
                              pbVar5[0x120] = 6;
                              pbVar5[0x121] = 0;
                              pbVar5[0x122] = 0;
                              pbVar5[0x123] = 0;
                              pbVar5[0x128] = 0x14;
                              pbVar5[0x129] = 0;
                              pbVar5[0x12a] = 0;
                              pbVar5[299] = 0;
                              pbVar5[300] = 0;
                              pbVar5[0x12d] = 0;
                              pbVar5[0x12e] = 0;
                              pbVar5[0x12f] = 0;
                              *(byte **)(pbVar5 + 0x130) = pbVar12;
                              pbVar5[0x138] = 0x14;
                              pbVar5[0x139] = 0;
                              pbVar5[0x13a] = 0;
                              pbVar5[0x13b] = 0;
                              pbVar5[0x13c] = 0;
                              pbVar5[0x13d] = 0;
                              pbVar5[0x13e] = 0;
                              pbVar5[0x13f] = 0;
                              pbVar5[0x140] = 0;
                              pbVar5[0x141] = 0;
                              pbVar5[0x142] = 0;
                              pbVar5[0x143] = 0;
                              pbVar5[0x144] = 1;
                              pbVar5[0x145] = 0;
                              pbVar5[0x146] = 0;
                              pbVar5[0x147] = 0;
                              pbVar5[0x148] = 4;
                              pbVar5[0x150] = 7;
                              pbVar5[0x151] = 0;
                              pbVar5[0x152] = 0;
                              pbVar5[0x153] = 0;
                              pbVar5[0x158] = 0x14;
                              pbVar5[0x159] = 0;
                              pbVar5[0x15a] = 0;
                              pbVar5[0x15b] = 0;
                              pbVar5[0x15c] = 0;
                              pbVar5[0x15d] = 0;
                              pbVar5[0x15e] = 0;
                              pbVar5[0x15f] = 0;
                              *(byte **)(pbVar5 + 0x160) = pbVar13;
                              pbVar5[0x168] = 0x14;
                              pbVar5[0x169] = 0;
                              pbVar5[0x16a] = 0;
                              pbVar5[0x16b] = 0;
                              pbVar5[0x16c] = 0;
                              pbVar5[0x16d] = 0;
                              pbVar5[0x16e] = 0;
                              pbVar5[0x16f] = 0;
                              pbVar5[0x170] = 0;
                              pbVar5[0x171] = 0;
                              pbVar5[0x172] = 0;
                              pbVar5[0x173] = 0;
                              pbVar5[0x174] = 1;
                              pbVar5[0x175] = 0;
                              pbVar5[0x176] = 0;
                              pbVar5[0x177] = 0;
                              pbVar5[0x178] = 4;
                              pbVar5[0x180] = 8;
                              pbVar5[0x181] = 0;
                              pbVar5[0x182] = 0;
                              pbVar5[0x183] = 0;
                              pbVar5[0x188] = 0x17;
                              pbVar5[0x189] = 0;
                              pbVar5[0x18a] = 0;
                              pbVar5[0x18b] = 0;
                              pbVar5[0x18c] = 0;
                              pbVar5[0x18d] = 0;
                              pbVar5[0x18e] = 0;
                              pbVar5[399] = 0;
                              *(byte **)(pbVar5 + 400) = pbVar14;
                              pbVar5[0x198] = 0x17;
                              pbVar5[0x199] = 0;
                              pbVar5[0x19a] = 0;
                              pbVar5[0x19b] = 0;
                              pbVar5[0x19c] = 0;
                              pbVar5[0x19d] = 0;
                              pbVar5[0x19e] = 0;
                              pbVar5[0x19f] = 0;
                              pbVar5[0x1a0] = 0;
                              pbVar5[0x1a1] = 0;
                              pbVar5[0x1a2] = 0;
                              pbVar5[0x1a3] = 0;
                              pbVar5[0x1a4] = 1;
                              pbVar5[0x1a5] = 0;
                              pbVar5[0x1a6] = 0;
                              pbVar5[0x1a7] = 0;
                              pbVar5[0x1a8] = 4;
                              pbVar5[0x1b0] = 9;
                              pbVar5[0x1b1] = 0;
                              pbVar5[0x1b2] = 0;
                              pbVar5[0x1b3] = 0;
                              pbVar5[0x1b8] = 0x12;
                              pbVar5[0x1b9] = 0;
                              pbVar5[0x1ba] = 0;
                              pbVar5[0x1bb] = 0;
                              pbVar5[0x1bc] = 0;
                              pbVar5[0x1bd] = 0;
                              pbVar5[0x1be] = 0;
                              pbVar5[0x1bf] = 0;
                              *(byte **)(pbVar5 + 0x1c0) = pbVar15;
                              pbVar5[0x1c8] = 0x12;
                              pbVar5[0x1c9] = 0;
                              pbVar5[0x1ca] = 0;
                              pbVar5[0x1cb] = 0;
                              pbVar5[0x1cc] = 0;
                              pbVar5[0x1cd] = 0;
                              pbVar5[0x1ce] = 0;
                              pbVar5[0x1cf] = 0;
                              pbVar5[0x1d0] = 0;
                              pbVar5[0x1d1] = 0;
                              pbVar5[0x1d2] = 0;
                              pbVar5[0x1d3] = 0;
                              pbVar5[0x1d4] = 1;
                              pbVar5[0x1d5] = 0;
                              pbVar5[0x1d6] = 0;
                              pbVar5[0x1d7] = 0;
                              pbVar5[0x1d8] = 4;
                              pbVar5[0x1e0] = 10;
                              pbVar5[0x1e1] = 0;
                              pbVar5[0x1e2] = 0;
                              pbVar5[0x1e3] = 0;
                              pbVar5[0x1e8] = 0x14;
                              pbVar5[0x1e9] = 0;
                              pbVar5[0x1ea] = 0;
                              pbVar5[0x1eb] = 0;
                              pbVar5[0x1ec] = 0;
                              pbVar5[0x1ed] = 0;
                              pbVar5[0x1ee] = 0;
                              pbVar5[0x1ef] = 0;
                              *(byte **)(pbVar5 + 0x1f0) = pbVar16;
                              pbVar5[0x1f8] = 0x14;
                              pbVar5[0x1f9] = 0;
                              pbVar5[0x1fa] = 0;
                              pbVar5[0x1fb] = 0;
                              pbVar5[0x1fc] = 0;
                              pbVar5[0x1fd] = 0;
                              pbVar5[0x1fe] = 0;
                              pbVar5[0x1ff] = 0;
                              pbVar5[0x200] = 0;
                              pbVar5[0x201] = 0;
                              pbVar5[0x202] = 0;
                              pbVar5[0x203] = 0;
                              pbVar5[0x204] = 1;
                              pbVar5[0x205] = 0;
                              pbVar5[0x206] = 0;
                              pbVar5[0x207] = 0;
                              pbVar5[0x208] = 4;
                              pbVar5[0x210] = 0xb;
                              pbVar5[0x211] = 0;
                              pbVar5[0x212] = 0;
                              pbVar5[0x213] = 0;
                              pbVar5[0x218] = 0x14;
                              pbVar5[0x219] = 0;
                              pbVar5[0x21a] = 0;
                              pbVar5[0x21b] = 0;
                              pbVar5[0x21c] = 0;
                              pbVar5[0x21d] = 0;
                              pbVar5[0x21e] = 0;
                              pbVar5[0x21f] = 0;
                              *(byte **)(pbVar5 + 0x220) = pbVar17;
                              pbVar5[0x228] = 0x14;
                              pbVar5[0x229] = 0;
                              pbVar5[0x22a] = 0;
                              pbVar5[0x22b] = 0;
                              pbVar5[0x22c] = 0;
                              pbVar5[0x22d] = 0;
                              pbVar5[0x22e] = 0;
                              pbVar5[0x22f] = 0;
                              pbVar5[0x230] = 0;
                              pbVar5[0x231] = 0;
                              pbVar5[0x232] = 0;
                              pbVar5[0x233] = 0;
                              pbVar5[0x234] = 1;
                              pbVar5[0x235] = 0;
                              pbVar5[0x236] = 0;
                              pbVar5[0x237] = 0;
                              pbVar5[0x238] = 4;
                              pbVar5[0x240] = 0xc;
                              pbVar5[0x241] = 0;
                              pbVar5[0x242] = 0;
                              pbVar5[0x243] = 0;
                              pbVar5[0x248] = 0x17;
                              pbVar5[0x249] = 0;
                              pbVar5[0x24a] = 0;
                              pbVar5[0x24b] = 0;
                              pbVar5[0x24c] = 0;
                              pbVar5[0x24d] = 0;
                              pbVar5[0x24e] = 0;
                              pbVar5[0x24f] = 0;
                              *(byte **)(pbVar5 + 0x250) = pbVar18;
                              pbVar5[600] = 0x17;
                              pbVar5[0x259] = 0;
                              pbVar5[0x25a] = 0;
                              pbVar5[0x25b] = 0;
                              pbVar5[0x25c] = 0;
                              pbVar5[0x25d] = 0;
                              pbVar5[0x25e] = 0;
                              pbVar5[0x25f] = 0;
                              pbVar5[0x260] = 0;
                              pbVar5[0x261] = 0;
                              pbVar5[0x262] = 0;
                              pbVar5[0x263] = 0;
                              pbVar5[0x264] = 1;
                              pbVar5[0x265] = 0;
                              pbVar5[0x266] = 0;
                              pbVar5[0x267] = 0;
                              pbVar5[0x268] = 4;
                              uVar19 = 0xd;
                              goto LAB_140b6fd81;
                            }
                            pdb_142dc7e2a(1,0x17);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

