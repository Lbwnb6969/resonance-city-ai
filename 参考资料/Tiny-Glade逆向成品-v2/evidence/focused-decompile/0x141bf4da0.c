// Matched PDB: country_core::systems::save::snapshot::capture_game_snapshot_save_data
// VA 0x141bf4da0, PDB extent 6780 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB: country_core::systems::save::snapshot::capture_game_snapshot_save_data
   Extent: 6780 bytes. No whole-program auto-analysis. */

longlong pdb_141bf4da0(undefined8 *param_1,ulonglong param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  byte bVar9;
  byte bVar10;
  byte bVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined8 uVar16;
  code *pcVar17;
  undefined8 uVar18;
  char cVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong *plVar23;
  undefined8 *puVar24;
  undefined *puVar25;
  longlong lVar26;
  undefined8 *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  longlong lVar33;
  undefined8 *puVar34;
  longlong lVar35;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined *puStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 *puStack_450;
  undefined *puStack_448;
  undefined8 uStack_440;
  undefined1 (*pauStack_438) [16];
  undefined1 (*pauStack_430) [16];
  undefined1 *puStack_428;
  longlong lStack_420;
  undefined8 uStack_418;
  longlong lStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined *puStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined *puStack_3b8;
  undefined8 uStack_3b0;
  undefined *puStack_3a8;
  undefined8 uStack_3a0;
  undefined8 *puStack_398;
  undefined *puStack_390;
  undefined8 uStack_388;
  undefined8 uStack_368;
  longlong lStack_360;
  longlong lStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  longlong lStack_340;
  undefined1 (*pauStack_338) [16];
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined1 uStack_2f8;
  undefined7 uStack_2f7;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined1 (*pauStack_2d8) [16];
  undefined1 (*pauStack_2d0) [16];
  undefined *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined1 (*pauStack_2b8) [16];
  undefined1 (*pauStack_2b0) [16];
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  longlong *plStack_298;
  undefined1 auStack_290 [16];
  undefined1 auStack_280 [16];
  undefined8 uStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  longlong lStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  longlong lStack_1d8;
  longlong lStack_1d0;
  longlong lStack_1c8;
  longlong lStack_1c0;
  longlong lStack_1b8;
  longlong lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 (*pauStack_178) [16];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  longlong lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  undefined1 *puStack_a8;
  undefined8 *puStack_a0;
  longlong lStack_98;
  longlong *plStack_90;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  undefined1 uStack_7d;
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  undefined1 uStack_7a;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  uStack_71 = 1;
  puStack_a0 = param_1;
  cVar19 = pdb_140e94b40();
  if (cVar19 == '\0') {
    lStack_d8 = 0;
    if (DAT_143cb2c60 == '\0') goto LAB_141bf4fe6;
LAB_141bf4f13:
    uStack_f0 = 0;
    uStack_e8 = 8;
    uStack_e0 = 0;
  }
  else {
    uStack_71 = 1;
    lVar26 = 0x46;
    lVar21 = pdb_141bf9f30(0x46);
    puVar28 = &UNK_14339ba7b;
    if (lVar21 == 1) {
      if (0x46 < param_2) {
        uStack_71 = 1;
        pdb_142dc8070(&UNK_14339ba7b,0x46,0,param_2,&UNK_14339bb48);
        goto LAB_141bf5d7c;
      }
      uStack_71 = 1;
      uVar22 = pdb_141bf9f30(param_2);
      if ((uVar22 & 1) != 0) {
        if (0x46 < param_2 + 2) {
          uStack_71 = 1;
          pdb_142dc8070(&UNK_14339ba7b,0x46,param_2 + 2,0x46,&UNK_14339bb60);
          goto LAB_141bf5d7c;
        }
        lVar26 = 0x44 - param_2;
        puVar28 = &UNK_14339ba7d + param_2;
      }
    }
    puVar29 = &UNK_14339b938;
    puVar25 = &UNK_14339b908;
    do {
      bVar9 = puVar29[-1];
      uVar20 = (uint)(char)bVar9;
      if ((char)bVar9 < '\0') {
        bVar10 = puVar29[-2];
        if ((char)bVar10 < -0x40) {
          bVar11 = puVar29[-3];
          if ((char)bVar11 < -0x40) {
            pbVar1 = puVar29 + -4;
            puVar29 = puVar29 + -4;
            uVar20 = bVar11 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar29 = puVar29 + -3;
            uVar20 = bVar11 & 0xf;
          }
          uVar20 = bVar10 & 0x3f | uVar20 << 6;
        }
        else {
          puVar29 = puVar29 + -2;
          uVar20 = bVar10 & 0x1f;
        }
        uVar20 = (uint)(bVar9 & 0x3f) | uVar20 << 6;
        if (uVar20 != 0x5c) goto LAB_141bf4ee4;
LAB_141bf4f39:
        puVar25 = puVar29 + -0x14339b907;
        if ((undefined *)0x30 < puVar25) {
          uStack_71 = 1;
          pdb_142dc8070(&UNK_14339b908,0x30,puVar25,0x30,&UNK_14339bb28);
          goto LAB_141bf5d7c;
        }
        lVar21 = 0x30 - (longlong)puVar25;
        puVar25 = puVar29 + 1;
        goto LAB_141bf4f5c;
      }
      puVar29 = puVar29 + -1;
      if (uVar20 == 0x5c) goto LAB_141bf4f39;
LAB_141bf4ee4:
      if (uVar20 == 0x2f) goto LAB_141bf4f39;
    } while (puVar29 != &UNK_14339b908);
    lVar21 = 0x30;
LAB_141bf4f5c:
    uStack_71 = 1;
    plVar23 = (longlong *)pdb_140e97000();
    if ((char)plVar23[0xd] != '\x01') {
      uStack_71 = 1;
      plVar23 = (longlong *)pdb_142d8ec20(plVar23,0);
      if (plVar23 == (longlong *)0x0) {
        uStack_71 = 1;
        pdb_142dc7890(&UNK_143326860);
        goto LAB_141bf5d7c;
      }
    }
    if (*plVar23 != 0) {
      uStack_71 = 1;
      pdb_142dc8090(&UNK_143326a50);
      goto LAB_141bf5d7c;
    }
    *plVar23 = -1;
    plStack_90 = plVar23;
    uStack_d0 = pdb_140e94f10(plVar23 + 1,puVar28,lVar26,puVar25,lVar21,1,0);
    *plStack_90 = *plStack_90 + 1;
    lStack_d8 = 1;
    if (DAT_143cb2c60 != '\0') goto LAB_141bf4f13;
LAB_141bf4fe6:
    puStack_2c0 = (undefined8 *)puStack_a0[0x29];
    pauStack_2d8 = (undefined1 (*) [16])puStack_a0[0x2a];
    pauStack_2b8 = *(undefined1 (**) [16])((longlong)puStack_2c0 + 0xf8);
    pauStack_2b0 = (undefined1 (*) [16])
                   ((longlong)pauStack_2b8 + *(longlong *)((longlong)puStack_2c0 + 0x100) * 4);
    auStack_280 = (undefined1  [16])0x0;
    auStack_290 = (undefined1  [16])0x0;
    uStack_270 = 0;
    puStack_2c8 = pauStack_2d8[0xf] + 8;
    pauStack_2d0 = (undefined1 (*) [16])(pauStack_2d8[0x19] + 8);
    puStack_2a8 = (undefined *)0x8;
    uStack_2a0 = 0;
    plStack_298 = (longlong *)0x8;
    puStack_268 = (undefined *)
                  CONCAT71(puStack_268._1_7_,*(undefined1 *)((longlong)puStack_2c0 + 0x108));
    uStack_74 = 1;
    pdb_1415ee650(&uStack_f0,&pauStack_2d8);
  }
  puVar6 = puStack_a0;
  puVar12 = (undefined8 *)puStack_a0[3];
  pauStack_2d8 = (undefined1 (*) [16])*puVar12;
  puStack_2c8 = *pauStack_2d8 + puVar12[1] + 1;
  auVar8 = *pauStack_2d8;
  pauStack_2b8 = (undefined1 (*) [16])puVar12[3];
  pauStack_2d0 = pauStack_2d8 + 1;
  uStack_75 = 1;
  uStack_76 = 1;
  puStack_2c0._0_2_ =
       ~((ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
         (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
         (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
         (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
         (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
         (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
         (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
         (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
         (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
         (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar8[0xf] >> 7) << 0xf);
  pdb_1415f4780(&puStack_450,&pauStack_2d8);
  puVar12 = (undefined8 *)puVar6[0x2c];
  pauStack_2d8 = (undefined1 (*) [16])*puVar12;
  puStack_2c8 = *pauStack_2d8 + puVar12[1] + 1;
  auVar8 = *pauStack_2d8;
  pauStack_2b8 = (undefined1 (*) [16])puVar12[3];
  pauStack_2d0 = pauStack_2d8 + 1;
  puStack_2c0 = (undefined8 *)
                CONCAT62(puStack_2c0._2_6_,
                         ~((ushort)(SUB161(auVar8 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar8[0xf] >> 7) << 0xf));
  uStack_77 = 1;
  uStack_78 = 1;
  pdb_1415f3ae0(&uStack_2f0,&pauStack_2d8);
  lVar21 = puVar6[0x2d];
  if (*(char *)(lVar21 + 0x178) == '\0') {
    uStack_72 = 1;
    uStack_73 = 1;
    pdb_142dc83b0(&UNK_14339b938,0x2e,&UNK_14339b968);
  }
  else {
    pauStack_338 = (undefined1 (*) [16])0x0;
    uStack_330 = 4;
    uStack_328 = 0;
    uStack_7a = 1;
    pdb_1417cc1a0(lVar21 + 0x28,&pauStack_338);
    puStack_2c8 = (undefined *)uStack_328;
    pauStack_2d8 = pauStack_338;
    pauStack_2d0 = (undefined1 (*) [16])uStack_330;
    uStack_7a = 0;
    pdb_140a61530(&pauStack_438,&pauStack_2d8);
    puVar6 = puStack_a0;
    uStack_388 = uStack_440;
    puStack_398 = puStack_450;
    puStack_390 = puStack_448;
    plStack_90 = (longlong *)*puStack_a0;
    uStack_c8 = puStack_a0[1];
    uStack_368 = puStack_a0[2];
    puVar12 = (undefined8 *)puStack_a0[4];
    pauStack_2b8 = (undefined1 (*) [16])*puVar12;
    puStack_2a8 = *pauStack_2b8 + puVar12[1] + 1;
    auVar8 = *pauStack_2b8;
    pauStack_2b0 = pauStack_2b8 + 1;
    puStack_2c0 = puVar12 + 0x12;
    if (puVar12[0x12] == 0) {
      puStack_2c0 = (undefined8 *)0x0;
    }
    plStack_298 = (longlong *)puVar12[3];
    pauStack_2d0 = (undefined1 (*) [16])(puVar12 + 0x24);
    if (puVar12[0x24] == 0) {
      pauStack_2d0 = (undefined1 (*) [16])0x0;
    }
    pauStack_2d8 = (undefined1 (*) [16])0x1;
    puStack_2c8 = (undefined *)0x1;
    uStack_2a0 = CONCAT62(uStack_2a0._2_6_,
                          ~((ushort)(SUB161(auVar8 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar8[0xf] >> 7) << 0xf));
    uStack_7b = 1;
    pdb_1415f0750(&uStack_468,&pauStack_2d8);
    lVar21 = puVar6[5];
    lVar26 = puVar6[9];
    puVar12 = (undefined8 *)(lVar21 + 0x20);
    puVar24 = (undefined8 *)(lVar21 + 0x28);
    if (*(char *)(lVar21 + 0x298) == '\0') {
      puVar24 = (undefined8 *)(lVar21 + 0x10);
      puVar12 = (undefined8 *)(lVar21 + 8);
    }
    puVar2 = (undefined8 *)(lVar26 + 0x20);
    puVar30 = (undefined8 *)(lVar26 + 0x28);
    if (*(char *)(lVar26 + 0x298) == '\0') {
      puVar30 = (undefined8 *)(lVar26 + 0x10);
      puVar2 = (undefined8 *)(lVar26 + 8);
    }
    lVar21 = puVar6[0xd];
    puVar3 = (undefined8 *)(lVar21 + 0x20);
    puVar31 = (undefined8 *)(lVar21 + 0x28);
    if (*(char *)(lVar21 + 0x298) == '\0') {
      puVar31 = (undefined8 *)(lVar21 + 0x10);
      puVar3 = (undefined8 *)(lVar21 + 8);
    }
    lVar21 = puVar6[0x11];
    puVar4 = (undefined8 *)(lVar21 + 0x20);
    puVar27 = (undefined8 *)(lVar21 + 0x28);
    if (*(char *)(lVar21 + 0x298) == '\0') {
      puVar27 = (undefined8 *)(lVar21 + 0x10);
      puVar4 = (undefined8 *)(lVar21 + 8);
    }
    lVar21 = puVar6[0x15];
    puVar5 = (undefined8 *)(lVar21 + 0x20);
    puVar34 = (undefined8 *)(lVar21 + 0x28);
    if (*(char *)(lVar21 + 0x298) == '\0') {
      puVar34 = (undefined8 *)(lVar21 + 0x10);
      puVar5 = (undefined8 *)(lVar21 + 8);
    }
    lVar21 = puVar6[0x19];
    puVar7 = (undefined8 *)(lVar21 + 0x20);
    puVar32 = (undefined8 *)(lVar21 + 0x28);
    if (*(char *)(lVar21 + 0x298) == '\0') {
      puVar32 = (undefined8 *)(lVar21 + 0x10);
      puVar7 = (undefined8 *)(lVar21 + 8);
    }
    lVar21 = puVar6[0x1d];
    puVar6 = (undefined8 *)(lVar21 + 0x20);
    plVar23 = (longlong *)(lVar21 + 0x28);
    if (*(char *)(lVar21 + 0x298) == '\0') {
      plVar23 = (longlong *)(lVar21 + 0x10);
      puVar6 = (undefined8 *)(lVar21 + 8);
    }
    pauStack_2b0 = (undefined1 (*) [16])*puVar24;
    pauStack_2b8 = (undefined1 (*) [16])*puVar12;
    plStack_298 = (longlong *)*puVar2;
    uStack_270 = *puVar31;
    uStack_250 = *puVar27;
    uStack_258 = *puVar4;
    uStack_230 = *puVar34;
    uStack_238 = *puVar5;
    uStack_210 = *puVar32;
    uStack_218 = *puVar7;
    lStack_1f0 = *plVar23;
    uStack_1f8 = *puVar6;
    pauStack_2d8 = (undefined1 (*) [16])0x0;
    pauStack_2d0 = (undefined1 (*) [16])0x7;
    puStack_2c8 = &UNK_14301ea20;
    puStack_2c0 = (undefined8 *)0xa;
    puStack_2a8 = &UNK_14301ea2a;
    uStack_2a0 = 0x12;
    auStack_290._8_8_ = &UNK_14301ea3c;
    auStack_290._0_8_ = *puVar30;
    auStack_280._8_8_ = *puVar3;
    auStack_280._0_8_ = 0x12;
    puStack_268 = &UNK_14301ea4e;
    uStack_260 = 0x12;
    puStack_248 = &UNK_14301ea60;
    uStack_240 = 0xb;
    puStack_228 = &UNK_14301ea6b;
    uStack_220 = 0xc;
    puStack_208 = &UNK_14301ea77;
    uStack_200 = 0x13;
    uStack_7c = 1;
    lStack_98 = lStack_1f0;
    pdb_1415f9830(&puStack_480,&pauStack_2d8);
    puVar6 = puStack_a0;
    pauStack_2b0 = (undefined1 (*) [16])puStack_a0[0x21];
    pauStack_2d8 = *(undefined1 (**) [16])pauStack_2b0;
    puStack_2c8 = *pauStack_2d8 + *(longlong *)((longlong)pauStack_2b0 + 8) + 1;
    auVar8 = *pauStack_2d8;
    pauStack_2b8 = *(undefined1 (**) [16])((longlong)pauStack_2b0 + 0x18);
    pauStack_2d0 = pauStack_2d8 + 1;
    uStack_7d = 1;
    puStack_2c0._0_2_ =
         ~((ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3
           | (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 | (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6
           | (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9
           | (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar8[0xf] >> 7) << 0xf);
    pdb_1415fe2a0(&uStack_3b0,&pauStack_2d8);
    pauStack_2b0 = (undefined1 (*) [16])puVar6[0x22];
    pauStack_2d8 = *(undefined1 (**) [16])pauStack_2b0;
    puStack_2c8 = *pauStack_2d8 + *(longlong *)((longlong)pauStack_2b0 + 8) + 1;
    auVar8 = *pauStack_2d8;
    puStack_2c0._0_2_ =
         ~((ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3
           | (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 | (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6
           | (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9
           | (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar8[0xf] >> 7) << 0xf);
    pauStack_2b8 = *(undefined1 (**) [16])((longlong)pauStack_2b0 + 0x18);
    pauStack_2d0 = pauStack_2d8 + 1;
    uStack_7e = 1;
    pdb_1415fe2a0(&uStack_3c8,&pauStack_2d8);
    pauStack_2b0 = (undefined1 (*) [16])puVar6[0x23];
    pauStack_2d8 = *(undefined1 (**) [16])pauStack_2b0;
    puStack_2c8 = *pauStack_2d8 + *(longlong *)((longlong)pauStack_2b0 + 8) + 1;
    auVar8 = *pauStack_2d8;
    puStack_2c0._0_2_ =
         ~((ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3
           | (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 | (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6
           | (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9
           | (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar8[0xf] >> 7) << 0xf);
    pauStack_2b8 = *(undefined1 (**) [16])((longlong)pauStack_2b0 + 0x18);
    pauStack_2d0 = pauStack_2d8 + 1;
    uStack_7f = 1;
    pdb_1415fe2a0(&uStack_3e0,&pauStack_2d8);
    pauStack_2b0 = (undefined1 (*) [16])puVar6[0x24];
    pauStack_2d8 = *(undefined1 (**) [16])pauStack_2b0;
    puStack_2c8 = *pauStack_2d8 + *(longlong *)((longlong)pauStack_2b0 + 8) + 1;
    auVar8 = *pauStack_2d8;
    puStack_2c0._0_2_ =
         ~((ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3
           | (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 | (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6
           | (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9
           | (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar8[0xf] >> 7) << 0xf);
    pauStack_2b8 = *(undefined1 (**) [16])((longlong)pauStack_2b0 + 0x18);
    pauStack_2d0 = pauStack_2d8 + 1;
    uStack_80 = 1;
    pdb_1415fe2a0(&puStack_3f8,&pauStack_2d8);
    pauStack_2b0 = (undefined1 (*) [16])puVar6[0x25];
    pauStack_2d8 = *(undefined1 (**) [16])pauStack_2b0;
    puStack_2c8 = *pauStack_2d8 + *(longlong *)((longlong)pauStack_2b0 + 8) + 1;
    auVar8 = *pauStack_2d8;
    pauStack_2b8 = *(undefined1 (**) [16])((longlong)pauStack_2b0 + 0x18);
    pauStack_2d0 = pauStack_2d8 + 1;
    puStack_2c0 = (undefined8 *)
                  CONCAT62(puStack_2c0._2_6_,
                           ~((ushort)(SUB161(auVar8 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar8[0xf] >> 7) << 0xf));
    uStack_81 = 1;
    pdb_1415fe2a0(&lStack_410,&pauStack_2d8);
    puVar12 = (undefined8 *)puVar6[0x26];
    uVar14 = puVar12[5];
    uVar16 = puVar12[6];
    uStack_82 = 1;
    pdb_140ca4980(&uStack_330,puVar12 + 1);
    uStack_300 = puVar12[7];
    pauStack_338 = (undefined1 (*) [16])*puVar12;
    uStack_2f8 = *(undefined1 *)(puVar12 + 8);
    lVar26 = puVar6[0x27];
    lVar13 = *(longlong *)(lVar26 + 0x10);
    lVar21 = lVar13 * 4;
    lVar33 = 1;
    lVar35 = 1;
    uStack_310 = uVar14;
    uStack_308 = uVar16;
    if (lVar13 != 0) {
      uVar14 = *(undefined8 *)(lVar26 + 8);
      pdb_14007ee60();
      lVar35 = func_0x0001406abab0(lVar21,1);
      if (lVar35 == 0) {
        uStack_83 = 1;
        pdb_142dc7e2a(1,lVar21);
        goto LAB_141bf5d7c;
      }
      func_0x000142e32760(lVar35,uVar14,lVar21);
    }
    uVar14 = *(undefined8 *)(lVar26 + 0x50);
    lVar15 = *(longlong *)(puVar6[0x28] + 0x10);
    lVar26 = lVar15 * 4;
    lStack_360 = lVar13;
    lStack_c0 = lVar35;
    lStack_98 = lVar21;
    if (lVar15 != 0) {
      uVar16 = *(undefined8 *)(puVar6[0x28] + 8);
      pdb_14007ee60();
      lVar33 = func_0x0001406abab0(lVar26,1);
      if (lVar33 == 0) {
        uStack_84 = 1;
        pdb_142dc7e2a(1,lVar26);
        goto LAB_141bf5d7c;
      }
      func_0x000142e32760(lVar33,uVar16,lVar26);
    }
    uStack_350 = uStack_2f0;
    uStack_348 = uStack_2e8;
    uStack_488 = uStack_e0;
    uStack_498 = uStack_f0;
    uStack_490 = uStack_e8;
    puStack_a8 = puStack_428;
    lStack_340 = lStack_420;
    uVar16 = *(undefined8 *)(puVar6[0x2e] + 0x20);
    uVar18 = *(undefined8 *)(puVar6[0x2e] + 0x28);
    lStack_358 = lVar15;
    lStack_b8 = lVar33;
    lStack_b0 = lVar26;
    pdb_140ca4ce0(&uStack_4c8);
    pauStack_2b0 = (undefined1 (*) [16])puStack_398;
    puStack_2a8 = puStack_390;
    uStack_2a0 = uStack_388;
    plStack_298 = plStack_90;
    auStack_290._8_8_ = uStack_368;
    auStack_290._0_8_ = uStack_c8;
    auStack_280._8_8_ = uStack_460;
    auStack_280._0_8_ = uStack_468;
    uStack_270 = uStack_458;
    puStack_268 = puStack_480;
    uStack_260 = uStack_478;
    uStack_258 = uStack_470;
    uStack_240 = uStack_3a0;
    uStack_250 = uStack_3b0;
    puStack_248 = puStack_3a8;
    puStack_228 = puStack_3b8;
    uStack_238 = uStack_3c8;
    uStack_230 = uStack_3c0;
    uStack_220 = uStack_3e0;
    uStack_218 = uStack_3d8;
    uStack_210 = uStack_3d0;
    puStack_208 = puStack_3f8;
    uStack_200 = uStack_3f0;
    uStack_1f8 = uStack_3e8;
    lStack_1f0 = lStack_410;
    uStack_1e8 = uStack_408;
    uStack_1e0 = uStack_400;
    uStack_138 = CONCAT71(uStack_2f7,uStack_2f8);
    uStack_148 = (undefined4)uStack_308;
    uStack_144 = uStack_308._4_4_;
    uStack_140 = (undefined4)uStack_300;
    uStack_13c = uStack_300._4_4_;
    uStack_158 = uStack_318;
    uStack_150 = uStack_310;
    uStack_168 = uStack_328;
    uStack_160 = uStack_320;
    pauStack_178 = pauStack_338;
    uStack_170 = uStack_330;
    lStack_1d8 = lStack_98;
    lStack_1d0 = lStack_c0;
    lStack_1c8 = lStack_98;
    lStack_1c0 = lStack_b0;
    lStack_1b8 = lStack_b8;
    lStack_1b0 = lStack_b0;
    uStack_1a8 = uStack_2f0;
    uStack_1a0 = uStack_2e8;
    uStack_198 = uStack_2e0;
    uStack_180 = uStack_e0;
    uStack_190 = uStack_f0;
    uStack_188 = uStack_e8;
    pauStack_2b8 = (undefined1 (*) [16])uStack_418;
    puStack_2c8 = puStack_428;
    puStack_2c0 = (undefined8 *)lStack_420;
    pauStack_2d8 = pauStack_438;
    pauStack_2d0 = pauStack_430;
    uStack_4a8._0_4_ = (undefined4)uVar16;
    uStack_4a8._4_4_ = (undefined4)((ulonglong)uVar16 >> 0x20);
    uStack_4a0._0_4_ = (undefined4)uVar18;
    uStack_4a0._4_4_ = (undefined4)((ulonglong)uVar18 >> 0x20);
    uStack_110 = (undefined4)uStack_4a8;
    uStack_10c = uStack_4a8._4_4_;
    uStack_108 = (undefined4)uStack_4a0;
    uStack_104 = uStack_4a0._4_4_;
    uStack_120 = uStack_4b8;
    uStack_11c = uStack_4b4;
    uStack_118 = uStack_4b0;
    uStack_114 = uStack_4ac;
    uStack_130 = uStack_4c8;
    uStack_128 = uStack_4c0;
    uStack_4a8 = uVar16;
    uStack_4a0 = uVar18;
    uStack_100 = uVar14;
    pdb_14007ee60();
    lVar21 = func_0x0001406abab0(0x1e0,8);
    if (lVar21 != 0) {
      func_0x000142e32760(lVar21,&pauStack_2d8,0x1e0);
      if (lStack_d8 != 0) {
        uStack_71 = 0;
        plVar23 = (longlong *)pdb_140e97000();
        if ((char)plVar23[0xd] != '\x01') {
          uStack_71 = 0;
          plVar23 = (longlong *)pdb_142d8ec20(plVar23,0);
          if (plVar23 == (longlong *)0x0) {
            uStack_71 = 0;
            pdb_142dc7890(&UNK_143326860);
            goto LAB_141bf5d7c;
          }
        }
        if (*plVar23 != 0) {
          uStack_71 = 0;
          pdb_142dc8090(&UNK_143326a50);
          goto LAB_141bf5d7c;
        }
        *plVar23 = -1;
        plStack_90 = plVar23;
        pdb_140e95370(plVar23 + 1,uStack_d0);
        *plStack_90 = *plStack_90 + 1;
      }
      return lVar21;
    }
    pdb_142dc7e11(8,0x1e0);
  }
LAB_141bf5d7c:
                    /* WARNING: Does not return */
  pcVar17 = (code *)invalidInstructionException();
  (*pcVar17)();
}

