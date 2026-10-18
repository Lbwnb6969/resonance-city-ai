// VA 0x142b3b880, PDB extent 2978 bytes
// system_color::color_palettes::wall_colors
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/color_palettes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_color::color_palettes::wall_colors
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/color_palettes.rs
   Extent: 2978 */

void pdb_142b3b880(undefined8 *param_1)

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
  
  pdb_14007ee60();
  pbVar5 = pub_1406abab0(0x208,8);
  if (pbVar5 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x208);
  }
  pdb_14007ee60();
  pbVar6 = pub_1406abab0(0x17,1);
  uVar4 = _UNK_14366cbab;
  uVar3 = _UNK_14366cba7;
  uVar2 = _UNK_14366cba3;
  if (pbVar6 == (byte *)0x0) {
    pdb_142dc7e2a(1,0x17);
  }
  else {
    *(undefined4 *)pbVar6 = _DAT_14366cb9f;
    *(undefined4 *)(pbVar6 + 4) = uVar2;
    *(undefined4 *)(pbVar6 + 8) = uVar3;
    *(undefined4 *)(pbVar6 + 0xc) = uVar4;
    pbVar6[0xf] = 0x6b;
    pbVar6[0x10] = 0x73;
    pbVar6[0x11] = 0x5f;
    pbVar6[0x12] = 0x62;
    pbVar6[0x13] = 0x65;
    pbVar6[0x14] = 0x69;
    pbVar6[0x15] = 0x67;
    pbVar6[0x16] = 0x65;
    pdb_14007ee60();
    pbVar7 = pub_1406abab0(0x18,1);
    uVar4 = _UNK_14366cbc2;
    uVar3 = _UNK_14366cbbe;
    uVar2 = _UNK_14366cbba;
    if (pbVar7 == (byte *)0x0) {
      pdb_142dc7e2a(1,0x18);
    }
    else {
      *(undefined4 *)pbVar7 = _DAT_14366cbb6;
      *(undefined4 *)(pbVar7 + 4) = uVar2;
      *(undefined4 *)(pbVar7 + 8) = uVar3;
      *(undefined4 *)(pbVar7 + 0xc) = uVar4;
      pbVar7[0x10] = 0x73;
      pbVar7[0x11] = 0x5f;
      pbVar7[0x12] = 0x79;
      pbVar7[0x13] = 0x65;
      pbVar7[0x14] = 0x6c;
      pbVar7[0x15] = 0x6c;
      pbVar7[0x16] = 0x6f;
      pbVar7[0x17] = 0x77;
      pdb_14007ee60();
      pbVar8 = pub_1406abab0(0x17,1);
      uVar4 = _UNK_14366cbda;
      uVar3 = _UNK_14366cbd6;
      uVar2 = _UNK_14366cbd2;
      if (pbVar8 == (byte *)0x0) {
        pdb_142dc7e2a(1,0x17);
      }
      else {
        *(undefined4 *)pbVar8 = _DAT_14366cbce;
        *(undefined4 *)(pbVar8 + 4) = uVar2;
        *(undefined4 *)(pbVar8 + 8) = uVar3;
        *(undefined4 *)(pbVar8 + 0xc) = uVar4;
        pbVar8[0xf] = 0x6b;
        pbVar8[0x10] = 0x73;
        pbVar8[0x11] = 0x5f;
        pbVar8[0x12] = 0x6c;
        pbVar8[0x13] = 0x69;
        pbVar8[0x14] = 0x67;
        pbVar8[0x15] = 0x68;
        pbVar8[0x16] = 0x74;
        pdb_14007ee60();
        pbVar9 = pub_1406abab0(0x16,1);
        uVar4 = _UNK_14366cbf1;
        uVar3 = _UNK_14366cbed;
        uVar2 = _UNK_14366cbe9;
        if (pbVar9 == (byte *)0x0) {
          pdb_142dc7e2a(1,0x16);
        }
        else {
          *(undefined4 *)pbVar9 = _DAT_14366cbe5;
          *(undefined4 *)(pbVar9 + 4) = uVar2;
          *(undefined4 *)(pbVar9 + 8) = uVar3;
          *(undefined4 *)(pbVar9 + 0xc) = uVar4;
          pbVar9[0xe] = 99;
          pbVar9[0xf] = 0x6b;
          pbVar9[0x10] = 0x73;
          pbVar9[0x11] = 0x5f;
          pbVar9[0x12] = 0x67;
          pbVar9[0x13] = 0x72;
          pbVar9[0x14] = 0x65;
          pbVar9[0x15] = 0x79;
          pdb_14007ee60();
          pbVar10 = pub_1406abab0(0x16,1);
          uVar4 = _UNK_14366cc07;
          uVar3 = _UNK_14366cc03;
          uVar2 = _UNK_14366cbff;
          if (pbVar10 == (byte *)0x0) {
            pdb_142dc7e2a(1,0x16);
          }
          else {
            *(undefined4 *)pbVar10 = _DAT_14366cbfb;
            *(undefined4 *)(pbVar10 + 4) = uVar2;
            *(undefined4 *)(pbVar10 + 8) = uVar3;
            *(undefined4 *)(pbVar10 + 0xc) = uVar4;
            pbVar10[0xe] = 99;
            pbVar10[0xf] = 0x6b;
            pbVar10[0x10] = 0x73;
            pbVar10[0x11] = 0x5f;
            pbVar10[0x12] = 100;
            pbVar10[0x13] = 0x61;
            pbVar10[0x14] = 0x72;
            pbVar10[0x15] = 0x6b;
            pdb_14007ee60();
            pbVar11 = pub_1406abab0(0xe,1);
            if (pbVar11 == (byte *)0x0) {
              pdb_142dc7e2a(1,0xe);
            }
            else {
              pbVar11[6] = 0x72;
              pbVar11[7] = 0x5f;
              pbVar11[8] = 99;
              pbVar11[9] = 0x6f;
              pbVar11[10] = 0x6c;
              pbVar11[0xb] = 0x6f;
              pbVar11[0xc] = 0x72;
              pbVar11[0xd] = 0x73;
              pbVar11[0] = 0x70;
              pbVar11[1] = 0x6c;
              pbVar11[2] = 0x61;
              pbVar11[3] = 0x73;
              pbVar11[4] = 0x74;
              pbVar11[5] = 0x65;
              pbVar11[6] = 0x72;
              pbVar11[7] = 0x5f;
              pdb_14007ee60();
              pbVar12 = pub_1406abab0(0xe,1);
              if (pbVar12 == (byte *)0x0) {
                pdb_142dc7e2a(1,0xe);
              }
              else {
                pbVar12[6] = 0x72;
                pbVar12[7] = 0x5f;
                pbVar12[8] = 99;
                pbVar12[9] = 0x6f;
                pbVar12[10] = 0x6c;
                pbVar12[0xb] = 0x6f;
                pbVar12[0xc] = 0x72;
                pbVar12[0xd] = 0x73;
                pbVar12[0] = 0x70;
                pbVar12[1] = 0x6c;
                pbVar12[2] = 0x61;
                pbVar12[3] = 0x73;
                pbVar12[4] = 0x74;
                pbVar12[5] = 0x65;
                pbVar12[6] = 0x72;
                pbVar12[7] = 0x5f;
                pdb_14007ee60();
                pbVar13 = pub_1406abab0(0xe,1);
                if (pbVar13 == (byte *)0x0) {
                  pdb_142dc7e2a(1,0xe);
                }
                else {
                  pbVar13[6] = 0x72;
                  pbVar13[7] = 0x5f;
                  pbVar13[8] = 99;
                  pbVar13[9] = 0x6f;
                  pbVar13[10] = 0x6c;
                  pbVar13[0xb] = 0x6f;
                  pbVar13[0xc] = 0x72;
                  pbVar13[0xd] = 0x73;
                  pbVar13[0] = 0x70;
                  pbVar13[1] = 0x6c;
                  pbVar13[2] = 0x61;
                  pbVar13[3] = 0x73;
                  pbVar13[4] = 0x74;
                  pbVar13[5] = 0x65;
                  pbVar13[6] = 0x72;
                  pbVar13[7] = 0x5f;
                  pdb_14007ee60();
                  pbVar14 = pub_1406abab0(0xe,1);
                  if (pbVar14 == (byte *)0x0) {
                    pdb_142dc7e2a(1,0xe);
                  }
                  else {
                    pbVar14[6] = 0x72;
                    pbVar14[7] = 0x5f;
                    pbVar14[8] = 99;
                    pbVar14[9] = 0x6f;
                    pbVar14[10] = 0x6c;
                    pbVar14[0xb] = 0x6f;
                    pbVar14[0xc] = 0x72;
                    pbVar14[0xd] = 0x73;
                    pbVar14[0] = 0x70;
                    pbVar14[1] = 0x6c;
                    pbVar14[2] = 0x61;
                    pbVar14[3] = 0x73;
                    pbVar14[4] = 0x74;
                    pbVar14[5] = 0x65;
                    pbVar14[6] = 0x72;
                    pbVar14[7] = 0x5f;
                    pdb_14007ee60();
                    pbVar15 = pub_1406abab0(0xe,1);
                    if (pbVar15 == (byte *)0x0) {
                      pdb_142dc7e2a(1,0xe);
                    }
                    else {
                      pbVar15[6] = 0x72;
                      pbVar15[7] = 0x5f;
                      pbVar15[8] = 99;
                      pbVar15[9] = 0x6f;
                      pbVar15[10] = 0x6c;
                      pbVar15[0xb] = 0x6f;
                      pbVar15[0xc] = 0x72;
                      pbVar15[0xd] = 0x73;
                      pbVar15[0] = 0x70;
                      pbVar15[1] = 0x6c;
                      pbVar15[2] = 0x61;
                      pbVar15[3] = 0x73;
                      pbVar15[4] = 0x74;
                      pbVar15[5] = 0x65;
                      pbVar15[6] = 0x72;
                      pbVar15[7] = 0x5f;
                      pdb_14007ee60();
                      pbVar16 = pub_1406abab0(0xe,1);
                      if (pbVar16 == (byte *)0x0) {
                        pdb_142dc7e2a(1,0xe);
                      }
                      else {
                        pbVar16[6] = 0x72;
                        pbVar16[7] = 0x5f;
                        pbVar16[8] = 99;
                        pbVar16[9] = 0x6f;
                        pbVar16[10] = 0x6c;
                        pbVar16[0xb] = 0x6f;
                        pbVar16[0xc] = 0x72;
                        pbVar16[0xd] = 0x73;
                        pbVar16[0] = 0x70;
                        pbVar16[1] = 0x6c;
                        pbVar16[2] = 0x61;
                        pbVar16[3] = 0x73;
                        pbVar16[4] = 0x74;
                        pbVar16[5] = 0x65;
                        pbVar16[6] = 0x72;
                        pbVar16[7] = 0x5f;
                        pdb_14007ee60();
                        pbVar17 = pub_1406abab0(0xe,1);
                        if (pbVar17 == (byte *)0x0) {
                          pdb_142dc7e2a(1,0xe);
                        }
                        else {
                          pbVar17[6] = 0x72;
                          pbVar17[7] = 0x5f;
                          pbVar17[8] = 99;
                          pbVar17[9] = 0x6f;
                          pbVar17[10] = 0x6c;
                          pbVar17[0xb] = 0x6f;
                          pbVar17[0xc] = 0x72;
                          pbVar17[0xd] = 0x73;
                          pbVar17[0] = 0x70;
                          pbVar17[1] = 0x6c;
                          pbVar17[2] = 0x61;
                          pbVar17[3] = 0x73;
                          pbVar17[4] = 0x74;
                          pbVar17[5] = 0x65;
                          pbVar17[6] = 0x72;
                          pbVar17[7] = 0x5f;
                          pdb_14007ee60();
                          pbVar18 = pub_1406abab0(0xe,1);
                          if (pbVar18 != (byte *)0x0) {
                            pbVar18[6] = 0x72;
                            pbVar18[7] = 0x5f;
                            pbVar18[8] = 99;
                            pbVar18[9] = 0x6f;
                            pbVar18[10] = 0x6c;
                            pbVar18[0xb] = 0x6f;
                            pbVar18[0xc] = 0x72;
                            pbVar18[0xd] = 0x73;
                            pbVar18[0] = 0x70;
                            pbVar18[1] = 0x6c;
                            pbVar18[2] = 0x61;
                            pbVar18[3] = 0x73;
                            pbVar18[4] = 0x74;
                            pbVar18[5] = 0x65;
                            pbVar18[6] = 0x72;
                            pbVar18[7] = 0x5f;
                            pbVar5[0] = 0x17;
                            pbVar5[1] = 0;
                            pbVar5[2] = 0;
                            pbVar5[3] = 0;
                            pbVar5[4] = 0;
                            pbVar5[5] = 0;
                            pbVar5[6] = 0;
                            pbVar5[7] = 0;
                            *(byte **)(pbVar5 + 8) = pbVar6;
                            pbVar5[0x10] = 0x17;
                            pbVar5[0x11] = 0;
                            pbVar5[0x12] = 0;
                            pbVar5[0x13] = 0;
                            pbVar5[0x14] = 0;
                            pbVar5[0x15] = 0;
                            pbVar5[0x16] = 0;
                            pbVar5[0x17] = 0;
                            pbVar5[0x18] = 3;
                            pbVar5[0x1c] = 0;
                            pbVar5[0x1d] = 0;
                            pbVar5[0x1e] = 0;
                            pbVar5[0x1f] = 0;
                            pbVar5[0x24] = 0;
                            pbVar5[0x25] = 0;
                            pbVar5[0x26] = 0;
                            pbVar5[0x27] = 0;
                            pbVar5[0x28] = 0x18;
                            pbVar5[0x29] = 0;
                            pbVar5[0x2a] = 0;
                            pbVar5[0x2b] = 0;
                            pbVar5[0x2c] = 0;
                            pbVar5[0x2d] = 0;
                            pbVar5[0x2e] = 0;
                            pbVar5[0x2f] = 0;
                            *(byte **)(pbVar5 + 0x30) = pbVar7;
                            pbVar5[0x38] = 0x18;
                            pbVar5[0x39] = 0;
                            pbVar5[0x3a] = 0;
                            pbVar5[0x3b] = 0;
                            pbVar5[0x3c] = 0;
                            pbVar5[0x3d] = 0;
                            pbVar5[0x3e] = 0;
                            pbVar5[0x3f] = 0;
                            pbVar5[0x40] = 3;
                            pbVar5[0x44] = 1;
                            pbVar5[0x45] = 0;
                            pbVar5[0x46] = 0;
                            pbVar5[0x47] = 0;
                            pbVar5[0x4c] = 0;
                            pbVar5[0x4d] = 0;
                            pbVar5[0x4e] = 0;
                            pbVar5[0x4f] = 0;
                            pbVar5[0x50] = 0x17;
                            pbVar5[0x51] = 0;
                            pbVar5[0x52] = 0;
                            pbVar5[0x53] = 0;
                            pbVar5[0x54] = 0;
                            pbVar5[0x55] = 0;
                            pbVar5[0x56] = 0;
                            pbVar5[0x57] = 0;
                            *(byte **)(pbVar5 + 0x58) = pbVar8;
                            pbVar5[0x60] = 0x17;
                            pbVar5[0x61] = 0;
                            pbVar5[0x62] = 0;
                            pbVar5[99] = 0;
                            pbVar5[100] = 0;
                            pbVar5[0x65] = 0;
                            pbVar5[0x66] = 0;
                            pbVar5[0x67] = 0;
                            pbVar5[0x68] = 3;
                            pbVar5[0x6c] = 3;
                            pbVar5[0x6d] = 0;
                            pbVar5[0x6e] = 0;
                            pbVar5[0x6f] = 0;
                            pbVar5[0x74] = 0;
                            pbVar5[0x75] = 0;
                            pbVar5[0x76] = 0;
                            pbVar5[0x77] = 0;
                            pbVar5[0x78] = 0x16;
                            pbVar5[0x79] = 0;
                            pbVar5[0x7a] = 0;
                            pbVar5[0x7b] = 0;
                            pbVar5[0x7c] = 0;
                            pbVar5[0x7d] = 0;
                            pbVar5[0x7e] = 0;
                            pbVar5[0x7f] = 0;
                            *(byte **)(pbVar5 + 0x80) = pbVar9;
                            pbVar5[0x88] = 0x16;
                            pbVar5[0x89] = 0;
                            pbVar5[0x8a] = 0;
                            pbVar5[0x8b] = 0;
                            pbVar5[0x8c] = 0;
                            pbVar5[0x8d] = 0;
                            pbVar5[0x8e] = 0;
                            pbVar5[0x8f] = 0;
                            pbVar5[0x90] = 3;
                            pbVar5[0x94] = 0xb;
                            pbVar5[0x95] = 0;
                            pbVar5[0x96] = 0;
                            pbVar5[0x97] = 0;
                            pbVar5[0x9c] = 0;
                            pbVar5[0x9d] = 0;
                            pbVar5[0x9e] = 0;
                            pbVar5[0x9f] = 0;
                            pbVar5[0xa0] = 0x16;
                            pbVar5[0xa1] = 0;
                            pbVar5[0xa2] = 0;
                            pbVar5[0xa3] = 0;
                            pbVar5[0xa4] = 0;
                            pbVar5[0xa5] = 0;
                            pbVar5[0xa6] = 0;
                            pbVar5[0xa7] = 0;
                            *(byte **)(pbVar5 + 0xa8) = pbVar10;
                            pbVar5[0xb0] = 0x16;
                            pbVar5[0xb1] = 0;
                            pbVar5[0xb2] = 0;
                            pbVar5[0xb3] = 0;
                            pbVar5[0xb4] = 0;
                            pbVar5[0xb5] = 0;
                            pbVar5[0xb6] = 0;
                            pbVar5[0xb7] = 0;
                            pbVar5[0xb8] = 3;
                            pbVar5[0xbc] = 2;
                            pbVar5[0xbd] = 0;
                            pbVar5[0xbe] = 0;
                            pbVar5[0xbf] = 0;
                            pbVar5[0xc4] = 0;
                            pbVar5[0xc5] = 0;
                            pbVar5[0xc6] = 0;
                            pbVar5[199] = 0;
                            pbVar5[200] = 0xe;
                            pbVar5[0xc9] = 0;
                            pbVar5[0xca] = 0;
                            pbVar5[0xcb] = 0;
                            pbVar5[0xcc] = 0;
                            pbVar5[0xcd] = 0;
                            pbVar5[0xce] = 0;
                            pbVar5[0xcf] = 0;
                            *(byte **)(pbVar5 + 0xd0) = pbVar11;
                            pbVar5[0xd8] = 0xe;
                            pbVar5[0xd9] = 0;
                            pbVar5[0xda] = 0;
                            pbVar5[0xdb] = 0;
                            pbVar5[0xdc] = 0;
                            pbVar5[0xdd] = 0;
                            pbVar5[0xde] = 0;
                            pbVar5[0xdf] = 0;
                            pbVar5[0xe0] = 3;
                            pbVar5[0xe4] = 4;
                            pbVar5[0xe5] = 0;
                            pbVar5[0xe6] = 0;
                            pbVar5[0xe7] = 0;
                            pbVar5[0xec] = 0;
                            pbVar5[0xed] = 0;
                            pbVar5[0xee] = 0;
                            pbVar5[0xef] = 0;
                            pbVar5[0xf0] = 0xe;
                            pbVar5[0xf1] = 0;
                            pbVar5[0xf2] = 0;
                            pbVar5[0xf3] = 0;
                            pbVar5[0xf4] = 0;
                            pbVar5[0xf5] = 0;
                            pbVar5[0xf6] = 0;
                            pbVar5[0xf7] = 0;
                            *(byte **)(pbVar5 + 0xf8) = pbVar12;
                            pbVar5[0x100] = 0xe;
                            pbVar5[0x101] = 0;
                            pbVar5[0x102] = 0;
                            pbVar5[0x103] = 0;
                            pbVar5[0x104] = 0;
                            pbVar5[0x105] = 0;
                            pbVar5[0x106] = 0;
                            pbVar5[0x107] = 0;
                            pbVar5[0x108] = 3;
                            pbVar5[0x10c] = 0xc;
                            pbVar5[0x10d] = 0;
                            pbVar5[0x10e] = 0;
                            pbVar5[0x10f] = 0;
                            pbVar5[0x114] = 7;
                            pbVar5[0x115] = 0;
                            pbVar5[0x116] = 0;
                            pbVar5[0x117] = 0;
                            pbVar5[0x118] = 0xe;
                            pbVar5[0x119] = 0;
                            pbVar5[0x11a] = 0;
                            pbVar5[0x11b] = 0;
                            pbVar5[0x11c] = 0;
                            pbVar5[0x11d] = 0;
                            pbVar5[0x11e] = 0;
                            pbVar5[0x11f] = 0;
                            *(byte **)(pbVar5 + 0x120) = pbVar13;
                            pbVar5[0x128] = 0xe;
                            pbVar5[0x129] = 0;
                            pbVar5[0x12a] = 0;
                            pbVar5[299] = 0;
                            pbVar5[300] = 0;
                            pbVar5[0x12d] = 0;
                            pbVar5[0x12e] = 0;
                            pbVar5[0x12f] = 0;
                            pbVar5[0x130] = 3;
                            pbVar5[0x134] = 5;
                            pbVar5[0x135] = 0;
                            pbVar5[0x136] = 0;
                            pbVar5[0x137] = 0;
                            pbVar5[0x13c] = 1;
                            pbVar5[0x13d] = 0;
                            pbVar5[0x13e] = 0;
                            pbVar5[0x13f] = 0;
                            pbVar5[0x140] = 0xe;
                            pbVar5[0x141] = 0;
                            pbVar5[0x142] = 0;
                            pbVar5[0x143] = 0;
                            pbVar5[0x144] = 0;
                            pbVar5[0x145] = 0;
                            pbVar5[0x146] = 0;
                            pbVar5[0x147] = 0;
                            *(byte **)(pbVar5 + 0x148) = pbVar14;
                            pbVar5[0x150] = 0xe;
                            pbVar5[0x151] = 0;
                            pbVar5[0x152] = 0;
                            pbVar5[0x153] = 0;
                            pbVar5[0x154] = 0;
                            pbVar5[0x155] = 0;
                            pbVar5[0x156] = 0;
                            pbVar5[0x157] = 0;
                            pbVar5[0x158] = 3;
                            pbVar5[0x15c] = 10;
                            pbVar5[0x15d] = 0;
                            pbVar5[0x15e] = 0;
                            pbVar5[0x15f] = 0;
                            pbVar5[0x164] = 6;
                            pbVar5[0x165] = 0;
                            pbVar5[0x166] = 0;
                            pbVar5[0x167] = 0;
                            pbVar5[0x168] = 0xe;
                            pbVar5[0x169] = 0;
                            pbVar5[0x16a] = 0;
                            pbVar5[0x16b] = 0;
                            pbVar5[0x16c] = 0;
                            pbVar5[0x16d] = 0;
                            pbVar5[0x16e] = 0;
                            pbVar5[0x16f] = 0;
                            *(byte **)(pbVar5 + 0x170) = pbVar15;
                            pbVar5[0x178] = 0xe;
                            pbVar5[0x179] = 0;
                            pbVar5[0x17a] = 0;
                            pbVar5[0x17b] = 0;
                            pbVar5[0x17c] = 0;
                            pbVar5[0x17d] = 0;
                            pbVar5[0x17e] = 0;
                            pbVar5[0x17f] = 0;
                            pbVar5[0x180] = 3;
                            pbVar5[0x184] = 8;
                            pbVar5[0x185] = 0;
                            pbVar5[0x186] = 0;
                            pbVar5[0x187] = 0;
                            pbVar5[0x18c] = 4;
                            pbVar5[0x18d] = 0;
                            pbVar5[0x18e] = 0;
                            pbVar5[399] = 0;
                            pbVar5[400] = 0xe;
                            pbVar5[0x191] = 0;
                            pbVar5[0x192] = 0;
                            pbVar5[0x193] = 0;
                            pbVar5[0x194] = 0;
                            pbVar5[0x195] = 0;
                            pbVar5[0x196] = 0;
                            pbVar5[0x197] = 0;
                            *(byte **)(pbVar5 + 0x198) = pbVar16;
                            pbVar5[0x1a0] = 0xe;
                            pbVar5[0x1a1] = 0;
                            pbVar5[0x1a2] = 0;
                            pbVar5[0x1a3] = 0;
                            pbVar5[0x1a4] = 0;
                            pbVar5[0x1a5] = 0;
                            pbVar5[0x1a6] = 0;
                            pbVar5[0x1a7] = 0;
                            pbVar5[0x1a8] = 3;
                            pbVar5[0x1ac] = 9;
                            pbVar5[0x1ad] = 0;
                            pbVar5[0x1ae] = 0;
                            pbVar5[0x1af] = 0;
                            pbVar5[0x1b4] = 5;
                            pbVar5[0x1b5] = 0;
                            pbVar5[0x1b6] = 0;
                            pbVar5[0x1b7] = 0;
                            pbVar5[0x1b8] = 0xe;
                            pbVar5[0x1b9] = 0;
                            pbVar5[0x1ba] = 0;
                            pbVar5[0x1bb] = 0;
                            pbVar5[0x1bc] = 0;
                            pbVar5[0x1bd] = 0;
                            pbVar5[0x1be] = 0;
                            pbVar5[0x1bf] = 0;
                            *(byte **)(pbVar5 + 0x1c0) = pbVar17;
                            pbVar5[0x1c8] = 0xe;
                            pbVar5[0x1c9] = 0;
                            pbVar5[0x1ca] = 0;
                            pbVar5[0x1cb] = 0;
                            pbVar5[0x1cc] = 0;
                            pbVar5[0x1cd] = 0;
                            pbVar5[0x1ce] = 0;
                            pbVar5[0x1cf] = 0;
                            pbVar5[0x1d0] = 3;
                            pbVar5[0x1d4] = 6;
                            pbVar5[0x1d5] = 0;
                            pbVar5[0x1d6] = 0;
                            pbVar5[0x1d7] = 0;
                            pbVar5[0x1dc] = 2;
                            pbVar5[0x1dd] = 0;
                            pbVar5[0x1de] = 0;
                            pbVar5[0x1df] = 0;
                            pbVar5[0x1e0] = 0xe;
                            pbVar5[0x1e1] = 0;
                            pbVar5[0x1e2] = 0;
                            pbVar5[0x1e3] = 0;
                            pbVar5[0x1e4] = 0;
                            pbVar5[0x1e5] = 0;
                            pbVar5[0x1e6] = 0;
                            pbVar5[0x1e7] = 0;
                            *(byte **)(pbVar5 + 0x1e8) = pbVar18;
                            pbVar5[0x1f0] = 0xe;
                            pbVar5[0x1f1] = 0;
                            pbVar5[0x1f2] = 0;
                            pbVar5[499] = 0;
                            pbVar5[500] = 0;
                            pbVar5[0x1f5] = 0;
                            pbVar5[0x1f6] = 0;
                            pbVar5[0x1f7] = 0;
                            pbVar5[0x1f8] = 3;
                            pbVar5[0x1fc] = 7;
                            pbVar5[0x1fd] = 0;
                            pbVar5[0x1fe] = 0;
                            pbVar5[0x1ff] = 0;
                            pbVar5[0x204] = 3;
                            pbVar5[0x205] = 0;
                            pbVar5[0x206] = 0;
                            pbVar5[0x207] = 0;
                            *param_1 = 0xd;
                            param_1[1] = pbVar5;
                            param_1[2] = 0xd;
                            return;
                          }
                          pdb_142dc7e2a(1,0xe);
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

