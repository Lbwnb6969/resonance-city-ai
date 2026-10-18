// VA 0x1400ed130, PDB extent 7046 bytes
// tiny_glade::winit_event_loop::run_event_loop
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/winit_event_loop.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::winit_event_loop::run_event_loop
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/winit_event_loop.rs
   Extent: 7046 */

undefined4 *
pdb_1400ed130(undefined4 *param_1,longlong param_2,undefined8 **param_3,undefined8 param_4,
             undefined8 ***param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  double dVar2;
  int iVar3;
  double dVar4;
  bool bVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  char cVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  char *pcVar15;
  longlong lVar16;
  undefined8 **ppuVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  undefined8 ****ppppuVar20;
  undefined8 uVar21;
  undefined8 **ppuVar22;
  undefined8 ****ppppuVar23;
  undefined8 ***pppuVar24;
  undefined8 **ppuVar25;
  float fVar26;
  undefined8 uStack_378;
  undefined4 uStack_370;
  undefined4 auStack_354 [7];
  longlong lStack_338;
  undefined4 *puStack_330;
  undefined8 uStack_328;
  undefined8 **ppuStack_320;
  undefined4 *puStack_318;
  undefined4 uStack_30c;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  int iStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined8 **appuStack_290 [14];
  longlong lStack_220;
  undefined8 ***pppuStack_1f8;
  undefined8 **ppuStack_1f0;
  undefined4 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 **ppuStack_1d8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 ***pppuStack_198;
  undefined8 uStack_190;
  longlong lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  uint uStack_16c;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  undefined8 **ppuStack_148;
  byte *pbStack_140;
  longlong lStack_138;
  undefined8 **ppuStack_130;
  undefined4 uStack_124;
  uint uStack_120;
  undefined4 uStack_11c;
  undefined8 ****ppppuStack_118;
  undefined4 uStack_110;
  undefined8 ****ppppuStack_108;
  undefined8 ***pppuStack_100;
  undefined8 **ppuStack_f8;
  undefined4 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  char *pcStack_d8;
  undefined4 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 ****ppppuStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 **ppuStack_90;
  undefined1 uStack_85;
  char cStack_84;
  undefined1 auStack_83 [3];
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  pppuStack_198 = param_5;
  uStack_190 = param_6;
  iStack_2a0 = (int)param_7;
  uStack_29c = param_7._4_4_;
  uStack_298 = (undefined4)param_8;
  uStack_294 = param_8._4_4_;
  uStack_1a0 = 0;
  lStack_338 = param_2;
  uStack_180 = param_4;
  ppuStack_90 = param_3;
  uStack_2a8 = pdb_140747840((*param_3)[3]);
  uVar19 = (undefined4)param_2;
  uStack_2b0 = 1;
  cStack_84 = '\x01';
  auStack_354[0] = 2;
  ppuStack_148 = (undefined8 **)0x0;
  lStack_138 = 0;
  ppuStack_130 = (undefined8 **)0x0;
  pbStack_140 = (byte *)0x8;
  puStack_330 = param_1;
  pdb_140951970(&ppppuStack_118);
  uStack_168 = 0;
  uStack_178 = pdb_140f3c9d0();
  uStack_11c = uVar19;
  pdb_1400eecc0(&uStack_328,*ppuStack_90 + 2,uStack_180);
  puStack_f0 = puStack_318;
  pppuStack_100 = uStack_328;
  ppuStack_f8 = ppuStack_320;
  ppppuStack_108 = (undefined8 ****)CONCAT71(ppppuStack_108._1_7_,0xe);
  lStack_220 = pdb_140558a30(&uStack_328,&pppuStack_198,&ppppuStack_108);
  if ((char)uStack_328 != '\x10') {
    lStack_220 = pdb_1404c7c30(&uStack_328);
  }
  dVar7 = _DAT_142e33030;
  dVar6 = _DAT_142e33028;
  uStack_85 = (code)0x1;
  lStack_188 = lStack_220;
  do {
    if (uStack_85 == (code)0x0) {
LAB_1400ee494:
      puVar14 = puStack_330;
      *(undefined8 *)(puStack_330 + 4) = uStack_158;
      *puStack_330 = (undefined4)uStack_168;
      puStack_330[1] = uStack_168._4_4_;
      puStack_330[2] = uStack_160;
      puStack_330[3] = uStack_15c;
      if (ppuStack_148 != (undefined8 **)0x0) {
        pub_1406abac0(pbStack_140,(longlong)ppuStack_148 << 3,8);
      }
      pdb_1404dbd30(&iStack_2a0);
      pdb_1404dd540(&pppuStack_198);
      return puVar14;
    }
    *(undefined4 *)(*(longlong *)(lStack_338 + 0x10) + 0x18) = 1000000000;
    ppppuStack_108 = &pppuStack_198;
    pppuStack_100 = &ppuStack_90;
    ppuStack_f8 = (undefined8 **)&uStack_85;
    puStack_f0 = &uStack_1a0;
    puStack_e8 = &uStack_2b0;
    uStack_e0 = uStack_180;
    pcStack_d8 = &cStack_84;
    puStack_d0 = auStack_354;
    puStack_c8 = &uStack_168;
    ppppuStack_c0 = &ppppuStack_118;
    uVar13 = pdb_14010ab20(lStack_338,0,5000000,&ppppuStack_108);
    if ((uVar13 & 1) != 0) goto LAB_1400ee494;
    uStack_16c = 2;
    uStack_120 = 0;
    if (CONCAT44(uStack_29c,iStack_2a0) == 0) {
      pdb_140477ec0(&uStack_328,CONCAT44(uStack_294,uStack_298));
    }
    else if (iStack_2a0 == 1) {
      pdb_140161dd0(&uStack_328);
    }
    else {
      pdb_14053bd20(&uStack_328);
    }
    if (uStack_328 != (undefined8 ***)0x8000000000000008) {
      pppuVar24 = uStack_328;
      if (-1 < (longlong)uStack_328) {
        pppuVar24 = (undefined8 ***)0x4;
      }
                    /* WARNING: Could not recover jumptable at 0x0001400ed463. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar14 = (undefined4 *)
                (*(code *)(&UNK_142e41270 + *(int *)(&UNK_142e41270 + (longlong)pppuVar24 * 4)))
                          (uStack_30c,uStack_328,
                           &UNK_142e41270 + *(int *)(&UNK_142e41270 + (longlong)pppuVar24 * 4));
      return puVar14;
    }
    if ((char)ppuStack_320 != '\0') goto LAB_1400ee494;
    ppppuVar20 = (undefined8 ****)0x8000000000000008;
    if ((uStack_120 & 1) != 0) {
      puVar1 = *ppuStack_90;
      pppuVar24 = uStack_328;
      fVar26 = (float)pub_142e32b00(uStack_19c);
      dVar2 = (double)fVar26;
      dVar4 = dVar2;
      if (dVar2 <= dVar6) {
        dVar4 = dVar6;
      }
      if (dVar7 <= dVar4) {
        dVar4 = dVar7;
      }
      iVar11 = (int)dVar4;
      if (NAN(dVar2)) {
        iVar11 = 0;
      }
      fVar26 = (float)pub_142e32b00((undefined4)lStack_188);
      dVar2 = (double)fVar26;
      dVar4 = dVar2;
      if (dVar2 <= dVar6) {
        dVar4 = dVar6;
      }
      if (dVar7 <= dVar4) {
        dVar4 = dVar7;
      }
      iVar3 = (int)dVar4;
      if (NAN(dVar2)) {
        iVar3 = 0;
      }
      pcVar15 = (char *)pdb_140744c40(puVar1 + 2);
      if (((((ulonglong)pppuVar24 & 1) == 0) && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)) &&
         (cVar9 = pdb_142dc79e0(), cVar9 == '\0')) {
        pcVar15[1] = '\x01';
      }
      LOCK();
      cVar9 = *pcVar15;
      *pcVar15 = '\0';
      UNLOCK();
      if (cVar9 == '\x02') {
        pdb_142dc6ca0(pcVar15);
      }
      dVar2 = (double)iVar11;
      dVar4 = dVar2;
      if (dVar2 <= dVar6) {
        dVar4 = dVar6;
      }
      if (dVar7 <= dVar4) {
        dVar4 = dVar7;
      }
      iVar11 = (int)dVar4;
      if (NAN(dVar2)) {
        iVar11 = 0;
      }
      dVar2 = (double)iVar3;
      dVar4 = dVar2;
      if (dVar2 <= dVar6) {
        dVar4 = dVar6;
      }
      if (dVar7 <= dVar4) {
        dVar4 = dVar7;
      }
      iVar3 = (int)dVar4;
      if (NAN(dVar2)) {
        iVar3 = 0;
      }
      dVar2 = (double)iVar11;
      dVar4 = dVar2;
      if (dVar2 <= dVar6) {
        dVar4 = dVar6;
      }
      if (dVar7 <= dVar4) {
        dVar4 = dVar7;
      }
      iVar11 = (int)dVar4;
      if (NAN(dVar2)) {
        iVar11 = 0;
      }
      dVar2 = (double)iVar3;
      dVar4 = dVar2;
      if (dVar2 <= dVar6) {
        dVar4 = dVar6;
      }
      if (dVar7 <= dVar4) {
        dVar4 = dVar7;
      }
      iVar3 = (int)dVar4;
      if (NAN(dVar2)) {
        iVar3 = 0;
      }
      uStack_328 = (undefined8 ***)CONCAT44(iVar3,iVar11);
      ppppuVar20 = (undefined8 ****)&uStack_328;
      iVar11 = ClientToScreen(puVar1[3]);
      if (iVar11 == 0) {
        uVar19 = 0x1d4;
      }
      else {
        ppppuVar20 = (undefined8 ****)((ulonglong)uStack_328 >> 0x20);
        iVar11 = SetCursorPos((ulonglong)uStack_328 & 0xffffffff);
        if (iVar11 != 0) goto LAB_1400ee048;
        uVar19 = 0x1d7;
      }
      lVar16 = pdb_140f550f0();
      puStack_f0 = (undefined4 *)(lVar16 << 0x20 | 2);
      ppppuStack_108 = (undefined8 ****)0x2;
      pppuStack_100 = (undefined8 ***)&UNK_142e410e0;
      ppuStack_f8 = (undefined8 **)0x60;
      puStack_e8 = (undefined8 *)CONCAT44(puStack_e8._4_4_,uVar19);
      pdb_1404b38e0(&puStack_f0);
    }
LAB_1400ee048:
    if (uStack_16c != 2) {
      ppppuVar23 = (undefined8 ****)((ulonglong)uStack_16c | lStack_220 << 0x20);
      ppppuStack_108 = ppppuVar23;
      cVar9 = pdb_140958290(&ppppuStack_108);
      pppuStack_100 = (undefined8 ***)CONCAT44(pppuStack_100._4_4_,uStack_110);
      ppppuStack_108 = ppppuStack_118;
      cVar10 = pdb_140958290(&ppppuStack_108);
      if (cVar9 != cVar10) {
        puVar1 = *ppuStack_90;
        pppuStack_100 = (undefined8 ***)CONCAT44(pppuStack_100._4_4_,uStack_124);
        ppppuStack_108 = ppppuVar23;
        uVar12 = pdb_140958290(&ppppuStack_108);
        ppppuVar20 = (undefined8 ****)(ulonglong)uVar12;
        pdb_1400f1350(puVar1 + 2);
      }
      uStack_110 = uStack_124;
      ppppuStack_118 = ppppuVar23;
      if (uStack_168 != 0) {
        pppuStack_100 = (undefined8 ***)CONCAT44(pppuStack_100._4_4_,uStack_124);
        ppppuVar20 = &ppppuStack_108;
        ppppuStack_108 = ppppuVar23;
        pdb_140958370(&uStack_168);
      }
    }
    ppuVar22 = ppuStack_130;
    ppuStack_130 = (undefined8 **)0x0;
    pppuStack_1f8 = &ppuStack_148;
    ppuStack_1f0 = ppuVar22;
    puStack_1e0 = (undefined8 *)0x0;
    puVar14 = (undefined4 *)0x0;
    while (uVar19 = SUB84(ppppuVar20,0), ppuVar22 != (undefined8 **)0x0) {
      ppuVar17 = (undefined8 **)(lStack_138 + (longlong)puVar14);
      ppuVar25 = (undefined8 **)0x0;
      if (ppuStack_148 <= ppuVar17) {
        ppuVar25 = ppuStack_148;
      }
      puVar14 = (undefined4 *)((longlong)puVar14 + 1);
      ppuVar22 = (undefined8 **)((longlong)ppuVar22 + -1);
      pppuStack_100 =
           *(undefined8 ****)(pbStack_140 + ((longlong)ppuVar17 - (longlong)ppuVar25) * 8);
      ppppuStack_108 = (undefined8 ****)CONCAT71(ppppuStack_108._1_7_,0xb);
      ppppuVar20 = &pppuStack_198;
      puStack_1e8 = puVar14;
      ppuStack_1d8 = ppuVar22;
      pdb_140558a30(&uStack_328,ppppuVar20,&ppppuStack_108);
      if ((char)uStack_328 != '\x10') {
        pdb_1404c7c30(&uStack_328);
        if (ppuStack_130 == (undefined8 **)0x0) {
          lStack_138 = 0;
        }
        goto LAB_1400ee494;
      }
    }
    if (ppuStack_130 == (undefined8 **)0x0) {
      lStack_138 = 0;
    }
    if (cStack_84 != '\0') {
      cStack_84 = '\0';
      if ((int)uStack_2b0 == 1) {
        uVar19 = SUB84(&uStack_2a8,0);
        pdb_140090bb0(&pppuStack_1f8);
        if (SBORROW8(0,(longlong)pppuStack_1f8)) {
          appuStack_290[0] = ppuStack_1f0;
          if (1 < *_DAT_143ca8e90) {
            uStack_328 = appuStack_290;
            ppuStack_320 = (undefined8 **)pdb_140f36c20;
            ppppuStack_108 = (undefined8 ****)0x0;
            pppuStack_100 = (undefined8 ***)&UNK_142e40e6d;
            ppuStack_f8 = (undefined8 **)0x1c;
            puStack_f0 = (undefined4 *)0x0;
            puStack_e8 = (undefined8 *)&UNK_142e40e43;
            uStack_e0 = 0x29;
            pcStack_d8 = (char *)0x2;
            puStack_d0 = (undefined4 *)&UNK_142e40e6d;
            puStack_c8 = (undefined8 *)0x1c;
            ppppuStack_c0 = (undefined8 ****)0x24200000001;
            puStack_b8 = &UNK_142e40f01;
            puStack_b0 = &uStack_328;
            ppppuVar20 = &ppppuStack_108;
            pdb_140f332f0(auStack_83);
            uVar19 = SUB84(ppppuVar20,0);
          }
          pdb_140f36c40(appuStack_290);
        }
        else {
          puStack_f0 = puStack_1e8;
          puStack_e8 = puStack_1e0;
          pppuStack_100 = pppuStack_1f8;
          ppuStack_f8 = ppuStack_1f0;
          ppppuStack_108 = (undefined8 ****)CONCAT71(ppppuStack_108._1_7_,0xd);
          ppppuVar20 = &pppuStack_198;
          pdb_140558a30(&uStack_328,ppppuVar20,&ppppuStack_108);
          uVar19 = SUB84(ppppuVar20,0);
          if ((char)uStack_328 != '\x10') {
            pdb_1404c7c30(&uStack_328);
            goto LAB_1400ee494;
          }
        }
      }
    }
    uVar18 = pdb_140f3c9d0();
    uVar21 = uStack_178;
    uStack_378 = uVar18;
    uStack_370 = uVar19;
    uVar13 = pdb_140f3c790(&uStack_378,uStack_178,uStack_11c);
    bVar5 = (int)uVar21 != 0;
    if (uVar13 != 1) {
      bVar5 = 1 < uVar13;
    }
    uVar21 = uStack_178;
    uVar8 = uStack_11c;
    if (bVar5) {
      pppuStack_100 = (undefined8 ***)CONCAT44(pppuStack_100._4_4_,uStack_110);
      ppppuStack_108 = ppppuStack_118;
      uVar13 = pdb_1409582e0(&ppppuStack_108);
      uVar21 = uVar18;
      uVar8 = uVar19;
      if ((uVar13 & 1) != 0) {
        pdb_1400f1350(*ppuStack_90 + 2,0);
      }
    }
    uStack_11c = uVar8;
    uStack_178 = uVar21;
    pdb_140f502d0(0);
  } while( true );
}

