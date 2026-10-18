// VA 0x1402a19a0, PDB extent 12570 bytes
// tiny_glade::gui::gui_controls::key_bindings_sub_menu
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_controls.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::gui_controls::key_bindings_sub_menu
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_controls.rs
   Extent: 12570 */

void pdb_1402a19a0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_2f8 [8];
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  ulonglong *puStack_2c8;
  code *pcStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  byte *pbStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  byte *pbStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  byte *pbStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  longlong lStack_210;
  undefined8 **ppuStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  byte *pbStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  byte *pbStack_1b0;
  undefined8 uStack_1a8;
  byte *pbStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  byte *pbStack_168;
  ulonglong uStack_160;
  byte *pbStack_158;
  ulonglong uStack_150;
  undefined8 uStack_148;
  byte *pbStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  byte *pbStack_108;
  undefined8 *puStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  byte *pbStack_60;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar6 = 0x10;
  uStack_2e0 = param_2;
  uStack_200 = param_1;
  puStack_100 = (undefined8 *)pdb_140dc6290(&UNK_142e65304);
  uStack_c0 = &puStack_100;
  uStack_b8 = pdb_1402ed400;
  pcStack_f8 = (code *)uVar6;
  pdb_140f60760(auStack_2f8,&UNK_142e65314,&uStack_c0);
  uVar6 = 0x12;
  uStack_148 = pdb_140dc6290(&UNK_142e65339);
  puStack_100 = &uStack_148;
  pcStack_f8 = pdb_1402ed400;
  pbStack_140 = (byte *)uVar6;
  pdb_140f60760(&uStack_c0,&UNK_142e6534b,&puStack_100);
  ppuStack_208 = uStack_c0;
  pcStack_1f8 = uStack_b8;
  pdb_14007ee60();
  pbStack_168 = pub_1406abab0(0x180,8);
  if (pbStack_168 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x180);
  }
  pdb_14007ee60();
  pbStack_1e8 = pub_1406abab0(4,1);
  if (pbStack_1e8 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(1,4);
  }
  pbStack_1e8[0] = 4;
  pbStack_1e8[1] = 2;
  pbStack_1e8[2] = 5;
  pbStack_1e8[3] = 3;
  uStack_1d8 = uStack_2f0;
  uStack_1d0 = uStack_2e8;
  uStack_1f0 = 4;
  uStack_1e0 = 4;
  uStack_1c8 = 0x8000000000000000;
  uVar7 = 0x10;
  uVar6 = pdb_140dc6290(&UNK_142e65304);
  pdb_14007ee60();
  pbStack_1a0 = pub_1406abab0(1,1);
  if (pbStack_1a0 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(1,1);
  }
  *pbStack_1a0 = 9;
  uStack_1a8 = 1;
  uStack_198 = 1;
  uStack_180 = 0x8000000000000000;
  uVar8 = 0x16;
  puStack_190 = (undefined *)uVar6;
  uStack_188 = uVar7;
  uVar6 = pdb_140dc6290(&UNK_142e6535e);
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(2,1);
  if (pbVar3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(1,2);
  }
  pbVar3[0] = 1;
  pbVar3[1] = 0;
  uStack_148 = 2;
  uStack_138 = 2;
  uStack_120 = 0x8000000000000000;
  pbStack_140 = pbVar3;
  puStack_130 = (undefined *)uVar6;
  uStack_128 = uVar8;
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(2,1);
  if (pbVar3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(1,2);
  }
  pbVar3[0] = 6;
  pbVar3[1] = 7;
  pcStack_e8 = pcStack_1f8;
  uStack_e0 = uStack_b0;
  puStack_100 = (undefined8 *)0x2;
  uStack_f0 = 2;
  uStack_d8 = 0x8000000000000000;
  uVar7 = 0x12;
  pcStack_f8 = (code *)pbVar3;
  uVar6 = pdb_140dc6290(&UNK_142e65339);
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(1,1);
  if (pbVar3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(1,1);
  }
  *pbVar3 = 8;
  uStack_c0 = (undefined8 **)0x1;
  uStack_b0 = 1;
  uStack_98 = 0x8000000000000000;
  uVar8 = 0x15;
  uStack_b8 = (code *)pbVar3;
  uStack_a8 = (undefined *)uVar6;
  uStack_a0 = uVar7;
  uVar6 = pdb_140dc6290(&UNK_142e65374);
  pdb_14007ee60();
  pbStack_60 = pub_1406abab0(2,1);
  if (pbStack_60 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(1,2);
  }
  pbStack_60[0] = 10;
  pbStack_60[1] = 0xb;
  uVar7 = 0x15;
  uStack_160 = pdb_140dc6290(&UNK_142e65389);
  puStack_2c8 = &uStack_160;
  pcStack_2c0 = pdb_1402ed400;
  pbStack_158 = (byte *)uVar7;
  pdb_140f60760(&uStack_258,&UNK_142e6539e,&puStack_2c8);
  *(undefined8 *)(pbStack_168 + 0x178) = uStack_248;
  *(undefined8 *)(pbStack_168 + 0x168) = uStack_258;
  *(byte **)(pbStack_168 + 0x170) = pbStack_250;
  pbStack_168[0x140] = 2;
  pbStack_168[0x141] = 0;
  pbStack_168[0x142] = 0;
  pbStack_168[0x143] = 0;
  pbStack_168[0x144] = 0;
  pbStack_168[0x145] = 0;
  pbStack_168[0x146] = 0;
  pbStack_168[0x147] = 0;
  *(byte **)(pbStack_168 + 0x148) = pbStack_60;
  pbStack_168[0x150] = 2;
  pbStack_168[0x151] = 0;
  pbStack_168[0x152] = 0;
  pbStack_168[0x153] = 0;
  pbStack_168[0x154] = 0;
  pbStack_168[0x155] = 0;
  pbStack_168[0x156] = 0;
  pbStack_168[0x157] = 0;
  *(undefined8 *)(pbStack_168 + 0x30) = uStack_1c0;
  *(undefined8 *)(pbStack_168 + 0x38) = uStack_1b8;
  *(undefined8 *)(pbStack_168 + 0x20) = uStack_1d0;
  *(undefined8 *)(pbStack_168 + 0x28) = uStack_1c8;
  *(undefined8 *)(pbStack_168 + 0x10) = uStack_1e0;
  *(undefined8 *)(pbStack_168 + 0x18) = uStack_1d8;
  *(undefined8 *)pbStack_168 = uStack_1f0;
  *(byte **)(pbStack_168 + 8) = pbStack_1e8;
  *(undefined8 *)(pbStack_168 + 0x70) = uStack_178;
  *(undefined8 *)(pbStack_168 + 0x78) = uStack_170;
  *(undefined8 *)(pbStack_168 + 0x60) = uStack_188;
  *(undefined8 *)(pbStack_168 + 0x68) = uStack_180;
  *(undefined8 *)(pbStack_168 + 0x50) = uStack_198;
  *(undefined **)(pbStack_168 + 0x58) = puStack_190;
  *(undefined8 *)(pbStack_168 + 0x40) = uStack_1a8;
  *(byte **)(pbStack_168 + 0x48) = pbStack_1a0;
  *(undefined8 *)(pbStack_168 + 0x80) = uStack_148;
  *(byte **)(pbStack_168 + 0x88) = pbStack_140;
  *(undefined8 *)(pbStack_168 + 0x90) = uStack_138;
  *(undefined **)(pbStack_168 + 0x98) = puStack_130;
  *(undefined8 *)(pbStack_168 + 0xa0) = uStack_128;
  *(undefined8 *)(pbStack_168 + 0xa8) = uStack_120;
  *(undefined8 *)(pbStack_168 + 0xb0) = uStack_118;
  *(undefined8 *)(pbStack_168 + 0xb8) = uStack_110;
  *(undefined8 **)(pbStack_168 + 0xc0) = puStack_100;
  *(code **)(pbStack_168 + 200) = pcStack_f8;
  *(undefined8 *)(pbStack_168 + 0xd0) = uStack_f0;
  *(code **)(pbStack_168 + 0xd8) = pcStack_e8;
  *(undefined8 *)(pbStack_168 + 0xe0) = uStack_e0;
  *(undefined8 *)(pbStack_168 + 0xe8) = uStack_d8;
  *(undefined8 *)(pbStack_168 + 0xf0) = uStack_d0;
  *(undefined8 *)(pbStack_168 + 0xf8) = uStack_c8;
  *(undefined4 *)(pbStack_168 + 0x100) = (undefined4)uStack_c0;
  *(undefined4 *)(pbStack_168 + 0x104) = uStack_c0._4_4_;
  *(undefined4 *)(pbStack_168 + 0x108) = (undefined4)uStack_b8;
  *(undefined4 *)(pbStack_168 + 0x10c) = uStack_b8._4_4_;
  *(undefined4 *)(pbStack_168 + 0x110) = (undefined4)uStack_b0;
  *(undefined4 *)(pbStack_168 + 0x114) = uStack_b0._4_4_;
  *(undefined4 *)(pbStack_168 + 0x118) = (undefined4)uStack_a8;
  *(undefined4 *)(pbStack_168 + 0x11c) = uStack_a8._4_4_;
  *(undefined4 *)(pbStack_168 + 0x120) = (undefined4)uStack_a0;
  *(undefined4 *)(pbStack_168 + 0x124) = uStack_a0._4_4_;
  *(undefined4 *)(pbStack_168 + 0x128) = (undefined4)uStack_98;
  *(undefined4 *)(pbStack_168 + 300) = uStack_98._4_4_;
  *(undefined4 *)(pbStack_168 + 0x130) = uStack_90;
  *(undefined4 *)(pbStack_168 + 0x134) = uStack_8c;
  *(undefined4 *)(pbStack_168 + 0x138) = uStack_88;
  *(undefined4 *)(pbStack_168 + 0x13c) = uStack_84;
  *(undefined8 *)(pbStack_168 + 0x158) = uVar6;
  *(undefined8 *)(pbStack_168 + 0x160) = uVar8;
  uStack_270 = 6;
  pbStack_268 = pbStack_168;
  uStack_260 = 6;
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(0x140,8);
  if (pbVar3 == (byte *)0x0) {
    uStack_4e = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x140);
  }
  pdb_14007ee60();
  pbVar4 = pub_1406abab0(1,1);
  if (pbVar4 == (byte *)0x0) {
    pbStack_60 = pbVar3;
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(1,1);
  }
  *pbVar4 = 0xc;
  puStack_190 = &UNK_142e653a8;
  uStack_188 = 8;
  uStack_1a8 = 1;
  uStack_198 = 1;
  uStack_180 = 0x8000000000000000;
  pbStack_1a0 = pbVar4;
  pdb_14007ee60();
  pbVar4 = pub_1406abab0(1,1);
  if (pbVar4 == (byte *)0x0) {
    pbStack_60 = pbVar3;
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(1,1);
  }
  *pbVar4 = 0xd;
  puStack_130 = &UNK_142e653b0;
  uStack_128 = 4;
  uStack_148 = 1;
  uStack_138 = 1;
  uStack_120 = 0x8000000000000000;
  pbStack_140 = pbVar4;
  pdb_14007ee60();
  pbVar4 = pub_1406abab0(1,1);
  if (pbVar4 == (byte *)0x0) {
    pbStack_60 = pbVar3;
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(1,1);
  }
  *pbVar4 = 0xe;
  pcStack_e8 = (code *)&UNK_142e653b4;
  uStack_e0 = 10;
  puStack_100 = (undefined8 *)0x1;
  uStack_f0 = 1;
  uStack_d8 = 0x8000000000000000;
  pcStack_f8 = (code *)pbVar4;
  pdb_14007ee60();
  pbVar4 = pub_1406abab0(1,1);
  if (pbVar4 == (byte *)0x0) {
    pbStack_60 = pbVar3;
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(1,1);
  }
  *pbVar4 = 0xf;
  uStack_a8 = &UNK_142e653be;
  uStack_a0 = 9;
  uStack_c0 = (undefined8 **)0x1;
  uStack_b0 = 1;
  uStack_98 = 0x8000000000000000;
  uStack_b8 = (code *)pbVar4;
  pdb_14007ee60();
  pbVar4 = pub_1406abab0(1,1);
  if (pbVar4 == (byte *)0x0) {
    pbStack_60 = pbVar3;
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(1,1);
  }
  *pbVar4 = 0x10;
  *(undefined8 *)(pbVar3 + 0x30) = uStack_178;
  *(undefined8 *)(pbVar3 + 0x38) = uStack_170;
  *(undefined8 *)(pbVar3 + 0x20) = uStack_188;
  *(undefined8 *)(pbVar3 + 0x28) = uStack_180;
  *(undefined8 *)(pbVar3 + 0x10) = uStack_198;
  *(undefined **)(pbVar3 + 0x18) = puStack_190;
  *(undefined8 *)pbVar3 = uStack_1a8;
  *(byte **)(pbVar3 + 8) = pbStack_1a0;
  *(undefined8 *)(pbVar3 + 0x70) = uStack_118;
  *(undefined8 *)(pbVar3 + 0x78) = uStack_110;
  *(undefined8 *)(pbVar3 + 0x60) = uStack_128;
  *(undefined8 *)(pbVar3 + 0x68) = uStack_120;
  *(undefined8 *)(pbVar3 + 0x50) = uStack_138;
  *(undefined **)(pbVar3 + 0x58) = puStack_130;
  *(undefined8 *)(pbVar3 + 0x40) = uStack_148;
  *(byte **)(pbVar3 + 0x48) = pbStack_140;
  *(undefined8 *)(pbVar3 + 0xb0) = uStack_d0;
  *(undefined8 *)(pbVar3 + 0xb8) = uStack_c8;
  *(undefined8 *)(pbVar3 + 0xa0) = uStack_e0;
  *(undefined8 *)(pbVar3 + 0xa8) = uStack_d8;
  *(undefined8 *)(pbVar3 + 0x90) = uStack_f0;
  *(code **)(pbVar3 + 0x98) = pcStack_e8;
  *(undefined8 **)(pbVar3 + 0x80) = puStack_100;
  *(code **)(pbVar3 + 0x88) = pcStack_f8;
  *(undefined4 *)(pbVar3 + 0xc0) = (undefined4)uStack_c0;
  *(undefined4 *)(pbVar3 + 0xc4) = uStack_c0._4_4_;
  *(undefined4 *)(pbVar3 + 200) = (undefined4)uStack_b8;
  *(undefined4 *)(pbVar3 + 0xcc) = uStack_b8._4_4_;
  *(undefined4 *)(pbVar3 + 0xd0) = (undefined4)uStack_b0;
  *(undefined4 *)(pbVar3 + 0xd4) = uStack_b0._4_4_;
  *(undefined4 *)(pbVar3 + 0xd8) = (undefined4)uStack_a8;
  *(undefined4 *)(pbVar3 + 0xdc) = uStack_a8._4_4_;
  *(undefined4 *)(pbVar3 + 0xe0) = (undefined4)uStack_a0;
  *(undefined4 *)(pbVar3 + 0xe4) = uStack_a0._4_4_;
  *(undefined4 *)(pbVar3 + 0xe8) = (undefined4)uStack_98;
  *(undefined4 *)(pbVar3 + 0xec) = uStack_98._4_4_;
  *(undefined4 *)(pbVar3 + 0xf0) = uStack_90;
  *(undefined4 *)(pbVar3 + 0xf4) = uStack_8c;
  *(undefined4 *)(pbVar3 + 0xf8) = uStack_88;
  *(undefined4 *)(pbVar3 + 0xfc) = uStack_84;
  pbVar3[0x100] = 1;
  pbVar3[0x101] = 0;
  pbVar3[0x102] = 0;
  pbVar3[0x103] = 0;
  pbVar3[0x104] = 0;
  pbVar3[0x105] = 0;
  pbVar3[0x106] = 0;
  pbVar3[0x107] = 0;
  *(byte **)(pbVar3 + 0x108) = pbVar4;
  pbVar3[0x110] = 1;
  pbVar3[0x111] = 0;
  pbVar3[0x112] = 0;
  pbVar3[0x113] = 0;
  pbVar3[0x114] = 0;
  pbVar3[0x115] = 0;
  pbVar3[0x116] = 0;
  pbVar3[0x117] = 0;
  *(undefined **)(pbVar3 + 0x118) = &UNK_142e653c7;
  pbVar3[0x120] = 6;
  pbVar3[0x121] = 0;
  pbVar3[0x122] = 0;
  pbVar3[0x123] = 0;
  pbVar3[0x124] = 0;
  pbVar3[0x125] = 0;
  pbVar3[0x126] = 0;
  pbVar3[0x127] = 0;
  pbVar3[0x128] = 0;
  pbVar3[0x129] = 0;
  pbVar3[0x12a] = 0;
  pbVar3[299] = 0;
  pbVar3[300] = 0;
  pbVar3[0x12d] = 0;
  pbVar3[0x12e] = 0;
  pbVar3[0x12f] = 0x80;
  uStack_288 = 5;
  uStack_278 = 5;
  pbStack_280 = pbVar3;
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(0x100,8);
  if (pbVar3 == (byte *)0x0) {
    uStack_4f = 1;
    uStack_50 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x100);
  }
  pdb_14007ee60();
  pbVar4 = pub_1406abab0(1,1);
  if (pbVar4 == (byte *)0x0) {
    pbStack_60 = pbVar3;
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(1,1);
  }
  *pbVar4 = 0x11;
  puStack_130 = &UNK_142e653cd;
  uStack_128 = 7;
  uStack_148 = 1;
  uStack_138 = 1;
  uStack_120 = 0x8000000000000000;
  pbStack_140 = pbVar4;
  pdb_14007ee60();
  pbVar4 = pub_1406abab0(1,1);
  if (pbVar4 == (byte *)0x0) {
    pbStack_60 = pbVar3;
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(1,1);
  }
  *pbVar4 = 0x12;
  pcStack_e8 = (code *)&UNK_142e653d4;
  uStack_e0 = 6;
  puStack_100 = (undefined8 *)0x1;
  uStack_f0 = 1;
  uStack_d8 = 0x8000000000000000;
  pcStack_f8 = (code *)pbVar4;
  pdb_14007ee60();
  pbVar4 = pub_1406abab0(1,1);
  if (pbVar4 == (byte *)0x0) {
    pbStack_60 = pbVar3;
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(1,1);
  }
  *pbVar4 = 0x15;
  uStack_a8 = &UNK_142e653da;
  uStack_a0 = 9;
  uStack_c0 = (undefined8 **)0x1;
  uStack_b0 = 1;
  uStack_98 = 0x8000000000000000;
  uStack_b8 = (code *)pbVar4;
  pdb_14007ee60();
  pbVar4 = pub_1406abab0(1,1);
  if (pbVar4 == (byte *)0x0) {
    pbStack_60 = pbVar3;
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(1,1);
  }
  *pbVar4 = 0x16;
  *(undefined8 *)(pbVar3 + 0x30) = uStack_118;
  *(undefined8 *)(pbVar3 + 0x38) = uStack_110;
  *(undefined8 *)(pbVar3 + 0x20) = uStack_128;
  *(undefined8 *)(pbVar3 + 0x28) = uStack_120;
  *(undefined8 *)(pbVar3 + 0x10) = uStack_138;
  *(undefined **)(pbVar3 + 0x18) = puStack_130;
  *(undefined8 *)pbVar3 = uStack_148;
  *(byte **)(pbVar3 + 8) = pbStack_140;
  *(undefined8 **)(pbVar3 + 0x40) = puStack_100;
  *(code **)(pbVar3 + 0x48) = pcStack_f8;
  *(undefined8 *)(pbVar3 + 0x50) = uStack_f0;
  *(code **)(pbVar3 + 0x58) = pcStack_e8;
  *(undefined8 *)(pbVar3 + 0x60) = uStack_e0;
  *(undefined8 *)(pbVar3 + 0x68) = uStack_d8;
  *(undefined8 *)(pbVar3 + 0x70) = uStack_d0;
  *(undefined8 *)(pbVar3 + 0x78) = uStack_c8;
  *(undefined4 *)(pbVar3 + 0xa0) = (undefined4)uStack_a0;
  *(undefined4 *)(pbVar3 + 0xa4) = uStack_a0._4_4_;
  *(undefined4 *)(pbVar3 + 0xa8) = (undefined4)uStack_98;
  *(undefined4 *)(pbVar3 + 0xac) = uStack_98._4_4_;
  *(undefined4 *)(pbVar3 + 0x90) = (undefined4)uStack_b0;
  *(undefined4 *)(pbVar3 + 0x94) = uStack_b0._4_4_;
  *(undefined4 *)(pbVar3 + 0x98) = (undefined4)uStack_a8;
  *(undefined4 *)(pbVar3 + 0x9c) = uStack_a8._4_4_;
  *(undefined4 *)(pbVar3 + 0x80) = (undefined4)uStack_c0;
  *(undefined4 *)(pbVar3 + 0x84) = uStack_c0._4_4_;
  *(undefined4 *)(pbVar3 + 0x88) = (undefined4)uStack_b8;
  *(undefined4 *)(pbVar3 + 0x8c) = uStack_b8._4_4_;
  *(undefined4 *)(pbVar3 + 0xb0) = uStack_90;
  *(undefined4 *)(pbVar3 + 0xb4) = uStack_8c;
  *(undefined4 *)(pbVar3 + 0xb8) = uStack_88;
  *(undefined4 *)(pbVar3 + 0xbc) = uStack_84;
  pbVar3[0xc0] = 1;
  pbVar3[0xc1] = 0;
  pbVar3[0xc2] = 0;
  pbVar3[0xc3] = 0;
  pbVar3[0xc4] = 0;
  pbVar3[0xc5] = 0;
  pbVar3[0xc6] = 0;
  pbVar3[199] = 0;
  *(byte **)(pbVar3 + 200) = pbVar4;
  pbVar3[0xd0] = 1;
  pbVar3[0xd1] = 0;
  pbVar3[0xd2] = 0;
  pbVar3[0xd3] = 0;
  pbVar3[0xd4] = 0;
  pbVar3[0xd5] = 0;
  pbVar3[0xd6] = 0;
  pbVar3[0xd7] = 0;
  *(undefined **)(pbVar3 + 0xd8) = &UNK_142e653e3;
  pbVar3[0xe0] = 0xb;
  pbVar3[0xe1] = 0;
  pbVar3[0xe2] = 0;
  pbVar3[0xe3] = 0;
  pbVar3[0xe4] = 0;
  pbVar3[0xe5] = 0;
  pbVar3[0xe6] = 0;
  pbVar3[0xe7] = 0;
  pbVar3[0xe8] = 0;
  pbVar3[0xe9] = 0;
  pbVar3[0xea] = 0;
  pbVar3[0xeb] = 0;
  pbVar3[0xec] = 0;
  pbVar3[0xed] = 0;
  pbVar3[0xee] = 0;
  pbVar3[0xef] = 0x80;
  uStack_160 = 4;
  uStack_150 = 4;
  pbStack_158 = pbVar3;
  pdb_14007ee60();
  pbStack_60 = pub_1406abab0(0x200,8);
  if (pbStack_60 == (byte *)0x0) {
    uStack_51 = 1;
    uStack_52 = 1;
    uStack_53 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x200);
  }
  uVar7 = 6;
  uVar6 = pdb_140dc6290(&UNK_142e653ee);
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(1,1);
  if (pbVar3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(1,1);
  }
  *pbVar3 = 0x20;
  puStack_2c8 = (ulonglong *)0x1;
  uStack_2b8 = 1;
  uStack_2a0 = 0x8000000000000000;
  uVar8 = 0x1e;
  pcStack_2c0 = (code *)pbVar3;
  uStack_2b0 = uVar6;
  uStack_2a8 = uVar7;
  uVar6 = pdb_140dc6290(&UNK_142e653f4);
  pdb_14007ee60();
  pbStack_250 = pub_1406abab0(1,1);
  if (pbStack_250 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(1,1);
  }
  *pbStack_250 = 0x21;
  uStack_258 = 1;
  uStack_248 = 1;
  uStack_230 = 0x8000000000000000;
  uVar7 = 0x1b;
  uStack_240 = uVar6;
  uStack_238 = uVar8;
  uVar6 = pdb_140dc6290(&UNK_142e65412);
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(1,1);
  if (pbVar3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(1,1);
  }
  *pbVar3 = 0x22;
  uStack_1f0 = 1;
  uStack_1e0 = 1;
  uStack_1c8 = 0x8000000000000000;
  uVar8 = 0x1c;
  pbStack_1e8 = pbVar3;
  uStack_1d8 = uVar6;
  uStack_1d0 = uVar7;
  uVar6 = pdb_140dc6290(&UNK_142e6542d);
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(1,1);
  if (pbVar3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(1,1);
  }
  *pbVar3 = 0x23;
  uStack_1a8 = 1;
  uStack_198 = 1;
  uStack_180 = 0x8000000000000000;
  uVar7 = 0x1b;
  pbStack_1a0 = pbVar3;
  puStack_190 = (undefined *)uVar6;
  uStack_188 = uVar8;
  uVar6 = pdb_140dc6290(&UNK_142e65449);
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(1,1);
  if (pbVar3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(1,1);
  }
  *pbVar3 = 0x24;
  uStack_148 = 1;
  uStack_138 = 1;
  uStack_120 = 0x8000000000000000;
  uVar8 = 0x19;
  pbStack_140 = pbVar3;
  puStack_130 = (undefined *)uVar6;
  uStack_128 = uVar7;
  uVar6 = pdb_140dc6290(&UNK_142e65464);
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(1,1);
  if (pbVar3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(1,1);
  }
  *pbVar3 = 0x25;
  puStack_100 = (undefined8 *)0x1;
  uStack_f0 = 1;
  uStack_d8 = 0x8000000000000000;
  uVar7 = 0x22;
  pcStack_f8 = (code *)pbVar3;
  pcStack_e8 = (code *)uVar6;
  uStack_e0 = uVar8;
  puVar5 = (undefined *)pdb_140dc6290(&UNK_142e6547d);
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(1,1);
  if (pbVar3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(1,1);
  }
  *pbVar3 = 0x26;
  uStack_c0 = (undefined8 **)0x1;
  uStack_b0 = 1;
  uStack_98 = 0x8000000000000000;
  uVar8 = 0x1e;
  uStack_b8 = (code *)pbVar3;
  uStack_a8 = puVar5;
  uStack_a0 = uVar7;
  uVar6 = pdb_140dc6290(&UNK_142e6549f);
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(1,1);
  if (pbVar3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(1,1);
  }
  *pbVar3 = 0x27;
  *(undefined8 *)(pbStack_60 + 0x30) = uStack_298;
  *(undefined8 *)(pbStack_60 + 0x38) = uStack_290;
  *(undefined8 *)(pbStack_60 + 0x20) = uStack_2a8;
  *(undefined8 *)(pbStack_60 + 0x28) = uStack_2a0;
  *(undefined8 *)(pbStack_60 + 0x10) = uStack_2b8;
  *(undefined8 *)(pbStack_60 + 0x18) = uStack_2b0;
  *(ulonglong **)pbStack_60 = puStack_2c8;
  *(code **)(pbStack_60 + 8) = pcStack_2c0;
  *(undefined8 *)(pbStack_60 + 0x70) = uStack_228;
  *(undefined8 *)(pbStack_60 + 0x78) = uStack_220;
  *(undefined8 *)(pbStack_60 + 0x60) = uStack_238;
  *(undefined8 *)(pbStack_60 + 0x68) = uStack_230;
  *(undefined8 *)(pbStack_60 + 0x50) = uStack_248;
  *(undefined8 *)(pbStack_60 + 0x58) = uStack_240;
  *(undefined8 *)(pbStack_60 + 0x40) = uStack_258;
  *(byte **)(pbStack_60 + 0x48) = pbStack_250;
  *(undefined8 *)(pbStack_60 + 0x80) = uStack_1f0;
  *(byte **)(pbStack_60 + 0x88) = pbStack_1e8;
  *(undefined8 *)(pbStack_60 + 0x90) = uStack_1e0;
  *(undefined8 *)(pbStack_60 + 0x98) = uStack_1d8;
  *(undefined8 *)(pbStack_60 + 0xa0) = uStack_1d0;
  *(undefined8 *)(pbStack_60 + 0xa8) = uStack_1c8;
  *(undefined8 *)(pbStack_60 + 0xb0) = uStack_1c0;
  *(undefined8 *)(pbStack_60 + 0xb8) = uStack_1b8;
  *(undefined8 *)(pbStack_60 + 0xc0) = uStack_1a8;
  *(byte **)(pbStack_60 + 200) = pbStack_1a0;
  *(undefined8 *)(pbStack_60 + 0xd0) = uStack_198;
  *(undefined **)(pbStack_60 + 0xd8) = puStack_190;
  *(undefined8 *)(pbStack_60 + 0xe0) = uStack_188;
  *(undefined8 *)(pbStack_60 + 0xe8) = uStack_180;
  *(undefined8 *)(pbStack_60 + 0xf0) = uStack_178;
  *(undefined8 *)(pbStack_60 + 0xf8) = uStack_170;
  *(undefined8 *)(pbStack_60 + 0x100) = uStack_148;
  *(byte **)(pbStack_60 + 0x108) = pbStack_140;
  *(undefined8 *)(pbStack_60 + 0x110) = uStack_138;
  *(undefined **)(pbStack_60 + 0x118) = puStack_130;
  *(undefined8 *)(pbStack_60 + 0x120) = uStack_128;
  *(undefined8 *)(pbStack_60 + 0x128) = uStack_120;
  *(undefined8 *)(pbStack_60 + 0x130) = uStack_118;
  *(undefined8 *)(pbStack_60 + 0x138) = uStack_110;
  *(undefined8 **)(pbStack_60 + 0x140) = puStack_100;
  *(code **)(pbStack_60 + 0x148) = pcStack_f8;
  *(undefined8 *)(pbStack_60 + 0x150) = uStack_f0;
  *(code **)(pbStack_60 + 0x158) = pcStack_e8;
  *(undefined8 *)(pbStack_60 + 0x160) = uStack_e0;
  *(undefined8 *)(pbStack_60 + 0x168) = uStack_d8;
  *(undefined8 *)(pbStack_60 + 0x170) = uStack_d0;
  *(undefined8 *)(pbStack_60 + 0x178) = uStack_c8;
  *(undefined4 *)(pbStack_60 + 0x180) = (undefined4)uStack_c0;
  *(undefined4 *)(pbStack_60 + 0x184) = uStack_c0._4_4_;
  *(undefined4 *)(pbStack_60 + 0x188) = (undefined4)uStack_b8;
  *(undefined4 *)(pbStack_60 + 0x18c) = uStack_b8._4_4_;
  *(undefined4 *)(pbStack_60 + 400) = (undefined4)uStack_b0;
  *(undefined4 *)(pbStack_60 + 0x194) = uStack_b0._4_4_;
  *(undefined4 *)(pbStack_60 + 0x198) = (undefined4)uStack_a8;
  *(undefined4 *)(pbStack_60 + 0x19c) = uStack_a8._4_4_;
  *(undefined4 *)(pbStack_60 + 0x1b0) = uStack_90;
  *(undefined4 *)(pbStack_60 + 0x1b4) = uStack_8c;
  *(undefined4 *)(pbStack_60 + 0x1b8) = uStack_88;
  *(undefined4 *)(pbStack_60 + 0x1bc) = uStack_84;
  *(undefined4 *)(pbStack_60 + 0x1a0) = (undefined4)uStack_a0;
  *(undefined4 *)(pbStack_60 + 0x1a4) = uStack_a0._4_4_;
  *(undefined4 *)(pbStack_60 + 0x1a8) = (undefined4)uStack_98;
  *(undefined4 *)(pbStack_60 + 0x1ac) = uStack_98._4_4_;
  pbStack_60[0x1c0] = 1;
  pbStack_60[0x1c1] = 0;
  pbStack_60[0x1c2] = 0;
  pbStack_60[0x1c3] = 0;
  pbStack_60[0x1c4] = 0;
  pbStack_60[0x1c5] = 0;
  pbStack_60[0x1c6] = 0;
  pbStack_60[0x1c7] = 0;
  *(byte **)(pbStack_60 + 0x1c8) = pbVar3;
  pbStack_60[0x1d0] = 1;
  pbStack_60[0x1d1] = 0;
  pbStack_60[0x1d2] = 0;
  pbStack_60[0x1d3] = 0;
  pbStack_60[0x1d4] = 0;
  pbStack_60[0x1d5] = 0;
  pbStack_60[0x1d6] = 0;
  pbStack_60[0x1d7] = 0;
  *(undefined8 *)(pbStack_60 + 0x1d8) = uVar6;
  *(undefined8 *)(pbStack_60 + 0x1e0) = uVar8;
  pbStack_60[0x1e8] = 0;
  pbStack_60[0x1e9] = 0;
  pbStack_60[0x1ea] = 0;
  pbStack_60[0x1eb] = 0;
  pbStack_60[0x1ec] = 0;
  pbStack_60[0x1ed] = 0;
  pbStack_60[0x1ee] = 0;
  pbStack_60[0x1ef] = 0x80;
  uStack_258 = 8;
  pbStack_250 = pbStack_60;
  uStack_248 = 8;
  if (*_DAT_143ca4500 == '\0') {
    pdb_14007ee60();
    pbVar3 = pub_1406abab0(1,1);
    uVar2 = uStack_150;
    if (pbVar3 == (byte *)0x0) {
      uStack_49 = 1;
      uStack_4a = 1;
      uStack_4b = 1;
      uStack_4c = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(1,1);
    }
    *pbVar3 = 0x13;
    uStack_a8 = &UNK_142e654bd;
    uStack_a0 = 4;
    uStack_c0 = (undefined8 **)0x1;
    uStack_b0 = 1;
    uStack_98 = 0x8000000000000000;
    uStack_b8 = (code *)pbVar3;
    if (uStack_150 < 2) {
      pdb_142dc7e73(2,uStack_150,&UNK_142e654f0);
    }
    else {
      if (uStack_150 == uStack_160) {
        pdb_142d7ee50(&uStack_160);
      }
      pbVar4 = pbStack_158;
      pbVar3 = pbStack_158 + 0x80;
      if (uVar2 != 2) {
        pub_142e32770(pbStack_158 + 0xc0,pbVar3,uVar2 * 0x40 + -0x80);
      }
      *(undefined4 *)(pbVar4 + 0xb0) = uStack_90;
      *(undefined4 *)(pbVar4 + 0xb4) = uStack_8c;
      *(undefined4 *)(pbVar4 + 0xb8) = uStack_88;
      *(undefined4 *)(pbVar4 + 0xbc) = uStack_84;
      *(undefined4 *)(pbVar4 + 0xa0) = (undefined4)uStack_a0;
      *(undefined4 *)(pbVar4 + 0xa4) = uStack_a0._4_4_;
      *(undefined4 *)(pbVar4 + 0xa8) = (undefined4)uStack_98;
      *(undefined4 *)(pbVar4 + 0xac) = uStack_98._4_4_;
      *(undefined4 *)(pbVar4 + 0x90) = (undefined4)uStack_b0;
      *(undefined4 *)(pbVar4 + 0x94) = uStack_b0._4_4_;
      *(undefined4 *)(pbVar4 + 0x98) = (undefined4)uStack_a8;
      *(undefined4 *)(pbVar4 + 0x9c) = uStack_a8._4_4_;
      *(undefined4 *)pbVar3 = (undefined4)uStack_c0;
      *(undefined4 *)(pbVar4 + 0x84) = uStack_c0._4_4_;
      *(undefined4 *)(pbVar4 + 0x88) = (undefined4)uStack_b8;
      *(undefined4 *)(pbVar4 + 0x8c) = uStack_b8._4_4_;
      uStack_150 = uVar2 + 1;
      pdb_14007ee60();
      pbVar3 = pub_1406abab0(1,1);
      uVar2 = uStack_150;
      if (pbVar3 == (byte *)0x0) {
        uStack_49 = 1;
        uStack_4a = 1;
        uStack_4b = 1;
        uStack_4c = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(1,1);
      }
      *pbVar3 = 0x14;
      uStack_a8 = &UNK_142e65508;
      uStack_a0 = 5;
      uStack_c0 = (undefined8 **)0x1;
      uStack_b0 = 1;
      uStack_98 = 0x8000000000000000;
      uStack_b8 = (code *)pbVar3;
      if (2 < uStack_150) {
        if (uStack_150 == uStack_160) {
          pdb_142d7ee50(&uStack_160);
        }
        pbVar4 = pbStack_158;
        pbVar3 = pbStack_158 + 0xc0;
        if (uVar2 != 3) {
          pub_142e32770(pbStack_158 + 0x100,pbVar3,uVar2 * 0x40 + -0xc0);
        }
        *(undefined4 *)(pbVar4 + 0xf0) = uStack_90;
        *(undefined4 *)(pbVar4 + 0xf4) = uStack_8c;
        *(undefined4 *)(pbVar4 + 0xf8) = uStack_88;
        *(undefined4 *)(pbVar4 + 0xfc) = uStack_84;
        *(undefined4 *)(pbVar4 + 0xe0) = (undefined4)uStack_a0;
        *(undefined4 *)(pbVar4 + 0xe4) = uStack_a0._4_4_;
        *(undefined4 *)(pbVar4 + 0xe8) = (undefined4)uStack_98;
        *(undefined4 *)(pbVar4 + 0xec) = uStack_98._4_4_;
        *(undefined4 *)(pbVar4 + 0xd0) = (undefined4)uStack_b0;
        *(undefined4 *)(pbVar4 + 0xd4) = uStack_b0._4_4_;
        *(undefined4 *)(pbVar4 + 0xd8) = (undefined4)uStack_a8;
        *(undefined4 *)(pbVar4 + 0xdc) = uStack_a8._4_4_;
        *(undefined4 *)pbVar3 = (undefined4)uStack_c0;
        *(undefined4 *)(pbVar4 + 0xc4) = uStack_c0._4_4_;
        *(undefined4 *)(pbVar4 + 200) = (undefined4)uStack_b8;
        *(undefined4 *)(pbVar4 + 0xcc) = uStack_b8._4_4_;
        uStack_150 = uVar2 + 1;
        goto LAB_1402a2a87;
      }
      pdb_142dc7e73(3,uStack_150,&UNK_142e65510);
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
LAB_1402a2a87:
  pdb_14007ee60();
  pbStack_108 = pub_1406abab0(0x180,8);
  if (pbStack_108 == (byte *)0x0) {
    uStack_49 = 1;
    uStack_4a = 1;
    uStack_4b = 1;
    uStack_4c = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x180);
  }
  uVar7 = 0x14;
  uVar6 = pdb_140dc6290(&UNK_142e65528);
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(2,1);
  if (pbVar3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(1,2);
  }
  pbVar3[0] = 0x17;
  pbVar3[1] = 0x18;
  uStack_1f0 = 2;
  uStack_1e0 = 2;
  uStack_1c8 = 0x8000000000000000;
  uVar8 = 0x1a;
  pbStack_1e8 = pbVar3;
  uStack_1d8 = uVar6;
  uStack_1d0 = uVar7;
  uVar6 = pdb_140dc6290(&UNK_142e6553c);
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(1,1);
  if (pbVar3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(1,1);
  }
  *pbVar3 = 0x19;
  uStack_1a8 = 1;
  uStack_198 = 1;
  uStack_180 = 0x8000000000000000;
  uVar7 = 0x1b;
  pbStack_1a0 = pbVar3;
  puStack_190 = (undefined *)uVar6;
  uStack_188 = uVar8;
  uVar6 = pdb_140dc6290(&UNK_142e65556);
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(1,1);
  if (pbVar3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(1,1);
  }
  *pbVar3 = 0x1a;
  uStack_148 = 1;
  uStack_138 = 1;
  uStack_120 = 0x8000000000000000;
  uVar8 = 0x1b;
  pbStack_140 = pbVar3;
  puStack_130 = (undefined *)uVar6;
  uStack_128 = uVar7;
  uVar6 = pdb_140dc6290(&UNK_142e65571);
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(1,1);
  if (pbVar3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(1,1);
  }
  *pbVar3 = 0x1b;
  puStack_100 = (undefined8 *)0x1;
  uStack_f0 = 1;
  uStack_d8 = 0x8000000000000000;
  uVar7 = 0x18;
  pcStack_f8 = (code *)pbVar3;
  pcStack_e8 = (code *)uVar6;
  uStack_e0 = uVar8;
  uVar6 = pdb_140dc6290(&UNK_142e6558c);
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(1,1);
  if (pbVar3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(1,1);
  }
  *pbVar3 = 0x1e;
  uStack_c0 = (undefined8 **)0x1;
  uStack_b0 = 1;
  uStack_98 = 0x8000000000000000;
  uVar8 = 0x1d;
  uStack_b8 = (code *)pbVar3;
  uStack_a8 = (undefined *)uVar6;
  uStack_a0 = uVar7;
  uVar6 = pdb_140dc6290(&UNK_142e655a4);
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(1,1);
  if (pbVar3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(1,1);
  }
  *pbVar3 = 0x1f;
  *(undefined8 *)(pbStack_108 + 0x30) = uStack_1c0;
  *(undefined8 *)(pbStack_108 + 0x38) = uStack_1b8;
  *(undefined8 *)(pbStack_108 + 0x20) = uStack_1d0;
  *(undefined8 *)(pbStack_108 + 0x28) = uStack_1c8;
  *(undefined8 *)(pbStack_108 + 0x10) = uStack_1e0;
  *(undefined8 *)(pbStack_108 + 0x18) = uStack_1d8;
  *(undefined8 *)pbStack_108 = uStack_1f0;
  *(byte **)(pbStack_108 + 8) = pbStack_1e8;
  *(undefined8 *)(pbStack_108 + 0x70) = uStack_178;
  *(undefined8 *)(pbStack_108 + 0x78) = uStack_170;
  *(undefined8 *)(pbStack_108 + 0x60) = uStack_188;
  *(undefined8 *)(pbStack_108 + 0x68) = uStack_180;
  *(undefined8 *)(pbStack_108 + 0x50) = uStack_198;
  *(undefined **)(pbStack_108 + 0x58) = puStack_190;
  *(undefined8 *)(pbStack_108 + 0x40) = uStack_1a8;
  *(byte **)(pbStack_108 + 0x48) = pbStack_1a0;
  *(undefined8 *)(pbStack_108 + 0x80) = uStack_148;
  *(byte **)(pbStack_108 + 0x88) = pbStack_140;
  *(undefined8 *)(pbStack_108 + 0x90) = uStack_138;
  *(undefined **)(pbStack_108 + 0x98) = puStack_130;
  *(undefined8 *)(pbStack_108 + 0xa0) = uStack_128;
  *(undefined8 *)(pbStack_108 + 0xa8) = uStack_120;
  *(undefined8 *)(pbStack_108 + 0xb0) = uStack_118;
  *(undefined8 *)(pbStack_108 + 0xb8) = uStack_110;
  *(undefined8 **)(pbStack_108 + 0xc0) = puStack_100;
  *(code **)(pbStack_108 + 200) = pcStack_f8;
  *(undefined8 *)(pbStack_108 + 0xd0) = uStack_f0;
  *(code **)(pbStack_108 + 0xd8) = pcStack_e8;
  *(undefined8 *)(pbStack_108 + 0xe0) = uStack_e0;
  *(undefined8 *)(pbStack_108 + 0xe8) = uStack_d8;
  *(undefined8 *)(pbStack_108 + 0xf0) = uStack_d0;
  *(undefined8 *)(pbStack_108 + 0xf8) = uStack_c8;
  *(undefined4 *)(pbStack_108 + 0x100) = (undefined4)uStack_c0;
  *(undefined4 *)(pbStack_108 + 0x104) = uStack_c0._4_4_;
  *(undefined4 *)(pbStack_108 + 0x108) = (undefined4)uStack_b8;
  *(undefined4 *)(pbStack_108 + 0x10c) = uStack_b8._4_4_;
  *(undefined4 *)(pbStack_108 + 0x110) = (undefined4)uStack_b0;
  *(undefined4 *)(pbStack_108 + 0x114) = uStack_b0._4_4_;
  *(undefined4 *)(pbStack_108 + 0x118) = (undefined4)uStack_a8;
  *(undefined4 *)(pbStack_108 + 0x11c) = uStack_a8._4_4_;
  *(undefined4 *)(pbStack_108 + 0x120) = (undefined4)uStack_a0;
  *(undefined4 *)(pbStack_108 + 0x124) = uStack_a0._4_4_;
  *(undefined4 *)(pbStack_108 + 0x128) = (undefined4)uStack_98;
  *(undefined4 *)(pbStack_108 + 300) = uStack_98._4_4_;
  *(undefined4 *)(pbStack_108 + 0x130) = uStack_90;
  *(undefined4 *)(pbStack_108 + 0x134) = uStack_8c;
  *(undefined4 *)(pbStack_108 + 0x138) = uStack_88;
  *(undefined4 *)(pbStack_108 + 0x13c) = uStack_84;
  pbStack_108[0x140] = 1;
  pbStack_108[0x141] = 0;
  pbStack_108[0x142] = 0;
  pbStack_108[0x143] = 0;
  pbStack_108[0x144] = 0;
  pbStack_108[0x145] = 0;
  pbStack_108[0x146] = 0;
  pbStack_108[0x147] = 0;
  *(byte **)(pbStack_108 + 0x148) = pbVar3;
  pbStack_108[0x150] = 1;
  pbStack_108[0x151] = 0;
  pbStack_108[0x152] = 0;
  pbStack_108[0x153] = 0;
  pbStack_108[0x154] = 0;
  pbStack_108[0x155] = 0;
  pbStack_108[0x156] = 0;
  pbStack_108[0x157] = 0;
  *(undefined8 *)(pbStack_108 + 0x158) = uVar6;
  *(undefined8 *)(pbStack_108 + 0x160) = uVar8;
  pbStack_108[0x168] = 0;
  pbStack_108[0x169] = 0;
  pbStack_108[0x16a] = 0;
  pbStack_108[0x16b] = 0;
  pbStack_108[0x16c] = 0;
  pbStack_108[0x16d] = 0;
  pbStack_108[0x16e] = 0;
  pbStack_108[0x16f] = 0x80;
  uStack_1f0 = 6;
  pbStack_1e8 = pbStack_108;
  uStack_1e0 = 6;
  pdb_14007ee60();
  pbStack_1b0 = pub_1406abab0(0x80,8);
  if (pbStack_1b0 != (byte *)0x0) {
    pdb_14007ee60();
    pbVar3 = pub_1406abab0(1,1);
    if (pbVar3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(1,1);
    }
    *pbVar3 = 0x28;
    uStack_a8 = &UNK_142e655c1;
    uStack_a0 = 0x12;
    uStack_c0 = (undefined8 **)0x1;
    uStack_b0 = 1;
    uStack_98 = 0x8000000000000000;
    uVar7 = 0x1c;
    uStack_b8 = (code *)pbVar3;
    uVar6 = pdb_140dc6290(&UNK_142e655d3);
    pdb_14007ee60();
    pbVar3 = pub_1406abab0(1,1);
    if (pbVar3 != (byte *)0x0) {
      uStack_2d8 = uStack_2f0;
      *pbVar3 = 0x1c;
      *(undefined4 *)(pbStack_1b0 + 0x30) = uStack_90;
      *(undefined4 *)(pbStack_1b0 + 0x34) = uStack_8c;
      *(undefined4 *)(pbStack_1b0 + 0x38) = uStack_88;
      *(undefined4 *)(pbStack_1b0 + 0x3c) = uStack_84;
      *(undefined4 *)(pbStack_1b0 + 0x20) = (undefined4)uStack_a0;
      *(undefined4 *)(pbStack_1b0 + 0x24) = uStack_a0._4_4_;
      *(undefined4 *)(pbStack_1b0 + 0x28) = (undefined4)uStack_98;
      *(undefined4 *)(pbStack_1b0 + 0x2c) = uStack_98._4_4_;
      *(undefined4 *)(pbStack_1b0 + 0x10) = (undefined4)uStack_b0;
      *(undefined4 *)(pbStack_1b0 + 0x14) = uStack_b0._4_4_;
      *(undefined4 *)(pbStack_1b0 + 0x18) = (undefined4)uStack_a8;
      *(undefined4 *)(pbStack_1b0 + 0x1c) = uStack_a8._4_4_;
      *(undefined4 *)pbStack_1b0 = (undefined4)uStack_c0;
      *(undefined4 *)(pbStack_1b0 + 4) = uStack_c0._4_4_;
      *(undefined4 *)(pbStack_1b0 + 8) = (undefined4)uStack_b8;
      *(undefined4 *)(pbStack_1b0 + 0xc) = uStack_b8._4_4_;
      pbStack_1b0[0x40] = 1;
      pbStack_1b0[0x41] = 0;
      pbStack_1b0[0x42] = 0;
      pbStack_1b0[0x43] = 0;
      pbStack_1b0[0x44] = 0;
      pbStack_1b0[0x45] = 0;
      pbStack_1b0[0x46] = 0;
      pbStack_1b0[0x47] = 0;
      *(byte **)(pbStack_1b0 + 0x48) = pbVar3;
      pbStack_1b0[0x50] = 1;
      pbStack_1b0[0x51] = 0;
      pbStack_1b0[0x52] = 0;
      pbStack_1b0[0x53] = 0;
      pbStack_1b0[0x54] = 0;
      pbStack_1b0[0x55] = 0;
      pbStack_1b0[0x56] = 0;
      pbStack_1b0[0x57] = 0;
      *(undefined8 *)(pbStack_1b0 + 0x58) = uVar6;
      *(undefined8 *)(pbStack_1b0 + 0x60) = uVar7;
      pbStack_1b0[0x68] = 0;
      pbStack_1b0[0x69] = 0;
      pbStack_1b0[0x6a] = 0;
      pbStack_1b0[0x6b] = 0;
      pbStack_1b0[0x6c] = 0;
      pbStack_1b0[0x6d] = 0;
      pbStack_1b0[0x6e] = 0;
      pbStack_1b0[0x6f] = 0x80;
      uStack_1a8 = 2;
      pbStack_1a0 = pbStack_1b0;
      uStack_198 = 2;
      lStack_210 = param_3;
                    /* WARNING: Could not recover jumptable at 0x0001402a2f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_142e65c94 + *(int *)(&UNK_142e65c94 + *(longlong *)(param_3 + 0x30) * 4)))();
      return;
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(1,1);
  }
  uStack_54 = 1;
  uStack_55 = 1;
  uStack_56 = 1;
  uStack_57 = 1;
  uStack_58 = 1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x80);
}

