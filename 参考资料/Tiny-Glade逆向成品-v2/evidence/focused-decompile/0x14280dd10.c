// Matched PDB: system_roof::create_roof::create_roof
// VA 0x14280dd10, PDB extent 1995 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB: system_roof::create_roof::create_roof
   Extent: 1995 bytes. No whole-program auto-analysis. */

void pdb_14280dd10(undefined8 *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,undefined8 param_6)

{
  undefined4 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  char cVar10;
  char cVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined8 uStack_378;
  undefined2 uStack_370;
  undefined2 uStack_36e;
  undefined2 uStack_36c;
  undefined2 uStack_36a;
  undefined2 uStack_368;
  undefined2 uStack_366;
  undefined2 uStack_364;
  undefined2 uStack_362;
  undefined2 uStack_360;
  undefined2 uStack_35e;
  undefined4 uStack_35c;
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
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 uStack_2b8;
  longlong lStack_2b0;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined8 uStack_1dc;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  undefined8 uStack_1b0;
  uint uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 uStack_188;
  longlong lStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  longlong lStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  longlong lStack_110;
  ulonglong *puStack_108;
  undefined8 uStack_100;
  undefined4 *puStack_f8;
  undefined4 *puStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  undefined4 *puStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  undefined8 uStack_b0;
  longlong lStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined1 uStack_93;
  undefined1 uStack_92;
  undefined1 uStack_91;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  puStack_108 = (ulonglong *)*param_1;
  lVar2 = param_1[1];
  uVar3 = *puStack_108;
  uVar19 = 0;
  uVar13 = uVar3 - *(ulonglong *)(lVar2 + 0x18);
  if (uVar3 < *(ulonglong *)(lVar2 + 0x18)) {
    uVar13 = uVar19;
  }
  uVar20 = uVar3 - *(ulonglong *)(lVar2 + 0x38);
  if (uVar3 < *(ulonglong *)(lVar2 + 0x38)) {
    uVar20 = uVar19;
  }
  lStack_b8 = uVar13 * 0x40 + *(longlong *)(lVar2 + 8);
  uVar3 = *(ulonglong *)(lVar2 + 0x10) - uVar13;
  if (*(ulonglong *)(lVar2 + 0x10) < uVar13) {
    lStack_b8 = 8;
    uVar3 = uVar19;
  }
  lVar14 = uVar20 * 0x40 + *(longlong *)(lVar2 + 0x28);
  uVar13 = *(ulonglong *)(lVar2 + 0x30) - uVar20;
  if (*(ulonglong *)(lVar2 + 0x30) < uVar20) {
    lVar14 = 8;
    uVar13 = uVar19;
  }
  *puStack_108 = (*(longlong *)(lVar2 + 0x40) - uVar13) - uVar3;
  uVar7 = _UNK_142e4e658;
  uVar6 = _DAT_142e4e650;
  lStack_e8 = uVar3 * 0x40 + lStack_b8;
  lStack_e0 = uVar13 * 0x40 + lVar14;
  uStack_100 = *param_2;
  uStack_98 = *(undefined4 *)((longlong)param_4 + 0x1c);
  lStack_a8 = *param_4;
  puStack_d8 = (undefined4 *)param_4[2];
  uStack_a0 = *(undefined4 *)((longlong)param_5 + 0x1c);
  lStack_c0 = *param_5;
  puStack_f8 = (undefined4 *)param_5[2];
  uStack_9c = *(undefined4 *)((longlong)param_3 + 0x1c);
  lVar2 = *param_3;
  puStack_f0 = (undefined4 *)param_3[2];
  lStack_c8 = lStack_a8 + 0x20;
  lStack_d0 = lStack_c0 + 0x20;
  while( true ) {
    uVar8 = uStack_100;
    if ((lStack_b8 == 0) || (lStack_b8 == lStack_e8)) {
      if ((lVar14 == 0) || (lVar14 == lStack_e0)) {
        return;
      }
      lVar17 = lVar14 + 0x40;
      lStack_b8 = 0;
      lVar18 = lVar14;
    }
    else {
      lVar18 = lStack_b8;
      lVar17 = lVar14;
      lStack_b8 = lStack_b8 + 0x40;
    }
    *puStack_108 = *puStack_108 + 1;
    lVar14 = *(longlong *)(lVar18 + 8);
    lVar15 = pdb_140b54f80(uStack_100,lVar14,&UNK_14359c498);
    if (lVar15 == 0) goto LAB_14280e3cb;
    lVar16 = pdb_140b54f80(uVar8,lVar14,&UNK_14359c4c8);
    if (lVar16 == 0) goto LAB_14280e3d7;
    if (1 < *(uint *)(lVar16 + 600)) break;
    uStack_188 = *(undefined8 *)(lVar16 + 0x26c);
    uStack_198 = *(undefined4 *)(lVar16 + 0x25c);
    uStack_194 = *(undefined4 *)(lVar16 + 0x260);
    uStack_190 = *(undefined4 *)(lVar16 + 0x264);
    uStack_18c = *(undefined4 *)(lVar16 + 0x268);
    uStack_93 = *(undefined1 *)(lVar16 + 0x29f);
    uVar9 = *(undefined1 *)(lVar16 + 0x2a3);
    uStack_19c = *(uint *)(lVar16 + 600);
    lStack_110 = lVar17;
    uStack_92 = uVar9;
    uVar21 = pdb_140930390(lVar15);
    uStack_1f8 = *(undefined8 *)(lVar18 + 0x20);
    uStack_1f0 = *(undefined8 *)(lVar18 + 0x28);
    uStack_1e8 = *(undefined8 *)(lVar18 + 0x30);
    uStack_1e0 = *(undefined4 *)(lVar18 + 0x38);
    uVar23 = *(undefined4 *)(lVar18 + 0x10);
    uVar9 = pdb_140c33110(&uStack_93,uVar9);
    uStack_178 = *(undefined4 *)(lVar18 + 0x1c);
    lStack_180 = *(longlong *)(lVar18 + 0x14);
    uStack_368 = (undefined2)uStack_18c;
    uStack_366 = (undefined2)((uint)uStack_18c >> 0x10);
    uStack_364 = (undefined2)uStack_188;
    uStack_362 = (undefined2)((ulonglong)uStack_188 >> 0x10);
    uStack_360 = (undefined2)((ulonglong)uStack_188 >> 0x20);
    uStack_35e = (undefined2)((ulonglong)uStack_188 >> 0x30);
    uStack_378 = CONCAT44(uStack_198,uStack_19c);
    uStack_370 = (undefined2)uStack_194;
    uStack_36e = (undefined2)((uint)uStack_194 >> 0x10);
    uStack_36c = (undefined2)uStack_190;
    uStack_36a = (undefined2)((uint)uStack_190 >> 0x10);
    lVar17 = lVar14;
    pdb_140b779a0(&uStack_250,lVar14,&uStack_1f8,&uStack_378,uVar21,uVar23,uVar9,&lStack_180);
    cVar10 = pdb_140b77990(&uStack_250);
    cVar11 = pdb_140b77b60(&uStack_250);
    uVar8 = uStack_250;
    if (cVar11 != '\0') {
      *puStack_d8 = uStack_98;
      lVar17 = *(longlong *)(lStack_a8 + 0x30);
      uVar4 = *(undefined8 *)(lStack_a8 + 0x40);
      if (lVar17 == *(longlong *)(lStack_a8 + 0x20)) {
        pdb_142d7e980(lStack_c8);
      }
      lVar18 = *(longlong *)(lStack_a8 + 0x28);
      *(undefined8 *)(lVar18 + lVar17 * 0x10) = uVar4;
      *(undefined8 *)(lVar18 + 8 + lVar17 * 0x10) = uVar8;
      *(longlong *)(lStack_a8 + 0x30) = lVar17 + 1;
      *(longlong *)(lStack_a8 + 0x40) = *(longlong *)(lStack_a8 + 0x40) + 1;
      lVar17 = lStack_a8;
    }
    uVar23 = uVar21;
    pdb_1409e1370(&uStack_128);
    pdb_140a00e70(&lStack_180);
    uVar22 = pdb_140a007d0();
    uStack_138 = pdb_14007fac0();
    lStack_130 = lVar17;
    uStack_b0 = uStack_138;
    uVar12 = pdb_1409012c0(0);
    pdb_1408fd550(&uStack_1c8,uVar12);
    uStack_1e0 = 0;
    uStack_1e8 = 0;
    pdb_14007ee60();
    uStack_1b8 = 7;
    uStack_1f8 = uVar6;
    uStack_1f0 = uVar7;
    uStack_1d4 = _DAT_14359c93c;
    uStack_1dc = _DAT_14359c934;
    uVar8 = uStack_1dc;
    uStack_2e0 = uStack_200;
    uStack_2f0 = uStack_210;
    uStack_2e8 = uStack_208;
    uStack_300 = uStack_220;
    uStack_2f8 = uStack_218;
    uStack_310 = uStack_230;
    uStack_308 = uStack_228;
    uStack_320 = uStack_240;
    uStack_318 = uStack_238;
    uStack_330 = uStack_250;
    uStack_328 = uStack_248;
    uStack_2d8 = CONCAT44(uStack_124,uStack_128);
    uStack_2d0 = uStack_120;
    uStack_2c8 = uStack_118;
    uStack_378 = lStack_180;
    uStack_370 = (undefined2)uStack_178;
    uStack_36e = (undefined2)((uint)uStack_178 >> 0x10);
    uStack_36c = (undefined2)uStack_174;
    uStack_36a = (undefined2)((uint)uStack_174 >> 0x10);
    uStack_368 = (undefined2)uStack_170;
    uStack_366 = (undefined2)((ulonglong)uStack_170 >> 0x10);
    uStack_364 = (undefined2)((ulonglong)uStack_170 >> 0x20);
    uStack_362 = (undefined2)((ulonglong)uStack_170 >> 0x30);
    uStack_360 = (undefined2)uStack_168;
    uStack_35e = (undefined2)((ulonglong)uStack_168 >> 0x10);
    uStack_35c = (undefined4)((ulonglong)uStack_168 >> 0x20);
    uStack_358 = uStack_160;
    uStack_350 = uStack_158;
    uStack_348 = uStack_150;
    uStack_340 = uStack_148;
    uStack_338 = uStack_140;
    uStack_2b8 = uStack_b0;
    uStack_268 = CONCAT71(uStack_1b7,7);
    uStack_260 = uStack_1b0;
    uStack_1f8._0_4_ = (undefined4)uVar6;
    uStack_1f8._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
    uStack_1f0._0_4_ = (undefined4)uVar7;
    uStack_1f0._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
    uStack_1dc._0_4_ = (undefined4)_DAT_14359c934;
    uStack_1dc._4_4_ = (undefined4)((ulonglong)_DAT_14359c934 >> 0x20);
    uStack_278 = uStack_1c8;
    uStack_274 = uStack_1c4;
    uStack_270 = uStack_1c0;
    uStack_26c = uStack_1bc;
    uStack_288 = uStack_1dc._4_4_;
    uStack_284 = _DAT_14359c93c;
    uStack_280 = uStack_1d0;
    uStack_27c = uStack_1cc;
    uStack_298 = (undefined4)uStack_1e8;
    uStack_294 = uStack_1e8._4_4_;
    uStack_290 = uStack_1e0;
    uStack_28c = (undefined4)uStack_1dc;
    uStack_2a8 = (undefined4)uStack_1f8;
    uStack_2a4 = uStack_1f8._4_4_;
    uStack_2a0 = (undefined4)uStack_1f0;
    uStack_29c = uStack_1f0._4_4_;
    uVar12 = (undefined4)uStack_1e8;
    uStack_2c0 = uVar22;
    uStack_2bc = uVar23;
    lStack_2b0 = lVar17;
    uStack_1f8 = uVar6;
    uStack_1f0 = uVar7;
    uStack_1dc = uVar8;
    pdb_140fc6af0(&uStack_1f8,param_6,&uStack_378,&UNK_14359c4f8);
    uVar8 = uStack_1f8;
    if (cVar10 == '\0') {
      uStack_91 = pdb_1408ff990(&uStack_92);
      uVar9 = 6;
    }
    else {
      uVar9 = 0;
    }
    uStack_128 = pdb_140a85110(&uStack_19c);
    uStack_124 = uVar12;
    pdb_140df4540(&lStack_180,&uStack_128,uVar21);
    uStack_362 = (undefined2)uStack_178;
    uStack_360 = (undefined2)((uint)uStack_178 >> 0x10);
    uStack_36a = (undefined2)lStack_180;
    uStack_368 = (undefined2)((ulonglong)lStack_180 >> 0x10);
    uStack_366 = (undefined2)((ulonglong)lStack_180 >> 0x20);
    uStack_364 = (undefined2)((ulonglong)lStack_180 >> 0x30);
    *puStack_f8 = uStack_a0;
    lVar17 = *(longlong *)(lStack_c0 + 0x30);
    uVar4 = *(undefined8 *)(lStack_c0 + 0x40);
    if (lVar17 == *(longlong *)(lStack_c0 + 0x20)) {
      pdb_142d7ede0(lStack_d0);
    }
    lVar18 = *(longlong *)(lStack_c0 + 0x28);
    *(undefined8 *)(lVar18 + lVar17 * 0x28) = uVar4;
    *(undefined1 *)(lVar18 + 8 + lVar17 * 0x28) = uVar9;
    *(undefined1 *)(lVar18 + 9 + lVar17 * 0x28) = uStack_91;
    puVar1 = (undefined4 *)(lVar18 + 0x14 + lVar17 * 0x28);
    *puVar1 = CONCAT22(uStack_36c,uStack_36e);
    puVar1[1] = CONCAT22(uStack_368,uStack_36a);
    puVar1[2] = CONCAT22(uStack_364,uStack_366);
    puVar1[3] = CONCAT22(uStack_360,uStack_362);
    puVar1 = (undefined4 *)(lVar18 + 10 + lVar17 * 0x28);
    *puVar1 = (undefined4)uStack_378;
    puVar1[1] = uStack_378._4_4_;
    puVar1[2] = CONCAT22(uStack_36e,uStack_370);
    puVar1[3] = CONCAT22(uStack_36a,uStack_36c);
    *(longlong *)(lStack_c0 + 0x30) = lVar17 + 1;
    *(longlong *)(lStack_c0 + 0x40) = *(longlong *)(lStack_c0 + 0x40) + 1;
    *puStack_f0 = uStack_9c;
    lVar17 = *(longlong *)(lVar2 + 0x30);
    uVar4 = *(undefined8 *)(lVar2 + 0x40);
    if (lVar17 == *(longlong *)(lVar2 + 0x20)) {
      pdb_142d7e6e0(lVar2 + 0x20);
    }
    lVar18 = *(longlong *)(lVar2 + 0x28);
    lVar15 = lVar17 * 0x20;
    *(undefined8 *)(lVar18 + lVar15) = uVar4;
    *(undefined8 *)(lVar18 + 8 + lVar15) = uVar8;
    *(longlong *)(lVar18 + 0x10 + lVar15) = lVar14;
    *(undefined1 *)(lVar18 + 0x18 + lVar15) = 0;
    *(longlong *)(lVar2 + 0x30) = lVar17 + 1;
    *(longlong *)(lVar2 + 0x40) = *(longlong *)(lVar2 + 0x40) + 1;
    lVar14 = lStack_110;
  }
  uStack_378 = lVar16 + 600;
  uStack_370 = 0xe4e0;
  uStack_36e = 0x4280;
  uStack_36c = 1;
  uStack_36a = 0;
  pdb_142dc83d0(&UNK_14359c510,&uStack_378,&UNK_14359c560);
LAB_14280e3cb:
  pdb_142dc8150(&UNK_14359c4b0);
LAB_14280e3d7:
  pdb_142dc8150(&UNK_14359c4e0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

