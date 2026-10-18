// VA 0x141bed7e0, PDB extent 22802 bytes
// country_core::systems::save::snapshot::capture_game_snapshot
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/snapshot.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::save::snapshot::capture_game_snapshot
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/snapshot.rs
   Extent: 22802 */

ulonglong * pdb_141bed7e0(ulonglong *param_1,byte *param_2)

{
  undefined1 auVar1 [16];
  byte ******ppppppbVar2;
  byte ******ppppppbVar3;
  byte *****pppppbVar4;
  byte *****pppppbVar5;
  byte ****ppppbVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  char cVar10;
  undefined1 uVar11;
  byte *pbVar12;
  byte *******pppppppbVar13;
  byte *******pppppppbVar14;
  byte *******pppppppbVar15;
  longlong lVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  undefined *puVar19;
  ulonglong *puVar20;
  char cVar21;
  byte *******pppppppbVar22;
  byte *****pppppbVar23;
  byte *******pppppppbVar24;
  longlong lVar25;
  byte *******pppppppbVar26;
  byte ******ppppppbVar27;
  byte ******ppppppbVar28;
  byte *****pppppbVar29;
  byte *******pppppppbVar30;
  ulonglong uVar31;
  ulonglong *puVar32;
  uint uVar33;
  byte *pbVar34;
  undefined1 (*pauVar35) [16];
  byte ******ppppppbVar36;
  undefined1 (*pauVar37) [16];
  bool bVar38;
  bool bVar39;
  longlong lStack_418;
  longlong lStack_410;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined8 uStack_3e8;
  undefined1 (*pauStack_3e0) [16];
  longlong lStack_3d8;
  undefined8 uStack_3d0;
  longlong lStack_3c8;
  undefined8 uStack_3c0;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined8 uStack_3a8;
  byte *******pppppppbStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  longlong lStack_378;
  byte *pbStack_370;
  undefined8 uStack_368;
  undefined8 uStack_358;
  byte *pbStack_350;
  longlong lStack_348;
  byte *pbStack_340;
  undefined8 uStack_338;
  longlong lStack_328;
  byte *pbStack_320;
  undefined8 uStack_318;
  longlong lStack_308;
  byte *pbStack_300;
  undefined8 uStack_2f8;
  longlong lStack_2e8;
  byte *pbStack_2e0;
  undefined8 uStack_2d8;
  longlong lStack_2c8;
  byte *pbStack_2c0;
  undefined8 uStack_2b8;
  ulonglong uStack_2b0;
  byte *pbStack_2a8;
  ulonglong uStack_2a0;
  longlong lStack_298;
  byte *pbStack_290;
  ulonglong uStack_288;
  longlong lStack_278;
  byte *pbStack_270;
  ulonglong uStack_268;
  longlong lStack_258;
  byte *pbStack_250;
  ulonglong uStack_248;
  undefined1 auStack_240 [8];
  byte *******pppppppbStack_238;
  byte *******pppppppbStack_230;
  byte *******pppppppbStack_228;
  ulonglong *puStack_220;
  undefined1 auStack_218 [16];
  longlong lStack_208;
  ulonglong *puStack_200;
  ulonglong uStack_1f8;
  byte *******pppppppbStack_1e8;
  byte *******pppppppbStack_1e0;
  byte *******pppppppbStack_1d8;
  longlong lStack_1c8;
  byte *pbStack_1c0;
  ulonglong uStack_1b8;
  ulonglong uStack_1a8;
  ulonglong uStack_1a0;
  byte *pbStack_198;
  byte *pbStack_190;
  byte *******pppppppbStack_188;
  byte *******pppppppbStack_180;
  byte *******pppppppbStack_178;
  byte *******pppppppbStack_170;
  byte *******pppppppbStack_168;
  byte *******pppppppbStack_160;
  ulonglong *puStack_158;
  byte *******pppppppbStack_150;
  byte *******pppppppbStack_148;
  byte *******pppppppbStack_140;
  byte *******pppppppbStack_138;
  undefined1 uStack_129;
  byte *******pppppppbStack_128;
  byte *******pppppppbStack_120;
  byte *******pppppppbStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 uStack_ef;
  undefined1 uStack_ee;
  undefined1 uStack_ed;
  undefined1 uStack_ec;
  undefined1 uStack_eb;
  undefined1 uStack_ea;
  undefined1 uStack_e9;
  undefined8 uStack_e8;
  byte *******pppppppbStack_e0;
  byte *******pppppppbStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  byte *******pppppppbStack_b8;
  undefined1 uStack_ae;
  undefined1 uStack_ad;
  undefined1 uStack_ac;
  undefined1 uStack_ab;
  char cStack_aa;
  undefined1 uStack_a9;
  byte *******pppppppbStack_a8;
  byte *******pppppppbStack_a0;
  byte *******pppppppbStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  byte *******pppppppbStack_78;
  undefined1 uStack_69;
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
  byte *******pppppppbStack_58;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_248 = *(ulonglong *)(param_2 + 0x38);
  lStack_258 = *(longlong *)(param_2 + 0x28);
  pbStack_250 = *(byte **)(param_2 + 0x30);
  uStack_1b8 = *(ulonglong *)(param_2 + 0x50);
  lStack_1c8 = *(longlong *)(param_2 + 0x40);
  pbStack_1c0 = *(byte **)(param_2 + 0x48);
  uStack_268 = *(ulonglong *)(param_2 + 0x68);
  lStack_278 = *(longlong *)(param_2 + 0x58);
  pbStack_270 = *(byte **)(param_2 + 0x60);
  pppppppbStack_1d8 = *(byte ********)(param_2 + 0x80);
  pppppppbStack_1e8 = *(byte ********)(param_2 + 0x70);
  pppppppbStack_1e0 = *(byte ********)(param_2 + 0x78);
  uStack_2b8 = *(undefined8 *)(param_2 + 0x98);
  lStack_2c8 = *(longlong *)(param_2 + 0x88);
  pbStack_2c0 = *(byte **)(param_2 + 0x90);
  uStack_2d8 = *(undefined8 *)(param_2 + 0xb0);
  lStack_2e8 = *(longlong *)(param_2 + 0xa0);
  pbStack_2e0 = *(byte **)(param_2 + 0xa8);
  uStack_2f8 = *(undefined8 *)(param_2 + 200);
  lStack_308 = *(longlong *)(param_2 + 0xb8);
  pbStack_300 = *(byte **)(param_2 + 0xc0);
  uStack_318 = *(undefined8 *)(param_2 + 0xe0);
  lStack_328 = *(longlong *)(param_2 + 0xd0);
  pbStack_320 = *(byte **)(param_2 + 0xd8);
  uStack_338 = *(undefined8 *)(param_2 + 0xf8);
  lStack_348 = *(longlong *)(param_2 + 0xe8);
  pbStack_340 = *(byte **)(param_2 + 0xf0);
  uStack_3a8 = *(undefined8 *)(param_2 + 0x1a0);
  uStack_3e8 = *(undefined8 *)(param_2 + 0x160);
  pauStack_3e0 = *(undefined1 (**) [16])(param_2 + 0x168);
  lStack_3d8 = *(longlong *)(param_2 + 0x170);
  uStack_3d0 = *(undefined8 *)(param_2 + 0x178);
  lStack_3c8 = *(longlong *)(param_2 + 0x180);
  uStack_3c0 = *(undefined8 *)(param_2 + 0x188);
  uStack_3b8 = *(undefined4 *)(param_2 + 400);
  uStack_3b4 = *(undefined4 *)(param_2 + 0x194);
  uStack_3b0 = *(undefined4 *)(param_2 + 0x198);
  uStack_3ac = *(undefined4 *)(param_2 + 0x19c);
  uStack_1a8 = *(ulonglong *)(param_2 + 0x100);
  pbStack_198 = *(byte **)(param_2 + 0x108);
  pppppppbVar24 = *(byte ********)(param_2 + 0x110);
  uStack_358 = *(undefined8 *)(param_2 + 0x1d8);
  uStack_1a0 = *(ulonglong *)(param_2 + 0x118);
  pbStack_190 = *(byte **)(param_2 + 0x120);
  uVar17 = *(undefined8 *)(param_2 + 0x128);
  uStack_1f8 = *(ulonglong *)(param_2 + 0x140);
  lStack_208 = *(longlong *)(param_2 + 0x130);
  puStack_200 = *(ulonglong **)(param_2 + 0x138);
  uStack_288 = *(ulonglong *)(param_2 + 0x158);
  lStack_298 = *(longlong *)(param_2 + 0x148);
  pbStack_290 = *(byte **)(param_2 + 0x150);
  uStack_368 = *(undefined8 *)(param_2 + 0x20);
  uStack_388 = *(undefined8 *)param_2;
  uStack_380 = *(undefined8 *)(param_2 + 8);
  lStack_378 = *(longlong *)(param_2 + 0x10);
  pbStack_370 = *(byte **)(param_2 + 0x18);
  lStack_418 = *(longlong *)(param_2 + 0x1a8);
  lStack_410 = *(longlong *)(param_2 + 0x1b0);
  uStack_408 = *(undefined4 *)(param_2 + 0x1b8);
  uStack_404 = *(undefined4 *)(param_2 + 0x1bc);
  uStack_400 = *(undefined4 *)(param_2 + 0x1c0);
  uStack_3fc = *(undefined4 *)(param_2 + 0x1c4);
  uStack_3f8 = *(undefined4 *)(param_2 + 0x1c8);
  uStack_3f4 = *(undefined4 *)(param_2 + 0x1cc);
  uStack_3f0 = *(undefined4 *)(param_2 + 0x1d0);
  uStack_3ec = *(undefined4 *)(param_2 + 0x1d4);
  pbStack_350 = param_2;
  puStack_158 = param_1;
  pdb_14007ee60();
  pbVar12 = pub_1406abab0(0x80000,1);
  if (pbVar12 == (byte *)0x0) {
    uStack_a9 = 1;
    pdb_142dc7e2a(1,0x80000);
    goto LAB_141bf132e;
  }
  uStack_2b0 = 0x80000;
  uStack_2a0 = 0;
  puStack_220 = &uStack_2b0;
  auStack_218 = (undefined1  [16])0x0;
  pbStack_2a8 = pbVar12;
  pppppppbStack_a8 = (byte *******)&uStack_129;
  if (1 < uStack_248) {
    if (uStack_248 < 0x15) {
      uStack_4b = 1;
      uStack_4c = 1;
      uStack_4d = 1;
      pdb_14151a980(pbStack_250,uStack_248,1,&pppppppbStack_a8);
    }
    else {
      uStack_4b = 1;
      uStack_4c = 1;
      uStack_4d = 1;
      pdb_140a91b20(pbStack_250,uStack_248,&pppppppbStack_a8);
    }
  }
  if (1 < uStack_1b8) {
    if (uStack_1b8 < 0x15) {
      uStack_4b = 1;
      uStack_4c = 1;
      uStack_4d = 1;
      pppppppbStack_a8 = (byte *******)&uStack_129;
      pdb_14151ad80(pbStack_1c0,uStack_1b8,1,&pppppppbStack_a8);
    }
    else {
      uStack_4b = 1;
      uStack_4c = 1;
      uStack_4d = 1;
      pppppppbStack_a8 = (byte *******)&uStack_129;
      pdb_140a91190(pbStack_1c0,uStack_1b8,&pppppppbStack_a8);
    }
  }
  if (1 < uStack_268) {
    if (uStack_268 < 0x15) {
      uStack_4b = 1;
      uStack_4c = 1;
      uStack_4d = 1;
      pppppppbStack_a8 = (byte *******)&uStack_129;
      pdb_14151a1e0(pbStack_270,uStack_268,1,&pppppppbStack_a8);
    }
    else {
      uStack_4b = 1;
      uStack_4c = 1;
      uStack_4d = 1;
      pppppppbStack_a8 = (byte *******)&uStack_129;
      pdb_140a90ff0(pbStack_270,uStack_268,&pppppppbStack_a8);
    }
  }
  pppppppbStack_a8 = (byte *******)&uStack_129;
  if (1 < uStack_288) {
    if (uStack_288 < 0x15) {
      uStack_4b = 1;
      uStack_4c = 1;
      uStack_4d = 1;
      pdb_14151ac80(pbStack_290,uStack_288,1,&pppppppbStack_a8);
    }
    else {
      uStack_4b = 1;
      uStack_4c = 1;
      uStack_4d = 1;
      pdb_140a91ef0(pbStack_290,uStack_288,&pppppppbStack_a8);
    }
  }
  if (1 < uStack_1f8) {
    if (uStack_1f8 < 0x15) {
      puVar20 = puStack_200 + 1;
      lVar16 = 8;
      do {
        uVar18 = puVar20[-1];
        uVar31 = *puVar20;
        lVar25 = lVar16;
        if (uVar31 < uVar18) {
          do {
            *(ulonglong *)((longlong)puStack_200 + lVar25) = uVar18;
            puVar32 = puStack_200;
            if (lVar25 == 8) goto LAB_141bf0b61;
            uVar18 = *(ulonglong *)((longlong)puStack_200 + lVar25 + -0x10);
            lVar25 = lVar25 + -8;
          } while (uVar31 < uVar18);
          puVar32 = (ulonglong *)(lVar25 + (longlong)puStack_200);
LAB_141bf0b61:
          *puVar32 = uVar31;
        }
        puVar20 = puVar20 + 1;
        lVar16 = lVar16 + 8;
      } while (puVar20 != puStack_200 + uStack_1f8);
    }
    else {
      uStack_4b = 1;
      uStack_4c = 1;
      uStack_4d = 1;
      pdb_140a91360(puStack_200,uStack_1f8,&uStack_129);
    }
  }
  pppppppbStack_170 = (byte *******)0x0;
  pppppppbStack_160 = (byte *******)0x0;
  pdb_14007ee60();
  pppppppbVar13 = (byte *******)pub_1406abab0(7,1);
  if (pppppppbVar13 == (byte *******)0x0) {
    pdb_142dc7e2a(1,7);
    goto LAB_141bf132e;
  }
  pbVar12 = (byte *)((longlong)pppppppbVar13 + 3);
  pbVar12[0] = 0x73;
  pbVar12[1] = 0x69;
  pbVar12[2] = 0x6f;
  pbVar12[3] = 0x6e;
  *(undefined4 *)pppppppbVar13 = 0x73726556;
  pppppppbStack_128 = (byte *******)0x7;
  pppppppbStack_118 = (byte *******)0x7;
  pppppppbStack_a8 = (byte *******)CONCAT71(pppppppbStack_a8._1_7_,2);
  pppppppbStack_a0 = (byte *******)0x0;
  pppppppbStack_98 = (byte *******)0x2;
  pppppppbStack_120 = pppppppbVar13;
  pdb_14192b260(&uStack_e8,&pppppppbStack_170,&pppppppbStack_128,&pppppppbStack_a8);
  switch((ulonglong)uStack_e8 & 0xff) {
  case 0:
  case 1:
  case 2:
  case 6:
    break;
  case 3:
    if (pppppppbStack_e0 != (byte *******)0x0) {
      uVar31 = 1;
      pppppppbVar13 = pppppppbStack_d8;
      pppppppbVar26 = pppppppbStack_e0;
code_r0x000141bedbe8:
      pub_1406abac0((byte *)pppppppbVar13,(ulonglong)pppppppbVar26,uVar31);
    }
    break;
  case 4:
    pppppppbStack_58 = pppppppbStack_d8;
    pdb_14098ae50(pppppppbStack_d8,uStack_d0);
    if (pppppppbStack_e0 != (byte *******)0x0) {
      uVar31 = 8;
      pppppppbVar13 = pppppppbStack_58;
      pppppppbVar26 = (byte *******)((longlong)pppppppbStack_e0 << 5);
      goto code_r0x000141bedbe8;
    }
    break;
  default:
    pdb_1409a45e0(&pppppppbStack_e0);
  }
  pdb_14007ee60();
  pppppppbVar13 = (byte *******)pub_1406abab0(5,1);
  if (pppppppbVar13 == (byte *******)0x0) {
    pdb_142dc7e2a(1,5);
    goto LAB_141bf132e;
  }
  *(byte *)((longlong)pppppppbVar13 + 4) = 0x73;
  *(undefined4 *)pppppppbVar13 = 0x6c6c6157;
  pppppppbStack_128 = (byte *******)0x5;
  pppppppbStack_118 = (byte *******)0x5;
  uStack_5f = 1;
  pppppppbStack_120 = pppppppbVar13;
  pdb_141bfc800(&pppppppbStack_a8,&lStack_258);
  if ((char)pppppppbStack_a8 == '\x06') {
    uStack_e8 = pppppppbStack_a0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14339ba50,0x2b,&uStack_e8,&UNK_14339ba30,&UNK_14339b630);
  }
  pppppppbStack_d8 = pppppppbStack_98;
  uStack_d0 = (byte *******)CONCAT44(uStack_8c,uStack_90);
  uStack_e8 = pppppppbStack_a8;
  pppppppbStack_e0 = pppppppbStack_a0;
  uStack_5f = 0;
  pdb_14192b260(&pppppppbStack_a8,&pppppppbStack_170,&pppppppbStack_128,&uStack_e8);
  switch((ulonglong)pppppppbStack_a8 & 0xff) {
  case 0:
  case 1:
  case 2:
  case 6:
    break;
  case 3:
    if (pppppppbStack_a0 != (byte *******)0x0) {
      uVar31 = 1;
      pppppppbVar13 = pppppppbStack_98;
      pppppppbVar26 = pppppppbStack_a0;
code_r0x000141bedd1f:
      pub_1406abac0((byte *)pppppppbVar13,(ulonglong)pppppppbVar26,uVar31);
    }
    break;
  case 4:
    pppppppbStack_58 = pppppppbStack_98;
    pdb_14098ae50(pppppppbStack_98,CONCAT44(uStack_8c,uStack_90));
    if (pppppppbStack_a0 != (byte *******)0x0) {
      uVar31 = 8;
      pppppppbVar13 = pppppppbStack_58;
      pppppppbVar26 = (byte *******)((longlong)pppppppbStack_a0 << 5);
      goto code_r0x000141bedd1f;
    }
    break;
  default:
    pdb_1409a45e0(&pppppppbStack_a0);
  }
  pdb_14007ee60();
  pppppppbVar13 = (byte *******)pub_1406abab0(5,1);
  if (pppppppbVar13 == (byte *******)0x0) {
    pdb_142dc7e2a(1,5);
    goto LAB_141bf132e;
  }
  *(byte *)((longlong)pppppppbVar13 + 4) = 0x73;
  *(undefined4 *)pppppppbVar13 = 0x666f6f52;
  pppppppbStack_128 = (byte *******)0x5;
  pppppppbStack_118 = (byte *******)0x5;
  uStack_60 = 1;
  pppppppbStack_120 = pppppppbVar13;
  pdb_141bfc170(&pppppppbStack_a8,&lStack_1c8);
  if ((char)pppppppbStack_a8 == '\x06') {
    uStack_e8 = pppppppbStack_a0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14339ba50,0x2b,&uStack_e8,&UNK_14339ba30,&UNK_14339b630);
  }
  pppppppbStack_d8 = pppppppbStack_98;
  uStack_d0 = (byte *******)CONCAT44(uStack_8c,uStack_90);
  uStack_e8 = pppppppbStack_a8;
  pppppppbStack_e0 = pppppppbStack_a0;
  uStack_60 = 0;
  pdb_14192b260(&pppppppbStack_a8,&pppppppbStack_170,&pppppppbStack_128,&uStack_e8);
  switch((ulonglong)pppppppbStack_a8 & 0xff) {
  case 0:
  case 1:
  case 2:
  case 6:
    break;
  case 3:
    if (pppppppbStack_a0 != (byte *******)0x0) {
      uVar31 = 1;
      pppppppbVar13 = pppppppbStack_98;
      pppppppbVar26 = pppppppbStack_a0;
code_r0x000141bede56:
      pub_1406abac0((byte *)pppppppbVar13,(ulonglong)pppppppbVar26,uVar31);
    }
    break;
  case 4:
    pppppppbStack_58 = pppppppbStack_98;
    pdb_14098ae50(pppppppbStack_98,CONCAT44(uStack_8c,uStack_90));
    if (pppppppbStack_a0 != (byte *******)0x0) {
      uVar31 = 8;
      pppppppbVar13 = pppppppbStack_58;
      pppppppbVar26 = (byte *******)((longlong)pppppppbStack_a0 << 5);
      goto code_r0x000141bede56;
    }
    break;
  default:
    pdb_1409a45e0(&pppppppbStack_a0);
  }
  pdb_14007ee60();
  pppppppbVar13 = (byte *******)pub_1406abab0(10,1);
  if (pppppppbVar13 == (byte *******)0x0) {
    pdb_142dc7e2a(1,10);
    goto LAB_141bf132e;
  }
  *pppppppbVar13 = (byte ******)0x6f7461726f636544;
  *(undefined2 *)(pppppppbVar13 + 1) = 0x7372;
  pppppppbStack_150 = (byte *******)0xa;
  pppppppbStack_140 = (byte *******)0xa;
  uStack_e8 = (byte *******)0x8000000000000000;
  uStack_d0 = (byte *******)0x0;
  uStack_c0 = (byte *******)0x0;
  uStack_e9 = 1;
  pppppppbStack_148 = pppppppbVar13;
  pppppppbVar13 = (byte *******)pdb_141c06b10(&uStack_e8,&UNK_1430764b8,6,&lStack_278);
  if (pppppppbVar13 != (byte *******)0x0) {
    uStack_59 = 1;
    pdb_140c915e0(&uStack_e8);
    pppppppbStack_a8 = pppppppbVar13;
LAB_141bf10be:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14339ba50,0x2b,&pppppppbStack_a8,&UNK_14339ba30,&UNK_14339b630);
  }
  uStack_88 = (undefined4)uStack_c8;
  uStack_84 = uStack_c8._4_4_;
  uStack_80 = (undefined4)uStack_c0;
  uStack_7c = uStack_c0._4_4_;
  pppppppbStack_98 = pppppppbStack_d8;
  uStack_90 = (undefined4)uStack_d0;
  uStack_8c = uStack_d0._4_4_;
  pppppppbStack_a8 = uStack_e8;
  pppppppbStack_a0 = pppppppbStack_e0;
  uStack_e9 = 0;
  pdb_140ddcdc0(&pppppppbStack_128,&pppppppbStack_a8);
  pppppppbStack_a8 = pppppppbStack_120;
  if ((char)pppppppbStack_128 == '\x06') goto LAB_141bf10be;
  pppppppbStack_98 = pppppppbStack_118;
  uStack_90 = uStack_110;
  uStack_8c = uStack_10c;
  pppppppbStack_a8 = pppppppbStack_128;
  pppppppbStack_a0 = pppppppbStack_120;
  uStack_59 = 0;
  pdb_14192b260(&uStack_e8,&pppppppbStack_170,&pppppppbStack_150);
  switch((ulonglong)uStack_e8 & 0xff) {
  case 0:
  case 1:
  case 2:
  case 6:
    break;
  case 3:
    if (pppppppbStack_e0 != (byte *******)0x0) {
      uVar31 = 1;
      pppppppbVar13 = pppppppbStack_d8;
      pppppppbVar26 = pppppppbStack_e0;
code_r0x000141bee01a:
      pub_1406abac0((byte *)pppppppbVar13,(ulonglong)pppppppbVar26,uVar31);
    }
    break;
  case 4:
    pppppppbStack_58 = pppppppbStack_d8;
    pdb_14098ae50(pppppppbStack_d8,uStack_d0);
    if (pppppppbStack_e0 != (byte *******)0x0) {
      uVar31 = 8;
      pppppppbVar13 = pppppppbStack_58;
      pppppppbVar26 = (byte *******)((longlong)pppppppbStack_e0 << 5);
      goto code_r0x000141bee01a;
    }
    break;
  default:
    pdb_1409a45e0(&pppppppbStack_e0);
  }
  pdb_14007ee60();
  pppppppbVar14 = (byte *******)pub_1406abab0(6,1);
  pppppppbVar26 = pppppppbStack_1d8;
  pppppppbVar13 = pppppppbStack_1e0;
  if (pppppppbVar14 == (byte *******)0x0) {
    pdb_142dc7e2a(1,6);
    goto LAB_141bf132e;
  }
  ((byte *)((longlong)pppppppbVar14 + 4))[0] = 0x65;
  ((byte *)((longlong)pppppppbVar14 + 4))[1] = 0x72;
  *(undefined4 *)pppppppbVar14 = 0x74736152;
  pppppppbStack_150 = (byte *******)0x6;
  pppppppbStack_140 = (byte *******)0x6;
  pppppppbVar22 = (byte *******)((longlong)pppppppbStack_1d8 << 4);
  pppppppbStack_178 = pppppppbVar22;
  pppppppbStack_148 = pppppppbVar14;
  if (pppppppbStack_1d8 == (byte *******)0x0) {
    pppppppbVar15 = (byte *******)0x8;
  }
  else {
    pdb_14007ee60();
    pppppppbVar15 = (byte *******)pub_1406abab0((ulonglong)pppppppbVar22,8);
    if (pppppppbVar15 == (byte *******)0x0) {
      pppppppbStack_58 = pppppppbVar14;
      pdb_142dc7e2a(8,pppppppbVar22);
      goto LAB_141bf132e;
    }
    if (pppppppbVar26 == (byte *******)0x1) {
      uVar31 = 0;
    }
    else {
      pppppppbVar14 = pppppppbVar13 + 6;
      pppppppbVar22 = pppppppbVar15 + 3;
      uVar31 = 0;
      do {
        ppppppbVar2 = pppppppbVar14[-5];
        pppppppbVar22[-3] = pppppppbVar14[-6];
        pppppppbVar22[-2] = ppppppbVar2;
        ppppppbVar2 = *pppppppbVar14;
        pppppppbVar22[-1] = pppppppbVar14[-1];
        *pppppppbVar22 = ppppppbVar2;
        uVar31 = uVar31 + 2;
        pppppppbVar14 = pppppppbVar14 + 10;
        pppppppbVar22 = pppppppbVar22 + 4;
      } while (((ulonglong)pppppppbVar26 & 0xfffffffffffffffe) != uVar31);
      if (((ulonglong)pppppppbVar26 & 1) == 0) goto LAB_141bee11e;
    }
    pppppppbVar13 = pppppppbVar13 + uVar31 * 5;
    ppppppbVar2 = pppppppbVar13[1];
    pppppppbVar15[uVar31 * 2] = *pppppppbVar13;
    (pppppppbVar15 + uVar31 * 2)[1] = ppppppbVar2;
  }
LAB_141bee11e:
  pppppppbStack_128 = pppppppbVar26;
  pppppppbStack_58 = pppppppbVar26;
  pppppppbStack_118 = pppppppbVar26;
  uStack_61 = 1;
  pppppppbStack_180 = pppppppbVar15;
  pppppppbStack_120 = pppppppbVar15;
  pdb_141bfde70(&pppppppbStack_a8,&pppppppbStack_128);
  if ((char)pppppppbStack_a8 == '\x06') {
    uStack_e8 = pppppppbStack_a0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14339ba50,0x2b,&uStack_e8,&UNK_14339ba30,&UNK_14339b630);
  }
  pppppppbStack_d8 = pppppppbStack_98;
  uStack_d0 = (byte *******)CONCAT44(uStack_8c,uStack_90);
  uStack_e8 = pppppppbStack_a8;
  pppppppbStack_e0 = pppppppbStack_a0;
  uStack_61 = 0;
  pdb_14192b260(&pppppppbStack_a8,&pppppppbStack_170,&pppppppbStack_150,&uStack_e8);
  switch((ulonglong)pppppppbStack_a8 & 0xff) {
  case 0:
  case 1:
  case 2:
  case 6:
    break;
  case 3:
    if (pppppppbStack_a0 != (byte *******)0x0) {
      pub_1406abac0((byte *)pppppppbStack_98,(ulonglong)pppppppbStack_a0,1);
    }
    break;
  case 4:
    pppppppbStack_188 = pppppppbStack_98;
    pdb_14098ae50(pppppppbStack_98,CONCAT44(uStack_8c,uStack_90));
    if (pppppppbStack_a0 != (byte *******)0x0) {
      pub_1406abac0((byte *)pppppppbStack_188,(longlong)pppppppbStack_a0 << 5,8);
    }
    break;
  default:
    pdb_1409a45e0(&pppppppbStack_a0);
  }
  if (pppppppbStack_58 != (byte *******)0x0) {
    pub_1406abac0((byte *)pppppppbStack_180,(ulonglong)pppppppbStack_178,8);
  }
  pdb_14007ee60();
  pppppppbVar13 = (byte *******)pub_1406abab0(10,1);
  if (pppppppbVar13 == (byte *******)0x0) {
    pdb_142dc7e2a(1,10);
    goto LAB_141bf132e;
  }
  *pppppppbVar13 = (byte ******)0x6f6c6f436c6c6157;
  *(undefined2 *)(pppppppbVar13 + 1) = 0x7372;
  pppppppbStack_128 = (byte *******)0xa;
  pppppppbStack_118 = (byte *******)0xa;
  uStack_62 = 1;
  pppppppbStack_120 = pppppppbVar13;
  pdb_141bfda10(&pppppppbStack_a8,&lStack_2c8);
  if ((char)pppppppbStack_a8 == '\x06') {
    uStack_e8 = pppppppbStack_a0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14339ba50,0x2b,&uStack_e8,&UNK_14339ba30,&UNK_14339b630);
  }
  pppppppbStack_d8 = pppppppbStack_98;
  uStack_d0 = (byte *******)CONCAT44(uStack_8c,uStack_90);
  uStack_e8 = pppppppbStack_a8;
  pppppppbStack_e0 = pppppppbStack_a0;
  uStack_62 = 0;
  pdb_14192b260(&pppppppbStack_a8,&pppppppbStack_170,&pppppppbStack_128,&uStack_e8);
  switch((ulonglong)pppppppbStack_a8 & 0xff) {
  case 0:
  case 1:
  case 2:
  case 6:
    break;
  case 3:
    if (pppppppbStack_a0 != (byte *******)0x0) {
      uVar31 = 1;
      pppppppbVar13 = pppppppbStack_98;
      pppppppbVar26 = pppppppbStack_a0;
code_r0x000141bee3aa:
      pub_1406abac0((byte *)pppppppbVar13,(ulonglong)pppppppbVar26,uVar31);
    }
    break;
  case 4:
    pppppppbStack_58 = pppppppbStack_98;
    pdb_14098ae50(pppppppbStack_98,CONCAT44(uStack_8c,uStack_90));
    if (pppppppbStack_a0 != (byte *******)0x0) {
      uVar31 = 8;
      pppppppbVar13 = pppppppbStack_58;
      pppppppbVar26 = (byte *******)((longlong)pppppppbStack_a0 << 5);
      goto code_r0x000141bee3aa;
    }
    break;
  default:
    pdb_1409a45e0(&pppppppbStack_a0);
  }
  pdb_14007ee60();
  pppppppbVar13 = (byte *******)pub_1406abab0(10,1);
  if (pppppppbVar13 == (byte *******)0x0) {
    pdb_142dc7e2a(1,10);
    goto LAB_141bf132e;
  }
  *pppppppbVar13 = (byte ******)0x6f6c6f4365746147;
  *(undefined2 *)(pppppppbVar13 + 1) = 0x7372;
  pppppppbStack_128 = (byte *******)0xa;
  pppppppbStack_118 = (byte *******)0xa;
  uStack_63 = 1;
  pppppppbStack_120 = pppppppbVar13;
  pdb_141bfda10(&pppppppbStack_a8,&lStack_2e8);
  if ((char)pppppppbStack_a8 == '\x06') {
    uStack_e8 = pppppppbStack_a0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14339ba50,0x2b,&uStack_e8,&UNK_14339ba30,&UNK_14339b630);
  }
  pppppppbStack_d8 = pppppppbStack_98;
  uStack_d0 = (byte *******)CONCAT44(uStack_8c,uStack_90);
  uStack_e8 = pppppppbStack_a8;
  pppppppbStack_e0 = pppppppbStack_a0;
  uStack_63 = 0;
  pdb_14192b260(&pppppppbStack_a8,&pppppppbStack_170,&pppppppbStack_128,&uStack_e8);
  switch((ulonglong)pppppppbStack_a8 & 0xff) {
  case 0:
  case 1:
  case 2:
  case 6:
    break;
  case 3:
    if (pppppppbStack_a0 != (byte *******)0x0) {
      uVar31 = 1;
      pppppppbVar13 = pppppppbStack_98;
      pppppppbVar26 = pppppppbStack_a0;
code_r0x000141bee4ea:
      pub_1406abac0((byte *)pppppppbVar13,(ulonglong)pppppppbVar26,uVar31);
    }
    break;
  case 4:
    pppppppbStack_58 = pppppppbStack_98;
    pdb_14098ae50(pppppppbStack_98,CONCAT44(uStack_8c,uStack_90));
    if (pppppppbStack_a0 != (byte *******)0x0) {
      uVar31 = 8;
      pppppppbVar13 = pppppppbStack_58;
      pppppppbVar26 = (byte *******)((longlong)pppppppbStack_a0 << 5);
      goto code_r0x000141bee4ea;
    }
    break;
  default:
    pdb_1409a45e0(&pppppppbStack_a0);
  }
  pdb_14007ee60();
  pppppppbVar13 = (byte *******)pub_1406abab0(0x10,1);
  ppppppbVar2 = _UNK_14339b682;
  if (pppppppbVar13 == (byte *******)0x0) {
    pdb_142dc7e2a(1,0x10);
    goto LAB_141bf132e;
  }
  *pppppppbVar13 = _DAT_14339b67a;
  pppppppbVar13[1] = ppppppbVar2;
  pppppppbStack_128 = (byte *******)0x10;
  pppppppbStack_118 = (byte *******)0x10;
  uStack_64 = 1;
  pppppppbStack_120 = pppppppbVar13;
  pdb_141bfda10(&pppppppbStack_a8,&lStack_308);
  if ((char)pppppppbStack_a8 == '\x06') {
    uStack_e8 = pppppppbStack_a0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14339ba50,0x2b,&uStack_e8,&UNK_14339ba30,&UNK_14339b630);
  }
  pppppppbStack_d8 = pppppppbStack_98;
  uStack_d0 = (byte *******)CONCAT44(uStack_8c,uStack_90);
  uStack_e8 = pppppppbStack_a8;
  pppppppbStack_e0 = pppppppbStack_a0;
  uStack_64 = 0;
  pdb_14192b260(&pppppppbStack_a8,&pppppppbStack_170,&pppppppbStack_128,&uStack_e8);
  switch((ulonglong)pppppppbStack_a8 & 0xff) {
  case 0:
  case 1:
  case 2:
  case 6:
    break;
  case 3:
    if (pppppppbStack_a0 != (byte *******)0x0) {
      uVar31 = 1;
      pppppppbVar13 = pppppppbStack_98;
      pppppppbVar26 = pppppppbStack_a0;
code_r0x000141bee623:
      pub_1406abac0((byte *)pppppppbVar13,(ulonglong)pppppppbVar26,uVar31);
    }
    break;
  case 4:
    pppppppbStack_58 = pppppppbStack_98;
    pdb_14098ae50(pppppppbStack_98,CONCAT44(uStack_8c,uStack_90));
    if (pppppppbStack_a0 != (byte *******)0x0) {
      uVar31 = 8;
      pppppppbVar13 = pppppppbStack_58;
      pppppppbVar26 = (byte *******)((longlong)pppppppbStack_a0 << 5);
      goto code_r0x000141bee623;
    }
    break;
  default:
    pdb_1409a45e0(&pppppppbStack_a0);
  }
  pdb_14007ee60();
  pppppppbVar13 = (byte *******)pub_1406abab0(0x10,1);
  ppppppbVar2 = _UNK_14339b692;
  if (pppppppbVar13 == (byte *******)0x0) {
    pdb_142dc7e2a(1,0x10);
    goto LAB_141bf132e;
  }
  *pppppppbVar13 = _DAT_14339b68a;
  pppppppbVar13[1] = ppppppbVar2;
  pppppppbStack_128 = (byte *******)0x10;
  pppppppbStack_118 = (byte *******)0x10;
  uStack_65 = 1;
  pppppppbStack_120 = pppppppbVar13;
  pdb_141bfda10(&pppppppbStack_a8,&lStack_328);
  if ((char)pppppppbStack_a8 == '\x06') {
    uStack_e8 = pppppppbStack_a0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14339ba50,0x2b,&uStack_e8,&UNK_14339ba30,&UNK_14339b630);
  }
  pppppppbStack_d8 = pppppppbStack_98;
  uStack_d0 = (byte *******)CONCAT44(uStack_8c,uStack_90);
  uStack_e8 = pppppppbStack_a8;
  pppppppbStack_e0 = pppppppbStack_a0;
  uStack_65 = 0;
  pdb_14192b260(&pppppppbStack_a8,&pppppppbStack_170,&pppppppbStack_128,&uStack_e8);
  switch((ulonglong)pppppppbStack_a8 & 0xff) {
  case 0:
  case 1:
  case 2:
  case 6:
    break;
  case 3:
    if (pppppppbStack_a0 != (byte *******)0x0) {
      uVar31 = 1;
      pppppppbVar13 = pppppppbStack_98;
      pppppppbVar26 = pppppppbStack_a0;
code_r0x000141bee75c:
      pub_1406abac0((byte *)pppppppbVar13,(ulonglong)pppppppbVar26,uVar31);
    }
    break;
  case 4:
    pppppppbStack_58 = pppppppbStack_98;
    pdb_14098ae50(pppppppbStack_98,CONCAT44(uStack_8c,uStack_90));
    if (pppppppbStack_a0 != (byte *******)0x0) {
      uVar31 = 8;
      pppppppbVar13 = pppppppbStack_58;
      pppppppbVar26 = (byte *******)((longlong)pppppppbStack_a0 << 5);
      goto code_r0x000141bee75c;
    }
    break;
  default:
    pdb_1409a45e0(&pppppppbStack_a0);
  }
  pdb_14007ee60();
  pppppppbVar13 = (byte *******)pub_1406abab0(0x15,1);
  ppppppbVar2 = _UNK_14339b6a2;
  if (pppppppbVar13 == (byte *******)0x0) {
    pdb_142dc7e2a(1,0x15);
    goto LAB_141bf132e;
  }
  *pppppppbVar13 = _DAT_14339b69a;
  pppppppbVar13[1] = ppppppbVar2;
  pbVar12 = (byte *)((longlong)pppppppbVar13 + 0xd);
  pbVar12[0] = 0x6f;
  pbVar12[1] = 0x6e;
  pbVar12[2] = 0x43;
  pbVar12[3] = 0x6f;
  pbVar12[4] = 0x6c;
  pbVar12[5] = 0x6f;
  pbVar12[6] = 0x72;
  pbVar12[7] = 0x73;
  pppppppbStack_128 = (byte *******)0x15;
  pppppppbStack_118 = (byte *******)0x15;
  uStack_66 = 1;
  pppppppbStack_120 = pppppppbVar13;
  pdb_141bfda10(&pppppppbStack_a8,&lStack_348);
  if ((char)pppppppbStack_a8 == '\x06') {
    uStack_e8 = pppppppbStack_a0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14339ba50,0x2b,&uStack_e8,&UNK_14339ba30,&UNK_14339b630);
  }
  pppppppbStack_d8 = pppppppbStack_98;
  uStack_d0 = (byte *******)CONCAT44(uStack_8c,uStack_90);
  uStack_e8 = pppppppbStack_a8;
  pppppppbStack_e0 = pppppppbStack_a0;
  uStack_66 = 0;
  pdb_14192b260(&pppppppbStack_a8,&pppppppbStack_170,&pppppppbStack_128,&uStack_e8);
  switch((ulonglong)pppppppbStack_a8 & 0xff) {
  case 0:
  case 1:
  case 2:
  case 6:
    break;
  case 3:
    if (pppppppbStack_a0 != (byte *******)0x0) {
      uVar31 = 1;
      pppppppbVar13 = pppppppbStack_98;
      pppppppbVar26 = pppppppbStack_a0;
code_r0x000141bee8a3:
      pub_1406abac0((byte *)pppppppbVar13,(ulonglong)pppppppbVar26,uVar31);
    }
    break;
  case 4:
    pppppppbStack_58 = pppppppbStack_98;
    pdb_14098ae50(pppppppbStack_98,CONCAT44(uStack_8c,uStack_90));
    if (pppppppbStack_a0 != (byte *******)0x0) {
      uVar31 = 8;
      pppppppbVar13 = pppppppbStack_58;
      pppppppbVar26 = (byte *******)((longlong)pppppppbStack_a0 << 5);
      goto code_r0x000141bee8a3;
    }
    break;
  default:
    pdb_1409a45e0(&pppppppbStack_a0);
  }
  pdb_14007ee60();
  pppppppbVar13 = (byte *******)pub_1406abab0(7,1);
  if (pppppppbVar13 == (byte *******)0x0) {
    pdb_142dc7e2a(1,7);
    goto LAB_141bf132e;
  }
  pbVar12 = (byte *)((longlong)pppppppbVar13 + 3);
  pbVar12[0] = 0x72;
  pbVar12[1] = 0x61;
  pbVar12[2] = 0x69;
  pbVar12[3] = 0x6e;
  *(undefined4 *)pppppppbVar13 = 0x72726554;
  pppppppbStack_150 = (byte *******)0x7;
  pppppppbStack_140 = (byte *******)0x7;
  uStack_e8 = (byte *******)0x8000000000000000;
  uStack_d0 = (byte *******)0x0;
  uStack_c0 = (byte *******)0x0;
  uStack_ac = 1;
  pppppppbStack_148 = pppppppbVar13;
  pppppppbVar13 = (byte *******)pdb_141c0ace0(&uStack_e8,&UNK_14304ca6a,7,&pauStack_3e0);
  if (pppppppbVar13 == (byte *******)0x0) {
    uStack_ac = 1;
    pppppppbVar13 = (byte *******)pdb_141c07510(&uStack_e8,&UNK_14304ca71,0xe,&uStack_3b0);
    if (pppppppbVar13 == (byte *******)0x0) {
      uStack_88 = (undefined4)uStack_c8;
      uStack_84 = uStack_c8._4_4_;
      uStack_80 = (undefined4)uStack_c0;
      uStack_7c = uStack_c0._4_4_;
      pppppppbStack_98 = pppppppbStack_d8;
      uStack_90 = (undefined4)uStack_d0;
      uStack_8c = uStack_d0._4_4_;
      pppppppbStack_a8 = uStack_e8;
      pppppppbStack_a0 = pppppppbStack_e0;
      uStack_ac = 0;
      pdb_140ddcdc0(&pppppppbStack_128,&pppppppbStack_a8);
      pppppppbStack_a8 = pppppppbStack_120;
      if ((char)pppppppbStack_128 == '\x06') goto LAB_141bf0f4c;
      pppppppbStack_98 = pppppppbStack_118;
      uStack_90 = uStack_110;
      uStack_8c = uStack_10c;
      pppppppbStack_a8 = pppppppbStack_128;
      pppppppbStack_a0 = pppppppbStack_120;
      uStack_5a = 0;
      pdb_14192b260(&uStack_e8,&pppppppbStack_170,&pppppppbStack_150,&pppppppbStack_a8);
      switch((ulonglong)uStack_e8 & 0xff) {
      case 0:
      case 1:
      case 2:
      case 6:
        break;
      case 3:
        if (pppppppbStack_e0 != (byte *******)0x0) {
          uVar31 = 1;
          pppppppbVar13 = pppppppbStack_d8;
          pppppppbVar26 = pppppppbStack_e0;
code_r0x000141beea8c:
          pub_1406abac0((byte *)pppppppbVar13,(ulonglong)pppppppbVar26,uVar31);
        }
        break;
      case 4:
        pppppppbStack_58 = pppppppbStack_d8;
        pdb_14098ae50(pppppppbStack_d8,uStack_d0);
        if (pppppppbStack_e0 != (byte *******)0x0) {
          uVar31 = 8;
          pppppppbVar13 = pppppppbStack_58;
          pppppppbVar26 = (byte *******)((longlong)pppppppbStack_e0 << 5);
          goto code_r0x000141beea8c;
        }
        break;
      default:
        pdb_1409a45e0(&pppppppbStack_e0);
      }
      pdb_14007ee60();
      pppppppbVar13 = (byte *******)pub_1406abab0(0x12,1);
      ppppppbVar2 = _UNK_14339b6be;
      if (pppppppbVar13 == (byte *******)0x0) {
        pdb_142dc7e2a(1,0x12);
        goto LAB_141bf132e;
      }
      *pppppppbVar13 = _DAT_14339b6b6;
      pppppppbVar13[1] = ppppppbVar2;
      *(undefined2 *)(pppppppbVar13 + 2) = 0x6567;
      pppppppbStack_150 = (byte *******)0x12;
      pppppppbStack_140 = (byte *******)0x12;
      uStack_e8 = (byte *******)0x8000000000000000;
      uStack_d0 = (byte *******)0x0;
      uStack_c0 = (byte *******)0x0;
      uStack_ad = 1;
      pppppppbStack_148 = pppppppbVar13;
      pppppppbVar13 = (byte *******)pdb_141c06050(&uStack_e8,&UNK_14306262d,5,&uStack_358);
      if (pppppppbVar13 == (byte *******)0x0) {
        uStack_ad = 1;
        pppppppbVar13 =
             (byte *******)pdb_141c06050(&uStack_e8,&UNK_143062632,3,(longlong)&uStack_358 + 4);
        if (pppppppbVar13 == (byte *******)0x0) {
          uStack_88 = (undefined4)uStack_c8;
          uStack_84 = uStack_c8._4_4_;
          uStack_80 = (undefined4)uStack_c0;
          uStack_7c = uStack_c0._4_4_;
          pppppppbStack_98 = pppppppbStack_d8;
          uStack_90 = (undefined4)uStack_d0;
          uStack_8c = uStack_d0._4_4_;
          pppppppbStack_a8 = uStack_e8;
          pppppppbStack_a0 = pppppppbStack_e0;
          uStack_ad = 0;
          pdb_140ddcdc0(&pppppppbStack_128,&pppppppbStack_a8);
          pppppppbStack_a8 = pppppppbStack_120;
          if ((char)pppppppbStack_128 == '\x06') goto LAB_141bf0f9b;
          pppppppbStack_98 = pppppppbStack_118;
          uStack_90 = uStack_110;
          uStack_8c = uStack_10c;
          pppppppbStack_a8 = pppppppbStack_128;
          pppppppbStack_a0 = pppppppbStack_120;
          uStack_5b = 0;
          pdb_14192b260(&uStack_e8,&pppppppbStack_170,&pppppppbStack_150,&pppppppbStack_a8);
          switch((ulonglong)uStack_e8 & 0xff) {
          case 0:
          case 1:
          case 2:
          case 6:
            break;
          case 3:
            if (pppppppbStack_e0 != (byte *******)0x0) {
              uVar31 = 1;
              pppppppbVar13 = pppppppbStack_d8;
              pppppppbVar26 = pppppppbStack_e0;
code_r0x000141beec7a:
              pub_1406abac0((byte *)pppppppbVar13,(ulonglong)pppppppbVar26,uVar31);
            }
            break;
          case 4:
            pppppppbStack_58 = pppppppbStack_d8;
            pdb_14098ae50(pppppppbStack_d8,uStack_d0);
            if (pppppppbStack_e0 != (byte *******)0x0) {
              uVar31 = 8;
              pppppppbVar13 = pppppppbStack_58;
              pppppppbVar26 = (byte *******)((longlong)pppppppbStack_e0 << 5);
              goto code_r0x000141beec7a;
            }
            break;
          default:
            pdb_1409a45e0(&pppppppbStack_e0);
          }
          pdb_14007ee60();
          pppppppbVar13 = (byte *******)pub_1406abab0(5,1);
          if (pppppppbVar13 == (byte *******)0x0) {
            pdb_142dc7e2a(1,5);
            goto LAB_141bf132e;
          }
          *(byte *)((longlong)pppppppbVar13 + 4) = 0x73;
          *(undefined4 *)pppppppbVar13 = 0x65657254;
          pppppppbStack_128 = (byte *******)0x5;
          pppppppbStack_118 = (byte *******)0x5;
          uStack_67 = 1;
          pppppppbStack_120 = pppppppbVar13;
          pdb_141bfc5c0(&pppppppbStack_a8,&lStack_298);
          if ((char)pppppppbStack_a8 == '\x06') {
            uStack_e8 = pppppppbStack_a0;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_14339ba50,0x2b,&uStack_e8,&UNK_14339ba30,&UNK_14339b630);
          }
          pppppppbStack_d8 = pppppppbStack_98;
          uStack_d0 = (byte *******)CONCAT44(uStack_8c,uStack_90);
          uStack_e8 = pppppppbStack_a8;
          pppppppbStack_e0 = pppppppbStack_a0;
          uStack_67 = 0;
          pdb_14192b260(&pppppppbStack_a8,&pppppppbStack_170,&pppppppbStack_128,&uStack_e8);
          switch((ulonglong)pppppppbStack_a8 & 0xff) {
          case 0:
          case 1:
          case 2:
          case 6:
            break;
          case 3:
            if (pppppppbStack_a0 != (byte *******)0x0) {
              uVar31 = 1;
              pppppppbVar13 = pppppppbStack_98;
              pppppppbVar26 = pppppppbStack_a0;
code_r0x000141beedb1:
              pub_1406abac0((byte *)pppppppbVar13,(ulonglong)pppppppbVar26,uVar31);
            }
            break;
          case 4:
            pppppppbStack_58 = pppppppbStack_98;
            pdb_14098ae50(pppppppbStack_98,CONCAT44(uStack_8c,uStack_90));
            if (pppppppbStack_a0 != (byte *******)0x0) {
              uVar31 = 8;
              pppppppbVar13 = pppppppbStack_58;
              pppppppbVar26 = (byte *******)((longlong)pppppppbStack_a0 << 5);
              goto code_r0x000141beedb1;
            }
            break;
          default:
            pdb_1409a45e0(&pppppppbStack_a0);
          }
          pdb_14007ee60();
          pppppppbVar13 = (byte *******)pub_1406abab0(0xb,1);
          if (pppppppbVar13 == (byte *******)0x0) {
            pdb_142dc7e2a(1,0xb);
            goto LAB_141bf132e;
          }
          *pppppppbVar13 = (byte ******)0x74756c436f747541;
          pbVar12 = (byte *)((longlong)pppppppbVar13 + 7);
          pbVar12[0] = 0x74;
          pbVar12[1] = 0x74;
          pbVar12[2] = 0x65;
          pbVar12[3] = 0x72;
          pppppppbStack_128 = (byte *******)0xb;
          pppppppbStack_118 = (byte *******)0xb;
          uStack_68 = 1;
          pppppppbStack_120 = pppppppbVar13;
          pdb_141bfd400(&pppppppbStack_a8,&lStack_208);
          if ((char)pppppppbStack_a8 == '\x06') {
            uStack_e8 = pppppppbStack_a0;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_14339ba50,0x2b,&uStack_e8,&UNK_14339ba30,&UNK_14339b630);
          }
          pppppppbStack_d8 = pppppppbStack_98;
          uStack_d0 = (byte *******)CONCAT44(uStack_8c,uStack_90);
          uStack_e8 = pppppppbStack_a8;
          pppppppbStack_e0 = pppppppbStack_a0;
          uStack_68 = 0;
          pdb_14192b260(&pppppppbStack_a8,&pppppppbStack_170,&pppppppbStack_128,&uStack_e8);
          switch((ulonglong)pppppppbStack_a8 & 0xff) {
          case 0:
          case 1:
          case 2:
          case 6:
            break;
          case 3:
            if (pppppppbStack_a0 != (byte *******)0x0) {
              uVar31 = 1;
              pppppppbVar13 = pppppppbStack_98;
              pppppppbVar26 = pppppppbStack_a0;
code_r0x000141beeef2:
              pub_1406abac0((byte *)pppppppbVar13,(ulonglong)pppppppbVar26,uVar31);
            }
            break;
          case 4:
            pppppppbStack_58 = pppppppbStack_98;
            pdb_14098ae50(pppppppbStack_98,CONCAT44(uStack_8c,uStack_90));
            if (pppppppbStack_a0 != (byte *******)0x0) {
              uVar31 = 8;
              pppppppbVar13 = pppppppbStack_58;
              pppppppbVar26 = (byte *******)((longlong)pppppppbStack_a0 << 5);
              goto code_r0x000141beeef2;
            }
            break;
          default:
            pdb_1409a45e0(&pppppppbStack_a0);
          }
          pdb_14007ee60();
          pppppppbVar13 = (byte *******)pub_1406abab0(6,1);
          if (pppppppbVar13 == (byte *******)0x0) {
            pdb_142dc7e2a(1,6);
            goto LAB_141bf132e;
          }
          ((byte *)((longlong)pppppppbVar13 + 4))[0] = 0x72;
          ((byte *)((longlong)pppppppbVar13 + 4))[1] = 0x73;
          *(undefined4 *)pppppppbVar13 = 0x69617453;
          pppppppbStack_150 = (byte *******)0x6;
          pppppppbStack_140 = (byte *******)0x6;
          uStack_e8 = (byte *******)0x8000000000000000;
          uStack_d0 = (byte *******)0x0;
          uStack_c0 = (byte *******)0x0;
          uStack_ae = 1;
          pppppppbStack_148 = pppppppbVar13;
          pppppppbVar13 = (byte *******)pdb_141c03690(&uStack_e8,&UNK_143337c93,5,&lStack_378);
          if (pppppppbVar13 == (byte *******)0x0) {
            uStack_ae = 1;
            pppppppbVar13 = (byte *******)pdb_141c06880(&uStack_e8,&UNK_143337c98,8,&uStack_388);
            if (pppppppbVar13 == (byte *******)0x0) {
              uStack_88 = (undefined4)uStack_c8;
              uStack_84 = uStack_c8._4_4_;
              uStack_80 = (undefined4)uStack_c0;
              uStack_7c = uStack_c0._4_4_;
              pppppppbStack_98 = pppppppbStack_d8;
              uStack_90 = (undefined4)uStack_d0;
              uStack_8c = uStack_d0._4_4_;
              pppppppbStack_a8 = uStack_e8;
              pppppppbStack_a0 = pppppppbStack_e0;
              uStack_ae = 0;
              pdb_140ddcdc0(&pppppppbStack_128,&pppppppbStack_a8);
              pppppppbStack_a8 = pppppppbStack_120;
              if ((char)pppppppbStack_128 == '\x06') goto LAB_141bf0fea;
              pppppppbStack_98 = pppppppbStack_118;
              uStack_90 = uStack_110;
              uStack_8c = uStack_10c;
              pppppppbStack_a8 = pppppppbStack_128;
              pppppppbStack_a0 = pppppppbStack_120;
              uStack_5c = 0;
              pdb_14192b260(&uStack_e8,&pppppppbStack_170,&pppppppbStack_150,&pppppppbStack_a8);
              switch((ulonglong)uStack_e8 & 0xff) {
              case 0:
              case 1:
              case 2:
              case 6:
                break;
              case 3:
                if (pppppppbStack_e0 != (byte *******)0x0) {
                  uVar31 = 1;
                  pppppppbVar13 = pppppppbStack_d8;
                  pppppppbVar26 = pppppppbStack_e0;
code_r0x000141bef0da:
                  pub_1406abac0((byte *)pppppppbVar13,(ulonglong)pppppppbVar26,uVar31);
                }
                break;
              case 4:
                pppppppbStack_58 = pppppppbStack_d8;
                pdb_14098ae50(pppppppbStack_d8,uStack_d0);
                if (pppppppbStack_e0 != (byte *******)0x0) {
                  uVar31 = 8;
                  pppppppbVar13 = pppppppbStack_58;
                  pppppppbVar26 = (byte *******)((longlong)pppppppbStack_e0 << 5);
                  goto code_r0x000141bef0da;
                }
                break;
              default:
                pdb_1409a45e0(&pppppppbStack_e0);
              }
              pdb_14007ee60();
              pppppppbVar13 = (byte *******)pub_1406abab0(0x15,1);
              ppppppbVar2 = _UNK_14339b6e6;
              if (pppppppbVar13 == (byte *******)0x0) {
                pdb_142dc7e2a(1,0x15);
                goto LAB_141bf132e;
              }
              *pppppppbVar13 = _DAT_14339b6de;
              pppppppbVar13[1] = ppppppbVar2;
              pbVar12 = (byte *)((longlong)pppppppbVar13 + 0xd);
              pbVar12[0] = 0x53;
              pbVar12[1] = 0x75;
              pbVar12[2] = 0x70;
              pbVar12[3] = 0x70;
              pbVar12[4] = 0x6f;
              pbVar12[5] = 0x72;
              pbVar12[6] = 0x74;
              pbVar12[7] = 0x73;
              pppppppbStack_150 = (byte *******)0x15;
              pppppppbStack_140 = (byte *******)0x15;
              uStack_e8 = (byte *******)0x8000000000000000;
              uStack_d0 = (byte *******)0x0;
              uStack_c0 = (byte *******)0x0;
              uStack_ea = 1;
              pppppppbStack_148 = pppppppbVar13;
              pppppppbVar13 = (byte *******)pdb_141c015e0(&uStack_e8,&UNK_143356212,5,&lStack_418);
              if (pppppppbVar13 != (byte *******)0x0) {
                uStack_5d = 1;
                pdb_1418c2140(&uStack_e8);
                pppppppbStack_a8 = pppppppbVar13;
LAB_141bf1209:
                    /* WARNING: Subroutine does not return */
                pdb_142dc8170(&UNK_14339ba50,0x2b,&pppppppbStack_a8,&UNK_14339ba30,&UNK_14339b630);
              }
              uStack_88 = (undefined4)uStack_c8;
              uStack_84 = uStack_c8._4_4_;
              uStack_80 = (undefined4)uStack_c0;
              uStack_7c = uStack_c0._4_4_;
              pppppppbStack_98 = pppppppbStack_d8;
              uStack_90 = (undefined4)uStack_d0;
              uStack_8c = uStack_d0._4_4_;
              pppppppbStack_a8 = uStack_e8;
              pppppppbStack_a0 = pppppppbStack_e0;
              uStack_ea = 0;
              pdb_140ddcdc0(&pppppppbStack_128,&pppppppbStack_a8);
              pppppppbStack_a8 = pppppppbStack_120;
              if ((char)pppppppbStack_128 == '\x06') goto LAB_141bf1209;
              pppppppbStack_98 = pppppppbStack_118;
              uStack_90 = uStack_110;
              uStack_8c = uStack_10c;
              pppppppbStack_a8 = pppppppbStack_128;
              pppppppbStack_a0 = pppppppbStack_120;
              uStack_5d = 0;
              pdb_14192b260(&uStack_e8,&pppppppbStack_170,&pppppppbStack_150,&pppppppbStack_a8);
              switch((ulonglong)uStack_e8 & 0xff) {
              case 0:
              case 1:
              case 2:
              case 6:
                break;
              case 3:
                if (pppppppbStack_e0 != (byte *******)0x0) {
                  uVar31 = 1;
                  pppppppbVar13 = pppppppbStack_d8;
                  pppppppbVar26 = pppppppbStack_e0;
code_r0x000141bef2a2:
                  pub_1406abac0((byte *)pppppppbVar13,(ulonglong)pppppppbVar26,uVar31);
                }
                break;
              case 4:
                pppppppbStack_58 = pppppppbStack_d8;
                pdb_14098ae50(pppppppbStack_d8,uStack_d0);
                if (pppppppbStack_e0 != (byte *******)0x0) {
                  uVar31 = 8;
                  pppppppbVar13 = pppppppbStack_58;
                  pppppppbVar26 = (byte *******)((longlong)pppppppbStack_e0 << 5);
                  goto code_r0x000141bef2a2;
                }
                break;
              default:
                pdb_1409a45e0(&pppppppbStack_e0);
              }
              pppppppbStack_238 = pppppppbStack_170;
              pppppppbStack_230 = pppppppbStack_168;
              pppppppbStack_228 = pppppppbStack_160;
              auStack_240[0] = 5;
              uStack_49 = 1;
              uStack_4a = 1;
              pppppppbStack_188 = pppppppbVar24;
              pdb_1417087b0(&pppppppbStack_a8,&puStack_220,&UNK_14339b6f3,8);
              pppppppbVar13 = pppppppbStack_a8;
              pppppppbVar24 = pppppppbStack_228;
              if (pppppppbStack_a8 == (byte *******)0x0) {
                uStack_49 = 1;
                uStack_4a = 1;
                uVar31 = pdb_142deaf00();
LAB_141bef7fb:
                puStack_158[1] = uVar31;
                *puStack_158 = 0x8000000000000000;
                uStack_4b = 1;
                uStack_4c = 1;
                uStack_4d = 1;
                cVar21 = '\x01';
                pdb_1409a45e0(&pppppppbStack_238);
                cVar10 = '\x01';
                if (auStack_218._8_8_ != 0) {
LAB_141bef841:
                  cVar21 = cVar10;
                  uStack_ab = 1;
                  cStack_aa = cVar21;
                  pdb_1404b38e0(auStack_218 + 8);
                }
              }
              else {
                ppppppbVar2 = *pppppppbStack_a8;
                ppppppbVar3 = pppppppbStack_a8[1];
                ppppppbVar36 = (byte ******)((longlong)ppppppbVar3 + 1);
                ppppppbVar28 = (byte ******)0xffffffffffffffff;
                if (ppppppbVar36 != (byte ******)0x0) {
                  ppppppbVar28 = ppppppbVar36;
                }
                if (*ppppppbVar2 < ppppppbVar28) {
                  pppppbVar4 = ppppppbVar2[2];
                  if ((ulonglong)((longlong)*ppppppbVar2 - (longlong)pppppbVar4) <
                      (ulonglong)((longlong)ppppppbVar28 - (longlong)pppppbVar4)) {
                    pdb_142d7f1b0(ppppppbVar2,pppppbVar4,
                                  (longlong)ppppppbVar28 - (longlong)pppppbVar4,1,1);
                  }
                }
                if (ppppppbVar2[2] < ppppppbVar3) {
                  pub_142e32780((longlong)ppppppbVar2[2] + (longlong)ppppppbVar2[1]);
                  ppppppbVar2[2] = (byte *****)ppppppbVar3;
                  *(undefined1 *)((longlong)ppppppbVar3 + (longlong)ppppppbVar2[1]) = 0x7b;
                  if (ppppppbVar2[2] < ppppppbVar36) goto LAB_141bef3cb;
LAB_141bef3ab:
                  pppppppbVar13[1] = ppppppbVar36;
                  pppppppbVar13 = pppppppbStack_a8;
                }
                else {
                  *(undefined1 *)((longlong)ppppppbVar3 + (longlong)ppppppbVar2[1]) = 0x7b;
                  if (ppppppbVar36 <= ppppppbVar2[2]) goto LAB_141bef3ab;
LAB_141bef3cb:
                  ppppppbVar2[2] = (byte *****)ppppppbVar36;
                  pppppppbVar13[1] = ppppppbVar36;
                  pppppppbVar13 = pppppppbStack_a8;
                }
                uVar11 = 1;
                pppppppbStack_a8 = pppppppbVar13;
                if (pppppppbVar24 == (byte *******)0x0) {
                  ppppppbVar2 = *pppppppbVar13;
                  ppppppbVar3 = pppppppbVar13[1];
                  ppppppbVar36 = (byte ******)((longlong)ppppppbVar3 + 1);
                  ppppppbVar28 = (byte ******)0xffffffffffffffff;
                  if (ppppppbVar36 != (byte ******)0x0) {
                    ppppppbVar28 = ppppppbVar36;
                  }
                  if (*ppppppbVar2 < ppppppbVar28) {
                    pppppbVar4 = ppppppbVar2[2];
                    if ((ulonglong)((longlong)*ppppppbVar2 - (longlong)pppppbVar4) <
                        (ulonglong)((longlong)ppppppbVar28 - (longlong)pppppbVar4)) {
                      pdb_142d7f1b0(ppppppbVar2,pppppbVar4,
                                    (longlong)ppppppbVar28 - (longlong)pppppbVar4,1,1);
                    }
                  }
                  if (ppppppbVar2[2] < ppppppbVar3) {
                    pub_142e32780((longlong)ppppppbVar2[2] + (longlong)ppppppbVar2[1]);
                    ppppppbVar2[2] = (byte *****)ppppppbVar3;
                  }
                  *(undefined1 *)((longlong)ppppppbVar3 + (longlong)ppppppbVar2[1]) = 0x7d;
                  if (ppppppbVar2[2] < ppppppbVar36) {
                    ppppppbVar2[2] = (byte *****)ppppppbVar36;
                  }
                  pppppppbVar13[1] = ppppppbVar36;
                  uVar11 = 0;
                }
                uStack_e8 = (byte *******)
                            ((ulonglong)CONCAT61((int6)((ulonglong)uStack_e8 >> 0x10),uVar11) << 8);
                bVar39 = pppppppbStack_238 != (byte *******)0x0;
                if (!bVar39) {
                  pppppppbVar24 = (byte *******)0x0;
                }
                pppppppbVar26 = (byte *******)0x0;
                pppppppbVar13 = pppppppbStack_238;
                pppppppbVar14 = pppppppbStack_230;
                pppppppbStack_e0 = (byte *******)&pppppppbStack_a8;
                do {
                  bVar38 = pppppppbVar24 == (byte *******)0x0;
                  pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + -1);
                  if (bVar38) {
                    if ((char)uStack_e8 == '\x01') {
                    /* WARNING: Subroutine does not return */
                      pdb_142dc83b0(&UNK_14339bb78,0x28,&UNK_14339bbe8);
                    }
                    if (uStack_e8._1_1_ != '\0') {
                      ppppppbVar2 = *pppppppbStack_e0;
                      pppppbVar4 = *ppppppbVar2;
                      pppppbVar5 = ppppppbVar2[1];
                      pppppbVar23 = (byte *****)((longlong)pppppbVar5 + 1);
                      pppppbVar29 = (byte *****)0xffffffffffffffff;
                      if (pppppbVar23 != (byte *****)0x0) {
                        pppppbVar29 = pppppbVar23;
                      }
                      if (*pppppbVar4 < pppppbVar29) {
                        ppppbVar6 = pppppbVar4[2];
                        if ((ulonglong)((longlong)*pppppbVar4 - (longlong)ppppbVar6) <
                            (ulonglong)((longlong)pppppbVar29 - (longlong)ppppbVar6)) {
                          pdb_142d7f1b0(pppppbVar4,ppppbVar6,
                                        (longlong)pppppbVar29 - (longlong)ppppbVar6,1,1);
                        }
                      }
                      if (pppppbVar4[2] < pppppbVar5) {
                        pub_142e32780((longlong)pppppbVar4[2] + (longlong)pppppbVar4[1],0);
                        pppppbVar4[2] = (byte ****)pppppbVar5;
                      }
                      *(undefined1 *)((longlong)pppppbVar5 + (longlong)pppppbVar4[1]) = 0x7d;
                      if (pppppbVar4[2] < pppppbVar23) {
                        pppppbVar4[2] = (byte ****)pppppbVar23;
                      }
                      ppppppbVar2[1] = pppppbVar23;
                    }
                    lVar16 = 0;
                    break;
                  }
                  if (!bVar39) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc8150(&UNK_143359188);
                  }
                  if (pppppppbVar26 == (byte *******)0x0) {
                    pppppppbVar22 = pppppppbVar13;
                    if (pppppppbVar14 != (byte *******)0x0) {
                      pppppppbVar26 = pppppppbVar14;
                      if (((ulonglong)pppppppbVar14 & 7) != 0) {
                        uVar31 = 0;
                        do {
                          pppppppbVar13 = (byte *******)pppppppbVar13[0x4f];
                          uVar31 = uVar31 + 1;
                        } while (((ulonglong)pppppppbVar14 & 7) != uVar31);
                        pppppppbVar26 = (byte *******)((longlong)pppppppbVar14 - uVar31);
                      }
                      pppppppbVar22 = pppppppbVar13;
                      if ((byte *******)0x7 < pppppppbVar14) {
                        do {
                          pppppppbVar13 =
                               *(byte ********)
                                (*(longlong *)
                                  (pppppppbVar13[0x4f][0x4f][0x4f][0x4f][0x4f][0x4f] + 0x278) +
                                0x278);
                          pppppppbVar26 = pppppppbVar26 + -1;
                          pppppppbVar22 = pppppppbVar13;
                        } while (pppppppbVar26 != (byte *******)0x0);
                      }
                    }
                    pppppppbVar14 = (byte *******)0x0;
                    pppppppbVar13 = (byte *******)0x0;
                    if (*(short *)((longlong)pppppppbVar22 + 0x272) == 0) goto LAB_141bef570;
                  }
                  else {
                    pppppppbVar22 = pppppppbVar26;
                    if ((byte *******)(ulonglong)*(ushort *)((longlong)pppppppbVar26 + 0x272) <=
                        pppppppbVar14) {
LAB_141bef570:
                      do {
                        pppppppbVar26 = (byte *******)pppppppbVar22[0x2c];
                        if (pppppppbVar26 == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
                          pdb_142dc8150(&UNK_143359c48);
                        }
                        pppppppbVar13 = (byte *******)((longlong)pppppppbVar13 + 1);
                        pppppppbVar15 = pppppppbVar22 + 0x4e;
                        pppppppbVar14 = (byte *******)(ulonglong)*(ushort *)pppppppbVar15;
                        pppppppbVar22 = pppppppbVar26;
                      } while (*(ushort *)((longlong)pppppppbVar26 + 0x272) <=
                               *(ushort *)pppppppbVar15);
                    }
                  }
                  pppppppbVar26 = pppppppbVar22;
                  if (pppppppbVar13 == (byte *******)0x0) {
                    pppppppbVar15 = (byte *******)((longlong)pppppppbVar14 + 1);
                  }
                  else {
                    pppppppbVar15 = pppppppbVar22 + (longlong)(pppppppbVar14 + 10);
                    pppppppbVar30 = pppppppbVar13;
                    if (((ulonglong)pppppppbVar13 & 7) != 0) {
                      uVar31 = 0;
                      do {
                        pppppppbVar26 = (byte *******)*pppppppbVar15;
                        pppppppbVar15 = pppppppbVar26 + 0x4f;
                        uVar31 = uVar31 + 1;
                      } while (((ulonglong)pppppppbVar13 & 7) != uVar31);
                      pppppppbVar30 = (byte *******)((longlong)pppppppbVar13 - uVar31);
                    }
                    if ((byte *******)0x7 < pppppppbVar13) {
                      do {
                        pppppppbVar26 =
                             *(byte ********)
                              (*(longlong *)((*pppppppbVar15)[0x4f][0x4f][0x4f][0x4f][0x4f] + 0x278)
                              + 0x278);
                        pppppppbVar15 = pppppppbVar26 + 0x4f;
                        pppppppbVar30 = pppppppbVar30 + -1;
                      } while (pppppppbVar30 != (byte *******)0x0);
                    }
                    pppppppbVar15 = (byte *******)0x0;
                  }
                  lVar16 = pdb_141b7d5e0(&uStack_e8,
                                         pppppppbVar22 + (longlong)pppppppbVar14 * 3 + 0x2d,
                                         pppppppbVar22 + (longlong)pppppppbVar14 * 4);
                  bVar39 = true;
                  pppppppbVar13 = (byte *******)0x0;
                  pppppppbVar14 = pppppppbVar15;
                } while (lVar16 == 0);
                pppppppbVar26 = pppppppbStack_98;
                pppppppbVar13 = pppppppbStack_a8;
                ppppppbVar2 = *pppppppbStack_a8;
                ppppppbVar3 = pppppppbStack_a8[1];
                pppppppbVar24 = pppppppbStack_98 + 1;
                pppppppbStack_a8[1] = (byte ******)pppppppbVar24;
                pppppppbVar14 = (byte *******)0xffffffffffffffff;
                if (pppppppbVar24 < (byte *******)0xfffffffffffffff8) {
                  pppppppbVar14 = pppppppbStack_98 + 2;
                }
                if (*ppppppbVar2 < pppppppbVar14) {
                  pppppbVar4 = ppppppbVar2[2];
                  if ((ulonglong)((longlong)*ppppppbVar2 - (longlong)pppppbVar4) <
                      (ulonglong)((longlong)pppppppbVar14 - (longlong)pppppbVar4)) {
                    uStack_49 = 1;
                    uStack_4a = 1;
                    pdb_142d7f1b0(ppppppbVar2,pppppbVar4,
                                  (longlong)pppppppbVar14 - (longlong)pppppbVar4,1,1);
                  }
                }
                uStack_390 = uVar17;
                if (ppppppbVar2[2] < pppppppbVar24) {
                  pub_142e32780((byte *)((longlong)ppppppbVar2[2] + (longlong)ppppppbVar2[1]),0);
                  ppppppbVar2[2] = (byte *****)pppppppbVar24;
                }
                *(longlong *)((longlong)pppppppbVar26 + (longlong)(ppppppbVar2[1] + 1)) =
                     (longlong)ppppppbVar3 + (-0x10 - (longlong)pppppppbVar26);
                if (ppppppbVar2[2] < pppppppbVar26 + 2) {
                  ppppppbVar2[2] = (byte *****)(pppppppbVar26 + 2);
                }
                pppppppbVar13[1] = ppppppbVar3;
                pppppppbStack_58 = pppppppbStack_a0;
                if (*pppppppbStack_a0 != (byte ******)0x0) {
                  pdb_1404b38e0(pppppppbStack_a0);
                }
                *pppppppbStack_58 = (byte ******)0x0;
                if (lVar16 != 0) {
                  uStack_49 = 1;
                  uStack_4a = 1;
                  uVar31 = pdb_142dead00(lVar16);
                  goto LAB_141bef7fb;
                }
                pppppppbStack_138 = pppppppbStack_1e0 + (longlong)pppppppbStack_1d8 * 5;
                pppppppbStack_150 = pppppppbStack_1e0;
                pppppppbStack_148 = pppppppbStack_1e0;
                pppppppbStack_140 = pppppppbStack_1e8;
                while (uVar17 = uStack_390, pppppppbVar24 = pppppppbStack_148,
                      pppppppbStack_148 != pppppppbStack_138) {
                  pppppppbVar24 = pppppppbStack_148 + 5;
                  if (SBORROW8(0,(longlong)pppppppbStack_148[2])) break;
                  ppppppbVar2 = *pppppppbStack_148;
                  pppppppbVar24 = pppppppbStack_148 + 1;
                  pppppppbStack_58 = (byte *******)pppppppbStack_148[3];
                  ppppppbVar3 = pppppppbStack_148[4];
                  pppppppbStack_180 = (byte *******)pppppppbStack_148[2];
                  pppppppbStack_148 = pppppppbStack_148 + 5;
                  uVar17 = pdb_142565c50(ppppppbVar2,*pppppppbVar24);
                  pdb_141708620(&pppppppbStack_a8,&puStack_220,uVar17);
                  pppppppbVar24 = pppppppbStack_a8;
                  if (pppppppbStack_a8 == (byte *******)0x0) {
                    uVar31 = pdb_142deaf00();
                    puStack_158[1] = uVar31;
                    *puStack_158 = 0x8000000000000000;
LAB_141bf040c:
                    if (pppppppbStack_180 != (byte *******)0x0) {
                      pub_1406abac0((byte *)pppppppbStack_58,(ulonglong)pppppppbStack_180,1);
                    }
                    if (pppppppbStack_138 != pppppppbStack_148) {
                      uVar31 = (ulonglong)
                               ((longlong)pppppppbStack_138 - (longlong)pppppppbStack_148) / 0x28;
                      pppppppbVar24 = pppppppbStack_148 + 3;
                      do {
                        if (pppppppbVar24[-1] != (byte ******)0x0) {
                          pub_1406abac0((byte *)*pppppppbVar24,(ulonglong)pppppppbVar24[-1],1);
                        }
                        pppppppbVar24 = pppppppbVar24 + 5;
                        uVar31 = uVar31 - 1;
                      } while (uVar31 != 0);
                    }
                    if (pppppppbStack_140 != (byte *******)0x0) {
                      pub_1406abac0((byte *)pppppppbStack_150,(longlong)pppppppbStack_140 * 0x28,8);
                    }
                    goto LAB_141bf061b;
                  }
                  pppppppbStack_170 = pppppppbStack_a8;
                  pppppppbStack_168 = pppppppbStack_a0;
                  pppppppbStack_160 = pppppppbStack_98;
                  ppppppbVar2 = *pppppppbStack_a8;
                  ppppppbVar28 = pppppppbStack_a8[1];
                  ppppppbVar27 = ppppppbVar28 + 1;
                  ppppppbVar36 = ppppppbVar27;
                  if ((byte ******)0xfffffffffffffff7 < ppppppbVar28) {
                    ppppppbVar36 = (byte ******)0xffffffffffffffff;
                  }
                  if (*ppppppbVar2 < ppppppbVar36) {
                    pppppbVar4 = ppppppbVar2[2];
                    if ((ulonglong)((longlong)*ppppppbVar2 - (longlong)pppppbVar4) <
                        (ulonglong)((longlong)ppppppbVar36 - (longlong)pppppbVar4)) {
                      pdb_142d7f1b0(ppppppbVar2,pppppbVar4,
                                    (longlong)ppppppbVar36 - (longlong)pppppbVar4,1,1);
                    }
                  }
                  if (ppppppbVar2[2] < ppppppbVar28) {
                    pub_142e32780((longlong)ppppppbVar2[2] + (longlong)ppppppbVar2[1],0);
                    ppppppbVar2[2] = (byte *****)ppppppbVar28;
                  }
                  *(byte *******)((longlong)ppppppbVar28 + (longlong)ppppppbVar2[1]) = ppppppbVar3;
                  if (ppppppbVar2[2] < ppppppbVar27) {
                    ppppppbVar2[2] = (byte *****)ppppppbVar27;
                  }
                  pppppppbVar24[1] = ppppppbVar27;
                  pdb_140dbead0(&pppppppbStack_a8,6,0);
                  pdb_14007ee60();
                  pppppppbVar24 = (byte *******)pub_1406abab0(0x8000,1);
                  if (pppppppbVar24 == (byte *******)0x0) {
                    pdb_142dc7e2a(1,0x8000);
                    goto LAB_141bf132e;
                  }
                  pppppppbStack_b8 = (byte *******)&pppppppbStack_170;
                  uStack_c0 = pppppppbStack_98;
                  uStack_d0 = pppppppbStack_a8;
                  uStack_c8 = pppppppbStack_a0;
                  uStack_e8 = (byte *******)0x8000;
                  pppppppbStack_d8 = (byte *******)0x0;
                  uStack_4e = 1;
                  pppppppbStack_e0 = pppppppbVar24;
                  pppppppbVar24 =
                       (byte *******)pdb_140c913f0(&uStack_e8,pppppppbStack_58,ppppppbVar3);
                  if (pppppppbVar24 != (byte *******)0x0) {
                    uStack_ef = 1;
                    pppppppbStack_398 = pppppppbVar24;
                    pdb_140f3f5b0(&pppppppbStack_a8);
                    uStack_108 = uStack_88;
                    uStack_104 = uStack_84;
                    uStack_100 = uStack_80;
                    uStack_fc = uStack_7c;
                    pppppppbStack_118 = pppppppbStack_98;
                    uStack_110 = uStack_90;
                    uStack_10c = uStack_8c;
                    pppppppbStack_128 = pppppppbStack_a8;
                    pppppppbStack_120 = pppppppbStack_a0;
                    pppppppbStack_a8 = (byte *******)&UNK_14339b739;
                    pppppppbStack_a0 = (byte *******)0x17;
                    uStack_ef = 0;
                    pppppppbStack_98 = pppppppbVar24;
                    uVar31 = pdb_142dea990(&pppppppbStack_a8,&pppppppbStack_128);
                    puStack_158[1] = uVar31;
                    *puStack_158 = 0x8000000000000000;
                    pdb_14097d590(&uStack_e8);
LAB_141bf0353:
                    pppppppbVar26 = pppppppbStack_160;
                    pppppppbVar13 = pppppppbStack_170;
                    ppppppbVar2 = *pppppppbStack_170;
                    ppppppbVar3 = pppppppbStack_170[1];
                    pppppppbVar24 = pppppppbStack_160 + 1;
                    pppppppbStack_170[1] = (byte ******)pppppppbVar24;
                    pppppppbVar14 = (byte *******)0xffffffffffffffff;
                    if (pppppppbVar24 < (byte *******)0xfffffffffffffff8) {
                      pppppppbVar14 = pppppppbStack_160 + 2;
                    }
                    if (*ppppppbVar2 < pppppppbVar14) {
                      pppppbVar4 = ppppppbVar2[2];
                      if ((ulonglong)((longlong)*ppppppbVar2 - (longlong)pppppbVar4) <
                          (ulonglong)((longlong)pppppppbVar14 - (longlong)pppppbVar4)) {
                        pdb_142d7f1b0(ppppppbVar2,pppppbVar4,
                                      (longlong)pppppppbVar14 - (longlong)pppppbVar4,1,1);
                      }
                    }
                    if (ppppppbVar2[2] < pppppppbVar24) {
                      pub_142e32780((byte *)((longlong)ppppppbVar2[2] + (longlong)ppppppbVar2[1]),0)
                      ;
                      ppppppbVar2[2] = (byte *****)pppppppbVar24;
                    }
                    *(longlong *)((longlong)pppppppbVar26 + (longlong)(ppppppbVar2[1] + 1)) =
                         (longlong)ppppppbVar3 + (-0x10 - (longlong)pppppppbVar26);
                    if (ppppppbVar2[2] < pppppppbVar26 + 2) {
                      ppppppbVar2[2] = (byte *****)(pppppppbVar26 + 2);
                    }
                    pppppppbVar13[1] = ppppppbVar3;
                    pppppppbStack_178 = pppppppbStack_168;
                    if (*pppppppbStack_168 != (byte ******)0x0) {
                      pdb_1404b38e0(pppppppbStack_168);
                    }
                    *pppppppbStack_178 = (byte ******)0x0;
                    goto LAB_141bf040c;
                  }
                  pppppppbStack_78 = pppppppbStack_b8;
                  uStack_88 = (undefined4)uStack_c8;
                  uStack_84 = uStack_c8._4_4_;
                  uStack_80 = (undefined4)uStack_c0;
                  uStack_7c = uStack_c0._4_4_;
                  pppppppbStack_98 = pppppppbStack_d8;
                  uStack_90 = (undefined4)uStack_d0;
                  uStack_8c = uStack_d0._4_4_;
                  pppppppbStack_a8 = uStack_e8;
                  pppppppbStack_a0 = pppppppbStack_e0;
                  pppppppbVar26 = (byte *******)pdb_140c28590(&pppppppbStack_a8);
                  pppppppbVar24 = pppppppbStack_78;
                  pppppppbVar13 = pppppppbVar26;
                  if ((pppppppbVar26 == (byte *******)0x0) &&
                     (pppppppbStack_78 = (byte *******)0x0, pppppppbVar13 = pppppppbVar24,
                     pppppppbVar24 == (byte *******)0x0)) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc8150(&UNK_1430768c8);
                  }
                  uStack_4e = 0;
                  pdb_14097d590(&pppppppbStack_a8);
                  pppppppbVar14 = pppppppbStack_160;
                  pppppppbVar24 = pppppppbStack_170;
                  if (pppppppbVar26 != (byte *******)0x0) {
                    uStack_4e = 0;
                    uVar31 = pdb_142deaf00(pppppppbVar13);
                    puStack_158[1] = uVar31;
                    *puStack_158 = 0x8000000000000000;
                    goto LAB_141bf0353;
                  }
                  ppppppbVar2 = *pppppppbStack_170;
                  ppppppbVar3 = pppppppbStack_170[1];
                  pppppppbVar13 = pppppppbStack_160 + 1;
                  pppppppbStack_170[1] = (byte ******)pppppppbVar13;
                  pppppppbVar26 = pppppppbStack_160 + 2;
                  if ((byte *******)0xfffffffffffffff7 < pppppppbVar13) {
                    pppppppbVar26 = (byte *******)0xffffffffffffffff;
                  }
                  if (*ppppppbVar2 < pppppppbVar26) {
                    pppppbVar4 = ppppppbVar2[2];
                    if ((ulonglong)((longlong)*ppppppbVar2 - (longlong)pppppbVar4) <
                        (ulonglong)((longlong)pppppppbVar26 - (longlong)pppppbVar4)) {
                      pdb_142d7f1b0(ppppppbVar2,pppppbVar4,
                                    (longlong)pppppppbVar26 - (longlong)pppppbVar4,1,1);
                    }
                  }
                  if (ppppppbVar2[2] < pppppppbVar13) {
                    pub_142e32780((byte *)((longlong)ppppppbVar2[2] + (longlong)ppppppbVar2[1]),0);
                    ppppppbVar2[2] = (byte *****)pppppppbVar13;
                  }
                  *(longlong *)((longlong)pppppppbVar14 + (longlong)(ppppppbVar2[1] + 1)) =
                       (longlong)ppppppbVar3 + (-0x10 - (longlong)pppppppbVar14);
                  if (ppppppbVar2[2] < pppppppbVar14 + 2) {
                    ppppppbVar2[2] = (byte *****)(pppppppbVar14 + 2);
                  }
                  pppppppbVar24[1] = ppppppbVar3;
                  pppppppbStack_178 = pppppppbStack_168;
                  if (*pppppppbStack_168 != (byte ******)0x0) {
                    pdb_1404b38e0(pppppppbStack_168);
                  }
                  *pppppppbStack_178 = (byte ******)0x0;
                  if (pppppppbStack_180 != (byte *******)0x0) {
                    pub_1406abac0((byte *)pppppppbStack_58,(ulonglong)pppppppbStack_180,1);
                  }
                }
                pppppppbStack_148 = pppppppbVar24;
                if (pppppppbStack_138 != pppppppbStack_148) {
                  uVar31 = (ulonglong)((longlong)pppppppbStack_138 - (longlong)pppppppbStack_148) /
                           0x28;
                  pppppppbVar24 = pppppppbStack_148 + 3;
                  do {
                    if (pppppppbVar24[-1] != (byte ******)0x0) {
                      pub_1406abac0((byte *)*pppppppbVar24,(ulonglong)pppppppbVar24[-1],1);
                    }
                    pppppppbVar24 = pppppppbVar24 + 5;
                    uVar31 = uVar31 - 1;
                  } while (uVar31 != 0);
                }
                if (pppppppbStack_140 != (byte *******)0x0) {
                  pub_1406abac0((byte *)pppppppbStack_150,(longlong)pppppppbStack_140 * 0x28,8);
                }
                uStack_49 = 0;
                uStack_4a = 1;
                pdb_1417087b0(&pppppppbStack_a8,&puStack_220,&UNK_14339b6af,7);
                if (pppppppbStack_a8 == (byte *******)0x0) {
                  uStack_49 = 0;
                  uStack_4a = 1;
                  uVar31 = pdb_142deaf00();
LAB_141bf04c5:
                  puStack_158[1] = uVar31;
                  *puStack_158 = 0x8000000000000000;
LAB_141bf061b:
                  uStack_4b = 0;
                  uStack_4c = 1;
                  uStack_4d = 1;
                  pdb_1409a45e0(&pppppppbStack_238);
                  cVar21 = '\0';
                  cVar10 = '\0';
                  if (auStack_218._8_8_ == 0) goto LAB_141bef85b;
                  goto LAB_141bef841;
                }
                pppppppbStack_150 = pppppppbStack_a8;
                pppppppbStack_148 = pppppppbStack_a0;
                pppppppbStack_140 = pppppppbStack_98;
                pdb_140dbead0(&pppppppbStack_a8,6,0);
                pdb_14007ee60();
                pppppppbVar24 = (byte *******)pub_1406abab0(0x8000,1);
                if (pppppppbVar24 == (byte *******)0x0) {
                  pdb_142dc7e2a(1,0x8000);
LAB_141bf132e:
                    /* WARNING: Does not return */
                  pcVar7 = (code *)invalidInstructionException();
                  (*pcVar7)();
                }
                pppppppbStack_b8 = (byte *******)&pppppppbStack_150;
                uStack_d0 = pppppppbStack_a8;
                uStack_c8 = pppppppbStack_a0;
                uStack_c0 = pppppppbStack_98;
                uStack_e8 = (byte *******)0x8000;
                pppppppbStack_d8 = (byte *******)0x0;
                uStack_5e = 1;
                pbVar12 = pbStack_198;
                pppppppbStack_e0 = pppppppbVar24;
                pppppppbVar24 =
                     (byte *******)pdb_140c913f0(&uStack_e8,pbStack_198,pppppppbStack_188);
                if (pppppppbVar24 != (byte *******)0x0) {
                  uStack_eb = 1;
                  pppppppbStack_170 = pppppppbVar24;
                  pdb_140f3f5b0(&pppppppbStack_a8);
                  uStack_108 = uStack_88;
                  uStack_104 = uStack_84;
                  uStack_100 = uStack_80;
                  uStack_fc = uStack_7c;
                  pppppppbStack_118 = pppppppbStack_98;
                  uStack_110 = uStack_90;
                  uStack_10c = uStack_8c;
                  pppppppbStack_128 = pppppppbStack_a8;
                  pppppppbStack_120 = pppppppbStack_a0;
                  pppppppbStack_a8 = (byte *******)&UNK_14339b6fb;
                  pppppppbStack_a0 = (byte *******)0x18;
                  uStack_eb = 0;
                  pppppppbStack_98 = pppppppbVar24;
                  uVar31 = pdb_142dea990(&pppppppbStack_a8,&pppppppbStack_128);
                  puStack_158[1] = uVar31;
                  *puStack_158 = 0x8000000000000000;
                  pdb_14097d590(&uStack_e8);
LAB_141bf0562:
                  pppppppbVar26 = pppppppbStack_140;
                  pppppppbVar13 = pppppppbStack_150;
                  ppppppbVar2 = *pppppppbStack_150;
                  ppppppbVar3 = pppppppbStack_150[1];
                  pppppppbVar24 = pppppppbStack_140 + 1;
                  pppppppbStack_150[1] = (byte ******)pppppppbVar24;
                  pppppppbVar14 = (byte *******)0xffffffffffffffff;
                  if (pppppppbVar24 < (byte *******)0xfffffffffffffff8) {
                    pppppppbVar14 = pppppppbStack_140 + 2;
                  }
                  if (*ppppppbVar2 < pppppppbVar14) {
                    pppppbVar4 = ppppppbVar2[2];
                    if ((ulonglong)((longlong)*ppppppbVar2 - (longlong)pppppbVar4) <
                        (ulonglong)((longlong)pppppppbVar14 - (longlong)pppppbVar4)) {
                      uStack_49 = 0;
                      uStack_4a = 1;
                      pdb_142d7f1b0(ppppppbVar2,pppppbVar4,
                                    (longlong)pppppppbVar14 - (longlong)pppppbVar4,1,1);
                    }
                  }
                  if (ppppppbVar2[2] < pppppppbVar24) {
                    pub_142e32780((byte *)((longlong)ppppppbVar2[2] + (longlong)ppppppbVar2[1]),0);
                    ppppppbVar2[2] = (byte *****)pppppppbVar24;
                  }
                  *(longlong *)((longlong)pppppppbVar26 + (longlong)(ppppppbVar2[1] + 1)) =
                       (longlong)ppppppbVar3 + (-0x10 - (longlong)pppppppbVar26);
                  if (ppppppbVar2[2] < pppppppbVar26 + 2) {
                    ppppppbVar2[2] = (byte *****)(pppppppbVar26 + 2);
                  }
                  pppppppbVar13[1] = ppppppbVar3;
                  pppppppbStack_58 = pppppppbStack_148;
                  if (*pppppppbStack_148 != (byte ******)0x0) {
                    pdb_1404b38e0(pppppppbStack_148);
                  }
                  *pppppppbStack_58 = (byte ******)0x0;
                  goto LAB_141bf061b;
                }
                pppppppbStack_78 = pppppppbStack_b8;
                uStack_88 = (undefined4)uStack_c8;
                uStack_84 = uStack_c8._4_4_;
                uStack_80 = (undefined4)uStack_c0;
                uStack_7c = uStack_c0._4_4_;
                pppppppbStack_98 = pppppppbStack_d8;
                uStack_90 = (undefined4)uStack_d0;
                uStack_8c = uStack_d0._4_4_;
                pppppppbStack_a8 = uStack_e8;
                pppppppbStack_a0 = pppppppbStack_e0;
                uStack_5e = 0;
                lVar16 = pdb_140c91a10(&pppppppbStack_a8);
                if (lVar16 == 1) {
                  uStack_5e = 0;
                  uVar31 = pdb_142deaf00(pbVar12);
                  puStack_158[1] = uVar31;
                  *puStack_158 = 0x8000000000000000;
                  goto LAB_141bf0562;
                }
                uStack_49 = 0;
                uStack_4a = 1;
                pdb_1409703e0(&pppppppbStack_150);
                uStack_49 = 0;
                uStack_4a = 1;
                pdb_1417087b0(&pppppppbStack_a8,&puStack_220,&UNK_14339b713,6);
                if (pppppppbStack_a8 == (byte *******)0x0) {
                  uStack_49 = 0;
                  uStack_4a = 1;
                  uVar31 = pdb_142deaf00();
                  goto LAB_141bf04c5;
                }
                pppppppbStack_128 = pppppppbStack_a8;
                pppppppbStack_120 = pppppppbStack_a0;
                pppppppbStack_118 = pppppppbStack_98;
                pdb_140c91950(&uStack_e8,&pppppppbStack_128,6);
                uStack_69 = 1;
                uVar17 = pdb_140c913f0(&uStack_e8,pbStack_190,uVar17);
                uStack_69 = 1;
                puVar19 = &UNK_14339b719;
                uVar31 = pdb_141707f30(uVar17,&UNK_14339b719,0x20);
                if (uVar31 != 0) {
                  puStack_158[1] = uVar31;
                  *puStack_158 = 0x8000000000000000;
                  pdb_14097d590(&uStack_e8);
LAB_141bf07e8:
                  uStack_49 = 0;
                  uStack_4a = 1;
                  pdb_1409703e0(&pppppppbStack_128);
                  goto LAB_141bf061b;
                }
                pppppppbStack_78 = pppppppbStack_b8;
                uStack_88 = (undefined4)uStack_c8;
                uStack_84 = uStack_c8._4_4_;
                uStack_80 = (undefined4)uStack_c0;
                uStack_7c = uStack_c0._4_4_;
                pppppppbStack_98 = pppppppbStack_d8;
                uStack_90 = (undefined4)uStack_d0;
                uStack_8c = uStack_d0._4_4_;
                pppppppbStack_a8 = uStack_e8;
                pppppppbStack_a0 = pppppppbStack_e0;
                uStack_69 = 0;
                lVar16 = pdb_140c91a10(&pppppppbStack_a8);
                if (lVar16 == 1) {
                  uStack_69 = 0;
                  uVar31 = pdb_142deaf00(puVar19);
                  puStack_158[1] = uVar31;
                  *puStack_158 = 0x8000000000000000;
                  goto LAB_141bf07e8;
                }
                uStack_49 = 0;
                uStack_4a = 1;
                pdb_1409703e0(&pppppppbStack_128);
                if (auStack_218._8_8_ == 0) {
                  puStack_158[2] = uStack_2a0;
                  *puStack_158 = uStack_2b0;
                  puStack_158[1] = (ulonglong)pbStack_2a8;
                  uStack_4b = 0;
                  uStack_4c = 0;
                  uStack_4d = 0;
                  pdb_140a7a6f0(auStack_240);
                  uStack_ec = 0;
                  pdb_1400db1d0(&lStack_418);
                  if (lStack_378 != 0) {
                    pub_1406abac0(pbStack_370,lStack_378 << 3,4);
                  }
                  uStack_ed = 0;
                  pdb_1409775a0(&lStack_298);
                  if (lStack_208 != 0) {
                    pub_1406abac0((byte *)puStack_200,lStack_208 << 3,8);
                  }
                  if (uStack_1a0 != 0) {
                    pub_1406abac0(pbStack_190,uStack_1a0,1);
                  }
                  if (uStack_1a8 != 0) {
                    pub_1406abac0(pbStack_198,uStack_1a8,1);
                  }
                  uStack_ee = 0;
                  pdb_1400da950(&uStack_3e8);
                  if (lStack_348 != 0) {
                    pub_1406abac0(pbStack_340,lStack_348 << 4,8);
                  }
                  if (lStack_328 != 0) {
                    pub_1406abac0(pbStack_320,lStack_328 << 4,8);
                  }
                  if (lStack_308 != 0) {
                    pub_1406abac0(pbStack_300,lStack_308 << 4,8);
                  }
                  if (lStack_2e8 != 0) {
                    pub_1406abac0(pbStack_2e0,lStack_2e8 << 4,8);
                  }
                  if (lStack_2c8 != 0) {
                    pub_1406abac0(pbStack_2c0,lStack_2c8 << 4,8);
                  }
                  pdb_14097f9b0(&lStack_278);
                  if (lStack_1c8 != 0) {
                    pub_1406abac0(pbStack_1c0,lStack_1c8 * 0x58,8);
                  }
                  pdb_140977ab0(&lStack_258);
                  goto LAB_141befc70;
                }
                uStack_49 = 0;
                uStack_4a = 0;
                uVar31 = pdb_142deaf00();
                puStack_158[1] = uVar31;
                *puStack_158 = 0x8000000000000000;
                uStack_4b = 0;
                uStack_4c = 0;
                uStack_4d = 1;
                pdb_140a7a6f0(auStack_240);
                cVar21 = '\0';
              }
LAB_141bef85b:
              if (uStack_2b0 != 0) {
                pub_1406abac0(pbStack_2a8,uStack_2b0,1);
              }
              if (lStack_410 != 0) {
                uVar31 = lStack_410 * 8 + 0x17U & 0xfffffffffffffff0;
                uVar18 = lStack_410 + uVar31 + 0x11;
                if (uVar18 != 0) {
                  pub_1406abac0((byte *)(lStack_418 - uVar31),uVar18,0x10);
                }
              }
              if (lStack_378 != 0) {
                pub_1406abac0(pbStack_370,lStack_378 << 3,4);
              }
              pbVar12 = pbStack_290;
              if (uStack_288 != 0) {
                pbVar34 = pbStack_290 + 0x10;
                uVar31 = uStack_288;
                do {
                  if (*(ulonglong *)(pbVar34 + -8) != 0) {
                    pub_1406abac0(*(byte **)pbVar34,*(ulonglong *)(pbVar34 + -8),1);
                  }
                  pbVar34 = pbVar34 + 0x40;
                  uVar31 = uVar31 - 1;
                } while (uVar31 != 0);
              }
              if (lStack_298 != 0) {
                pub_1406abac0(pbVar12,lStack_298 << 6,8);
              }
              if (lStack_208 != 0) {
                pub_1406abac0((byte *)puStack_200,lStack_208 << 3,8);
              }
              if (uStack_1a0 != 0) {
                pub_1406abac0(pbStack_190,uStack_1a0,1);
              }
              if (uStack_1a8 != 0) {
                pub_1406abac0(pbStack_198,uStack_1a8,1);
              }
              lVar16 = lStack_3d8;
              if (lStack_3d8 != 0) {
                if (lStack_3c8 != 0) {
                  auVar1 = *pauStack_3e0;
                  pauVar37 = pauStack_3e0 + 1;
                  uVar33 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                           (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                           (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                           (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                           (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                           (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                           (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                           (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                           (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                           (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                           (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                           (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                           (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                           (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                           (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                          (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
                  lVar25 = lStack_3c8;
                  pauVar35 = pauStack_3e0;
                  do {
                    if ((short)uVar33 == 0) {
                      do {
                        auVar1 = *pauVar37;
                        pauVar35 = pauVar35 + -0x30;
                        pauVar37 = pauVar37 + 1;
                        uVar33 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                          (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                          (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                          (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                          (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                          (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                          (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                          (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                          (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                          (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                          (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                          (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                          (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                          (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                          (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                         (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
                      } while (uVar33 == 0);
                    }
                    uVar8 = 0;
                    for (uVar9 = uVar33; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                      uVar8 = uVar8 + 1;
                    }
                    if (*(longlong *)(pauVar35[(ulonglong)uVar8 * -3 + -3] + 8) != 0) {
                      pub_1406abac0(*(byte **)pauVar35[(ulonglong)uVar8 * -3 + -2],
                                    *(longlong *)(pauVar35[(ulonglong)uVar8 * -3 + -3] + 8) * 0xc,4)
                      ;
                    }
                    uVar33 = uVar33 - 1 & uVar33;
                    lVar25 = lVar25 + -1;
                  } while (lVar25 != 0);
                }
                lVar25 = lVar16 * 0x30 + 0x30;
                uVar31 = lVar16 + lVar25 + 0x11;
                if (uVar31 != 0) {
                  pub_1406abac0((byte *)((longlong)pauStack_3e0 - lVar25),uVar31,0x10);
                }
              }
              if (lStack_348 != 0) {
                pub_1406abac0(pbStack_340,lStack_348 << 4,8);
              }
              if (lStack_328 != 0) {
                pub_1406abac0(pbStack_320,lStack_328 << 4,8);
              }
              if (lStack_308 != 0) {
                pub_1406abac0(pbStack_300,lStack_308 << 4,8);
              }
              if (lStack_2e8 != 0) {
                pub_1406abac0(pbStack_2e0,lStack_2e8 << 4,8);
              }
              if (lStack_2c8 != 0) {
                pub_1406abac0(pbStack_2c0,lStack_2c8 << 4,8);
              }
              pppppppbVar24 = pppppppbStack_1e0;
              if (cVar21 != '\0') {
                if (pppppppbStack_1d8 != (byte *******)0x0) {
                  pppppppbVar13 = pppppppbStack_1e0 + 3;
                  pppppppbVar26 = pppppppbStack_1d8;
                  do {
                    if (pppppppbVar13[-1] != (byte ******)0x0) {
                      pub_1406abac0((byte *)*pppppppbVar13,(ulonglong)pppppppbVar13[-1],1);
                    }
                    pppppppbVar13 = pppppppbVar13 + 5;
                    pppppppbVar26 = (byte *******)((longlong)pppppppbVar26 + -1);
                  } while (pppppppbVar26 != (byte *******)0x0);
                }
                if (pppppppbStack_1e8 != (byte *******)0x0) {
                  pub_1406abac0((byte *)pppppppbVar24,(longlong)pppppppbStack_1e8 * 0x28,8);
                }
              }
              pbVar12 = pbStack_270;
              if (uStack_268 != 0) {
                pbVar34 = pbStack_270 + 0x18;
                uVar31 = uStack_268;
                do {
                  if (*(longlong *)(pbVar34 + -8) != 0) {
                    pub_1406abac0(*(byte **)pbVar34,*(longlong *)(pbVar34 + -8) * 0x70,8);
                  }
                  pbVar34 = pbVar34 + 0x28;
                  uVar31 = uVar31 - 1;
                } while (uVar31 != 0);
              }
              if (lStack_278 != 0) {
                pub_1406abac0(pbVar12,lStack_278 * 0x28,8);
              }
              if (lStack_1c8 != 0) {
                pub_1406abac0(pbStack_1c0,lStack_1c8 * 0x58,8);
              }
              pbVar12 = pbStack_250;
              if (uStack_248 != 0) {
                pbVar34 = pbStack_250 + 0x28;
                uVar31 = uStack_248;
                do {
                  if (*(longlong *)(pbVar34 + -0x20) != 0) {
                    pub_1406abac0(*(byte **)(pbVar34 + -0x18),*(longlong *)(pbVar34 + -0x20) << 3,4)
                    ;
                  }
                  if (*(longlong *)(pbVar34 + -8) != 0) {
                    pub_1406abac0(*(byte **)pbVar34,*(longlong *)(pbVar34 + -8) << 2,4);
                  }
                  pbVar34 = pbVar34 + 0x78;
                  uVar31 = uVar31 - 1;
                } while (uVar31 != 0);
              }
              if (lStack_258 != 0) {
                pub_1406abac0(pbVar12,lStack_258 * 0x78,8);
              }
LAB_141befc70:
              pub_1406abac0(pbStack_350,0x1e0,8);
              return puStack_158;
            }
          }
          uStack_5c = 1;
          pdb_1417cc900(&uStack_e8);
          pppppppbStack_a8 = pppppppbVar13;
LAB_141bf0fea:
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_14339ba50,0x2b,&pppppppbStack_a8,&UNK_14339ba30,&UNK_14339b630);
        }
      }
      uStack_5b = 1;
      pdb_140bc0010(&uStack_e8);
      pppppppbStack_a8 = pppppppbVar13;
LAB_141bf0f9b:
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14339ba50,0x2b,&pppppppbStack_a8,&UNK_14339ba30,&UNK_14339b630);
    }
  }
  uStack_5a = 1;
  pdb_140acc880(&uStack_e8);
  pppppppbStack_a8 = pppppppbVar13;
LAB_141bf0f4c:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_14339ba50,0x2b,&pppppppbStack_a8,&UNK_14339ba30,&UNK_14339b630);
}

