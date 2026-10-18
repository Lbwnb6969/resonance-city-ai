// VA 0x140ae5730, PDB extent 3058 bytes
// country_core::resources::toolbar::Toolbar::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/toolbar.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::toolbar::Toolbar::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/toolbar.rs
   Extent: 3058 */

undefined8 *
pdb_140ae5730(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined8 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined8 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  byte *pbStack_b0;
  byte *pbStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  cVar1 = DAT_143cb2d0c;
  pdb_14007ee60();
  if (cVar1 == '\0') {
    pbVar2 = pub_1406abab0(0x78,8);
    if (pbVar2 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x78);
    }
    pbVar2[0] = 1;
    pbVar2[1] = 1;
    pbVar2[0x18] = 1;
    pbVar2[0x19] = 2;
    pbVar2[0x30] = 6;
    pbVar2[0x38] = 7;
    pbVar2[0x39] = 0;
    pbVar2[0x3a] = 0;
    pbVar2[0x3b] = 0;
    pbVar2[0x3c] = 0;
    pbVar2[0x3d] = 0;
    pbVar2[0x3e] = 0;
    pbVar2[0x3f] = 0;
    pbVar2[0x48] = 1;
    pbVar2[0x49] = 0;
    pbVar2[0x60] = 0xf;
    cVar1 = DAT_143cb2d0c;
    uVar15 = 5;
    pdb_14007ee60();
  }
  else {
    pbVar2 = pub_1406abab0(0x48,8);
    if (pbVar2 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x48);
    }
    pbVar2[0] = 1;
    pbVar2[1] = 1;
    pbVar2[0x18] = 1;
    pbVar2[0x19] = 2;
    pbVar2[0x30] = 1;
    cVar1 = DAT_143cb2d0c;
    pbVar2[0x31] = 0;
    uVar15 = 3;
    pdb_14007ee60();
  }
  if (cVar1 == '\0') {
    pbVar3 = pub_1406abab0(0x60,8);
    if (pbVar3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x60);
    }
    *pbVar3 = 2;
    pbVar3[0x18] = 3;
    pbVar3[0x20] = 1;
    pbVar3[0x21] = 0;
    pbVar3[0x22] = 0;
    pbVar3[0x23] = 0;
    pbVar3[0x24] = 0;
    pbVar3[0x25] = 0;
    pbVar3[0x26] = 0;
    pbVar3[0x27] = 0;
    pbVar3[0x30] = 3;
    pbVar3[0x38] = 2;
    pbVar3[0x39] = 0;
    pbVar3[0x3a] = 0;
    pbVar3[0x3b] = 0;
    pbVar3[0x3c] = 0;
    pbVar3[0x3d] = 0;
    pbVar3[0x3e] = 0;
    pbVar3[0x3f] = 0;
    pbVar3[0x48] = 3;
    pbVar3[0x50] = 3;
    cVar1 = DAT_143cb2d0c;
    pbVar3[0x51] = 0;
    pbVar3[0x52] = 0;
    pbVar3[0x53] = 0;
    pbVar3[0x54] = 0;
    pbVar3[0x55] = 0;
    pbVar3[0x56] = 0;
    pbVar3[0x57] = 0;
    uVar14 = 4;
    pdb_14007ee60();
  }
  else {
    pbVar3 = pub_1406abab0(0x18,8);
    if (pbVar3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x18);
    }
    *pbVar3 = 2;
    cVar1 = DAT_143cb2d0c;
    uVar14 = 1;
    pdb_14007ee60();
  }
  if (cVar1 == '\0') {
    pbVar4 = pub_1406abab0(0x90,8);
    if (pbVar4 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x90);
    }
    *pbVar4 = 6;
    pbVar4[8] = 0;
    pbVar4[9] = 0;
    pbVar4[10] = 0;
    pbVar4[0xb] = 0;
    pbVar4[0xc] = 0;
    pbVar4[0xd] = 0;
    pbVar4[0xe] = 0;
    pbVar4[0xf] = 0;
    pbVar4[0x18] = 6;
    pbVar4[0x20] = 1;
    pbVar4[0x21] = 0;
    pbVar4[0x22] = 0;
    pbVar4[0x23] = 0;
    pbVar4[0x24] = 0;
    pbVar4[0x25] = 0;
    pbVar4[0x26] = 0;
    pbVar4[0x27] = 0;
    pbVar4[0x30] = 6;
    pbVar4[0x38] = 2;
    pbVar4[0x39] = 0;
    pbVar4[0x3a] = 0;
    pbVar4[0x3b] = 0;
    pbVar4[0x3c] = 0;
    pbVar4[0x3d] = 0;
    pbVar4[0x3e] = 0;
    pbVar4[0x3f] = 0;
    pbVar4[0x48] = 6;
    pbVar4[0x50] = 4;
    pbVar4[0x51] = 0;
    pbVar4[0x52] = 0;
    pbVar4[0x53] = 0;
    pbVar4[0x54] = 0;
    pbVar4[0x55] = 0;
    pbVar4[0x56] = 0;
    pbVar4[0x57] = 0;
    pbVar4[0x60] = 6;
    pbVar4[0x68] = 5;
    pbVar4[0x69] = 0;
    pbVar4[0x6a] = 0;
    pbVar4[0x6b] = 0;
    pbVar4[0x6c] = 0;
    pbVar4[0x6d] = 0;
    pbVar4[0x6e] = 0;
    pbVar4[0x6f] = 0;
    pbVar4[0x78] = 6;
    pbVar4[0x80] = 3;
    pbVar4[0x81] = 0;
    pbVar4[0x82] = 0;
    pbVar4[0x83] = 0;
    pbVar4[0x84] = 0;
    pbVar4[0x85] = 0;
    pbVar4[0x86] = 0;
    pbVar4[0x87] = 0;
    uVar5 = 6;
  }
  else {
    pbVar4 = pub_1406abab0(0x30,8);
    if (pbVar4 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x30);
    }
    *pbVar4 = 6;
    pbVar4[8] = 0;
    pbVar4[9] = 0;
    pbVar4[10] = 0;
    pbVar4[0xb] = 0;
    pbVar4[0xc] = 0;
    pbVar4[0xd] = 0;
    pbVar4[0xe] = 0;
    pbVar4[0xf] = 0;
    pbVar4[0x18] = 6;
    pbVar4[0x20] = 4;
    pbVar4[0x21] = 0;
    pbVar4[0x22] = 0;
    pbVar4[0x23] = 0;
    pbVar4[0x24] = 0;
    pbVar4[0x25] = 0;
    pbVar4[0x26] = 0;
    pbVar4[0x27] = 0;
    uVar5 = 2;
  }
  pdb_14007ee60();
  pbVar6 = pub_1406abab0(0x30,8);
  if (pbVar6 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x30);
  }
  *pbVar6 = 7;
  pbVar6[0x18] = 8;
  cVar1 = DAT_143cb2d0c;
  pdb_14007ee60();
  if (cVar1 == '\0') {
    pbVar7 = pub_1406abab0(0x90,8);
    if (pbVar7 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x90);
    }
    pbVar7[0] = 4;
    pbVar7[1] = 1;
    pbVar7[0x18] = 4;
    pbVar7[0x19] = 2;
    pbVar7[0x30] = 4;
    pbVar7[0x31] = 3;
    pbVar7[0x48] = 4;
    pbVar7[0x49] = 5;
    pbVar7[0x60] = 4;
    pbVar7[0x61] = 6;
    pbVar7[0x78] = 4;
    pbVar7[0x79] = 4;
    uVar8 = 6;
  }
  else {
    pbVar7 = pub_1406abab0(0x60,8);
    if (pbVar7 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x60);
    }
    pbVar7[0] = 4;
    pbVar7[1] = 1;
    pbVar7[0x18] = 4;
    pbVar7[0x19] = 2;
    pbVar7[0x30] = 4;
    pbVar7[0x31] = 5;
    pbVar7[0x48] = 4;
    pbVar7[0x49] = 3;
    uVar8 = 4;
  }
  if (DAT_143cb2d0c == '\0') {
    pdb_14007ee60();
    pbStack_98 = pub_1406abab0(0x18,8);
    if (pbStack_98 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x18);
    }
    *pbStack_98 = 0xc;
    uStack_90 = 1;
  }
  else {
    pbStack_98 = (byte *)0x8;
    uStack_90 = 0;
  }
  pdb_14007ee60();
  pbVar9 = pub_1406abab0(0x18,8);
  if (pbVar9 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x18);
  }
  *pbVar9 = 5;
  pdb_14007ee60();
  pbStack_b0 = (byte *)0x8;
  pbVar10 = pub_1406abab0(0x18,8);
  if (pbVar10 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x18);
  }
  *pbVar10 = 0;
  pbVar10[8] = 0;
  pbVar10[9] = 0;
  pbVar10[10] = 0;
  pbVar10[0xb] = 0;
  if (DAT_143cb2d0c == '\0') {
    pdb_14007ee60();
    pbStack_b0 = pub_1406abab0(0x18,8);
    if (pbStack_b0 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x18);
    }
    *pbStack_b0 = 0xb;
    uStack_88 = 1;
  }
  else {
    uStack_88 = 0;
  }
  pdb_14007ee60();
  pbVar11 = pub_1406abab0(0x150,8);
  if (pbVar11 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x150);
  }
  pbVar11[0] = 0xe;
  pbVar11[1] = 1;
  pbVar11[0x18] = 0xe;
  pbVar11[0x19] = 2;
  pbVar11[0x30] = 0xe;
  pbVar11[0x31] = 3;
  pbVar11[0x48] = 0xd;
  pbVar11[0x60] = 0xe;
  pbVar11[0x61] = 4;
  pbVar11[0x78] = 0xe;
  pbVar11[0x79] = 5;
  pbVar11[0x90] = 0xe;
  pbVar11[0x91] = 6;
  pbVar11[0xa8] = 0xe;
  pbVar11[0xa9] = 9;
  pbVar11[0xc0] = 0xe;
  pbVar11[0xc1] = 8;
  pbVar11[0xd8] = 0xe;
  pbVar11[0xd9] = 7;
  pbVar11[0xf0] = 0xe;
  pbVar11[0xf1] = 0;
  pbVar11[0x108] = 0xe;
  pbVar11[0x109] = 10;
  pbVar11[0x120] = 0xe;
  pbVar11[0x121] = 0xb;
  pbVar11[0x138] = 0xe;
  pbVar11[0x139] = 0xc;
  pdb_14007ee60();
  pbVar12 = pub_1406abab0(0x18,8);
  if (pbVar12 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x18);
  }
  *pbVar12 = 0x10;
  pdb_14007ee60();
  pbVar13 = pub_1406abab0(0x160,8);
  if (pbVar13 != (byte *)0x0) {
    *(undefined8 *)pbVar13 = uVar15;
    *(byte **)(pbVar13 + 8) = pbVar2;
    *(undefined8 *)(pbVar13 + 0x10) = uVar15;
    pbVar13[0x18] = 0;
    pbVar13[0x19] = 0;
    pbVar13[0x1a] = 0;
    pbVar13[0x1b] = 0;
    pbVar13[0x1c] = 0;
    pbVar13[0x1d] = 0;
    pbVar13[0x1e] = 0;
    pbVar13[0x1f] = 0;
    *(undefined8 *)(pbVar13 + 0x20) = uVar14;
    *(byte **)(pbVar13 + 0x28) = pbVar3;
    *(undefined8 *)(pbVar13 + 0x30) = uVar14;
    pbVar13[0x38] = 0;
    pbVar13[0x39] = 0;
    pbVar13[0x3a] = 0;
    pbVar13[0x3b] = 0;
    pbVar13[0x3c] = 0;
    pbVar13[0x3d] = 0;
    pbVar13[0x3e] = 0;
    pbVar13[0x3f] = 0;
    *(undefined8 *)(pbVar13 + 0x40) = uVar5;
    *(byte **)(pbVar13 + 0x48) = pbVar4;
    *(undefined8 *)(pbVar13 + 0x50) = uVar5;
    pbVar13[0x58] = 0;
    pbVar13[0x59] = 0;
    pbVar13[0x5a] = 0;
    pbVar13[0x5b] = 0;
    pbVar13[0x5c] = 0;
    pbVar13[0x5d] = 0;
    pbVar13[0x5e] = 0;
    pbVar13[0x5f] = 0;
    pbVar13[0x60] = 2;
    pbVar13[0x61] = 0;
    pbVar13[0x62] = 0;
    pbVar13[99] = 0;
    pbVar13[100] = 0;
    pbVar13[0x65] = 0;
    pbVar13[0x66] = 0;
    pbVar13[0x67] = 0;
    *(byte **)(pbVar13 + 0x68) = pbVar6;
    pbVar13[0x70] = 2;
    pbVar13[0x71] = 0;
    pbVar13[0x72] = 0;
    pbVar13[0x73] = 0;
    pbVar13[0x74] = 0;
    pbVar13[0x75] = 0;
    pbVar13[0x76] = 0;
    pbVar13[0x77] = 0;
    pbVar13[0x78] = 0;
    pbVar13[0x79] = 0;
    pbVar13[0x7a] = 0;
    pbVar13[0x7b] = 0;
    pbVar13[0x7c] = 0;
    pbVar13[0x7d] = 0;
    pbVar13[0x7e] = 0;
    pbVar13[0x7f] = 0;
    *(undefined8 *)(pbVar13 + 0x80) = uVar8;
    *(byte **)(pbVar13 + 0x88) = pbVar7;
    *(undefined8 *)(pbVar13 + 0x90) = uVar8;
    pbVar13[0x98] = 0;
    pbVar13[0x99] = 0;
    pbVar13[0x9a] = 0;
    pbVar13[0x9b] = 0;
    pbVar13[0x9c] = 0;
    pbVar13[0x9d] = 0;
    pbVar13[0x9e] = 0;
    pbVar13[0x9f] = 0;
    *(undefined8 *)(pbVar13 + 0xa0) = uStack_90;
    *(byte **)(pbVar13 + 0xa8) = pbStack_98;
    *(undefined8 *)(pbVar13 + 0xb0) = uStack_90;
    pbVar13[0xb8] = 0;
    pbVar13[0xb9] = 0;
    pbVar13[0xba] = 0;
    pbVar13[0xbb] = 0;
    pbVar13[0xbc] = 0;
    pbVar13[0xbd] = 0;
    pbVar13[0xbe] = 0;
    pbVar13[0xbf] = 0;
    pbVar13[0xc0] = 1;
    pbVar13[0xc1] = 0;
    pbVar13[0xc2] = 0;
    pbVar13[0xc3] = 0;
    pbVar13[0xc4] = 0;
    pbVar13[0xc5] = 0;
    pbVar13[0xc6] = 0;
    pbVar13[199] = 0;
    *(byte **)(pbVar13 + 200) = pbVar9;
    pbVar13[0xd0] = 1;
    pbVar13[0xd1] = 0;
    pbVar13[0xd2] = 0;
    pbVar13[0xd3] = 0;
    pbVar13[0xd4] = 0;
    pbVar13[0xd5] = 0;
    pbVar13[0xd6] = 0;
    pbVar13[0xd7] = 0;
    pbVar13[0xd8] = 0;
    pbVar13[0xd9] = 0;
    pbVar13[0xda] = 0;
    pbVar13[0xdb] = 0;
    pbVar13[0xdc] = 0;
    pbVar13[0xdd] = 0;
    pbVar13[0xde] = 0;
    pbVar13[0xdf] = 0;
    pbVar13[0xe0] = 1;
    pbVar13[0xe1] = 0;
    pbVar13[0xe2] = 0;
    pbVar13[0xe3] = 0;
    pbVar13[0xe4] = 0;
    pbVar13[0xe5] = 0;
    pbVar13[0xe6] = 0;
    pbVar13[0xe7] = 0;
    *(byte **)(pbVar13 + 0xe8) = pbVar10;
    pbVar13[0xf0] = 1;
    pbVar13[0xf1] = 0;
    pbVar13[0xf2] = 0;
    pbVar13[0xf3] = 0;
    pbVar13[0xf4] = 0;
    pbVar13[0xf5] = 0;
    pbVar13[0xf6] = 0;
    pbVar13[0xf7] = 0;
    pbVar13[0xf8] = 0;
    pbVar13[0xf9] = 0;
    pbVar13[0xfa] = 0;
    pbVar13[0xfb] = 0;
    pbVar13[0xfc] = 0;
    pbVar13[0xfd] = 0;
    pbVar13[0xfe] = 0;
    pbVar13[0xff] = 0;
    *(undefined8 *)(pbVar13 + 0x100) = uStack_88;
    *(byte **)(pbVar13 + 0x108) = pbStack_b0;
    *(undefined8 *)(pbVar13 + 0x110) = uStack_88;
    pbVar13[0x118] = 0;
    pbVar13[0x119] = 0;
    pbVar13[0x11a] = 0;
    pbVar13[0x11b] = 0;
    pbVar13[0x11c] = 0;
    pbVar13[0x11d] = 0;
    pbVar13[0x11e] = 0;
    pbVar13[0x11f] = 0;
    pbVar13[0x120] = 0xe;
    pbVar13[0x121] = 0;
    pbVar13[0x122] = 0;
    pbVar13[0x123] = 0;
    pbVar13[0x124] = 0;
    pbVar13[0x125] = 0;
    pbVar13[0x126] = 0;
    pbVar13[0x127] = 0;
    *(byte **)(pbVar13 + 0x128) = pbVar11;
    pbVar13[0x130] = 0xe;
    pbVar13[0x131] = 0;
    pbVar13[0x132] = 0;
    pbVar13[0x133] = 0;
    pbVar13[0x134] = 0;
    pbVar13[0x135] = 0;
    pbVar13[0x136] = 0;
    pbVar13[0x137] = 0;
    pbVar13[0x138] = 0;
    pbVar13[0x139] = 0;
    pbVar13[0x13a] = 0;
    pbVar13[0x13b] = 0;
    pbVar13[0x13c] = 0;
    pbVar13[0x13d] = 0;
    pbVar13[0x13e] = 0;
    pbVar13[0x13f] = 0;
    pbVar13[0x140] = 1;
    pbVar13[0x141] = 0;
    pbVar13[0x142] = 0;
    pbVar13[0x143] = 0;
    pbVar13[0x144] = 0;
    pbVar13[0x145] = 0;
    pbVar13[0x146] = 0;
    pbVar13[0x147] = 0;
    *(byte **)(pbVar13 + 0x148) = pbVar12;
    pbVar13[0x150] = 1;
    pbVar13[0x151] = 0;
    pbVar13[0x152] = 0;
    pbVar13[0x153] = 0;
    pbVar13[0x154] = 0;
    pbVar13[0x155] = 0;
    pbVar13[0x156] = 0;
    pbVar13[0x157] = 0;
    pbVar13[0x158] = 0;
    pbVar13[0x159] = 0;
    pbVar13[0x15a] = 0;
    pbVar13[0x15b] = 0;
    pbVar13[0x15c] = 0;
    pbVar13[0x15d] = 0;
    pbVar13[0x15e] = 0;
    pbVar13[0x15f] = 0;
    *param_1 = 0xb;
    param_1[1] = pbVar13;
    param_1[2] = 0xb;
    *(undefined1 *)(param_1 + 3) = 0;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x160,param_3,param_4,pbVar12);
}

