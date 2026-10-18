// VA 0x140adf010, PDB extent 3636 bytes
// country_core::resources::history::wall_history::impl$0::ev_new_wall
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/wall_history.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::history::wall_history::impl$0::ev_new_wall
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/wall_history.rs
   Extent: 3636 */

void pdb_140adf010(undefined8 param_1,undefined8 param_2,undefined8 *param_3,uint param_4,
                  undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  ulonglong uVar13;
  longlong lVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined4 *puVar18;
  longlong lVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined8 uStack_388;
  undefined8 uStack_380;
  float fStack_378;
  undefined8 uStack_368;
  ulonglong uStack_360;
  byte *pbStack_358;
  ulonglong uStack_348;
  byte *pbStack_340;
  ulonglong uStack_338;
  undefined4 uStack_330;
  undefined4 uStack_328;
  undefined8 uStack_30c;
  undefined8 uStack_304;
  undefined4 uStack_2fc;
  undefined1 uStack_2f8;
  undefined1 uStack_2f7;
  undefined1 uStack_2f6;
  undefined1 uStack_2f5;
  undefined1 uStack_2f4;
  undefined1 uStack_2f3;
  undefined1 uStack_2f2;
  undefined1 uStack_2f1;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  uint uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  uint uStack_23c;
  undefined8 uStack_238;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  uint uStack_fc;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 uStack_c0;
  undefined1 uStack_bf;
  undefined1 uStack_be;
  undefined1 uStack_bd;
  undefined1 uStack_bc;
  undefined1 uStack_bb;
  undefined1 uStack_ba;
  undefined1 uStack_b9;
  undefined8 *puStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  uint uStack_9c;
  byte *pbStack_98;
  undefined1 uStack_8b;
  undefined1 uStack_8a;
  undefined1 uStack_89;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  fVar22 = *(float *)(param_3 + 6);
  puStack_b8 = param_3;
  if ((fVar22 == 0.0) && (!NAN(fVar22))) {
    uStack_81 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14304ef7f,0x33,&UNK_14304eff0);
  }
  fVar21 = 0.0;
  if (0.0 <= _DAT_142e3787c / fVar22) {
    fVar21 = _DAT_142e3787c / fVar22;
  }
  fVar22 = _DAT_142e36f28;
  if (fVar21 <= _DAT_142e36f28) {
    fVar22 = fVar21;
  }
  uStack_468 = CONCAT44(uStack_468._4_4_,fVar22);
  if ((fVar22 < 0.0) || (_DAT_142e36f28 < fVar22)) {
    uStack_268 = (byte *)&uStack_468;
    uStack_260 = pdb_140f70fc0;
    uStack_81 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14335ec38,&uStack_268,&UNK_14304f008);
  }
  uStack_81 = 1;
  uStack_9c = param_4;
  pdb_1419a77d0(&uStack_268,param_3,0,fVar22,&UNK_14304f020);
  uStack_c0 = *(undefined1 *)(puStack_b8 + 0xd);
  uStack_be = *(undefined1 *)((longlong)puStack_b8 + 0x6a);
  uStack_ba = *(undefined1 *)((longlong)puStack_b8 + 0x6e);
  uStack_bf = *(undefined1 *)((longlong)puStack_b8 + 0x69);
  uVar1 = *(undefined4 *)((longlong)puStack_b8 + 100);
  uStack_b9 = *(undefined1 *)((longlong)puStack_b8 + 0x6f);
  uStack_bd = *(undefined1 *)((longlong)puStack_b8 + 0x6b);
  uVar5 = *(undefined8 *)((longlong)puStack_b8 + 0x54);
  uVar6 = *(undefined8 *)((longlong)puStack_b8 + 0x5c);
  uStack_bc = *(undefined1 *)((longlong)puStack_b8 + 0x6c);
  uVar3 = *(undefined1 *)((longlong)puStack_b8 + 0x6d);
  uStack_f8 = uStack_238;
  uStack_108 = uStack_248;
  uStack_104 = uStack_244;
  uStack_100 = uStack_240;
  uStack_fc = uStack_23c;
  uStack_118 = (undefined4)uStack_258;
  uStack_114 = uStack_258._4_4_;
  uStack_110 = (undefined4)uStack_250;
  uStack_10c = uStack_250._4_4_;
  uStack_128 = (undefined4)uStack_268;
  uStack_124 = uStack_268._4_4_;
  uStack_120 = (undefined4)uStack_260;
  uStack_11c = uStack_260._4_4_;
  uStack_f0 = 2;
  uStack_d4 = (undefined4)uVar5;
  uStack_d0 = (undefined4)((ulonglong)uVar5 >> 0x20);
  uStack_cc = (undefined4)uVar6;
  uStack_c8 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uVar13 = (longlong)uStack_258 * 8;
  uStack_c4 = uVar1;
  uStack_bb = uVar3;
  if (uVar13 < 0x7ffffffffffffffd && (ulonglong)uStack_258 >> 0x3d == 0) {
    pbStack_98 = (byte *)CONCAT71(pbStack_98._1_7_,uStack_bd);
    uStack_138 = param_2;
    uStack_130 = param_1;
    uStack_8b = uStack_bc;
    uStack_8a = uStack_c0;
    uStack_89 = uStack_bf;
    uStack_87 = uStack_ba;
    uStack_86 = uStack_b9;
    uStack_85 = uStack_be;
    if (uVar13 == 0) {
      pbStack_a8 = (byte *)0x4;
      pbStack_b0 = (byte *)0x0;
      pbVar15 = pbStack_b0;
    }
    else {
      pdb_14007ee60();
      uVar20 = 4;
      pbStack_a8 = pub_1406abab0(uVar13,4);
      pbVar15 = (byte *)(ulonglong)uStack_258;
      if (pbStack_a8 == (byte *)0x0) goto LAB_140adf1c8;
    }
    pbStack_b0 = pbVar15;
    if (uStack_258 != (undefined8 *)0x0) {
      pub_142e32760(pbStack_a8,uStack_260,uVar13);
    }
    uVar10 = CONCAT44(uStack_fc,uStack_100);
    uVar13 = uVar10 * 4;
    if (uVar13 < 0x7ffffffffffffffd && uStack_fc >> 0x1e == 0) {
      if (uVar13 == 0) {
        pbStack_340 = (byte *)0x4;
        uStack_2f5 = pbStack_98._0_1_;
LAB_140adf423:
        uStack_360 = (ulonglong)pbStack_b0;
        pbStack_358 = pbStack_a8;
        uStack_2f0 = uStack_138;
        uStack_330 = (undefined4)uStack_f8;
        uStack_328 = 2;
        uStack_2f4 = uStack_8b;
        uStack_2e0 = uStack_9c;
        uStack_2dc = param_5;
        uStack_368 = 0x8000000000000000;
        uStack_408 = CONCAT44(uStack_c4,uStack_c8);
        uStack_400 = CONCAT17(uStack_b9,
                              CONCAT16(uStack_ba,
                                       CONCAT15(uStack_bb,
                                                CONCAT14(uStack_bc,
                                                         CONCAT13(uStack_bd,
                                                                  CONCAT12(uStack_be,
                                                                           CONCAT11(uStack_bf,
                                                                                    uStack_c0)))))))
        ;
        uStack_418 = CONCAT44(uStack_d4,uStack_d8);
        uStack_410 = CONCAT44(uStack_cc,uStack_d0);
        uStack_428 = uStack_e8;
        uStack_420 = uStack_e0;
        uStack_468 = CONCAT44(uStack_124,uStack_128);
        uStack_460 = CONCAT44(uStack_11c,uStack_120);
        uStack_458 = CONCAT44(uStack_114,uStack_118);
        uStack_450 = CONCAT44(uStack_10c,uStack_110);
        uStack_448 = CONCAT44(uStack_104,uStack_108);
        uStack_440 = CONCAT44(uStack_fc,uStack_100);
        uStack_430 = CONCAT44(uStack_ec,uStack_f0);
        uStack_438 = uStack_f8;
        uStack_3f8 = *puStack_b8;
        uStack_3f0 = puStack_b8[1];
        uStack_3e8 = *(undefined4 *)(puStack_b8 + 2);
        uStack_3e4 = *(undefined4 *)((longlong)puStack_b8 + 0x14);
        uStack_3e0 = *(undefined4 *)(puStack_b8 + 3);
        uStack_3dc = *(undefined4 *)((longlong)puStack_b8 + 0x1c);
        uStack_3d8 = *(undefined4 *)(puStack_b8 + 4);
        uStack_3d4 = *(undefined4 *)((longlong)puStack_b8 + 0x24);
        uStack_3d0 = *(undefined4 *)(puStack_b8 + 5);
        uStack_3cc = *(undefined4 *)((longlong)puStack_b8 + 0x2c);
        uStack_3c8 = *(undefined4 *)(puStack_b8 + 6);
        uStack_3c4 = *(undefined4 *)((longlong)puStack_b8 + 0x34);
        uStack_3c0 = *(undefined4 *)(puStack_b8 + 7);
        uStack_3bc = *(undefined4 *)((longlong)puStack_b8 + 0x3c);
        uStack_3b8 = puStack_b8[8];
        uStack_3b0 = puStack_b8[9];
        uStack_3a8 = puStack_b8[10];
        uStack_3a0 = puStack_b8[0xb];
        uStack_398 = *(undefined4 *)(puStack_b8 + 0xc);
        uStack_394 = *(undefined4 *)((longlong)puStack_b8 + 100);
        uStack_390 = *(undefined4 *)(puStack_b8 + 0xd);
        uStack_38c = *(undefined4 *)((longlong)puStack_b8 + 0x6c);
        uStack_388 = uStack_138;
        uStack_380 = 0;
        fStack_378 = fVar22;
        uStack_348 = uVar10;
        uStack_338 = uVar10;
        uStack_30c = uVar5;
        uStack_304 = uVar6;
        uStack_2fc = uVar1;
        uStack_2f8 = uStack_8a;
        uStack_2f7 = uStack_89;
        uStack_2f6 = uStack_85;
        uStack_2f3 = uVar3;
        uStack_2f2 = uStack_87;
        uStack_2f1 = uStack_86;
        uStack_2e8 = uVar5;
        pdb_14007ee60();
        pbVar15 = pub_1406abab0(0x30,8);
        if (pbVar15 == (byte *)0x0) {
          uStack_83 = 1;
          uStack_84 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x30);
        }
        pdb_14007ee60();
        pbVar11 = pub_1406abab0(8,8);
        if (pbVar11 == (byte *)0x0) {
          uStack_9c = CONCAT31(uStack_9c._1_3_,1);
          uStack_88 = 1;
          pbStack_98 = pbVar15;
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,8);
        }
        pub_142e32760(&uStack_258,&uStack_368,0x100);
        uStack_268 = (byte *)0x1;
        uStack_260 = (code *)0x1;
        pdb_14007ee60();
        pbVar12 = pub_1406abab0(0x110,0x10);
        if (pbVar12 == (byte *)0x0) {
          uStack_9c = uStack_9c & 0xffffff00;
          pbStack_a8 = pbVar11;
          pbStack_98 = pbVar15;
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(0x10,0x110);
        }
        pub_142e32760(pbVar12,&uStack_268,0x110);
        *(byte **)pbVar11 = pbVar12;
        uStack_150 = 1;
        uStack_140 = 1;
        uStack_148 = pbVar11;
        pdb_14007ee60();
        pbVar11 = pub_1406abab0(8,8);
        if (pbVar11 == (byte *)0x0) {
          pbStack_a8 = (byte *)CONCAT71(pbStack_a8._1_7_,1);
          uStack_9c = uStack_9c & 0xffffff00;
          pbStack_98 = pbVar15;
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,8);
        }
        pub_142e32760(&uStack_258,&uStack_468,0x100);
        uStack_268 = (byte *)0x1;
        uStack_260 = (code *)0x1;
        pdb_14007ee60();
        pbVar12 = pub_1406abab0(0x110,0x10);
        if (pbVar12 == (byte *)0x0) {
          pbStack_a8 = (byte *)((ulonglong)pbStack_a8 & 0xffffffffffffff00);
          uStack_9c = uStack_9c & 0xffffff00;
          pbStack_b0 = pbVar11;
          pbStack_98 = pbVar15;
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(0x10,0x110);
        }
        puVar16 = &uStack_268;
        pub_142e32760(pbVar12,puVar16,0x110);
        *(byte **)pbVar11 = pbVar12;
        *(undefined8 *)(pbVar15 + 0x10) = uStack_140;
        *(undefined4 *)pbVar15 = (undefined4)uStack_150;
        *(undefined4 *)(pbVar15 + 4) = uStack_150._4_4_;
        *(undefined4 *)(pbVar15 + 8) = (undefined4)uStack_148;
        *(undefined4 *)(pbVar15 + 0xc) = uStack_148._4_4_;
        pbVar15[0x18] = 1;
        pbVar15[0x19] = 0;
        pbVar15[0x1a] = 0;
        pbVar15[0x1b] = 0;
        pbVar15[0x1c] = 0;
        pbVar15[0x1d] = 0;
        pbVar15[0x1e] = 0;
        pbVar15[0x1f] = 0;
        *(byte **)(pbVar15 + 0x20) = pbVar11;
        pbVar15[0x28] = 1;
        pbVar15[0x29] = 0;
        pbVar15[0x2a] = 0;
        pbVar15[0x2b] = 0;
        pbVar15[0x2c] = 0;
        pbVar15[0x2d] = 0;
        pbVar15[0x2e] = 0;
        pbVar15[0x2f] = 0;
        uStack_250 = pbVar15 + 0x30;
        uStack_258 = (undefined8 *)0x2;
        uStack_83 = 0;
        uStack_84 = 0;
        uStack_268 = pbVar15;
        uStack_260 = (code *)pbVar15;
        uStack_260 = (code *)pdb_140c69b60(&uStack_268);
        uStack_268 = (byte *)0x7;
        uStack_83 = 0;
        uStack_84 = 0;
        uStack_258 = puVar16;
        pdb_140ae5180(uStack_130,&uStack_268,&UNK_14304f038);
        return;
      }
      puVar9 = (undefined4 *)CONCAT44(uStack_104,uStack_108);
      pdb_14007ee60();
      uVar20 = 4;
      pbStack_340 = pub_1406abab0(uVar13,4);
      if (pbStack_340 != (byte *)0x0) {
        uStack_2f5 = pbStack_98._0_1_;
        if (uVar10 != 0) {
          uVar13 = uVar10 - 1;
          if (uVar10 < uVar10 - 1) {
            uVar13 = uVar10;
          }
          if (uVar13 < 8) {
            lVar14 = 0;
            uVar13 = uVar10;
            puVar18 = puVar9;
          }
          else {
            uVar13 = uVar13 + 1;
            uVar17 = 8;
            if ((uVar13 & 7) != 0) {
              uVar17 = (ulonglong)((uint)uVar13 & 7);
            }
            lVar14 = uVar13 - uVar17;
            uVar13 = uVar10 - lVar14;
            puVar18 = puVar9 + lVar14;
            lVar19 = 0;
            do {
              uVar20 = *(undefined8 *)((longlong)(puVar9 + lVar19) + 8);
              uVar7 = *(undefined8 *)(puVar9 + lVar19 + 4);
              uVar8 = *(undefined8 *)((longlong)(puVar9 + lVar19 + 4) + 8);
              *(undefined8 *)(pbStack_340 + lVar19 * 4) = *(undefined8 *)(puVar9 + lVar19);
              *(undefined8 *)(pbStack_340 + lVar19 * 4 + 8) = uVar20;
              *(undefined8 *)(pbStack_340 + lVar19 * 4 + 0x10) = uVar7;
              *(undefined8 *)(pbStack_340 + lVar19 * 4 + 0x10 + 8) = uVar8;
              lVar19 = lVar19 + 8;
            } while (lVar14 != lVar19);
          }
          pbVar15 = pbStack_340 + lVar14 * 4;
          do {
            if (puVar18 == puVar9 + uVar10) break;
            uVar2 = *puVar18;
            puVar18 = puVar18 + 1;
            *(undefined4 *)pbVar15 = uVar2;
            pbVar15 = pbVar15 + 4;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        goto LAB_140adf423;
      }
    }
    else {
      uVar20 = 0;
    }
    pdb_142dc7e2a(uVar20,uVar13);
  }
  else {
    uVar20 = 0;
LAB_140adf1c8:
    uStack_82 = 1;
    pdb_142dc7e2a(uVar20,uVar13);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}

