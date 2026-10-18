// VA 0x140005570, PDB extent 4445 bytes
// crash_reporter_gui::run_crash_reporter_gui<tiny_glade::mock_crash_reporter::closure_env$1>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/crash-reporter-gui/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   crash_reporter_gui::run_crash_reporter_gui<tiny_glade::mock_crash_reporter::closure_env$1>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/crash-reporter-gui/src/lib.rs
   Extent: 4445 */

void pdb_140005570(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  char *pcVar10;
  longlong lVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined *puVar15;
  uint uVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  double dVar19;
  double dVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  ulonglong uStack_410;
  byte *pbStack_408;
  ulonglong uStack_400;
  undefined8 uStack_3f8;
  undefined4 uStack_3f0;
  undefined1 auStack_3ec [12];
  undefined4 uStack_3e0;
  undefined4 uStack_3c8;
  undefined4 uStack_3b0;
  int iStack_3ac;
  int iStack_3a8;
  undefined4 uStack_398;
  undefined4 uStack_380;
  undefined8 uStack_368;
  undefined4 uStack_360;
  undefined2 uStack_35c;
  undefined1 uStack_35a;
  undefined5 uStack_359;
  undefined2 uStack_354;
  undefined1 uStack_352;
  undefined8 uStack_351;
  undefined4 uStack_349;
  undefined4 uStack_345;
  undefined4 uStack_341;
  undefined4 uStack_33d;
  undefined8 uStack_339;
  undefined8 uStack_331;
  undefined4 uStack_329;
  undefined4 uStack_325;
  undefined4 uStack_321;
  undefined4 uStack_31d;
  undefined8 uStack_319;
  undefined8 uStack_311;
  undefined1 uStack_309;
  undefined1 auStack_300 [8];
  int iStack_2f8;
  undefined8 uStack_2f4;
  undefined8 uStack_2ec;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  byte *pbStack_2d0;
  int iStack_2c8;
  undefined4 uStack_2c4;
  int iStack_2c0;
  int iStack_2bc;
  int iStack_2b8;
  int iStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  byte *pbStack_298;
  ulonglong uStack_290;
  undefined1 auStack_27c [156];
  byte *pbStack_1e0;
  undefined8 *puStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 uStack_1a0;
  byte *pbStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_105;
  undefined8 uStack_fd;
  undefined4 uStack_f5;
  undefined4 uStack_f1;
  undefined4 uStack_ed;
  undefined4 uStack_e9;
  undefined8 uStack_e5;
  undefined8 uStack_dd;
  undefined4 uStack_d5;
  undefined4 uStack_d1;
  undefined4 uStack_cd;
  undefined4 uStack_c9;
  undefined8 uStack_c5;
  undefined8 uStack_bd;
  undefined1 uStack_b5;
  undefined8 uStack_a8;
  longlong lStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  byte *pbStack_60;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined8 uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  pbStack_198 = (byte *)0x0;
  uStack_188 = CONCAT62(uStack_188._2_6_,0x100);
  LOCK();
  cVar6 = *_DAT_143ca3878;
  *_DAT_143ca3878 = '\x01';
  UNLOCK();
  puStack_88 = param_2;
  puStack_80 = param_3;
  puStack_78 = param_4;
  puStack_70 = param_1;
  if (cVar6 != '\0') {
    iVar8 = 3;
LAB_1400060ed:
    uStack_2c4 = (undefined4)uStack_438;
    iStack_2c0 = (int)((ulonglong)uStack_438 >> 0x20);
    iStack_2bc = (int)uStack_430;
    iStack_2b8 = (int)((ulonglong)uStack_430 >> 0x20);
    iStack_2b4 = (undefined4)uStack_428;
    uStack_2b0 = uStack_428._4_4_;
    uStack_2ac = (undefined4)uStack_420;
    uStack_2a8 = uStack_420._4_4_;
    uStack_2a4 = (undefined4)uStack_418;
    iStack_2c8 = iVar8;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_142e33648,0x2b,&iStack_2c8,&UNK_142e33698,&UNK_142e33550);
  }
  pdb_14010b300(&iStack_2c8,&pbStack_198);
  pbVar9 = pbStack_298;
  iVar8 = iStack_2c0;
  iVar7 = iStack_2c8;
  uStack_438 = CONCAT44(iStack_2b8,iStack_2bc);
  uStack_430 = CONCAT44(uStack_2b0,iStack_2b4);
  uStack_428 = CONCAT44(uStack_2a8,uStack_2ac);
  uStack_420 = CONCAT44(uStack_2a0,uStack_2a4);
  uStack_418 = CONCAT44(uStack_418._4_4_,uStack_29c);
  pbStack_60 = pbStack_198;
  if (pbStack_198 != (byte *)0x0) {
    puStack_68 = puStack_190;
    if ((code *)*puStack_190 != (code *)0x0) {
      (*(code *)*puStack_190)(pbStack_198);
    }
    if (puStack_68[1] != 0) {
      pub_1406abac0(pbStack_60,puStack_68[1],puStack_68[2]);
    }
  }
  if (iVar7 == 3) goto LAB_1400060ed;
  iStack_2f8 = iVar8;
  uStack_2f4 = uStack_438;
  uStack_2ec = uStack_430;
  uStack_2e4 = (undefined4)uStack_428;
  uStack_2e0 = uStack_428._4_4_;
  uStack_2dc = (undefined4)uStack_420;
  uStack_2d8 = uStack_420._4_4_;
  uStack_2d4 = (undefined4)uStack_418;
  pbStack_2d0 = pbVar9;
  pdb_14007ee60();
  pbVar9 = pub_1406abab0(0xc,1);
  if (pbVar9 == (byte *)0x0) {
    uStack_56 = 1;
    pdb_142dc7e2a(1,0xc);
    goto LAB_140006164;
  }
  pbVar9[0] = 0x77;
  pbVar9[1] = 0x69;
  pbVar9[2] = 0x6e;
  pbVar9[3] = 0x69;
  pbVar9[4] = 0x74;
  pbVar9[5] = 0x20;
  pbVar9[6] = 0x77;
  pbVar9[7] = 0x69;
  pbVar9[8] = 0x6e;
  pbVar9[9] = 100;
  pbVar9[10] = 0x6f;
  pbVar9[0xb] = 0x77;
  uStack_3f8 = CONCAT44(uStack_3f8._4_4_,2);
  uStack_3e0 = 2;
  uStack_3c8 = 2;
  uStack_3b0 = 2;
  uStack_360 = 7;
  uStack_410 = 0xc;
  uStack_400 = 0xc;
  uStack_368 = 0;
  uStack_354 = 0x102;
  uStack_398 = 2;
  uStack_35c = 1;
  uStack_35a = 1;
  uStack_359 = 0x100010000;
  uStack_380 = 0xf;
  uStack_438 = 0;
  pbStack_408 = pbVar9;
  pdb_14073f420(&pbStack_198);
  pub_142e32760(&iStack_2c8,&uStack_438,0xe8);
  pbStack_1e0 = pbStack_198;
  puStack_1d8 = puStack_190;
  uStack_1d0 = (undefined4)uStack_188;
  uStack_1cc = uStack_188._4_4_;
  uStack_1c8 = (undefined4)uStack_180;
  uStack_1c4 = uStack_180._4_4_;
  uStack_1c0 = uStack_178;
  uStack_1b8 = uStack_170;
  uStack_1b0 = uStack_168;
  uStack_1ac = uStack_164;
  uStack_1a8 = uStack_160;
  uStack_1a4 = uStack_15c;
  uStack_1a0 = uStack_158;
  if (*(char *)(puStack_70 + 10) == '\0') {
    uStack_57 = 1;
    uVar14 = 0x11;
    puVar15 = (undefined *)pdb_140dc6290(&UNK_142e33568);
    if (-1 < (longlong)uVar14) {
      if (uVar14 == 0) {
        pbVar9 = (byte *)0x1;
        uVar14 = 0;
        uVar18 = CONCAT44(uStack_29c,uStack_2a0);
        goto joined_r0x000140006184;
      }
      goto LAB_140005822;
    }
    uVar17 = 0;
  }
  else {
    puVar15 = &DAT_142e33579;
    uVar14 = 0x16;
LAB_140005822:
    pdb_14007ee60();
    uVar17 = 1;
    pbVar9 = pub_1406abab0(uVar14,1);
    if (pbVar9 != (byte *)0x0) {
      pub_142e32760(pbVar9,puVar15,uVar14);
      uVar18 = CONCAT44(uStack_29c,uStack_2a0);
joined_r0x000140006184:
      if (uVar18 != 0) {
        pub_1406abac0(pbStack_298,uVar18,1);
      }
      uStack_2a0 = (undefined4)uVar14;
      uStack_29c = (undefined4)(uVar14 >> 0x20);
      uStack_410 = uVar14;
      pbStack_408 = pbVar9;
      uStack_400 = uVar14;
      pbStack_298 = pbVar9;
      uStack_290 = uVar14;
      pub_142e32760(&pbStack_198,auStack_27c,0xe4);
      uStack_3f8 = 0x32000000000;
      uStack_3f0 = 600;
      pub_142e32760(auStack_3ec,&pbStack_198,0x92);
      uStack_359 = (undefined5)uStack_105;
      uStack_354 = (undefined2)((ulonglong)uStack_105 >> 0x28);
      uStack_352 = (undefined1)((ulonglong)uStack_105 >> 0x38);
      uStack_351 = uStack_fd;
      uStack_349 = uStack_f5;
      uStack_345 = uStack_f1;
      uStack_341 = uStack_ed;
      uStack_33d = uStack_e9;
      uStack_339 = uStack_e5;
      uStack_331 = uStack_dd;
      uStack_329 = uStack_d5;
      uStack_325 = uStack_d1;
      uStack_321 = uStack_cd;
      uStack_31d = uStack_c9;
      uStack_319 = uStack_c5;
      uStack_311 = uStack_bd;
      uStack_309 = uStack_b5;
      uStack_35a = 1;
      uStack_53 = 1;
      uStack_54 = 1;
      uVar17 = pdb_140747850();
      uStack_53 = 1;
      uStack_54 = 1;
      pdb_140747860(&iStack_2c8,uVar17);
      if ((char)iStack_2c8 == '\0') {
        dVar2 = 0.0;
        if (0.0 <= (double)(uint)(iStack_2b8 - iStack_2c0)) {
          dVar2 = (double)(uint)(iStack_2b8 - iStack_2c0);
        }
        uVar21 = SUB84(_DAT_142e33020,0);
        uVar22 = (undefined4)((ulonglong)_DAT_142e33020 >> 0x20);
        if (dVar2 <= _DAT_142e33020) {
          uVar21 = SUB84(dVar2,0);
          uVar22 = (undefined4)((ulonglong)dVar2 >> 0x20);
        }
        uVar14 = (ulonglong)(double)CONCAT44(uVar22,uVar21);
        dVar2 = 0.0;
        if (0.0 <= (double)(uint)(iStack_2b4 - iStack_2bc)) {
          dVar2 = (double)(uint)(iStack_2b4 - iStack_2bc);
        }
        dVar3 = _DAT_142e33020;
        if (dVar2 <= _DAT_142e33020) {
          dVar3 = dVar2;
        }
        uVar18 = (ulonglong)dVar3;
      }
      else {
        pbStack_198 = (byte *)CONCAT44(pbStack_198._4_4_,1);
        uStack_53 = 1;
        uStack_54 = 1;
        uVar14 = 0;
        pdb_1404b38e0(&puStack_190);
        uVar18 = 0;
      }
      uVar16 = (uint)uVar14 - 800;
      if ((uint)uVar14 < 800) {
        uVar16 = 0;
      }
      uVar13 = (uint)uVar18 - 600;
      if ((uint)uVar18 < 600) {
        uVar13 = 0;
      }
      uStack_53 = 1;
      uStack_54 = 1;
      pdb_140747860(&iStack_2c8,uVar17);
      if ((char)iStack_2c8 == '\0') {
        dVar19 = (double)iStack_2c0;
        dVar2 = (double)iStack_2bc;
        dVar3 = dVar19;
        if (dVar19 <= _DAT_142e33028) {
          dVar3 = _DAT_142e33028;
        }
        if (_DAT_142e33030 <= dVar3) {
          dVar3 = _DAT_142e33030;
        }
        iVar8 = (int)dVar3;
        if (NAN(dVar19)) {
          iVar8 = 0;
        }
        dVar3 = dVar2;
        if (dVar2 <= _DAT_142e33028) {
          dVar3 = _DAT_142e33028;
        }
        if (_DAT_142e33030 <= dVar3) {
          dVar3 = _DAT_142e33030;
        }
        iVar7 = (int)dVar3;
        if (NAN(dVar2)) {
          iVar7 = 0;
        }
      }
      else {
        pbStack_198 = (byte *)CONCAT44(pbStack_198._4_4_,1);
        uStack_53 = 1;
        uStack_54 = 1;
        iVar8 = 0;
        pdb_1404b38e0(&puStack_190);
        iVar7 = 0;
      }
      dVar2 = (double)(int)((uVar16 >> 1) + iVar8);
      iVar8 = 0;
      dVar3 = dVar2;
      if (dVar2 <= _DAT_142e33028) {
        dVar3 = _DAT_142e33028;
      }
      if (_DAT_142e33030 <= dVar3) {
        dVar3 = _DAT_142e33030;
      }
      iVar4 = (int)dVar3;
      if (NAN(dVar2)) {
        iVar4 = iVar8;
      }
      dVar2 = (double)(int)((uVar13 >> 1) + iVar7);
      dVar3 = dVar2;
      if (dVar2 <= _DAT_142e33028) {
        dVar3 = _DAT_142e33028;
      }
      if (_DAT_142e33030 <= dVar3) {
        dVar3 = _DAT_142e33030;
      }
      iVar7 = (int)dVar3;
      if (NAN(dVar2)) {
        iVar7 = iVar8;
      }
      dVar2 = (double)iVar4;
      dVar3 = dVar2;
      if (dVar2 <= _DAT_142e33028) {
        dVar3 = _DAT_142e33028;
      }
      if (_DAT_142e33030 <= dVar3) {
        dVar3 = _DAT_142e33030;
      }
      iStack_3ac = (int)dVar3;
      if (NAN(dVar2)) {
        iStack_3ac = iVar8;
      }
      dVar2 = (double)iVar7;
      dVar3 = dVar2;
      if (dVar2 <= _DAT_142e33028) {
        dVar3 = _DAT_142e33028;
      }
      if (_DAT_142e33030 <= dVar3) {
        dVar3 = _DAT_142e33030;
      }
      iStack_3a8 = (int)dVar3;
      if (NAN(dVar2)) {
        iStack_3a8 = iVar8;
      }
      uStack_3b0 = 0;
      uStack_53 = 0;
      uStack_54 = 1;
      puVar12 = &uStack_438;
      pdb_1400085b0(&iStack_2c8,puVar12,(longlong)&uStack_2f4 + 4);
      if (iStack_2c8 != 1) {
        uStack_a8 = CONCAT44(iStack_2bc,iStack_2c0);
        lStack_a0 = CONCAT44(iStack_2b4,iStack_2b8);
        uStack_98 = uStack_2b0;
        uStack_94 = uStack_2ac;
        uStack_90 = uStack_2a8;
        uStack_8c = uStack_2a4;
        uStack_51 = 1;
        uStack_52 = 1;
        pcVar10 = (char *)pdb_140744c40();
        dVar2 = *(double *)(pcVar10 + 0xc0);
        uVar21 = SUB84(dVar2,0);
        uVar22 = (undefined4)((ulonglong)dVar2 >> 0x20);
        if ((((ulonglong)puVar12 & 1) == 0) && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)) {
          uStack_51 = 1;
          uStack_52 = 1;
          cVar6 = pdb_142dc79e0();
          if (cVar6 == '\0') {
            pcVar10[1] = '\x01';
          }
        }
        LOCK();
        cVar6 = *pcVar10;
        *pcVar10 = '\0';
        UNLOCK();
        if (cVar6 == '\x02') {
          uStack_51 = 1;
          uStack_52 = 1;
          pdb_142dc6ca0(pcVar10);
        }
        uStack_51 = 1;
        uStack_52 = 1;
        pcVar10 = (char *)pdb_140744c40();
        uVar16 = *(uint *)(pcVar10 + 0xcc);
        if ((((ulonglong)puVar12 & 1) == 0) && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)) {
          uStack_51 = 1;
          uStack_52 = 1;
          cVar6 = pdb_142dc79e0();
          if (cVar6 == '\0') {
            pcVar10[1] = '\x01';
          }
        }
        LOCK();
        cVar6 = *pcVar10;
        *pcVar10 = '\0';
        UNLOCK();
        if (cVar6 == '\x02') {
          uStack_51 = 1;
          uStack_52 = 1;
          pdb_142dc6ca0(pcVar10);
        }
        lVar5 = lStack_a0;
        uStack_51 = 1;
        uStack_52 = 1;
        cVar6 = pdb_1407476d0(lStack_a0);
        lVar11 = GetForegroundWindow();
        if ((cVar6 == '\0' && lVar5 != lVar11) && (uVar16 & 0x10) != 0) {
          uStack_51 = 1;
          uStack_52 = 1;
          pdb_140744ab0(lVar5);
        }
        lVar5 = lStack_a0;
        lVar11 = GetActiveWindow();
        if (lVar5 != lVar11) {
          uStack_51 = 1;
          uStack_52 = 1;
          pdb_14010d7a0(&uStack_98,lVar5,0);
        }
        uStack_448 = puStack_70[10];
        uStack_458 = puStack_70[8];
        uStack_450 = puStack_70[9];
        uStack_498 = *puStack_70;
        uStack_490 = puStack_70[1];
        uStack_488 = puStack_70[2];
        uStack_480 = puStack_70[3];
        uStack_478 = puStack_70[4];
        uStack_470 = puStack_70[5];
        uStack_468 = puStack_70[6];
        uStack_460 = puStack_70[7];
        uStack_4b8 = *puStack_80;
        uStack_4b0 = puStack_80[1];
        uStack_4a8 = puStack_80[2];
        uStack_4a0 = puStack_80[3];
        uStack_4c8 = puStack_88[8];
        uStack_508 = *puStack_88;
        uStack_500 = puStack_88[1];
        uStack_4f8 = puStack_88[2];
        uStack_4f0 = puStack_88[3];
        uStack_4e8 = puStack_88[4];
        uStack_4e0 = puStack_88[5];
        uStack_4d8 = puStack_88[6];
        uStack_4d0 = puStack_88[7];
        uStack_148 = puStack_78[10];
        uStack_158 = puStack_78[8];
        uStack_150 = puStack_78[9];
        pbStack_198 = (byte *)*puStack_78;
        puStack_190 = (undefined8 *)puStack_78[1];
        uStack_188 = puStack_78[2];
        uStack_180 = puStack_78[3];
        uStack_178 = puStack_78[4];
        uStack_170 = puStack_78[5];
        uStack_168 = *(undefined4 *)(puStack_78 + 6);
        uStack_164 = *(undefined4 *)((longlong)puStack_78 + 0x34);
        uStack_160 = *(undefined4 *)(puStack_78 + 7);
        uStack_15c = *(undefined4 *)((longlong)puStack_78 + 0x3c);
        uStack_51 = 1;
        uStack_52 = 0;
        pdb_1406b1e20(&iStack_2c8,&uStack_498,&uStack_4b8,&uStack_508,1,&UNK_142e335a8,&pbStack_198)
        ;
        uStack_178._0_4_ = uStack_98;
        uStack_178._4_4_ = uStack_94;
        uStack_170._0_4_ = uStack_90;
        uStack_170._4_4_ = uStack_8c;
        uStack_188 = uStack_a8;
        uStack_180 = lStack_a0;
        pbStack_198 = (byte *)0x1;
        puStack_190 = (undefined8 *)0x1;
        pdb_14007ee60();
        pbStack_60 = pub_1406abab0(0x30,8);
        if (pbStack_60 != (byte *)0x0) {
          dVar20 = (double)(uVar14 & 0xffffffff) / _DAT_142e33038;
          dVar3 = (double)(uVar18 & 0xffffffff) / _DAT_142e33040;
          dVar19 = dVar3;
          if (dVar20 <= dVar3) {
            dVar19 = dVar20;
          }
          dVar3 = (double)(~-(ulonglong)NAN(dVar20) & (ulonglong)dVar19 |
                          -(ulonglong)NAN(dVar20) & (ulonglong)dVar3);
          if (dVar3 <= dVar2) {
            uVar21 = SUB84(dVar3,0);
            uVar22 = (undefined4)((ulonglong)dVar3 >> 0x20);
          }
          *(undefined4 *)(pbStack_60 + 0x20) = (undefined4)uStack_178;
          *(undefined4 *)(pbStack_60 + 0x24) = uStack_178._4_4_;
          *(undefined4 *)(pbStack_60 + 0x28) = (undefined4)uStack_170;
          *(undefined4 *)(pbStack_60 + 0x2c) = uStack_170._4_4_;
          *(undefined8 *)(pbStack_60 + 0x10) = uStack_188;
          *(longlong *)(pbStack_60 + 0x18) = uStack_180;
          *(byte **)pbStack_60 = pbStack_198;
          *(undefined8 **)(pbStack_60 + 8) = puStack_190;
          uStack_188 = CONCAT44(_DAT_142e33050,1);
          uStack_180 = CONCAT44(_UNK_142e33058,_UNK_142e33054);
          uStack_178 = CONCAT44(uStack_178._4_4_,_UNK_142e3305c);
          pbStack_198 = (byte *)0x1;
          puStack_190 = (undefined8 *)
                        (~-(ulonglong)NAN(dVar3) & CONCAT44(uVar22,uVar21) |
                        -(ulonglong)NAN(dVar3) & (ulonglong)dVar2);
          pdb_140151d80(&uStack_498,&iStack_2c8,auStack_300,pbStack_60,&pbStack_198);
          if ((char)uStack_498 != '\0') {
            uStack_51 = 0;
            uStack_52 = 0;
            pdb_140f36c40(&uStack_490);
          }
          uStack_55 = 0;
          pdb_1404cbae0(auStack_300);
          return;
        }
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x30);
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_142e332d5,6,&pbStack_198,&UNK_142e33608,&UNK_142e33590);
    }
  }
  pdb_142dc7e2a(uVar17,uVar14);
LAB_140006164:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

