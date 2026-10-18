// VA 0x1406cf430, PDB extent 4027 bytes
// tg_iced::dialog::MessageDialog::show
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-iced/src/dialog.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_iced::dialog::MessageDialog::show
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-iced/src/dialog.rs
   Extent: 4027 */

ulonglong pdb_1406cf430(undefined8 *param_1)

{
  char *pcVar1;
  uint uVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  ulonglong *puVar8;
  byte *pbVar9;
  byte bVar10;
  char cVar11;
  undefined8 uVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  double dVar20;
  undefined8 uStack_468;
  undefined8 uStack_460;
  int iStack_458;
  int iStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined8 uStack_448;
  undefined8 uStack_440;
  byte *pbStack_438;
  undefined8 uStack_430;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined1 auStack_41c [12];
  undefined4 uStack_410;
  undefined4 uStack_3f8;
  undefined4 uStack_3e0;
  int iStack_3dc;
  int iStack_3d8;
  undefined4 uStack_3c8;
  undefined4 uStack_3b0;
  undefined8 uStack_398;
  undefined4 uStack_390;
  undefined2 uStack_38c;
  undefined1 uStack_38a;
  undefined5 uStack_389;
  undefined2 uStack_384;
  undefined1 uStack_382;
  undefined1 uStack_381;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined7 uStack_360;
  undefined4 uStack_359;
  undefined4 uStack_355;
  undefined4 uStack_351;
  undefined4 uStack_34d;
  undefined4 uStack_349;
  undefined4 uStack_345;
  undefined4 uStack_341;
  undefined4 uStack_33d;
  undefined1 uStack_339;
  undefined8 uStack_330;
  int iStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  byte *pbStack_300;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  int iStack_2d0;
  int iStack_2cc;
  int iStack_2c8;
  int iStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  byte *pbStack_2a8;
  undefined8 uStack_2a0;
  undefined1 uStack_298;
  undefined1 auStack_28c [156];
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined8 uStack_115;
  undefined8 uStack_10d;
  undefined4 uStack_105;
  undefined4 uStack_101;
  undefined4 uStack_fd;
  undefined4 uStack_f9;
  undefined8 uStack_f5;
  undefined8 uStack_ed;
  undefined4 uStack_e5;
  undefined4 uStack_e1;
  undefined4 uStack_dd;
  undefined4 uStack_d9;
  undefined4 uStack_d5;
  undefined4 uStack_d1;
  undefined4 uStack_cd;
  undefined4 uStack_c9;
  undefined1 uStack_c5;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  byte *pbStack_60;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined8 uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  uStack_1a8 = (byte *)0x0;
  uStack_198 = CONCAT22(uStack_198._2_2_,0x100);
  LOCK();
  cVar11 = *_DAT_143ca3878;
  *_DAT_143ca3878 = '\x01';
  UNLOCK();
  puStack_68 = param_1;
  if (cVar11 == '\0') {
    pdb_141002cb0(&uStack_2d8,&uStack_1a8);
    pbVar9 = pbStack_2a8;
    iVar15 = iStack_2d0;
    uVar12 = uStack_2d8;
    uStack_468 = CONCAT44(iStack_2c8,iStack_2cc);
    uStack_460 = CONCAT44(uStack_2c0,iStack_2c4);
    iStack_458 = uStack_2bc;
    iStack_454 = (undefined4)uStack_2b8;
    uStack_450 = uStack_2b8._4_4_;
    uStack_44c = (undefined4)uStack_2b0;
    uStack_448 = CONCAT44(uStack_448._4_4_,uStack_2b0._4_4_);
    pbStack_60 = uStack_1a8;
    if (uStack_1a8 != (byte *)0x0) {
      puStack_70 = uStack_1a0;
      if ((code *)*uStack_1a0 != (code *)0x0) {
        (*(code *)*uStack_1a0)(uStack_1a8);
      }
      if (puStack_70[1] != 0) {
        pub_1406abac0(pbStack_60,puStack_70[1],puStack_70[2]);
      }
    }
    if ((int)uVar12 != 3) {
      uStack_330 = uVar12;
      iStack_328 = iVar15;
      uStack_324 = (undefined4)uStack_468;
      uStack_320 = uStack_468._4_4_;
      uStack_31c = (undefined4)uStack_460;
      uStack_318 = uStack_460._4_4_;
      uStack_314 = iStack_458;
      uStack_310 = iStack_454;
      uStack_30c = uStack_450;
      uStack_308 = uStack_44c;
      uStack_304 = (undefined4)uStack_448;
      pbStack_300 = pbVar9;
      uVar18 = *(uint *)(puStack_68 + 6);
      uVar2 = *(uint *)((longlong)puStack_68 + 0x34);
      pdb_14007ee60();
      pbStack_438 = pub_1406abab0(0xc,1);
      if (pbStack_438 == (byte *)0x0) {
        uStack_54 = 1;
        pdb_142dc7e2a(1,0xc);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pbStack_438[0] = 0x77;
      pbStack_438[1] = 0x69;
      pbStack_438[2] = 0x6e;
      pbStack_438[3] = 0x69;
      pbStack_438[4] = 0x74;
      pbStack_438[5] = 0x20;
      pbStack_438[6] = 0x77;
      pbStack_438[7] = 0x69;
      pbStack_438[8] = 0x6e;
      pbStack_438[9] = 100;
      pbStack_438[10] = 0x6f;
      pbStack_438[0xb] = 0x77;
      uStack_428 = 2;
      uStack_410 = 2;
      uStack_3f8 = 2;
      uStack_3e0 = 2;
      uStack_390 = 7;
      uStack_440 = 0xc;
      uStack_430 = 0xc;
      uStack_398 = 0;
      uStack_384 = 0x102;
      uStack_3c8 = 2;
      uStack_38c = 1;
      uStack_38a = 1;
      uStack_389 = 0x100010000;
      uStack_3b0 = 0xf;
      uStack_468 = 0;
      pdb_14073f420(&uStack_1a8);
      pub_142e32760(&uStack_2d8,&uStack_468,0xe8);
      uStack_1f0 = (undefined4)uStack_1a8;
      uStack_1ec = uStack_1a8._4_4_;
      uStack_1e8 = (undefined4)uStack_1a0;
      uStack_1e4 = uStack_1a0._4_4_;
      uStack_1e0 = uStack_198;
      uStack_1dc = uStack_194;
      uStack_1d8 = uStack_190;
      uStack_1d4 = uStack_18c;
      uStack_1d0 = uStack_188;
      uStack_1c8 = uStack_180;
      uStack_1c0 = uStack_178;
      uStack_1bc = uStack_174;
      uStack_1b8 = uStack_170;
      uStack_1b4 = uStack_16c;
      uStack_1b0 = uStack_168;
      pdb_140f60be0(&uStack_468,puStack_68);
      if (uStack_2b0 != 0) {
        pub_1406abac0(pbStack_2a8,uStack_2b0,1);
      }
      iVar14 = iStack_454;
      iVar15 = iStack_458;
      uStack_2a0 = CONCAT44(iStack_454,iStack_458);
      uStack_2b0 = uStack_468;
      pbStack_2a8 = (byte *)uStack_460;
      iStack_458 = iStack_2c8;
      iStack_454 = iStack_2c4;
      uStack_450 = uStack_2c0;
      uStack_44c = uStack_2bc;
      uStack_448 = uStack_2b8;
      uStack_440 = uStack_468;
      uStack_430 = CONCAT44(iVar14,iVar15);
      pub_142e32760(&uStack_1a8,auStack_28c,0xe4);
      dVar4 = _DAT_142e33020;
      dVar20 = 0.0;
      if (0.0 <= (double)uVar18) {
        dVar20 = (double)uVar18;
      }
      dVar5 = _DAT_142e33020;
      if (dVar20 <= _DAT_142e33020) {
        dVar5 = dVar20;
      }
      dVar20 = 0.0;
      if (0.0 <= (double)uVar2) {
        dVar20 = (double)uVar2;
      }
      dVar6 = _DAT_142e33020;
      if (dVar20 <= _DAT_142e33020) {
        dVar6 = dVar20;
      }
      uStack_428 = 0;
      uStack_424 = (undefined4)(longlong)dVar5;
      uStack_420 = (undefined4)(longlong)dVar6;
      pub_142e32760(auStack_41c,&uStack_1a8,0x92);
      uStack_389 = (undefined5)uStack_115;
      uStack_384 = (undefined2)((ulonglong)uStack_115 >> 0x28);
      uStack_382 = (undefined1)((ulonglong)uStack_115 >> 0x38);
      uStack_381 = (undefined1)uStack_10d;
      uStack_380 = (undefined4)((ulonglong)uStack_10d >> 8);
      uStack_37c._0_3_ = (undefined3)((ulonglong)uStack_10d >> 0x28);
      uStack_37c._3_1_ = (undefined1)uStack_105;
      uStack_378._3_1_ = (undefined1)uStack_101;
      uStack_378 = CONCAT13(uStack_378._3_1_,(int3)((uint)uStack_105 >> 8));
      uStack_374._3_1_ = (undefined1)uStack_fd;
      uStack_374 = CONCAT13(uStack_374._3_1_,(int3)((uint)uStack_101 >> 8));
      uStack_370._3_1_ = (undefined1)uStack_f9;
      uStack_370 = CONCAT13(uStack_370._3_1_,(int3)((uint)uStack_fd >> 8));
      uStack_36c._3_1_ = (undefined1)uStack_f5;
      uStack_36c = CONCAT13(uStack_36c._3_1_,(int3)((uint)uStack_f9 >> 8));
      uStack_368 = (undefined4)((ulonglong)uStack_f5 >> 8);
      uStack_364._0_3_ = (undefined3)((ulonglong)uStack_f5 >> 0x28);
      uStack_364._3_1_ = (undefined1)uStack_ed;
      uStack_360 = (undefined7)((ulonglong)uStack_ed >> 8);
      uStack_359 = uStack_e5;
      uStack_355 = uStack_e1;
      uStack_351 = uStack_dd;
      uStack_34d = uStack_d9;
      uStack_349 = uStack_d5;
      uStack_345 = uStack_d1;
      uStack_341 = uStack_cd;
      uStack_33d = uStack_c9;
      uStack_339 = uStack_c5;
      uStack_38a = 1;
      uStack_51 = 1;
      uStack_52 = 1;
      uVar12 = pdb_140747850();
      uStack_51 = 1;
      uStack_52 = 1;
      pdb_140747860(&uStack_2d8,uVar12);
      if ((char)uStack_2d8 == '\0') {
        dVar20 = 0.0;
        if (0.0 <= (double)(uint)(iStack_2c8 - iStack_2d0)) {
          dVar20 = (double)(uint)(iStack_2c8 - iStack_2d0);
        }
        dVar5 = dVar4;
        if (dVar20 <= dVar4) {
          dVar5 = dVar20;
        }
        dVar20 = 0.0;
        if (0.0 <= (double)(uint)(iStack_2c4 - iStack_2cc)) {
          dVar20 = (double)(uint)(iStack_2c4 - iStack_2cc);
        }
        if (dVar20 <= dVar4) {
          dVar4 = dVar20;
        }
        uVar17 = (uint)(longlong)dVar5 - uVar18;
        if ((uint)(longlong)dVar5 < uVar18) {
          uVar17 = 0;
        }
        uVar18 = (uint)(longlong)dVar4 - uVar2;
        if ((uint)(longlong)dVar4 < uVar2) {
          uVar18 = 0;
        }
        uVar17 = uVar17 >> 1;
        uVar18 = uVar18 >> 1;
      }
      else {
        uStack_1a8 = (byte *)CONCAT44(uStack_1a8._4_4_,1);
        uStack_51 = 1;
        uStack_52 = 1;
        uVar17 = 0;
        pdb_1404b38e0(&uStack_1a0);
        uVar18 = 0;
      }
      uStack_51 = 1;
      uStack_52 = 1;
      pdb_140747860(&uStack_2d8,uVar12);
      if ((char)uStack_2d8 == '\0') {
        dVar4 = (double)iStack_2d0;
        dVar20 = (double)iStack_2cc;
        dVar5 = dVar4;
        if (dVar4 <= _DAT_142e33028) {
          dVar5 = _DAT_142e33028;
        }
        if (_DAT_142e33030 <= dVar5) {
          dVar5 = _DAT_142e33030;
        }
        iVar15 = (int)dVar5;
        if (NAN(dVar4)) {
          iVar15 = 0;
        }
        dVar4 = dVar20;
        if (dVar20 <= _DAT_142e33028) {
          dVar4 = _DAT_142e33028;
        }
        if (_DAT_142e33030 <= dVar4) {
          dVar4 = _DAT_142e33030;
        }
        iVar14 = (int)dVar4;
        if (NAN(dVar20)) {
          iVar14 = 0;
        }
      }
      else {
        uStack_1a8 = (byte *)CONCAT44(uStack_1a8._4_4_,1);
        uStack_51 = 1;
        uStack_52 = 1;
        iVar15 = 0;
        pdb_1404b38e0();
        iVar14 = 0;
      }
      dVar4 = (double)(int)(iVar15 + uVar17);
      dVar20 = dVar4;
      if (dVar4 <= _DAT_142e33028) {
        dVar20 = _DAT_142e33028;
      }
      if (_DAT_142e33030 <= dVar20) {
        dVar20 = _DAT_142e33030;
      }
      iVar15 = (int)dVar20;
      if (NAN(dVar4)) {
        iVar15 = 0;
      }
      dVar4 = (double)(int)(iVar14 + uVar18);
      dVar20 = dVar4;
      if (dVar4 <= _DAT_142e33028) {
        dVar20 = _DAT_142e33028;
      }
      if (_DAT_142e33030 <= dVar20) {
        dVar20 = _DAT_142e33030;
      }
      iVar14 = (int)dVar20;
      if (NAN(dVar4)) {
        iVar14 = 0;
      }
      dVar4 = (double)iVar15;
      dVar20 = dVar4;
      if (dVar4 <= _DAT_142e33028) {
        dVar20 = _DAT_142e33028;
      }
      if (_DAT_142e33030 <= dVar20) {
        dVar20 = _DAT_142e33030;
      }
      iStack_3dc = (int)dVar20;
      if (NAN(dVar4)) {
        iStack_3dc = 0;
      }
      dVar4 = (double)iVar14;
      dVar20 = dVar4;
      if (dVar4 <= _DAT_142e33028) {
        dVar20 = _DAT_142e33028;
      }
      if (_DAT_142e33030 <= dVar20) {
        dVar20 = _DAT_142e33030;
      }
      iStack_3d8 = (int)dVar20;
      if (NAN(dVar4)) {
        iStack_3d8 = 0;
      }
      uStack_3e0 = 0;
      pub_142e32760(&uStack_2d8,&uStack_468,0xe8);
      uStack_168 = CONCAT17(uStack_339,CONCAT43(uStack_33d,uStack_341._1_3_));
      uStack_188 = CONCAT17((undefined1)uStack_359,uStack_360);
      uStack_180 = CONCAT17((undefined1)uStack_351,CONCAT43(uStack_355,uStack_359._1_3_));
      uStack_178 = CONCAT13((undefined1)uStack_34d,uStack_351._1_3_);
      uStack_174 = CONCAT13((undefined1)uStack_349,uStack_34d._1_3_);
      uStack_170 = CONCAT13((undefined1)uStack_345,uStack_349._1_3_);
      uStack_16c = CONCAT13((undefined1)uStack_341,uStack_345._1_3_);
      uStack_198 = uStack_370;
      uStack_194 = uStack_36c;
      uStack_190 = uStack_368;
      uStack_18c = uStack_364;
      uStack_1a8 = (byte *)CONCAT44(uStack_37c,uStack_380);
      uStack_1a0 = (undefined8 *)CONCAT44(uStack_374,uStack_378);
      uStack_51 = 0;
      uStack_52 = 1;
      pdb_141007250(&uStack_98,&uStack_2d8,&uStack_1a8,&uStack_320);
      uStack_2e0 = uStack_78;
      uVar12 = uStack_2e0;
      uStack_2e0._0_4_ = (undefined4)uStack_78;
      uStack_2e0._4_4_ = (undefined4)((ulonglong)uStack_78 >> 0x20);
      uStack_2e0 = uVar12;
      if ((char)uStack_98 != '\0') {
        uStack_198 = uStack_80;
        uStack_194 = uStack_7c;
        uStack_190 = (undefined4)uStack_2e0;
        uStack_18c = uStack_2e0._4_4_;
        iStack_2c8 = uStack_80;
        iStack_2c4 = uStack_7c;
        uStack_2c0 = (undefined4)uStack_2e0;
        uStack_2bc = uStack_2e0._4_4_;
        iStack_2d0 = uStack_88;
        iStack_2cc = uStack_84;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_142f99d18,6,&uStack_2d8,&UNK_142f99a70,&UNK_142f99d20);
      }
      uStack_a8 = uStack_80;
      uStack_a4 = uStack_7c;
      uStack_a0 = (undefined4)uStack_2e0;
      uStack_9c = uStack_2e0._4_4_;
      uStack_b8 = uStack_90;
      uStack_b4 = uStack_8c;
      uStack_b0 = uStack_88;
      uStack_ac = uStack_84;
      lVar7 = CONCAT44(uStack_8c,uStack_90);
      pcVar1 = (char *)(lVar7 + 0x10);
      LOCK();
      bVar19 = *(char *)(lVar7 + 0x10) == '\0';
      if (bVar19) {
        *(char *)(lVar7 + 0x10) = '\x01';
      }
      UNLOCK();
      if (!bVar19) {
        pdb_142dc6be0(pcVar1);
      }
      puVar8 = _DAT_143ca8f38;
      if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
        bVar10 = 0;
        cVar11 = *(char *)(lVar7 + 0x11);
      }
      else {
        bVar10 = pdb_142dc79e0();
        bVar10 = bVar10 ^ 1;
        cVar11 = *(char *)(lVar7 + 0x11);
      }
      if (cVar11 != '\0') {
        uVar18 = (uint)iStack_2d0 >> 8;
        iStack_2d0 = CONCAT31((int3)uVar18,bVar10);
        uStack_2d8 = pcVar1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_142f99ab0,0x2b,&uStack_2d8,&UNK_142f99ae0,&UNK_142f99bf8);
      }
      *(undefined1 *)(lVar7 + 0xe4) = 1;
      if (((bVar10 == 0) && ((*puVar8 & 0x7fffffffffffffff) != 0)) &&
         (cVar11 = pdb_142dc79e0(), cVar11 == '\0')) {
        *(undefined1 *)(lVar7 + 0x11) = 1;
      }
      LOCK();
      cVar11 = *pcVar1;
      *pcVar1 = '\0';
      UNLOCK();
      if (cVar11 == '\x02') {
        pdb_142dc6ca0(pcVar1);
      }
      RedrawWindow(CONCAT44(uStack_ac,uStack_b0),0,0,2);
      uStack_198 = uStack_a8;
      uStack_194 = uStack_a4;
      uStack_190 = uStack_a0;
      uStack_18c = uStack_9c;
      uStack_98 = uStack_b8;
      uStack_94 = uStack_b4;
      uStack_90 = uStack_b0;
      uStack_8c = uStack_ac;
      uStack_88 = uStack_a8;
      uStack_84 = uStack_a4;
      uStack_80 = uStack_a0;
      uStack_7c = uStack_9c;
      if (*(char *)(puStack_68 + 7) == '\x02') {
        lVar7 = CONCAT44(uStack_ac,uStack_b0);
        lVar13 = GetActiveWindow();
        if (lVar7 != lVar13) {
          uStack_55 = 1;
          pdb_141004310(&uStack_88,lVar7,0);
        }
      }
      else {
        lVar7 = CONCAT44(uStack_ac,uStack_b0);
        lVar13 = GetActiveWindow();
        if (lVar7 != lVar13) {
          uStack_55 = 1;
          pdb_141004310(&uStack_88,lVar7,1);
        }
      }
      uStack_2d8 = (char *)*puStack_68;
      uStack_2b8 = puStack_68[4];
      uStack_2b0 = puStack_68[5];
      pbStack_2a8 = (byte *)puStack_68[6];
      uStack_2a0 = puStack_68[7];
      iStack_2c8 = (int)puStack_68[2];
      iStack_2c4 = (int)((ulonglong)puStack_68[2] >> 0x20);
      uStack_2c0 = (undefined4)puStack_68[3];
      uStack_2bc = (undefined4)((ulonglong)puStack_68[3] >> 0x20);
      iStack_2d0 = (int)puStack_68[1];
      iStack_2cc = (int)((ulonglong)puStack_68[1] >> 0x20);
      uStack_298 = 2;
      uStack_188 = CONCAT44(uStack_84,uStack_88);
      uStack_180 = CONCAT44(uStack_7c,uStack_80);
      uStack_198 = uStack_98;
      uStack_194 = uStack_94;
      uStack_190 = uStack_90;
      uStack_18c = uStack_8c;
      uStack_1a8 = (byte *)0x1;
      uStack_1a0 = (undefined8 *)0x1;
      pdb_14007ee60();
      pbStack_60 = pub_1406abab0(0x30,8);
      if (pbStack_60 != (byte *)0x0) {
        *(undefined8 *)(pbStack_60 + 0x20) = uStack_188;
        *(undefined8 *)(pbStack_60 + 0x28) = uStack_180;
        *(undefined4 *)(pbStack_60 + 0x10) = uStack_198;
        *(undefined4 *)(pbStack_60 + 0x14) = uStack_194;
        *(undefined4 *)(pbStack_60 + 0x18) = uStack_190;
        *(undefined4 *)(pbStack_60 + 0x1c) = uStack_18c;
        *(undefined4 *)pbStack_60 = (undefined4)uStack_1a8;
        *(undefined4 *)(pbStack_60 + 4) = uStack_1a8._4_4_;
        *(undefined4 *)(pbStack_60 + 8) = (undefined4)uStack_1a0;
        *(undefined4 *)(pbStack_60 + 0xc) = uStack_1a0._4_4_;
        pdb_141008d40(&uStack_1a8,&uStack_2d8,&uStack_330,pbStack_60);
        if ((char)uStack_1a8 != '\x01') {
          uVar16 = CONCAT71((int7)((ulonglong)puVar8 >> 8),uStack_1a8._1_1_);
          uStack_53 = 0;
          pdb_140ffcba0(&uStack_330);
          return uVar16 & 0xffffffff;
        }
        uStack_2d8 = (char *)uStack_1a0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_142f99ab0,0x2b,&uStack_2d8,&UNK_142f99b00,&UNK_142f99d38);
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x30);
    }
  }
  else {
    iVar15 = 3;
  }
  uStack_2d8 = (char *)CONCAT44((undefined4)uStack_468,iVar15);
  iStack_2d0 = uStack_468._4_4_;
  iStack_2cc = (undefined4)uStack_460;
  iStack_2c8 = uStack_460._4_4_;
  iStack_2c4 = iStack_458;
  uStack_2c0 = iStack_454;
  uStack_2bc = uStack_450;
  uStack_2b8 = CONCAT44((undefined4)uStack_448,uStack_44c);
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_142f99ab0,0x2b,&uStack_2d8,&UNK_142f99a90,&UNK_142f99d00);
}

