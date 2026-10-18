// VA 0x1400eecc0, PDB extent 3011 bytes
// tiny_glade::winit_event_loop::extract_available_monitors_info
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/winit_event_loop.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::winit_event_loop::extract_available_monitors_info
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/winit_event_loop.rs
   Extent: 3011 */

void pdb_1400eecc0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  byte *pbVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  byte *pbStack_3c8;
  byte *pbStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined8 uStack_390;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  int iStack_358;
  undefined2 uStack_354;
  undefined2 uStack_352;
  uint uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  int iStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined8 uStack_324;
  undefined8 uStack_31c;
  undefined8 uStack_314;
  undefined8 uStack_30c;
  longlong lStack_248;
  byte *pbStack_240;
  ulonglong uStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  byte ***pppbStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined8 uStack_174;
  byte **ppbStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  longlong lStack_110;
  longlong lStack_108;
  byte *pbStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  longlong *plStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  byte *pbStack_c8;
  undefined8 uStack_c0;
  byte *pbStack_b8;
  longlong lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  byte *pbStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  lStack_90 = 0;
  lStack_88 = 8;
  lStack_80 = 0;
  uStack_d8 = 0;
  uStack_e0 = 8;
  uStack_f8 = param_3;
  plStack_e8 = param_1;
  pdb_140746680(&uStack_370);
  pbStack_98 = uStack_368;
  lVar5 = CONCAT44(uStack_35c,uStack_360);
  pbStack_c8 = uStack_370;
  lVar6 = CONCAT26(uStack_352,CONCAT24(uStack_354,iStack_358));
  do {
    if (lVar6 == 0) {
      if (pbStack_c8 != (byte *)0x0) {
        pub_1406abac0(pbStack_98,(longlong)pbStack_c8 << 3,8);
      }
      plStack_e8[2] = lStack_80;
      *plStack_e8 = lStack_90;
      plStack_e8[1] = lStack_88;
      return;
    }
    pbStack_100 = pbStack_c8;
    if ((byte *)(lVar5 + 1U) < pbStack_c8) {
      pbStack_100 = (byte *)0x0;
    }
    uVar10 = *(undefined8 *)(pbStack_98 + lVar5 * 8);
    lStack_110 = lVar5;
    lStack_108 = lVar6 + -1;
    uStack_d0 = uVar10;
    pdb_14067e3a0(&uStack_150,&uStack_d0);
    lStack_b0 = 0;
    uStack_a0 = 0;
    uStack_71 = 1;
    pdb_140747860(&uStack_370,uVar10);
    if ((char)uStack_370 == '\0') {
      uStack_3d8 = uStack_30c;
      uStack_3e8 = uStack_31c;
      uStack_3e0 = uStack_314;
      uStack_3f8 = CONCAT44(uStack_328,uStack_32c);
      uStack_3f0 = uStack_324;
      uStack_428 = CONCAT44(iStack_358,uStack_35c);
      uStack_420 = CONCAT44(uStack_350,CONCAT22(uStack_352,uStack_354));
      uStack_418 = CONCAT44(uStack_348,uStack_34c);
      uStack_410 = CONCAT44(uStack_340,uStack_344);
      uStack_408 = CONCAT44(iStack_338,uStack_33c);
      uStack_400 = CONCAT44(uStack_330,uStack_334);
      uStack_438 = uStack_370._4_4_;
      uStack_434 = (undefined4)uStack_368;
      uStack_430 = uStack_368._4_4_;
      uStack_42c = uStack_360;
      iVar8 = 0;
      while( true ) {
        uStack_200 = 0;
        uStack_178 = 0;
        uStack_174 = 0;
        uStack_188 = 0;
        uStack_180 = 0;
        uStack_17c = 0;
        uStack_198 = 0;
        uStack_194 = 0;
        uStack_190 = 0;
        uStack_1a8 = 0;
        uStack_1a0 = 0;
        uStack_19c = 0;
        uStack_1b8 = 0;
        uStack_1b0 = 0;
        uStack_1c8 = 0;
        uStack_1c0 = 0;
        uStack_1d8 = 0;
        uStack_1d0 = 0;
        uStack_1e8 = 0;
        uStack_1e0 = 0;
        puStack_1f8 = (undefined *)0x0;
        pppbStack_1f0 = (byte ***)0x0;
        uStack_218 = 0;
        puStack_210 = (undefined *)0x0;
        puStack_228 = (undefined *)0x0;
        uStack_220 = 0;
        uStack_238 = 0;
        uStack_230 = 0;
        lStack_248 = 0;
        pbStack_240 = (byte *)0x0;
        uStack_208 = 0xdc00000000;
        iVar4 = EnumDisplaySettingsExW(&uStack_410,iVar8,&lStack_248,0);
        uVar3 = uStack_1a0;
        if (iVar4 == 0) break;
        if ((~(uint)uStack_200 & 0x5c0000) != 0) {
          uStack_71 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_142e41140,0x3a,&UNK_142e411e0);
        }
        pbVar2 = (byte *)CONCAT44(uStack_198,uStack_19c);
        iVar4 = (int)uStack_190;
        pub_142e32760(&uStack_370,&lStack_248,0xdc);
        pdb_14007ee60();
        pbVar7 = pub_1406abab0(0xdc,4);
        if (pbVar7 == (byte *)0x0) {
          uStack_71 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(4,0xdc);
        }
        pub_142e32760(pbVar7,&uStack_370,0xdc);
        iStack_358 = iVar4 * 1000;
        uStack_360 = (undefined4)uVar10;
        uStack_35c = (undefined4)((ulonglong)uVar10 >> 0x20);
        uStack_354 = (undefined2)uVar3;
        uStack_71 = 1;
        uStack_370 = pbVar7;
        uStack_368 = pbVar2;
        pdb_14057e5a0(&lStack_b0,&uStack_370);
        iVar8 = iVar8 + 1;
      }
      bVar12 = lStack_b0 != 0;
      lVar5 = lStack_b0;
      uVar10 = uStack_a8;
      uVar11 = 0;
      if (bVar12) {
        uVar11 = uStack_a0;
      }
    }
    else {
      pbStack_b8 = uStack_368;
      lVar5 = 0;
      uVar11 = 0;
      if (1 < *_DAT_143ca8e90) {
        ppbStack_160 = &pbStack_b8;
        pcStack_158 = pdb_140f59780;
        lStack_248 = 0;
        pbStack_240 = &UNK_142e41218;
        uStack_238 = 0x27;
        uStack_230 = 0;
        puStack_228 = &UNK_142e4117a;
        uStack_220 = 0x61;
        uStack_218 = 2;
        puStack_210 = &UNK_142e41218;
        uStack_208 = 0x27;
        uStack_200 = 0xf600000001;
        puStack_1f8 = &UNK_142e411f8;
        pppbStack_1f0 = &ppbStack_160;
        pdb_140f332f0(&uStack_74,&lStack_248);
        lVar5 = lStack_b0;
        uVar10 = uStack_a8;
        uVar11 = uStack_a0;
      }
      uStack_71 = 0;
      pdb_1404b38e0(&pbStack_b8);
      bVar12 = lVar5 != 0;
      if (!bVar12) {
        uVar11 = 0;
      }
    }
    uStack_370 = (byte *)(ulonglong)bVar12;
    uStack_368 = (byte *)0x0;
    uStack_360 = (undefined4)lVar5;
    uStack_35c = (undefined4)((ulonglong)lVar5 >> 0x20);
    iStack_358 = (int)uVar10;
    uStack_354 = (undefined2)((ulonglong)uVar10 >> 0x20);
    uStack_352 = (undefined2)((ulonglong)uVar10 >> 0x30);
    uStack_350 = (uint)bVar12;
    uStack_34c = 0;
    uStack_348 = 0;
    uStack_344 = 0;
    uStack_334 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uStack_330 = (undefined4)uVar11;
    uStack_32c = (undefined4)((ulonglong)uVar11 >> 0x20);
    uStack_72 = 1;
    uStack_340 = uStack_360;
    uStack_33c = uStack_35c;
    iStack_338 = iStack_358;
    pdb_14017bb80(&lStack_248,&uStack_370);
    uVar9 = uStack_238;
    pbVar2 = pbStack_240;
    if (1 < uStack_238) {
      if (uStack_238 < 0x15) {
        uStack_73 = 1;
        pdb_1400e1660(pbStack_240,uStack_238,1);
      }
      else {
        uStack_73 = 1;
        pdb_140224e00(pbStack_240,uStack_238,&uStack_74);
      }
    }
    uStack_c0 = uStack_150;
    uStack_f0 = uStack_148;
    pdb_14017e290(&uStack_370,pbVar2,pbVar2 + uVar9 * 0x20);
    pdb_140481450(&uStack_438,uStack_f8,&uStack_d0);
    lVar5 = lStack_80;
    uStack_390 = uStack_130;
    uStack_3a0 = uStack_140;
    uStack_39c = uStack_13c;
    uStack_398 = uStack_138;
    uStack_394 = uStack_134;
    uStack_3b0 = uStack_150;
    uStack_3a8 = uStack_148;
    pbStack_3c8 = uStack_370;
    pbStack_3c0 = uStack_368;
    uStack_3b8 = CONCAT44(uStack_35c,uStack_360);
    uStack_378 = (undefined4)uStack_428;
    uStack_388 = uStack_438;
    uStack_384 = uStack_434;
    uStack_380 = uStack_430;
    uStack_37c = uStack_42c;
    if (lStack_80 == lStack_90) {
      pdb_142d7ebb0(&lStack_90);
    }
    lVar6 = lVar5 * 0x58;
    *(ulonglong *)(lStack_88 + 0x50 + lVar6) = CONCAT44(uStack_374,uStack_378);
    puVar1 = (undefined8 *)(lStack_88 + 0x40 + lVar6);
    *puVar1 = CONCAT44(uStack_384,uStack_388);
    puVar1[1] = CONCAT44(uStack_37c,uStack_380);
    puVar1 = (undefined8 *)(lStack_88 + 0x30 + lVar6);
    *puVar1 = CONCAT44(uStack_394,uStack_398);
    puVar1[1] = uStack_390;
    puVar1 = (undefined8 *)(lStack_88 + 0x20 + lVar6);
    *puVar1 = uStack_3a8;
    puVar1[1] = CONCAT44(uStack_39c,uStack_3a0);
    puVar1 = (undefined8 *)(lStack_88 + 0x10 + lVar6);
    *puVar1 = uStack_3b8;
    puVar1[1] = uStack_3b0;
    *(undefined8 *)(lStack_88 + lVar6) = pbStack_3c8;
    ((undefined8 *)(lStack_88 + lVar6))[1] = pbStack_3c0;
    lStack_80 = lVar5 + 1;
    pbVar7 = pbVar2;
    for (; uVar9 != 0; uVar9 = uVar9 - 1) {
      pub_1406abac0(*(byte **)pbVar7,0xdc,4);
      pbVar7 = pbVar7 + 0x20;
    }
    if (lStack_248 != 0) {
      pub_1406abac0(pbVar2,lStack_248 << 5,8);
    }
    lVar5 = (lStack_110 - (longlong)pbStack_100) + 1;
    lVar6 = lStack_108;
  } while( true );
}

