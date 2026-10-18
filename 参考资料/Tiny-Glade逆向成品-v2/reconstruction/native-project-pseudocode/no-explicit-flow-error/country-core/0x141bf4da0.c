// VA 0x141bf4da0, PDB extent 6780 bytes
// country_core::systems::save::snapshot::capture_game_snapshot_save_data
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/snapshot.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::save::snapshot::capture_game_snapshot_save_data
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/snapshot.rs
   Extent: 6780 */

byte * pdb_141bf4da0(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong arg0;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  byte bVar8;
  byte bVar9;
  byte bVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  code *pcVar14;
  undefined8 uVar15;
  char cVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong *plVar20;
  undefined8 *puVar21;
  undefined *puVar22;
  longlong lVar23;
  undefined8 *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  byte *pbVar30;
  ulonglong *puVar31;
  undefined8 *puVar32;
  byte *pbVar33;
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
  ulonglong uStack_410;
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
  ulonglong uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  ulonglong uStack_1d8;
  byte *pbStack_1d0;
  ulonglong uStack_1c8;
  ulonglong uStack_1c0;
  byte *pbStack_1b8;
  ulonglong uStack_1b0;
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
  byte *pbStack_c0;
  byte *pbStack_b8;
  ulonglong uStack_b0;
  undefined1 *puStack_a8;
  undefined8 *puStack_a0;
  ulonglong uStack_98;
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
  cVar16 = pdb_140e94b40();
  if (cVar16 == '\0') {
    lStack_d8 = 0;
    if (DAT_143cb2c60 == '\0') goto LAB_141bf4fe6;
LAB_141bf4f13:
    uStack_f0 = 0;
    uStack_e8 = 8;
    uStack_e0 = 0;
  }
  else {
    uStack_71 = 1;
    lVar23 = 0x46;
    lVar18 = pdb_141bf9f30(0x46);
    puVar25 = &UNK_14339ba7b;
    if (lVar18 == 1) {
      if (0x46 < param_2) {
        uStack_71 = 1;
        pdb_142dc8070(&UNK_14339ba7b,0x46,0,param_2,&UNK_14339bb48);
        goto LAB_141bf5d7c;
      }
      uStack_71 = 1;
      uVar19 = pdb_141bf9f30(param_2);
      if ((uVar19 & 1) != 0) {
        if (0x46 < param_2 + 2) {
          uStack_71 = 1;
          pdb_142dc8070(&UNK_14339ba7b,0x46,param_2 + 2,0x46,&UNK_14339bb60);
          goto LAB_141bf5d7c;
        }
        lVar23 = 0x44 - param_2;
        puVar25 = &UNK_14339ba7d + param_2;
      }
    }
    puVar26 = &UNK_14339b938;
    puVar22 = &UNK_14339b908;
    do {
      bVar8 = puVar26[-1];
      uVar17 = (uint)(char)bVar8;
      if ((char)bVar8 < '\0') {
        bVar9 = puVar26[-2];
        if ((char)bVar9 < -0x40) {
          bVar10 = puVar26[-3];
          if ((char)bVar10 < -0x40) {
            pbVar33 = puVar26 + -4;
            puVar26 = puVar26 + -4;
            uVar17 = bVar10 & 0x3f | (*pbVar33 & 7) << 6;
          }
          else {
            puVar26 = puVar26 + -3;
            uVar17 = bVar10 & 0xf;
          }
          uVar17 = bVar9 & 0x3f | uVar17 << 6;
        }
        else {
          puVar26 = puVar26 + -2;
          uVar17 = bVar9 & 0x1f;
        }
        uVar17 = (uint)(bVar8 & 0x3f) | uVar17 << 6;
        if (uVar17 != 0x5c) goto LAB_141bf4ee4;
LAB_141bf4f39:
        puVar22 = puVar26 + -0x14339b907;
        if ((undefined *)0x30 < puVar22) {
          uStack_71 = 1;
          pdb_142dc8070(&UNK_14339b908,0x30,puVar22,0x30,&UNK_14339bb28);
          goto LAB_141bf5d7c;
        }
        lVar18 = 0x30 - (longlong)puVar22;
        puVar22 = puVar26 + 1;
        goto LAB_141bf4f5c;
      }
      puVar26 = puVar26 + -1;
      if (uVar17 == 0x5c) goto LAB_141bf4f39;
LAB_141bf4ee4:
      if (uVar17 == 0x2f) goto LAB_141bf4f39;
    } while (puVar26 != &UNK_14339b908);
    lVar18 = 0x30;
LAB_141bf4f5c:
    uStack_71 = 1;
    plVar20 = (longlong *)pdb_140e97000();
    if ((char)plVar20[0xd] != '\x01') {
      uStack_71 = 1;
      plVar20 = (longlong *)pdb_142d8ec20(plVar20,0);
      if (plVar20 == (longlong *)0x0) {
        uStack_71 = 1;
        pdb_142dc7890(&UNK_143326860);
        goto LAB_141bf5d7c;
      }
    }
    if (*plVar20 != 0) {
      uStack_71 = 1;
      pdb_142dc8090(&UNK_143326a50);
      goto LAB_141bf5d7c;
    }
    *plVar20 = -1;
    plStack_90 = plVar20;
    uStack_d0 = pdb_140e94f10(plVar20 + 1,puVar25,lVar23,puVar22,lVar18,1,0);
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
  puVar5 = puStack_a0;
  puVar11 = (undefined8 *)puStack_a0[3];
  pauStack_2d8 = (undefined1 (*) [16])*puVar11;
  puStack_2c8 = *pauStack_2d8 + puVar11[1] + 1;
  auVar7 = *pauStack_2d8;
  pauStack_2b8 = (undefined1 (*) [16])puVar11[3];
  pauStack_2d0 = pauStack_2d8 + 1;
  uStack_75 = 1;
  uStack_76 = 1;
  puStack_2c0._0_2_ =
       ~((ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
         (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
         (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
         (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
         (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
         (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
         (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
         (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
         (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
         (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar7[0xf] >> 7) << 0xf);
  pdb_1415f4780(&puStack_450,&pauStack_2d8);
  puVar11 = (undefined8 *)puVar5[0x2c];
  pauStack_2d8 = (undefined1 (*) [16])*puVar11;
  puStack_2c8 = *pauStack_2d8 + puVar11[1] + 1;
  auVar7 = *pauStack_2d8;
  pauStack_2b8 = (undefined1 (*) [16])puVar11[3];
  pauStack_2d0 = pauStack_2d8 + 1;
  puStack_2c0 = (undefined8 *)
                CONCAT62(puStack_2c0._2_6_,
                         ~((ushort)(SUB161(auVar7 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar7[0xf] >> 7) << 0xf));
  uStack_77 = 1;
  uStack_78 = 1;
  pdb_1415f3ae0(&uStack_2f0,&pauStack_2d8);
  lVar18 = puVar5[0x2d];
  if (*(char *)(lVar18 + 0x178) == '\0') {
    uStack_72 = 1;
    uStack_73 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14339b938,0x2e,&UNK_14339b968);
  }
  pauStack_338 = (undefined1 (*) [16])0x0;
  uStack_330 = 4;
  uStack_328 = 0;
  uStack_7a = 1;
  pdb_1417cc1a0(lVar18 + 0x28,&pauStack_338);
  puStack_2c8 = (undefined *)uStack_328;
  pauStack_2d8 = pauStack_338;
  pauStack_2d0 = (undefined1 (*) [16])uStack_330;
  uStack_7a = 0;
  pdb_140a61530(&pauStack_438,&pauStack_2d8);
  puVar5 = puStack_a0;
  uStack_388 = uStack_440;
  puStack_398 = puStack_450;
  puStack_390 = puStack_448;
  plStack_90 = (longlong *)*puStack_a0;
  uStack_c8 = puStack_a0[1];
  uStack_368 = puStack_a0[2];
  puVar11 = (undefined8 *)puStack_a0[4];
  pauStack_2b8 = (undefined1 (*) [16])*puVar11;
  puStack_2a8 = *pauStack_2b8 + puVar11[1] + 1;
  auVar7 = *pauStack_2b8;
  pauStack_2b0 = pauStack_2b8 + 1;
  puStack_2c0 = puVar11 + 0x12;
  if (puVar11[0x12] == 0) {
    puStack_2c0 = (undefined8 *)0x0;
  }
  plStack_298 = (longlong *)puVar11[3];
  pauStack_2d0 = (undefined1 (*) [16])(puVar11 + 0x24);
  if (puVar11[0x24] == 0) {
    pauStack_2d0 = (undefined1 (*) [16])0x0;
  }
  pauStack_2d8 = (undefined1 (*) [16])0x1;
  puStack_2c8 = (undefined *)0x1;
  uStack_2a0 = CONCAT62(uStack_2a0._2_6_,
                        ~((ushort)(SUB161(auVar7 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar7[0xf] >> 7) << 0xf));
  uStack_7b = 1;
  pdb_1415f0750(&uStack_468,&pauStack_2d8);
  lVar18 = puVar5[5];
  lVar23 = puVar5[9];
  puVar11 = (undefined8 *)(lVar18 + 0x20);
  puVar21 = (undefined8 *)(lVar18 + 0x28);
  if (*(char *)(lVar18 + 0x298) == '\0') {
    puVar21 = (undefined8 *)(lVar18 + 0x10);
    puVar11 = (undefined8 *)(lVar18 + 8);
  }
  puVar1 = (undefined8 *)(lVar23 + 0x20);
  puVar27 = (undefined8 *)(lVar23 + 0x28);
  if (*(char *)(lVar23 + 0x298) == '\0') {
    puVar27 = (undefined8 *)(lVar23 + 0x10);
    puVar1 = (undefined8 *)(lVar23 + 8);
  }
  lVar18 = puVar5[0xd];
  puVar2 = (undefined8 *)(lVar18 + 0x20);
  puVar28 = (undefined8 *)(lVar18 + 0x28);
  if (*(char *)(lVar18 + 0x298) == '\0') {
    puVar28 = (undefined8 *)(lVar18 + 0x10);
    puVar2 = (undefined8 *)(lVar18 + 8);
  }
  lVar18 = puVar5[0x11];
  puVar3 = (undefined8 *)(lVar18 + 0x20);
  puVar24 = (undefined8 *)(lVar18 + 0x28);
  if (*(char *)(lVar18 + 0x298) == '\0') {
    puVar24 = (undefined8 *)(lVar18 + 0x10);
    puVar3 = (undefined8 *)(lVar18 + 8);
  }
  lVar18 = puVar5[0x15];
  puVar4 = (undefined8 *)(lVar18 + 0x20);
  puVar32 = (undefined8 *)(lVar18 + 0x28);
  if (*(char *)(lVar18 + 0x298) == '\0') {
    puVar32 = (undefined8 *)(lVar18 + 0x10);
    puVar4 = (undefined8 *)(lVar18 + 8);
  }
  lVar18 = puVar5[0x19];
  puVar6 = (undefined8 *)(lVar18 + 0x20);
  puVar29 = (undefined8 *)(lVar18 + 0x28);
  if (*(char *)(lVar18 + 0x298) == '\0') {
    puVar29 = (undefined8 *)(lVar18 + 0x10);
    puVar6 = (undefined8 *)(lVar18 + 8);
  }
  lVar18 = puVar5[0x1d];
  puVar5 = (undefined8 *)(lVar18 + 0x20);
  puVar31 = (ulonglong *)(lVar18 + 0x28);
  if (*(char *)(lVar18 + 0x298) == '\0') {
    puVar31 = (ulonglong *)(lVar18 + 0x10);
    puVar5 = (undefined8 *)(lVar18 + 8);
  }
  pauStack_2b0 = (undefined1 (*) [16])*puVar21;
  pauStack_2b8 = (undefined1 (*) [16])*puVar11;
  plStack_298 = (longlong *)*puVar1;
  uStack_270 = *puVar28;
  uStack_250 = *puVar24;
  uStack_258 = *puVar3;
  uStack_230 = *puVar32;
  uStack_238 = *puVar4;
  uStack_210 = *puVar29;
  uStack_218 = *puVar6;
  uStack_1f0 = *puVar31;
  uStack_1f8 = *puVar5;
  pauStack_2d8 = (undefined1 (*) [16])0x0;
  pauStack_2d0 = (undefined1 (*) [16])0x7;
  puStack_2c8 = &UNK_14301ea20;
  puStack_2c0 = (undefined8 *)0xa;
  puStack_2a8 = &UNK_14301ea2a;
  uStack_2a0 = 0x12;
  auStack_290._8_8_ = &UNK_14301ea3c;
  auStack_290._0_8_ = *puVar27;
  auStack_280._8_8_ = *puVar2;
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
  uStack_98 = uStack_1f0;
  pdb_1415f9830(&puStack_480,&pauStack_2d8);
  puVar5 = puStack_a0;
  pauStack_2b0 = (undefined1 (*) [16])puStack_a0[0x21];
  pauStack_2d8 = *(undefined1 (**) [16])pauStack_2b0;
  puStack_2c8 = *pauStack_2d8 + *(longlong *)((longlong)pauStack_2b0 + 8) + 1;
  auVar7 = *pauStack_2d8;
  pauStack_2b8 = *(undefined1 (**) [16])((longlong)pauStack_2b0 + 0x18);
  pauStack_2d0 = pauStack_2d8 + 1;
  uStack_7d = 1;
  puStack_2c0._0_2_ =
       ~((ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
         (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
         (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
         (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
         (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
         (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
         (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
         (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
         (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
         (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar7[0xf] >> 7) << 0xf);
  pdb_1415fe2a0(&uStack_3b0,&pauStack_2d8);
  pauStack_2b0 = (undefined1 (*) [16])puVar5[0x22];
  pauStack_2d8 = *(undefined1 (**) [16])pauStack_2b0;
  puStack_2c8 = *pauStack_2d8 + *(longlong *)((longlong)pauStack_2b0 + 8) + 1;
  auVar7 = *pauStack_2d8;
  puStack_2c0._0_2_ =
       ~((ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
         (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
         (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
         (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
         (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
         (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
         (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
         (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
         (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
         (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar7[0xf] >> 7) << 0xf);
  pauStack_2b8 = *(undefined1 (**) [16])((longlong)pauStack_2b0 + 0x18);
  pauStack_2d0 = pauStack_2d8 + 1;
  uStack_7e = 1;
  pdb_1415fe2a0(&uStack_3c8,&pauStack_2d8);
  pauStack_2b0 = (undefined1 (*) [16])puVar5[0x23];
  pauStack_2d8 = *(undefined1 (**) [16])pauStack_2b0;
  puStack_2c8 = *pauStack_2d8 + *(longlong *)((longlong)pauStack_2b0 + 8) + 1;
  auVar7 = *pauStack_2d8;
  puStack_2c0._0_2_ =
       ~((ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
         (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
         (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
         (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
         (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
         (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
         (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
         (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
         (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
         (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar7[0xf] >> 7) << 0xf);
  pauStack_2b8 = *(undefined1 (**) [16])((longlong)pauStack_2b0 + 0x18);
  pauStack_2d0 = pauStack_2d8 + 1;
  uStack_7f = 1;
  pdb_1415fe2a0(&uStack_3e0,&pauStack_2d8);
  pauStack_2b0 = (undefined1 (*) [16])puVar5[0x24];
  pauStack_2d8 = *(undefined1 (**) [16])pauStack_2b0;
  puStack_2c8 = *pauStack_2d8 + *(longlong *)((longlong)pauStack_2b0 + 8) + 1;
  auVar7 = *pauStack_2d8;
  puStack_2c0._0_2_ =
       ~((ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
         (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
         (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
         (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
         (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
         (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
         (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
         (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
         (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
         (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar7[0xf] >> 7) << 0xf);
  pauStack_2b8 = *(undefined1 (**) [16])((longlong)pauStack_2b0 + 0x18);
  pauStack_2d0 = pauStack_2d8 + 1;
  uStack_80 = 1;
  pdb_1415fe2a0(&puStack_3f8,&pauStack_2d8);
  pauStack_2b0 = (undefined1 (*) [16])puVar5[0x25];
  pauStack_2d8 = *(undefined1 (**) [16])pauStack_2b0;
  puStack_2c8 = *pauStack_2d8 + *(longlong *)((longlong)pauStack_2b0 + 8) + 1;
  auVar7 = *pauStack_2d8;
  pauStack_2b8 = *(undefined1 (**) [16])((longlong)pauStack_2b0 + 0x18);
  pauStack_2d0 = pauStack_2d8 + 1;
  puStack_2c0 = (undefined8 *)
                CONCAT62(puStack_2c0._2_6_,
                         ~((ushort)(SUB161(auVar7 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar7[0xf] >> 7) << 0xf));
  uStack_81 = 1;
  pdb_1415fe2a0(&uStack_410,&pauStack_2d8);
  puVar11 = (undefined8 *)puVar5[0x26];
  uVar12 = puVar11[5];
  uVar13 = puVar11[6];
  uStack_82 = 1;
  pdb_140ca4980(&uStack_330,puVar11 + 1);
  uStack_300 = puVar11[7];
  pauStack_338 = (undefined1 (*) [16])*puVar11;
  uStack_2f8 = *(undefined1 *)(puVar11 + 8);
  lVar18 = puVar5[0x27];
  lVar23 = *(longlong *)(lVar18 + 0x10);
  uVar19 = lVar23 * 4;
  pbVar30 = (byte *)0x1;
  pbVar33 = (byte *)0x1;
  uStack_310 = uVar12;
  uStack_308 = uVar13;
  if (lVar23 != 0) {
    uVar12 = *(undefined8 *)(lVar18 + 8);
    pdb_14007ee60();
    pbVar33 = pub_1406abab0(uVar19,1);
    if (pbVar33 == (byte *)0x0) {
      uStack_83 = 1;
      pdb_142dc7e2a(1,uVar19);
      goto LAB_141bf5d7c;
    }
    pub_142e32760(pbVar33,uVar12,uVar19);
  }
  uVar12 = *(undefined8 *)(lVar18 + 0x50);
  lVar18 = *(longlong *)(puVar5[0x28] + 0x10);
  arg0 = lVar18 * 4;
  lStack_360 = lVar23;
  pbStack_c0 = pbVar33;
  uStack_98 = uVar19;
  if (lVar18 != 0) {
    uVar13 = *(undefined8 *)(puVar5[0x28] + 8);
    pdb_14007ee60();
    pbVar30 = pub_1406abab0(arg0,1);
    if (pbVar30 == (byte *)0x0) {
      uStack_84 = 1;
      pdb_142dc7e2a(1,arg0);
      goto LAB_141bf5d7c;
    }
    pub_142e32760(pbVar30,uVar13,arg0);
  }
  uStack_350 = uStack_2f0;
  uStack_348 = uStack_2e8;
  uStack_488 = uStack_e0;
  uStack_498 = uStack_f0;
  uStack_490 = uStack_e8;
  puStack_a8 = puStack_428;
  lStack_340 = lStack_420;
  uVar13 = *(undefined8 *)(puVar5[0x2e] + 0x20);
  uVar15 = *(undefined8 *)(puVar5[0x2e] + 0x28);
  lStack_358 = lVar18;
  pbStack_b8 = pbVar30;
  uStack_b0 = arg0;
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
  uStack_1f0 = uStack_410;
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
  uStack_1d8 = uStack_98;
  pbStack_1d0 = pbStack_c0;
  uStack_1c8 = uStack_98;
  uStack_1c0 = uStack_b0;
  pbStack_1b8 = pbStack_b8;
  uStack_1b0 = uStack_b0;
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
  uStack_4a8._0_4_ = (undefined4)uVar13;
  uStack_4a8._4_4_ = (undefined4)((ulonglong)uVar13 >> 0x20);
  uStack_4a0._0_4_ = (undefined4)uVar15;
  uStack_4a0._4_4_ = (undefined4)((ulonglong)uVar15 >> 0x20);
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
  uStack_4a8 = uVar13;
  uStack_4a0 = uVar15;
  uStack_100 = uVar12;
  pdb_14007ee60();
  pbVar33 = pub_1406abab0(0x1e0,8);
  if (pbVar33 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x1e0);
  }
  pub_142e32760(pbVar33,&pauStack_2d8,0x1e0);
  if (lStack_d8 != 0) {
    uStack_71 = 0;
    plVar20 = (longlong *)pdb_140e97000();
    if ((char)plVar20[0xd] != '\x01') {
      uStack_71 = 0;
      plVar20 = (longlong *)pdb_142d8ec20(plVar20,0);
      if (plVar20 == (longlong *)0x0) {
        uStack_71 = 0;
        pdb_142dc7890(&UNK_143326860);
        goto LAB_141bf5d7c;
      }
    }
    if (*plVar20 != 0) {
      uStack_71 = 0;
      pdb_142dc8090(&UNK_143326a50);
LAB_141bf5d7c:
                    /* WARNING: Does not return */
      pcVar14 = (code *)invalidInstructionException();
      (*pcVar14)();
    }
    *plVar20 = -1;
    plStack_90 = plVar20;
    pdb_140e95370(plVar20 + 1,uStack_d0);
    *plStack_90 = *plStack_90 + 1;
  }
  return pbVar33;
}

