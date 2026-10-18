// VA 0x140a476a0, PDB extent 8912 bytes
// country_core::systems::wall::finish_wall::finish_wall
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/finish_wall.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::wall::finish_wall::finish_wall
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/finish_wall.rs
   Extent: 8912 */

void pdb_140a476a0(undefined8 param_1,byte ****param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 *param_9,longlong *param_10,longlong *param_11,undefined8 *param_12,
                  longlong *param_13)

{
  char *pcVar1;
  float fVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  byte **ppbVar6;
  byte **ppbVar7;
  byte **ppbVar8;
  byte ****ppppbVar9;
  undefined4 *puVar10;
  code *pcVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  char cVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined *puVar20;
  byte **ppbVar21;
  byte **ppbVar22;
  byte *pbVar23;
  longlong *plVar24;
  uint uVar25;
  byte **ppbVar26;
  byte *pbVar27;
  int iVar28;
  ulonglong uVar29;
  undefined4 *puVar30;
  byte ***pppbVar31;
  byte ***pppbVar32;
  byte ****ppppbVar33;
  byte **ppbVar34;
  longlong lVar35;
  byte **ppbVar36;
  ushort uVar37;
  longlong lVar38;
  undefined8 *puVar39;
  byte **ppbVar40;
  undefined *puVar41;
  undefined8 uVar42;
  bool bVar43;
  byte bVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  longlong alStack_4e0 [31];
  longlong lStack_3e8;
  longlong lStack_3e0;
  undefined *puStack_3d8;
  byte *pbStack_3d0;
  undefined *puStack_3c8;
  undefined *puStack_3c0;
  longlong lStack_3b8;
  longlong lStack_3b0;
  longlong lStack_3a8;
  longlong lStack_3a0;
  byte ****ppppbStack_398;
  byte ****ppppbStack_390;
  longlong lStack_388;
  undefined8 uStack_380;
  longlong *plStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  byte ****ppppbStack_360;
  byte ***pppbStack_358;
  longlong lStack_350;
  longlong lStack_348;
  undefined *puStack_340;
  byte *pbStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  longlong lStack_320;
  longlong lStack_318;
  longlong lStack_310;
  longlong lStack_308;
  byte ****ppppbStack_300;
  byte ****ppppbStack_2f8;
  longlong lStack_2f0;
  undefined8 uStack_2d8;
  byte ***pppbStack_2d0;
  longlong lStack_2c8;
  byte ****ppppbStack_2c0;
  byte ***pppbStack_2b8;
  byte ****ppppbStack_2b0;
  undefined *puStack_2a8;
  byte *pbStack_2a0;
  undefined *puStack_298;
  float fStack_290;
  undefined4 uStack_28c;
  uint uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  byte ****ppppbStack_268;
  byte ****ppppbStack_260;
  undefined1 uStack_258;
  undefined1 uStack_257;
  undefined4 uStack_256;
  undefined2 uStack_252;
  byte ***pppbStack_250;
  byte ****ppppbStack_248;
  longlong lStack_240;
  longlong lStack_238;
  undefined8 uStack_230;
  byte ****ppppbStack_228;
  byte ****ppppbStack_220;
  uint uStack_218;
  undefined4 uStack_214;
  undefined8 uStack_210;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  byte ****ppppbStack_1d0;
  byte ****ppppbStack_1c8;
  undefined8 uStack_1c0;
  longlong lStack_1b8;
  byte ****ppppbStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined8 uStack_120;
  byte ****ppppbStack_118;
  byte ***pppbStack_110;
  byte ****ppppbStack_108;
  undefined *puStack_100;
  byte *pbStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  uint uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  byte ****ppppbStack_c0;
  byte ****ppppbStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  byte ****ppppbStack_a0;
  ulonglong uStack_98;
  longlong *plStack_90;
  byte ***pppbStack_88;
  undefined1 uStack_79;
  byte ****ppppbStack_78;
  byte **ppbStack_70;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  plStack_90 = param_3;
  cVar17 = pdb_140e94b40();
  if (cVar17 == '\0') {
    lStack_238 = 0;
  }
  else {
    ppbVar40 = (byte **)&UNK_14303d14e;
    lVar35 = 0x35;
    uVar29 = 0x35;
    lVar18 = pdb_140a4ebd0(&UNK_14303d14e);
    if (lVar18 == 1) {
      if (0x35 < uVar29) {
LAB_140a49165:
        pdb_142dc8070(&UNK_14303d14e,0x35,0);
LAB_140a49185:
        pdb_142dc8070(&UNK_14303d14e,0x35);
LAB_140a491a8:
        uStack_63 = 0;
        uStack_64 = 1;
        pdb_1409a02c0(&ppppbStack_228);
        uStack_63 = 0;
        uStack_64 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_14303ca77,0x4d,&UNK_14303cac8);
      }
      ppbVar40 = (byte **)&UNK_14303d14e;
      uVar19 = pdb_140a4ebd0(&UNK_14303d14e);
      if ((uVar19 & 1) != 0) {
        if (0x35 < uVar29 + 2) goto LAB_140a49185;
        lVar35 = 0x33 - uVar29;
        ppbVar40 = (byte **)(&UNK_14303d150 + uVar29);
      }
    }
    puVar20 = &UNK_14303ca77;
    puVar41 = &UNK_14303ca44;
    do {
      pbVar23 = puVar20 + -1;
      uVar25 = (uint)(char)*pbVar23;
      if ((int)uVar25 < 0) {
        bVar44 = puVar20[-2];
        if ((char)bVar44 < -0x40) {
          bVar3 = puVar20[-3];
          if ((char)bVar3 < -0x40) {
            pbVar27 = puVar20 + -4;
            puVar20 = puVar20 + -4;
            uVar25 = bVar3 & 0x3f | (*pbVar27 & 7) << 6;
          }
          else {
            puVar20 = puVar20 + -3;
            uVar25 = bVar3 & 0xf;
          }
          uVar25 = bVar44 & 0x3f | uVar25 << 6;
        }
        else {
          puVar20 = puVar20 + -2;
          uVar25 = bVar44 & 0x1f;
        }
        uVar25 = (uint)(*pbVar23 & 0x3f) | uVar25 << 6;
        if (uVar25 != 0x5c) goto LAB_140a477d9;
LAB_140a477f6:
        if ((undefined *)0x33 < puVar20 + -0x14303ca43) {
          pdb_142dc8070(&UNK_14303ca44,0x33,puVar20 + -0x14303ca43,0x33,&UNK_14303d1e8);
          goto LAB_140a49165;
        }
        puVar39 = (undefined8 *)(0x32 - (longlong)(puVar20 + -0x14303ca44));
        puVar41 = puVar20 + 1;
        goto LAB_140a4781a;
      }
      puVar20 = puVar20 + -1;
      if (uVar25 == 0x5c) goto LAB_140a477f6;
LAB_140a477d9:
      if (uVar25 == 0x2f) goto LAB_140a477f6;
    } while (puVar20 != &UNK_14303ca44);
    puVar39 = (undefined8 *)0x33;
LAB_140a4781a:
    ppbVar21 = (byte **)pdb_140e97000();
    if (*(char *)(ppbVar21 + 0xd) != '\x01') {
      ppbVar21 = (byte **)pdb_142d8ec20(ppbVar21,0);
      if (ppbVar21 == (byte **)0x0) goto LAB_140a49121;
    }
    if (*ppbVar21 != (byte *)0x0) goto LAB_140a48fec;
    *ppbVar21 = (byte *)0xffffffffffffffff;
    ppbStack_70 = ppbVar21;
    uStack_230 = pdb_140e94f10(ppbVar21 + 1,ppbVar40,lVar35,puVar41,puVar39,1,0);
    *ppbStack_70 = *ppbStack_70 + 1;
    lStack_238 = 1;
  }
  pppbStack_250 = (byte ***)0x0;
  ppppbStack_248 = (byte ****)0x8;
  lStack_240 = 0;
  uStack_380 = param_5;
  plStack_378 = plStack_90;
  uStack_370 = param_7;
  uStack_368 = param_8;
  ppppbStack_360 = &pppbStack_250;
  pppbVar31 = *param_2;
  pppbVar32 = param_2[1];
  ppbVar40 = *pppbVar31;
  ppbVar34 = (byte **)0x0;
  ppbVar21 = (byte **)((longlong)ppbVar40 - (longlong)pppbVar32[3]);
  if (ppbVar40 < pppbVar32[3]) {
    ppbVar21 = ppbVar34;
  }
  ppbVar22 = (byte **)((longlong)ppbVar40 - (longlong)pppbVar32[7]);
  if (ppbVar40 < pppbVar32[7]) {
    ppbVar22 = ppbVar34;
  }
  ppbVar6 = pppbVar32[2];
  ppbVar7 = pppbVar32[6];
  ppbVar26 = (byte **)((longlong)ppbVar7 - (longlong)ppbVar22);
  if (ppbVar7 < ppbVar22) {
    ppbVar26 = ppbVar34;
  }
  ppbVar36 = (byte **)((longlong)ppbVar6 - (longlong)ppbVar21);
  if (ppbVar6 < ppbVar21) {
    ppbVar36 = ppbVar34;
  }
  ppbVar40 = pppbVar32[8];
  ppbVar34 = pppbVar32[1];
  ppbVar8 = pppbVar32[5];
  *pppbVar31 = (byte **)((longlong)ppbVar40 + (-(longlong)ppbVar36 - (longlong)ppbVar26));
  if ((ppbVar6 < ppbVar21 || (byte **)((longlong)ppbVar6 - (longlong)ppbVar21) == (byte **)0x0) &&
      (ppbVar7 < ppbVar22 || (byte **)((longlong)ppbVar7 - (longlong)ppbVar22) == (byte **)0x0))
  goto LAB_140a48b76;
  *pppbVar31 = ppbVar40;
  ppbVar40 = (byte **)*param_4;
  ppbStack_70 = ppbVar40;
  if (SBORROW8(0,(longlong)*ppbVar40)) {
    uStack_210 = (byte ***)CONCAT44(uStack_210._4_4_,(undefined4)uStack_210);
    if (1 < *_DAT_143ca8e90) {
      ppppbStack_228 = (byte ****)0x0;
      ppppbStack_220 = (byte ****)&UNK_14303cba6;
      uStack_218 = 0x28;
      uStack_214 = 0;
      uStack_210._0_4_ = 0;
      uStack_210._4_4_ = 0;
      uStack_208 = 0x4303ca10;
      uStack_204 = 1;
      uStack_200 = 0x33;
      uStack_1fc = 0;
      puStack_1f8 = (undefined *)0x2;
      puStack_1f0 = &UNK_14303cba6;
      uStack_1e8 = 0x28;
      uStack_1e0 = 0xbc00000001;
      puStack_1d8 = &UNK_14303cb68;
      ppppbStack_1d0 = (byte ****)0x7d;
      uStack_61 = 1;
      pdb_140f332f0(&uStack_79,&ppppbStack_228);
      uStack_210 = (byte ***)CONCAT44(uStack_210._4_4_,(undefined4)uStack_210);
    }
  }
  else {
    lVar18 = (longlong)(ppbVar34 + (longlong)ppbVar21 * 2);
    if (ppbVar6 < ppbVar21) {
      lVar18 = 8;
    }
    lVar35 = 0;
    if (ppbVar21 < ppbVar6) {
      lVar35 = lVar18 + (longlong)ppbVar36 * 0x10 + -0x10;
    }
    lVar18 = (longlong)(ppbVar8 + (longlong)ppbVar22 * 2);
    if (ppbVar7 < ppbVar22) {
      lVar18 = 8;
    }
    lVar18 = lVar18 + (longlong)ppbVar26 * 0x10 + -0x10;
    if (ppbVar7 <= ppbVar22) {
      lVar18 = lVar35;
    }
    plVar24 = (longlong *)*plStack_90;
    ppppbVar33 = (byte ****)ppbVar40[0x10];
    ppppbStack_228 = ppppbVar33;
    if (*(char *)(lVar18 + 8) == '\0') {
      if (plVar24[3] != 0) {
        uStack_61 = 1;
        uVar29 = pdb_1400af0a0(plVar24 + 4,&ppppbStack_228);
        lVar18 = *plVar24;
        bVar44 = (byte)(uVar29 >> 0x39);
        auVar45 = ZEXT216(CONCAT11(bVar44,bVar44));
        auVar45 = pshuflw(auVar45,auVar45,0);
        lVar35 = 0;
        while( true ) {
          uVar29 = uVar29 & plVar24[1];
          pcVar1 = (char *)(lVar18 + uVar29);
          auVar53[0] = -(*pcVar1 == auVar45[0]);
          auVar53[1] = -(pcVar1[1] == auVar45[1]);
          auVar53[2] = -(pcVar1[2] == auVar45[2]);
          auVar53[3] = -(pcVar1[3] == auVar45[3]);
          auVar53[4] = -(pcVar1[4] == auVar45[4]);
          auVar53[5] = -(pcVar1[5] == auVar45[5]);
          auVar53[6] = -(pcVar1[6] == auVar45[6]);
          auVar53[7] = -(pcVar1[7] == auVar45[7]);
          auVar53[8] = -(pcVar1[8] == auVar45[0]);
          auVar53[9] = -(pcVar1[9] == auVar45[1]);
          auVar53[10] = -(pcVar1[10] == auVar45[2]);
          auVar53[0xb] = -(pcVar1[0xb] == auVar45[3]);
          auVar53[0xc] = -(pcVar1[0xc] == auVar45[4]);
          auVar53[0xd] = -(pcVar1[0xd] == auVar45[5]);
          auVar53[0xe] = -(pcVar1[0xe] == auVar45[6]);
          auVar53[0xf] = -(pcVar1[0xf] == auVar45[7]);
          uVar37 = (ushort)(SUB161(auVar53 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar53 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar53 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar53 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar53 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar53 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar53 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar53 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar53 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar53 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar53 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar53 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar53 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar53 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar53[0xf] >> 7) << 0xf;
          uVar25 = (uint)uVar37;
          ppbVar40 = ppbStack_70;
          if (uVar37 != 0) break;
LAB_140a47c02:
          auVar48[0] = -(*pcVar1 == -1);
          auVar48[1] = -(pcVar1[1] == -1);
          auVar48[2] = -(pcVar1[2] == -1);
          auVar48[3] = -(pcVar1[3] == -1);
          auVar48[4] = -(pcVar1[4] == -1);
          auVar48[5] = -(pcVar1[5] == -1);
          auVar48[6] = -(pcVar1[6] == -1);
          auVar48[7] = -(pcVar1[7] == -1);
          auVar48[8] = -(pcVar1[8] == -1);
          auVar48[9] = -(pcVar1[9] == -1);
          auVar48[10] = -(pcVar1[10] == -1);
          auVar48[0xb] = -(pcVar1[0xb] == -1);
          auVar48[0xc] = -(pcVar1[0xc] == -1);
          auVar48[0xd] = -(pcVar1[0xd] == -1);
          auVar48[0xe] = -(pcVar1[0xe] == -1);
          auVar48[0xf] = -(pcVar1[0xf] == -1);
          uStack_210 = (byte ***)CONCAT44(uStack_210._4_4_,(undefined4)uStack_210);
          if ((((((((((((((((SUB161(auVar48 >> 7,0) & 1) != 0 || (SUB161(auVar48 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar48 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar48 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar48 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar48 >> 0x2f,0) & 1) != 0) || (SUB161(auVar48 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar48 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar48 >> 0x47,0) & 1) != 0) || (SUB161(auVar48 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar48 >> 0x57,0) & 1) != 0) || (SUB161(auVar48 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar48 >> 0x67,0) & 1) != 0) || (SUB161(auVar48 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar48 >> 0x77,0) & 1) != 0) || auVar48[0xf] < '\0') goto LAB_140a48b45;
          uVar29 = uVar29 + lVar35 + 0x10;
          lVar35 = lVar35 + 0x10;
        }
LAB_140a47bdc:
        uVar12 = 0;
        for (uVar13 = uVar25; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
          uVar12 = uVar12 + 1;
        }
        lVar38 = (uVar12 + uVar29 & plVar24[1]) * -0x78;
        if (ppppbVar33 != *(byte *****)(lVar18 + -0x78 + lVar38)) goto code_r0x000140a47bf5;
        *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
        plVar24 = (longlong *)*param_6;
        pppbVar31 = (byte ***)*plVar24;
        lStack_388 = plVar24[0xd];
        ppppbStack_398 = (byte ****)plVar24[0xb];
        ppppbStack_390 = (byte ****)plVar24[0xc];
        lStack_3a8 = plVar24[9];
        lStack_3a0 = plVar24[10];
        lStack_3b8 = plVar24[7];
        lStack_3b0 = plVar24[8];
        puStack_3c8 = (undefined *)plVar24[5];
        puStack_3c0 = (undefined *)plVar24[6];
        puStack_3d8 = (undefined *)plVar24[3];
        pbStack_3d0 = (byte *)plVar24[4];
        lStack_3e8 = plVar24[1];
        lStack_3e0 = plVar24[2];
        *plVar24 = -0x8000000000000000;
        uStack_210 = (byte ***)CONCAT44(uStack_210._4_4_,(undefined4)uStack_210);
        if (SBORROW8(0,(longlong)pppbVar31)) goto LAB_140a48b45;
        lVar18 = lVar18 + lVar38;
        ppppbVar9 = *(byte *****)(lVar18 + -0x60);
        uVar29 = (longlong)ppppbVar9 * 8;
        pppbStack_358 = pppbVar31;
        lStack_350 = lStack_3e8;
        lStack_348 = lStack_3e0;
        puStack_340 = puStack_3d8;
        pbStack_338 = pbStack_3d0;
        puStack_330 = puStack_3c8;
        puStack_328 = puStack_3c0;
        lStack_320 = lStack_3b8;
        lStack_318 = lStack_3b0;
        lStack_310 = lStack_3a8;
        lStack_308 = lStack_3a0;
        ppppbStack_300 = ppppbStack_398;
        ppppbStack_2f8 = ppppbStack_390;
        lStack_2f0 = lStack_388;
        if (0x7ffffffffffffffc < uVar29 || (ulonglong)ppppbVar9 >> 0x3d != 0) {
          uVar42 = 0;
          ppppbStack_a0 = ppppbVar33;
LAB_140a47d86:
          uStack_66 = 1;
          pdb_142dc7e2a(uVar42,uVar29);
          goto LAB_140a4920c;
        }
        if (uVar29 == 0) {
          pppbStack_88 = (byte ***)0x4;
          ppppbStack_78 = (byte ****)0x0;
          uVar19 = *(ulonglong *)(lVar18 + -0x68);
          ppppbStack_a0 = ppppbVar33;
          ppppbVar33 = ppppbStack_78;
        }
        else {
          ppppbStack_a0 = ppppbVar33;
          uStack_98 = *(ulonglong *)(lVar18 + -0x68);
          pdb_14007ee60();
          uVar42 = 4;
          pppbStack_88 = (byte ***)pub_1406abab0(uVar29,4);
          uVar19 = uStack_98;
          ppppbVar33 = ppppbVar9;
          if (pppbStack_88 == (byte ***)0x0) goto LAB_140a47d86;
        }
        ppppbStack_78 = ppppbVar33;
        if (ppppbVar9 != (byte ****)0x0) {
          pub_142e32760(pppbStack_88,uVar19);
        }
        puVar20 = *(undefined **)(lVar18 + -0x48);
        uVar19 = (longlong)puVar20 * 4;
        uStack_98 = uVar19;
        if (0x7ffffffffffffffc < uVar19 || (ulonglong)puVar20 >> 0x3e != 0) {
          uVar29 = 0;
LAB_140a47f5b:
          pdb_142dc7e2a(uVar29,uStack_98);
          goto LAB_140a4920c;
        }
        puStack_a8 = puVar20;
        if (uVar19 == 0) {
          pbVar23 = (byte *)0x4;
          goto LAB_140a483d5;
        }
        puVar10 = *(undefined4 **)(lVar18 + -0x50);
        pdb_14007ee60();
        uVar29 = 4;
        pbVar23 = pub_1406abab0(uVar19,4);
        if (pbVar23 == (byte *)0x0) goto LAB_140a47f5b;
        if (puStack_a8 == (undefined *)0x0) goto LAB_140a483d5;
        puVar20 = puStack_a8 + -1;
        if (puStack_a8 < puStack_a8 + -1) {
          puVar20 = puStack_a8;
        }
        if (puVar20 < (undefined *)0x8) {
          lVar35 = 0;
          puVar20 = puStack_a8;
          puVar30 = puVar10;
        }
        else {
          puVar20 = puVar20 + 1;
          uVar19 = 8;
          if (((ulonglong)puVar20 & 7) != 0) {
            uVar19 = (ulonglong)((uint)puVar20 & 7);
          }
          lVar35 = (longlong)puVar20 - uVar19;
          puVar20 = puStack_a8 + -lVar35;
          puVar30 = puVar10 + lVar35;
          lVar38 = 0;
          do {
            uVar42 = *(undefined8 *)((longlong)(puVar10 + lVar38) + 8);
            uVar15 = *(undefined8 *)(puVar10 + lVar38 + 4);
            uVar16 = *(undefined8 *)((longlong)(puVar10 + lVar38 + 4) + 8);
            *(undefined8 *)(pbVar23 + lVar38 * 4) = *(undefined8 *)(puVar10 + lVar38);
            *(undefined8 *)(pbVar23 + lVar38 * 4 + 8) = uVar42;
            *(undefined8 *)(pbVar23 + lVar38 * 4 + 0x10) = uVar15;
            *(undefined8 *)(pbVar23 + lVar38 * 4 + 0x10 + 8) = uVar16;
            lVar38 = lVar38 + 8;
          } while (lVar35 != lVar38);
        }
        pbVar27 = pbVar23 + lVar35 * 4;
        do {
          if (puVar30 == puVar10 + (longlong)puStack_a8) break;
          uVar5 = *puVar30;
          puVar30 = puVar30 + 1;
          *(undefined4 *)pbVar27 = uVar5;
          pbVar27 = pbVar27 + 4;
          puVar20 = puVar20 + -1;
        } while (puVar20 != (undefined *)0x0);
LAB_140a483d5:
        param_2 = ppppbStack_a0;
        fStack_290 = *(float *)(lVar18 + -0x40);
        uVar25 = *(uint *)(lVar18 + -0x38);
        iVar28 = uVar25 - 2;
        if (uVar25 < 2) {
          iVar28 = 2;
        }
        uStack_288 = 2;
        if (iVar28 != 0) {
          if (iVar28 == 1) {
            uStack_288 = 3;
          }
          else {
            uStack_218 = (uint)*(undefined8 *)(lVar18 + -0x24);
            uStack_214 = (undefined4)((ulonglong)*(undefined8 *)(lVar18 + -0x24) >> 0x20);
            ppppbStack_228 = *(byte *****)(lVar18 + -0x34);
            ppppbStack_220 = *(byte *****)(lVar18 + -0x2c);
            uStack_288 = uVar25;
          }
        }
        uStack_258 = *(undefined1 *)(lVar18 + -8);
        uStack_252 = *(undefined2 *)(lVar18 + -2);
        pppbStack_2b8 = pppbStack_88;
        uStack_284 = SUB84(ppppbStack_228,0);
        uStack_280 = (undefined4)((ulonglong)ppppbStack_228 >> 0x20);
        uStack_27c = SUB84(ppppbStack_220,0);
        uStack_278 = (undefined4)((ulonglong)ppppbStack_220 >> 0x20);
        uStack_274 = uStack_218;
        uStack_270 = uStack_214;
        uStack_256 = *(undefined4 *)(lVar18 + -6);
        ppppbStack_268 = *(byte *****)(lVar18 + -0x18);
        ppppbStack_260 = *(byte *****)(lVar18 + -0x10);
        uVar5 = *(undefined4 *)((longlong)ppbStack_70 + 0x94);
        uStack_257 = *(undefined *)((longlong)ppbStack_70 + 0xa5);
        uVar42 = CONCAT71((int7)(uVar29 >> 8),1);
        ppppbStack_2c0 = ppppbStack_78;
        ppppbStack_2b0 = ppppbVar9;
        puStack_2a8 = puStack_a8;
        pbStack_2a0 = pbVar23;
        puStack_298 = puStack_a8;
        uStack_26c = uVar5;
        if (((_DAT_142e3787c <= fStack_290) && ((byte ****)0x1 < ppppbVar9)) && (0.0 < fStack_290))
        {
          uStack_63 = 1;
          uStack_64 = 1;
          pdb_140a4f320(&ppppbStack_118,&pppbStack_358);
          uStack_1c0 = (byte ****)
                       CONCAT26(uStack_252,CONCAT42(uStack_256,CONCAT11(uStack_257,uStack_258)));
          ppppbStack_1c8 = ppppbStack_260;
          puStack_1d8 = (undefined *)CONCAT44(uStack_26c,uStack_270);
          ppppbStack_1d0 = ppppbStack_268;
          uStack_1e8 = CONCAT44(uStack_27c,uStack_280);
          uStack_1e0 = CONCAT44(uStack_274,uStack_278);
          puStack_1f8 = (undefined *)CONCAT44(uStack_28c,fStack_290);
          puStack_1f0 = (undefined *)CONCAT44(uStack_284,uStack_288);
          uStack_208 = SUB84(pbStack_2a0,0);
          uStack_204 = (undefined4)((ulonglong)pbStack_2a0 >> 0x20);
          uStack_200 = SUB84(puStack_298,0);
          uStack_1fc = (undefined4)((ulonglong)puStack_298 >> 0x20);
          uStack_218 = (uint)ppppbStack_2b0;
          uStack_214 = (undefined4)((ulonglong)ppppbStack_2b0 >> 0x20);
          uStack_210._0_4_ = SUB84(puStack_2a8,0);
          uStack_210._4_4_ = (undefined4)((ulonglong)puStack_2a8 >> 0x20);
          ppppbStack_228 = ppppbStack_2c0;
          ppppbStack_220 = (byte ****)pppbStack_2b8;
          uStack_63 = 0;
          uStack_64 = 1;
          pdb_140ae06e0(alStack_4e0,param_2,&ppppbStack_118,&ppppbStack_228,
                        *(undefined *)((longlong)ppbStack_70 + 0xa7));
          uVar42 = 0;
          if (!SBORROW8(0,alStack_4e0[0])) {
            *(undefined4 *)param_10[2] = *(undefined4 *)((longlong)param_10 + 0x1c);
            lVar35 = *param_10;
            pub_142e32760(&ppppbStack_228,lVar35 + 0x128,0xf8);
            pub_142e32760(lVar35 + 0x128,alStack_4e0,0xf8);
            if (!SBORROW8(0,(longlong)ppppbStack_228)) goto LAB_140a491a8;
            uVar25 = *(uint *)(lVar18 + -0x38);
            uStack_63 = 0;
            uStack_64 = 1;
            pdb_140a49970(&uStack_380,ppbStack_70);
            uStack_61 = 1;
            pdb_14049c2a0(&pppbStack_358);
            ppbVar40 = ppbStack_70;
            if (uVar25 < 2) {
              uStack_61 = 1;
              lVar18 = pdb_140b0e4b0(*plStack_90,param_2);
              if (lVar18 == 0) {
                uStack_61 = 1;
                    /* WARNING: Subroutine does not return */
                pdb_142dc83d0(&UNK_14303caf8,0x7f,&UNK_14303cb38);
              }
              ppppbStack_2c0 = (byte ****)0x0;
              pppbStack_2b8 = (byte ***)0x8;
              ppppbStack_2b0 = (byte ****)0x0;
              uVar25 = *(uint *)(lVar18 + 0x38);
              iVar28 = uVar25 - 2;
              uStack_218 = 2;
              if (uVar25 < 2) {
                iVar28 = 2;
              }
              ppbVar40 = ppbStack_70;
              if (iVar28 == 0) goto LAB_140a49010;
              if (iVar28 != 1) goto LAB_140a48ff8;
              uStack_218 = 3;
              goto LAB_140a49010;
            }
            goto LAB_140a48b45;
          }
        }
        *(undefined4 *)plStack_90[2] = *(undefined4 *)((longlong)plStack_90 + 0x1c);
        uStack_63 = (undefined1)uVar42;
        uStack_64 = 1;
        pdb_140b0e830(&ppppbStack_228,*plStack_90,param_2);
        if (!SBORROW8(0,(longlong)ppppbStack_228)) {
          if (ppppbStack_228 != (byte ****)0x0) {
            pub_1406abac0((byte *)ppppbStack_220,(longlong)ppppbStack_228 << 3,4);
          }
          if (CONCAT44(uStack_210._4_4_,(undefined4)uStack_210) != 0) {
            pub_1406abac0((byte *)CONCAT44(uStack_204,uStack_208),
                          CONCAT44(uStack_210._4_4_,(undefined4)uStack_210) << 2,4);
          }
        }
        uStack_2d8 = 0;
        pppbStack_2d0 = (byte ***)0x8;
        lStack_2c8 = 0;
        ppppbStack_b8 = ppppbStack_2f8;
        uStack_b0 = lStack_2f0;
        uStack_c8 = (undefined4)lStack_308;
        uStack_c4 = (undefined4)((ulonglong)lStack_308 >> 0x20);
        ppppbStack_c0 = ppppbStack_300;
        uStack_d8 = (undefined4)lStack_318;
        uStack_d4 = (undefined4)((ulonglong)lStack_318 >> 0x20);
        uStack_d0 = (undefined4)lStack_310;
        uStack_cc = (undefined4)((ulonglong)lStack_310 >> 0x20);
        puStack_e8 = puStack_328;
        uStack_e0 = (uint)lStack_320;
        uStack_dc = (undefined4)((ulonglong)lStack_320 >> 0x20);
        pbStack_f8 = pbStack_338;
        puStack_f0 = puStack_330;
        ppppbStack_108 = (byte ****)lStack_348;
        puStack_100 = puStack_340;
        ppppbStack_118 = (byte ****)pppbStack_358;
        pppbStack_110 = (byte ***)lStack_350;
        ppppbStack_228 = param_2;
        uStack_120 = uVar42;
        if (*(char *)((longlong)ppbStack_70 + 0xa4) == '\0') {
          param_13 = (longlong *)*param_12;
          if (param_13[3] == 0) goto LAB_140a4884a;
          uVar29 = pdb_1400af0a0(param_13 + 4,&ppppbStack_228);
          bVar44 = (byte)(uVar29 >> 0x39);
          auVar45 = ZEXT216(CONCAT11(bVar44,bVar44));
          auVar45 = pshuflw(auVar45,auVar45,0);
          lVar18 = 0;
          while( true ) {
            uVar29 = uVar29 & param_13[1];
            pcVar1 = (char *)(*param_13 + uVar29);
            auVar55[0] = -(*pcVar1 == auVar45[0]);
            auVar55[1] = -(pcVar1[1] == auVar45[1]);
            auVar55[2] = -(pcVar1[2] == auVar45[2]);
            auVar55[3] = -(pcVar1[3] == auVar45[3]);
            auVar55[4] = -(pcVar1[4] == auVar45[4]);
            auVar55[5] = -(pcVar1[5] == auVar45[5]);
            auVar55[6] = -(pcVar1[6] == auVar45[6]);
            auVar55[7] = -(pcVar1[7] == auVar45[7]);
            auVar55[8] = -(pcVar1[8] == auVar45[0]);
            auVar55[9] = -(pcVar1[9] == auVar45[1]);
            auVar55[10] = -(pcVar1[10] == auVar45[2]);
            auVar55[0xb] = -(pcVar1[0xb] == auVar45[3]);
            auVar55[0xc] = -(pcVar1[0xc] == auVar45[4]);
            auVar55[0xd] = -(pcVar1[0xd] == auVar45[5]);
            auVar55[0xe] = -(pcVar1[0xe] == auVar45[6]);
            auVar55[0xf] = -(pcVar1[0xf] == auVar45[7]);
            uVar37 = (ushort)(SUB161(auVar55 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar55 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar55 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar55 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar55 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar55 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar55 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar55 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar55 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar55 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar55 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar55 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar55 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar55 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar55 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar55[0xf] >> 7) << 0xf;
            uVar25 = (uint)uVar37;
            if (uVar37 != 0) break;
LAB_140a4882f:
            auVar50[0] = -(*pcVar1 == -1);
            auVar50[1] = -(pcVar1[1] == -1);
            auVar50[2] = -(pcVar1[2] == -1);
            auVar50[3] = -(pcVar1[3] == -1);
            auVar50[4] = -(pcVar1[4] == -1);
            auVar50[5] = -(pcVar1[5] == -1);
            auVar50[6] = -(pcVar1[6] == -1);
            auVar50[7] = -(pcVar1[7] == -1);
            auVar50[8] = -(pcVar1[8] == -1);
            auVar50[9] = -(pcVar1[9] == -1);
            auVar50[10] = -(pcVar1[10] == -1);
            auVar50[0xb] = -(pcVar1[0xb] == -1);
            auVar50[0xc] = -(pcVar1[0xc] == -1);
            auVar50[0xd] = -(pcVar1[0xd] == -1);
            auVar50[0xe] = -(pcVar1[0xe] == -1);
            auVar50[0xf] = -(pcVar1[0xf] == -1);
            if ((((((((((((((((SUB161(auVar50 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar50 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar50 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar50 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar50 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar50 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar50 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar50 >> 0x3f,0) & 1) != 0) || (SUB161(auVar50 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar50 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar50 >> 0x57,0) & 1) != 0) || (SUB161(auVar50 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar50 >> 0x67,0) & 1) != 0) || (SUB161(auVar50 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar50 >> 0x77,0) & 1) != 0) || auVar50[0xf] < '\0') goto LAB_140a4884a;
            uVar29 = uVar29 + lVar18 + 0x10;
            lVar18 = lVar18 + 0x10;
          }
          while( true ) {
            uVar12 = 0;
            for (uVar13 = uVar25; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
              uVar12 = uVar12 + 1;
            }
            lVar35 = *param_13 + (uVar12 + uVar29 & param_13[1]) * -0x10;
            if (param_2 == *(byte *****)(lVar35 + -0x10)) break;
            uVar37 = (ushort)(uVar25 - 1) & (ushort)uVar25;
            uVar25 = CONCAT22((short)(uVar25 - 1 >> 0x10),uVar37);
            if (uVar37 == 0) goto LAB_140a4882f;
          }
          param_13 = (longlong *)(lVar35 + -8);
LAB_140a48976:
          uStack_1a4 = (undefined4)*param_13;
        }
        else {
          param_13 = (longlong *)*param_13;
          if (param_13[3] == 0) {
LAB_140a4884a:
            param_13 = param_13 + 6;
            goto LAB_140a48976;
          }
          uVar29 = pdb_1400af0a0(param_13 + 4,&ppppbStack_228);
          bVar44 = (byte)(uVar29 >> 0x39);
          auVar45 = ZEXT216(CONCAT11(bVar44,bVar44));
          auVar45 = pshuflw(auVar45,auVar45,0);
          lVar18 = 0;
          while( true ) {
            uVar29 = uVar29 & param_13[1];
            pcVar1 = (char *)(*param_13 + uVar29);
            auVar54[0] = -(*pcVar1 == auVar45[0]);
            auVar54[1] = -(pcVar1[1] == auVar45[1]);
            auVar54[2] = -(pcVar1[2] == auVar45[2]);
            auVar54[3] = -(pcVar1[3] == auVar45[3]);
            auVar54[4] = -(pcVar1[4] == auVar45[4]);
            auVar54[5] = -(pcVar1[5] == auVar45[5]);
            auVar54[6] = -(pcVar1[6] == auVar45[6]);
            auVar54[7] = -(pcVar1[7] == auVar45[7]);
            auVar54[8] = -(pcVar1[8] == auVar45[0]);
            auVar54[9] = -(pcVar1[9] == auVar45[1]);
            auVar54[10] = -(pcVar1[10] == auVar45[2]);
            auVar54[0xb] = -(pcVar1[0xb] == auVar45[3]);
            auVar54[0xc] = -(pcVar1[0xc] == auVar45[4]);
            auVar54[0xd] = -(pcVar1[0xd] == auVar45[5]);
            auVar54[0xe] = -(pcVar1[0xe] == auVar45[6]);
            auVar54[0xf] = -(pcVar1[0xf] == auVar45[7]);
            uVar37 = (ushort)(SUB161(auVar54 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar54 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar54 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar54 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar54 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar54 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar54 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar54 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar54 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar54 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar54 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar54 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar54 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar54[0xf] >> 7) << 0xf;
            uVar25 = (uint)uVar37;
            if (uVar37 != 0) break;
LAB_140a48775:
            auVar49[0] = -(*pcVar1 == -1);
            auVar49[1] = -(pcVar1[1] == -1);
            auVar49[2] = -(pcVar1[2] == -1);
            auVar49[3] = -(pcVar1[3] == -1);
            auVar49[4] = -(pcVar1[4] == -1);
            auVar49[5] = -(pcVar1[5] == -1);
            auVar49[6] = -(pcVar1[6] == -1);
            auVar49[7] = -(pcVar1[7] == -1);
            auVar49[8] = -(pcVar1[8] == -1);
            auVar49[9] = -(pcVar1[9] == -1);
            auVar49[10] = -(pcVar1[10] == -1);
            auVar49[0xb] = -(pcVar1[0xb] == -1);
            auVar49[0xc] = -(pcVar1[0xc] == -1);
            auVar49[0xd] = -(pcVar1[0xd] == -1);
            auVar49[0xe] = -(pcVar1[0xe] == -1);
            auVar49[0xf] = -(pcVar1[0xf] == -1);
            if ((((((((((((((((SUB161(auVar49 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar49 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar49 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar49 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar49 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar49 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar49 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar49 >> 0x3f,0) & 1) != 0) || (SUB161(auVar49 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar49 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar49 >> 0x57,0) & 1) != 0) || (SUB161(auVar49 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar49 >> 0x67,0) & 1) != 0) || (SUB161(auVar49 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar49 >> 0x77,0) & 1) != 0) || auVar49[0xf] < '\0') goto LAB_140a4884a;
            uVar29 = uVar29 + lVar18 + 0x10;
            lVar18 = lVar18 + 0x10;
          }
          while( true ) {
            uVar12 = 0;
            for (uVar13 = uVar25; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
              uVar12 = uVar12 + 1;
            }
            lVar35 = *param_13 + (uVar12 + uVar29 & param_13[1]) * -0x10;
            if (param_2 == *(byte *****)(lVar35 + -0x10)) break;
            uVar37 = (ushort)(uVar25 - 1) & (ushort)uVar25;
            uVar25 = CONCAT22((short)(uVar25 - 1 >> 0x10),uVar37);
            if (uVar37 == 0) goto LAB_140a48775;
          }
          uStack_1a4 = *(undefined4 *)(lVar35 + -8);
        }
        uStack_1a0 = *(undefined4 *)(ppbStack_70 + 0x14);
        uStack_1e8 = CONCAT44(uStack_dc,uStack_e0);
        ppppbStack_220 = ppppbStack_118;
        uStack_218 = (uint)pppbStack_110;
        uStack_214 = (undefined4)((ulonglong)pppbStack_110 >> 0x20);
        uStack_210._0_4_ = SUB84(ppppbStack_108,0);
        uStack_210._4_4_ = (undefined4)((ulonglong)ppppbStack_108 >> 0x20);
        uStack_208 = SUB84(puStack_100,0);
        uStack_204 = (undefined4)((ulonglong)puStack_100 >> 0x20);
        uStack_200 = SUB84(pbStack_f8,0);
        uStack_1fc = (undefined4)((ulonglong)pbStack_f8 >> 0x20);
        puStack_1f8 = puStack_f0;
        puStack_1f0 = puStack_e8;
        uStack_1e0 = CONCAT44(uStack_d4,uStack_d8);
        puStack_1d8 = (undefined *)CONCAT44(uStack_cc,uStack_d0);
        ppppbStack_1d0 = (byte ****)CONCAT44(uStack_c4,uStack_c8);
        ppppbStack_1c8 = ppppbStack_c0;
        uStack_1c0 = ppppbStack_b8;
        lStack_1b8 = uStack_b0;
        ppppbStack_228 = (byte ****)0x8000000000000001;
        uStack_65 = 1;
        ppppbStack_1b0 = param_2;
        uStack_1a8 = uVar5;
        pdb_140a1aa80(&uStack_2d8,&ppppbStack_228);
        *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
        uVar42 = *param_9;
        ppppbStack_118 = (byte ****)0x0;
        pppbStack_110 = (byte ***)0x8;
        ppppbStack_108 = (byte ****)0x0;
        uStack_210 = pppbStack_2d0 + lStack_2c8 * 3;
        ppppbStack_228 = (byte ****)pppbStack_2d0;
        ppppbStack_220 = (byte ****)pppbStack_2d0;
        uStack_218 = (uint)uStack_2d8;
        uStack_214 = (undefined4)((ulonglong)uStack_2d8 >> 0x20);
        pppbVar31 = pppbStack_2d0;
        ppppbStack_220 = (byte ****)pdb_140c69b60(&ppppbStack_228);
        uStack_218 = (uint)pppbVar31;
        uStack_214 = (undefined4)((ulonglong)pppbVar31 >> 0x20);
        ppppbStack_228 = (byte ****)0x7;
        uStack_65 = 0;
        pdb_140ae5180(uVar42,&ppppbStack_228,&UNK_14303cae0);
        ppbVar40 = ppbStack_70;
        if ((char)uStack_120 == '\0') goto LAB_140a48b45;
        if (ppppbStack_78 != (byte ****)0x0) {
          pub_1406abac0((byte *)pppbStack_88,(longlong)ppppbStack_78 << 3,4);
        }
        ppbVar40 = ppbStack_70;
        if (puStack_a8 == (undefined *)0x0) goto LAB_140a48b45;
        goto LAB_140a48b29;
      }
    }
    else {
      uStack_210 = (byte ***)CONCAT44(uStack_210._4_4_,(undefined4)uStack_210);
      if (plVar24[3] != 0) {
        uStack_61 = 1;
        uVar29 = pdb_1400af0a0(plVar24 + 4,&ppppbStack_228);
        lVar18 = *plVar24;
        bVar44 = (byte)(uVar29 >> 0x39);
        auVar45 = ZEXT216(CONCAT11(bVar44,bVar44));
        auVar45 = pshuflw(auVar45,auVar45,0);
        lVar35 = 0;
        while( true ) {
          uVar29 = uVar29 & plVar24[1];
          auVar53 = *(undefined1 (*) [16])(lVar18 + uVar29);
          auVar52[0] = -(auVar53[0] == auVar45[0]);
          auVar52[1] = -(auVar53[1] == auVar45[1]);
          auVar52[2] = -(auVar53[2] == auVar45[2]);
          auVar52[3] = -(auVar53[3] == auVar45[3]);
          auVar52[4] = -(auVar53[4] == auVar45[4]);
          auVar52[5] = -(auVar53[5] == auVar45[5]);
          auVar52[6] = -(auVar53[6] == auVar45[6]);
          auVar52[7] = -(auVar53[7] == auVar45[7]);
          auVar52[8] = -(auVar53[8] == auVar45[0]);
          auVar52[9] = -(auVar53[9] == auVar45[1]);
          auVar52[10] = -(auVar53[10] == auVar45[2]);
          auVar52[0xb] = -(auVar53[0xb] == auVar45[3]);
          auVar52[0xc] = -(auVar53[0xc] == auVar45[4]);
          auVar52[0xd] = -(auVar53[0xd] == auVar45[5]);
          auVar52[0xe] = -(auVar53[0xe] == auVar45[6]);
          auVar52[0xf] = -(auVar53[0xf] == auVar45[7]);
          uVar37 = (ushort)(SUB161(auVar52 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar52 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar52 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar52 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar52 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar52 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar52 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar52 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar52 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar52 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar52 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar52 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar52 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar52 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar52 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar52[0xf] >> 7) << 0xf;
          uVar25 = (uint)uVar37;
          if (uVar37 != 0) break;
LAB_140a47b41:
          auVar47[0] = -(auVar53[0] == -1);
          auVar47[1] = -(auVar53[1] == -1);
          auVar47[2] = -(auVar53[2] == -1);
          auVar47[3] = -(auVar53[3] == -1);
          auVar47[4] = -(auVar53[4] == -1);
          auVar47[5] = -(auVar53[5] == -1);
          auVar47[6] = -(auVar53[6] == -1);
          auVar47[7] = -(auVar53[7] == -1);
          auVar47[8] = -(auVar53[8] == -1);
          auVar47[9] = -(auVar53[9] == -1);
          auVar47[10] = -(auVar53[10] == -1);
          auVar47[0xb] = -(auVar53[0xb] == -1);
          auVar47[0xc] = -(auVar53[0xc] == -1);
          auVar47[0xd] = -(auVar53[0xd] == -1);
          auVar47[0xe] = -(auVar53[0xe] == -1);
          auVar47[0xf] = -(auVar53[0xf] == -1);
          ppbVar40 = ppbStack_70;
          uStack_210 = (byte ***)CONCAT44(uStack_210._4_4_,(undefined4)uStack_210);
          if ((((((((((((((((SUB161(auVar47 >> 7,0) & 1) != 0 || (SUB161(auVar47 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar47 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar47 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar47 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar47 >> 0x2f,0) & 1) != 0) || (SUB161(auVar47 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar47 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar47 >> 0x47,0) & 1) != 0) || (SUB161(auVar47 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar47 >> 0x57,0) & 1) != 0) || (SUB161(auVar47 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar47 >> 0x67,0) & 1) != 0) || (SUB161(auVar47 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar47 >> 0x77,0) & 1) != 0) || auVar47[0xf] < '\0') goto LAB_140a48b45;
          uVar29 = uVar29 + lVar35 + 0x10;
          lVar35 = lVar35 + 0x10;
        }
        while( true ) {
          uVar12 = 0;
          for (uVar13 = uVar25; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
            uVar12 = uVar12 + 1;
          }
          lVar38 = (uVar12 + uVar29 & plVar24[1]) * -0x78;
          if (ppppbVar33 == *(byte *****)(lVar18 + -0x78 + lVar38)) break;
          uVar37 = (ushort)(uVar25 - 1) & (ushort)uVar25;
          uVar25 = CONCAT22((short)(uVar25 - 1 >> 0x10),uVar37);
          ppppbStack_a0 = ppppbVar33;
          if (uVar37 == 0) goto LAB_140a47b41;
        }
        lVar18 = lVar18 + lVar38;
        ppppbVar9 = *(byte *****)(lVar18 + -0x60);
        uVar29 = (longlong)ppppbVar9 * 8;
        if (0x7ffffffffffffffc < uVar29 || (ulonglong)ppppbVar9 >> 0x3d != 0) {
          uVar42 = 0;
          ppppbStack_a0 = ppppbVar33;
LAB_140a47c55:
          uStack_61 = 1;
          pdb_142dc7e2a(uVar42,uVar29);
          goto LAB_140a4920c;
        }
        if (uVar29 == 0) {
          pppbStack_88 = (byte ***)0x4;
          ppppbStack_78 = (byte ****)0x0;
          uVar19 = *(ulonglong *)(lVar18 + -0x68);
          ppppbStack_a0 = ppppbVar33;
          ppppbVar33 = ppppbStack_78;
        }
        else {
          ppppbStack_a0 = ppppbVar33;
          uStack_98 = *(ulonglong *)(lVar18 + -0x68);
          pdb_14007ee60();
          uVar42 = 4;
          pppbStack_88 = (byte ***)pub_1406abab0(uVar29,4);
          uVar19 = uStack_98;
          ppppbVar33 = ppppbVar9;
          if (pppbStack_88 == (byte ***)0x0) goto LAB_140a47c55;
        }
        ppppbStack_78 = ppppbVar33;
        if (ppppbVar9 != (byte ****)0x0) {
          pub_142e32760(pppbStack_88,uVar19);
        }
        puVar20 = *(undefined **)(lVar18 + -0x48);
        uVar29 = (longlong)puVar20 * 4;
        uStack_98 = uVar29;
        if (uVar29 < 0x7ffffffffffffffd && (ulonglong)puVar20 >> 0x3e == 0) {
          puStack_a8 = puVar20;
          if (uVar29 == 0) {
            pbVar23 = (byte *)0x4;
            goto LAB_140a48058;
          }
          puVar10 = *(undefined4 **)(lVar18 + -0x50);
          pdb_14007ee60();
          uVar42 = 4;
          pbVar23 = pub_1406abab0(uVar29,4);
          if (pbVar23 != (byte *)0x0) {
            if (puStack_a8 == (undefined *)0x0) goto LAB_140a48058;
            puVar20 = puStack_a8 + -1;
            if (puStack_a8 < puStack_a8 + -1) {
              puVar20 = puStack_a8;
            }
            if (puVar20 < (undefined *)0x8) {
              lVar35 = 0;
              puVar20 = puStack_a8;
              puVar30 = puVar10;
            }
            else {
              puVar20 = puVar20 + 1;
              uVar29 = 8;
              if (((ulonglong)puVar20 & 7) != 0) {
                uVar29 = (ulonglong)((uint)puVar20 & 7);
              }
              lVar35 = (longlong)puVar20 - uVar29;
              puVar20 = puStack_a8 + -lVar35;
              puVar30 = puVar10 + lVar35;
              lVar38 = 0;
              do {
                uVar42 = *(undefined8 *)((longlong)(puVar10 + lVar38) + 8);
                uVar15 = *(undefined8 *)(puVar10 + lVar38 + 4);
                uVar16 = *(undefined8 *)((longlong)(puVar10 + lVar38 + 4) + 8);
                *(undefined8 *)(pbVar23 + lVar38 * 4) = *(undefined8 *)(puVar10 + lVar38);
                *(undefined8 *)(pbVar23 + lVar38 * 4 + 8) = uVar42;
                *(undefined8 *)(pbVar23 + lVar38 * 4 + 0x10) = uVar15;
                *(undefined8 *)(pbVar23 + lVar38 * 4 + 0x10 + 8) = uVar16;
                lVar38 = lVar38 + 8;
              } while (lVar35 != lVar38);
            }
            pbVar27 = pbVar23 + lVar35 * 4;
            do {
              if (puVar30 == puVar10 + (longlong)puStack_a8) break;
              uVar5 = *puVar30;
              puVar30 = puVar30 + 1;
              *(undefined4 *)pbVar27 = uVar5;
              pbVar27 = pbVar27 + 4;
              puVar20 = puVar20 + -1;
            } while (puVar20 != (undefined *)0x0);
LAB_140a48058:
            ppppbVar33 = ppppbStack_78;
            fVar2 = *(float *)(lVar18 + -0x40);
            uStack_c4 = *(undefined4 *)(lVar18 + -0x1c);
            uVar25 = *(uint *)(lVar18 + -0x38);
            iVar28 = uVar25 - 2;
            if (uVar25 < 2) {
              iVar28 = 2;
            }
            uStack_e0 = 2;
            if (iVar28 != 0) {
              if (iVar28 == 1) {
                uStack_e0 = 3;
              }
              else {
                uStack_218 = (uint)*(undefined8 *)(lVar18 + -0x24);
                uStack_214 = (undefined4)((ulonglong)*(undefined8 *)(lVar18 + -0x24) >> 0x20);
                ppppbStack_228 = *(byte *****)(lVar18 + -0x34);
                ppppbStack_220 = *(byte *****)(lVar18 + -0x2c);
                uStack_e0 = uVar25;
              }
            }
            pppbStack_110 = pppbStack_88;
            puStack_e8 = (undefined *)CONCAT44(puStack_e8._4_4_,fVar2);
            uStack_dc = SUB84(ppppbStack_228,0);
            uStack_d8 = (undefined4)((ulonglong)ppppbStack_228 >> 0x20);
            uStack_d4 = SUB84(ppppbStack_220,0);
            uStack_d0 = (undefined4)((ulonglong)ppppbStack_220 >> 0x20);
            uStack_cc = uStack_218;
            uStack_c8 = uStack_214;
            lVar35 = *(longlong *)(lVar18 + -8);
            ppppbStack_c0 = *(byte *****)(lVar18 + -0x18);
            ppppbStack_b8 = *(byte *****)(lVar18 + -0x10);
            bVar43 = *(ulonglong *)(lVar18 + -0x60) < 2;
            bVar14 = fVar2 < _DAT_142e3787c || fVar2 <= 0.0;
            ppppbStack_78 =
                 (byte ****)
                 CONCAT44(ppppbStack_78._4_4_,CONCAT31((int3)(-(uint)bVar14 >> 8),bVar14 || bVar43))
            ;
            ppppbStack_118 = ppppbVar33;
            ppppbStack_108 = ppppbVar9;
            puStack_100 = puStack_a8;
            pbStack_f8 = pbVar23;
            puStack_f0 = puStack_a8;
            if ((fVar2 < _DAT_142e3787c || fVar2 <= 0.0) || bVar43) {
              *(undefined4 *)plStack_90[2] = *(undefined4 *)((longlong)plStack_90 + 0x1c);
              uStack_b0 = lVar35;
              pdb_140b0e830(&ppppbStack_228,*plStack_90,ppppbStack_a0);
              if (!SBORROW8(0,(longlong)ppppbStack_228)) {
                if (ppppbStack_228 != (byte ****)0x0) {
                  pub_1406abac0((byte *)ppppbStack_220,(longlong)ppppbStack_228 << 3,4);
                }
                if (CONCAT44(uStack_210._4_4_,(undefined4)uStack_210) != 0) {
                  pub_1406abac0((byte *)CONCAT44(uStack_204,uStack_208),
                                CONCAT44(uStack_210._4_4_,(undefined4)uStack_210) << 2,4);
                }
              }
              if (ppppbVar33 != (byte ****)0x0) {
                pub_1406abac0((byte *)pppbStack_88,(longlong)ppppbVar33 << 3,4);
              }
              ppbVar40 = ppbStack_70;
              if (puStack_a8 != (undefined *)0x0) {
LAB_140a48b29:
                pub_1406abac0(pbVar23,uStack_98,4);
                ppbVar40 = ppbStack_70;
              }
            }
            else {
              uStack_c4 = *(undefined4 *)((longlong)ppbStack_70 + 0x94);
              uVar4 = *(undefined *)((longlong)ppbStack_70 + 0xa5);
              uStack_b0._2_6_ = (undefined6)((ulonglong)lVar35 >> 0x10);
              uStack_b0._0_1_ = (undefined1)lVar35;
              uStack_b0._0_2_ = CONCAT11(uVar4,(undefined1)uStack_b0);
              lVar18 = uStack_b0;
              *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
              uStack_b0._2_4_ = (undefined4)((ulonglong)lVar35 >> 0x10);
              uStack_b0._6_2_ = (undefined2)((ulonglong)lVar35 >> 0x30);
              uStack_1c0 = (byte ****)
                           CONCAT26(uStack_b0._6_2_,
                                    CONCAT42(uStack_b0._2_4_,CONCAT11(uVar4,(undefined1)uStack_b0)))
              ;
              puStack_1d8 = (undefined *)CONCAT44(uStack_c4,uStack_214);
              uStack_1e8 = CONCAT44(uStack_d4,uStack_d8);
              uStack_1e0 = CONCAT44(uStack_218,uStack_d0);
              puStack_1f0 = (undefined *)CONCAT44(uStack_dc,uStack_e0);
              puStack_1f8 = puStack_e8;
              uStack_208 = SUB84(pbVar23,0);
              uStack_204 = (undefined4)((ulonglong)pbVar23 >> 0x20);
              uStack_200 = SUB84(puStack_a8,0);
              uStack_1fc = (undefined4)((ulonglong)puStack_a8 >> 0x20);
              uStack_218 = (uint)ppppbVar9;
              uStack_214 = (undefined4)((ulonglong)ppppbVar9 >> 0x20);
              ppppbStack_220 = (byte ****)pppbStack_88;
              ppppbStack_228 = ppppbVar33;
              uStack_210._0_4_ = uStack_200;
              uStack_210._4_4_ = uStack_1fc;
              ppppbStack_1d0 = ppppbStack_c0;
              ppppbStack_1c8 = ppppbStack_b8;
              uStack_b0 = lVar18;
              pdb_140adf010(*param_9,ppppbStack_a0,&ppppbStack_228,
                            *(undefined4 *)(ppbStack_70 + 0x13),*(undefined4 *)(ppbStack_70 + 0x14))
              ;
              pdb_140a49970(&uStack_380,ppbStack_70);
              *(undefined4 *)param_11[2] = *(undefined4 *)((longlong)param_11 + 0x1c);
              lVar18 = *param_11;
              lVar35 = *(longlong *)(lVar18 + 0x30);
              uVar42 = *(undefined8 *)(lVar18 + 0x40);
              if (lVar35 == *(longlong *)(lVar18 + 0x20)) {
                pdb_142d7e8a0(lVar18 + 0x20);
              }
              *(undefined8 *)(*(longlong *)(lVar18 + 0x28) + lVar35 * 8) = uVar42;
              *(longlong *)(lVar18 + 0x30) = lVar35 + 1;
              *(longlong *)(lVar18 + 0x40) = *(longlong *)(lVar18 + 0x40) + 1;
              ppbVar40 = ppbStack_70;
            }
            goto LAB_140a48b45;
          }
        }
        else {
          uVar42 = 0;
        }
        pdb_142dc7e2a(uVar42,uStack_98);
LAB_140a4920c:
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
    }
  }
LAB_140a48b45:
  do {
    *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
    if (!SBORROW8(0,(longlong)*ppbVar40)) {
      pdb_14099a6f0(ppbStack_70);
    }
    *ppbStack_70 = (byte *)0x8000000000000000;
LAB_140a48b76:
    pppbStack_88 = pppbStack_250;
    ppppbVar33 = ppppbStack_248 + lStack_240;
    ppbStack_70 = (byte **)CONCAT44(ppbStack_70._4_4_,*(undefined4 *)((longlong)param_9 + 0x1c));
    param_4 = (undefined8 *)*param_9;
    ppppbStack_a0 = (byte ****)param_9[2];
    ppppbStack_78 = ppppbStack_248;
    param_2 = ppppbStack_248;
LAB_140a48bc3:
    if (param_2 != ppppbVar33) {
      pppbVar31 = *param_2;
      ppppbStack_2c0 = (byte ****)0x0;
      pppbStack_2b8 = (byte ***)0x8;
      ppppbStack_2b0 = (byte ****)0x0;
      plVar24 = (longlong *)*plStack_90;
      ppppbStack_118 = (byte ****)pppbVar31;
      if (plVar24[3] != 0) {
        uStack_62 = 1;
        uVar29 = pdb_1400af0a0(plVar24 + 4,&ppppbStack_118);
        param_2 = param_2 + 1;
        lVar18 = *plVar24;
        bVar44 = (byte)(uVar29 >> 0x39);
        auVar45 = ZEXT216(CONCAT11(bVar44,bVar44));
        auVar45 = pshuflw(auVar45,auVar45,0);
        lVar35 = 0;
        while( true ) {
          uVar29 = uVar29 & plVar24[1];
          auVar53 = *(undefined1 (*) [16])(lVar18 + uVar29);
          auVar51[0] = -(auVar53[0] == auVar45[0]);
          auVar51[1] = -(auVar53[1] == auVar45[1]);
          auVar51[2] = -(auVar53[2] == auVar45[2]);
          auVar51[3] = -(auVar53[3] == auVar45[3]);
          auVar51[4] = -(auVar53[4] == auVar45[4]);
          auVar51[5] = -(auVar53[5] == auVar45[5]);
          auVar51[6] = -(auVar53[6] == auVar45[6]);
          auVar51[7] = -(auVar53[7] == auVar45[7]);
          auVar51[8] = -(auVar53[8] == auVar45[0]);
          auVar51[9] = -(auVar53[9] == auVar45[1]);
          auVar51[10] = -(auVar53[10] == auVar45[2]);
          auVar51[0xb] = -(auVar53[0xb] == auVar45[3]);
          auVar51[0xc] = -(auVar53[0xc] == auVar45[4]);
          auVar51[0xd] = -(auVar53[0xd] == auVar45[5]);
          auVar51[0xe] = -(auVar53[0xe] == auVar45[6]);
          auVar51[0xf] = -(auVar53[0xf] == auVar45[7]);
          uVar37 = (ushort)(SUB161(auVar51 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar51 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar51 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar51 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar51 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar51 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar51 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar51 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar51 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar51 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar51 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar51 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar51 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar51[0xf] >> 7) << 0xf;
          uVar25 = (uint)uVar37;
          while (uVar37 != 0) {
            uVar12 = 0;
            for (uVar13 = uVar25; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
              uVar12 = uVar12 + 1;
            }
            lVar38 = (uVar12 + uVar29 & plVar24[1]) * -0x78;
            if (pppbVar31 == *(byte ****)(lVar18 + -0x78 + lVar38)) {
              lVar18 = lVar18 + lVar38;
              uVar25 = *(uint *)(lVar18 + -0x38);
              iVar28 = uVar25 - 2;
              if (uVar25 < 2) {
                iVar28 = 2;
              }
              uStack_218 = 2;
              if (iVar28 != 0) {
                if (iVar28 == 1) {
                  uStack_218 = 3;
                }
                else {
                  ppppbStack_108 = *(byte *****)(lVar18 + -0x24);
                  ppppbStack_118 = *(byte *****)(lVar18 + -0x34);
                  pppbStack_110 = *(byte ****)(lVar18 + -0x2c);
                  uStack_218 = uVar25;
                }
              }
              uStack_204 = SUB84(ppppbStack_108,0);
              uStack_200 = (undefined4)((ulonglong)ppppbStack_108 >> 0x20);
              uStack_214 = SUB84(ppppbStack_118,0);
              uStack_210._0_4_ = (undefined4)((ulonglong)ppppbStack_118 >> 0x20);
              uStack_210._4_4_ = SUB84(pppbStack_110,0);
              uStack_208 = (undefined4)((ulonglong)pppbStack_110 >> 0x20);
              uStack_1fc = 3;
              ppppbStack_228 = (byte ****)0x8000000000000003;
              uStack_62 = 1;
              ppppbStack_220 = (byte ****)pppbVar31;
              pdb_140a1aa80(&ppppbStack_2c0,&ppppbStack_228);
              *(undefined4 *)ppppbStack_a0 = ppbStack_70._0_4_;
              ppppbStack_118 = (byte ****)0x0;
              pppbStack_110 = (byte ***)0x8;
              ppppbStack_108 = (byte ****)0x0;
              uStack_210 = pppbStack_2b8 + (longlong)ppppbStack_2b0 * 3;
              ppppbStack_228 = (byte ****)pppbStack_2b8;
              ppppbStack_220 = (byte ****)pppbStack_2b8;
              uStack_218 = (uint)ppppbStack_2c0;
              uStack_214 = (undefined4)((ulonglong)ppppbStack_2c0 >> 0x20);
              pppbVar32 = pppbStack_2b8;
              ppppbStack_220 = (byte ****)pdb_140c69b60(&ppppbStack_228);
              uStack_218 = (uint)pppbVar32;
              uStack_214 = (undefined4)((ulonglong)pppbVar32 >> 0x20);
              ppppbStack_228 = (byte ****)0x7;
              uStack_62 = 0;
              pdb_140ae5180(param_4,&ppppbStack_228,&UNK_14303cbe8);
              *(undefined4 *)plStack_90[2] = *(undefined4 *)((longlong)plStack_90 + 0x1c);
              ppbVar40 = (byte **)*plStack_90;
              uStack_62 = 0;
              pppbStack_358 = pppbVar31;
              param_9 = (undefined8 *)pdb_1417bd890(ppbVar40,&pppbStack_358);
              if (param_9 == (undefined8 *)0x0) {
                if (1 < *_DAT_143ca8e90) {
                  ppppbStack_118 = &pppbStack_358;
                  pppbStack_110 = (byte ***)pdb_140c04ef0;
                  ppppbStack_228 = (byte ****)0x0;
                  ppppbStack_220 = (byte ****)&UNK_143021dde;
                  uStack_218 = 0x2b;
                  uStack_214 = 0;
                  uStack_210._0_4_ = 0;
                  uStack_210._4_4_ = 0;
                  uStack_208 = 0x43021da7;
                  uStack_204 = 1;
                  uStack_200 = 0x36;
                  uStack_1fc = 0;
                  puStack_1f8 = (undefined *)0x2;
                  puStack_1f0 = &UNK_143021dde;
                  uStack_1e8 = 0x2b;
                  uStack_1e0 = 0xfd00000001;
                  puStack_1d8 = &UNK_143021d78;
                  ppppbStack_1d0 = (byte ****)&ppppbStack_118;
                  uStack_62 = 0;
                  pdb_140f332f0(&uStack_79,&ppppbStack_228);
                }
              }
              else {
                ppbVar40 = ppbVar40 + 0xc;
                uStack_62 = 0;
                pdb_1403b05d0(ppbVar40,pppbVar31);
                *(undefined4 *)(param_9 + 7) = 3;
              }
              goto LAB_140a48bc3;
            }
            uVar37 = (ushort)(uVar25 - 1) & (ushort)uVar25;
            uVar25 = CONCAT22((short)(uVar25 - 1 >> 0x10),uVar37);
          }
          auVar46[0] = -(auVar53[0] == -1);
          auVar46[1] = -(auVar53[1] == -1);
          auVar46[2] = -(auVar53[2] == -1);
          auVar46[3] = -(auVar53[3] == -1);
          auVar46[4] = -(auVar53[4] == -1);
          auVar46[5] = -(auVar53[5] == -1);
          auVar46[6] = -(auVar53[6] == -1);
          auVar46[7] = -(auVar53[7] == -1);
          auVar46[8] = -(auVar53[8] == -1);
          auVar46[9] = -(auVar53[9] == -1);
          auVar46[10] = -(auVar53[10] == -1);
          auVar46[0xb] = -(auVar53[0xb] == -1);
          auVar46[0xc] = -(auVar53[0xc] == -1);
          auVar46[0xd] = -(auVar53[0xd] == -1);
          auVar46[0xe] = -(auVar53[0xe] == -1);
          auVar46[0xf] = -(auVar53[0xf] == -1);
          if ((((((((((((((((SUB161(auVar46 >> 7,0) & 1) != 0 || (SUB161(auVar46 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar46 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar46 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar46 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar46 >> 0x2f,0) & 1) != 0) || (SUB161(auVar46 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar46 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar46 >> 0x47,0) & 1) != 0) || (SUB161(auVar46 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar46 >> 0x57,0) & 1) != 0) || (SUB161(auVar46 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar46 >> 0x67,0) & 1) != 0) || (SUB161(auVar46 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar46 >> 0x77,0) & 1) != 0) || auVar46[0xf] < '\0') break;
          uVar29 = uVar29 + lVar35 + 0x10;
          lVar35 = lVar35 + 0x10;
        }
      }
      uStack_62 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14303cbd0);
    }
    if (pppbStack_88 != (byte ***)0x0) {
      pub_1406abac0((byte *)ppppbStack_78,(longlong)pppbStack_88 << 3,8);
    }
    if (lStack_238 == 0) {
      return;
    }
    plVar24 = (longlong *)pdb_140e97000();
    puVar39 = param_9;
    if ((char)plVar24[0xd] != '\x01') {
      while( true ) {
        plVar24 = (longlong *)pdb_142d8ec20(plVar24,0);
        if (plVar24 != (longlong *)0x0) break;
LAB_140a49121:
        plVar24 = (longlong *)pdb_142dc7890(&UNK_143326860);
      }
    }
    if (*plVar24 == 0) {
      *plVar24 = -1;
      plStack_90 = plVar24;
      pdb_140e95370(plVar24 + 1,uStack_230);
      *plStack_90 = *plStack_90 + 1;
      return;
    }
LAB_140a48fec:
    param_9 = puVar39;
    uVar25 = 0x43326a50;
    lVar18 = pdb_142dc8090();
LAB_140a48ff8:
    ppppbStack_108 = *(byte *****)(lVar18 + 0x4c);
    ppppbStack_118 = *(byte *****)(lVar18 + 0x3c);
    pppbStack_110 = *(byte ****)(lVar18 + 0x44);
    uStack_218 = uVar25;
LAB_140a49010:
    uStack_214 = SUB84(ppppbStack_118,0);
    uStack_210._0_4_ = (undefined4)((ulonglong)ppppbStack_118 >> 0x20);
    uStack_210._4_4_ = SUB84(pppbStack_110,0);
    uStack_208 = (undefined4)((ulonglong)pppbStack_110 >> 0x20);
    uStack_204 = SUB84(ppppbStack_108,0);
    uStack_200 = (undefined4)((ulonglong)ppppbStack_108 >> 0x20);
    uStack_1fc = 2;
    ppppbStack_228 = (byte ****)0x8000000000000003;
    uStack_67 = 1;
    ppppbVar33 = (byte ****)&ppppbStack_228;
    ppppbStack_220 = param_2;
    pdb_140a1aa80(&ppppbStack_2c0);
    *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
    uVar42 = *param_9;
    uStack_218 = (uint)ppppbStack_2b0;
    uStack_214 = (undefined4)((ulonglong)ppppbStack_2b0 >> 0x20);
    ppppbStack_228 = ppppbStack_2c0;
    ppppbStack_220 = (byte ****)pppbStack_2b8;
    uStack_67 = 0;
    ppppbStack_220 = (byte ****)pdb_140a1ac80(&ppppbStack_228);
    uStack_218 = (uint)ppppbVar33;
    uStack_214 = (undefined4)((ulonglong)ppppbVar33 >> 0x20);
    ppppbStack_228 = (byte ****)0x7;
    uStack_67 = 0;
    pdb_140ae5180(uVar42,&ppppbStack_228,&UNK_14303cb50);
    *(undefined4 *)plStack_90[2] = *(undefined4 *)((longlong)plStack_90 + 0x1c);
    uStack_67 = 0;
    pdb_140b0e450(*plStack_90,param_2);
    uStack_210 = (byte ***)CONCAT44(uStack_210._4_4_,(undefined4)uStack_210);
  } while( true );
code_r0x000140a47bf5:
  uVar37 = (ushort)(uVar25 - 1) & (ushort)uVar25;
  uVar25 = CONCAT22((short)(uVar25 - 1 >> 0x10),uVar37);
  if (uVar37 == 0) goto LAB_140a47c02;
  goto LAB_140a47bdc;
}

