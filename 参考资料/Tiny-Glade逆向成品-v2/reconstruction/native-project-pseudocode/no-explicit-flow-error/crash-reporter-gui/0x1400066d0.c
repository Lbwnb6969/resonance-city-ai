// VA 0x1400066d0, PDB extent 5019 bytes
// crash_reporter_gui::run_crash_reporter_gui<tiny_glade::panic_reporter::panic_report::on_game_crashed::closure_env$7>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/crash-reporter-gui/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   crash_reporter_gui::run_crash_reporter_gui<tiny_glade::panic_reporter::panic_report::on_game_crashed::closure_env$7>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/crash-reporter-gui/src/lib.rs
   Extent: 5019 */

void pdb_1400066d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

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
  int iStack_8a0;
  undefined4 uStack_89c;
  int iStack_898;
  int iStack_894;
  int iStack_890;
  int iStack_88c;
  undefined4 uStack_888;
  undefined4 uStack_884;
  undefined4 uStack_880;
  undefined4 uStack_87c;
  undefined4 uStack_878;
  undefined4 uStack_874;
  byte *pbStack_870;
  ulonglong uStack_868;
  undefined1 auStack_854 [156];
  byte *pbStack_7b8;
  undefined8 *puStack_7b0;
  undefined4 uStack_7a8;
  undefined4 uStack_7a4;
  undefined4 uStack_7a0;
  undefined4 uStack_79c;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined4 uStack_788;
  undefined4 uStack_784;
  undefined4 uStack_780;
  undefined4 uStack_77c;
  undefined8 uStack_778;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined8 uStack_3a8;
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
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  ulonglong uStack_310;
  byte *pbStack_308;
  ulonglong uStack_300;
  undefined8 uStack_2f8;
  undefined4 uStack_2f0;
  undefined1 auStack_2ec [12];
  undefined4 uStack_2e0;
  undefined4 uStack_2c8;
  undefined4 uStack_2b0;
  int iStack_2ac;
  int iStack_2a8;
  undefined4 uStack_298;
  undefined4 uStack_280;
  undefined8 uStack_268;
  undefined4 uStack_260;
  undefined2 uStack_25c;
  undefined1 uStack_25a;
  undefined5 uStack_259;
  undefined2 uStack_254;
  undefined1 uStack_252;
  undefined8 uStack_251;
  undefined4 uStack_249;
  undefined4 uStack_245;
  undefined4 uStack_241;
  undefined4 uStack_23d;
  undefined8 uStack_239;
  undefined8 uStack_231;
  undefined4 uStack_229;
  undefined4 uStack_225;
  undefined4 uStack_221;
  undefined4 uStack_21d;
  undefined8 uStack_219;
  undefined8 uStack_211;
  undefined1 uStack_209;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 auStack_1e0 [8];
  int iStack_1d8;
  undefined8 uStack_1d4;
  undefined8 uStack_1cc;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  byte *pbStack_1b0;
  byte *pbStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
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
  undefined8 uStack_d5;
  undefined8 uStack_cd;
  undefined1 uStack_c5;
  undefined8 uStack_b8;
  longlong lStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  byte *pbStack_68;
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
  undefined8 uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  pbStack_1a8 = (byte *)0x0;
  uStack_198 = CONCAT62(uStack_198._2_6_,0x100);
  LOCK();
  cVar6 = *_DAT_143ca3878;
  *_DAT_143ca3878 = '\x01';
  UNLOCK();
  puStack_90 = param_2;
  puStack_88 = param_3;
  uStack_80 = param_4;
  puStack_78 = param_1;
  if (cVar6 != '\0') {
    iVar8 = 3;
LAB_1400072de:
    uStack_89c = (undefined4)uStack_338;
    iStack_898 = (int)((ulonglong)uStack_338 >> 0x20);
    iStack_894 = (int)uStack_330;
    iStack_890 = (int)((ulonglong)uStack_330 >> 0x20);
    iStack_88c = (undefined4)uStack_328;
    uStack_888 = uStack_328._4_4_;
    uStack_884 = (undefined4)uStack_320;
    uStack_880 = uStack_320._4_4_;
    uStack_87c = (undefined4)uStack_318;
    iStack_8a0 = iVar8;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_142e33648,0x2b,&iStack_8a0,&UNK_142e33698,&UNK_142e33550);
  }
  pdb_14010b300(&iStack_8a0,&pbStack_1a8);
  pbVar9 = pbStack_870;
  iVar8 = iStack_898;
  iVar7 = iStack_8a0;
  uStack_338 = CONCAT44(iStack_890,iStack_894);
  uStack_330 = CONCAT44(uStack_888,iStack_88c);
  uStack_328 = CONCAT44(uStack_880,uStack_884);
  uStack_320 = CONCAT44(uStack_878,uStack_87c);
  uStack_318 = CONCAT44(uStack_318._4_4_,uStack_874);
  pbStack_68 = pbStack_1a8;
  if (pbStack_1a8 != (byte *)0x0) {
    puStack_70 = puStack_1a0;
    if ((code *)*puStack_1a0 != (code *)0x0) {
      (*(code *)*puStack_1a0)(pbStack_1a8);
    }
    if (puStack_70[1] != 0) {
      pub_1406abac0(pbStack_68,puStack_70[1],puStack_70[2]);
    }
  }
  if (iVar7 == 3) goto LAB_1400072de;
  iStack_1d8 = iVar8;
  uStack_1d4 = uStack_338;
  uStack_1cc = uStack_330;
  uStack_1c4 = (undefined4)uStack_328;
  uStack_1c0 = uStack_328._4_4_;
  uStack_1bc = (undefined4)uStack_320;
  uStack_1b8 = uStack_320._4_4_;
  uStack_1b4 = (undefined4)uStack_318;
  pbStack_1b0 = pbVar9;
  pdb_14007ee60();
  pbVar9 = pub_1406abab0(0xc,1);
  if (pbVar9 == (byte *)0x0) {
    uStack_59 = 1;
    uStack_5a = 1;
    pdb_142dc7e2a(1,0xc);
    goto LAB_14000734d;
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
  uStack_2f8 = CONCAT44(uStack_2f8._4_4_,2);
  uStack_2e0 = 2;
  uStack_2c8 = 2;
  uStack_2b0 = 2;
  uStack_260 = 7;
  uStack_310 = 0xc;
  uStack_300 = 0xc;
  uStack_268 = 0;
  uStack_254 = 0x102;
  uStack_298 = 2;
  uStack_25c = 1;
  uStack_25a = 1;
  uStack_259 = 0x100010000;
  uStack_280 = 0xf;
  uStack_338 = 0;
  pbStack_308 = pbVar9;
  pdb_14073f420(&pbStack_1a8);
  pub_142e32760(&iStack_8a0,&uStack_338,0xe8);
  pbStack_7b8 = pbStack_1a8;
  puStack_7b0 = puStack_1a0;
  uStack_7a8 = (undefined4)uStack_198;
  uStack_7a4 = uStack_198._4_4_;
  uStack_7a0 = (undefined4)uStack_190;
  uStack_79c = uStack_190._4_4_;
  uStack_798 = uStack_188;
  uStack_790 = uStack_180;
  uStack_788 = uStack_178;
  uStack_784 = uStack_174;
  uStack_780 = uStack_170;
  uStack_77c = uStack_16c;
  uStack_778 = uStack_168;
  if (*(char *)(puStack_78 + 10) == '\0') {
    uStack_5b = 1;
    uVar14 = 0x11;
    puVar15 = (undefined *)pdb_140dc6290(&UNK_142e33568);
    if (-1 < (longlong)uVar14) {
      if (uVar14 == 0) {
        pbVar9 = (byte *)0x1;
        uVar14 = 0;
        uVar18 = CONCAT44(uStack_874,uStack_878);
        goto joined_r0x00014000736a;
      }
      goto LAB_14000696a;
    }
    uVar17 = 0;
  }
  else {
    puVar15 = &DAT_142e33579;
    uVar14 = 0x16;
LAB_14000696a:
    pdb_14007ee60();
    uVar17 = 1;
    pbVar9 = pub_1406abab0(uVar14,1);
    if (pbVar9 != (byte *)0x0) {
      pub_142e32760(pbVar9,puVar15,uVar14);
      uVar18 = CONCAT44(uStack_874,uStack_878);
joined_r0x00014000736a:
      if (uVar18 != 0) {
        pub_1406abac0(pbStack_870,uVar18,1);
      }
      uStack_878 = (undefined4)uVar14;
      uStack_874 = (undefined4)(uVar14 >> 0x20);
      pbStack_870 = pbVar9;
      uStack_868 = uVar14;
      uStack_310 = uVar14;
      pbStack_308 = pbVar9;
      uStack_300 = uVar14;
      pub_142e32760(&pbStack_1a8,auStack_854,0xe4);
      uStack_2f8 = 0x32000000000;
      uStack_2f0 = 600;
      pub_142e32760(auStack_2ec,&pbStack_1a8,0x92);
      uStack_259 = (undefined5)uStack_115;
      uStack_254 = (undefined2)((ulonglong)uStack_115 >> 0x28);
      uStack_252 = (undefined1)((ulonglong)uStack_115 >> 0x38);
      uStack_251 = uStack_10d;
      uStack_249 = uStack_105;
      uStack_245 = uStack_101;
      uStack_241 = uStack_fd;
      uStack_23d = uStack_f9;
      uStack_239 = uStack_f5;
      uStack_231 = uStack_ed;
      uStack_229 = uStack_e5;
      uStack_225 = uStack_e1;
      uStack_221 = uStack_dd;
      uStack_21d = uStack_d9;
      uStack_219 = uStack_d5;
      uStack_211 = uStack_cd;
      uStack_209 = uStack_c5;
      uStack_25a = 1;
      uStack_54 = 1;
      uStack_55 = 1;
      uStack_56 = 1;
      uVar17 = pdb_140747850();
      uStack_54 = 1;
      uStack_55 = 1;
      uStack_56 = 1;
      pdb_140747860(&iStack_8a0,uVar17);
      if ((char)iStack_8a0 == '\0') {
        dVar2 = 0.0;
        if (0.0 <= (double)(uint)(iStack_890 - iStack_898)) {
          dVar2 = (double)(uint)(iStack_890 - iStack_898);
        }
        uVar21 = SUB84(_DAT_142e33020,0);
        uVar22 = (undefined4)((ulonglong)_DAT_142e33020 >> 0x20);
        if (dVar2 <= _DAT_142e33020) {
          uVar21 = SUB84(dVar2,0);
          uVar22 = (undefined4)((ulonglong)dVar2 >> 0x20);
        }
        uVar14 = (ulonglong)(double)CONCAT44(uVar22,uVar21);
        dVar2 = 0.0;
        if (0.0 <= (double)(uint)(iStack_88c - iStack_894)) {
          dVar2 = (double)(uint)(iStack_88c - iStack_894);
        }
        dVar3 = _DAT_142e33020;
        if (dVar2 <= _DAT_142e33020) {
          dVar3 = dVar2;
        }
        uVar18 = (ulonglong)dVar3;
      }
      else {
        pbStack_1a8 = (byte *)CONCAT44(pbStack_1a8._4_4_,1);
        uStack_54 = 1;
        uStack_55 = 1;
        uStack_56 = 1;
        uVar14 = 0;
        pdb_1404b38e0(&puStack_1a0);
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
      uStack_54 = 1;
      uStack_55 = 1;
      uStack_56 = 1;
      pdb_140747860(&iStack_8a0,uVar17);
      if ((char)iStack_8a0 == '\0') {
        dVar19 = (double)iStack_898;
        dVar2 = (double)iStack_894;
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
        pbStack_1a8 = (byte *)CONCAT44(pbStack_1a8._4_4_,1);
        uStack_54 = 1;
        uStack_55 = 1;
        uStack_56 = 1;
        iVar8 = 0;
        pdb_1404b38e0(&puStack_1a0);
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
      iStack_2ac = (int)dVar3;
      if (NAN(dVar2)) {
        iStack_2ac = iVar8;
      }
      dVar2 = (double)iVar7;
      dVar3 = dVar2;
      if (dVar2 <= _DAT_142e33028) {
        dVar3 = _DAT_142e33028;
      }
      if (_DAT_142e33030 <= dVar3) {
        dVar3 = _DAT_142e33030;
      }
      iStack_2a8 = (int)dVar3;
      if (NAN(dVar2)) {
        iStack_2a8 = iVar8;
      }
      uStack_2b0 = 0;
      uStack_54 = 0;
      uStack_55 = 1;
      uStack_56 = 1;
      puVar12 = &uStack_338;
      pdb_1400085b0(&iStack_8a0,puVar12,(longlong)&uStack_1d4 + 4);
      if (iStack_8a0 != 1) {
        uStack_b8 = CONCAT44(iStack_894,iStack_898);
        lStack_b0 = CONCAT44(iStack_88c,iStack_890);
        uStack_a8 = uStack_888;
        uStack_a4 = uStack_884;
        uStack_a0 = uStack_880;
        uStack_9c = uStack_87c;
        uStack_51 = 1;
        uStack_52 = 1;
        uStack_53 = 1;
        pcVar10 = (char *)pdb_140744c40();
        dVar2 = *(double *)(pcVar10 + 0xc0);
        uVar21 = SUB84(dVar2,0);
        uVar22 = (undefined4)((ulonglong)dVar2 >> 0x20);
        if ((((ulonglong)puVar12 & 1) == 0) && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)) {
          uStack_51 = 1;
          uStack_52 = 1;
          uStack_53 = 1;
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
          uStack_53 = 1;
          pdb_142dc6ca0(pcVar10);
        }
        uStack_51 = 1;
        uStack_52 = 1;
        uStack_53 = 1;
        pcVar10 = (char *)pdb_140744c40();
        uVar16 = *(uint *)(pcVar10 + 0xcc);
        if ((((ulonglong)puVar12 & 1) == 0) && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)) {
          uStack_51 = 1;
          uStack_52 = 1;
          uStack_53 = 1;
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
          uStack_53 = 1;
          pdb_142dc6ca0(pcVar10);
        }
        lVar5 = lStack_b0;
        uStack_51 = 1;
        uStack_52 = 1;
        uStack_53 = 1;
        cVar6 = pdb_1407476d0(lStack_b0);
        lVar11 = GetForegroundWindow();
        if ((cVar6 == '\0' && lVar5 != lVar11) && (uVar16 & 0x10) != 0) {
          uStack_51 = 1;
          uStack_52 = 1;
          uStack_53 = 1;
          pdb_140744ab0(lVar5);
        }
        lVar5 = lStack_b0;
        lVar11 = GetActiveWindow();
        if (lVar5 != lVar11) {
          uStack_51 = 1;
          uStack_52 = 1;
          uStack_53 = 1;
          pdb_14010d7a0(&uStack_a8,lVar5,0);
        }
        uVar17 = uStack_80;
        uStack_348 = puStack_78[10];
        uStack_358 = puStack_78[8];
        uStack_350 = puStack_78[9];
        uStack_398 = *puStack_78;
        uStack_390 = puStack_78[1];
        uStack_388 = puStack_78[2];
        uStack_380 = puStack_78[3];
        uStack_378 = puStack_78[4];
        uStack_370 = puStack_78[5];
        uStack_368 = puStack_78[6];
        uStack_360 = puStack_78[7];
        uStack_208 = *puStack_88;
        uStack_200 = puStack_88[1];
        uStack_1f8 = puStack_88[2];
        uStack_1f0 = puStack_88[3];
        uStack_3a8 = puStack_90[8];
        uStack_3e8 = *puStack_90;
        uStack_3e0 = puStack_90[1];
        uStack_3d8 = *(undefined4 *)(puStack_90 + 2);
        uStack_3d4 = *(undefined4 *)((longlong)puStack_90 + 0x14);
        uStack_3d0 = *(undefined4 *)(puStack_90 + 3);
        uStack_3cc = *(undefined4 *)((longlong)puStack_90 + 0x1c);
        uStack_3c8 = puStack_90[4];
        uStack_3c0 = puStack_90[5];
        uStack_3b8 = *(undefined4 *)(puStack_90 + 6);
        uStack_3b4 = *(undefined4 *)((longlong)puStack_90 + 0x34);
        uStack_3b0 = *(undefined4 *)(puStack_90 + 7);
        uStack_3ac = *(undefined4 *)((longlong)puStack_90 + 0x3c);
        pub_142e32760(&iStack_8a0,uStack_80,0x4b8);
        pdb_14007ee60();
        pbVar9 = pub_1406abab0(0x4b8,8);
        pbStack_68 = pbVar9;
        if (pbVar9 != (byte *)0x0) {
          pub_142e32760(pbVar9,uVar17,0x4b8);
          uStack_158 = param_5[10];
          uStack_168 = param_5[8];
          uStack_160 = param_5[9];
          pbStack_1a8 = (byte *)*param_5;
          puStack_1a0 = (undefined8 *)param_5[1];
          uStack_198 = param_5[2];
          uStack_190 = param_5[3];
          uStack_188 = param_5[4];
          uStack_180 = param_5[5];
          uStack_178 = *(undefined4 *)(param_5 + 6);
          uStack_174 = *(undefined4 *)((longlong)param_5 + 0x34);
          uStack_170 = *(undefined4 *)(param_5 + 7);
          uStack_16c = *(undefined4 *)((longlong)param_5 + 0x3c);
          pdb_1406b1e20(&iStack_8a0,&uStack_398,&uStack_208,&uStack_3e8,pbVar9,&UNK_142e335e8,
                        &pbStack_1a8);
          uStack_188._0_4_ = uStack_a8;
          uStack_188._4_4_ = uStack_a4;
          uStack_180._0_4_ = uStack_a0;
          uStack_180._4_4_ = uStack_9c;
          uStack_198 = uStack_b8;
          uStack_190 = lStack_b0;
          pbStack_1a8 = (byte *)0x1;
          puStack_1a0 = (undefined8 *)0x1;
          pdb_14007ee60();
          pbStack_68 = pub_1406abab0(0x30,8);
          if (pbStack_68 != (byte *)0x0) {
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
            *(undefined4 *)(pbStack_68 + 0x20) = (undefined4)uStack_188;
            *(undefined4 *)(pbStack_68 + 0x24) = uStack_188._4_4_;
            *(undefined4 *)(pbStack_68 + 0x28) = (undefined4)uStack_180;
            *(undefined4 *)(pbStack_68 + 0x2c) = uStack_180._4_4_;
            *(undefined8 *)(pbStack_68 + 0x10) = uStack_198;
            *(longlong *)(pbStack_68 + 0x18) = uStack_190;
            *(byte **)pbStack_68 = pbStack_1a8;
            *(undefined8 **)(pbStack_68 + 8) = puStack_1a0;
            uStack_198 = CONCAT44(_DAT_142e33050,1);
            uStack_190 = CONCAT44(_UNK_142e33058,_UNK_142e33054);
            uStack_188 = CONCAT44(uStack_188._4_4_,_UNK_142e3305c);
            pbStack_1a8 = (byte *)0x1;
            puStack_1a0 = (undefined8 *)
                          (~-(ulonglong)NAN(dVar3) & CONCAT44(uVar22,uVar21) |
                          -(ulonglong)NAN(dVar3) & (ulonglong)dVar2);
            pdb_140151d80(&uStack_398,&iStack_8a0,auStack_1e0,pbStack_68,&pbStack_1a8);
            if ((char)uStack_398 != '\0') {
              uStack_51 = 0;
              uStack_52 = 0;
              uStack_53 = 0;
              pdb_140f36c40(&uStack_390);
            }
            uStack_57 = 0;
            uStack_58 = 0;
            pdb_1404cbae0(auStack_1e0);
            return;
          }
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x30);
        }
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x4b8);
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_142e332d5,6,&pbStack_1a8,&UNK_142e33608,&UNK_142e33590);
    }
  }
  pdb_142dc7e2a(uVar17,uVar14);
LAB_14000734d:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

