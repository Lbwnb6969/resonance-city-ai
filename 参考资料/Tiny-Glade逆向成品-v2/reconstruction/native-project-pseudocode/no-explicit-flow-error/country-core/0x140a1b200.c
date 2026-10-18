// VA 0x140a1b200, PDB extent 14681 bytes
// country_core::game_key_bindings::impl$7::from
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_key_bindings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::game_key_bindings::impl$7::from
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_key_bindings.rs
   Extent: 14681 */

undefined8 * pdb_140a1b200(undefined8 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  byte *pbVar4;
  undefined8 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulonglong uVar8;
  longlong lStack_758;
  byte *pbStack_750;
  longlong lStack_740;
  byte *pbStack_738;
  longlong lStack_728;
  byte *pbStack_720;
  longlong lStack_710;
  byte *pbStack_708;
  longlong lStack_6f8;
  byte *pbStack_6f0;
  longlong lStack_6e0;
  byte *pbStack_6d8;
  longlong lStack_6c8;
  byte *pbStack_6c0;
  longlong lStack_6b0;
  byte *pbStack_6a8;
  longlong lStack_698;
  byte *pbStack_690;
  longlong lStack_680;
  byte *pbStack_678;
  longlong lStack_668;
  byte *pbStack_660;
  longlong lStack_650;
  byte *pbStack_648;
  longlong lStack_638;
  byte *pbStack_630;
  longlong lStack_620;
  byte *pbStack_618;
  longlong lStack_608;
  byte *pbStack_600;
  longlong lStack_5f0;
  byte *pbStack_5e8;
  longlong lStack_5d8;
  byte *pbStack_5d0;
  longlong lStack_5c0;
  byte *pbStack_5b8;
  longlong lStack_5a8;
  byte *pbStack_5a0;
  longlong lStack_590;
  byte *pbStack_588;
  longlong lStack_578;
  byte *pbStack_570;
  longlong lStack_560;
  byte *pbStack_558;
  longlong lStack_548;
  byte *pbStack_540;
  longlong lStack_530;
  byte *pbStack_528;
  longlong lStack_518;
  byte *pbStack_510;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  longlong lStack_4e8;
  byte *pbStack_4e0;
  longlong lStack_4d0;
  byte *pbStack_4c8;
  longlong lStack_4b8;
  byte *pbStack_4b0;
  longlong lStack_4a0;
  byte *pbStack_498;
  longlong lStack_488;
  byte *pbStack_480;
  longlong lStack_470;
  byte *pbStack_468;
  longlong lStack_458;
  byte *pbStack_450;
  longlong lStack_440;
  byte *pbStack_438;
  longlong lStack_428;
  byte *pbStack_420;
  longlong lStack_410;
  byte *pbStack_408;
  longlong lStack_3f8;
  byte *pbStack_3f0;
  longlong lStack_3e0;
  byte *pbStack_3d8;
  longlong lStack_3c8;
  byte *pbStack_3c0;
  longlong lStack_3b0;
  byte *pbStack_3a8;
  longlong lStack_398;
  byte *pbStack_390;
  undefined8 uStack_380;
  int iStack_378;
  undefined4 uStack_374;
  int iStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  byte *pbStack_350;
  byte *pbStack_348;
  byte *pbStack_340;
  byte *pbStack_338;
  byte *pbStack_330;
  byte *pbStack_328;
  byte *pbStack_320;
  undefined8 uStack_318;
  byte *pbStack_310;
  byte *pbStack_308;
  byte *pbStack_300;
  byte *pbStack_2f8;
  byte *pbStack_2f0;
  byte *pbStack_2e8;
  byte *pbStack_2e0;
  byte *pbStack_2d8;
  byte *pbStack_2d0;
  byte *pbStack_2c8;
  byte *pbStack_2c0;
  byte *pbStack_2b8;
  byte *pbStack_2b0;
  undefined8 uStack_2a8;
  byte *pbStack_2a0;
  byte *pbStack_298;
  byte *pbStack_290;
  byte *pbStack_288;
  byte *pbStack_280;
  byte *pbStack_278;
  byte *pbStack_270;
  byte *pbStack_268;
  byte *pbStack_260;
  byte *pbStack_258;
  int iStack_24c;
  byte *pbStack_248;
  byte *pbStack_240;
  byte *pbStack_238;
  byte *pbStack_230;
  byte *pbStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  byte *pbStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  byte *pbStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  byte *pbStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
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
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  iVar1 = param_2[0x54];
  pbVar7 = (byte *)0x4;
  if (iVar1 != 0xc3) {
    uVar5 = *(undefined8 *)(param_2 + 0x55);
    pdb_14007ee60();
    pbVar4 = pub_1406abab0(0xc,4);
    if (pbVar4 != (byte *)0x0) {
      *(int *)pbVar4 = iVar1;
      *(undefined8 *)(pbVar4 + 4) = uVar5;
      uVar8 = (ulonglong)(iVar1 != 0x49);
      uStack_f8 = 1;
      goto LAB_140a1b29d;
    }
    pdb_142dc7e2a(4,0xc);
LAB_140a1ce16:
    uStack_49 = 1;
    pdb_142dc7e2a(4,0xc);
    goto LAB_140a1d198;
  }
  uStack_f8 = 0;
  pbVar4 = (byte *)0x4;
  uVar8 = 0;
LAB_140a1b29d:
  iStack_f0 = *param_2;
  pbStack_228 = pbVar4;
  iStack_6c = iVar1;
  if (iStack_f0 == 0xc3) {
    uStack_220 = 0;
  }
  else {
    pdb_14007ee60();
    pbVar7 = pub_1406abab0(0xc,4);
    if (pbVar7 == (byte *)0x0) goto LAB_140a1ce16;
    uVar5 = *(undefined8 *)(param_2 + 1);
    *(int *)pbVar7 = iStack_f0;
    *(undefined8 *)(pbVar7 + 4) = uVar5;
    uStack_220 = 1;
  }
  iStack_ec = param_2[3];
  pbStack_230 = pbVar7;
  if (iStack_ec == 0xc3) {
    uStack_218 = 0;
    pbVar7 = (byte *)0x4;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 4);
    pdb_14007ee60();
    pbVar7 = pub_1406abab0(0xc,4);
    if (pbVar7 == (byte *)0x0) {
      uStack_4a = 1;
      pdb_142dc7e2a(4,0xc);
      goto LAB_140a1d198;
    }
    *(int *)pbVar7 = iStack_ec;
    *(undefined8 *)(pbVar7 + 4) = uVar5;
    uStack_218 = 1;
  }
  pbVar4 = (byte *)0x4;
  iStack_e8 = param_2[6];
  pbStack_350 = pbVar7;
  if (iStack_e8 == 0xc3) {
    uStack_210 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 7);
    pdb_14007ee60();
    pbVar4 = pub_1406abab0(0xc,4);
    if (pbVar4 == (byte *)0x0) {
      uStack_4b = 1;
      pdb_142dc7e2a(4,0xc);
      goto LAB_140a1d198;
    }
    *(int *)pbVar4 = iStack_e8;
    *(undefined8 *)(pbVar4 + 4) = uVar5;
    uStack_210 = 1;
  }
  iStack_e4 = param_2[9];
  pbStack_348 = pbVar4;
  if (iStack_e4 == 0xc3) {
    uStack_208 = 0;
    pbVar7 = (byte *)0x4;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 10);
    pdb_14007ee60();
    pbVar7 = pub_1406abab0(0xc,4);
    if (pbVar7 == (byte *)0x0) {
      uStack_4c = 1;
      pdb_142dc7e2a(4,0xc);
      goto LAB_140a1d198;
    }
    *(int *)pbVar7 = iStack_e4;
    *(undefined8 *)(pbVar7 + 4) = uVar5;
    uStack_208 = 1;
  }
  pbVar4 = (byte *)0x4;
  iStack_e0 = param_2[0xc];
  pbStack_340 = pbVar7;
  if (iStack_e0 == 0xc3) {
    uStack_200 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0xd);
    pdb_14007ee60();
    pbVar4 = pub_1406abab0(0xc,4);
    if (pbVar4 == (byte *)0x0) {
      uStack_4d = 1;
      pdb_142dc7e2a(4,0xc);
      goto LAB_140a1d198;
    }
    *(int *)pbVar4 = iStack_e0;
    *(undefined8 *)(pbVar4 + 4) = uVar5;
    uStack_200 = 1;
  }
  iStack_dc = param_2[0xf];
  pbVar7 = (byte *)0x4;
  pbStack_248 = (byte *)0x4;
  pbStack_338 = pbVar4;
  if (iStack_dc == 0xc3) {
    uStack_1f8 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x10);
    pdb_14007ee60();
    pbVar7 = pub_1406abab0(0xc,4);
    if (pbVar7 == (byte *)0x0) {
      uStack_4e = 1;
      pdb_142dc7e2a(4,0xc);
      goto LAB_140a1d198;
    }
    *(int *)pbVar7 = iStack_dc;
    *(undefined8 *)(pbVar7 + 4) = uVar5;
    uStack_1f8 = 1;
  }
  iStack_d8 = param_2[0x12];
  pbStack_330 = pbVar7;
  if (iStack_d8 == 0xc3) {
    uStack_1f0 = 0;
    iStack_d4 = param_2[0x15];
    if (iStack_d4 != 0xc3) goto LAB_140a1b5ab;
LAB_140a1b53f:
    pbStack_1e8 = (byte *)0x4;
    uStack_1e0 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x13);
    pdb_14007ee60();
    pbVar7 = pub_1406abab0(0xc,4);
    if (pbVar7 == (byte *)0x0) {
      uStack_4f = 1;
      pdb_142dc7e2a(4,0xc);
      goto LAB_140a1d198;
    }
    *(int *)pbVar7 = iStack_d8;
    *(undefined8 *)(pbVar7 + 4) = uVar5;
    uStack_1f0 = 1;
    iStack_d4 = param_2[0x15];
    pbStack_248 = pbVar7;
    if (iStack_d4 == 0xc3) goto LAB_140a1b53f;
LAB_140a1b5ab:
    uVar5 = *(undefined8 *)(param_2 + 0x16);
    pdb_14007ee60();
    pbVar7 = pub_1406abab0(0xc,4);
    if (pbVar7 == (byte *)0x0) {
      uStack_50 = 1;
      pdb_142dc7e2a(4,0xc);
      goto LAB_140a1d198;
    }
    *(int *)pbVar7 = iStack_d4;
    *(undefined8 *)(pbVar7 + 4) = uVar5;
    uStack_1e0 = 1;
    pbStack_1e8 = pbVar7;
  }
  pdb_14007ee60();
  pbStack_328 = pub_1406abab0(0xc,4);
  if (pbStack_328 == (byte *)0x0) {
    uStack_51 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(4,0xc);
  }
  pbStack_328[0] = 0xc3;
  pbStack_328[1] = 0;
  pbStack_328[2] = 0;
  pbStack_328[3] = 0;
  *(int *)(pbStack_328 + 4) = param_2[0x6f];
  pdb_14007ee60();
  pbVar7 = (byte *)0x4;
  pbStack_320 = pub_1406abab0(0xc,4);
  if (pbStack_320 == (byte *)0x0) {
    uStack_52 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(4,0xc);
  }
  pbStack_320[0] = 0xc3;
  pbStack_320[1] = 0;
  pbStack_320[2] = 0;
  pbStack_320[3] = 0;
  *(int *)(pbStack_320 + 4) = param_2[0x70];
  iStack_d0 = param_2[0x18];
  if (iStack_d0 == 0xc3) {
    uStack_1d8 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x19);
    pdb_14007ee60();
    pbVar7 = pub_1406abab0(0xc,4);
    if (pbVar7 == (byte *)0x0) {
      uStack_53 = 1;
      pdb_142dc7e2a(4,0xc);
      goto LAB_140a1d198;
    }
    *(int *)pbVar7 = iStack_d0;
    *(undefined8 *)(pbVar7 + 4) = uVar5;
    uStack_1d8 = 1;
  }
  iStack_cc = param_2[0x1b];
  pbStack_310 = pbVar7;
  if (iStack_cc == 0xc3) {
    uStack_1d0 = 0;
    pbVar7 = (byte *)0x4;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x1c);
    pdb_14007ee60();
    pbVar7 = pub_1406abab0(0xc,4);
    if (pbVar7 == (byte *)0x0) {
      uStack_54 = 1;
      pdb_142dc7e2a(4,0xc);
      goto LAB_140a1d198;
    }
    *(int *)pbVar7 = iStack_cc;
    *(undefined8 *)(pbVar7 + 4) = uVar5;
    uStack_1d0 = 1;
  }
  pbVar4 = (byte *)0x4;
  iStack_c8 = param_2[0x1e];
  pbStack_308 = pbVar7;
  if (iStack_c8 == 0xc3) {
    uStack_1c8 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x1f);
    pdb_14007ee60();
    pbVar4 = pub_1406abab0(0xc,4);
    if (pbVar4 == (byte *)0x0) {
      uStack_55 = 1;
      pdb_142dc7e2a(4,0xc);
      goto LAB_140a1d198;
    }
    *(int *)pbVar4 = iStack_c8;
    *(undefined8 *)(pbVar4 + 4) = uVar5;
    uStack_1c8 = 1;
  }
  iStack_c4 = param_2[0x21];
  pbStack_300 = pbVar4;
  if (iStack_c4 == 0xc3) {
    uStack_1c0 = 0;
    pbVar7 = (byte *)0x4;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x22);
    pdb_14007ee60();
    pbVar7 = pub_1406abab0(0xc,4);
    if (pbVar7 == (byte *)0x0) {
      uStack_56 = 1;
      pdb_142dc7e2a(4,0xc);
      goto LAB_140a1d198;
    }
    *(int *)pbVar7 = iStack_c4;
    *(undefined8 *)(pbVar7 + 4) = uVar5;
    uStack_1c0 = 1;
  }
  pbVar4 = (byte *)0x4;
  iStack_c0 = param_2[0x24];
  pbStack_2f8 = pbVar7;
  if (iStack_c0 == 0xc3) {
    uStack_1b8 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x25);
    pdb_14007ee60();
    pbVar4 = pub_1406abab0(0xc,4);
    if (pbVar4 == (byte *)0x0) {
      uStack_57 = 1;
      pdb_142dc7e2a(4,0xc);
      goto LAB_140a1d198;
    }
    *(int *)pbVar4 = iStack_c0;
    *(undefined8 *)(pbVar4 + 4) = uVar5;
    uStack_1b8 = 1;
  }
  iStack_bc = param_2[0x27];
  pbStack_2f0 = pbVar4;
  if (iStack_bc == 0xc3) {
    uStack_1b0 = 0;
    pbVar7 = (byte *)0x4;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x28);
    pdb_14007ee60();
    pbVar7 = pub_1406abab0(0xc,4);
    if (pbVar7 == (byte *)0x0) {
      uStack_58 = 1;
      pdb_142dc7e2a(4,0xc);
      goto LAB_140a1d198;
    }
    *(int *)pbVar7 = iStack_bc;
    *(undefined8 *)(pbVar7 + 4) = uVar5;
    uStack_1b0 = 1;
  }
  pbVar4 = (byte *)0x4;
  iStack_b8 = param_2[0x2a];
  pbStack_2e8 = pbVar7;
  if (iStack_b8 == 0xc3) {
    uStack_1a8 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x2b);
    pdb_14007ee60();
    pbVar4 = pub_1406abab0(0xc,4);
    if (pbVar4 == (byte *)0x0) {
      uStack_59 = 1;
      pdb_142dc7e2a(4,0xc);
      goto LAB_140a1d198;
    }
    *(int *)pbVar4 = iStack_b8;
    *(undefined8 *)(pbVar4 + 4) = uVar5;
    uStack_1a8 = 1;
  }
  iStack_b4 = param_2[0x2d];
  pbStack_2e0 = pbVar4;
  if (iStack_b4 == 0xc3) {
    uStack_1a0 = 0;
    pbVar7 = (byte *)0x4;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x2e);
    pdb_14007ee60();
    pbVar7 = pub_1406abab0(0xc,4);
    if (pbVar7 == (byte *)0x0) {
      uStack_5a = 1;
      pdb_142dc7e2a(4,0xc);
      goto LAB_140a1d198;
    }
    *(int *)pbVar7 = iStack_b4;
    *(undefined8 *)(pbVar7 + 4) = uVar5;
    uStack_1a0 = 1;
  }
  pbVar4 = (byte *)0x4;
  iStack_b0 = param_2[0x30];
  pbStack_2d8 = pbVar7;
  if (iStack_b0 == 0xc3) {
    uStack_198 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x31);
    pdb_14007ee60();
    pbVar4 = pub_1406abab0(0xc,4);
    if (pbVar4 == (byte *)0x0) {
      uStack_5b = 1;
      pdb_142dc7e2a(4,0xc);
      goto LAB_140a1d198;
    }
    *(int *)pbVar4 = iStack_b0;
    *(undefined8 *)(pbVar4 + 4) = uVar5;
    uStack_198 = 1;
  }
  iStack_ac = param_2[0x33];
  pbStack_2d0 = pbVar4;
  if (iStack_ac == 0xc3) {
    uStack_190 = 0;
    pbVar7 = (byte *)0x4;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x34);
    pdb_14007ee60();
    pbVar7 = pub_1406abab0(0xc,4);
    if (pbVar7 == (byte *)0x0) {
      uStack_5c = 1;
      pdb_142dc7e2a(4,0xc);
      goto LAB_140a1d198;
    }
    *(int *)pbVar7 = iStack_ac;
    *(undefined8 *)(pbVar7 + 4) = uVar5;
    uStack_190 = 1;
  }
  pbVar4 = (byte *)0x4;
  iStack_a8 = param_2[0x36];
  pbStack_2c8 = pbVar7;
  if (iStack_a8 == 0xc3) {
    uStack_188 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x37);
    pdb_14007ee60();
    pbVar4 = pub_1406abab0(0xc,4);
    if (pbVar4 == (byte *)0x0) {
      uStack_5d = 1;
      pdb_142dc7e2a(4,0xc);
      goto LAB_140a1d198;
    }
    *(int *)pbVar4 = iStack_a8;
    *(undefined8 *)(pbVar4 + 4) = uVar5;
    uStack_188 = 1;
  }
  iStack_a4 = param_2[0x39];
  pbStack_2c0 = pbVar4;
  if (iStack_a4 == 0xc3) {
    uStack_180 = 0;
    pbVar7 = (byte *)0x4;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x3a);
    pdb_14007ee60();
    pbVar7 = pub_1406abab0(0xc,4);
    if (pbVar7 == (byte *)0x0) {
      uStack_5e = 1;
      pdb_142dc7e2a(4,0xc);
      goto LAB_140a1d198;
    }
    *(int *)pbVar7 = iStack_a4;
    *(undefined8 *)(pbVar7 + 4) = uVar5;
    uStack_180 = 1;
  }
  pbVar4 = (byte *)0x4;
  iStack_a0 = param_2[0x3c];
  pbStack_2b8 = pbVar7;
  if (iStack_a0 == 0xc3) {
    uStack_178 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x3d);
    pdb_14007ee60();
    pbVar4 = pub_1406abab0(0xc,4);
    if (pbVar4 == (byte *)0x0) {
      uStack_5f = 1;
      pdb_142dc7e2a(4,0xc);
      goto LAB_140a1d198;
    }
    *(int *)pbVar4 = iStack_a0;
    *(undefined8 *)(pbVar4 + 4) = uVar5;
    uStack_178 = 1;
  }
  iStack_9c = param_2[0x3f];
  pbStack_240 = (byte *)0x4;
  pbStack_2b0 = pbVar4;
  if (iStack_9c == 0xc3) {
    uStack_168 = 0;
    pbStack_170 = (byte *)0x4;
    iStack_98 = param_2[0x42];
    if (iStack_98 != 0xc3) goto LAB_140a1bc66;
LAB_140a1bc00:
    uStack_160 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x40);
    pdb_14007ee60();
    pbVar7 = pub_1406abab0(0xc,4);
    if (pbVar7 == (byte *)0x0) {
      uStack_60 = 1;
      pdb_142dc7e2a(4,0xc);
      goto LAB_140a1d198;
    }
    *(int *)pbVar7 = iStack_9c;
    *(undefined8 *)(pbVar7 + 4) = uVar5;
    uStack_168 = 1;
    iStack_98 = param_2[0x42];
    pbStack_170 = pbVar7;
    if (iStack_98 == 0xc3) goto LAB_140a1bc00;
LAB_140a1bc66:
    uVar5 = *(undefined8 *)(param_2 + 0x43);
    pdb_14007ee60();
    pbVar7 = pub_1406abab0(0xc,4);
    if (pbVar7 == (byte *)0x0) {
      uStack_61 = 1;
      pdb_142dc7e2a(4,0xc);
      goto LAB_140a1d198;
    }
    *(int *)pbVar7 = iStack_98;
    *(undefined8 *)(pbVar7 + 4) = uVar5;
    uStack_160 = 1;
    pbStack_240 = pbVar7;
  }
  uStack_62 = 1;
  pdb_140a1f3f0(&lStack_758);
  uStack_318 = uStack_500;
  uStack_2a8 = uStack_4f8;
  iStack_378 = param_2[0x47];
  uStack_380 = *(undefined8 *)(param_2 + 0x45);
  uStack_374 = 0xc3;
  iStack_370 = param_2[0x71];
  uStack_63 = 1;
  pdb_1415ea790(&uStack_368,&uStack_380);
  iStack_94 = param_2[0x48];
  if (iStack_94 == 0xc3) {
    pbVar7 = (byte *)0x4;
    uStack_158 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x49);
    pdb_14007ee60();
    pbVar7 = pub_1406abab0(0xc,4);
    if (pbVar7 == (byte *)0x0) {
      uStack_64 = 1;
      pdb_142dc7e2a(4,0xc);
      goto LAB_140a1d198;
    }
    *(int *)pbVar7 = iStack_94;
    *(undefined8 *)(pbVar7 + 4) = uVar5;
    uStack_158 = 1;
  }
  pbVar4 = pbStack_230;
  pdb_14007ee60();
  pbVar6 = (byte *)0x4;
  pbStack_298 = pub_1406abab0(0x18,4);
  pbStack_2a0 = pbVar7;
  if (pbStack_298 == (byte *)0x0) {
    uStack_65 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(4,0x18);
  }
  pbStack_298[0] = 0x3f;
  pbStack_298[1] = 0;
  pbStack_298[2] = 0;
  pbStack_298[3] = 0;
  pbStack_298[0xc] = 0xc3;
  pbStack_298[0xd] = 0;
  pbStack_298[0xe] = 0;
  pbStack_298[0xf] = 0;
  pbStack_298[0x10] = 3;
  pbStack_298[0x11] = 0;
  iStack_90 = param_2[0x4b];
  if (iStack_90 == 0xc3) {
    uStack_150 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x4c);
    pdb_14007ee60();
    pbVar6 = pub_1406abab0(0xc,4);
    if (pbVar6 == (byte *)0x0) {
      uStack_66 = 1;
      pdb_142dc7e2a(4,0xc);
      goto LAB_140a1d198;
    }
    *(int *)pbVar6 = iStack_90;
    *(undefined8 *)(pbVar6 + 4) = uVar5;
    uStack_150 = 1;
  }
  iStack_8c = param_2[0x4e];
  pbStack_290 = pbVar6;
  if (iStack_8c == 0xc3) {
    uStack_148 = 0;
    pbVar7 = (byte *)0x4;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x4f);
    pdb_14007ee60();
    pbVar7 = pub_1406abab0(0xc,4);
    if (pbVar7 == (byte *)0x0) {
      uStack_67 = 1;
      pdb_142dc7e2a(4,0xc);
      goto LAB_140a1d198;
    }
    *(int *)pbVar7 = iStack_8c;
    *(undefined8 *)(pbVar7 + 4) = uVar5;
    uStack_148 = 1;
  }
  pbVar6 = (byte *)0x4;
  iStack_88 = param_2[0x51];
  pbStack_288 = pbVar7;
  if (iStack_88 == 0xc3) {
    uStack_140 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x52);
    pdb_14007ee60();
    pbVar6 = pub_1406abab0(0xc,4);
    if (pbVar6 == (byte *)0x0) {
      uStack_68 = 1;
      pdb_142dc7e2a(4,0xc);
      goto LAB_140a1d198;
    }
    *(int *)pbVar6 = iStack_88;
    *(undefined8 *)(pbVar6 + 4) = uVar5;
    uStack_140 = 1;
  }
  iStack_84 = param_2[0x57];
  pbStack_280 = pbVar6;
  if (iStack_84 == 0xc3) {
    uStack_138 = 0;
    pbVar7 = (byte *)0x4;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x58);
    pdb_14007ee60();
    pbVar7 = pub_1406abab0(0xc,4);
    if (pbVar7 == (byte *)0x0) {
      pdb_142dc7e2a(4,0xc);
      goto LAB_140a1d198;
    }
    *(int *)pbVar7 = iStack_84;
    *(undefined8 *)(pbVar7 + 4) = uVar5;
    uStack_138 = 1;
  }
  pbVar6 = (byte *)0x4;
  iStack_80 = param_2[0x5a];
  pbStack_278 = pbVar7;
  if (iStack_80 == 0xc3) {
    uStack_130 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x5b);
    pdb_14007ee60();
    pbVar6 = pub_1406abab0(0xc,4);
    if (pbVar6 == (byte *)0x0) {
      pdb_142dc7e2a(4,0xc);
      goto LAB_140a1d198;
    }
    *(int *)pbVar6 = iStack_80;
    *(undefined8 *)(pbVar6 + 4) = uVar5;
    uStack_130 = 1;
  }
  iStack_7c = param_2[0x5d];
  pbStack_238 = (byte *)0x4;
  pbStack_270 = pbVar6;
  if (iStack_7c == 0xc3) {
    uStack_128 = 0;
    pbVar7 = (byte *)0x4;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x5e);
    pdb_14007ee60();
    pbVar7 = pub_1406abab0(0xc,4);
    if (pbVar7 == (byte *)0x0) {
      pdb_142dc7e2a(4,0xc);
      goto LAB_140a1d198;
    }
    *(int *)pbVar7 = iStack_7c;
    *(undefined8 *)(pbVar7 + 4) = uVar5;
    uStack_128 = 1;
  }
  iStack_78 = param_2[0x60];
  pbStack_268 = pbVar7;
  if (iStack_78 == 0xc3) {
    uStack_120 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x61);
    pdb_14007ee60();
    pbVar7 = pub_1406abab0(0xc,4);
    if (pbVar7 == (byte *)0x0) {
      pdb_142dc7e2a(4,0xc);
      goto LAB_140a1d198;
    }
    *(int *)pbVar7 = iStack_78;
    *(undefined8 *)(pbVar7 + 4) = uVar5;
    uStack_120 = 1;
    pbStack_238 = pbVar7;
  }
  iStack_74 = param_2[99];
  if (iStack_74 == 0xc3) {
    uStack_118 = 0;
    pbVar7 = (byte *)0x4;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 100);
    pdb_14007ee60();
    pbVar7 = pub_1406abab0(0xc,4);
    if (pbVar7 == (byte *)0x0) {
      pdb_142dc7e2a(4,0xc);
      goto LAB_140a1d198;
    }
    *(int *)pbVar7 = iStack_74;
    *(undefined8 *)(pbVar7 + 4) = uVar5;
    uStack_118 = 1;
  }
  pbVar6 = (byte *)0x4;
  iStack_70 = param_2[0x66];
  pbStack_260 = pbVar7;
  if (iStack_70 == 0xc3) {
    uStack_110 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x67);
    pdb_14007ee60();
    pbVar6 = pub_1406abab0(0xc,4);
    if (pbVar6 == (byte *)0x0) {
      pdb_142dc7e2a(4,0xc);
      goto LAB_140a1d198;
    }
    *(int *)pbVar6 = iStack_70;
    *(undefined8 *)(pbVar6 + 4) = uVar5;
    uStack_110 = 1;
  }
  iVar1 = param_2[0x69];
  pbStack_258 = pbVar6;
  if (iVar1 == 0xc3) {
    uStack_100 = 0;
    pbStack_108 = (byte *)0x4;
    iVar2 = param_2[0x6c];
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x6a);
    pdb_14007ee60();
    pbVar7 = pub_1406abab0(0xc,4);
    if (pbVar7 == (byte *)0x0) {
      pdb_142dc7e2a(4,0xc);
      goto LAB_140a1d198;
    }
    *(int *)pbVar7 = iVar1;
    *(undefined8 *)(pbVar7 + 4) = uVar5;
    uStack_100 = 1;
    iVar2 = param_2[0x6c];
    pbStack_108 = pbVar7;
  }
  if (iVar2 == 0xc3) {
    pbVar7 = (byte *)0x4;
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x6d);
    iStack_24c = iVar1;
    pdb_14007ee60();
    pbVar7 = pub_1406abab0(0xc,4);
    if (pbVar7 == (byte *)0x0) {
      pdb_142dc7e2a(4,0xc);
LAB_140a1d198:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    *(int *)pbVar7 = iVar2;
    *(undefined8 *)(pbVar7 + 4) = uVar5;
    uVar5 = 1;
  }
  *param_1 = uStack_220;
  param_1[1] = pbVar4;
  param_1[2] = uStack_220;
  param_1[3] = uStack_218;
  param_1[4] = pbStack_350;
  param_1[5] = uStack_218;
  param_1[6] = uStack_210;
  param_1[7] = pbStack_348;
  param_1[8] = uStack_210;
  param_1[9] = uStack_208;
  param_1[10] = pbStack_340;
  param_1[0xb] = uStack_208;
  param_1[0xc] = uStack_200;
  param_1[0xd] = pbStack_338;
  param_1[0xe] = uStack_200;
  param_1[0xf] = uStack_1f8;
  param_1[0x10] = pbStack_330;
  param_1[0x11] = uStack_1f8;
  param_1[0x12] = uStack_1f0;
  param_1[0x13] = pbStack_248;
  param_1[0x14] = uStack_1f0;
  param_1[0x15] = uStack_1e0;
  param_1[0x16] = pbStack_1e8;
  param_1[0x17] = uStack_1e0;
  param_1[0x18] = 1;
  param_1[0x19] = pbStack_328;
  param_1[0x1a] = 1;
  param_1[0x1b] = 1;
  param_1[0x1c] = pbStack_320;
  param_1[0x1d] = 1;
  param_1[0x1e] = uStack_1d8;
  param_1[0x1f] = pbStack_310;
  param_1[0x20] = uStack_1d8;
  param_1[0x21] = uStack_1d0;
  param_1[0x22] = pbStack_308;
  param_1[0x23] = uStack_1d0;
  param_1[0x24] = uStack_1c8;
  param_1[0x25] = pbStack_300;
  param_1[0x26] = uStack_1c8;
  param_1[0x27] = uStack_1c0;
  param_1[0x28] = pbStack_2f8;
  param_1[0x29] = uStack_1c0;
  param_1[0x2a] = uStack_1b8;
  param_1[0x2b] = pbStack_2f0;
  param_1[0x2c] = uStack_1b8;
  param_1[0x2d] = uStack_1b0;
  param_1[0x2e] = pbStack_2e8;
  param_1[0x2f] = uStack_1b0;
  param_1[0x30] = uStack_1a8;
  param_1[0x31] = pbStack_2e0;
  param_1[0x32] = uStack_1a8;
  param_1[0x33] = uStack_1a0;
  param_1[0x34] = pbStack_2d8;
  param_1[0x35] = uStack_1a0;
  param_1[0x36] = uStack_198;
  param_1[0x37] = pbStack_2d0;
  param_1[0x38] = uStack_198;
  param_1[0x39] = uStack_190;
  param_1[0x3a] = pbStack_2c8;
  param_1[0x3b] = uStack_190;
  param_1[0x3c] = uStack_188;
  param_1[0x3d] = pbStack_2c0;
  param_1[0x3e] = uStack_188;
  param_1[0x3f] = uStack_180;
  param_1[0x40] = pbStack_2b8;
  param_1[0x41] = uStack_180;
  param_1[0x42] = uStack_178;
  param_1[0x43] = pbStack_2b0;
  param_1[0x44] = uStack_178;
  param_1[0x45] = uStack_168;
  param_1[0x46] = pbStack_170;
  param_1[0x47] = uStack_168;
  param_1[0x48] = uStack_160;
  param_1[0x49] = pbStack_240;
  param_1[0x4a] = uStack_160;
  param_1[0x4b] = uStack_318;
  param_1[0x4c] = uStack_2a8;
  param_1[0x4d] = uStack_4f0;
  param_1[0x50] = uStack_358;
  param_1[0x4e] = uStack_368;
  param_1[0x4f] = uStack_360;
  param_1[0x51] = uStack_158;
  param_1[0x52] = pbStack_2a0;
  param_1[0x53] = uStack_158;
  param_1[0x54] = 2;
  param_1[0x55] = pbStack_298;
  param_1[0x56] = 2;
  param_1[0x57] = uStack_150;
  param_1[0x58] = pbStack_290;
  param_1[0x59] = uStack_150;
  param_1[0x5a] = uStack_148;
  param_1[0x5b] = pbStack_288;
  param_1[0x5c] = uStack_148;
  param_1[0x5d] = uStack_140;
  param_1[0x5e] = pbStack_280;
  param_1[0x5f] = uStack_140;
  param_1[0x60] = uStack_f8;
  param_1[0x61] = pbStack_228;
  param_1[0x62] = uVar8;
  param_1[99] = uStack_138;
  param_1[100] = pbStack_278;
  param_1[0x65] = uStack_138;
  param_1[0x66] = uStack_130;
  param_1[0x67] = pbStack_270;
  param_1[0x68] = uStack_130;
  param_1[0x69] = uStack_128;
  param_1[0x6a] = pbStack_268;
  param_1[0x6b] = uStack_128;
  param_1[0x6c] = uStack_120;
  param_1[0x6d] = pbStack_238;
  param_1[0x6e] = uStack_120;
  param_1[0x6f] = uStack_118;
  param_1[0x70] = pbStack_260;
  param_1[0x71] = uStack_118;
  param_1[0x72] = uStack_110;
  param_1[0x73] = pbStack_258;
  param_1[0x74] = uStack_110;
  param_1[0x75] = uStack_100;
  param_1[0x76] = pbStack_108;
  param_1[0x77] = uStack_100;
  param_1[0x78] = uVar5;
  param_1[0x79] = pbVar7;
  param_1[0x7a] = uVar5;
  if (lStack_758 != 0) {
    pub_1406abac0(pbStack_750,lStack_758 * 0xc,4);
  }
  if (lStack_740 != 0) {
    pub_1406abac0(pbStack_738,lStack_740 * 0xc,4);
  }
  if (lStack_728 != 0) {
    pub_1406abac0(pbStack_720,lStack_728 * 0xc,4);
  }
  if (lStack_710 != 0) {
    pub_1406abac0(pbStack_708,lStack_710 * 0xc,4);
  }
  if (lStack_6f8 != 0) {
    pub_1406abac0(pbStack_6f0,lStack_6f8 * 0xc,4);
  }
  if (lStack_6e0 != 0) {
    pub_1406abac0(pbStack_6d8,lStack_6e0 * 0xc,4);
  }
  if (lStack_6c8 != 0) {
    pub_1406abac0(pbStack_6c0,lStack_6c8 * 0xc,4);
  }
  if (lStack_6b0 != 0) {
    pub_1406abac0(pbStack_6a8,lStack_6b0 * 0xc,4);
  }
  if (lStack_698 != 0) {
    pub_1406abac0(pbStack_690,lStack_698 * 0xc,4);
  }
  if (lStack_680 != 0) {
    pub_1406abac0(pbStack_678,lStack_680 * 0xc,4);
  }
  if (lStack_668 != 0) {
    pub_1406abac0(pbStack_660,lStack_668 * 0xc,4);
  }
  if (lStack_650 != 0) {
    pub_1406abac0(pbStack_648,lStack_650 * 0xc,4);
  }
  if (lStack_638 != 0) {
    pub_1406abac0(pbStack_630,lStack_638 * 0xc,4);
  }
  if (lStack_620 != 0) {
    pub_1406abac0(pbStack_618,lStack_620 * 0xc,4);
  }
  if (lStack_608 != 0) {
    pub_1406abac0(pbStack_600,lStack_608 * 0xc,4);
  }
  if (lStack_5f0 != 0) {
    pub_1406abac0(pbStack_5e8,lStack_5f0 * 0xc,4);
  }
  if (lStack_5d8 != 0) {
    pub_1406abac0(pbStack_5d0,lStack_5d8 * 0xc,4);
  }
  if (lStack_5c0 != 0) {
    pub_1406abac0(pbStack_5b8,lStack_5c0 * 0xc,4);
  }
  if (lStack_5a8 != 0) {
    pub_1406abac0(pbStack_5a0,lStack_5a8 * 0xc,4);
  }
  if (lStack_590 != 0) {
    pub_1406abac0(pbStack_588,lStack_590 * 0xc,4);
  }
  if (lStack_578 != 0) {
    pub_1406abac0(pbStack_570,lStack_578 * 0xc,4);
  }
  if (lStack_560 != 0) {
    pub_1406abac0(pbStack_558,lStack_560 * 0xc,4);
  }
  if (lStack_548 != 0) {
    pub_1406abac0(pbStack_540,lStack_548 * 0xc,4);
  }
  if (lStack_530 != 0) {
    pub_1406abac0(pbStack_528,lStack_530 * 0xc,4);
  }
  if (lStack_518 != 0) {
    pub_1406abac0(pbStack_510,lStack_518 * 0xc,4);
  }
  if (lStack_4e8 != 0) {
    pub_1406abac0(pbStack_4e0,lStack_4e8 * 0xc,4);
  }
  if (lStack_4d0 != 0) {
    pub_1406abac0(pbStack_4c8,lStack_4d0 * 0xc,4);
  }
  if (lStack_4b8 != 0) {
    pub_1406abac0(pbStack_4b0,lStack_4b8 * 0xc,4);
  }
  if (lStack_4a0 != 0) {
    pub_1406abac0(pbStack_498,lStack_4a0 * 0xc,4);
  }
  if (lStack_488 != 0) {
    pub_1406abac0(pbStack_480,lStack_488 * 0xc,4);
  }
  if (lStack_470 != 0) {
    pub_1406abac0(pbStack_468,lStack_470 * 0xc,4);
  }
  if (lStack_458 != 0) {
    pub_1406abac0(pbStack_450,lStack_458 * 0xc,4);
  }
  if (lStack_440 != 0) {
    pub_1406abac0(pbStack_438,lStack_440 * 0xc,4);
  }
  if (lStack_428 != 0) {
    pub_1406abac0(pbStack_420,lStack_428 * 0xc,4);
  }
  if (lStack_410 != 0) {
    pub_1406abac0(pbStack_408,lStack_410 * 0xc,4);
  }
  if (lStack_3f8 != 0) {
    pub_1406abac0(pbStack_3f0,lStack_3f8 * 0xc,4);
  }
  if (lStack_3e0 != 0) {
    pub_1406abac0(pbStack_3d8,lStack_3e0 * 0xc,4);
  }
  if (lStack_3c8 != 0) {
    pub_1406abac0(pbStack_3c0,lStack_3c8 * 0xc,4);
  }
  if (lStack_3b0 != 0) {
    pub_1406abac0(pbStack_3a8,lStack_3b0 * 0xc,4);
  }
  if (lStack_398 != 0) {
    pub_1406abac0(pbStack_390,lStack_398 * 0xc,4);
  }
  return param_1;
}

