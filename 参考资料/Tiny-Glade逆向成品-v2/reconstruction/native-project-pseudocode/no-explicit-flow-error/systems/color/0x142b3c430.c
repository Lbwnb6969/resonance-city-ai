// VA 0x142b3c430, PDB extent 2594 bytes
// system_color::color_palettes::wood_colors
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/color_palettes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_color::color_palettes::wood_colors
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/color_palettes.rs
   Extent: 2594 */

void pdb_142b3c430(undefined8 *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
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
  
  pdb_14007ee60();
  pbVar6 = pub_1406abab0(0x1b8,8);
  if (pbVar6 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x1b8);
  }
  pdb_14007ee60();
  pbVar7 = pub_1406abab0(0x18,1);
  uVar4 = _UNK_14366cc1d;
  uVar3 = _UNK_14366cc19;
  uVar2 = _UNK_14366cc15;
  if (pbVar7 == (byte *)0x0) {
    pdb_142dc7e2a(1,0x18);
  }
  else {
    *(undefined4 *)pbVar7 = _DAT_14366cc11;
    *(undefined4 *)(pbVar7 + 4) = uVar2;
    *(undefined4 *)(pbVar7 + 8) = uVar3;
    *(undefined4 *)(pbVar7 + 0xc) = uVar4;
    pbVar7[0x10] = 0x77;
    pbVar7[0x11] = 0x73;
    pbVar7[0x12] = 0x2f;
    pbVar7[0x13] = 0x77;
    pbVar7[0x14] = 0x68;
    pbVar7[0x15] = 0x69;
    pbVar7[0x16] = 0x74;
    pbVar7[0x17] = 0x65;
    pdb_14007ee60();
    pbVar8 = pub_1406abab0(0x17,1);
    uVar4 = _UNK_14366cc35;
    uVar3 = _UNK_14366cc31;
    uVar2 = _UNK_14366cc2d;
    if (pbVar8 == (byte *)0x0) {
      pdb_142dc7e2a(1,0x17);
    }
    else {
      *(undefined4 *)pbVar8 = _DAT_14366cc29;
      *(undefined4 *)(pbVar8 + 4) = uVar2;
      *(undefined4 *)(pbVar8 + 8) = uVar3;
      *(undefined4 *)(pbVar8 + 0xc) = uVar4;
      pbVar8[0xf] = 0x6f;
      pbVar8[0x10] = 0x77;
      pbVar8[0x11] = 0x73;
      pbVar8[0x12] = 0x2f;
      pbVar8[0x13] = 0x77;
      pbVar8[0x14] = 0x6f;
      pbVar8[0x15] = 0x6f;
      pbVar8[0x16] = 100;
      pdb_14007ee60();
      pbVar9 = pub_1406abab0(0x1c,1);
      uVar5 = _UNK_14366cc54;
      if (pbVar9 == (byte *)0x0) {
        pdb_142dc7e2a(1,0x1c);
      }
      else {
        *(ulonglong *)(pbVar9 + 0xc) = CONCAT44(_UNK_14366cc50,_DAT_14366cc4c);
        *(undefined8 *)(pbVar9 + 0x14) = uVar5;
        uVar4 = _DAT_14366cc4c;
        uVar3 = _UNK_14366cc48;
        uVar2 = _UNK_14366cc44;
        *(undefined4 *)pbVar9 = _DAT_14366cc40;
        *(undefined4 *)(pbVar9 + 4) = uVar2;
        *(undefined4 *)(pbVar9 + 8) = uVar3;
        *(undefined4 *)(pbVar9 + 0xc) = uVar4;
        pdb_14007ee60();
        pbVar10 = pub_1406abab0(0x14,1);
        uVar4 = _UNK_14366cb6a;
        uVar3 = _UNK_14366cb66;
        uVar2 = _UNK_14366cb62;
        if (pbVar10 == (byte *)0x0) {
          pdb_142dc7e2a(1,0x14);
        }
        else {
          *(undefined4 *)pbVar10 = _DAT_14366cb5e;
          *(undefined4 *)(pbVar10 + 4) = uVar2;
          *(undefined4 *)(pbVar10 + 8) = uVar3;
          *(undefined4 *)(pbVar10 + 0xc) = uVar4;
          pbVar10[0x10] = 100;
          pbVar10[0x11] = 0x61;
          pbVar10[0x12] = 0x72;
          pbVar10[0x13] = 0x6b;
          pdb_14007ee60();
          pbVar11 = pub_1406abab0(0x19,1);
          uVar5 = _UNK_14366cc6d;
          if (pbVar11 == (byte *)0x0) {
            pdb_142dc7e2a(1,0x19);
          }
          else {
            *(ulonglong *)(pbVar11 + 9) =
                 CONCAT17(UNK_14366cc6c,CONCAT43(_UNK_14366cc68,_DAT_14366cc65));
            *(undefined8 *)(pbVar11 + 0x11) = uVar5;
            uVar4 = _UNK_14366cc68;
            uVar3 = _UNK_14366cc64;
            uVar2 = _UNK_14366cc60;
            *(undefined4 *)pbVar11 = _DAT_14366cc5c;
            *(undefined4 *)(pbVar11 + 4) = uVar2;
            *(undefined4 *)(pbVar11 + 8) = uVar3;
            *(undefined4 *)(pbVar11 + 0xc) = uVar4;
            pdb_14007ee60();
            pbVar12 = pub_1406abab0(0x13,1);
            uVar4 = _UNK_14366ca99;
            uVar3 = _UNK_14366ca95;
            uVar2 = _UNK_14366ca91;
            if (pbVar12 == (byte *)0x0) {
              pdb_142dc7e2a(1,0x13);
            }
            else {
              *(undefined4 *)pbVar12 = _DAT_14366ca8d;
              *(undefined4 *)(pbVar12 + 4) = uVar2;
              *(undefined4 *)(pbVar12 + 8) = uVar3;
              *(undefined4 *)(pbVar12 + 0xc) = uVar4;
              pbVar12[0xf] = 0x5f;
              pbVar12[0x10] = 0x72;
              pbVar12[0x11] = 0x65;
              pbVar12[0x12] = 100;
              pdb_14007ee60();
              pbVar13 = pub_1406abab0(0xf,1);
              if (pbVar13 == (byte *)0x0) {
                pdb_142dc7e2a(1,0xf);
              }
              else {
                pbVar13[7] = 99;
                pbVar13[8] = 0x6f;
                pbVar13[9] = 0x6e;
                pbVar13[10] = 0x2f;
                pbVar13[0xb] = 0x70;
                pbVar13[0xc] = 0x69;
                pbVar13[0xd] = 0x6e;
                pbVar13[0xe] = 0x6b;
                pbVar13[0] = 99;
                pbVar13[1] = 0x6f;
                pbVar13[2] = 0x6c;
                pbVar13[3] = 0x6f;
                pbVar13[4] = 0x72;
                pbVar13[5] = 0x5f;
                pbVar13[6] = 0x69;
                pbVar13[7] = 99;
                pdb_14007ee60();
                pbVar14 = pub_1406abab0(0x19,1);
                uVar5 = _UNK_14366cc86;
                if (pbVar14 == (byte *)0x0) {
                  pdb_142dc7e2a(1,0x19);
                }
                else {
                  *(ulonglong *)(pbVar14 + 9) =
                       CONCAT17(UNK_14366cc85,CONCAT43(_UNK_14366cc81,_DAT_14366cc7e));
                  *(undefined8 *)(pbVar14 + 0x11) = uVar5;
                  uVar4 = _UNK_14366cc81;
                  uVar3 = _UNK_14366cc7d;
                  uVar2 = _UNK_14366cc79;
                  *(undefined4 *)pbVar14 = _DAT_14366cc75;
                  *(undefined4 *)(pbVar14 + 4) = uVar2;
                  *(undefined4 *)(pbVar14 + 8) = uVar3;
                  *(undefined4 *)(pbVar14 + 0xc) = uVar4;
                  pdb_14007ee60();
                  pbVar15 = pub_1406abab0(0x14,1);
                  uVar4 = _UNK_14366cada;
                  uVar3 = _UNK_14366cad6;
                  uVar2 = _UNK_14366cad2;
                  if (pbVar15 == (byte *)0x0) {
                    pdb_142dc7e2a(1,0x14);
                  }
                  else {
                    *(undefined4 *)pbVar15 = _DAT_14366cace;
                    *(undefined4 *)(pbVar15 + 4) = uVar2;
                    *(undefined4 *)(pbVar15 + 8) = uVar3;
                    *(undefined4 *)(pbVar15 + 0xc) = uVar4;
                    pbVar15[0x10] = 0x62;
                    pbVar15[0x11] = 0x6c;
                    pbVar15[0x12] = 0x75;
                    pbVar15[0x13] = 0x65;
                    pdb_14007ee60();
                    pbVar16 = pub_1406abab0(0x1b,1);
                    uVar5 = _UNK_14366cb28;
                    if (pbVar16 == (byte *)0x0) {
                      pdb_142dc7e2a(1,0x1b);
                    }
                    else {
                      *(ulonglong *)(pbVar16 + 0xb) =
                           CONCAT35(_UNK_14366cb25,CONCAT41(_UNK_14366cb21,DAT_14366cb20));
                      *(undefined8 *)(pbVar16 + 0x13) = uVar5;
                      uVar4 = _UNK_14366cb21;
                      uVar3 = _UNK_14366cb1d;
                      uVar2 = _UNK_14366cb19;
                      *(undefined4 *)pbVar16 = _DAT_14366cb15;
                      *(undefined4 *)(pbVar16 + 4) = uVar2;
                      *(undefined4 *)(pbVar16 + 8) = uVar3;
                      *(undefined4 *)(pbVar16 + 0xc) = uVar4;
                      pdb_14007ee60();
                      pbVar17 = pub_1406abab0(0x15,1);
                      uVar5 = _UNK_14366cb38;
                      if (pbVar17 != (byte *)0x0) {
                        *(undefined8 *)pbVar17 = _DAT_14366cb30;
                        *(undefined8 *)(pbVar17 + 8) = uVar5;
                        pbVar17[0xd] = 0x6f;
                        pbVar17[0xe] = 0x66;
                        pbVar17[0xf] = 0x5f;
                        pbVar17[0x10] = 0x67;
                        pbVar17[0x11] = 0x72;
                        pbVar17[0x12] = 0x65;
                        pbVar17[0x13] = 0x65;
                        pbVar17[0x14] = 0x6e;
                        pbVar6[0] = 0x18;
                        pbVar6[1] = 0;
                        pbVar6[2] = 0;
                        pbVar6[3] = 0;
                        pbVar6[4] = 0;
                        pbVar6[5] = 0;
                        pbVar6[6] = 0;
                        pbVar6[7] = 0;
                        *(byte **)(pbVar6 + 8) = pbVar7;
                        pbVar6[0x10] = 0x18;
                        pbVar6[0x11] = 0;
                        pbVar6[0x12] = 0;
                        pbVar6[0x13] = 0;
                        pbVar6[0x14] = 0;
                        pbVar6[0x15] = 0;
                        pbVar6[0x16] = 0;
                        pbVar6[0x17] = 0;
                        pbVar6[0x18] = 3;
                        pbVar6[0x1c] = 4;
                        pbVar6[0x1d] = 0;
                        pbVar6[0x1e] = 0;
                        pbVar6[0x1f] = 0;
                        pbVar6[0x24] = 0;
                        pbVar6[0x25] = 0;
                        pbVar6[0x26] = 0;
                        pbVar6[0x27] = 0;
                        pbVar6[0x28] = 0x17;
                        pbVar6[0x29] = 0;
                        pbVar6[0x2a] = 0;
                        pbVar6[0x2b] = 0;
                        pbVar6[0x2c] = 0;
                        pbVar6[0x2d] = 0;
                        pbVar6[0x2e] = 0;
                        pbVar6[0x2f] = 0;
                        *(byte **)(pbVar6 + 0x30) = pbVar8;
                        pbVar6[0x38] = 0x17;
                        pbVar6[0x39] = 0;
                        pbVar6[0x3a] = 0;
                        pbVar6[0x3b] = 0;
                        pbVar6[0x3c] = 0;
                        pbVar6[0x3d] = 0;
                        pbVar6[0x3e] = 0;
                        pbVar6[0x3f] = 0;
                        pbVar6[0x40] = 3;
                        pbVar6[0x44] = 0;
                        pbVar6[0x45] = 0;
                        pbVar6[0x46] = 0;
                        pbVar6[0x47] = 0;
                        pbVar6[0x4c] = 0;
                        pbVar6[0x4d] = 0;
                        pbVar6[0x4e] = 0;
                        pbVar6[0x4f] = 0;
                        pbVar6[0x50] = 0x1c;
                        pbVar6[0x51] = 0;
                        pbVar6[0x52] = 0;
                        pbVar6[0x53] = 0;
                        pbVar6[0x54] = 0;
                        pbVar6[0x55] = 0;
                        pbVar6[0x56] = 0;
                        pbVar6[0x57] = 0;
                        *(byte **)(pbVar6 + 0x58) = pbVar9;
                        pbVar6[0x60] = 0x1c;
                        pbVar6[0x61] = 0;
                        pbVar6[0x62] = 0;
                        pbVar6[99] = 0;
                        pbVar6[100] = 0;
                        pbVar6[0x65] = 0;
                        pbVar6[0x66] = 0;
                        pbVar6[0x67] = 0;
                        pbVar6[0x68] = 3;
                        pbVar6[0x6c] = 1;
                        pbVar6[0x6d] = 0;
                        pbVar6[0x6e] = 0;
                        pbVar6[0x6f] = 0;
                        pbVar6[0x74] = 0;
                        pbVar6[0x75] = 0;
                        pbVar6[0x76] = 0;
                        pbVar6[0x77] = 0;
                        pbVar6[0x78] = 0x14;
                        pbVar6[0x79] = 0;
                        pbVar6[0x7a] = 0;
                        pbVar6[0x7b] = 0;
                        pbVar6[0x7c] = 0;
                        pbVar6[0x7d] = 0;
                        pbVar6[0x7e] = 0;
                        pbVar6[0x7f] = 0;
                        *(byte **)(pbVar6 + 0x80) = pbVar10;
                        pbVar6[0x88] = 0x14;
                        pbVar6[0x89] = 0;
                        pbVar6[0x8a] = 0;
                        pbVar6[0x8b] = 0;
                        pbVar6[0x8c] = 0;
                        pbVar6[0x8d] = 0;
                        pbVar6[0x8e] = 0;
                        pbVar6[0x8f] = 0;
                        pbVar6[0x90] = 3;
                        pbVar6[0x94] = 7;
                        pbVar6[0x95] = 0;
                        pbVar6[0x96] = 0;
                        pbVar6[0x97] = 0;
                        pbVar6[0x9c] = 0;
                        pbVar6[0x9d] = 0;
                        pbVar6[0x9e] = 0;
                        pbVar6[0x9f] = 0;
                        pbVar6[0xa0] = 0x19;
                        pbVar6[0xa1] = 0;
                        pbVar6[0xa2] = 0;
                        pbVar6[0xa3] = 0;
                        pbVar6[0xa4] = 0;
                        pbVar6[0xa5] = 0;
                        pbVar6[0xa6] = 0;
                        pbVar6[0xa7] = 0;
                        *(byte **)(pbVar6 + 0xa8) = pbVar11;
                        pbVar6[0xb0] = 0x19;
                        pbVar6[0xb1] = 0;
                        pbVar6[0xb2] = 0;
                        pbVar6[0xb3] = 0;
                        pbVar6[0xb4] = 0;
                        pbVar6[0xb5] = 0;
                        pbVar6[0xb6] = 0;
                        pbVar6[0xb7] = 0;
                        pbVar6[0xb8] = 3;
                        pbVar6[0xbc] = 10;
                        pbVar6[0xbd] = 0;
                        pbVar6[0xbe] = 0;
                        pbVar6[0xbf] = 0;
                        pbVar6[0xc4] = 0;
                        pbVar6[0xc5] = 0;
                        pbVar6[0xc6] = 0;
                        pbVar6[199] = 0;
                        pbVar6[200] = 0x13;
                        pbVar6[0xc9] = 0;
                        pbVar6[0xca] = 0;
                        pbVar6[0xcb] = 0;
                        pbVar6[0xcc] = 0;
                        pbVar6[0xcd] = 0;
                        pbVar6[0xce] = 0;
                        pbVar6[0xcf] = 0;
                        *(byte **)(pbVar6 + 0xd0) = pbVar12;
                        pbVar6[0xd8] = 0x13;
                        pbVar6[0xd9] = 0;
                        pbVar6[0xda] = 0;
                        pbVar6[0xdb] = 0;
                        pbVar6[0xdc] = 0;
                        pbVar6[0xdd] = 0;
                        pbVar6[0xde] = 0;
                        pbVar6[0xdf] = 0;
                        pbVar6[0xe0] = 3;
                        pbVar6[0xe4] = 3;
                        pbVar6[0xe5] = 0;
                        pbVar6[0xe6] = 0;
                        pbVar6[0xe7] = 0;
                        pbVar6[0xec] = 0;
                        pbVar6[0xed] = 0;
                        pbVar6[0xee] = 0;
                        pbVar6[0xef] = 0;
                        pbVar6[0xf0] = 0xf;
                        pbVar6[0xf1] = 0;
                        pbVar6[0xf2] = 0;
                        pbVar6[0xf3] = 0;
                        pbVar6[0xf4] = 0;
                        pbVar6[0xf5] = 0;
                        pbVar6[0xf6] = 0;
                        pbVar6[0xf7] = 0;
                        *(byte **)(pbVar6 + 0xf8) = pbVar13;
                        pbVar6[0x100] = 0xf;
                        pbVar6[0x101] = 0;
                        pbVar6[0x102] = 0;
                        pbVar6[0x103] = 0;
                        pbVar6[0x104] = 0;
                        pbVar6[0x105] = 0;
                        pbVar6[0x106] = 0;
                        pbVar6[0x107] = 0;
                        pbVar6[0x108] = 3;
                        pbVar6[0x10c] = 9;
                        pbVar6[0x10d] = 0;
                        pbVar6[0x10e] = 0;
                        pbVar6[0x10f] = 0;
                        pbVar6[0x114] = 0;
                        pbVar6[0x115] = 0;
                        pbVar6[0x116] = 0;
                        pbVar6[0x117] = 0;
                        pbVar6[0x118] = 0x19;
                        pbVar6[0x119] = 0;
                        pbVar6[0x11a] = 0;
                        pbVar6[0x11b] = 0;
                        pbVar6[0x11c] = 0;
                        pbVar6[0x11d] = 0;
                        pbVar6[0x11e] = 0;
                        pbVar6[0x11f] = 0;
                        *(byte **)(pbVar6 + 0x120) = pbVar14;
                        pbVar6[0x128] = 0x19;
                        pbVar6[0x129] = 0;
                        pbVar6[0x12a] = 0;
                        pbVar6[299] = 0;
                        pbVar6[300] = 0;
                        pbVar6[0x12d] = 0;
                        pbVar6[0x12e] = 0;
                        pbVar6[0x12f] = 0;
                        pbVar6[0x130] = 3;
                        pbVar6[0x134] = 8;
                        pbVar6[0x135] = 0;
                        pbVar6[0x136] = 0;
                        pbVar6[0x137] = 0;
                        pbVar6[0x13c] = 0;
                        pbVar6[0x13d] = 0;
                        pbVar6[0x13e] = 0;
                        pbVar6[0x13f] = 0;
                        pbVar6[0x140] = 0x14;
                        pbVar6[0x141] = 0;
                        pbVar6[0x142] = 0;
                        pbVar6[0x143] = 0;
                        pbVar6[0x144] = 0;
                        pbVar6[0x145] = 0;
                        pbVar6[0x146] = 0;
                        pbVar6[0x147] = 0;
                        *(byte **)(pbVar6 + 0x148) = pbVar15;
                        pbVar6[0x150] = 0x14;
                        pbVar6[0x151] = 0;
                        pbVar6[0x152] = 0;
                        pbVar6[0x153] = 0;
                        pbVar6[0x154] = 0;
                        pbVar6[0x155] = 0;
                        pbVar6[0x156] = 0;
                        pbVar6[0x157] = 0;
                        pbVar6[0x158] = 3;
                        pbVar6[0x15c] = 2;
                        pbVar6[0x15d] = 0;
                        pbVar6[0x15e] = 0;
                        pbVar6[0x15f] = 0;
                        pbVar6[0x164] = 0;
                        pbVar6[0x165] = 0;
                        pbVar6[0x166] = 0;
                        pbVar6[0x167] = 0;
                        pbVar6[0x168] = 0x1b;
                        pbVar6[0x169] = 0;
                        pbVar6[0x16a] = 0;
                        pbVar6[0x16b] = 0;
                        pbVar6[0x16c] = 0;
                        pbVar6[0x16d] = 0;
                        pbVar6[0x16e] = 0;
                        pbVar6[0x16f] = 0;
                        *(byte **)(pbVar6 + 0x170) = pbVar16;
                        pbVar6[0x178] = 0x1b;
                        pbVar6[0x179] = 0;
                        pbVar6[0x17a] = 0;
                        pbVar6[0x17b] = 0;
                        pbVar6[0x17c] = 0;
                        pbVar6[0x17d] = 0;
                        pbVar6[0x17e] = 0;
                        pbVar6[0x17f] = 0;
                        pbVar6[0x180] = 3;
                        pbVar6[0x184] = 6;
                        pbVar6[0x185] = 0;
                        pbVar6[0x186] = 0;
                        pbVar6[0x187] = 0;
                        pbVar6[0x18c] = 0;
                        pbVar6[0x18d] = 0;
                        pbVar6[0x18e] = 0;
                        pbVar6[399] = 0;
                        pbVar6[400] = 0x15;
                        pbVar6[0x191] = 0;
                        pbVar6[0x192] = 0;
                        pbVar6[0x193] = 0;
                        pbVar6[0x194] = 0;
                        pbVar6[0x195] = 0;
                        pbVar6[0x196] = 0;
                        pbVar6[0x197] = 0;
                        *(byte **)(pbVar6 + 0x198) = pbVar17;
                        pbVar6[0x1a0] = 0x15;
                        pbVar6[0x1a1] = 0;
                        pbVar6[0x1a2] = 0;
                        pbVar6[0x1a3] = 0;
                        pbVar6[0x1a4] = 0;
                        pbVar6[0x1a5] = 0;
                        pbVar6[0x1a6] = 0;
                        pbVar6[0x1a7] = 0;
                        pbVar6[0x1a8] = 3;
                        pbVar6[0x1ac] = 5;
                        pbVar6[0x1ad] = 0;
                        pbVar6[0x1ae] = 0;
                        pbVar6[0x1af] = 0;
                        pbVar6[0x1b4] = 0;
                        pbVar6[0x1b5] = 0;
                        pbVar6[0x1b6] = 0;
                        pbVar6[0x1b7] = 0;
                        *param_1 = 0xb;
                        param_1[1] = pbVar6;
                        param_1[2] = 0xb;
                        return;
                      }
                      pdb_142dc7e2a(1,0x15);
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

