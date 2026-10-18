// VA 0x14011f860, PDB extent 5950 bytes
// tiny_glade::tgsr_capture::start_recording
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/tgsr_capture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::tgsr_capture::start_recording
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/tgsr_capture.rs
   Extent: 5950 */

undefined8
pdb_14011f860(undefined8 param_1,uint *param_2,int *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined4 *puVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  uint *puVar8;
  undefined1 uVar9;
  byte *pbVar10;
  undefined8 uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  code *pcVar15;
  byte *pbVar16;
  int iVar17;
  byte *pbVar18;
  byte *pbVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  byte *pbVar22;
  int iVar23;
  byte **ppbVar24;
  ulonglong uVar25;
  bool bVar26;
  undefined1 auStack_3f8 [6];
  undefined1 uStack_3f2;
  undefined1 uStack_3f1;
  undefined1 uStack_3f0;
  undefined1 uStack_3ef;
  undefined1 uStack_3ee;
  undefined1 uStack_3ed;
  undefined1 uStack_3eb;
  undefined1 uStack_3ea;
  char cStack_3e9;
  code *pcStack_3e8;
  byte *pbStack_3e0;
  code *pcStack_3d8;
  uint *puStack_3d0;
  ulonglong uStack_3c8;
  uint uStack_3bc;
  byte *pbStack_3b8;
  code *pcStack_3b0;
  undefined8 uStack_3a8;
  longlong lStack_3a0;
  byte *pbStack_398;
  longlong lStack_390;
  ulonglong uStack_388;
  ulonglong uStack_380;
  ulonglong uStack_378;
  ulonglong uStack_370;
  ulonglong uStack_368;
  byte *pbStack_360;
  code *pcStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  int *piStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined4 *puStack_320;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  longlong lStack_2d0;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  code *pcStack_2b0;
  undefined1 uStack_2a8;
  undefined7 uStack_2a7;
  undefined8 uStack_2a0;
  byte *pbStack_298;
  undefined8 uStack_290;
  byte *pbStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  byte **ppbStack_270;
  code *pcStack_268;
  code *pcStack_260;
  uint uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  uint uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  uint uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  ulonglong uStack_230;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined2 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined1 *puStack_58;
  undefined8 uStack_48;
  
  puStack_58 = auStack_3f8;
  uStack_48 = 0xfffffffffffffffe;
  cStack_3e9 = *(char *)((longlong)param_2 + 0xed);
  iVar23 = *param_3;
  iVar17 = param_3[2] * param_3[2];
  uVar25 = 0;
  if (cStack_3e9 != '\0') {
    uVar25 = (ulonglong)(uint)(iVar17 * 4);
  }
  puStack_3d0 = param_2;
  uStack_340 = param_4;
  piStack_338 = param_3;
  pdb_14007ee60();
  pbVar10 = pub_1406abab0(0x80,8);
  if (pbVar10 == (byte *)0x0) {
    pdb_142dc7e2a(8,0x80);
  }
  else {
    iVar23 = iVar23 * iVar23;
    uStack_370 = (ulonglong)(uint)(iVar17 * 2);
    uStack_378 = (ulonglong)(uint)(iVar17 * 6);
    uStack_3bc = iVar23 * 8;
    uVar13 = (int)uVar25 + iVar23 * 8;
    uStack_380 = (ulonglong)uVar13;
    uVar13 = uVar13 + iVar17 * 2;
    uStack_388 = (ulonglong)uVar13;
    uStack_3c8 = (ulonglong)(iVar17 * 6 + uVar13);
    lStack_3a0 = 4;
    lStack_390 = 0;
    pbStack_398 = pbVar10;
    uStack_368 = uVar25;
    for (uVar21 = 0; uVar21 < 4; uVar21 = uVar21 + 1) {
      uStack_3f2 = 1;
      uVar11 = pdb_140e1d0f0(uStack_3c8,0x30);
      uStack_3f2 = 1;
      pdb_140e55ce0(&uStack_330,param_1,&UNK_142e46d6d,0x15,uVar11);
      lVar7 = lStack_390;
      uStack_278 = uStack_328;
      ppbStack_270 = (byte **)puStack_320;
      pcStack_268 = (code *)CONCAT44(uStack_314,uStack_318);
      if (uStack_330 != (byte *)0xb) {
        uStack_240 = uStack_2f0;
        uStack_23c = uStack_2ec;
        uStack_238 = uStack_2e8;
        uStack_234 = uStack_2e4;
        uStack_250 = uStack_300;
        uStack_24c = uStack_2fc;
        uStack_248 = uStack_2f8;
        uStack_244 = uStack_2f4;
        uStack_258 = uStack_308;
        uStack_254 = uStack_304;
        uStack_280 = (byte **)uStack_330;
        uStack_3f2 = 1;
        uVar11 = pdb_142d88ca0(&uStack_280);
        pcStack_3e8 = (code *)lStack_390;
        puStack_3d0 = (uint *)pbStack_398;
        uStack_3c8 = 0;
        pbVar10 = pbStack_398 + 8;
        while (pcStack_3e8 != (code *)uStack_3c8) {
          uStack_3c8 = uStack_3c8 + 1;
          pdb_1404b8e50(pbVar10);
          pbVar10 = pbVar10 + 0x20;
        }
        if (lStack_3a0 == 0) {
          return uVar11;
        }
        pub_1406abac0((byte *)puStack_3d0,lStack_3a0 << 5,8);
        return uVar11;
      }
      uStack_280 = (byte **)((ulonglong)uStack_280 & 0xffffffff00000000);
      if (lStack_390 == lStack_3a0) {
        pdb_142d7e6e0(&lStack_3a0);
      }
      lVar12 = lVar7 * 0x20;
      *(byte ***)(pbStack_398 + lVar12 + 0x10) = ppbStack_270;
      *(code **)(pbStack_398 + lVar12 + 0x10 + 8) = pcStack_268;
      pbVar10 = pbStack_398 + lVar12;
      *(undefined4 *)pbVar10 = (undefined4)uStack_280;
      *(undefined4 *)(pbVar10 + 4) = uStack_280._4_4_;
      *(undefined4 *)(pbVar10 + 8) = (undefined4)uStack_278;
      *(undefined4 *)(pbVar10 + 0xc) = uStack_278._4_4_;
      lStack_390 = lVar7 + 1;
    }
    pbVar10 = *(byte **)(puStack_3d0 + 0x36);
    uStack_3f2 = 1;
    pcStack_3d8 = (code *)pdb_14014b650(*(undefined8 *)(puStack_3d0 + 0x34));
    uStack_280 = (byte **)0x0;
    uStack_278 = (code *)0x1;
    ppbStack_270 = (byte **)0x0;
    pbVar16 = (byte *)(pcStack_3d8 + (longlong)pbVar10);
    ppbVar24 = (byte **)0x0;
    pcStack_3e8 = (code *)0x0;
    pbVar18 = (byte *)pcStack_3d8;
    pbVar22 = (byte *)0x0;
    pbStack_3e0 = pbVar10;
    while (pbVar10 = pbVar22, pbVar18 != pbVar16) {
      bVar2 = *pbVar18;
      uVar13 = (uint)bVar2;
      if ((char)bVar2 < '\0') {
        uVar14 = bVar2 & 0x1f;
        if (bVar2 < 0xe0) {
          pbVar19 = pbVar18 + 2;
          uVar13 = uVar14 << 6 | pbVar18[1] & 0x3f;
        }
        else {
          uVar13 = pbVar18[2] & 0x3f | (pbVar18[1] & 0x3f) << 6;
          if (bVar2 < 0xf0) {
            pbVar19 = pbVar18 + 3;
            uVar13 = uVar13 | uVar14 << 0xc;
          }
          else {
            pbVar19 = pbVar18 + 4;
            uVar13 = pbVar18[3] & 0x3f | uVar13 << 6 | (bVar2 & 7) << 0x12;
          }
        }
      }
      else {
        pbVar19 = pbVar18 + 1;
      }
      pbVar22 = pbVar19 + ((longlong)pbVar10 - (longlong)pbVar18);
      pbVar18 = pbVar19;
      if ((uVar13 - 0x20 < 0x3d) &&
         ((0x1000000000008001U >> ((ulonglong)(uVar13 - 0x20) & 0x3f) & 1) != 0)) {
        uVar25 = (longlong)pbVar10 - (longlong)pcStack_3e8;
        if ((ulonglong)((longlong)uStack_280 - (longlong)ppbVar24) < uVar25) {
          pdb_142d7f1b0(&uStack_280,ppbVar24,uVar25,1,1);
          ppbVar24 = ppbStack_270;
        }
        if ((code *)pbVar10 != pcStack_3e8) {
          pub_142e32760(uStack_278 + (longlong)ppbVar24,pcStack_3e8 + (longlong)pcStack_3d8,uVar25);
        }
        ppbStack_270 = (byte **)((longlong)ppbVar24 + uVar25);
        if (uStack_280 == ppbStack_270) {
          pdb_142d7f1b0(&uStack_280,ppbStack_270,1,1,1);
        }
        uStack_278[(longlong)ppbStack_270] = (code)0x5f;
        ppbVar24 = (byte **)((longlong)ppbStack_270 + 1);
        pcStack_3e8 = (code *)pbVar22;
        ppbStack_270 = ppbVar24;
      }
    }
    uVar25 = (longlong)pbStack_3e0 - (longlong)pcStack_3e8;
    if ((ulonglong)((longlong)uStack_280 - (longlong)ppbVar24) < uVar25) {
      pdb_142d7f1b0(&uStack_280,ppbVar24,uVar25,1,1);
      pcVar15 = pcStack_3e8;
      ppbVar24 = ppbStack_270;
      if ((code *)pbStack_3e0 != pcStack_3e8) goto LAB_14011fc89;
    }
    else {
      pcVar15 = pcStack_3e8;
      if ((code *)pbStack_3e0 != pcStack_3e8) {
LAB_14011fc89:
        pcVar15 = pcStack_3e8 + (longlong)pcStack_3d8;
        pub_142e32760(uStack_278 + (longlong)ppbVar24,pcVar15,uVar25);
      }
    }
    lStack_2d0 = (longlong)ppbVar24 + uVar25;
    uStack_2e0 = (undefined4)uStack_280;
    uStack_2dc = uStack_280._4_4_;
    uStack_2d8 = (undefined4)uStack_278;
    uStack_2d4 = uStack_278._4_4_;
    uStack_3ed = 1;
    uVar11 = pdb_140dc7520();
    uStack_3ed = 1;
    pdb_140f3e9e0(&uStack_330,uVar11,pcVar15,&UNK_142e46d50,10);
    puVar8 = puStack_3d0;
    pcStack_3e8 = uStack_328;
    if (lStack_2d0 == 0) {
      pdb_140dee3a0(&uStack_280);
      pcStack_358 = pdb_140001020;
      pbStack_360 = (byte *)&uStack_280;
      pdb_140f60760(&pbStack_3b8,&UNK_142e46d65,&pbStack_360);
      if (uStack_280 != (byte **)0x0) {
        pub_1406abac0((byte *)uStack_278,(ulonglong)uStack_280,1);
      }
      pbStack_3e0 = pbStack_3b8;
      uStack_350 = uStack_3a8;
      pcStack_3d8 = pcStack_3b0;
    }
    else {
      pdb_140dee3a0(&pbStack_3b8);
      uStack_278 = pdb_140001020;
      ppbStack_270 = (byte **)&uStack_2e0;
      pcStack_268 = pdb_140001020;
      uStack_280 = &pbStack_3b8;
      pdb_140f60760(&pbStack_360,&UNK_142e46d5a,&uStack_280);
      if (pbStack_3b8 != (byte *)0x0) {
        pub_1406abac0((byte *)pcStack_3b0,(ulonglong)pbStack_3b8,1);
      }
      pbStack_3e0 = pbStack_360;
      pcStack_3d8 = pcStack_358;
    }
    pdb_140f3e9e0(&uStack_2c0,pcStack_3e8,puStack_320,pcStack_3d8,uStack_350);
    if (pbStack_3e0 != (byte *)0x0) {
      pub_1406abac0((byte *)pcStack_3d8,(ulonglong)pbStack_3e0,1);
    }
    if (uStack_330 != (byte *)0x0) {
      pub_1406abac0((byte *)pcStack_3e8,(ulonglong)uStack_330,1);
    }
    pcVar15 = pcStack_2b0;
    uVar11 = uStack_2b8;
    cVar3 = *(char *)((longlong)puVar8 + 0xee);
    if (cVar3 == '\x01') {
      *_DAT_143ca4260 = 0x4000000000000001;
    }
    uVar13 = puVar8[0x39];
    if ((longlong)pcStack_2b0 < 0) {
      uVar20 = 0;
LAB_14011ffac:
      uStack_3eb = 1;
      pdb_142dc7e2a(uVar20,pcVar15);
      goto LAB_140120663;
    }
    pcStack_3e8 = pcStack_2b0;
    if (pcStack_2b0 == (code *)0x0) {
      pbStack_3e0 = (byte *)0x1;
    }
    else {
      pdb_14007ee60();
      uVar20 = 1;
      pbVar10 = pub_1406abab0((ulonglong)pcVar15,1);
      if (pbVar10 == (byte *)0x0) goto LAB_14011ffac;
      pbStack_3e0 = pbVar10;
      pub_142e32760(pbVar10,uVar11,pcVar15);
    }
    uVar9 = uStack_2a8;
    uStack_100 = 1;
    uStack_f8 = 1;
    uStack_f0 = 0;
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_280 = (byte **)0x0;
    uStack_278 = (code *)0x0;
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_170 = 8;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_158 = 8;
    uStack_150 = 0;
    uStack_148 = 1;
    pdb_14007ee60();
    pbVar10 = pub_1406abab0(0x200,0x80);
    if (pbVar10 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(0x80,0x200);
    }
    pub_142e32760(pbVar10,&uStack_280,0x200);
    uStack_2a0 = 1;
    uStack_290 = 1;
    ppbStack_270 = (byte **)0x8000000000000000;
    uStack_280 = (byte **)0x0;
    uStack_258 = uStack_258 & 0xffffff00;
    pbStack_298 = pbVar10;
    pbStack_288 = pbVar10;
    pdb_14007ee60();
    pcStack_3d8 = (code *)pub_1406abab0(0x10,1);
    uVar6 = _UNK_142e46dbf;
    uVar5 = _UNK_142e46dbb;
    uVar4 = _UNK_142e46db7;
    if (pcStack_3d8 != (code *)0x0) {
      *(undefined4 *)pcStack_3d8 = _DAT_142e46db3;
      *(undefined4 *)(pcStack_3d8 + 4) = uVar4;
      *(undefined4 *)(pcStack_3d8 + 8) = uVar5;
      *(undefined4 *)(pcStack_3d8 + 0xc) = uVar6;
      pbStack_3b8 = (byte *)0x10;
      uStack_3a8 = 0x10;
      pcStack_3b0 = pcStack_3d8;
      pdb_140f3cec0(&uStack_330,&uStack_280,&pbStack_3b8);
      ppbStack_270 = (byte **)pcStack_3e8;
      pcStack_268 = (code *)pbStack_3e0;
      pcStack_260 = pcStack_3e8;
      uStack_258 = CONCAT31(uStack_258._1_3_,uVar9);
      uStack_250 = 0;
      uStack_24c = uStack_3bc;
      uStack_248 = (undefined4)uStack_380;
      uStack_244 = (undefined4)uStack_388;
      uStack_240 = uStack_3bc;
      uStack_23c = (undefined4)uStack_368;
      uStack_238 = (undefined4)uStack_370;
      uStack_234 = (undefined4)uStack_378;
      uStack_230 = uStack_3c8;
      uStack_280 = (byte **)0x1;
      uStack_3f1 = 1;
      uStack_3f0 = 0;
      uStack_278 = (code *)pbVar10;
      pdb_14022df00(&pbStack_3b8,&pbStack_360,uStack_330,uStack_328,(undefined1)uStack_308,0,
                    &uStack_280);
      if (pbStack_3b8 != (byte *)0x0) {
        uStack_330 = pbStack_3b8;
        uStack_328 = pcStack_3b0;
        puStack_320 = (undefined4 *)uStack_3a8;
        if (_DAT_143ca30b0 != 2) {
          uStack_3ef = 1;
          uStack_3ee = 1;
          pdb_142d84c30(&DAT_143ca30b0,&DAT_143ca30b0);
        }
        LOCK();
        bVar26 = DAT_143ca30c0 == '\0';
        if (bVar26) {
          DAT_143ca30c0 = '\x01';
        }
        UNLOCK();
        if (!bVar26) {
          uStack_3ef = 1;
          uStack_3ee = 1;
          pdb_142dbd1a0(&DAT_143ca30c0);
        }
        uStack_3ef = 1;
        uStack_3ee = 1;
        pdb_140e9a150(&DAT_143ca30c0);
        uStack_3ea = 1;
        pdb_1401732a0(&DAT_143ca30c8);
        lVar7 = _DAT_143ca30d8;
        ppbStack_270 = (byte **)puStack_320;
        uStack_280 = (byte **)uStack_330;
        uStack_278 = uStack_328;
        if (_DAT_143ca30d8 == _DAT_143ca30c8) {
          pdb_142d895b0(&DAT_143ca30c8);
        }
        lVar12 = _DAT_143ca30d0;
        *(undefined4 **)(_DAT_143ca30d0 + 0x10 + lVar7 * 0x18) = puStack_320;
        puVar1 = (undefined4 *)(lVar12 + lVar7 * 0x18);
        *puVar1 = (undefined4)uStack_330;
        puVar1[1] = uStack_330._4_4_;
        puVar1[2] = (undefined4)uStack_328;
        puVar1[3] = uStack_328._4_4_;
        _DAT_143ca30d8 = lVar7 + 1;
        uStack_348 = uStack_2a0;
        pcStack_3d8 = (code *)pbStack_298;
        uStack_3ef = 0;
        uStack_3ee = 0;
        pdb_140e9a350();
        LOCK();
        bVar26 = DAT_143ca30c0 == '\x01';
        if (bVar26) {
          DAT_143ca30c0 = '\0';
        }
        UNLOCK();
        if (!bVar26) {
          uStack_3ef = 0;
          uStack_3ee = 0;
          pdb_142dbcef0(&DAT_143ca30c0,0);
        }
        pbStack_3e0 = (byte *)CONCAT44(pbStack_3e0._4_4_,uVar13 + (uVar13 == 0));
        pcStack_3e8 = (code *)CONCAT71(pcStack_3e8._1_7_,cVar3);
        ppbStack_270 = (byte **)lStack_390;
        uStack_280 = (byte **)lStack_3a0;
        uStack_278 = (code *)pbStack_398;
        if (*puVar8 < 3) {
          pdb_1404c5ef0(puStack_3d0);
        }
        *(undefined8 *)puStack_3d0 = uStack_348;
        *(code **)(puStack_3d0 + 2) = pcStack_3d8;
        *(undefined8 *)(puStack_3d0 + 4) = uStack_2c0;
        *(undefined8 *)(puStack_3d0 + 6) = uStack_2b8;
        *(code **)(puStack_3d0 + 8) = pcStack_2b0;
        *(ulonglong *)(puStack_3d0 + 10) = CONCAT71(uStack_2a7,uStack_2a8);
        *(byte ***)(puStack_3d0 + 0x10) = ppbStack_270;
        *(byte ***)(puStack_3d0 + 0xc) = uStack_280;
        *(code **)(puStack_3d0 + 0xe) = uStack_278;
        puStack_3d0[0x12] = 0;
        puStack_3d0[0x13] = 0;
        puStack_3d0[0x14] = 4;
        puStack_3d0[0x15] = 0;
        puStack_3d0[0x16] = 0;
        puStack_3d0[0x17] = 0;
        puStack_3d0[0x18] = 0;
        puStack_3d0[0x19] = uStack_3bc;
        puStack_3d0[0x1a] = (uint)uStack_380;
        puStack_3d0[0x1b] = (uint)uStack_388;
        puStack_3d0[0x1c] = uStack_3bc;
        puStack_3d0[0x1d] = (uint)uStack_368;
        puStack_3d0[0x1e] = (uint)uStack_370;
        puStack_3d0[0x1f] = (uint)uStack_378;
        *(ulonglong *)(puStack_3d0 + 0x20) = uStack_3c8;
        *(undefined8 *)(puStack_3d0 + 0x22) = uStack_340;
        *(undefined8 *)(puStack_3d0 + 0x24) = param_5;
        *(undefined8 *)(puStack_3d0 + 0x26) = param_6;
        puStack_3d0[0x2c] = piStack_338[4];
        uVar11 = *(undefined8 *)(piStack_338 + 2);
        *(undefined8 *)(puStack_3d0 + 0x28) = *(undefined8 *)piStack_338;
        *(undefined8 *)(puStack_3d0 + 0x2a) = uVar11;
        puStack_3d0[0x2d] = (uint)pbStack_3e0;
        puStack_3d0[0x2e] = 0;
        puStack_3d0[0x2f] = 0;
        *(char *)(puStack_3d0 + 0x30) = cStack_3e9;
        *(undefined1 *)((longlong)puStack_3d0 + 0xc1) = pcStack_3e8._0_1_;
        if (CONCAT44(uStack_2dc,uStack_2e0) != 0) {
          pub_1406abac0((byte *)CONCAT44(uStack_2d4,uStack_2d8),CONCAT44(uStack_2dc,uStack_2e0),1);
        }
        return 0;
      }
      uStack_280 = (byte **)pcStack_3b0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_142e46dc3,0x1f,&uStack_280,&UNK_142e47018,&UNK_142e46de8);
    }
  }
  pdb_142dc7e2a(1,0x10);
LAB_140120663:
                    /* WARNING: Does not return */
  pcVar15 = (code *)invalidInstructionException();
  (*pcVar15)();
}

