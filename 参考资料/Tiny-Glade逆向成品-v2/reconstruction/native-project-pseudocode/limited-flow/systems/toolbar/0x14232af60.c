// VA 0x14232af60, PDB extent 6359 bytes
// toolbar::menu::mods::ui
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/mods.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::menu::mods::ui
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/mods.rs
   Extent: 6359 */

void pdb_14232af60(byte *param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 *param_11,undefined8 *param_12,
                  undefined8 *param_13,undefined8 param_14,longlong param_15)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  code *pcVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  byte *pbVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  byte *pbVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  byte *pbVar16;
  byte *pbVar17;
  longlong lVar18;
  undefined *puVar19;
  undefined *puVar20;
  byte *pbVar21;
  byte *pbVar22;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined1 auStack_2b0 [16];
  undefined8 uStack_2a0;
  undefined8 uStack_288;
  undefined8 uStack_280;
  longlong lStack_278;
  undefined8 uStack_270;
  ulonglong uStack_268;
  byte *pbStack_260;
  byte *pbStack_258;
  longlong *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  longlong *plStack_238;
  ulonglong uStack_230;
  undefined8 uStack_228;
  longlong lStack_1e0;
  undefined8 uStack_1d0;
  ulonglong uStack_1c8;
  byte *pbStack_1c0;
  longlong lStack_1a8;
  byte *pbStack_1a0;
  byte *pbStack_198;
  undefined4 uStack_184;
  undefined8 uStack_180;
  undefined1 auStack_178 [48];
  longlong lStack_148;
  byte *pbStack_140;
  longlong lStack_138;
  undefined4 auStack_128 [8];
  undefined8 uStack_108;
  undefined8 uStack_100;
  longlong *plStack_f8;
  undefined8 *puStack_f0;
  longlong *plStack_e8;
  byte **ppbStack_e0;
  byte **ppbStack_d8;
  undefined4 *puStack_d0;
  undefined8 uStack_c8;
  longlong lStack_c0;
  undefined8 *puStack_b8;
  ulonglong *puStack_b0;
  undefined8 *puStack_a8;
  byte *pbStack_60;
  byte *pbStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_2f8 = *param_6;
  uStack_2f0 = param_6[1];
  uStack_2e8 = param_6[2];
  uStack_2e0 = param_6[3];
  uStack_318 = param_6[4];
  uStack_310 = param_6[5];
  uStack_308 = param_6[6];
  uStack_300 = param_6[7];
  uStack_338 = *param_7;
  uStack_330 = param_7[1];
  uStack_328 = param_7[2];
  uStack_320 = param_7[3];
  uStack_180 = param_7[4];
  uVar15 = param_7[6];
  uVar4 = *(undefined4 *)((longlong)param_7 + 0x3c);
  uStack_2d8 = *param_12;
  uStack_2d0 = param_12[1];
  uStack_2c8 = param_12[2];
  uStack_2c0 = param_12[3];
  uStack_358 = param_12[4];
  uStack_350 = param_12[5];
  uStack_348 = param_12[6];
  uStack_340 = param_12[7];
  pbVar21 = (byte *)*param_8;
  uStack_378 = *param_13;
  uStack_370 = param_13[1];
  uStack_368 = param_13[2];
  uStack_360 = param_13[3];
  uStack_398 = param_13[4];
  uStack_390 = param_13[5];
  uStack_388 = param_13[6];
  uStack_380 = param_13[7];
  uStack_3b8 = *(undefined4 *)(param_13 + 8);
  uStack_3b4 = *(undefined4 *)((longlong)param_13 + 0x44);
  uStack_3b0 = *(undefined4 *)(param_13 + 9);
  uStack_3ac = *(undefined4 *)((longlong)param_13 + 0x4c);
  uStack_3a8 = *(undefined4 *)(param_13 + 10);
  uStack_3a4 = *(undefined4 *)((longlong)param_13 + 0x54);
  uStack_3a0 = *(undefined4 *)(param_13 + 0xb);
  uStack_39c = *(undefined4 *)((longlong)param_13 + 0x5c);
  pbVar13 = (byte *)param_8[1];
  uVar10 = param_8[2];
  uStack_270 = param_14;
  lStack_278 = param_15;
  uStack_268 = uVar10;
  pbStack_260 = pbVar13;
  pbStack_258 = pbVar21;
  plStack_250 = param_3;
  uStack_248 = param_4;
  lStack_1e0 = param_2;
  uVar6 = pdb_140e94b40();
  pbVar16 = (byte *)(ulonglong)uVar6;
  uStack_240 = uVar15;
  uStack_184 = uVar4;
  pbStack_60 = pbVar21;
  if ((char)uVar6 == '\0') {
    uStack_288 = 0;
  }
  else {
    lVar18 = 0x17;
    pbStack_50 = param_1;
    lVar7 = pdb_14232ab40(0x17);
    pbVar21 = &UNK_1434da6f8;
    if (lVar7 == 1) {
      if ((undefined8 *)0x17 < param_12) {
LAB_14232c1f1:
        pdb_142dc8070(&UNK_1434da6f8,0x17,0);
LAB_14232c211:
        pdb_142dc8070(&UNK_1434da6f8,0x17);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar8 = pdb_14232ab40(param_12);
      if ((uVar8 & 1) != 0) {
        if (0x17 < (longlong)param_12 + 2U) goto LAB_14232c211;
        lVar18 = 0x15 - (longlong)param_12;
        pbVar21 = (byte *)((longlong)param_12 + 0x1434da6fa);
      }
    }
    puVar19 = &UNK_1434da7ef;
    pbVar17 = &UNK_1434da7c8;
    do {
      bVar1 = puVar19[-1];
      uVar6 = (uint)(char)bVar1;
      if ((char)bVar1 < '\0') {
        bVar2 = puVar19[-2];
        if ((char)bVar2 < -0x40) {
          bVar3 = puVar19[-3];
          if ((char)bVar3 < -0x40) {
            pbVar22 = puVar19 + -4;
            puVar19 = puVar19 + -4;
            uVar6 = bVar3 & 0x3f | (*pbVar22 & 7) << 6;
          }
          else {
            puVar19 = puVar19 + -3;
            uVar6 = bVar3 & 0xf;
          }
          uVar6 = bVar2 & 0x3f | uVar6 << 6;
        }
        else {
          puVar19 = puVar19 + -2;
          uVar6 = bVar2 & 0x1f;
        }
        uVar6 = (uint)(bVar1 & 0x3f) | uVar6 << 6;
        if (uVar6 != 0x5c) goto LAB_14232b1a4;
LAB_14232b1c6:
        puVar20 = puVar19 + -0x1434da7c7;
        if ((undefined *)0x27 < puVar20) {
          pdb_142dc8070(&UNK_1434da7c8,0x27,puVar20,0x27,&UNK_1434da778);
          goto LAB_14232c1f1;
        }
        uVar8 = 0x27 - (longlong)puVar20;
        pbVar17 = puVar19 + 1;
        goto LAB_14232b1f2;
      }
      puVar19 = puVar19 + -1;
      if (uVar6 == 0x5c) goto LAB_14232b1c6;
LAB_14232b1a4:
      if (uVar6 == 0x2f) goto LAB_14232b1c6;
    } while (puVar19 != &UNK_1434da7c8);
    uVar8 = 0x27;
LAB_14232b1f2:
    pbVar9 = (byte *)pdb_140e97000();
    pbVar22 = pbVar13;
    if (pbVar9[0x68] != 1) goto LAB_14232c156;
    while (*(longlong *)pbVar9 != 0) {
      while( true ) {
        pbVar9 = (byte *)pdb_142dc8090(&UNK_1432a7f58);
        pbVar13 = pbVar22;
LAB_14232c156:
        uVar15 = 0;
        pbVar9 = (byte *)pdb_142dcf3a0(pbVar9,0);
        pbVar22 = pbVar13;
        if (pbVar9 != (byte *)0x0) break;
        do {
          pdb_142dc7890(&UNK_1432a7ee8);
          pdb_142d7f1b0(uVar15,uVar8,uVar10,8,0x18);
          lVar7 = *(longlong *)(param_15 + 0x10);
          pub_142e32760(lVar7 * 0x18 + *(longlong *)(param_15 + 8),pbVar17,pbVar21);
          *(ulonglong *)(param_15 + 0x10) = lVar7 + uVar10;
          if (lVar18 != 0) {
            pub_1406abac0(pbVar17,lVar18 * 0x18,8);
          }
          pbVar22 = pbStack_58;
          pbVar21 = pbStack_60;
          uVar8 = (ulonglong)pbVar16 & 0xffffffff;
          pdb_140b278d0(&uStack_108);
          pdb_1411770f0(pbVar21);
          *(longlong **)(pbStack_60 + 0x10) = plStack_f8;
          *(undefined4 *)pbStack_60 = (undefined4)uStack_108;
          *(undefined4 *)(pbStack_60 + 4) = uStack_108._4_4_;
          *(undefined4 *)(pbStack_60 + 8) = (undefined4)uStack_100;
          *(undefined4 *)(pbStack_60 + 0xc) = uStack_100._4_4_;
          pdb_140d9a820(&uStack_108);
          pbVar16 = *(byte **)(pbVar13 + 8);
          lVar7 = *(longlong *)(pbVar13 + 0x10);
          if (lVar7 != 0) {
            pbVar17 = pbVar16 + 8;
            do {
              if (*(ulonglong *)(pbVar17 + -8) != 0) {
                pub_1406abac0(*(byte **)pbVar17,*(ulonglong *)(pbVar17 + -8),1);
              }
              pbVar17 = pbVar17 + 0x20;
              lVar7 = lVar7 + -1;
            } while (lVar7 != 0);
          }
          if (*(longlong *)pbVar13 != 0) {
            pub_1406abac0(pbVar16,*(longlong *)pbVar13 << 5,8);
          }
          *(longlong **)(pbVar13 + 0x10) = plStack_f8;
          *(ulonglong **)pbVar13 = uStack_108;
          *(longlong **)(pbVar13 + 8) = uStack_100;
          pbVar17 = *(byte **)(pbVar22 + 8);
          lVar7 = *(longlong *)(pbVar22 + 0x10);
          pbVar16 = pbVar13;
          if (lVar7 != 0) {
            pbVar16 = pbVar17 + 8;
            do {
              uVar10 = *(ulonglong *)(pbVar16 + -8);
              if ((!SBORROW8(0,uVar10)) && (uVar10 != 0)) {
                pub_1406abac0(*(byte **)pbVar16,uVar10,1);
              }
              pbVar16 = pbVar16 + 0x20;
              lVar7 = lVar7 + -1;
            } while (lVar7 != 0);
          }
          if (*(longlong *)pbVar22 != 0) {
            pub_1406abac0(pbVar17,*(longlong *)pbVar22 << 5,8);
          }
          pbVar22[0] = 0;
          pbVar22[1] = 0;
          pbVar22[2] = 0;
          pbVar22[3] = 0;
          pbVar22[4] = 0;
          pbVar22[5] = 0;
          pbVar22[6] = 0;
          pbVar22[7] = 0;
          pbVar22[8] = 8;
          pbVar22[9] = 0;
          pbVar22[10] = 0;
          pbVar22[0xb] = 0;
          pbVar22[0xc] = 0;
          pbVar22[0xd] = 0;
          pbVar22[0xe] = 0;
          pbVar22[0xf] = 0;
          pbVar22[0x10] = 0;
          pbVar22[0x11] = 0;
          pbVar22[0x12] = 0;
          pbVar22[0x13] = 0;
          pbVar22[0x14] = 0;
          pbVar22[0x15] = 0;
          pbVar22[0x16] = 0;
          pbVar22[0x17] = 0;
          *param_11 = (char)pbStack_50;
          *(undefined4 *)plStack_250[2] = *(undefined4 *)((longlong)plStack_250 + 0x1c);
          plVar12 = (longlong *)*plStack_250;
          uStack_108 = (ulonglong *)&UNK_1434da7ef;
          uStack_100 = (longlong *)0x4;
          uVar10 = pdb_140bbbcb0(&uStack_108);
          uVar10 = uVar10 ^ 0xb1695320004fb443;
          uVar14 = uVar10;
          lVar7 = pdb_14072c2d0(plVar12);
          *(undefined1 *)(lVar7 + 0x5e) = 0;
          *(undefined1 *)(lVar7 + 0xcb) = 1;
          if ((uVar14 & 1) == 0) {
            lVar7 = plVar12[2];
            if (lVar7 == *plVar12) {
              pdb_142d7f080(plVar12);
            }
            lVar18 = plVar12[1];
            *(undefined4 *)(lVar18 + lVar7 * 0x38) = 1;
            *(ulonglong *)(lVar18 + 0x30 + lVar7 * 0x38) = uVar10;
            plVar12[2] = lVar7 + 1;
          }
          uStack_228 = 0;
          plStack_238 = plVar12;
          uStack_230 = uVar10;
          pdb_141173660(auStack_2b0,&plStack_238,&UNK_1434da7f3,0xc);
          puVar11 = (undefined4 *)pdb_1411727b0(auStack_2b0);
          auStack_128[0] = *puVar11;
          plStack_f8 = (longlong *)uStack_2a0;
          pdb_141174160(auStack_178,&uStack_108,&UNK_1434da7ff,9,0);
          uStack_108 = &uStack_1c8;
          plStack_f8 = (longlong *)auStack_128;
          uStack_100 = &uStack_270;
          pdb_1411887c0(auStack_178,&UNK_1434da808,6,&uStack_108);
          uStack_100 = &lStack_1a8;
          plStack_f8 = &lStack_148;
          puStack_f0 = &uStack_2f8;
          ppbStack_e0 = &pbStack_258;
          ppbStack_d8 = &pbStack_260;
          puStack_d0 = (undefined4 *)uStack_248;
          uStack_c8 = param_9;
          lStack_c0 = lStack_1e0;
          puStack_b8 = &uStack_318;
          puStack_b0 = &uStack_268;
          puStack_a8 = &uStack_338;
          uStack_108 = &uStack_270;
          plStack_e8 = &lStack_278;
          pdb_14118b840(auStack_178,&UNK_1434da80e,4,&uStack_108);
          uStack_108 = (ulonglong *)lStack_1e0;
          plStack_f8 = &uStack_2d8;
          puStack_f0 = &uStack_358;
          ppbStack_d8 = (byte **)&uStack_398;
          puStack_d0 = &uStack_3b8;
          uStack_100 = &uStack_270;
          plStack_e8 = &lStack_278;
          ppbStack_e0 = (byte **)&uStack_378;
          pdb_1411867d0(auStack_178,&UNK_1434da812,7,&uStack_108);
          if (uStack_1c8 != 0) {
            pub_1406abac0(pbStack_1c0,uStack_1c8,1);
          }
          pbVar17 = pbStack_140;
          if (lStack_138 != 0) {
            pbVar16 = pbStack_140 + 8;
            lVar7 = lStack_138;
            do {
              if (*(ulonglong *)(pbVar16 + -8) != 0) {
                pub_1406abac0(*(byte **)pbVar16,*(ulonglong *)(pbVar16 + -8),1);
              }
              pbVar16 = pbVar16 + 0x18;
              lVar7 = lVar7 + -1;
            } while (lVar7 != 0);
          }
          lVar18 = 0;
          if (lStack_148 != 0) {
            pub_1406abac0(pbVar17,lStack_148 * 0x18,8);
          }
          pbStack_58 = pbStack_198;
          pbStack_50 = (byte *)0x0;
          pbStack_60 = pbStack_1a0;
          pbVar13 = pbStack_1a0;
          while (pbStack_58 != pbStack_50) {
            pbStack_50 = pbStack_50 + 1;
            pbVar13 = pbVar13 + 0xb0;
            pdb_1404b3c90();
            pbVar17 = pbVar13;
          }
          if (lStack_1a8 != 0) {
            pub_1406abac0(pbStack_60,lStack_1a8 * 0xb0,8);
          }
          if ((char)uVar8 == '\0') {
            return;
          }
          plVar12 = (longlong *)pdb_140e97000();
          if ((char)plVar12[0xd] == '\x01') break;
          uVar15 = 0;
          plVar12 = (longlong *)pdb_142dcf3a0(plVar12);
          pbVar13 = pbVar22;
        } while (plVar12 == (longlong *)0x0);
        if (*plVar12 == 0) {
          *plVar12 = -1;
          pbStack_50 = (byte *)plVar12;
          pdb_140e95370(plVar12 + 1);
          *(longlong *)pbStack_50 = *(longlong *)pbStack_50 + 1;
          return;
        }
      }
    }
    pbVar9[0] = 0xff;
    pbVar9[1] = 0xff;
    pbVar9[2] = 0xff;
    pbVar9[3] = 0xff;
    pbVar9[4] = 0xff;
    pbVar9[5] = 0xff;
    pbVar9[6] = 0xff;
    pbVar9[7] = 0xff;
    pbStack_58 = pbVar9;
    uStack_280 = pdb_140e94f10(pbVar9 + 8,pbVar21,lVar18,pbVar17,uVar8,1,0);
    *(longlong *)pbStack_58 = *(longlong *)pbStack_58 + 1;
    uStack_288 = 1;
    param_1 = pbStack_50;
    uStack_1d0 = uStack_280;
  }
  lVar7 = **(ulonglong **)param_1 - 2;
  if (**(ulonglong **)param_1 < 2) {
    lVar7 = 4;
  }
                    /* WARNING: Could not recover jumptable at 0x00014232b2b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_1434da854 + *(int *)(&UNK_1434da854 + lVar7 * 4)))();
  return;
}

