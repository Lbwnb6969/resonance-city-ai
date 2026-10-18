// VA 0x14047bc80, PDB extent 8150 bytes
// tiny_glade::driver_screen_tests::get_driver_screen_test_case
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/driver_screen_tests.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::driver_screen_tests::get_driver_screen_test_case
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/driver_screen_tests.rs
   Extent: 8150 */

undefined8 * pdb_14047bc80(undefined8 *param_1,undefined4 param_2,undefined1 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulonglong uVar9;
  byte *pbVar10;
  undefined1 auStack_388 [160];
  byte *pbStack_2e8;
  byte *pbStack_2e0;
  byte *pbStack_2d8;
  byte *pbStack_248;
  byte *pbStack_240;
  byte *pbStack_238;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  byte *pbStack_60;
  byte *pbStack_58;
  undefined1 uStack_49;
  byte *pbStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  switch(param_2) {
  case 0:
    uStack_1a8 = (byte *)0x0;
    uStack_1a0 = (byte *)0x8;
    uStack_198 = (byte *)0x0;
    uStack_100 = 0;
    uStack_fc = 0;
    uStack_f8 = 8;
    uStack_f4 = 0;
    uStack_f0 = 0;
    uStack_ec = 0;
    pdb_14007ee60();
    pbVar6 = pub_1406abab0(0x19,1);
    uVar2 = _UNK_142f5c8f7;
    if (pbVar6 == (byte *)0x0) {
      pdb_142dc7e2a(1,0x19);
      goto LAB_14047ce6c;
    }
    *(ulonglong *)(pbVar6 + 9) = CONCAT17(UNK_142f5c8f6,CONCAT43(_UNK_142f5c8f2,_UNK_142f5c8ef));
    *(undefined8 *)(pbVar6 + 0x11) = uVar2;
    uVar5 = _UNK_142f5c8f2;
    uVar4 = _UNK_142f5c8ee;
    uVar3 = _UNK_142f5c8ea;
    *(undefined4 *)pbVar6 = _UNK_142f5c8e6;
    *(undefined4 *)(pbVar6 + 4) = uVar3;
    *(undefined4 *)(pbVar6 + 8) = uVar4;
    *(undefined4 *)(pbVar6 + 0xc) = uVar5;
    uStack_100 = 0x11;
    pbVar10 = (byte *)0x8;
    pbStack_2e8 = (byte *)0x0;
    uStack_198 = (byte *)0x0;
    pbVar7 = (byte *)0x8;
    goto code_r0x00014047caa8;
  case 1:
    pdb_14007ee60();
    pbStack_48 = pub_1406abab0(0x140,8);
    if (pbStack_48 == (byte *)0x0) {
LAB_14047cc99:
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x140);
    }
    pdb_14047b4a0(&uStack_1a8,0);
    pdb_14047aea0(&uStack_100,1000);
    goto code_r0x00014047c701;
  case 2:
    pdb_14007ee60();
    pbVar6 = pub_1406abab0(0xa0,8);
    if (pbVar6 == (byte *)0x0) {
code_r0x00014047cc8a:
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0xa0);
    }
    pbStack_48 = pbVar6;
    pdb_14007ee60();
    pbVar6 = pub_1406abab0(0xd,1);
    if (pbVar6 == (byte *)0x0) {
      pdb_142dc7e2a(1,0xd);
      goto LAB_14047ce6c;
    }
    pbVar6[5] = 0x6e;
    pbVar6[6] = 0x20;
    pbVar6[7] = 0x52;
    pbVar6[8] = 0x31;
    pbVar6[9] = 0x20;
    pbVar6[10] = 0x31;
    pbVar6[0xb] = 0x32;
    pbVar6[0xc] = 0x30;
    pbVar6[0] = 0x52;
    pbVar6[1] = 0x75;
    pbVar6[2] = 100;
    pbVar6[3] = 0x65;
    pbVar6[4] = 0x6f;
    pbVar6[5] = 0x6e;
    pbVar6[6] = 0x20;
    pbVar6[7] = 0x52;
    pbStack_58 = pbVar6;
    pdb_140eacc10(&uStack_1a8);
    pdb_14007ee60();
    pbVar6 = pub_1406abab0(0xc,1);
    if (pbVar6 == (byte *)0x0) {
      pdb_142dc7e2a(1,0xc);
      goto LAB_14047ce6c;
    }
    pbVar6[0] = 0x4c;
    pbVar6[1] = 0x65;
    pbVar6[2] = 0x67;
    pbVar6[3] = 0x69;
    pbVar6[4] = 0x74;
    pbVar6[5] = 0x20;
    pbVar6[6] = 100;
    pbVar6[7] = 0x72;
    pbVar6[8] = 0x69;
    pbVar6[9] = 0x76;
    pbVar6[10] = 0x65;
    pbVar6[0xb] = 0x72;
    pdb_14007ee60();
    pbVar10 = pub_1406abab0(0x13,1);
    pbVar7 = pbStack_48;
    uVar2 = _UNK_142f5c83c;
    if (pbVar10 == (byte *)0x0) {
      pbStack_60 = pbVar6;
      pdb_142dc7e2a(1,0x13);
      goto LAB_14047ce6c;
    }
    *(undefined8 *)pbVar10 = _DAT_142f5c834;
    *(undefined8 *)(pbVar10 + 8) = uVar2;
    pbVar10[0xf] = 0x69;
    pbVar10[0x10] = 0x6e;
    pbVar10[0x11] = 0x66;
    pbVar10[0x12] = 0x6f;
    uStack_fc = SUB84(uStack_1a8,0);
    uStack_f8 = (undefined4)((ulonglong)uStack_1a8 >> 0x20);
    uStack_f4 = SUB84(uStack_1a0,0);
    uStack_f0 = (undefined4)((ulonglong)uStack_1a0 >> 0x20);
    pbStack_48[0] = 0;
    pbStack_48[1] = 0;
    pbStack_48[2] = 0;
    pbStack_48[3] = 0;
    pbStack_48[4] = 0;
    pbStack_48[5] = 0;
    pbStack_48[6] = 0;
    pbStack_48[7] = 0;
    pbStack_48[0x10] = 0xd;
    pbStack_48[0x11] = 0;
    pbStack_48[0x12] = 0;
    pbStack_48[0x13] = 0;
    pbStack_48[0x14] = 0;
    pbStack_48[0x15] = 0;
    pbStack_48[0x16] = 0;
    pbStack_48[0x17] = 0;
    *(byte **)(pbStack_48 + 0x18) = pbStack_58;
    pbStack_48[0x20] = 0xd;
    pbStack_48[0x21] = 0;
    pbStack_48[0x22] = 0;
    pbStack_48[0x23] = 0;
    pbStack_48[0x24] = 0;
    pbStack_48[0x25] = 0;
    pbStack_48[0x26] = 0;
    pbStack_48[0x27] = 0;
    pbStack_48[0x28] = 0xc;
    pbStack_48[0x29] = 0;
    pbStack_48[0x2a] = 0;
    pbStack_48[0x2b] = 0;
    pbStack_48[0x2c] = 0;
    pbStack_48[0x2d] = 0;
    pbStack_48[0x2e] = 0;
    pbStack_48[0x2f] = 0;
    *(byte **)(pbStack_48 + 0x30) = pbVar6;
    pbStack_48[0x38] = 0xc;
    pbStack_48[0x39] = 0;
    pbStack_48[0x3a] = 0;
    pbStack_48[0x3b] = 0;
    pbStack_48[0x3c] = 0;
    pbStack_48[0x3d] = 0;
    pbStack_48[0x3e] = 0;
    pbStack_48[0x3f] = 0;
    pbStack_48[0x40] = 0x13;
    pbStack_48[0x41] = 0;
    pbStack_48[0x42] = 0;
    pbStack_48[0x43] = 0;
    pbStack_48[0x44] = 0;
    pbStack_48[0x45] = 0;
    pbStack_48[0x46] = 0;
    pbStack_48[0x47] = 0;
    *(byte **)(pbStack_48 + 0x48) = pbVar10;
    pbStack_48[0x50] = 0x13;
    pbStack_48[0x51] = 0;
    pbStack_48[0x52] = 0;
    pbStack_48[0x53] = 0;
    pbStack_48[0x54] = 0;
    pbStack_48[0x55] = 0;
    pbStack_48[0x56] = 0;
    pbStack_48[0x57] = 0;
    *(undefined8 *)(pbStack_48 + 0x58) = _UNK_142f5c800;
    pbStack_48[0x60] = 0;
    pbStack_48[0x61] = 0;
    pbStack_48[0x62] = 0;
    pbStack_48[99] = 0;
    pbStack_48[100] = 0;
    pbStack_48[0x65] = 0;
    pbStack_48[0x66] = 0;
    pbStack_48[0x67] = 0;
    pbStack_48[0x6c] = 1;
    pbStack_48[0x6d] = 0;
    pbStack_48[0x6e] = 0;
    pbStack_48[0x6f] = 0;
    pbStack_48[0x70] = 0;
    pbStack_48[0x71] = 0;
    pbStack_48[0x72] = 0;
    pbStack_48[0x73] = 0;
    *(undefined4 *)(pbStack_48 + 0x74) = uStack_100;
    *(undefined4 *)(pbStack_48 + 0x78) = uStack_fc;
    *(undefined4 *)(pbStack_48 + 0x7c) = uStack_f8;
    *(undefined4 *)(pbStack_48 + 0x80) = uStack_f4;
    *(undefined4 *)(pbStack_48 + 0x84) = uStack_f0;
    pbStack_48[0x88] = 0;
    pbStack_48[0x89] = 0;
    pbStack_48[0x8a] = 0;
    pbStack_48[0x8b] = 0xc0;
    pbStack_48[0x8c] = 0;
    pbStack_48[0x8d] = 0;
    pbStack_48[0x8e] = 0;
    pbStack_48[0x8f] = 0;
    pbStack_48[0x90] = 0;
    pbStack_48[0x91] = 0;
    pbStack_48[0x92] = 0;
    pbStack_48[0x93] = 0;
    pbStack_48[0x94] = 0;
    pbStack_48[0x95] = 0;
    pbStack_48[0x96] = 0;
    pbStack_48[0x97] = 0;
    pbStack_48[0x98] = 0;
    pbStack_48[0x99] = 0;
    pbStack_48[0x9a] = 0;
    pbStack_48[0x9b] = 0;
    pbStack_48[0x9c] = 2;
    pbStack_48[0x9d] = 1;
    uStack_100 = 1;
    uStack_fc = 0;
    uStack_f8 = SUB84(pbStack_48,0);
    uStack_f4 = (undefined4)((ulonglong)pbStack_48 >> 0x20);
    uStack_f0 = 1;
    uStack_ec = 0;
    pdb_14007ee60();
    pbVar10 = pub_1406abab0(0xa8,8);
    if (pbVar10 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0xa8);
    }
    pdb_14007ee60();
    pbVar6 = pub_1406abab0(0x10,1);
    uVar5 = _UNK_142f5c90b;
    uVar4 = _UNK_142f5c907;
    uVar3 = _UNK_142f5c903;
    if (pbVar6 == (byte *)0x0) {
      pbStack_48 = pbVar10;
      pdb_142dc7e2a(1,0x10);
      goto LAB_14047ce6c;
    }
    *(undefined4 *)pbVar6 = _UNK_142f5c8ff;
    *(undefined4 *)(pbVar6 + 4) = uVar3;
    *(undefined4 *)(pbVar6 + 8) = uVar4;
    *(undefined4 *)(pbVar6 + 0xc) = uVar5;
    pbVar10[0] = 2;
    pbVar10[1] = 0;
    pbVar10[2] = 0;
    pbVar10[3] = 0;
    pbVar10[4] = 0;
    pbVar10[5] = 0;
    pbVar10[6] = 0;
    pbVar10[7] = 0;
    pbVar10[8] = 0x10;
    pbVar10[9] = 0;
    pbVar10[10] = 0;
    pbVar10[0xb] = 0;
    pbVar10[0xc] = 0;
    pbVar10[0xd] = 0;
    pbVar10[0xe] = 0;
    pbVar10[0xf] = 0;
    *(byte **)(pbVar10 + 0x10) = pbVar6;
    pbVar10[0x18] = 0x10;
    pbVar10[0x19] = 0;
    pbVar10[0x1a] = 0;
    pbVar10[0x1b] = 0;
    pbVar10[0x1c] = 0;
    pbVar10[0x1d] = 0;
    pbVar10[0x1e] = 0;
    pbVar10[0x1f] = 0;
    goto code_r0x00014047c82a;
  case 3:
    pdb_14007ee60();
    pbStack_48 = pub_1406abab0(0x1e0,8);
    if (pbStack_48 == (byte *)0x0) {
code_r0x00014047cca8:
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x1e0);
    }
    pdb_14047b6a0(&pbStack_248);
    pdb_14047b2b0(&uStack_1a8,0);
    pdb_14047b2b0(&uStack_100,1000);
    goto code_r0x00014047c8c6;
  case 4:
    *param_3 = 1;
    pdb_14007ee60();
    pbStack_48 = pub_1406abab0(0xa0,8);
    if (pbStack_48 == (byte *)0x0) goto code_r0x00014047cc8a;
    pdb_14047b2b0(&uStack_100,1000);
    break;
  case 5:
    pdb_14007ee60();
    pbStack_48 = pub_1406abab0(0xa0,8);
    if (pbStack_48 == (byte *)0x0) goto code_r0x00014047cc8a;
    pdb_14047b0a0(&uStack_100);
    pbVar7 = pbStack_48;
    pub_142e32760(pbStack_48,&uStack_100,0xa0);
    uStack_100 = 1;
    uStack_fc = 0;
    uStack_f8 = SUB84(pbVar7,0);
    uStack_f4 = (undefined4)((ulonglong)pbVar7 >> 0x20);
    uStack_f0 = 1;
    uStack_ec = 0;
    pdb_14007ee60();
    pbVar10 = pub_1406abab0(0xa8,8);
    if (pbVar10 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0xa8);
    }
    pdb_14007ee60();
    pbVar6 = pub_1406abab0(0x22,1);
    uVar2 = _UNK_142f5c927;
    if (pbVar6 == (byte *)0x0) {
      pbStack_48 = pbVar10;
      pdb_142dc7e2a(1,0x22);
      goto LAB_14047ce6c;
    }
    *(undefined8 *)(pbVar6 + 0x10) = _UNK_142f5c91f;
    *(undefined8 *)(pbVar6 + 0x18) = uVar2;
    uVar5 = _UNK_142f5c91b;
    uVar4 = _UNK_142f5c917;
    uVar3 = _UNK_142f5c913;
    *(undefined4 *)pbVar6 = _UNK_142f5c90f;
    *(undefined4 *)(pbVar6 + 4) = uVar3;
    *(undefined4 *)(pbVar6 + 8) = uVar4;
    *(undefined4 *)(pbVar6 + 0xc) = uVar5;
    pbVar6[0x20] = 0x50;
    pbVar6[0x21] = 0x55;
    pbVar10[0] = 2;
    pbVar10[1] = 0;
    pbVar10[2] = 0;
    pbVar10[3] = 0;
    pbVar10[4] = 0;
    pbVar10[5] = 0;
    pbVar10[6] = 0;
    pbVar10[7] = 0;
    pbVar10[8] = 0x22;
    pbVar10[9] = 0;
    pbVar10[10] = 0;
    pbVar10[0xb] = 0;
    pbVar10[0xc] = 0;
    pbVar10[0xd] = 0;
    pbVar10[0xe] = 0;
    pbVar10[0xf] = 0;
    *(byte **)(pbVar10 + 0x10) = pbVar6;
    pbVar10[0x18] = 0x22;
    pbVar10[0x19] = 0;
    pbVar10[0x1a] = 0;
    pbVar10[0x1b] = 0;
    pbVar10[0x1c] = 0;
    pbVar10[0x1d] = 0;
    pbVar10[0x1e] = 0;
    pbVar10[0x1f] = 0;
code_r0x00014047c82a:
    pbStack_2e8 = (byte *)0x1;
    pbVar10[0x20] = 0;
    uStack_100 = 0x18;
    uStack_198 = (byte *)0x1;
    goto code_r0x00014047caa8;
  case 6:
    pdb_14007ee60();
    pbStack_48 = pub_1406abab0(0x1e0,8);
    if (pbStack_48 == (byte *)0x0) goto code_r0x00014047cca8;
    pdb_14047b4a0(&pbStack_248,0);
    pdb_14047b890(&uStack_1a8,1000);
    pdb_14047b0a0(&uStack_100);
code_r0x00014047c8c6:
    pbVar7 = pbStack_48;
    pub_142e32760(pbStack_48,&pbStack_248,0xa0);
    pub_142e32760(pbVar7 + 0xa0,&uStack_1a8,0xa0);
    pbVar6 = (byte *)pub_142e32760(pbVar7 + 0x140,&uStack_100,0xa0);
    uStack_198 = (byte *)0x3;
    goto LAB_14047caa0;
  case 7:
    pdb_14007ee60();
    pbStack_48 = pub_1406abab0(0xa0,8);
    if (pbStack_48 == (byte *)0x0) goto code_r0x00014047cc8a;
    pdb_14047acb0(&uStack_100,1000);
    break;
  case 8:
    pdb_14007ee60();
    pbStack_48 = pub_1406abab0(0xa0,8);
    if (pbStack_48 == (byte *)0x0) goto code_r0x00014047cc8a;
    pdb_14047acb0(&uStack_100,0);
    break;
  case 9:
    pdb_14007ee60();
    pbStack_48 = pub_1406abab0(800,8);
    if (pbStack_48 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,800);
    }
    pdb_14047acb0(auStack_388,0);
    pdb_14047b890(&pbStack_2e8,0);
    pdb_14047b0a0(&pbStack_248);
    pdb_14047b4a0(&uStack_1a8,1000);
    pdb_14047b6a0(&uStack_100);
    pbVar7 = pbStack_48;
    pub_142e32760(pbStack_48,auStack_388,0xa0);
    pub_142e32760(pbVar7 + 0xa0,&pbStack_2e8,0xa0);
    pub_142e32760(pbVar7 + 0x140,&pbStack_248,0xa0);
    pub_142e32760(pbVar7 + 0x1e0,&uStack_1a8,0xa0);
    pbVar6 = (byte *)pub_142e32760(pbVar7 + 0x280,&uStack_100,0xa0);
    uStack_198 = (byte *)0x5;
    goto LAB_14047caa0;
  case 10:
    pbStack_248 = (byte *)0x0;
    pbStack_240 = (byte *)0x8;
    pbStack_238 = (byte *)0x0;
    pdb_14007ee60();
    pbStack_48 = pub_1406abab0(0xa8,8);
    if (pbStack_48 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0xa8);
    }
    pdb_14047b4a0(&uStack_100,1000);
    uStack_1a8 = (byte *)0x1;
    uStack_1a0 = (byte *)0x1;
    uStack_198 = (byte *)0x14;
    uStack_190 = (byte *)0x8000000000000000;
    pdb_14007ee60();
    pbVar7 = (byte *)0x8;
    pbVar8 = pub_1406abab0(0x60,8);
    pbVar10 = pbStack_48;
    if (pbVar8 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x60);
    }
    *(undefined8 *)(pbVar8 + 0x50) = uStack_158;
    *(undefined8 *)(pbVar8 + 0x58) = uStack_150;
    *(undefined8 *)(pbVar8 + 0x40) = uStack_168;
    *(undefined8 *)(pbVar8 + 0x48) = uStack_160;
    *(undefined4 *)(pbVar8 + 0x30) = uStack_178;
    *(undefined4 *)(pbVar8 + 0x34) = uStack_174;
    *(undefined4 *)(pbVar8 + 0x38) = uStack_170;
    *(undefined4 *)(pbVar8 + 0x3c) = uStack_16c;
    *(undefined4 *)(pbVar8 + 0x20) = uStack_188;
    *(undefined4 *)(pbVar8 + 0x24) = uStack_184;
    *(undefined4 *)(pbVar8 + 0x28) = uStack_180;
    *(undefined4 *)(pbVar8 + 0x2c) = uStack_17c;
    *(undefined4 *)(pbVar8 + 0x10) = (undefined4)uStack_198;
    *(undefined4 *)(pbVar8 + 0x14) = uStack_198._4_4_;
    *(undefined4 *)(pbVar8 + 0x18) = (undefined4)uStack_190;
    *(undefined4 *)(pbVar8 + 0x1c) = uStack_190._4_4_;
    *(undefined4 *)pbVar8 = (undefined4)uStack_1a8;
    *(undefined4 *)(pbVar8 + 4) = uStack_1a8._4_4_;
    *(undefined4 *)(pbVar8 + 8) = (undefined4)uStack_1a0;
    *(undefined4 *)(pbVar8 + 0xc) = uStack_1a0._4_4_;
    pbVar6 = (byte *)pub_142e32760(pbStack_48,&uStack_100,0xa0);
    *(byte **)(pbVar10 + 0xa0) = pbVar8;
    uStack_100 = 0x18;
    pbStack_2e8 = (byte *)0x1;
    uStack_198 = (byte *)0x0;
    goto code_r0x00014047caa8;
  case 0xb:
    pdb_14007ee60();
    pbVar6 = pub_1406abab0(0xa0,8);
    if (pbVar6 == (byte *)0x0) goto code_r0x00014047cc8a;
    pbStack_48 = pbVar6;
    pdb_14007ee60();
    pbVar6 = pub_1406abab0(0xc,1);
    if (pbVar6 == (byte *)0x0) {
      pdb_142dc7e2a(1,0xc);
      goto LAB_14047ce6c;
    }
    pbVar6[0] = 0x53;
    pbVar6[1] = 0x33;
    pbVar6[2] = 0x20;
    pbVar6[3] = 0x54;
    pbVar6[4] = 0x72;
    pbVar6[5] = 0x69;
    pbVar6[6] = 0x6f;
    pbVar6[7] = 0x20;
    pbVar6[8] = 0x36;
    pbVar6[9] = 0x34;
    pbVar6[10] = 0x56;
    pbVar6[0xb] = 0x2b;
    pbStack_58 = pbVar6;
    pdb_140eacc10(&uStack_1a8);
    pdb_14007ee60();
    pbVar6 = pub_1406abab0(0xc,1);
    if (pbVar6 == (byte *)0x0) {
      pdb_142dc7e2a(1,0xc);
      goto LAB_14047ce6c;
    }
    pbVar6[0] = 0x4c;
    pbVar6[1] = 0x65;
    pbVar6[2] = 0x67;
    pbVar6[3] = 0x69;
    pbVar6[4] = 0x74;
    pbVar6[5] = 0x20;
    pbVar6[6] = 100;
    pbVar6[7] = 0x72;
    pbVar6[8] = 0x69;
    pbVar6[9] = 0x76;
    pbVar6[10] = 0x65;
    pbVar6[0xb] = 0x72;
    pdb_14007ee60();
    pbVar7 = pub_1406abab0(0x13,1);
    uVar2 = _UNK_142f5c83c;
    if (pbVar7 == (byte *)0x0) {
      pbStack_60 = pbVar6;
      pdb_142dc7e2a(1,0x13);
      goto LAB_14047ce6c;
    }
    *(undefined8 *)pbVar7 = _DAT_142f5c834;
    *(undefined8 *)(pbVar7 + 8) = uVar2;
    pbVar7[0xf] = 0x69;
    pbVar7[0x10] = 0x6e;
    pbVar7[0x11] = 0x66;
    pbVar7[0x12] = 0x6f;
    uStack_fc = SUB84(uStack_1a8,0);
    uStack_f8 = (undefined4)((ulonglong)uStack_1a8 >> 0x20);
    uStack_f4 = SUB84(uStack_1a0,0);
    uStack_f0 = (undefined4)((ulonglong)uStack_1a0 >> 0x20);
    pbStack_48[0] = 0;
    pbStack_48[1] = 0;
    pbStack_48[2] = 0;
    pbStack_48[3] = 0;
    pbStack_48[4] = 0;
    pbStack_48[5] = 0;
    pbStack_48[6] = 0;
    pbStack_48[7] = 0;
    pbStack_48[0x10] = 0xc;
    pbStack_48[0x11] = 0;
    pbStack_48[0x12] = 0;
    pbStack_48[0x13] = 0;
    pbStack_48[0x14] = 0;
    pbStack_48[0x15] = 0;
    pbStack_48[0x16] = 0;
    pbStack_48[0x17] = 0;
    *(byte **)(pbStack_48 + 0x18) = pbStack_58;
    pbStack_48[0x20] = 0xc;
    pbStack_48[0x21] = 0;
    pbStack_48[0x22] = 0;
    pbStack_48[0x23] = 0;
    pbStack_48[0x24] = 0;
    pbStack_48[0x25] = 0;
    pbStack_48[0x26] = 0;
    pbStack_48[0x27] = 0;
    pbStack_48[0x28] = 0xc;
    pbStack_48[0x29] = 0;
    pbStack_48[0x2a] = 0;
    pbStack_48[0x2b] = 0;
    pbStack_48[0x2c] = 0;
    pbStack_48[0x2d] = 0;
    pbStack_48[0x2e] = 0;
    pbStack_48[0x2f] = 0;
    *(byte **)(pbStack_48 + 0x30) = pbVar6;
    pbStack_48[0x38] = 0xc;
    pbStack_48[0x39] = 0;
    pbStack_48[0x3a] = 0;
    pbStack_48[0x3b] = 0;
    pbStack_48[0x3c] = 0;
    pbStack_48[0x3d] = 0;
    pbStack_48[0x3e] = 0;
    pbStack_48[0x3f] = 0;
    pbStack_48[0x40] = 0x13;
    pbStack_48[0x41] = 0;
    pbStack_48[0x42] = 0;
    pbStack_48[0x43] = 0;
    pbStack_48[0x44] = 0;
    pbStack_48[0x45] = 0;
    pbStack_48[0x46] = 0;
    pbStack_48[0x47] = 0;
    *(byte **)(pbStack_48 + 0x48) = pbVar7;
    pbStack_48[0x50] = 0x13;
    pbStack_48[0x51] = 0;
    pbStack_48[0x52] = 0;
    pbStack_48[0x53] = 0;
    pbStack_48[0x54] = 0;
    pbStack_48[0x55] = 0;
    pbStack_48[0x56] = 0;
    pbStack_48[0x57] = 0;
    *(undefined8 *)(pbStack_48 + 0x58) = _UNK_142f5c7f0;
    pbStack_48[0x60] = 0;
    pbStack_48[0x61] = 0;
    pbStack_48[0x62] = 0;
    pbStack_48[99] = 0;
    pbStack_48[100] = 0;
    pbStack_48[0x65] = 0;
    pbStack_48[0x66] = 0;
    pbStack_48[0x67] = 0;
    pbStack_48[0x68] = 0x66;
    pbStack_48[0x69] = 6;
    pbStack_48[0x6a] = 0;
    pbStack_48[0x6b] = 0;
    pbStack_48[0x6c] = 4;
    pbStack_48[0x6d] = 0;
    pbStack_48[0x6e] = 0;
    pbStack_48[0x6f] = 0;
    pbStack_48[0x70] = 0;
    pbStack_48[0x71] = 0;
    pbStack_48[0x72] = 0;
    pbStack_48[0x73] = 0;
    *(undefined4 *)(pbStack_48 + 0x74) = uStack_100;
    *(undefined4 *)(pbStack_48 + 0x78) = uStack_fc;
    *(undefined4 *)(pbStack_48 + 0x7c) = uStack_f8;
    *(undefined4 *)(pbStack_48 + 0x80) = uStack_f4;
    *(undefined4 *)(pbStack_48 + 0x84) = uStack_f0;
    pbVar6 = (byte *)0x200000000;
    pbStack_48[0x88] = 0;
    pbStack_48[0x89] = 0;
    pbStack_48[0x8a] = 0;
    pbStack_48[0x8b] = 0;
    pbStack_48[0x8c] = 2;
    pbStack_48[0x8d] = 0;
    pbStack_48[0x8e] = 0;
    pbStack_48[0x8f] = 0;
    pbStack_48[0x90] = 0;
    pbStack_48[0x91] = 0;
    pbStack_48[0x92] = 0;
    pbStack_48[0x93] = 0;
    pbStack_48[0x94] = 0;
    pbStack_48[0x95] = 0;
    pbStack_48[0x96] = 0;
    pbStack_48[0x97] = 0;
    goto code_r0x00014047c095;
  case 0xc:
    pdb_14007ee60();
    pbVar6 = pub_1406abab0(0xa0,8);
    if (pbVar6 == (byte *)0x0) goto code_r0x00014047cc8a;
    pbStack_48 = pbVar6;
    pdb_14007ee60();
    pbVar6 = pub_1406abab0(0xf,1);
    if (pbVar6 == (byte *)0x0) {
      pdb_142dc7e2a(1,0xf);
      goto LAB_14047ce6c;
    }
    pbVar6[7] = 0x6e;
    pbVar6[8] = 100;
    pbVar6[9] = 0x57;
    pbVar6[10] = 0x61;
    pbVar6[0xb] = 0x76;
    pbVar6[0xc] = 0x65;
    pbVar6[0xd] = 0x20;
    pbVar6[0xe] = 0x35;
    pbVar6[0] = 0x51;
    pbVar6[1] = 0x45;
    pbVar6[2] = 0x4d;
    pbVar6[3] = 0x55;
    pbVar6[4] = 0x20;
    pbVar6[5] = 0x48;
    pbVar6[6] = 0x61;
    pbVar6[7] = 0x6e;
    pbStack_58 = pbVar6;
    pdb_140eacc10(&uStack_1a8);
    pdb_14007ee60();
    pbVar6 = pub_1406abab0(0xc,1);
    if (pbVar6 == (byte *)0x0) {
      pdb_142dc7e2a(1,0xc);
      goto LAB_14047ce6c;
    }
    pbVar6[0] = 0x4c;
    pbVar6[1] = 0x65;
    pbVar6[2] = 0x67;
    pbVar6[3] = 0x69;
    pbVar6[4] = 0x74;
    pbVar6[5] = 0x20;
    pbVar6[6] = 100;
    pbVar6[7] = 0x72;
    pbVar6[8] = 0x69;
    pbVar6[9] = 0x76;
    pbVar6[10] = 0x65;
    pbVar6[0xb] = 0x72;
    pdb_14007ee60();
    pbVar7 = pub_1406abab0(0x13,1);
    uVar2 = _UNK_142f5c83c;
    if (pbVar7 == (byte *)0x0) {
      pbStack_60 = pbVar6;
      pdb_142dc7e2a(1,0x13);
      goto LAB_14047ce6c;
    }
    *(undefined8 *)pbVar7 = _DAT_142f5c834;
    *(undefined8 *)(pbVar7 + 8) = uVar2;
    pbVar7[0xf] = 0x69;
    pbVar7[0x10] = 0x6e;
    pbVar7[0x11] = 0x66;
    pbVar7[0x12] = 0x6f;
    uStack_fc = SUB84(uStack_1a8,0);
    uStack_f8 = (undefined4)((ulonglong)uStack_1a8 >> 0x20);
    uStack_f4 = SUB84(uStack_1a0,0);
    uStack_f0 = (undefined4)((ulonglong)uStack_1a0 >> 0x20);
    pbStack_48[0] = 0;
    pbStack_48[1] = 0;
    pbStack_48[2] = 0;
    pbStack_48[3] = 0;
    pbStack_48[4] = 0;
    pbStack_48[5] = 0;
    pbStack_48[6] = 0;
    pbStack_48[7] = 0;
    pbStack_48[0x10] = 0xf;
    pbStack_48[0x11] = 0;
    pbStack_48[0x12] = 0;
    pbStack_48[0x13] = 0;
    pbStack_48[0x14] = 0;
    pbStack_48[0x15] = 0;
    pbStack_48[0x16] = 0;
    pbStack_48[0x17] = 0;
    *(byte **)(pbStack_48 + 0x18) = pbStack_58;
    pbStack_48[0x20] = 0xf;
    pbStack_48[0x21] = 0;
    pbStack_48[0x22] = 0;
    pbStack_48[0x23] = 0;
    pbStack_48[0x24] = 0;
    pbStack_48[0x25] = 0;
    pbStack_48[0x26] = 0;
    pbStack_48[0x27] = 0;
    pbStack_48[0x28] = 0xc;
    pbStack_48[0x29] = 0;
    pbStack_48[0x2a] = 0;
    pbStack_48[0x2b] = 0;
    pbStack_48[0x2c] = 0;
    pbStack_48[0x2d] = 0;
    pbStack_48[0x2e] = 0;
    pbStack_48[0x2f] = 0;
    *(byte **)(pbStack_48 + 0x30) = pbVar6;
    pbStack_48[0x38] = 0xc;
    pbStack_48[0x39] = 0;
    pbStack_48[0x3a] = 0;
    pbStack_48[0x3b] = 0;
    pbStack_48[0x3c] = 0;
    pbStack_48[0x3d] = 0;
    pbStack_48[0x3e] = 0;
    pbStack_48[0x3f] = 0;
    pbStack_48[0x40] = 0x13;
    pbStack_48[0x41] = 0;
    pbStack_48[0x42] = 0;
    pbStack_48[0x43] = 0;
    pbStack_48[0x44] = 0;
    pbStack_48[0x45] = 0;
    pbStack_48[0x46] = 0;
    pbStack_48[0x47] = 0;
    *(byte **)(pbStack_48 + 0x48) = pbVar7;
    pbStack_48[0x50] = 0x13;
    pbStack_48[0x51] = 0;
    pbStack_48[0x52] = 0;
    pbStack_48[0x53] = 0;
    pbStack_48[0x54] = 0;
    pbStack_48[0x55] = 0;
    pbStack_48[0x56] = 0;
    pbStack_48[0x57] = 0;
    *(undefined8 *)(pbStack_48 + 0x58) = _UNK_142f5c7f0;
    pbStack_48[0x60] = 0;
    pbStack_48[0x61] = 0;
    pbStack_48[0x62] = 0;
    pbStack_48[99] = 0;
    pbStack_48[100] = 0;
    pbStack_48[0x65] = 0;
    pbStack_48[0x66] = 0;
    pbStack_48[0x67] = 0;
    pbStack_48[0x68] = 0x77;
    pbStack_48[0x69] = 7;
    pbStack_48[0x6a] = 0;
    pbStack_48[0x6b] = 0;
    pbStack_48[0x6c] = 0x15;
    pbStack_48[0x6d] = 0;
    pbStack_48[0x6e] = 0;
    pbStack_48[0x6f] = 0;
    pbStack_48[0x70] = 0;
    pbStack_48[0x71] = 0;
    pbStack_48[0x72] = 0;
    pbStack_48[0x73] = 0;
    *(undefined4 *)(pbStack_48 + 0x74) = uStack_100;
    *(undefined4 *)(pbStack_48 + 0x78) = uStack_fc;
    *(undefined4 *)(pbStack_48 + 0x7c) = uStack_f8;
    *(undefined4 *)(pbStack_48 + 0x80) = uStack_f4;
    *(undefined4 *)(pbStack_48 + 0x84) = uStack_f0;
    pbVar6 = (byte *)0x100000000;
    pbStack_48[0x88] = 0;
    pbStack_48[0x89] = 0;
    pbStack_48[0x8a] = 0;
    pbStack_48[0x8b] = 0;
    pbStack_48[0x8c] = 1;
    pbStack_48[0x8d] = 0;
    pbStack_48[0x8e] = 0;
    pbStack_48[0x8f] = 0;
    pbStack_48[0x90] = 0;
    pbStack_48[0x91] = 0;
    pbStack_48[0x92] = 0;
    pbStack_48[0x93] = 0;
    pbStack_48[0x94] = 0;
    pbStack_48[0x95] = 0;
    pbStack_48[0x96] = 0;
    pbStack_48[0x97] = 0;
    pbStack_48[0x98] = 0;
    pbStack_48[0x99] = 0;
    pbStack_48[0x9a] = 0;
    pbStack_48[0x9b] = 0;
    pbStack_48[0x9c] = 2;
    pbStack_48[0x9d] = 2;
    goto code_r0x00014047c291;
  case 0xd:
    pdb_14007ee60();
    pbStack_48 = pub_1406abab0(0xa0,8);
    if (pbStack_48 == (byte *)0x0) goto code_r0x00014047cc8a;
    pdb_14047b6a0(&uStack_100);
    break;
  case 0xe:
    pdb_14007ee60();
    pbStack_48 = pub_1406abab0(0xa0,8);
    if (pbStack_48 == (byte *)0x0) goto code_r0x00014047cc8a;
    pdb_14047ba90(&uStack_100);
    break;
  case 0xf:
    pdb_14007ee60();
    pbStack_48 = pub_1406abab0(0x140,8);
    if (pbStack_48 == (byte *)0x0) goto LAB_14047cc99;
    pdb_14047b4a0(&uStack_1a8,0);
    pdb_14047ba90(&uStack_100);
    goto code_r0x00014047c701;
  case 0x10:
    pdb_14007ee60();
    pbVar6 = pub_1406abab0(0xa0,8);
    if (pbVar6 == (byte *)0x0) goto code_r0x00014047cc8a;
    pbStack_48 = pbVar6;
    pdb_14007ee60();
    pbVar6 = pub_1406abab0(0x17,1);
    uVar5 = _UNK_142f5c8db;
    uVar4 = _UNK_142f5c8d7;
    uVar3 = _UNK_142f5c8d3;
    if (pbVar6 == (byte *)0x0) {
      pdb_142dc7e2a(1,0x17);
      goto LAB_14047ce6c;
    }
    *(undefined4 *)pbVar6 = _UNK_142f5c8cf;
    *(undefined4 *)(pbVar6 + 4) = uVar3;
    *(undefined4 *)(pbVar6 + 8) = uVar4;
    *(undefined4 *)(pbVar6 + 0xc) = uVar5;
    pbVar6[0xf] = 0x52;
    pbVar6[0x10] = 0x54;
    pbVar6[0x11] = 0x58;
    pbVar6[0x12] = 0x20;
    pbVar6[0x13] = 0x35;
    pbVar6[0x14] = 0x30;
    pbVar6[0x15] = 0x37;
    pbVar6[0x16] = 0x30;
    pbStack_58 = pbVar6;
    pdb_140eacc10(&uStack_1a8);
    pdb_14007ee60();
    pbVar6 = pub_1406abab0(6,1);
    if (pbVar6 == (byte *)0x0) {
      pdb_142dc7e2a(1,6);
      goto LAB_14047ce6c;
    }
    pbVar6[4] = 0x49;
    pbVar6[5] = 0x41;
    pbVar6[0] = 0x4e;
    pbVar6[1] = 0x56;
    pbVar6[2] = 0x49;
    pbVar6[3] = 0x44;
    pdb_14007ee60();
    pbVar7 = pub_1406abab0(6,1);
    if (pbVar7 == (byte *)0x0) {
      pbStack_60 = pbVar6;
      pdb_142dc7e2a(1,6);
      goto LAB_14047ce6c;
    }
    pbVar7[4] = 0x38;
    pbVar7[5] = 0x38;
    pbVar7[0] = 0x35;
    pbVar7[1] = 0x38;
    pbVar7[2] = 0x30;
    pbVar7[3] = 0x2e;
    uStack_fc = SUB84(uStack_1a8,0);
    uStack_f8 = (undefined4)((ulonglong)uStack_1a8 >> 0x20);
    uStack_f4 = SUB84(uStack_1a0,0);
    uStack_f0 = (undefined4)((ulonglong)uStack_1a0 >> 0x20);
    pbStack_48[0] = 0;
    pbStack_48[1] = 0;
    pbStack_48[2] = 0;
    pbStack_48[3] = 0;
    pbStack_48[4] = 0;
    pbStack_48[5] = 0;
    pbStack_48[6] = 0;
    pbStack_48[7] = 0;
    pbStack_48[0x10] = 0x17;
    pbStack_48[0x11] = 0;
    pbStack_48[0x12] = 0;
    pbStack_48[0x13] = 0;
    pbStack_48[0x14] = 0;
    pbStack_48[0x15] = 0;
    pbStack_48[0x16] = 0;
    pbStack_48[0x17] = 0;
    *(byte **)(pbStack_48 + 0x18) = pbStack_58;
    pbStack_48[0x20] = 0x17;
    pbStack_48[0x21] = 0;
    pbStack_48[0x22] = 0;
    pbStack_48[0x23] = 0;
    pbStack_48[0x24] = 0;
    pbStack_48[0x25] = 0;
    pbStack_48[0x26] = 0;
    pbStack_48[0x27] = 0;
    pbStack_48[0x28] = 6;
    pbStack_48[0x29] = 0;
    pbStack_48[0x2a] = 0;
    pbStack_48[0x2b] = 0;
    pbStack_48[0x2c] = 0;
    pbStack_48[0x2d] = 0;
    pbStack_48[0x2e] = 0;
    pbStack_48[0x2f] = 0;
    *(byte **)(pbStack_48 + 0x30) = pbVar6;
    pbStack_48[0x38] = 6;
    pbStack_48[0x39] = 0;
    pbStack_48[0x3a] = 0;
    pbStack_48[0x3b] = 0;
    pbStack_48[0x3c] = 0;
    pbStack_48[0x3d] = 0;
    pbStack_48[0x3e] = 0;
    pbStack_48[0x3f] = 0;
    pbStack_48[0x40] = 6;
    pbStack_48[0x41] = 0;
    pbStack_48[0x42] = 0;
    pbStack_48[0x43] = 0;
    pbStack_48[0x44] = 0;
    pbStack_48[0x45] = 0;
    pbStack_48[0x46] = 0;
    pbStack_48[0x47] = 0;
    *(byte **)(pbStack_48 + 0x48) = pbVar7;
    pbStack_48[0x50] = 6;
    uVar2 = _UNK_142f5c7e8;
    pbStack_48[0x51] = 0;
    pbStack_48[0x52] = 0;
    pbStack_48[0x53] = 0;
    pbStack_48[0x54] = 0;
    pbStack_48[0x55] = 0;
    pbStack_48[0x56] = 0;
    pbStack_48[0x57] = 0;
    *(undefined8 *)(pbStack_48 + 0x58) = _UNK_142f5c7e0;
    *(undefined8 *)(pbStack_48 + 0x60) = uVar2;
    pbStack_48[0x68] = 0;
    pbStack_48[0x69] = 0;
    pbStack_48[0x6a] = 0;
    pbStack_48[0x6b] = 0;
    pbStack_48[0x6c] = 4;
    pbStack_48[0x6d] = 0;
    pbStack_48[0x6e] = 0;
    pbStack_48[0x6f] = 0;
    pbStack_48[0x70] = 0;
    pbStack_48[0x71] = 0;
    pbStack_48[0x72] = 0x16;
    pbStack_48[0x73] = 0x91;
    *(undefined4 *)(pbStack_48 + 0x74) = uStack_100;
    *(undefined4 *)(pbStack_48 + 0x78) = uStack_fc;
    *(undefined4 *)(pbStack_48 + 0x7c) = uStack_f8;
    *(undefined4 *)(pbStack_48 + 0x80) = uStack_f4;
    *(undefined4 *)(pbStack_48 + 0x84) = uStack_f0;
    pbStack_48[0x88] = 0;
    pbStack_48[0x89] = 0;
    pbStack_48[0x8a] = 0xe0;
    pbStack_48[0x8b] = 0xe4;
    pbStack_48[0x8c] = 2;
    pbStack_48[0x8d] = 0;
    pbStack_48[0x8e] = 0;
    pbStack_48[0x8f] = 0;
    pbVar6 = (byte *)0x3e2bad000;
    pbStack_48[0x90] = 0;
    pbStack_48[0x91] = 0xd0;
    pbStack_48[0x92] = 0xba;
    pbStack_48[0x93] = 0xe2;
    pbStack_48[0x94] = 3;
    pbStack_48[0x95] = 0;
    pbStack_48[0x96] = 0;
    pbStack_48[0x97] = 0;
code_r0x00014047c095:
    pbStack_48[0x98] = 0;
    pbStack_48[0x99] = 0;
    pbStack_48[0x9a] = 0;
    pbStack_48[0x9b] = 0;
    pbStack_48[0x9c] = 2;
    pbStack_48[0x9d] = 0;
code_r0x00014047c291:
    uStack_198 = (byte *)0x1;
    pbVar7 = pbStack_48;
    goto LAB_14047caa0;
  default:
    pdb_14007ee60();
    pbStack_48 = pub_1406abab0(0x140,8);
    if (pbStack_48 == (byte *)0x0) goto LAB_14047cc99;
    pdb_14047b6a0(&uStack_1a8);
    pdb_14047aea0(&uStack_100,0);
code_r0x00014047c701:
    pbVar7 = pbStack_48;
    pub_142e32760(pbStack_48,&uStack_1a8,0xa0);
    pbVar6 = (byte *)pub_142e32760(pbVar7 + 0xa0,&uStack_100,0xa0);
    uStack_198 = (byte *)0x2;
    goto LAB_14047caa0;
  }
  pbVar7 = pbStack_48;
  pbVar6 = (byte *)pub_142e32760(pbStack_48,&uStack_100,0xa0);
  uStack_198 = (byte *)0x1;
LAB_14047caa0:
  uStack_100 = 0x18;
  pbVar10 = (byte *)0x8;
  pbStack_2e8 = (byte *)0x0;
code_r0x00014047caa8:
  uStack_fc = 0;
  uStack_f8 = 0x19;
  uStack_f4 = 0;
  uStack_f0 = SUB84(pbVar6,0);
  uStack_ec = (undefined4)((ulonglong)pbVar6 >> 0x20);
  uStack_e8 = 0x19;
  uStack_190 = pbVar7 + (uint)((int)uStack_198 * 0xa0);
  uStack_49 = 1;
  pbStack_2e0 = pbVar10;
  pbStack_2d8 = pbStack_2e8;
  uStack_1a8 = pbVar7;
  uStack_1a0 = pbVar7;
  pdb_140172170(&pbStack_248,&uStack_1a8);
  pbVar6 = pbStack_238;
  uStack_1a8 = pbStack_248;
  uStack_1a0 = pbStack_240;
  uStack_198 = pbStack_238;
  pbVar7 = pbStack_240;
  if (pbStack_238 < pbStack_248) {
    if (pbStack_238 == (byte *)0x0) {
      pub_1406abac0(pbStack_240,(longlong)pbStack_248 * 0xa0,8);
      pbVar7 = (byte *)0x8;
    }
    else {
      uVar9 = (longlong)pbStack_238 * 0xa0;
      pbVar7 = pub_1406abad0(pbStack_240,(longlong)pbStack_248 * 0xa0,8,uVar9);
      if (pbVar7 == (byte *)0x0) {
        pdb_142dc7e2a(8,uVar9);
        goto LAB_14047ce6c;
      }
    }
  }
  pbVar10 = pbStack_2d8;
  uStack_1a8 = pbStack_2e8;
  uStack_1a0 = pbStack_2e0;
  uStack_198 = pbStack_2d8;
  pbVar8 = pbStack_2e0;
  if (pbStack_2d8 < pbStack_2e8) {
    if (pbStack_2d8 == (byte *)0x0) {
      pub_1406abac0(pbStack_2e0,(longlong)pbStack_2e8 * 0xa8,8);
      pbVar8 = (byte *)0x8;
    }
    else {
      uVar9 = (longlong)pbStack_2d8 * 0xa8;
      pbVar8 = pub_1406abad0(pbStack_2e0,(longlong)pbStack_2e8 * 0xa8,8,uVar9);
      if (pbVar8 == (byte *)0x0) {
        pbStack_48 = pbVar6;
        pbStack_58 = pbVar7;
        pdb_142dc7e2a(8,uVar9);
LAB_14047ce6c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
  }
  param_1[0xc] = uStack_c0;
  param_1[0xd] = uStack_b8;
  param_1[10] = uStack_d0;
  param_1[0xb] = uStack_c8;
  param_1[8] = uStack_e0;
  param_1[9] = uStack_d8;
  param_1[6] = CONCAT44(uStack_ec,uStack_f0);
  param_1[7] = uStack_e8;
  param_1[4] = CONCAT44(uStack_fc,uStack_100);
  param_1[5] = CONCAT44(uStack_f4,uStack_f8);
  *param_1 = pbVar7;
  param_1[1] = pbVar6;
  param_1[2] = pbVar8;
  param_1[3] = pbVar10;
  return param_1;
}

