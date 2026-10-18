// VA 0x1402b0cc0, PDB extent 4882 bytes
// tiny_glade::integrity_report_main::verify_package_integrity_and_show_report
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/integrity_report_main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   tiny_glade::integrity_report_main::verify_package_integrity_and_show_report
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/integrity_report_main.rs
   Extent: 4882 */

undefined8 pdb_1402b0cc0(undefined8 param_1,undefined4 param_2)

{
  char *pcVar1;
  code *pcVar2;
  uint uVar3;
  ulonglong *puVar4;
  byte bVar5;
  char cVar6;
  longlong lVar7;
  byte *pbVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  bool bVar11;
  byte *pbStack_490;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined2 uStack_480;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined8 uStack_3b4;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  byte *pbStack_330;
  undefined8 uStack_328;
  undefined4 uStack_320;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  int iStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 uStack_298;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined *puStack_258;
  undefined8 uStack_250;
  byte *pbStack_248;
  undefined8 uStack_240;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined1 auStack_22c [12];
  undefined4 uStack_220;
  undefined4 uStack_208;
  undefined4 uStack_1f0;
  undefined4 uStack_1d8;
  undefined4 uStack_1c0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined8 uStack_19c;
  undefined2 uStack_194;
  byte *pbStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  undefined8 uStack_150;
  byte *pbStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 *puStack_120;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  uStack_328 = pdb_140f3c9d0();
  uStack_320 = param_2;
  pdb_140caef60(&uStack_2d8);
  if (CONCAT44(iStack_2d4,uStack_2d8) != -0x7ffffffffffffffc) {
    lVar7 = 4;
    if (iStack_2d4 < 0) {
      lVar7 = CONCAT44(iStack_2d4,uStack_2d8);
    }
                    /* WARNING: Could not recover jumptable at 0x0001402b0e3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar9 = (*(code *)(&UNK_142e67c80 + *(int *)(&UNK_142e67c80 + lVar7 * 4)))();
    return uVar9;
  }
  if (2 < *_DAT_143ca8e90) {
    uStack_39 = 1;
    pbStack_490 = (byte *)pdb_140f3cb70(&uStack_328);
    uStack_278 = &pbStack_490;
    uStack_270 = pdb_140f72840;
    uStack_178 = (char *)0x0;
    uStack_170 = 0x42e67538;
    uStack_16c = 1;
    uStack_168 = 0x21;
    uStack_164 = 0;
    uStack_160 = 0;
    uStack_15c = 0;
    uStack_158 = &UNK_142e67509;
    uStack_150 = 0x2e;
    pbStack_148 = (byte *)0x3;
    puStack_140 = &UNK_142e67538;
    uStack_138 = 0x21;
    uStack_130 = 0x2e00000001;
    puStack_128 = &UNK_142e6760f;
    puStack_120 = &uStack_278;
    uStack_39 = 1;
    uStack_488 = param_2;
    pdb_140f332f0(&uStack_3b,&uStack_178);
  }
  pbStack_490 = (byte *)0x0;
  uStack_480 = 0x100;
  LOCK();
  cVar6 = *_DAT_143ca3878;
  *_DAT_143ca3878 = '\x01';
  UNLOCK();
  if (cVar6 == '\0') {
    pdb_14010b300(&uStack_178,&pbStack_490);
    pbVar8 = pbStack_148;
    uVar10 = uStack_170;
    uVar9 = uStack_178;
    uStack_278 = (byte **)CONCAT44(uStack_168,uStack_16c);
    uStack_270 = (code *)CONCAT44(uStack_160,uStack_164);
    uStack_268 = uStack_15c;
    uStack_264 = (undefined4)uStack_158;
    uStack_260 = uStack_158._4_4_;
    uStack_25c = (undefined4)uStack_150;
    puStack_258 = (undefined *)CONCAT44(puStack_258._4_4_,uStack_150._4_4_);
    pbStack_188 = pbStack_490;
    if (pbStack_490 != (byte *)0x0) {
      puStack_180 = (undefined8 *)CONCAT44(uStack_484,uStack_488);
      if ((code *)*puStack_180 != (code *)0x0) {
        (*(code *)*puStack_180)(pbStack_490);
      }
      if (puStack_180[1] != 0) {
        pub_1406abac0(pbStack_188,puStack_180[1],puStack_180[2]);
      }
    }
    if ((int)uVar9 != 3) {
      uStack_360 = uVar9;
      uStack_358 = uVar10;
      uStack_354 = (undefined4)uStack_278;
      uStack_350 = uStack_278._4_4_;
      uStack_34c = (undefined4)uStack_270;
      uStack_348 = uStack_270._4_4_;
      uStack_344 = uStack_268;
      uStack_340 = uStack_264;
      uStack_33c = uStack_260;
      uStack_338 = uStack_25c;
      uStack_334 = puStack_258._0_4_;
      pbStack_330 = pbVar8;
      pdb_14007ee60();
      pbVar8 = pub_1406abab0(0xc,1);
      if (pbVar8 == (byte *)0x0) {
        uStack_3a = 1;
        pdb_142dc7e2a(1,0xc);
      }
      else {
        pbVar8[0] = 0x77;
        pbVar8[1] = 0x69;
        pbVar8[2] = 0x6e;
        pbVar8[3] = 0x69;
        pbVar8[4] = 0x74;
        pbVar8[5] = 0x20;
        pbVar8[6] = 0x77;
        pbVar8[7] = 0x69;
        pbVar8[8] = 0x6e;
        pbVar8[9] = 100;
        pbVar8[10] = 0x6f;
        pbVar8[0xb] = 0x77;
        uStack_238 = 2;
        uStack_220 = 2;
        uStack_208 = 2;
        uStack_1f0 = 2;
        uStack_1a0 = 7;
        uStack_250 = 0xc;
        uStack_240 = 0xc;
        uStack_1a8 = 0;
        uStack_194 = 0x102;
        uStack_1d8 = 2;
        uStack_19c = 0x100010000010001;
        uStack_1c0 = 0xf;
        uStack_278 = (byte **)0x0;
        pbStack_248 = pbVar8;
        pdb_14073f420(&uStack_3a8);
        pub_142e32760(&uStack_178,&uStack_278,0xe8);
        uStack_90 = uStack_3a8;
        uStack_8c = uStack_3a4;
        uStack_88 = uStack_3a0;
        uStack_84 = uStack_39c;
        uStack_80 = uStack_398;
        uStack_7c = uStack_394;
        uStack_78 = uStack_390;
        uStack_74 = uStack_38c;
        uStack_70 = uStack_388;
        uStack_6c = uStack_384;
        uStack_68 = uStack_380;
        uStack_64 = uStack_37c;
        uStack_60 = uStack_378;
        uStack_5c = uStack_374;
        uStack_58 = uStack_370;
        uStack_54 = uStack_36c;
        uStack_50 = uStack_368;
        pdb_14007ee60();
        pbVar8 = pub_1406abab0(0x23,1);
        uVar9 = _UNK_142e67668;
        if (pbVar8 != (byte *)0x0) {
          *(undefined8 *)(pbVar8 + 0x10) = _DAT_142e67660;
          *(undefined8 *)(pbVar8 + 0x18) = uVar9;
          uVar9 = _UNK_142e67658;
          *(undefined8 *)pbVar8 = _DAT_142e67650;
          *(undefined8 *)(pbVar8 + 8) = uVar9;
          pbVar8[0x1f] = 0x70;
          pbVar8[0x20] = 0x6f;
          pbVar8[0x21] = 0x72;
          pbVar8[0x22] = 0x74;
          if (uStack_150 != 0) {
            pub_1406abac0(pbStack_148,uStack_150,1);
          }
          uStack_150 = 0x23;
          puStack_140 = (undefined *)0x23;
          uStack_240 = 0x23;
          puStack_258 = uStack_158;
          uStack_250 = 0x23;
          uStack_268 = uStack_168;
          uStack_264 = uStack_164;
          uStack_260 = uStack_160;
          uStack_25c = uStack_15c;
          uStack_278 = (byte **)uStack_178;
          uStack_270 = (code *)CONCAT44(uStack_16c,uStack_170);
          pbStack_248 = pbVar8;
          pbStack_148 = pbVar8;
          pub_142e32760(&pbStack_490,(longlong)&uStack_130 + 4,0xe4);
          bVar11 = CONCAT44(iStack_2d4,uStack_2d8) == -0x7ffffffffffffffc;
          uStack_234 = 1000;
          if (bVar11) {
            uStack_234 = 500;
          }
          uStack_230 = 800;
          if (bVar11) {
            uStack_230 = 300;
          }
          uStack_238 = 0;
          pub_142e32760(auStack_22c,&pbStack_490,0x9c);
          uStack_138 = uStack_3b4;
          uStack_168 = uStack_3e4;
          uStack_164 = uStack_3e0;
          uStack_160 = uStack_3dc;
          uStack_15c = uStack_3d8;
          uStack_170 = uStack_3ec;
          uStack_16c = uStack_3e8;
          uStack_3a = 1;
          pdb_140351130(&uStack_3a8,&uStack_278,&uStack_178,&uStack_350);
          if ((char)uStack_3a8 != '\0') {
            uStack_268 = uStack_390;
            uStack_264 = uStack_38c;
            uStack_260 = uStack_388;
            uStack_25c = uStack_384;
            uStack_168 = uStack_390;
            uStack_164 = uStack_38c;
            uStack_160 = uStack_388;
            uStack_15c = uStack_384;
            uStack_170 = uStack_398;
            uStack_16c = uStack_394;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_142e67673,6,&uStack_178,&UNK_142e67780,&UNK_142e67680);
          }
          uStack_2e8 = uStack_390;
          uStack_2e4 = uStack_38c;
          uStack_2e0 = uStack_388;
          uStack_2dc = uStack_384;
          uStack_2f8 = uStack_3a0;
          uStack_2f4 = uStack_39c;
          uStack_2f0 = uStack_398;
          uStack_2ec = uStack_394;
          lVar7 = CONCAT44(uStack_39c,uStack_3a0);
          pcVar1 = (char *)(lVar7 + 0x10);
          LOCK();
          bVar11 = *(char *)(lVar7 + 0x10) == '\0';
          if (bVar11) {
            *(char *)(lVar7 + 0x10) = '\x01';
          }
          UNLOCK();
          if (!bVar11) {
            pdb_142dc6be0(pcVar1);
          }
          puVar4 = _DAT_143ca8f38;
          if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
            bVar5 = 0;
            cVar6 = *(char *)(lVar7 + 0x11);
          }
          else {
            bVar5 = pdb_142dc79e0();
            bVar5 = bVar5 ^ 1;
            cVar6 = *(char *)(lVar7 + 0x11);
          }
          if (cVar6 != '\0') {
            uVar3 = (uint)uStack_170 >> 8;
            uStack_170 = CONCAT31((int3)uVar3,bVar5);
            uStack_178 = pcVar1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_142e677c0,0x2b,&uStack_178,&UNK_142e677a0,&UNK_142e678e8);
          }
          *(undefined1 *)(lVar7 + 0xe4) = 1;
          if (((bVar5 == 0) && ((*puVar4 & 0x7fffffffffffffff) != 0)) &&
             (cVar6 = pdb_142dc79e0(), cVar6 == '\0')) {
            *(undefined1 *)(lVar7 + 0x11) = 1;
          }
          LOCK();
          cVar6 = *pcVar1;
          *pcVar1 = '\0';
          UNLOCK();
          if (cVar6 == '\x02') {
            pdb_142dc6ca0(pcVar1);
          }
          RedrawWindow(CONCAT44(uStack_2ec,uStack_2f0),0,0,2);
          uStack_268 = uStack_2e8;
          uStack_264 = uStack_2e4;
          uStack_260 = uStack_2e0;
          uStack_25c = uStack_2dc;
          uStack_278 = (byte **)CONCAT44(uStack_2f4,uStack_2f8);
          uStack_270 = (code *)CONCAT44(uStack_2ec,uStack_2f0);
          uStack_158 = (undefined *)CONCAT44(uStack_2e4,uStack_2e8);
          uStack_150 = CONCAT44(uStack_2dc,uStack_2e0);
          uStack_168 = uStack_2f8;
          uStack_164 = uStack_2f4;
          uStack_160 = uStack_2f0;
          uStack_15c = uStack_2ec;
          uStack_178 = (char *)0x1;
          uStack_170 = 1;
          uStack_16c = 0;
          pdb_14007ee60();
          pbVar8 = pub_1406abab0(0x30,8);
          if (pbVar8 != (byte *)0x0) {
            *(undefined **)(pbVar8 + 0x20) = uStack_158;
            *(ulonglong *)(pbVar8 + 0x28) = uStack_150;
            *(ulonglong *)(pbVar8 + 0x10) = CONCAT44(uStack_164,uStack_168);
            *(ulonglong *)(pbVar8 + 0x18) = CONCAT44(uStack_15c,uStack_160);
            *(char **)pbVar8 = uStack_178;
            *(ulonglong *)(pbVar8 + 8) = CONCAT44(uStack_16c,uStack_170);
            uStack_138 = uStack_298;
            uStack_168 = uStack_2c8;
            uStack_164 = uStack_2c4;
            uStack_160 = uStack_2c0;
            uStack_15c = uStack_2bc;
            uStack_170 = uStack_2d0;
            uStack_16c = uStack_2cc;
            uStack_3a = 0;
            uVar9 = pdb_1406c1920(&uStack_360,pbVar8,&uStack_178);
            uStack_39 = 0;
            pdb_1404cbae0(&uStack_360);
            return uVar9;
          }
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x30);
        }
        pdb_142dc7e2a(1,0x23);
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  else {
    uVar10 = 3;
  }
  uStack_178 = (char *)CONCAT44((undefined4)uStack_278,uVar10);
  uStack_170 = uStack_278._4_4_;
  uStack_16c = (undefined4)uStack_270;
  uStack_168 = uStack_270._4_4_;
  uStack_164 = uStack_268;
  uStack_160 = uStack_264;
  uStack_15c = uStack_260;
  uStack_158 = (undefined *)CONCAT44(puStack_258._0_4_,uStack_25c);
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_142e677c0,0x2b,&uStack_178,&UNK_142e677f0,&UNK_142e67638);
}

