// VA 0x1409ad100, PDB extent 3779 bytes
// country_core::systems::render_loop::compute_passes::generate_hzb::generate_hzb
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/generate_hzb.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::generate_hzb::generate_hzb
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/generate_hzb.rs
   Extent: 3779 */

void pdb_1409ad100(ulonglong *param_1,longlong param_2,ulonglong param_3,byte param_4,char param_5)

{
  undefined4 uVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  char cVar7;
  undefined2 uVar8;
  char cVar9;
  ushort uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  byte bVar17;
  undefined1 uVar18;
  byte bVar19;
  longlong lVar20;
  int iVar21;
  byte bVar22;
  ushort uVar23;
  ulonglong uVar24;
  uint uVar25;
  uint uVar26;
  ulonglong uVar27;
  undefined1 uVar28;
  longlong lVar29;
  ushort uVar30;
  ushort uVar31;
  ushort uVar33;
  undefined1 auVar32 [16];
  uint uStack_5bc;
  uint uStack_5b8;
  int iStack_5b4;
  uint uStack_5b0;
  undefined4 uStack_59c;
  ulonglong uStack_590;
  int iStack_55c;
  int iStack_558;
  int iStack_554;
  int iStack_550;
  int iStack_54c;
  int iStack_548;
  int iStack_544;
  int iStack_540;
  int iStack_53c;
  undefined8 uStack_538;
  ulonglong uStack_530;
  undefined4 uStack_528;
  char cStack_524;
  undefined1 uStack_523;
  undefined8 uStack_520;
  undefined4 uStack_518;
  undefined2 uStack_514;
  undefined2 uStack_512;
  undefined6 uStack_510;
  ulonglong uStack_508;
  undefined4 uStack_500;
  ulonglong uStack_4f8;
  undefined4 uStack_4f0;
  ulonglong uStack_4e8;
  undefined4 uStack_4e0;
  ulonglong uStack_4d8;
  undefined4 uStack_4d0;
  ulonglong uStack_4c8;
  undefined4 uStack_4c0;
  ulonglong uStack_4b8;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined1 uStack_4a8;
  undefined8 uStack_4a4;
  undefined4 uStack_49c;
  undefined8 uStack_498;
  byte bStack_490;
  undefined1 uStack_48f;
  byte bStack_48e;
  undefined1 uStack_48d;
  undefined1 uStack_48c;
  undefined1 uStack_48b;
  undefined1 uStack_48a;
  undefined1 uStack_489;
  byte bStack_488;
  undefined1 uStack_487;
  undefined1 uStack_486;
  undefined1 uStack_485;
  char cStack_484;
  undefined1 uStack_483;
  undefined2 uStack_482;
  undefined8 uStack_480;
  uint uStack_478;
  undefined8 uStack_474;
  undefined4 uStack_46c;
  char cStack_468;
  undefined1 uStack_467;
  int iStack_464;
  uint uStack_460;
  ulonglong uStack_45c;
  undefined4 uStack_454;
  char cStack_450;
  undefined1 uStack_44f;
  int iStack_44c;
  uint uStack_448;
  ulonglong uStack_444;
  undefined4 uStack_43c;
  char cStack_438;
  undefined1 uStack_437;
  int iStack_434;
  uint uStack_430;
  ulonglong uStack_42c;
  undefined4 uStack_424;
  char cStack_420;
  undefined1 uStack_41f;
  int iStack_41c;
  uint uStack_418;
  ulonglong uStack_414;
  undefined4 uStack_40c;
  char cStack_408;
  undefined1 uStack_407;
  int iStack_404;
  uint uStack_400;
  ulonglong uStack_3fc;
  undefined4 uStack_3f4;
  char cStack_3f0;
  undefined1 uStack_3ef;
  uint uStack_3ec;
  uint uStack_3e8;
  ulonglong uStack_3e4;
  undefined4 uStack_3dc;
  char cStack_3d8;
  undefined1 uStack_3d7;
  uint uStack_3d4;
  uint uStack_3d0;
  ulonglong uStack_3cc;
  undefined4 uStack_3c4;
  char cStack_3c0;
  undefined1 uStack_3bf;
  undefined4 uStack_3bc;
  uint uStack_3b8;
  ulonglong uStack_3b4;
  undefined4 uStack_3ac;
  char cStack_3a8;
  undefined1 uStack_3a7;
  int iStack_3a4;
  uint uStack_3a0;
  ulonglong uStack_39c;
  undefined4 uStack_394;
  char cStack_390;
  undefined1 uStack_38f;
  int iStack_38c;
  uint uStack_388;
  ulonglong uStack_384;
  undefined4 uStack_37c;
  char cStack_378;
  undefined1 uStack_377;
  int iStack_374;
  uint uStack_370;
  ulonglong uStack_36c;
  undefined4 uStack_364;
  char cStack_360;
  undefined1 uStack_35f;
  longlong lStack_358;
  ulonglong *puStack_350;
  ulonglong uStack_348;
  ulonglong uStack_340;
  ulonglong uStack_338;
  ulonglong uStack_330;
  ulonglong uStack_328;
  ulonglong uStack_320;
  ulonglong uStack_318;
  ulonglong uStack_310;
  ulonglong uStack_308;
  ulonglong uStack_300;
  ulonglong uStack_2f8;
  longlong lStack_2f0;
  undefined8 *puStack_2e8;
  ulonglong uStack_2e0;
  undefined4 uStack_2d8;
  int iStack_2c8;
  uint uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  uint uStack_2b8;
  uint uStack_2b4;
  longlong lStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 *puStack_248;
  undefined8 *puStack_240;
  undefined4 *puStack_238;
  uint uStack_230;
  char cStack_22c;
  char cStack_22b;
  undefined8 uStack_228;
  longlong alStack_220 [4];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
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
  ulonglong uStack_188;
  undefined4 uStack_180;
  ulonglong uStack_100;
  undefined4 uStack_f8;
  
  iStack_5b4 = CONCAT31(iStack_5b4._1_3_,param_4);
  lVar29 = *(longlong *)(param_2 + 0x130);
  if (lVar29 == *(longlong *)(param_2 + 0x120)) {
    pdb_142d8afd0(param_2 + 0x120);
  }
  lVar20 = *(longlong *)(param_2 + 0x128);
  uVar18 = 0x26;
  *(undefined **)(lVar20 + lVar29 * 0x10) = &UNK_143029526;
  *(undefined8 *)(lVar20 + 8 + lVar29 * 0x10) = 0xc;
  *(longlong *)(param_2 + 0x130) = lVar29 + 1;
  uVar11 = pdb_140e25e40(0x18);
  uStack_498 = CONCAT62(uStack_498._2_6_,1);
  uStack_498 = CONCAT44(uVar11,(undefined4)uStack_498);
  bStack_488 = 0x32;
  uStack_487 = 0x95;
  uStack_486 = 2;
  uStack_485 = 0x43;
  cStack_484 = 1;
  uStack_483 = 0;
  uStack_482 = 0;
  uStack_480 = 10;
  bStack_490 = uVar18;
  uStack_49c = pdb_140e2b4e0(param_2,&uStack_498);
  uStack_4a4 = 0xffffffff00000000;
  uStack_4ac = uVar11;
  uStack_4a8 = uVar18;
  pdb_140e29980(param_2,&uStack_4ac);
  uStack_5bc = *(uint *)(param_3 + 8);
  uVar3 = (ushort)(uStack_5bc >> 0x10);
  uVar30 = (ushort)uStack_5bc >> 1;
  uVar24 = 1;
  uVar27 = 1;
  if (3 < (ushort)uStack_5bc) {
    uVar10 = uVar30 - 1;
    sVar2 = 0xf;
    if (uVar10 != 0) {
      for (; uVar10 >> sVar2 == 0; sVar2 = sVar2 + -1) {
      }
    }
    uVar27 = (ulonglong)((0xffffU >> (((byte)sVar2 ^ 0xf) & 0x1f)) + 1);
  }
  if (3 < uVar3) {
    uVar10 = (uVar3 >> 1) - 1;
    sVar2 = 0xf;
    if (uVar10 != 0) {
      for (; uVar10 >> sVar2 == 0; sVar2 = sVar2 + -1) {
      }
    }
    uVar24 = (ulonglong)((0xffffU >> (((byte)sVar2 ^ 0xf) & 0x1f)) + 1);
  }
  uVar18 = 0x4c;
  if (param_5 != '\0') {
    uVar18 = 0x46;
  }
  uVar10 = *(ushort *)(param_3 + 0xe);
  uVar31 = (ushort)uVar27;
  if ((*(byte *)(param_3 + 0x13) < 7) && ((0x4aU >> (*(byte *)(param_3 + 0x13) & 0x1f) & 1) != 0)) {
    uVar25 = (int)uVar24 << 0x10 | (uint)uVar27 & 0xffff;
    uVar28 = 3;
    uVar33 = uVar10;
  }
  else {
    uVar25 = (uint)uVar27 & 0xffff | (int)uVar24 << 0x10;
    uVar28 = 2;
    uVar33 = 1;
  }
  cVar9 = (param_5 != '\0') * '\x05' + '\t';
  sVar2 = 0xf;
  if (uVar31 != 0) {
    for (; uVar31 >> sVar2 == 0; sVar2 = sVar2 + -1) {
    }
  }
  bVar19 = 0x10 - ((byte)sVar2 ^ 0xf);
  sVar2 = 0xf;
  uVar23 = (ushort)uVar24;
  if (uVar23 != 0) {
    for (; uVar23 >> sVar2 == 0; sVar2 = sVar2 + -1) {
    }
  }
  bVar17 = 0x10 - ((byte)sVar2 ^ 0xf);
  if (bVar19 < bVar17) {
    bVar19 = bVar17;
  }
  bVar17 = 0xd;
  if (bVar19 < 0xd) {
    bVar17 = bVar19;
  }
  uStack_498 = CONCAT26(1,(uint6)uVar25 << 0x10);
  bStack_490 = (byte)uVar33;
  bVar19 = bStack_490;
  uStack_48f = (undefined1)(uVar33 >> 8);
  uVar5 = uStack_48f;
  uStack_48c = 1;
  uStack_48a = 0;
  bStack_488 = 0x3c;
  uStack_487 = 0x95;
  uStack_486 = 2;
  uStack_485 = 0x43;
  cStack_484 = 1;
  uStack_483 = 0;
  uStack_482 = 0;
  uStack_480 = 3;
  bStack_48e = bVar17;
  uStack_48d = uVar18;
  uStack_48b = uVar28;
  lStack_358 = param_2 + 0x120;
  puStack_350 = param_1;
  uStack_5b0 = pdb_140e2b4e0(param_2,&uStack_498);
  bStack_490 = (byte)uVar25;
  uStack_48f = (undefined1)(uVar25 >> 8);
  bStack_48e = (byte)(uVar25 >> 0x10);
  uStack_48d = (undefined1)(uVar25 >> 0x18);
  uStack_48c = 1;
  uStack_48b = 0;
  uStack_486 = 1;
  cStack_484 = '\0';
  uStack_498 = (ulonglong)uStack_5b0 << 0x20;
  uStack_48a = bVar19;
  uStack_489 = uVar5;
  bStack_488 = bVar17;
  uStack_487 = uVar18;
  uStack_485 = uVar28;
  if (*(char *)(param_2 + 0x24c) == '\x01') {
    pdb_140e19620(&uStack_498,param_2);
    uStack_59c = (undefined4)uStack_498;
    uStack_5b0 = uStack_498._4_4_;
    uVar18 = uStack_483;
  }
  else {
    uStack_59c = 0;
  }
  uVar8 = uStack_482;
  cVar7 = cStack_484;
  uVar6 = uStack_485;
  uVar5 = uStack_486;
  uVar28 = uStack_487;
  bVar19 = bStack_488;
  uVar11 = CONCAT13(uStack_485,CONCAT12(uStack_486,CONCAT11(uStack_487,bStack_488)));
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar27 & 0xffff | (uVar24 & 0xffff) << 0x10;
  uVar31 = ((uVar31 >> 6) - (ushort)(SUB162(auVar32 & _DAT_143028d30,0) == 0)) + 1;
  uVar33 = ((uVar23 >> 6) - (ushort)(SUB162(auVar32 & _DAT_143028d30,2) == 0)) + 1;
  bVar22 = bVar17 - 1;
  uVar14 = (uint)bVar22;
  uVar25 = 6;
  if (bVar22 < 6) {
    uVar25 = uVar14;
  }
  uStack_2f8 = (ulonglong)(uVar25 << 0x18);
  lStack_2f0 = (ulonglong)(bVar22 != 0) << 0x18;
  uVar12 = 2;
  if (bVar22 < 2) {
    uVar12 = uVar14;
  }
  uStack_300 = (ulonglong)(uVar12 << 0x18);
  uVar12 = 3;
  if (bVar22 < 3) {
    uVar12 = uVar14;
  }
  uStack_308 = (ulonglong)(uVar12 << 0x18);
  uVar12 = 4;
  if (bVar22 < 4) {
    uVar12 = uVar14;
  }
  uStack_310 = (ulonglong)(uVar12 << 0x18);
  uVar12 = (uint)bVar22;
  uVar14 = 5;
  if (bVar22 < 5) {
    uVar14 = uVar12;
  }
  uStack_318 = (ulonglong)(uVar14 << 0x18);
  uVar14 = 7;
  if (bVar22 < 7) {
    uVar14 = uVar12;
  }
  iVar4 = CONCAT13(uStack_48d,CONCAT12(bStack_48e,CONCAT11(uStack_48f,bStack_490)));
  uVar24 = CONCAT17(uStack_489,CONCAT16(uStack_48a,CONCAT15(uStack_48b,CONCAT14(uStack_48c,iVar4))))
  ;
  uStack_320 = (ulonglong)(uVar14 << 0x18);
  uVar14 = 8;
  if (bVar22 < 8) {
    uVar14 = uVar12;
  }
  uStack_328 = (ulonglong)(uVar14 << 0x18);
  uVar14 = 9;
  if (bVar22 < 9) {
    uVar14 = uVar12;
  }
  uStack_330 = (ulonglong)(uVar14 << 0x18);
  uVar14 = 10;
  if (bVar22 < 10) {
    uVar14 = uVar12;
  }
  uStack_338 = (ulonglong)(uVar14 << 0x18);
  uVar14 = 0xb;
  if (bVar22 < 0xb) {
    uVar14 = uVar12;
  }
  uStack_340 = (ulonglong)(uVar14 << 0x18);
  uVar14 = 0xc;
  if (bVar22 < 0xc) {
    uVar14 = uVar12;
  }
  uVar12 = uStack_5bc & 0xffff;
  puStack_2e8 = (undefined8 *)(param_3 + 8);
  uVar1 = *(undefined4 *)(param_3 + 4);
  uStack_348 = (ulonglong)(uVar14 << 0x18);
  iVar21 = 0;
  uStack_5b8 = (uint)uVar3;
  uStack_590 = param_3;
  if (uVar10 != 0) {
    do {
      lVar29 = 0;
      uVar13 = pdb_140e25fd0(0,iVar21);
      uVar14 = pdb_140e26030(uVar13,2);
      uVar26 = uVar14 & 0xffffff;
      uVar15 = 0;
      if (cVar7 != '\x02') {
        iStack_550 = uVar26 + 0x10000000;
        alStack_220[0] = CONCAT44(alStack_220[0]._4_4_,uVar11);
        iStack_554 = (int)lStack_2f0 + 0x10000000 + uVar26;
        uStack_2c4 = (uint)(uVar24 >> 0x20);
        iStack_54c = (int)uStack_300 + 0x10000000 + uVar26;
        iStack_548 = (int)uStack_308 + 0x10000000 + uVar26;
        iStack_544 = (int)uStack_310 + 0x10000000 + uVar26;
        iStack_540 = (int)uStack_318 + 0x10000000 + uVar26;
        uStack_530 = CONCAT44(uStack_530._4_4_,uVar11);
        iStack_53c = (int)uStack_2f8 + 0x10000000 + uVar26;
        uStack_5bc = (int)uStack_320 + 0x10000000 + uVar26;
        uStack_5b8 = (int)uStack_328 + 0x10000000 + uVar26;
        uStack_590 = (ulonglong)((int)uStack_330 + 0x10000000 + uVar26);
        iStack_5b4 = (int)uStack_338 + 0x10000000 + uVar26;
        iStack_558 = (int)uStack_340 + 0x10000000 + uVar26;
        iStack_55c = (int)uStack_348 + uVar26 + 0x10000000;
        uVar15 = 0xd;
        uStack_538 = uVar24;
        uStack_520 = uVar24;
        uStack_518 = uVar11;
        uStack_508 = uVar24;
        uStack_500 = uVar11;
        uStack_4f8 = uVar24;
        uStack_4f0 = uVar11;
        uStack_4e8 = uVar24;
        uStack_4e0 = uVar11;
        uStack_4d8 = uVar24;
        uStack_4d0 = uVar11;
        uStack_4c8 = uVar24;
        uStack_4c0 = uVar11;
        uStack_4b8 = uVar24;
        uStack_4b0 = uVar11;
        uStack_2e0 = uVar24;
        uStack_2d8 = uVar11;
        iStack_2c8 = iVar4;
        uStack_2c0 = uVar11;
        uStack_228 = uVar24;
        uStack_188 = uVar24;
        uStack_180 = uVar11;
        uStack_100 = uVar24;
        uStack_f8 = uVar11;
      }
      uStack_498 = CONCAT44(iStack_550,uVar15);
      bStack_490 = (byte)uStack_5b0;
      uStack_48f = (undefined1)(uStack_5b0 >> 8);
      bStack_48e = (byte)(uStack_5b0 >> 0x10);
      uStack_48d = (undefined1)(uStack_5b0 >> 0x18);
      cStack_484 = (char)alStack_220[0];
      uStack_483 = (undefined1)((ulonglong)alStack_220[0] >> 8);
      uStack_482 = (undefined2)((ulonglong)alStack_220[0] >> 0x10);
      uStack_48c = (undefined1)uStack_228;
      uStack_48b = (undefined1)(uStack_228 >> 8);
      uStack_48a = (byte)(uStack_228 >> 0x10);
      uStack_489 = (undefined1)(uStack_228 >> 0x18);
      bStack_488 = (byte)(uStack_228 >> 0x20);
      uStack_487 = (undefined1)(uStack_228 >> 0x28);
      uStack_486 = (undefined1)(uStack_228 >> 0x30);
      uStack_485 = (undefined1)(uStack_228 >> 0x38);
      uStack_480._0_2_ = CONCAT11(uVar18,cVar7);
      uStack_480 = CONCAT44(iStack_554,(undefined4)uStack_480);
      uStack_478 = uStack_5b0;
      uStack_46c = uStack_2c0;
      uStack_474 = CONCAT44(uStack_2c4,iStack_2c8);
      iStack_464 = iStack_54c;
      uStack_460 = uStack_5b0;
      uStack_454 = uStack_f8;
      uStack_45c = uStack_100;
      iStack_44c = iStack_548;
      uStack_448 = uStack_5b0;
      uStack_43c = uStack_180;
      uStack_444 = uStack_188;
      iStack_434 = iStack_544;
      uStack_430 = uStack_5b0;
      uStack_424 = uStack_2d8;
      uStack_42c = uStack_2e0;
      iStack_41c = iStack_540;
      uStack_418 = uStack_5b0;
      uStack_40c = (undefined4)uStack_530;
      uStack_414 = uStack_538;
      iStack_404 = iStack_53c;
      uStack_400 = uStack_5b0;
      uStack_3f4 = uStack_518;
      uStack_3fc = uStack_520;
      uStack_3ec = uStack_5bc;
      uStack_3e8 = uStack_5b0;
      uStack_3dc = uStack_4b0;
      uStack_3e4 = uStack_4b8;
      uStack_3d4 = uStack_5b8;
      uStack_3d0 = uStack_5b0;
      uStack_3c4 = uStack_4c0;
      uStack_3cc = uStack_4c8;
      uStack_3bc = (undefined4)uStack_590;
      uStack_3b8 = uStack_5b0;
      uStack_3ac = uStack_4d0;
      uStack_3b4 = uStack_4d8;
      iStack_3a4 = iStack_5b4;
      uStack_3a0 = uStack_5b0;
      uStack_394 = uStack_4e0;
      uStack_39c = uStack_4e8;
      iStack_38c = iStack_558;
      uStack_388 = uStack_5b0;
      uStack_37c = uStack_4f0;
      uStack_384 = uStack_4f8;
      iStack_374 = iStack_55c;
      uStack_370 = uStack_5b0;
      uStack_364 = uStack_500;
      uStack_36c = uStack_508;
      cStack_468 = cVar7;
      uStack_467 = uVar18;
      cStack_450 = cVar7;
      uStack_44f = uVar18;
      cStack_438 = cVar7;
      uStack_437 = uVar18;
      cStack_420 = cVar7;
      uStack_41f = uVar18;
      cStack_408 = cVar7;
      uStack_407 = uVar18;
      cStack_3f0 = cVar7;
      uStack_3ef = uVar18;
      cStack_3d8 = cVar7;
      uStack_3d7 = uVar18;
      cStack_3c0 = cVar7;
      uStack_3bf = uVar18;
      cStack_3a8 = cVar7;
      uStack_3a7 = uVar18;
      cStack_390 = cVar7;
      uStack_38f = uVar18;
      cStack_378 = cVar7;
      uStack_377 = uVar18;
      cStack_360 = cVar7;
      uStack_35f = uVar18;
      if (uVar15 != 0) {
        lVar20 = 0;
        lVar29 = 0;
        do {
          if (lVar20 == 0x138) {
            pdb_142dc5e20(&UNK_143383df8);
          }
          alStack_220[lVar29] = (longlong)&uStack_498 + lVar20 + 4;
          lVar29 = lVar29 + 1;
          lVar20 = lVar20 + 0x18;
        } while ((ulonglong)uVar15 * 0x18 != lVar20);
      }
      uVar16 = *puStack_2e8;
      uStack_510 = (undefined6)((ulonglong)*(undefined8 *)((longlong)puStack_2e8 + 6) >> 0x10);
      uStack_518 = (undefined4)uVar16;
      uStack_514 = (undefined2)((ulonglong)uVar16 >> 0x20);
      uStack_512 = (undefined2)((ulonglong)uVar16 >> 0x30);
      uStack_520 = CONCAT44(uVar1,uVar14);
      if ((uint)lVar29 < 0xd) {
        uStack_228 = CONCAT44(uStack_228._4_4_,(uint)lVar29);
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14302a418,0x2b,&uStack_228,&UNK_14302a448,&UNK_143029590);
      }
      iVar21 = iVar21 + 1;
      uStack_538 = CONCAT44(uStack_5b0,uVar26 | uVar25 << 0x18 | 0x10000000);
      uStack_2c0 = 0;
      uStack_2bc = 0;
      puStack_248 = &uStack_520;
      lStack_2b0 = alStack_220[0];
      uStack_2a8 = alStack_220[1];
      uStack_2a0 = alStack_220[2];
      uStack_298 = alStack_220[3];
      uStack_290 = uStack_200;
      uStack_288 = uStack_1f8;
      uStack_280 = uStack_1f0;
      uStack_27c = uStack_1ec;
      uStack_278 = uStack_1e8;
      uStack_274 = uStack_1e4;
      uStack_270 = uStack_1e0;
      uStack_26c = uStack_1dc;
      uStack_268 = uStack_1d8;
      uStack_264 = uStack_1d4;
      uStack_260 = uStack_1d0;
      uStack_258 = uStack_1c8;
      puStack_240 = &uStack_538;
      puStack_238 = &uStack_4ac;
      uStack_530 = uVar24;
      uStack_528 = uVar11;
      cStack_524 = cVar7;
      uStack_523 = uVar18;
      iStack_2c8 = bVar17 - 1;
      uStack_2c4 = (uint)uVar33 * (uint)uVar31;
      uStack_2b8 = uVar12;
      uStack_2b4 = (uint)uVar3;
      uStack_230 = (uint)param_4;
      cStack_22c = cVar9;
      cStack_22b = cVar9;
      pdb_14163b170(&uStack_2e0,&iStack_2c8);
      uVar16 = pdb_14177be60(*(undefined8 *)(param_2 + 0x208),&UNK_143331839,0x1e,&uStack_2e0);
      pdb_140e291c0(&uStack_100,&UNK_143331839,0x1e,uVar16,param_2);
      pub_142e32760(&uStack_228,&iStack_2c8,0xa0);
      pdb_1417914c0(&uStack_188,&uStack_100,&uStack_228);
      pub_142e32760(&uStack_228,&uStack_188,0x88);
      uStack_2c0 = (undefined4)CONCAT72(SUB137(ZEXT213(0) << 0x40,6),uVar33);
      uStack_2bc = 1;
      iStack_2c8 = 0;
      uStack_2c4 = (uint)uVar31;
      pdb_140e28810(&uStack_228,&iStack_2c8);
    } while ((ushort)iVar21 < uVar10);
  }
  bStack_490 = bVar19;
  uStack_48f = uVar28;
  bStack_48e = uVar5;
  uStack_48d = uVar6;
  lVar29 = *(longlong *)(param_2 + 0x130);
  uStack_498 = uVar24;
  if (lVar29 == *(longlong *)(param_2 + 0x120)) {
    pdb_142d8afd0(lStack_358);
  }
  *(undefined8 *)(*(longlong *)(param_2 + 0x128) + lVar29 * 0x10) = 0;
  *(longlong *)(param_2 + 0x130) = lVar29 + 1;
  *puStack_350 = (ulonglong)CONCAT24(uVar3 >> 1,(uint)uVar30);
  *(undefined4 *)(puStack_350 + 1) = uStack_59c;
  *(uint *)((longlong)puStack_350 + 0xc) = uStack_5b0;
  puStack_350[2] = uStack_498;
  *(uint *)(puStack_350 + 3) =
       CONCAT13(uStack_48d,CONCAT12(bStack_48e,CONCAT11(uStack_48f,bStack_490)));
  *(char *)((longlong)puStack_350 + 0x1c) = cVar7;
  *(undefined1 *)((longlong)puStack_350 + 0x1d) = uVar18;
  *(undefined2 *)((longlong)puStack_350 + 0x1e) = uVar8;
  return;
}

