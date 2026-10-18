// VA 0x1428dbd80, PDB extent 42452 bytes
// system_clutter::autoclutter::populate_autoclutter_regions::populate_autoclutter_regions
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/autoclutter/populate_autoclutter_regions.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x0001428de683) overlaps instruction at (ram,0x0001428de682)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001428dcb4a) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_clutter::autoclutter::populate_autoclutter_regions::populate_autoclutter_regions
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/autoclutter/populate_autoclutter_regions.rs
   Extent: 42452 */

void pdb_1428dbd80(ulonglong *****param_1,ulonglong param_2,ulonglong *******param_3,
                  ulonglong *******param_4,undefined8 *param_5,longlong *param_6,longlong *param_7,
                  undefined8 *param_8,undefined8 *param_9)

{
  float *pfVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ulonglong *****pppppuVar5;
  ulonglong *****pppppuVar6;
  ulonglong *****pppppuVar7;
  ulonglong ****ppppuVar8;
  undefined8 *puVar9;
  code *pcVar10;
  uint uVar11;
  uint uVar12;
  char cVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong *******pppppppuVar18;
  longlong *plVar19;
  undefined1 *puVar20;
  ulonglong *******pppppppuVar21;
  undefined8 uVar22;
  ulonglong *****pppppuVar23;
  int iVar24;
  ulonglong *******pppppppuVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  int iVar28;
  ulonglong ******ppppppuVar29;
  undefined *unaff_RBX;
  byte *pbVar30;
  undefined *puVar31;
  char *pcVar32;
  ulonglong *****in_R10;
  undefined *puVar33;
  undefined1 (*pauVar34) [16];
  byte *pbVar35;
  longlong lVar36;
  undefined8 *puVar37;
  undefined *puVar38;
  undefined1 (*pauVar39) [16];
  float fVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  float fVar43;
  float extraout_XMM0_Da;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar49;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined4 uVar57;
  undefined1 auVar58 [16];
  float fVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar62;
  float fVar63;
  longlong alStack_7e8 [2];
  undefined1 auStack_7d8 [16];
  undefined1 auStack_7c8 [16];
  undefined1 auStack_7b8 [16];
  undefined1 auStack_7a8 [32];
  ulonglong ******ppppppuStack_788;
  ulonglong ******ppppppuStack_780;
  undefined8 uStack_778;
  ulonglong ******ppppppuStack_770;
  ulonglong ******ppppppuStack_768;
  undefined8 uStack_740;
  ulonglong *******pppppppuStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  ulonglong *******pppppppuStack_720;
  undefined8 uStack_718;
  ulonglong ******ppppppuStack_710;
  longlong lStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  ulonglong *******pppppppuStack_6d8;
  undefined8 uStack_6d0;
  ulonglong *****pppppuStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  ulonglong *******pppppppuStack_6b0;
  ulonglong *******pppppppuStack_6a8;
  undefined8 uStack_6a0;
  ulonglong *******pppppppuStack_698;
  undefined8 uStack_690;
  ulonglong *******pppppppuStack_688;
  float fStack_680;
  ulonglong *****pppppuStack_678;
  float fStack_670;
  ulonglong *****pppppuStack_668;
  float fStack_660;
  ulonglong *****pppppuStack_658;
  float fStack_650;
  ulonglong *******pppppppuStack_648;
  float fStack_640;
  ulonglong *****pppppuStack_638;
  float fStack_630;
  ulonglong *****pppppuStack_628;
  float fStack_620;
  ulonglong *****pppppuStack_618;
  float fStack_610;
  ulonglong *****pppppuStack_608;
  float fStack_600;
  ulonglong *****pppppuStack_5f8;
  float fStack_5f0;
  ulonglong *****pppppuStack_5e8;
  float fStack_5e0;
  ulonglong *****pppppuStack_5d8;
  float fStack_5d0;
  ulonglong *****pppppuStack_5c8;
  float fStack_5c0;
  ulonglong *****pppppuStack_5b8;
  float fStack_5b0;
  ulonglong *****pppppuStack_5a8;
  float fStack_5a0;
  ulonglong *****pppppuStack_598;
  float fStack_590;
  ulonglong *****pppppuStack_588;
  float fStack_580;
  ulonglong *****pppppuStack_578;
  float fStack_570;
  ulonglong *****pppppuStack_568;
  float fStack_560;
  ulonglong *****pppppuStack_558;
  float fStack_550;
  ulonglong *****pppppuStack_548;
  float fStack_540;
  ulonglong *****pppppuStack_538;
  float fStack_530;
  ulonglong *****pppppuStack_528;
  float fStack_520;
  ulonglong *****pppppuStack_518;
  float fStack_510;
  ulonglong *****pppppuStack_508;
  float fStack_500;
  ulonglong *****pppppuStack_4f8;
  float fStack_4f0;
  ulonglong *****pppppuStack_4e8;
  float fStack_4e0;
  ulonglong *****pppppuStack_4d8;
  float fStack_4d0;
  ulonglong *****pppppuStack_4c8;
  float fStack_4c0;
  ulonglong *****pppppuStack_4b8;
  float fStack_4b0;
  ulonglong *****pppppuStack_4a8;
  float fStack_4a0;
  ulonglong *****pppppuStack_498;
  float fStack_490;
  ulonglong *****pppppuStack_488;
  float fStack_480;
  float fStack_470;
  float fStack_46c;
  longlong lStack_468;
  undefined8 uStack_460;
  ulonglong *******pppppppuStack_458;
  ulonglong *****pppppuStack_450;
  ulonglong *****pppppuStack_448;
  ulonglong *****pppppuStack_440;
  ulonglong *****pppppuStack_438;
  ulonglong *****pppppuStack_430;
  ulonglong *****pppppuStack_428;
  ulonglong *****pppppuStack_420;
  ulonglong *****pppppuStack_418;
  ulonglong *****pppppuStack_410;
  ulonglong *******pppppppuStack_408;
  undefined8 uStack_400;
  longlong lStack_3e8;
  byte *pbStack_3e0;
  ulonglong *******pppppppuStack_3d8;
  undefined8 uStack_3d0;
  ulonglong *******pppppppuStack_3c8;
  float fStack_3c0;
  undefined8 uStack_3a8;
  ulonglong ****ppppuStack_3a0;
  ulonglong *******pppppppuStack_398;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  float fStack_388;
  float fStack_384;
  undefined8 uStack_380;
  undefined8 uStack_348;
  float fStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  float fStack_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  ulonglong *******pppppppuStack_318;
  ulonglong *******pppppppuStack_310;
  ulonglong *******pppppppuStack_308;
  undefined8 uStack_300;
  ulonglong *****pppppuStack_2f8;
  undefined8 uStack_2f0;
  ulonglong *******pppppppuStack_2e8;
  ulonglong *******pppppppuStack_2e0;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  ulonglong *****pppppuStack_298;
  ulonglong *****pppppuStack_290;
  ulonglong *****pppppuStack_288;
  ulonglong *****pppppuStack_280;
  ulonglong *****pppppuStack_278;
  ulonglong *****pppppuStack_270;
  ulonglong *****pppppuStack_268;
  ulonglong *****pppppuStack_260;
  undefined1 auStack_258 [16];
  ulonglong *****pppppuStack_230;
  ulonglong *****pppppuStack_228;
  ulonglong *****pppppuStack_220;
  ulonglong *****pppppuStack_218;
  ulonglong *****pppppuStack_210;
  ulonglong *****pppppuStack_208;
  ulonglong *****pppppuStack_200;
  ulonglong *****pppppuStack_1f8;
  ulonglong *******apppppppuStack_1f0 [2];
  undefined4 uStack_1dc;
  ulonglong uStack_1d8;
  ulonglong *****pppppuStack_1d0;
  ulonglong *****pppppuStack_1c8;
  ulonglong *****pppppuStack_1c0;
  ulonglong *****pppppuStack_1b8;
  ulonglong *****pppppuStack_1b0;
  ulonglong uStack_1a8;
  byte *pbStack_1a0;
  ulonglong uStack_198;
  ulonglong *****pppppuStack_190;
  ulonglong *****pppppuStack_188;
  ulonglong *****pppppuStack_180;
  undefined1 uStack_171;
  ulonglong *******pppppppuStack_170;
  ulonglong *****pppppuStack_168;
  ulonglong *******pppppppuStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  ulonglong *****pppppuStack_148;
  ulonglong *****pppppuStack_140;
  ulonglong *******pppppppuStack_138;
  ulonglong *******pppppppuStack_130;
  ulonglong *******pppppppuStack_128;
  ulonglong *******pppppppuStack_120;
  ulonglong *******pppppppuStack_118;
  ulonglong *******pppppppuStack_110;
  ulonglong *****pppppuStack_108;
  ulonglong ******ppppppuStack_100;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_1d8 = param_2;
  pppppppuStack_130 = param_3;
  pppppppuStack_110 = param_4;
  pppppuStack_108 = param_1;
  cVar13 = pdb_140e94b40();
  if (cVar13 == '\0') {
    lStack_468 = 0;
LAB_1428dbfa5:
    lVar16 = *param_7;
    if (*(char *)(lVar16 + 0xc2) == '\x01') {
      uStack_1dc = (undefined4)
                   CONCAT71((int7)((ulonglong)lVar16 >> 8),*(char *)(lVar16 + 0xd3) == '\x04');
    }
    else {
      uStack_1dc = 0;
    }
    uStack_778 = *(undefined8 *)(uStack_1d8 + 0x120);
    uStack_718 = *(undefined8 *)(uStack_1d8 + 0x140);
    *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
    pppppppuVar18 = (ulonglong *******)*param_5;
    uStack_6e0 = pppppppuVar18 + 6;
    pppppppuStack_6d8 = pppppppuVar18 + 0x12;
    uStack_6e8 = pppppppuVar18;
    pdb_14219cea0(pppppppuVar18 + 0xc,&uStack_6e8);
    pdb_1410d0740(pppppppuVar18);
    pdb_140a84d70(&uStack_6e8);
    *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
    lVar36 = *(longlong *)(*param_6 + 8);
    lVar16 = lVar36 + *(longlong *)(*param_6 + 0x10) * 8;
    for (; lVar36 != lVar16; lVar36 = lVar36 + 8) {
      pdb_14147fe80(&pppppppuStack_398,lVar36);
      if (pppppppuStack_398 != (ulonglong *******)0x0) {
        pppppppuStack_310 = (ulonglong *******)CONCAT44(uStack_38c,uStack_390);
        pppppppuStack_318 = pppppppuStack_398;
        pppppppuStack_308 = (ulonglong *******)CONCAT44(fStack_384,fStack_388);
        pdb_140a83f50(&uStack_6e8,pppppppuStack_310);
        pppppppuVar25 = pppppppuStack_318;
        pdb_140e9a350(pppppppuStack_318);
        pdb_140e9a350((ulonglong)pppppppuVar25 | 1);
        LOCK();
        ppppppuVar29 = *pppppppuVar25;
        *pppppppuVar25 = *pppppppuVar25 + -2;
        UNLOCK();
        if (((ulonglong)ppppppuVar29 & 0xfffffffffffffff2) == 0x12) {
          pdb_142dbbf50(pppppppuVar25);
        }
        pppppppuVar25 = pppppppuStack_308;
        pppppppuStack_308 = (ulonglong *******)0x0;
        alStack_7e8[0] = (longlong)pppppppuVar25 + -0x10;
        LOCK();
        plVar19 = (longlong *)((longlong)pppppppuVar25 + -0x10);
        *plVar19 = *plVar19 + -1;
        UNLOCK();
        if (*plVar19 == 0) {
          pdb_140c7ba10(alStack_7e8);
        }
      }
    }
    pppppppuStack_318 = pppppppuVar18;
    pdb_1421a63d0(&uStack_6e8,&pppppppuStack_318);
    pdb_1410d0740(pppppppuVar18);
    if (pppppppuVar18[5] < (ulonglong ******)0xfffd) {
      uStack_1a8 = 0;
      pbStack_1a0 = (byte *)0x8;
      uStack_198 = 0;
      uStack_730 = 0;
      pdb_140bfabf0(alStack_7e8,uStack_1d8 + 0x20);
      pppppppuStack_738 = pppppppuVar18 + 3;
      lStack_3e8 = 0;
      pbStack_3e0 = (byte *)0x8;
      pppppppuStack_3d8 = (ulonglong *******)0x0;
      pauVar34 = (undefined1 (*) [16])pppppppuVar18[0xc];
      ppppppuStack_710 = pppppppuVar18[0xf];
      auVar58 = *pauVar34;
      pauVar39 = pauVar34 + 1;
      uVar17 = (ulonglong)
               ~(uint)(ushort)((ushort)(SUB161(auVar58 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar58 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar58 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar58 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar58 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar58 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar58 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar58 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar58 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar58 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar58 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar58 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar58 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar58[0xf] >> 7) << 0xf);
      uStack_740 = *param_9;
      ppppppuStack_100 = *pppppppuStack_110;
      ppppppuStack_770 = ppppppuStack_100 + 0x26;
      ppppppuStack_768 = ppppppuStack_100 + 0x25;
      ppppppuStack_788 = ppppppuStack_100 + 0x24;
      ppppppuStack_780 = *pppppppuStack_130;
      ppppuStack_3a0 = *pppppuStack_108;
      uStack_3d0 = *param_8;
      ppppppuVar29 = ppppppuStack_710;
      pppppppuStack_458 = pppppppuVar18;
LAB_1428dc55e:
      do {
        uVar14 = (uint)uVar17;
        if (ppppppuVar29 == (ulonglong ******)0x0) {
          if (lStack_3e8 != 0) {
            pub_1406abac0(pbStack_3e0,lStack_3e8 << 3,8);
          }
          if (uStack_1a8 != 0) {
            pub_1406abac0(pbStack_1a0,uStack_1a8 << 4,8);
          }
          if (lStack_468 == 0) {
            return;
          }
          plVar19 = (longlong *)pdb_140e97000();
          if (((char)plVar19[0xd] != '\x01') &&
             (plVar19 = (longlong *)pdb_142e16b00(plVar19,0), plVar19 == (longlong *)0x0))
          goto LAB_1428e2fc0;
          if (*plVar19 != 0) goto LAB_1428e2dff;
          *plVar19 = -1;
          pppppppuStack_130 = (ulonglong *******)plVar19;
          pdb_140e95370(plVar19 + 1,uStack_460);
          goto LAB_1428e2d09;
        }
        if ((short)uVar17 == 0) {
          do {
            auVar58 = *pauVar39;
            pauVar34 = pauVar34 + -0x48;
            pauVar39 = pauVar39 + 1;
            uVar14 = (ushort)((ushort)(SUB161(auVar58 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar58 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar58 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar58 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar58 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar58 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar58 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar58 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar58 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar58 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar58 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar58 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar58 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar58[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar14 == 0);
        }
        uVar11 = 0;
        for (uVar12 = uVar14; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
          uVar11 = uVar11 + 1;
        }
        uVar17 = (ulonglong)(uVar14 - 1 & uVar14);
        ppppppuVar29 = (ulonglong ******)((longlong)ppppppuVar29 - 1);
      } while (*(short *)((longlong)pauVar34 + (ulonglong)uVar11 * -0x48 + -6) != -1);
      pppppppuStack_130 = (ulonglong *******)((longlong)pauVar34 + (ulonglong)uVar11 * -0x48);
      pppppppuStack_720 = (ulonglong *******)pppppppuStack_130[-9];
      ((char *)((longlong)pppppppuStack_130 + -6))[0] = -2;
      ((char *)((longlong)pppppppuStack_130 + -6))[1] = -1;
      fVar40 = *(float *)(pppppppuStack_130 + -3) + *(float *)(pppppppuStack_130 + -3);
      iVar15 = (int)fVar40;
      fVar45 = *(float *)((longlong)pppppppuStack_130 + -0x14) +
               *(float *)((longlong)pppppppuStack_130 + -0x14);
      if (_DAT_142e382cc < fVar40) {
        iVar15 = 0x7fffffff;
      }
      if (NAN(fVar40)) {
        iVar15 = 0;
      }
      fVar40 = *(float *)(pppppppuStack_130 + -2) + *(float *)(pppppppuStack_130 + -2);
      iVar24 = (int)fVar45;
      if (_DAT_142e382cc < fVar45) {
        iVar24 = 0x7fffffff;
      }
      if (NAN(fVar45)) {
        iVar24 = 0;
      }
      iVar28 = (int)fVar40;
      if (_DAT_142e382cc < fVar40) {
        iVar28 = 0x7fffffff;
      }
      if (NAN(fVar40)) {
        iVar28 = 0;
      }
      uStack_6e8 = (ulonglong *******)CONCAT44(iVar24,iVar15);
      uStack_6e0 = (ulonglong *******)CONCAT44(uStack_6e0._4_4_,iVar28);
      ppppppuStack_710 = ppppppuVar29;
      uStack_728 = pdb_140bba7b0(&uStack_6e8);
      uVar27 = (ulonglong)pppppuStack_108 >> 0x20;
      pppppuStack_108 = (ulonglong *****)((ulonglong)pppppuStack_108 & 0xffffffff00000000);
      if (*(char *)(pppppppuStack_130 + -1) != '\x01') {
        pppppuStack_108 = (ulonglong *****)CONCAT44((int)uVar27,_DAT_142e36f28);
      }
      cVar13 = pdb_140a92670(uStack_740);
      if (cVar13 == '\0') {
        uStack_198 = 0;
        switch(*(char *)((longlong)pppppppuStack_130 + -7)) {
        case '\0':
          pppppppuStack_110 = (ulonglong *******)ppppppuStack_100[9];
          uVar41 = _DAT_142e37990;
          if (pppppppuStack_110[6] == (ulonglong ******)0xffffffffffffffff) {
            uVar41 = 0;
          }
          pppppppuStack_118 = (ulonglong *******)ppppppuStack_100[8];
          uVar42 = _DAT_142e37990;
          if (pppppppuStack_118[6] == (ulonglong ******)0xffffffffffffffff) {
            uVar42 = 0;
          }
          pppppuStack_148 = ppppppuStack_100[3];
          uVar57 = _DAT_142e37874;
          if (pppppuStack_148[6] == (ulonglong ****)0xffffffffffffffff) {
            uVar57 = 0;
          }
          pppppppuStack_160 = (ulonglong *******)ppppppuStack_100[4];
          fVar40 = _DAT_142e36f28;
          if (pppppppuStack_160[6] == (ulonglong ******)0xffffffffffffffff) {
            fVar40 = 0.0;
          }
          uStack_158 = (ulonglong *******)ppppppuStack_100[5];
          fVar45 = _DAT_142e36f28;
          if (uStack_158[6] == (ulonglong ******)0xffffffffffffffff) {
            fVar45 = 0.0;
          }
          pppppuVar23 = ppppppuStack_100[6];
          fVar55 = _DAT_142e36f28;
          if (pppppuVar23[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar55 = 0.0;
          }
          pppppuVar5 = ppppppuStack_100[7];
          fVar56 = _DAT_142e36f28;
          if (pppppuVar5[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar56 = 0.0;
          }
          pppppuVar6 = ppppppuStack_100[10];
          fVar54 = _DAT_142e36f28;
          if (pppppuVar6[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar54 = 0.0;
          }
          pppppuVar7 = ppppppuStack_100[0xb];
          pppppuStack_108 =
               (ulonglong *****)
               CONCAT44(pppppuStack_108._4_4_,pppppuStack_108._0_4_ * _DAT_142e37838);
          fVar59 = _DAT_142e36f28;
          if (pppppuVar7[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar59 = 0.0;
          }
          if (uStack_1a8 < 9) {
            pdb_142d7f1b0(&uStack_1a8,0,9,8);
          }
          else {
            uStack_198 = 0;
          }
          lVar16 = uStack_198 * 0x10;
          *(ulonglong ********)(pbStack_1a0 + lVar16) = pppppppuStack_110;
          *(undefined4 *)(pbStack_1a0 + lVar16 + 8) = uVar41;
          *(ulonglong ********)(pbStack_1a0 + lVar16 + 0x10) = pppppppuStack_118;
          *(undefined4 *)(pbStack_1a0 + lVar16 + 0x18) = uVar42;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x20) = pppppuStack_148;
          *(undefined4 *)(pbStack_1a0 + lVar16 + 0x28) = uVar57;
          *(ulonglong ********)(pbStack_1a0 + lVar16 + 0x30) = pppppppuStack_160;
          *(float *)(pbStack_1a0 + lVar16 + 0x38) = fVar40;
          *(ulonglong ********)(pbStack_1a0 + lVar16 + 0x40) = uStack_158;
          *(float *)(pbStack_1a0 + lVar16 + 0x48) = fVar45;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x50) = pppppuVar23;
          *(float *)(pbStack_1a0 + lVar16 + 0x58) = fVar55;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x60) = pppppuVar5;
          *(float *)(pbStack_1a0 + lVar16 + 0x68) = fVar56;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x70) = pppppuVar6;
          *(float *)(pbStack_1a0 + lVar16 + 0x78) = pppppuStack_108._0_4_ * fVar54;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x80) = pppppuVar7;
          *(float *)(pbStack_1a0 + lVar16 + 0x88) = fVar59;
          pppppuStack_148 = (ulonglong *****)(uStack_198 + 9);
          break;
        case '\x01':
          pppppppuStack_110 = (ulonglong *******)ppppppuStack_100[10];
          fVar40 = _DAT_142e36f28;
          if (pppppppuStack_110[6] == (ulonglong ******)0xffffffffffffffff) {
            fVar40 = 0.0;
          }
          pppppppuStack_160 = (ulonglong *******)CONCAT44(pppppppuStack_160._4_4_,fVar40);
          pppppppuStack_118 = (ulonglong *******)ppppppuStack_100[0x19];
          fVar40 = _DAT_142f95160;
          if (pppppppuStack_118[6] == (ulonglong ******)0xffffffffffffffff) {
            fVar40 = 0.0;
          }
          pppppuStack_148 = (ulonglong *****)CONCAT44(pppppuStack_148._4_4_,fVar40);
          uStack_158 = (ulonglong *******)ppppppuStack_100[0x18];
          fVar40 = _DAT_142e36f50;
          if (uStack_158[6] == (ulonglong ******)0xffffffffffffffff) {
            fVar40 = 0.0;
          }
          pppppppuStack_138 = (ulonglong *******)CONCAT44(pppppppuStack_138._4_4_,fVar40);
          pppppppuStack_128 = (ulonglong *******)ppppppuStack_100[0x17];
          fVar40 = _DAT_142e36f28;
          if (pppppppuStack_128[6] == (ulonglong ******)0xffffffffffffffff) {
            fVar40 = 0.0;
          }
          pppppppuStack_170 = (ulonglong *******)CONCAT44(pppppppuStack_170._4_4_,fVar40);
          auStack_258._0_8_ = ppppppuStack_100[0x15];
          fVar40 = _DAT_142f95160;
          if (ppppppuStack_100[0x15][6] == (ulonglong ****)0xffffffffffffffff) {
            fVar40 = 0.0;
          }
          pppppuStack_140 = (ulonglong *****)CONCAT44(pppppuStack_140._4_4_,fVar40);
          pppppuStack_168 = ppppppuStack_100[0x14];
          fVar40 = _DAT_142f95160;
          if (pppppuStack_168[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar40 = 0.0;
          }
          pppppuStack_1d0 = (ulonglong *****)CONCAT44(pppppuStack_1d0._4_4_,fVar40);
          pppppuStack_190 = ppppppuStack_100[0x13];
          fVar40 = _DAT_142e36f50;
          if (pppppuStack_190[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar40 = 0.0;
          }
          pppppppuStack_120 = (ulonglong *******)CONCAT44(pppppppuStack_120._4_4_,fVar40);
          pppppuStack_1c8 = ppppppuStack_100[0x11];
          fVar40 = _DAT_142f95160;
          if (pppppuStack_1c8[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar40 = 0.0;
          }
          pppppuStack_1c0 = (ulonglong *****)CONCAT44(pppppuStack_1c0._4_4_,fVar40);
          pppppuStack_1b8 = ppppppuStack_100[0x10];
          fVar40 = _DAT_142f95160;
          if (pppppuStack_1b8[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar40 = 0.0;
          }
          pppppuStack_1b0 = (ulonglong *****)CONCAT44(pppppuStack_1b0._4_4_,fVar40);
          pppppuStack_188 = ppppppuStack_100[0x16];
          fVar40 = _DAT_142f95160;
          if (pppppuStack_188[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar40 = 0.0;
          }
          pppppuStack_230 = ppppppuStack_100[0xe];
          fVar45 = _DAT_142e36f28;
          if (pppppuStack_230[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar45 = 0.0;
          }
          pppppuStack_220 = ppppppuStack_100[0xf];
          fVar55 = _DAT_142e36f28;
          if (pppppuStack_220[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar55 = 0.0;
          }
          pppppuStack_218 = ppppppuStack_100[9];
          uVar41 = _DAT_142e37990;
          if (pppppuStack_218[6] == (ulonglong ****)0xffffffffffffffff) {
            uVar41 = 0;
          }
          pppppuStack_210 = ppppppuStack_100[8];
          uVar42 = _DAT_142e37990;
          if (pppppuStack_210[6] == (ulonglong ****)0xffffffffffffffff) {
            uVar42 = 0;
          }
          pppppuStack_228 = (ulonglong *****)CONCAT44(pppppuStack_228._4_4_,fVar45);
          pppppuStack_180 = (ulonglong *****)CONCAT44(pppppuStack_180._4_4_,fVar40);
          pppppuStack_200 = ppppppuStack_100[3];
          pppppuStack_208 = ppppppuStack_100[4];
          fVar40 = _DAT_142e36f28;
          if (pppppuStack_200[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar40 = 0.0;
          }
          pppppuStack_1f8 = ppppppuStack_100[0x12];
          fVar45 = _DAT_142e37838;
          if (pppppuStack_1f8[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar45 = 0.0;
          }
          fVar56 = _DAT_142e36f28;
          if (pppppuStack_208[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar56 = 0.0;
          }
          pppppuVar23 = ppppppuStack_100[5];
          fVar54 = _DAT_142e36f28;
          if (pppppuVar23[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar54 = 0.0;
          }
          pppppuVar5 = ppppppuStack_100[6];
          fVar59 = _DAT_142e36f28;
          if (pppppuVar5[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar59 = 0.0;
          }
          pppppuVar6 = ppppppuStack_100[7];
          pppppuVar7 = ppppppuStack_100[0xb];
          ppppuVar8 = pppppuVar7[6];
          if (pppppuVar6[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar44 = 0.0;
            if (ppppuVar8 == (ulonglong ****)0xffffffffffffffff) goto code_r0x0001428e20de;
code_r0x0001428e1e8d:
            fVar62 = _DAT_142e36f28;
            if (uStack_1a8 < 0x15) goto code_r0x0001428e20f0;
code_r0x0001428e1e9b:
            uStack_198 = 0;
          }
          else {
            fVar44 = _DAT_142e36f28;
            if (ppppuVar8 != (ulonglong ****)0xffffffffffffffff) goto code_r0x0001428e1e8d;
code_r0x0001428e20de:
            fVar62 = 0.0;
            if (0x14 < uStack_1a8) goto code_r0x0001428e1e9b;
code_r0x0001428e20f0:
            pdb_142d7f1b0(&uStack_1a8,0,0x15,8);
          }
          fVar50 = pppppuStack_108._0_4_ * _DAT_142e37838;
          lVar16 = uStack_198 * 0x10;
          *(ulonglong ********)(pbStack_1a0 + lVar16) = pppppppuStack_110;
          *(float *)(pbStack_1a0 + lVar16 + 8) = fVar50 * pppppppuStack_160._0_4_;
          *(ulonglong ********)(pbStack_1a0 + lVar16 + 0x10) = pppppppuStack_118;
          *(undefined4 *)(pbStack_1a0 + lVar16 + 0x18) = pppppuStack_148._0_4_;
          *(ulonglong ********)(pbStack_1a0 + lVar16 + 0x20) = uStack_158;
          *(undefined4 *)(pbStack_1a0 + lVar16 + 0x28) = pppppppuStack_138._0_4_;
          *(ulonglong ********)(pbStack_1a0 + lVar16 + 0x30) = pppppppuStack_128;
          *(undefined4 *)(pbStack_1a0 + lVar16 + 0x38) = pppppppuStack_170._0_4_;
          *(undefined8 *)(pbStack_1a0 + lVar16 + 0x40) = auStack_258._0_8_;
          *(uint *)(pbStack_1a0 + lVar16 + 0x48) = (uint)pppppuStack_140;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x50) = pppppuStack_168;
          *(undefined4 *)(pbStack_1a0 + lVar16 + 0x58) = pppppuStack_1d0._0_4_;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x60) = pppppuStack_190;
          *(undefined4 *)(pbStack_1a0 + lVar16 + 0x68) = pppppppuStack_120._0_4_;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x70) = pppppuStack_1c8;
          *(undefined4 *)(pbStack_1a0 + lVar16 + 0x78) = pppppuStack_1c0._0_4_;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x80) = pppppuStack_1b8;
          *(undefined4 *)(pbStack_1a0 + lVar16 + 0x88) = pppppuStack_1b0._0_4_;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x90) = pppppuStack_188;
          *(undefined4 *)(pbStack_1a0 + lVar16 + 0x98) = pppppuStack_180._0_4_;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0xa0) = pppppuStack_230;
          *(undefined4 *)(pbStack_1a0 + lVar16 + 0xa8) = pppppuStack_228._0_4_;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0xb0) = pppppuStack_220;
          *(float *)(pbStack_1a0 + lVar16 + 0xb8) = fVar55;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0xc0) = pppppuStack_218;
          *(undefined4 *)(pbStack_1a0 + lVar16 + 200) = uVar41;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0xd0) = pppppuStack_210;
          *(undefined4 *)(pbStack_1a0 + lVar16 + 0xd8) = uVar42;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0xe0) = pppppuStack_200;
          *(float *)(pbStack_1a0 + lVar16 + 0xe8) = fVar40 + fVar40;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0xf0) = pppppuStack_1f8;
          *(float *)(pbStack_1a0 + lVar16 + 0xf8) = fVar45;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x100) = pppppuStack_208;
          *(float *)(pbStack_1a0 + lVar16 + 0x108) = fVar56;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x110) = pppppuVar23;
          *(float *)(pbStack_1a0 + lVar16 + 0x118) = fVar54;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x120) = pppppuVar5;
          *(float *)(pbStack_1a0 + lVar16 + 0x128) = fVar59;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x130) = pppppuVar6;
          *(float *)(pbStack_1a0 + lVar16 + 0x138) = fVar44;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x140) = pppppuVar7;
          *(float *)(pbStack_1a0 + lVar16 + 0x148) = fVar62;
          pppppuStack_148 = (ulonglong *****)(uStack_198 + 0x15);
          break;
        case '\x02':
          pppppppuStack_110 = (ulonglong *******)ppppppuStack_100[10];
          fVar40 = _DAT_142e36f28;
          if (pppppppuStack_110[6] == (ulonglong ******)0xffffffffffffffff) {
            fVar40 = 0.0;
          }
          pppppppuStack_160 = (ulonglong *******)CONCAT44(pppppppuStack_160._4_4_,fVar40);
          pppppppuStack_118 = (ulonglong *******)ppppppuStack_100[0x19];
          fVar40 = _DAT_142f95160;
          if (pppppppuStack_118[6] == (ulonglong ******)0xffffffffffffffff) {
            fVar40 = 0.0;
          }
          pppppuStack_148 = (ulonglong *****)CONCAT44(pppppuStack_148._4_4_,fVar40);
          uStack_158 = (ulonglong *******)ppppppuStack_100[0x18];
          fVar40 = _DAT_142e36f50;
          if (uStack_158[6] == (ulonglong ******)0xffffffffffffffff) {
            fVar40 = 0.0;
          }
          pppppppuStack_138 = (ulonglong *******)CONCAT44(pppppppuStack_138._4_4_,fVar40);
          pppppppuStack_128 = (ulonglong *******)ppppppuStack_100[0x17];
          fVar40 = _DAT_142e36f28;
          if (pppppppuStack_128[6] == (ulonglong ******)0xffffffffffffffff) {
            fVar40 = 0.0;
          }
          pppppppuStack_170 = (ulonglong *******)CONCAT44(pppppppuStack_170._4_4_,fVar40);
          auStack_258._0_8_ = ppppppuStack_100[0x15];
          fVar40 = _DAT_142f95160;
          if (ppppppuStack_100[0x15][6] == (ulonglong ****)0xffffffffffffffff) {
            fVar40 = 0.0;
          }
          pppppuStack_140 = (ulonglong *****)CONCAT44(pppppuStack_140._4_4_,fVar40);
          pppppuStack_168 = ppppppuStack_100[0x14];
          fVar40 = _DAT_142f95160;
          if (pppppuStack_168[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar40 = 0.0;
          }
          pppppuStack_1d0 = (ulonglong *****)CONCAT44(pppppuStack_1d0._4_4_,fVar40);
          pppppuStack_190 = ppppppuStack_100[0x13];
          fVar40 = _DAT_142e36f50;
          if (pppppuStack_190[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar40 = 0.0;
          }
          pppppppuStack_120 = (ulonglong *******)CONCAT44(pppppppuStack_120._4_4_,fVar40);
          pppppuStack_1c8 = ppppppuStack_100[0x11];
          fVar40 = _DAT_142f95160;
          if (pppppuStack_1c8[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar40 = 0.0;
          }
          pppppuStack_1c0 = (ulonglong *****)CONCAT44(pppppuStack_1c0._4_4_,fVar40);
          pppppuStack_1b8 = ppppppuStack_100[0x10];
          fVar40 = _DAT_142f95160;
          if (pppppuStack_1b8[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar40 = 0.0;
          }
          pppppuStack_1b0 = (ulonglong *****)CONCAT44(pppppuStack_1b0._4_4_,fVar40);
          pppppuStack_188 = ppppppuStack_100[0x16];
          fVar40 = _DAT_142f95160;
          if (pppppuStack_188[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar40 = 0.0;
          }
          pppppuStack_230 = ppppppuStack_100[0xe];
          fVar45 = _DAT_142e36f28;
          if (pppppuStack_230[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar45 = 0.0;
          }
          pppppuStack_180 = (ulonglong *****)CONCAT44(pppppuStack_180._4_4_,fVar40);
          pppppuStack_220 = ppppppuStack_100[0xf];
          fVar40 = _DAT_142e36f28;
          if (pppppuStack_220[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar40 = 0.0;
          }
          pppppuStack_218 = (ulonglong *****)CONCAT44(pppppuStack_218._4_4_,fVar40);
          pppppuStack_210 = ppppppuStack_100[9];
          uVar41 = _DAT_142e37990;
          if (pppppuStack_210[6] == (ulonglong ****)0xffffffffffffffff) {
            uVar41 = 0;
          }
          pppppuStack_208 = (ulonglong *****)CONCAT44(pppppuStack_208._4_4_,uVar41);
          pppppuStack_200 = ppppppuStack_100[8];
          uVar41 = _DAT_142e37990;
          if (pppppuStack_200[6] == (ulonglong ****)0xffffffffffffffff) {
            uVar41 = 0;
          }
          pppppuStack_298 = (ulonglong *****)CONCAT44(pppppuStack_298._4_4_,uVar41);
          pppppuStack_290 = ppppppuStack_100[3];
          pppppuStack_1f8 = ppppppuStack_100[4];
          fVar40 = _DAT_142e36f28;
          if (pppppuStack_290[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar40 = 0.0;
          }
          pppppuStack_288 = ppppppuStack_100[0x12];
          fVar55 = _DAT_142e37838;
          if (pppppuStack_288[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar55 = 0.0;
          }
          fVar56 = _DAT_142e36f28;
          if (pppppuStack_1f8[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar56 = 0.0;
          }
          pppppuStack_278 = ppppppuStack_100[5];
          fVar54 = _DAT_142e36f28;
          if (pppppuStack_278[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar54 = 0.0;
          }
          pppppuStack_270 = ppppppuStack_100[6];
          fVar59 = _DAT_142e36f28;
          if (pppppuStack_270[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar59 = 0.0;
          }
          pppppuStack_280 = (ulonglong *****)CONCAT44(pppppuStack_280._4_4_,fVar55);
          pppppuStack_228 = (ulonglong *****)CONCAT44(pppppuStack_228._4_4_,fVar45);
          pppppuStack_268 = ppppppuStack_100[7];
          fVar45 = _DAT_142e36f28;
          if (pppppuStack_268[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar45 = 0.0;
          }
          pppppuStack_260 = ppppppuStack_100[0xb];
          fVar55 = _DAT_142e36f28;
          if (pppppuStack_260[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar55 = 0.0;
          }
          pppppuVar23 = ppppppuStack_100[0x1c];
          fVar44 = _DAT_142e36f50;
          if (pppppuVar23[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar44 = 0.0;
          }
          pppppuVar5 = ppppppuStack_100[0x1d];
          fVar62 = _DAT_142e36f50;
          if (pppppuVar5[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar62 = 0.0;
          }
          pppppuVar6 = ppppppuStack_100[0x1a];
          pppppuVar7 = ppppppuStack_100[0x1b];
          ppppuVar8 = pppppuVar7[6];
          if (pppppuVar6[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar50 = 0.0;
            if (ppppuVar8 == (ulonglong ****)0xffffffffffffffff) goto code_r0x0001428e142b;
code_r0x0001428e1151:
            fVar63 = _DAT_142e36f50;
            if (uStack_1a8 < 0x19) goto code_r0x0001428e143d;
code_r0x0001428e115f:
            uStack_198 = 0;
          }
          else {
            fVar50 = _DAT_142e36f50;
            if (ppppuVar8 != (ulonglong ****)0xffffffffffffffff) goto code_r0x0001428e1151;
code_r0x0001428e142b:
            fVar63 = 0.0;
            if (0x18 < uStack_1a8) goto code_r0x0001428e115f;
code_r0x0001428e143d:
            pdb_142d7f1b0(&uStack_1a8,0,0x19,8);
          }
          fVar43 = pppppuStack_108._0_4_ * _DAT_142e37838;
          lVar16 = uStack_198 * 0x10;
          *(ulonglong ********)(pbStack_1a0 + lVar16) = pppppppuStack_110;
          *(float *)(pbStack_1a0 + lVar16 + 8) = fVar43 * pppppppuStack_160._0_4_;
          *(ulonglong ********)(pbStack_1a0 + lVar16 + 0x10) = pppppppuStack_118;
          *(undefined4 *)(pbStack_1a0 + lVar16 + 0x18) = pppppuStack_148._0_4_;
          *(ulonglong ********)(pbStack_1a0 + lVar16 + 0x20) = uStack_158;
          *(undefined4 *)(pbStack_1a0 + lVar16 + 0x28) = pppppppuStack_138._0_4_;
          *(ulonglong ********)(pbStack_1a0 + lVar16 + 0x30) = pppppppuStack_128;
          *(undefined4 *)(pbStack_1a0 + lVar16 + 0x38) = pppppppuStack_170._0_4_;
          *(undefined8 *)(pbStack_1a0 + lVar16 + 0x40) = auStack_258._0_8_;
          *(uint *)(pbStack_1a0 + lVar16 + 0x48) = (uint)pppppuStack_140;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x50) = pppppuStack_168;
          *(undefined4 *)(pbStack_1a0 + lVar16 + 0x58) = pppppuStack_1d0._0_4_;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x60) = pppppuStack_190;
          *(undefined4 *)(pbStack_1a0 + lVar16 + 0x68) = pppppppuStack_120._0_4_;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x70) = pppppuStack_1c8;
          *(undefined4 *)(pbStack_1a0 + lVar16 + 0x78) = pppppuStack_1c0._0_4_;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x80) = pppppuStack_1b8;
          *(undefined4 *)(pbStack_1a0 + lVar16 + 0x88) = pppppuStack_1b0._0_4_;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x90) = pppppuStack_188;
          *(undefined4 *)(pbStack_1a0 + lVar16 + 0x98) = pppppuStack_180._0_4_;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0xa0) = pppppuStack_230;
          *(undefined4 *)(pbStack_1a0 + lVar16 + 0xa8) = pppppuStack_228._0_4_;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0xb0) = pppppuStack_220;
          *(undefined4 *)(pbStack_1a0 + lVar16 + 0xb8) = pppppuStack_218._0_4_;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0xc0) = pppppuStack_210;
          *(undefined4 *)(pbStack_1a0 + lVar16 + 200) = pppppuStack_208._0_4_;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0xd0) = pppppuStack_200;
          *(undefined4 *)(pbStack_1a0 + lVar16 + 0xd8) = pppppuStack_298._0_4_;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0xe0) = pppppuStack_290;
          *(float *)(pbStack_1a0 + lVar16 + 0xe8) = fVar40 + fVar40;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0xf0) = pppppuStack_288;
          *(undefined4 *)(pbStack_1a0 + lVar16 + 0xf8) = pppppuStack_280._0_4_;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x100) = pppppuStack_1f8;
          *(float *)(pbStack_1a0 + lVar16 + 0x108) = fVar56;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x110) = pppppuStack_278;
          *(float *)(pbStack_1a0 + lVar16 + 0x118) = fVar54;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x120) = pppppuStack_270;
          *(float *)(pbStack_1a0 + lVar16 + 0x128) = fVar59;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x130) = pppppuStack_268;
          *(float *)(pbStack_1a0 + lVar16 + 0x138) = fVar45;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x140) = pppppuStack_260;
          *(float *)(pbStack_1a0 + lVar16 + 0x148) = fVar55;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x150) = pppppuVar23;
          *(float *)(pbStack_1a0 + lVar16 + 0x158) = fVar44;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x160) = pppppuVar5;
          *(float *)(pbStack_1a0 + lVar16 + 0x168) = fVar62;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x170) = pppppuVar6;
          *(float *)(pbStack_1a0 + lVar16 + 0x178) = fVar50;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x180) = pppppuVar7;
          *(float *)(pbStack_1a0 + lVar16 + 0x188) = fVar63;
          pppppuStack_148 = (ulonglong *****)(uStack_198 + 0x19);
          break;
        case '\x03':
          pppppppuStack_110 = (ulonglong *******)ppppppuStack_100[0x19];
          fVar40 = _DAT_142e36f28;
          if (pppppppuStack_110[6] == (ulonglong ******)0xffffffffffffffff) {
            fVar40 = 0.0;
          }
          pppppppuStack_118 = (ulonglong *******)ppppppuStack_100[0x18];
          fVar45 = _DAT_142e36f28;
          if (pppppppuStack_118[6] == (ulonglong ******)0xffffffffffffffff) {
            fVar45 = 0.0;
          }
          pppppuStack_148 = ppppppuStack_100[0x17];
          fVar55 = _DAT_142e36f28;
          if (pppppuStack_148[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar55 = 0.0;
          }
          pppppppuStack_160 = (ulonglong *******)ppppppuStack_100[0x15];
          fVar56 = _DAT_142e36f28;
          if (pppppppuStack_160[6] == (ulonglong ******)0xffffffffffffffff) {
            fVar56 = 0.0;
          }
          uStack_158 = (ulonglong *******)ppppppuStack_100[0x14];
          fVar54 = _DAT_142e36f28;
          if (uStack_158[6] == (ulonglong ******)0xffffffffffffffff) {
            fVar54 = 0.0;
          }
          pppppppuStack_128 = (ulonglong *******)ppppppuStack_100[0x13];
          fVar59 = _DAT_142e36f28;
          if (pppppppuStack_128[6] == (ulonglong ******)0xffffffffffffffff) {
            fVar59 = 0.0;
          }
          pppppppuStack_170 = (ulonglong *******)CONCAT44(pppppppuStack_170._4_4_,fVar59);
          auStack_258._0_8_ = ppppppuStack_100[0x11];
          fVar59 = _DAT_142e36f28;
          if (ppppppuStack_100[0x11][6] == (ulonglong ****)0xffffffffffffffff) {
            fVar59 = 0.0;
          }
          pppppuStack_140 = (ulonglong *****)CONCAT44(pppppuStack_140._4_4_,fVar59);
          pppppuStack_168 = ppppppuStack_100[0x10];
          fVar59 = _DAT_142f95160;
          if (pppppuStack_168[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar59 = 0.0;
          }
          pppppuStack_1d0 = (ulonglong *****)CONCAT44(pppppuStack_1d0._4_4_,fVar59);
          pppppuStack_190 = ppppppuStack_100[0x16];
          fVar59 = _DAT_142f95160;
          if (pppppuStack_190[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar59 = 0.0;
          }
          pppppppuStack_120 = (ulonglong *******)CONCAT44(pppppppuStack_120._4_4_,fVar59);
          pppppuStack_1c8 = ppppppuStack_100[0xe];
          fVar59 = _DAT_142f95160;
          if (pppppuStack_1c8[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar59 = 0.0;
          }
          pppppuStack_1c0 = (ulonglong *****)CONCAT44(pppppuStack_1c0._4_4_,fVar59);
          pppppuStack_1b8 = ppppppuStack_100[0xf];
          fVar59 = _DAT_142f95160;
          if (pppppuStack_1b8[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar59 = 0.0;
          }
          pppppuStack_1b0 = (ulonglong *****)CONCAT44(pppppuStack_1b0._4_4_,fVar59);
          pppppuStack_188 = ppppppuStack_100[0x12];
          fVar59 = _DAT_142e36f28;
          if (pppppuStack_188[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar59 = 0.0;
          }
          pppppuStack_180 = (ulonglong *****)CONCAT44(pppppuStack_180._4_4_,fVar59);
          pppppuStack_230 = ppppppuStack_100[0x1c];
          fVar59 = _DAT_142f95160;
          if (pppppuStack_230[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar59 = 0.0;
          }
          pppppuStack_228 = (ulonglong *****)CONCAT44(pppppuStack_228._4_4_,fVar59);
          pppppuStack_220 = ppppppuStack_100[0x1d];
          fVar59 = _DAT_142f95160;
          if (pppppuStack_220[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar59 = 0.0;
          }
          pppppuStack_218 = (ulonglong *****)CONCAT44(pppppuStack_218._4_4_,fVar59);
          pppppuStack_210 = ppppppuStack_100[0x1a];
          fVar59 = _DAT_142f95160;
          if (pppppuStack_210[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar59 = 0.0;
          }
          pppppuStack_200 = ppppppuStack_100[0x1b];
          fVar44 = _DAT_142f95160;
          if (pppppuStack_200[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar44 = 0.0;
          }
          pppppuStack_298 = ppppppuStack_100[9];
          fVar62 = _DAT_142e36f28;
          if (pppppuStack_298[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar62 = 0.0;
          }
          pppppuStack_288 = ppppppuStack_100[8];
          fVar50 = _DAT_142e36f28;
          if (pppppuStack_288[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar50 = 0.0;
          }
          pppppuStack_280 = (ulonglong *****)CONCAT44(pppppuStack_280._4_4_,fVar50);
          pppppuStack_270 = ppppppuStack_100[3];
          pppppuStack_278 = ppppppuStack_100[4];
          fVar50 = _DAT_143007998;
          if (pppppuStack_270[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar50 = 0.0;
          }
          pppppuStack_268 = (ulonglong *****)CONCAT44(pppppuStack_268._4_4_,fVar50);
          pppppuStack_290 = (ulonglong *****)CONCAT44(pppppuStack_290._4_4_,fVar62);
          pppppuStack_1f8 = (ulonglong *****)CONCAT44(pppppuStack_1f8._4_4_,fVar44);
          pppppuStack_208 = (ulonglong *****)CONCAT44(pppppuStack_208._4_4_,fVar59);
          pppppppuStack_138 = (ulonglong *******)CONCAT44(pppppppuStack_138._4_4_,fVar54);
          fVar54 = _DAT_142e36f28;
          if (pppppuStack_278[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar54 = 0.0;
          }
          pppppuStack_260 = ppppppuStack_100[5];
          fVar59 = _DAT_142e36f28;
          if (pppppuStack_260[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar59 = 0.0;
          }
          pppppuVar23 = ppppppuStack_100[6];
          fVar44 = _DAT_142e36f28;
          if (pppppuVar23[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar44 = 0.0;
          }
          pppppuVar5 = ppppppuStack_100[7];
          fVar62 = _DAT_142e36f28;
          if (pppppuVar5[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar62 = 0.0;
          }
          pppppuVar6 = ppppppuStack_100[10];
          pppppuVar7 = ppppppuStack_100[0xb];
          ppppuVar8 = pppppuVar7[6];
          if (pppppuVar6[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar50 = 0.0;
            if (ppppuVar8 == (ulonglong ****)0xffffffffffffffff) goto code_r0x0001428e1b26;
code_r0x0001428e1855:
            fVar63 = _DAT_142e36f28;
            if (uStack_1a8 < 0x19) goto code_r0x0001428e1b38;
code_r0x0001428e1863:
            uStack_198 = 0;
          }
          else {
            fVar50 = _DAT_142e36f28;
            if (ppppuVar8 != (ulonglong ****)0xffffffffffffffff) goto code_r0x0001428e1855;
code_r0x0001428e1b26:
            fVar63 = 0.0;
            if (0x18 < uStack_1a8) goto code_r0x0001428e1863;
code_r0x0001428e1b38:
            pdb_142d7f1b0(&uStack_1a8,0,0x19,8);
          }
          lVar16 = uStack_198 * 0x10;
          *(ulonglong ********)(pbStack_1a0 + lVar16) = pppppppuStack_110;
          *(float *)(pbStack_1a0 + lVar16 + 8) = fVar40;
          *(ulonglong ********)(pbStack_1a0 + lVar16 + 0x10) = pppppppuStack_118;
          *(float *)(pbStack_1a0 + lVar16 + 0x18) = fVar45;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x20) = pppppuStack_148;
          *(float *)(pbStack_1a0 + lVar16 + 0x28) = fVar55;
          *(ulonglong ********)(pbStack_1a0 + lVar16 + 0x30) = pppppppuStack_160;
          *(float *)(pbStack_1a0 + lVar16 + 0x38) = fVar56;
          *(ulonglong ********)(pbStack_1a0 + lVar16 + 0x40) = uStack_158;
          *(undefined4 *)(pbStack_1a0 + lVar16 + 0x48) = pppppppuStack_138._0_4_;
          *(ulonglong ********)(pbStack_1a0 + lVar16 + 0x50) = pppppppuStack_128;
          *(undefined4 *)(pbStack_1a0 + lVar16 + 0x58) = pppppppuStack_170._0_4_;
          *(undefined8 *)(pbStack_1a0 + lVar16 + 0x60) = auStack_258._0_8_;
          *(uint *)(pbStack_1a0 + lVar16 + 0x68) = (uint)pppppuStack_140;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x70) = pppppuStack_168;
          *(undefined4 *)(pbStack_1a0 + lVar16 + 0x78) = pppppuStack_1d0._0_4_;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x80) = pppppuStack_190;
          *(undefined4 *)(pbStack_1a0 + lVar16 + 0x88) = pppppppuStack_120._0_4_;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x90) = pppppuStack_1c8;
          *(undefined4 *)(pbStack_1a0 + lVar16 + 0x98) = pppppuStack_1c0._0_4_;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0xa0) = pppppuStack_1b8;
          *(undefined4 *)(pbStack_1a0 + lVar16 + 0xa8) = pppppuStack_1b0._0_4_;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0xb0) = pppppuStack_188;
          *(undefined4 *)(pbStack_1a0 + lVar16 + 0xb8) = pppppuStack_180._0_4_;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0xc0) = pppppuStack_230;
          *(undefined4 *)(pbStack_1a0 + lVar16 + 200) = pppppuStack_228._0_4_;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0xd0) = pppppuStack_220;
          *(undefined4 *)(pbStack_1a0 + lVar16 + 0xd8) = pppppuStack_218._0_4_;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0xe0) = pppppuStack_210;
          *(undefined4 *)(pbStack_1a0 + lVar16 + 0xe8) = pppppuStack_208._0_4_;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0xf0) = pppppuStack_200;
          *(undefined4 *)(pbStack_1a0 + lVar16 + 0xf8) = pppppuStack_1f8._0_4_;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x100) = pppppuStack_298;
          *(undefined4 *)(pbStack_1a0 + lVar16 + 0x108) = pppppuStack_290._0_4_;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x110) = pppppuStack_288;
          *(undefined4 *)(pbStack_1a0 + lVar16 + 0x118) = pppppuStack_280._0_4_;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x120) = pppppuStack_270;
          *(undefined4 *)(pbStack_1a0 + lVar16 + 0x128) = pppppuStack_268._0_4_;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x130) = pppppuStack_278;
          *(float *)(pbStack_1a0 + lVar16 + 0x138) = fVar54;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x140) = pppppuStack_260;
          *(float *)(pbStack_1a0 + lVar16 + 0x148) = fVar59;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x150) = pppppuVar23;
          *(float *)(pbStack_1a0 + lVar16 + 0x158) = fVar44;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x160) = pppppuVar5;
          *(float *)(pbStack_1a0 + lVar16 + 0x168) = fVar62;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x170) = pppppuVar6;
          *(float *)(pbStack_1a0 + lVar16 + 0x178) = pppppuStack_108._0_4_ * fVar50;
          *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x180) = pppppuVar7;
          *(float *)(pbStack_1a0 + lVar16 + 0x188) = fVar63;
          pppppuStack_148 = (ulonglong *****)(uStack_198 + 0x19);
          break;
        case '\x04':
          pppppppuStack_110 = (ulonglong *******)ppppppuStack_100[0x2d];
          fVar40 = _DAT_142e36f28;
          if (pppppppuStack_110[6] == (ulonglong ******)0xffffffffffffffff) {
            fVar40 = 0.0;
          }
          pppppuStack_148 = ppppppuStack_100[0x38];
          fVar45 = _DAT_142e36f28;
          if (pppppuStack_148[6] == (ulonglong ****)0xffffffffffffffff) {
            fVar45 = 0.0;
          }
          pppppppuStack_160 = (ulonglong *******)ppppppuStack_100[0x39];
          fVar55 = _DAT_142e36f28;
          if (pppppppuStack_160[6] == (ulonglong ******)0xffffffffffffffff) {
            fVar55 = 0.0;
          }
          uStack_158 = (ulonglong *******)ppppppuStack_100[0x27];
          fVar56 = _DAT_142e36f28;
          if (uStack_158[6] == (ulonglong ******)0xffffffffffffffff) {
            fVar56 = 0.0;
          }
          pppppppuStack_138 = (ulonglong *******)ppppppuStack_100[0x28];
          fVar54 = _DAT_142e36f28;
          if (pppppppuStack_138[6] == (ulonglong ******)0xffffffffffffffff) {
            fVar54 = 0.0;
          }
          pppppppuStack_128 = (ulonglong *******)ppppppuStack_100[0x32];
          fStack_680 = _DAT_142e36f28;
          if (pppppppuStack_128[6] == (ulonglong ******)0xffffffffffffffff) {
            fStack_680 = 0.0;
          }
          auStack_258._0_8_ = ppppppuStack_100[0x30];
          fStack_670 = _DAT_142e36f28;
          if (*(ulonglong *****)(auStack_258._0_8_ + 0x30) == (ulonglong ****)0xffffffffffffffff) {
            fStack_670 = 0.0;
          }
          pppppuStack_140 = ppppppuStack_100[0x31];
          fStack_660 = _DAT_142e36f28;
          if (pppppuStack_140[6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_660 = 0.0;
          }
          pppppppuStack_118 = (ulonglong *******)CONCAT44(pppppppuStack_118._4_4_,fVar40);
          pppppuStack_1d0 = ppppppuStack_100[0x33];
          fStack_650 = _DAT_142e36f28;
          if (pppppuStack_1d0[6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_650 = 0.0;
          }
          pppppuStack_190 = (ulonglong *****)CONCAT44(pppppuStack_190._4_4_,fStack_650);
          pppppppuStack_120 = (ulonglong *******)ppppppuStack_100[0x34];
          fStack_640 = _DAT_142f95160;
          if (pppppppuStack_120[6] == (ulonglong ******)0xffffffffffffffff) {
            fStack_640 = 0.0;
          }
          pppppuStack_1c0 = ppppppuStack_100[0x2e];
          fStack_630 = _DAT_142e36f28;
          if (pppppuStack_1c0[6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_630 = 0.0;
          }
          pppppuStack_1b0 = ppppppuStack_100[0x19];
          fStack_620 = _DAT_142e36f28;
          if (pppppuStack_1b0[6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_620 = 0.0;
          }
          pppppuStack_180 = ppppppuStack_100[0x18];
          fStack_610 = _DAT_142e36f28;
          if (pppppuStack_180[6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_610 = 0.0;
          }
          pppppuStack_228 = ppppppuStack_100[0x17];
          fStack_600 = _DAT_142e36f28;
          if (pppppuStack_228[6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_600 = 0.0;
          }
          pppppuStack_218 = ppppppuStack_100[0x15];
          fStack_5f0 = _DAT_142e36f28;
          if (pppppuStack_218[6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_5f0 = 0.0;
          }
          pppppuStack_208 = ppppppuStack_100[0x14];
          fStack_5e0 = _DAT_142e36f28;
          if (pppppuStack_208[6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_5e0 = 0.0;
          }
          pppppuStack_1f8 = ppppppuStack_100[0x13];
          fStack_5d0 = _DAT_142e36f28;
          if (pppppuStack_1f8[6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_5d0 = 0.0;
          }
          pppppuStack_1c8 = (ulonglong *****)CONCAT44(pppppuStack_1c8._4_4_,fStack_640);
          pppppuStack_290 = ppppppuStack_100[0x11];
          fStack_5c0 = _DAT_142e36f28;
          if (pppppuStack_290[6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_5c0 = 0.0;
          }
          pppppuStack_288 = (ulonglong *****)CONCAT44(pppppuStack_288._4_4_,fStack_5c0);
          pppppuStack_280 = ppppppuStack_100[0x10];
          fStack_5b0 = _DAT_142f95160;
          if (pppppuStack_280[6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_5b0 = 0.0;
          }
          pppppuStack_278 = (ulonglong *****)CONCAT44(pppppuStack_278._4_4_,fStack_5b0);
          pppppppuStack_170 = (ulonglong *******)CONCAT44(pppppppuStack_170._4_4_,fStack_680);
          pppppuStack_270 = ppppppuStack_100[0x16];
          fStack_2a4 = _DAT_142f95160;
          if (pppppuStack_270[6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_2a4 = 0.0;
          }
          pppppuStack_168 = (ulonglong *****)CONCAT44(pppppuStack_168._4_4_,fStack_660);
          pppppuStack_268 = ppppppuStack_100[0xd];
          fStack_590 = _DAT_142f95160;
          if (pppppuStack_268[6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_590 = 0.0;
          }
          pppppuStack_260 = ppppppuStack_100[0xe];
          fStack_580 = _DAT_142e37ae4;
          if (pppppuStack_260[6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_580 = 0.0;
          }
          pppppuStack_1b8 = (ulonglong *****)CONCAT44(pppppuStack_1b8._4_4_,fStack_630);
          pppppuStack_448 = ppppppuStack_100[0xf];
          fStack_570 = _DAT_142f95160;
          if (pppppuStack_448[6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_570 = 0.0;
          }
          pppppuStack_188 = (ulonglong *****)CONCAT44(pppppuStack_188._4_4_,fStack_620);
          pppppuStack_440 = ppppppuStack_100[0x12];
          fStack_560 = _DAT_142e36f28;
          if (pppppuStack_440[6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_560 = 0.0;
          }
          pppppuStack_230 = (ulonglong *****)CONCAT44(pppppuStack_230._4_4_,fStack_610);
          pppppuStack_438 = ppppppuStack_100[0x1c];
          fStack_550 = _DAT_142f95160;
          if (pppppuStack_438[6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_550 = 0.0;
          }
          pppppuStack_220 = (ulonglong *****)CONCAT44(pppppuStack_220._4_4_,fStack_600);
          pppppuStack_428 = ppppppuStack_100[0x1d];
          fStack_540 = _DAT_142f95160;
          if (pppppuStack_428[6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_540 = 0.0;
          }
          pppppuStack_210 = (ulonglong *****)CONCAT44(pppppuStack_210._4_4_,fStack_5f0);
          pppppuStack_418 = ppppppuStack_100[0x1a];
          fStack_2a0 = _DAT_142f95160;
          if (pppppuStack_418[6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_2a0 = 0.0;
          }
          pppppuStack_200 = (ulonglong *****)CONCAT44(pppppuStack_200._4_4_,fStack_5e0);
          in_R10 = ppppppuStack_100[0x1b];
          fStack_520 = _DAT_142f95160;
          if (in_R10[6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_520 = 0.0;
          }
          pppppuStack_420 = (ulonglong *****)CONCAT44(pppppuStack_420._4_4_,fStack_540);
          pppppuStack_298 = (ulonglong *****)CONCAT44(pppppuStack_298._4_4_,fStack_5d0);
          fStack_510 = _DAT_142e36f28;
          if (ppppppuStack_100[9][6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_510 = 0.0;
          }
          pppppuStack_410 = (ulonglong *****)CONCAT44(pppppuStack_410._4_4_,fStack_510);
          fStack_29c = _DAT_142e36f28;
          if (ppppppuStack_100[8][6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_29c = 0.0;
          }
          pppppuStack_450 = (ulonglong *****)CONCAT44(pppppuStack_450._4_4_,fStack_580);
          fStack_4f0 = _DAT_143007998;
          if (ppppppuStack_100[3][6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_4f0 = 0.0;
          }
          pppppuStack_430 = (ulonglong *****)CONCAT44(pppppuStack_430._4_4_,fStack_570);
          fStack_4e0 = _DAT_142e36f28;
          if (ppppppuStack_100[4][6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_4e0 = 0.0;
          }
          fStack_4d0 = _DAT_142e36f28;
          if (ppppppuStack_100[5][6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_4d0 = 0.0;
          }
          fStack_4c0 = _DAT_142e36f28;
          if (ppppppuStack_100[6][6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_4c0 = 0.0;
          }
          fStack_4b0 = _DAT_142e36f28;
          if (ppppppuStack_100[7][6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_4b0 = 0.0;
          }
          fStack_4a0 = _DAT_142e36f28;
          if (ppppppuStack_100[10][6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_4a0 = 0.0;
          }
          fStack_4a0 = pppppuStack_108._0_4_ * fStack_4a0;
          pppppuStack_108 = (ulonglong *****)CONCAT44(pppppuStack_108._4_4_,fStack_4a0);
          fStack_490 = _DAT_142e36f28;
          if (ppppppuStack_100[0xb][6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_490 = 0.0;
          }
          pppppppuStack_6d8 = pppppppuStack_110;
          uStack_6d0 = CONCAT44(uStack_6d0._4_4_,fVar40);
          pppppuStack_6c8 = pppppuStack_148;
          uStack_6c0 = CONCAT44(uStack_6c0._4_4_,fVar45);
          uStack_6b8 = pppppppuStack_160;
          pppppppuStack_6b0 = (ulonglong *******)CONCAT44(pppppppuStack_6b0._4_4_,fVar55);
          pppppppuStack_6a8 = uStack_158;
          uStack_6a0 = CONCAT44(uStack_6a0._4_4_,fVar56);
          pppppppuStack_698 = pppppppuStack_138;
          uStack_690 = CONCAT44(uStack_690._4_4_,fVar54);
          pppppppuStack_688 = pppppppuStack_128;
          pppppuStack_678 = (ulonglong *****)auStack_258._0_8_;
          pppppuStack_668 = pppppuStack_140;
          pppppuStack_658 = pppppuStack_1d0;
          pppppppuStack_648 = pppppppuStack_120;
          pppppuStack_638 = pppppuStack_1c0;
          pppppuStack_628 = pppppuStack_1b0;
          pppppuStack_618 = pppppuStack_180;
          pppppuStack_608 = pppppuStack_228;
          pppppuStack_5f8 = pppppuStack_218;
          pppppuStack_5e8 = pppppuStack_208;
          pppppuStack_5d8 = pppppuStack_1f8;
          pppppuStack_5c8 = pppppuStack_290;
          pppppuStack_5b8 = pppppuStack_280;
          pppppuStack_5a8 = pppppuStack_270;
          fStack_5a0 = fStack_2a4;
          pppppuStack_598 = pppppuStack_268;
          pppppuStack_588 = pppppuStack_260;
          pppppuStack_578 = pppppuStack_448;
          pppppuStack_568 = pppppuStack_440;
          pppppuStack_558 = pppppuStack_438;
          pppppuStack_548 = pppppuStack_428;
          pppppuStack_538 = pppppuStack_418;
          fStack_530 = fStack_2a0;
          pppppuStack_528 = in_R10;
          pppppuStack_518 = ppppppuStack_100[9];
          pppppuStack_508 = ppppppuStack_100[8];
          fStack_500 = fStack_29c;
          pppppuStack_4f8 = ppppppuStack_100[3];
          pppppuStack_4e8 = ppppppuStack_100[4];
          pppppuStack_4d8 = ppppppuStack_100[5];
          pppppuStack_4c8 = ppppppuStack_100[6];
          pppppuStack_4b8 = ppppppuStack_100[7];
          pppppuStack_4a8 = ppppppuStack_100[10];
          pppppuStack_498 = ppppppuStack_100[0xb];
          uStack_6e8 = (ulonglong *******)0x0;
          uStack_6e0 = (ulonglong *******)0x25;
          if (uStack_1a8 < 0x25) {
            pdb_142d7f1b0(&uStack_1a8,0,0x25,8);
          }
          else {
            uStack_198 = 0;
          }
          pppppuStack_148 = (ulonglong *****)(uStack_198 + 0x25);
          lVar16 = 0;
          while( true ) {
            uVar41 = *(undefined4 *)((longlong)&uStack_6d0 + lVar16);
            *(undefined8 *)(pbStack_1a0 + lVar16 + uStack_198 * 0x10) =
                 *(undefined8 *)((longlong)&pppppppuStack_6d8 + lVar16);
            *(undefined4 *)(pbStack_1a0 + lVar16 + uStack_198 * 0x10 + 8) = uVar41;
            if (lVar16 == 0x240) break;
            uVar41 = *(undefined4 *)((longlong)&uStack_6c0 + lVar16);
            *(undefined8 *)(pbStack_1a0 + lVar16 + uStack_198 * 0x10 + 0x10) =
                 *(undefined8 *)((longlong)&pppppuStack_6c8 + lVar16);
            *(undefined4 *)(pbStack_1a0 + lVar16 + uStack_198 * 0x10 + 0x18) = uVar41;
            lVar16 = lVar16 + 0x20;
          }
          break;
        default:
          pppppppuStack_118 = (ulonglong *******)ppppppuStack_100[0x2d];
          fVar40 = _DAT_142e36f28;
          if (pppppppuStack_118[6] == (ulonglong ******)0xffffffffffffffff) {
            fVar40 = 0.0;
          }
          pppppppuStack_160 = (ulonglong *******)ppppppuStack_100[0x38];
          fVar45 = _DAT_142e36f28;
          if (pppppppuStack_160[6] == (ulonglong ******)0xffffffffffffffff) {
            fVar45 = 0.0;
          }
          uStack_158 = (ulonglong *******)ppppppuStack_100[0x39];
          fVar55 = _DAT_142e36f28;
          if (uStack_158[6] == (ulonglong ******)0xffffffffffffffff) {
            fVar55 = 0.0;
          }
          pppppppuStack_138 = (ulonglong *******)ppppppuStack_100[0x27];
          fVar56 = _DAT_142e36f28;
          if (pppppppuStack_138[6] == (ulonglong ******)0xffffffffffffffff) {
            fVar56 = 0.0;
          }
          pppppppuStack_128 = (ulonglong *******)ppppppuStack_100[0x28];
          fVar54 = _DAT_142e36f28;
          if (pppppppuStack_128[6] == (ulonglong ******)0xffffffffffffffff) {
            fVar54 = 0.0;
          }
          pppppppuStack_170 = (ulonglong *******)ppppppuStack_100[0x32];
          fStack_680 = _DAT_142e36f28;
          if (pppppppuStack_170[6] == (ulonglong ******)0xffffffffffffffff) {
            fStack_680 = 0.0;
          }
          auStack_258._0_8_ = ppppppuStack_100[0x30];
          fStack_670 = _DAT_142e36f28;
          if (*(ulonglong *****)(auStack_258._0_8_ + 0x30) == (ulonglong ****)0xffffffffffffffff) {
            fStack_670 = 0.0;
          }
          pppppuStack_140 = ppppppuStack_100[0x31];
          fStack_660 = _DAT_142e36f28;
          if (pppppuStack_140[6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_660 = 0.0;
          }
          pppppuStack_148 = (ulonglong *****)CONCAT44(pppppuStack_148._4_4_,fVar40);
          pppppuStack_1d0 = ppppppuStack_100[0x33];
          fStack_650 = _DAT_142e36f28;
          if (pppppuStack_1d0[6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_650 = 0.0;
          }
          pppppuStack_190 = (ulonglong *****)CONCAT44(pppppuStack_190._4_4_,fStack_650);
          pppppppuStack_120 = (ulonglong *******)ppppppuStack_100[0x34];
          fStack_640 = _DAT_142f95160;
          if (pppppppuStack_120[6] == (ulonglong ******)0xffffffffffffffff) {
            fStack_640 = 0.0;
          }
          pppppuStack_1c0 = ppppppuStack_100[0x2f];
          fStack_630 = _DAT_142e36f28;
          if (pppppuStack_1c0[6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_630 = 0.0;
          }
          pppppuStack_1b0 = ppppppuStack_100[0x2e];
          fStack_620 = _DAT_142e36f28;
          if (pppppuStack_1b0[6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_620 = 0.0;
          }
          pppppuStack_180 = ppppppuStack_100[0x19];
          fStack_610 = _DAT_142e36f28;
          if (pppppuStack_180[6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_610 = 0.0;
          }
          pppppuStack_228 = ppppppuStack_100[0x18];
          fStack_600 = _DAT_142e36f28;
          if (pppppuStack_228[6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_600 = 0.0;
          }
          pppppuStack_218 = ppppppuStack_100[0x17];
          fStack_5f0 = _DAT_142e36f28;
          if (pppppuStack_218[6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_5f0 = 0.0;
          }
          pppppuStack_208 = ppppppuStack_100[0x15];
          fStack_5e0 = _DAT_142e36f28;
          if (pppppuStack_208[6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_5e0 = 0.0;
          }
          pppppuStack_1f8 = ppppppuStack_100[0x14];
          fStack_5d0 = _DAT_142e36f28;
          if (pppppuStack_1f8[6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_5d0 = 0.0;
          }
          pppppuStack_290 = ppppppuStack_100[0x13];
          pppppuStack_298 = (ulonglong *****)CONCAT44(pppppuStack_298._4_4_,fStack_5d0);
          pppppppuStack_110._0_4_ = _DAT_142e36f28;
          if (pppppuStack_290[6] == (ulonglong ****)0xffffffffffffffff) {
            pppppppuStack_110._0_4_ = 0.0;
          }
          pppppuStack_1c8 = (ulonglong *****)CONCAT44(pppppuStack_1c8._4_4_,fStack_640);
          pppppuStack_288 = ppppppuStack_100[0x11];
          fStack_5b0 = _DAT_142e36f28;
          if (pppppuStack_288[6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_5b0 = 0.0;
          }
          pppppuStack_280 = (ulonglong *****)CONCAT44(pppppuStack_280._4_4_,fStack_5b0);
          pppppuStack_278 = ppppppuStack_100[0x10];
          fStack_5a0 = _DAT_142f95160;
          if (pppppuStack_278[6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_5a0 = 0.0;
          }
          pppppuStack_270 = (ulonglong *****)CONCAT44(pppppuStack_270._4_4_,fStack_5a0);
          pppppuStack_168 = (ulonglong *****)CONCAT44(pppppuStack_168._4_4_,fStack_660);
          pppppuStack_268 = ppppppuStack_100[0x16];
          fStack_590 = _DAT_142f95160;
          if (pppppuStack_268[6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_590 = 0.0;
          }
          pppppuStack_450 = ppppppuStack_100[0xd];
          fStack_580 = _DAT_142f95160;
          if (pppppuStack_450[6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_580 = 0.0;
          }
          pppppuStack_1b8 = (ulonglong *****)CONCAT44(pppppuStack_1b8._4_4_,fStack_630);
          pppppuStack_448 = ppppppuStack_100[0xe];
          fStack_2a4 = _DAT_142e37ae4;
          if (pppppuStack_448[6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_2a4 = 0.0;
          }
          pppppuStack_188 = (ulonglong *****)CONCAT44(pppppuStack_188._4_4_,fStack_620);
          pppppuStack_440 = ppppppuStack_100[0xf];
          fStack_560 = _DAT_142f95160;
          if (pppppuStack_440[6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_560 = 0.0;
          }
          pppppuStack_230 = (ulonglong *****)CONCAT44(pppppuStack_230._4_4_,fStack_610);
          pppppuStack_430 = ppppppuStack_100[0x12];
          fStack_550 = _DAT_142e36f28;
          if (pppppuStack_430[6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_550 = 0.0;
          }
          pppppuStack_220 = (ulonglong *****)CONCAT44(pppppuStack_220._4_4_,fStack_600);
          pppppuStack_420 = ppppppuStack_100[0x1c];
          fStack_2a0 = _DAT_142f95160;
          if (pppppuStack_420[6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_2a0 = 0.0;
          }
          pppppuStack_210 = (ulonglong *****)CONCAT44(pppppuStack_210._4_4_,fStack_5f0);
          pppppuStack_418 = ppppppuStack_100[0x1d];
          fStack_530 = _DAT_142f95160;
          if (pppppuStack_418[6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_530 = 0.0;
          }
          pppppuStack_200 = (ulonglong *****)CONCAT44(pppppuStack_200._4_4_,fStack_5e0);
          in_R10 = ppppppuStack_100[0x1a];
          fStack_29c = _DAT_142f95160;
          if (in_R10[6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_29c = 0.0;
          }
          fStack_510 = _DAT_142f95160;
          if (ppppppuStack_100[0x1b][6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_510 = 0.0;
          }
          pppppuStack_260 = (ulonglong *****)CONCAT44(pppppuStack_260._4_4_,fStack_590);
          fStack_470 = _DAT_142e36f28;
          if (ppppppuStack_100[9][6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_470 = 0.0;
          }
          fStack_46c = _DAT_142e36f28;
          if (ppppppuStack_100[8][6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_46c = 0.0;
          }
          pppppuStack_438 = (ulonglong *****)CONCAT44(pppppuStack_438._4_4_,fStack_560);
          fStack_4e0 = _DAT_143007998;
          if (ppppppuStack_100[3][6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_4e0 = 0.0;
          }
          pppppuStack_428 = (ulonglong *****)CONCAT44(pppppuStack_428._4_4_,fStack_550);
          fStack_4d0 = _DAT_142e36f28;
          if (ppppppuStack_100[4][6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_4d0 = 0.0;
          }
          fStack_4c0 = _DAT_142e36f28;
          if (ppppppuStack_100[5][6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_4c0 = 0.0;
          }
          fStack_4b0 = _DAT_142e36f28;
          if (ppppppuStack_100[6][6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_4b0 = 0.0;
          }
          fStack_4a0 = _DAT_142e36f28;
          if (ppppppuStack_100[7][6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_4a0 = 0.0;
          }
          fStack_490 = _DAT_142e36f28;
          if (ppppppuStack_100[10][6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_490 = 0.0;
          }
          fStack_490 = pppppuStack_108._0_4_ * fStack_490;
          pppppuStack_108 = (ulonglong *****)CONCAT44(pppppuStack_108._4_4_,fStack_490);
          fStack_480 = _DAT_142e36f28;
          if (ppppppuStack_100[0xb][6] == (ulonglong ****)0xffffffffffffffff) {
            fStack_480 = 0.0;
          }
          pppppppuStack_6d8 = pppppppuStack_118;
          uStack_6d0 = CONCAT44(uStack_6d0._4_4_,fVar40);
          pppppuStack_6c8 = (ulonglong *****)pppppppuStack_160;
          uStack_6c0 = CONCAT44(uStack_6c0._4_4_,fVar45);
          uStack_6b8 = uStack_158;
          pppppppuStack_6b0 = (ulonglong *******)CONCAT44(pppppppuStack_6b0._4_4_,fVar55);
          pppppppuStack_6a8 = pppppppuStack_138;
          uStack_6a0 = CONCAT44(uStack_6a0._4_4_,fVar56);
          pppppppuStack_698 = pppppppuStack_128;
          uStack_690 = CONCAT44(uStack_690._4_4_,fVar54);
          pppppppuStack_688 = pppppppuStack_170;
          pppppuStack_678 = (ulonglong *****)auStack_258._0_8_;
          pppppuStack_668 = pppppuStack_140;
          pppppuStack_658 = pppppuStack_1d0;
          pppppppuStack_648 = pppppppuStack_120;
          pppppuStack_638 = pppppuStack_1c0;
          pppppuStack_628 = pppppuStack_1b0;
          pppppuStack_618 = pppppuStack_180;
          pppppuStack_608 = pppppuStack_228;
          pppppuStack_5f8 = pppppuStack_218;
          pppppuStack_5e8 = pppppuStack_208;
          pppppuStack_5d8 = pppppuStack_1f8;
          pppppuStack_5c8 = pppppuStack_290;
          fStack_5c0 = pppppppuStack_110._0_4_;
          pppppuStack_5b8 = pppppuStack_288;
          pppppuStack_5a8 = pppppuStack_278;
          pppppuStack_598 = pppppuStack_268;
          pppppuStack_588 = pppppuStack_450;
          pppppuStack_578 = pppppuStack_448;
          fStack_570 = fStack_2a4;
          pppppuStack_568 = pppppuStack_440;
          pppppuStack_558 = pppppuStack_430;
          pppppuStack_548 = pppppuStack_420;
          fStack_540 = fStack_2a0;
          pppppuStack_538 = pppppuStack_418;
          pppppuStack_528 = in_R10;
          fStack_520 = fStack_29c;
          pppppuStack_518 = ppppppuStack_100[0x1b];
          pppppuStack_508 = ppppppuStack_100[9];
          fStack_500 = fStack_470;
          pppppuStack_4f8 = ppppppuStack_100[8];
          fStack_4f0 = fStack_46c;
          pppppuStack_4e8 = ppppppuStack_100[3];
          pppppuStack_4d8 = ppppppuStack_100[4];
          pppppuStack_4c8 = ppppppuStack_100[5];
          pppppuStack_4b8 = ppppppuStack_100[6];
          pppppuStack_4a8 = ppppppuStack_100[7];
          pppppuStack_498 = ppppppuStack_100[10];
          pppppuStack_488 = ppppppuStack_100[0xb];
          uStack_6e8 = (ulonglong *******)0x0;
          uStack_6e0 = (ulonglong *******)0x26;
          pppppuStack_410 = in_R10;
          if (uStack_1a8 < 0x26) {
            pdb_142d7f1b0(&uStack_1a8,0,0x26,8);
          }
          else {
            uStack_198 = 0;
          }
          pppppuStack_148 = (ulonglong *****)(uStack_198 + 0x26);
          lVar16 = 0;
          do {
            uVar41 = *(undefined4 *)((longlong)&uStack_6d0 + lVar16);
            *(undefined8 *)(pbStack_1a0 + lVar16 + uStack_198 * 0x10) =
                 *(undefined8 *)((longlong)&pppppppuStack_6d8 + lVar16);
            *(undefined4 *)(pbStack_1a0 + lVar16 + uStack_198 * 0x10 + 8) = uVar41;
            uVar41 = *(undefined4 *)((longlong)&uStack_6c0 + lVar16);
            *(undefined8 *)(pbStack_1a0 + lVar16 + uStack_198 * 0x10 + 0x10) =
                 *(undefined8 *)((longlong)&pppppuStack_6c8 + lVar16);
            *(undefined4 *)(pbStack_1a0 + lVar16 + uStack_198 * 0x10 + 0x18) = uVar41;
            lVar16 = lVar16 + 0x20;
          } while (lVar16 != 0x260);
        }
      }
      else {
        uStack_198 = 0;
        pppppppuStack_110 = (ulonglong *******)ppppppuStack_100[0x27];
        uVar41 = _DAT_142e3788c;
        if (pppppppuStack_110[6] == (ulonglong ******)0xffffffffffffffff) {
          uVar41 = 0;
        }
        pppppuStack_148 = ppppppuStack_100[0x28];
        uVar42 = _DAT_142e3788c;
        if (pppppuStack_148[6] == (ulonglong ****)0xffffffffffffffff) {
          uVar42 = 0;
        }
        pppppppuStack_160 = (ulonglong *******)CONCAT44(pppppppuStack_160._4_4_,uVar42);
        uStack_158 = (ulonglong *******)ppppppuStack_100[0x29];
        uVar42 = _DAT_142e3788c;
        if (uStack_158[6] == (ulonglong ******)0xffffffffffffffff) {
          uVar42 = 0;
        }
        pppppppuStack_138 = (ulonglong *******)CONCAT44(pppppppuStack_138._4_4_,uVar42);
        pppppppuStack_128 = (ulonglong *******)ppppppuStack_100[0x2a];
        uVar42 = _DAT_142e3788c;
        if (pppppppuStack_128[6] == (ulonglong ******)0xffffffffffffffff) {
          uVar42 = 0;
        }
        pppppppuStack_170 = (ulonglong *******)CONCAT44(pppppppuStack_170._4_4_,uVar42);
        auStack_258._0_8_ = ppppppuStack_100[0x2b];
        uVar42 = _DAT_142e3788c;
        if (ppppppuStack_100[0x2b][6] == (ulonglong ****)0xffffffffffffffff) {
          uVar42 = 0;
        }
        pppppuStack_140 = (ulonglong *****)CONCAT44(pppppuStack_140._4_4_,uVar42);
        pppppuStack_168 = ppppppuStack_100[0x2c];
        uVar42 = _DAT_142e3788c;
        if (pppppuStack_168[6] == (ulonglong ****)0xffffffffffffffff) {
          uVar42 = 0;
        }
        pppppuStack_190 = ppppppuStack_100[0x2d];
        fVar40 = _DAT_142e36f28;
        if (pppppuStack_190[6] == (ulonglong ****)0xffffffffffffffff) {
          fVar40 = 0.0;
        }
        pppppppuStack_120 = (ulonglong *******)ppppppuStack_100[0x18];
        fVar45 = _DAT_142e36f28;
        if (pppppppuStack_120[6] == (ulonglong ******)0xffffffffffffffff) {
          fVar45 = 0.0;
        }
        pppppuStack_1c8 = (ulonglong *****)CONCAT44(pppppuStack_1c8._4_4_,fVar45);
        pppppuStack_1d0 = (ulonglong *****)CONCAT44(pppppuStack_1d0._4_4_,uVar42);
        pppppppuStack_118 = (ulonglong *******)CONCAT44(pppppppuStack_118._4_4_,uVar41);
        pppppuStack_1c0 = ppppppuStack_100[0x11];
        fVar45 = _DAT_142e36f28;
        if (pppppuStack_1c0[6] == (ulonglong ****)0xffffffffffffffff) {
          fVar45 = 0.0;
        }
        pppppuStack_1b8 = ppppppuStack_100[0xe];
        fVar55 = _DAT_142f95160;
        if (pppppuStack_1b8[6] == (ulonglong ****)0xffffffffffffffff) {
          fVar55 = 0.0;
        }
        pppppuStack_1b0 = ppppppuStack_100[0xf];
        fVar56 = _DAT_142f95160;
        if (pppppuStack_1b0[6] == (ulonglong ****)0xffffffffffffffff) {
          fVar56 = 0.0;
        }
        pppppuStack_188 = ppppppuStack_100[0x1c];
        fVar54 = _DAT_142f95160;
        if (pppppuStack_188[6] == (ulonglong ****)0xffffffffffffffff) {
          fVar54 = 0.0;
        }
        pppppuVar23 = ppppppuStack_100[5];
        pppppuStack_180 = ppppppuStack_100[6];
        fVar59 = _DAT_142e36f28;
        if (pppppuVar23[6] == (ulonglong ****)0xffffffffffffffff) {
          fVar59 = 0.0;
        }
        fVar44 = _DAT_142e36f28;
        if (pppppuStack_180[6] == (ulonglong ****)0xffffffffffffffff) {
          fVar44 = 0.0;
        }
        pppppuVar5 = ppppppuStack_100[7];
        fVar62 = _DAT_142e36f28;
        if (pppppuVar5[6] == (ulonglong ****)0xffffffffffffffff) {
          fVar62 = 0.0;
        }
        pppppuVar6 = ppppppuStack_100[10];
        pppppuVar7 = ppppppuStack_100[0xb];
        ppppuVar8 = pppppuVar7[6];
        if (pppppuVar6[6] == (ulonglong ****)0xffffffffffffffff) {
          fVar50 = 0.0;
          if (ppppuVar8 == (ulonglong ****)0xffffffffffffffff) goto LAB_1428dcdb3;
LAB_1428dc921:
          fVar63 = _DAT_142e36f28;
          if (uStack_1a8 < 0x11) goto LAB_1428dcdc5;
LAB_1428dc92f:
          uStack_198 = 0;
        }
        else {
          fVar50 = _DAT_142e36f28;
          if (ppppuVar8 != (ulonglong ****)0xffffffffffffffff) goto LAB_1428dc921;
LAB_1428dcdb3:
          fVar63 = 0.0;
          if (0x10 < uStack_1a8) goto LAB_1428dc92f;
LAB_1428dcdc5:
          pdb_142d7f1b0(&uStack_1a8,0,0x11,8);
        }
        lVar16 = uStack_198 * 0x10;
        *(ulonglong ********)(pbStack_1a0 + lVar16) = pppppppuStack_110;
        *(undefined4 *)(pbStack_1a0 + lVar16 + 8) = pppppppuStack_118._0_4_;
        *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x10) = pppppuStack_148;
        *(float *)(pbStack_1a0 + lVar16 + 0x18) = pppppppuStack_160._0_4_;
        *(ulonglong ********)(pbStack_1a0 + lVar16 + 0x20) = uStack_158;
        *(undefined4 *)(pbStack_1a0 + lVar16 + 0x28) = pppppppuStack_138._0_4_;
        *(ulonglong ********)(pbStack_1a0 + lVar16 + 0x30) = pppppppuStack_128;
        *(undefined4 *)(pbStack_1a0 + lVar16 + 0x38) = pppppppuStack_170._0_4_;
        *(undefined8 *)(pbStack_1a0 + lVar16 + 0x40) = auStack_258._0_8_;
        *(uint *)(pbStack_1a0 + lVar16 + 0x48) = (uint)pppppuStack_140;
        *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x50) = pppppuStack_168;
        *(undefined4 *)(pbStack_1a0 + lVar16 + 0x58) = pppppuStack_1d0._0_4_;
        *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x60) = pppppuStack_190;
        *(float *)(pbStack_1a0 + lVar16 + 0x68) = fVar40 + fVar40;
        *(ulonglong ********)(pbStack_1a0 + lVar16 + 0x70) = pppppppuStack_120;
        *(undefined4 *)(pbStack_1a0 + lVar16 + 0x78) = pppppuStack_1c8._0_4_;
        *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x80) = pppppuStack_1c0;
        *(float *)(pbStack_1a0 + lVar16 + 0x88) = fVar45;
        *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x90) = pppppuStack_1b8;
        *(float *)(pbStack_1a0 + lVar16 + 0x98) = fVar55;
        *(ulonglong ******)(pbStack_1a0 + lVar16 + 0xa0) = pppppuStack_1b0;
        *(float *)(pbStack_1a0 + lVar16 + 0xa8) = fVar56;
        *(ulonglong ******)(pbStack_1a0 + lVar16 + 0xb0) = pppppuStack_188;
        *(float *)(pbStack_1a0 + lVar16 + 0xb8) = fVar54;
        *(ulonglong ******)(pbStack_1a0 + lVar16 + 0xc0) = pppppuVar23;
        *(float *)(pbStack_1a0 + lVar16 + 200) = fVar59;
        *(ulonglong ******)(pbStack_1a0 + lVar16 + 0xd0) = pppppuStack_180;
        *(float *)(pbStack_1a0 + lVar16 + 0xd8) = fVar44;
        *(ulonglong ******)(pbStack_1a0 + lVar16 + 0xe0) = pppppuVar5;
        *(float *)(pbStack_1a0 + lVar16 + 0xe8) = fVar62;
        *(ulonglong ******)(pbStack_1a0 + lVar16 + 0xf0) = pppppuVar6;
        *(float *)(pbStack_1a0 + lVar16 + 0xf8) = pppppuStack_108._0_4_ * fVar50;
        *(ulonglong ******)(pbStack_1a0 + lVar16 + 0x100) = pppppuVar7;
        *(float *)(pbStack_1a0 + lVar16 + 0x108) = fVar63;
        pppppuStack_148 = (ulonglong *****)(uStack_198 + 0x11);
      }
      pppppuStack_1d0 = (ulonglong *****)((longlong)pppppuStack_148 << 4);
      uVar14 = (uint)pppppuStack_148 & 3;
      pppppuStack_1c0 = (ulonglong *****)(ulonglong)uVar14;
      pppppuStack_1b8 = (ulonglong *****)((ulonglong)pppppuStack_148 & 0xfffffffffffffffc);
      pppppuStack_1b0 = (ulonglong *****)(pbStack_1a0 + 0x38);
      pppppppuStack_160 = (ulonglong *******)pbStack_1a0;
      pppppuStack_1c8 = (ulonglong *****)(pbStack_1a0 + 8);
      pppppuStack_190 = (ulonglong *****)(ulonglong)(uVar14 << 4);
      uStack_6e8 = pppppppuStack_720;
      uStack_6e0 = (ulonglong *******)((ulonglong)uStack_6e0._4_4_ << 0x20);
      uStack_198 = (ulonglong)pppppuStack_148;
      pppppppuVar21 = (ulonglong *******)pdb_141176c30(&uStack_6e8);
      pppppppuVar18 = (ulonglong *******)&UNK_1435b1e54;
      pppppppuVar25 =
           (ulonglong *******)
           (&UNK_1435b1e54 +
           *(int *)(&UNK_1435b1e54 + (ulonglong)*(byte *)(pppppppuStack_130 + -1) * 4));
      cVar13 = (char)pppppppuVar25;
      ppppppuVar29 = ppppppuStack_788;
      pppppppuStack_118 = pppppppuVar21;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(byte *)(pppppppuStack_130 + -1)) {
      case 0:
      case 1:
        fVar40 = _DAT_142e377f0;
        if (pppppuStack_148 != (ulonglong *****)0x0) {
          if (pppppuStack_148 < 4) {
            uVar27 = 0;
          }
          else {
            uVar27 = 0;
            pppppuVar23 = pppppuStack_1b0;
            do {
              fVar40 = fVar40 + *(float *)((longlong)pppppuVar23 + -0x30) +
                       *(float *)((longlong)pppppuVar23 + -0x20) +
                       *(float *)((longlong)pppppuVar23 + -0x10) + *(float *)pppppuVar23;
              uVar27 = uVar27 + 4;
              pppppuVar23 = (ulonglong *****)((longlong)pppppuVar23 + 0x40);
            } while (pppppuStack_1b8 != (ulonglong *****)uVar27);
            if (pppppuStack_1c0 == (ulonglong *****)0x0) goto code_r0x0001428dcf3e;
          }
          uVar26 = 0;
          do {
            fVar40 = fVar40 + *(float *)((longlong)pppppuStack_1c8 + uVar26 + uVar27 * 0x10);
            uVar26 = uVar26 + 0x10;
          } while (pppppuStack_190 != (ulonglong *****)uVar26);
        }
code_r0x0001428dcf3e:
        uStack_6e8 = (ulonglong *******)pdb_140dedfb0(pppppppuVar21);
        fVar45 = (float)pdb_140e02880(&uStack_6e8);
        fVar55 = 0.0;
        uVar27 = 0xffffffffffffffff;
        pppppuVar23 = pppppuStack_1d0;
        pppppppuVar18 = pppppppuStack_160;
        do {
          if (pppppuVar23 == (ulonglong *****)0x0) {
            uVar27 = 0;
            break;
          }
          pfVar1 = (float *)((longlong)pppppppuVar18 + 8);
          pppppppuVar18 = (ulonglong *******)((longlong)pppppppuVar18 + 0x10);
          fVar55 = fVar55 + *pfVar1 / fVar40;
          pppppuVar23 = (ulonglong *****)((longlong)pppppuVar23 + -0x10);
          uVar27 = uVar27 + 1;
        } while (fVar55 <= fVar45);
        if (pppppuStack_148 <= uVar27) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar27,pppppuStack_148,&UNK_1435b1838);
        }
        pppppuStack_108 = *(ulonglong ******)((longlong)pppppppuStack_160 + uVar27 * 0x10);
        if (1 < *(byte *)(pppppppuStack_130 + -1)) goto code_r0x0001428dd120;
        fVar45 = (float)pdb_140e02880(&uStack_728);
        fVar55 = (float)pdb_140e02880(&uStack_728);
        fVar40 = *(float *)(pppppuStack_108 + 0xc);
        uVar41 = *(undefined4 *)((longlong)pppppppuStack_130 + -0x14);
        fVar54 = SUB84(pppppppuStack_130[-5],0);
        fVar59 = (float)((ulonglong)pppppppuStack_130[-5] >> 0x20);
        fVar56 = (float)((uint)fVar59 ^ _UNK_142e37824);
        fVar44 = (*(float *)(pppppppuStack_130 + -3) + fVar40 * fVar54) - fVar40 * fVar59;
        fVar62 = *(float *)(pppppppuStack_130 + -2) + fVar40 * fVar59 + fVar40 * fVar54;
        auVar61._0_4_ = SUB84(pppppppuStack_130[-4],0) - (fVar40 + fVar40);
        auVar61._4_4_ = (float)((ulonglong)pppppppuStack_130[-4] >> 0x20) - (fVar40 + fVar40);
        auVar61._8_8_ = 0;
        auVar58 = maxps(auVar61,_DAT_142e37b20);
        fVar40 = fVar45 * auVar58._0_4_ - fVar44;
        fVar45 = fVar55 * auVar58._4_4_ - fVar62;
        fVar55 = fVar45 * fVar59;
        fVar45 = fVar45 * fVar54;
        auVar60._0_4_ = fVar55 + fVar40 * fVar54;
        auVar60._4_4_ = fVar45 + fVar40 * fVar56;
        auVar60._8_4_ = fVar55 + fVar55;
        auVar60._12_4_ = fVar45 + fVar45;
        auVar61 = divps(auVar60,auVar58);
        fVar40 = (float)pub_142e32a40();
        fVar45 = (float)pub_142e32a40();
        fVar40 = (auVar61._0_4_ - fVar40) * auVar58._0_4_;
        fVar45 = (auVar61._4_4_ - fVar45) * auVar58._4_4_;
        pppppppuStack_318 =
             (ulonglong *******)
             CONCAT44(fVar45 * fVar54 + fVar40 * fVar59 + fVar62,
                      fVar45 * fVar56 + fVar40 * fVar54 + fVar44);
        pdb_140df4540(&uStack_6e8,&pppppppuStack_318,uVar41);
        uStack_3a8 = CONCAT44((float)uStack_6e0,(int)uStack_6e8);
        goto code_r0x0001428dd1a1;
      case 2:
        break;
      case 3:
        ppppppuVar29 = ppppppuStack_768;
        break;
      case 4:
        ppppppuVar29 = ppppppuStack_770;
        break;
      default:
        *(char *)((longlong)ppppppuStack_788 + -0x73) =
             *(char *)((longlong)ppppppuStack_788 + -0x73) + cVar13;
        puVar20 = (undefined1 *)((ulonglong)auStack_7a8 & 0xffffffff);
        *puVar20 = *puVar20;
        pcVar32 = (char *)(CONCAT71((int7)((ulonglong)puVar20 >> 8),
                                    (char)puVar20 + (char)((ulonglong)pppppppuVar25 >> 8)) + -1);
        *pcVar32 = *pcVar32 + cVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 7:
        ppppppuVar29 = ppppppuStack_788;
        goto code_r0x0001428dd416;
      case 9:
      case 10:
      case 0x11:
      case 0x14:
      case 0x15:
        goto code_r0x0001428e2d73;
      case 0x10:
        pppppuVar23 = (ulonglong *****)pdb_142e16b00();
        if (pppppuVar23 == (ulonglong *****)0x0) {
          uStack_f1 = 1;
          pdb_142dc7890(&UNK_14328b3f8);
          goto LAB_1428e361d;
        }
        if (*pppppuVar23 != (ulonglong ****)0x0) {
          uStack_f1 = 1;
          pdb_142dc8090(&UNK_14328b468);
          goto LAB_1428e361d;
        }
        *pppppuVar23 = (ulonglong ****)0xffffffffffffffff;
        pppppuStack_108 = pppppuVar23;
        pdb_140e95370(pppppuVar23 + 1,CONCAT44(uStack_38c,uStack_390));
        *pppppuStack_108 = (ulonglong ****)((longlong)*pppppuStack_108 + 1);
        if ((char)uStack_1dc != '\0') {
          auVar58._4_4_ = fStack_324;
          auVar58._0_4_ = fStack_328;
          auVar58._8_4_ = fStack_320;
          auVar58._12_4_ = fStack_31c;
          fStack_388 = fStack_328;
          fStack_384 = fStack_324;
          uStack_380 = auVar58._8_8_;
          pppppppuStack_398 = uStack_338;
          uStack_390 = SUB84(uStack_330,0);
          uStack_38c = (undefined4)((ulonglong)uStack_330 >> 0x20);
          uStack_f1 = 1;
          pdb_140a889f0(&uStack_6e8,&pppppppuStack_398);
          pppppppuStack_408 = (ulonglong *******)CONCAT44(pppppppuStack_408._4_4_,1);
          uStack_f1 = 1;
          pdb_140a88a30(&pppppppuStack_398,&uStack_6e8,&pppppppuStack_408);
          uStack_f1 = 1;
          pdb_140a88a20(&pppppppuStack_398,uStack_3d0);
        }
        ppppppuVar29 = ppppppuStack_710;
        if ((int)pppppppuStack_318 == 4) {
          LOCK();
          *pppppppuStack_310 = (ulonglong ******)((longlong)*pppppppuStack_310 - 1);
          UNLOCK();
          if (*pppppppuStack_310 == (ulonglong ******)0x0) {
            pdb_140c79ee0(&pppppppuStack_310);
            ppppppuVar29 = ppppppuStack_710;
          }
        }
        goto LAB_1428dc55e;
      case 0x16:
        *(char *)ppppppuStack_788 = *(char *)ppppppuStack_788 + (char)ppppppuStack_788;
        *(char *)ppppppuStack_788 = *(char *)ppppppuStack_788 + (char)ppppppuStack_788;
        goto code_r0x0001428de650;
      case 0x17:
        goto code_r0x0001428de687;
      case 0x18:
        goto code_r0x0001428de666;
      case 0x19:
        *(char *)(uVar17 + 99) = *(char *)(uVar17 + 99) + cVar13;
        goto code_r0x0001428de687;
      case 0x1a:
      case 0x1b:
        (*_UNK_1435b1e04)();
        return;
      }
      pppppuStack_108 = *ppppppuVar29;
code_r0x0001428dd120:
      fVar40 = *(float *)(pppppppuStack_130 + -3);
      fVar45 = *(float *)(pppppppuStack_130 + -2);
      fVar55 = SUB84(pppppppuStack_130[-5],0);
      fVar56 = (float)((ulonglong)pppppppuStack_130[-5] >> 0x20);
      pppppppuStack_318 =
           (ulonglong *******)
           CONCAT44(*(float *)(pppppppuStack_130 + -4) * fVar56 +
                    *(float *)((longlong)pppppppuStack_130 + -0x1c) * fVar55,
                    *(float *)(pppppppuStack_130 + -4) * fVar55 -
                    *(float *)((longlong)pppppppuStack_130 + -0x1c) * fVar56);
      pdb_140df4520(&uStack_6e8,&pppppppuStack_318);
      uStack_3a8 = CONCAT44(fVar45 + (float)uStack_6e0 * _UNK_142e36f64,
                            fVar40 + (float)uStack_6e8 * _DAT_142e36f60);
code_r0x0001428dd1a1:
      pppppppuStack_110 =
           (ulonglong *******)CONCAT71(pppppppuStack_110._1_7_,*(char *)(pppppppuStack_130 + -1));
      pdb_140df4540(&pppppppuStack_408,&uStack_3a8,
                    *(undefined4 *)((longlong)pppppppuStack_130 + -0x14));
      uStack_390 = (undefined4)uStack_400;
      pppppppuStack_398 = pppppppuStack_408;
      uStack_38c = (undefined4)_DAT_142f61040;
      fStack_388 = (float)((ulonglong)_DAT_142f61040 >> 0x20);
      fStack_384 = -0.0;
      pdb_1409efbd0(&uStack_6e8,ppppppuStack_780,&pppppppuStack_398,_DAT_142e36f3c);
      if (uStack_6b8._4_4_ != 2) {
        pppppppuStack_318 = uStack_6e8;
        pppppppuStack_310 = uStack_6e0;
        pppppppuStack_2e8 = uStack_6b8;
        pppppppuStack_2e0 = pppppppuStack_6b0;
        pppppuStack_2f8 = pppppuStack_6c8;
        uStack_2f0 = uStack_6c0;
        pppppppuStack_308 = pppppppuStack_6d8;
        uStack_300 = uStack_6d0;
        ppppppuVar29 = (ulonglong ******)((ulonglong)uStack_6e8 & 0xff);
        pppppppuVar21 = (ulonglong *******)(ulonglong)uStack_6b8._4_4_;
        pppppppuVar18 = pppppppuStack_6b0;
code_r0x0001428dd416:
                    /* WARNING: Could not recover jumptable at 0x0001428dd424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_1435b1e68 + *(int *)(&UNK_1435b1e68 + (longlong)ppppppuVar29 * 4)))
                  (&UNK_1435b1e68,pppppppuVar18,pppppppuVar21);
        return;
      }
      uVar41 = pdb_14140ce00(ppppuStack_3a0);
      pdb_140df4540(&uStack_300,&uStack_3a8,uVar41);
      auStack_258 = ZEXT416((uint)uStack_300);
      fVar45 = uStack_300._4_4_;
      pppppuStack_168 = (ulonglong *****)CONCAT44(pppppuStack_168._4_4_,pppppuStack_2f8._0_4_);
      pppppppuStack_170 = pppppppuStack_2e0;
      pppppppuStack_138 = (ulonglong *******)((ulonglong)pppppppuStack_138 & 0xffffffff00000000);
      fVar40 = (float)pdb_140a7d8d0(alStack_7e8);
      fVar55 = (float)pdb_140a7d8d0(auStack_7d8);
      fVar56 = (float)pdb_140a7d8d0(auStack_7c8);
      fVar54 = (float)pdb_140a7d8d0(auStack_7b8);
      fVar54 = fVar40 + fVar55 + fVar56 + fVar54;
      fVar40 = 0.0;
      if (0.0 <= fVar54) {
        fVar40 = fVar54;
      }
      fVar55 = _DAT_142e36f28;
      if (fVar40 <= _DAT_142e36f28) {
        fVar55 = fVar40;
      }
      if (fVar55 <= 0.0) {
        pdb_140df4540(&pppppppuStack_3c8,&uStack_3a8,fVar45);
        fVar40 = fStack_3c0;
        uStack_158 = pppppppuStack_3c8;
        uStack_150 = 0;
        if ((byte)pppppppuStack_110 < 2) {
          pppppuVar23 = (ulonglong *****)0x0;
          goto code_r0x0001428dd50c;
        }
        uStack_6e8 = (ulonglong *******)
                     (CONCAT44(*(undefined4 *)(pppppppuStack_130 + -5),
                               *(undefined4 *)((longlong)pppppppuStack_130 + -0x24)) ^ 0x80000000);
        pdb_140df4520(&uStack_348,&uStack_6e8);
        pppppuVar23 = (ulonglong *****)0x0;
code_r0x0001428dd59d:
        if (*(char *)((longlong)pppppuStack_108 + 0x65) == '\x01') goto code_r0x0001428dd5ae;
        fVar55 = (float)uStack_158;
        fVar56 = uStack_158._4_4_;
        goto code_r0x0001428de320;
      }
      pppppuVar23 = (ulonglong *****)0x1;
      pdb_140df4540(&pppppppuStack_3c8,&uStack_3a8,fVar45);
      ppppppuVar29 = ppppppuStack_710;
      if (1 < (byte)pppppppuStack_110) goto LAB_1428dc55e;
code_r0x0001428dd50c:
      fVar40 = fStack_3c0;
      uStack_150 = 0;
      uStack_158 = pppppppuStack_3c8;
      uStack_6e8 = (ulonglong *******)pdb_140dedfb0(pppppppuStack_118);
      pdb_140e02880(&uStack_6e8);
      uVar41 = pub_142e329e0();
      uVar42 = pub_142e32b30();
      uStack_6e8 = (ulonglong *******)CONCAT44(uVar42,uVar41);
      pdb_140df4520(&uStack_348,&uStack_6e8);
      if ((((uint)pppppuVar23 | 2) != 3) || (*(char *)(pppppppuStack_130 + -1) == '\x01'))
      goto code_r0x0001428dd59d;
code_r0x0001428dd5ae:
      cVar13 = pdb_140e94b40();
      pppppppuStack_128 = (ulonglong *******)CONCAT71(pppppppuStack_128._1_7_,cVar13);
      if (cVar13 == '\0') {
        pppppppuStack_318 = (ulonglong *******)0x0;
      }
      else {
        puVar38 = &UNK_1435b1896;
        do {
          bVar2 = puVar38[-1];
          uVar14 = (uint)(char)bVar2;
          if ((char)bVar2 < '\0') {
            bVar3 = puVar38[-2];
            if ((char)bVar3 < -0x40) {
              bVar4 = puVar38[-3];
              if ((char)bVar4 < -0x40) {
                pbVar35 = puVar38 + -4;
                puVar38 = puVar38 + -4;
                uVar14 = bVar4 & 0x3f | (*pbVar35 & 7) << 6;
              }
              else {
                puVar38 = puVar38 + -3;
                uVar14 = bVar4 & 0xf;
              }
              uVar14 = bVar3 & 0x3f | uVar14 << 6;
            }
            else {
              puVar38 = puVar38 + -2;
              uVar14 = bVar3 & 0x1f;
            }
            uVar14 = (uint)(bVar2 & 0x3f) | uVar14 << 6;
            if (uVar14 != 0x5c) goto code_r0x0001428dd642;
code_r0x0001428dd67d:
            if ((undefined *)0x46 < puVar38 + -0x1435b184f) {
              pdb_142dc8070(&UNK_1435b1850,0x46,puVar38 + -0x1435b184f,0x46);
              goto LAB_1428e361d;
            }
            puVar38 = puVar38 + 1;
            goto code_r0x0001428dd69f;
          }
          puVar38 = puVar38 + -1;
          if (uVar14 == 0x5c) goto code_r0x0001428dd67d;
code_r0x0001428dd642:
          if (uVar14 == 0x2f) goto code_r0x0001428dd67d;
        } while (puVar38 != &UNK_1435b1850);
        puVar38 = &UNK_1435b1850;
code_r0x0001428dd69f:
        pppppppuVar18 = (ulonglong *******)pdb_140e97000();
        if ((*(char *)(pppppppuVar18 + 0xd) != '\x01') &&
           (pppppppuVar18 = (ulonglong *******)pdb_142e16b00(pppppppuVar18,0),
           pppppppuVar18 == (ulonglong *******)0x0)) {
          pdb_142dc7890(&UNK_14328b3f8);
          goto LAB_1428e361d;
        }
        if (*pppppppuVar18 != (ulonglong ******)0x0) {
          pdb_142dc8090(&UNK_14328b468);
          goto LAB_1428e361d;
        }
        *pppppppuVar18 = (ulonglong ******)0xffffffffffffffff;
        pppppppuStack_120 = pppppppuVar18;
        pppppppuStack_310 =
             (ulonglong *******)pdb_140e94f10(pppppppuVar18 + 1,&UNK_1435b1aa8,0x18,puVar38);
        *pppppppuStack_120 = (ulonglong ******)((longlong)*pppppppuStack_120 + 1);
        pppppppuStack_318 = (ulonglong *******)0x1;
      }
      pppppppuStack_3d8 = (ulonglong *******)0x0;
      fVar56 = (float)((ulonglong)pppppppuStack_130[-4] >> 0x20);
      fVar55 = (float)*(undefined8 *)((longlong)pppppppuStack_130 + -0x24);
      pppppppuStack_398 =
           (ulonglong *******)
           CONCAT44(*(float *)(pppppppuStack_130 + -5) * fVar56 +
                    fVar55 * (float)((ulonglong)*(undefined8 *)((longlong)pppppppuStack_130 + -0x24)
                                    >> 0x20),
                    *(float *)(pppppppuStack_130 + -5) * SUB84(pppppppuStack_130[-4],0) -
                    fVar56 * fVar55);
      pdb_140df4520(&uStack_6e8,&pppppppuStack_398);
      pdb_140df3380(&uStack_6e8);
      pdb_140b572f0(uStack_778,&uStack_6e8,&lStack_3e8);
      if ((char)pppppppuStack_128 != '\0') {
        plVar19 = (longlong *)pdb_140e97000();
        if (((char)plVar19[0xd] != '\x01') &&
           (plVar19 = (longlong *)pdb_142e16b00(plVar19,0), plVar19 == (longlong *)0x0)) {
          pdb_142dc7890(&UNK_14328b3f8);
          goto LAB_1428e361d;
        }
        if (*plVar19 != 0) {
          pdb_142dc8090(&UNK_14328b468);
          goto LAB_1428e361d;
        }
        *plVar19 = -1;
        pppppppuStack_128 = (ulonglong *******)plVar19;
        pdb_140e95370(plVar19 + 1,pppppppuStack_310);
        *pppppppuStack_128 = (ulonglong ******)((longlong)*pppppppuStack_128 + 1);
      }
      pbVar35 = pbStack_3e0;
      pppppppuStack_128 = pppppppuStack_3d8;
      fVar55 = *(float *)((longlong)pppppuStack_108 + 0x54);
      cVar13 = pdb_140e94b40();
      if (cVar13 == '\0') {
        lStack_708 = 0;
        fVar56 = _DAT_142e36f28;
      }
      else {
        puVar38 = &UNK_1435b1896;
        do {
          bVar2 = puVar38[-1];
          uVar14 = (uint)(char)bVar2;
          if ((char)bVar2 < '\0') {
            bVar3 = puVar38[-2];
            if ((char)bVar3 < -0x40) {
              bVar4 = puVar38[-3];
              if ((char)bVar4 < -0x40) {
                pbVar30 = puVar38 + -4;
                puVar38 = puVar38 + -4;
                uVar14 = bVar4 & 0x3f | (*pbVar30 & 7) << 6;
              }
              else {
                puVar38 = puVar38 + -3;
                uVar14 = bVar4 & 0xf;
              }
              uVar14 = bVar3 & 0x3f | uVar14 << 6;
            }
            else {
              puVar38 = puVar38 + -2;
              uVar14 = bVar3 & 0x1f;
            }
            uVar14 = (uint)(bVar2 & 0x3f) | uVar14 << 6;
            if (uVar14 != 0x5c) goto code_r0x0001428dd8f2;
code_r0x0001428dd93a:
            if ((undefined *)0x46 < puVar38 + -0x1435b184f) {
              pdb_142dc8070(&UNK_1435b1850,0x46,puVar38 + -0x1435b184f,0x46);
              goto LAB_1428e361d;
            }
            puVar38 = puVar38 + 1;
            goto code_r0x0001428dd95c;
          }
          puVar38 = puVar38 + -1;
          if (uVar14 == 0x5c) goto code_r0x0001428dd93a;
code_r0x0001428dd8f2:
          if (uVar14 == 0x2f) goto code_r0x0001428dd93a;
        } while (puVar38 != &UNK_1435b1850);
        puVar38 = &UNK_1435b1850;
code_r0x0001428dd95c:
        pppppppuVar18 = (ulonglong *******)pdb_140e97000();
        if ((*(char *)(pppppppuVar18 + 0xd) != '\x01') &&
           (pppppppuVar18 = (ulonglong *******)pdb_142e16b00(pppppppuVar18,0),
           pppppppuVar18 == (ulonglong *******)0x0)) {
          pdb_142dc7890(&UNK_14328b3f8);
          goto LAB_1428e361d;
        }
        fVar56 = _DAT_142e36f28;
        if (*pppppppuVar18 != (ulonglong ******)0x0) {
          pdb_142dc8090(&UNK_14328b468);
          goto LAB_1428e361d;
        }
        *pppppppuVar18 = (ulonglong ******)0xffffffffffffffff;
        pppppppuStack_120 = pppppppuVar18;
        uStack_700 = pdb_140e94f10(pppppppuVar18 + 1,&UNK_1435b1896,0xe,puVar38);
        *pppppppuStack_120 = (ulonglong ******)((longlong)*pppppppuStack_120 + 1);
        lStack_708 = 1;
      }
      if (pppppppuStack_128 == (ulonglong *******)0x0) goto code_r0x0001428de1ab;
      cVar13 = pdb_140e94b40();
      fVar54 = (float)uStack_158;
      fVar59 = uStack_158._4_4_;
      pppppuStack_140 = pppppuVar23;
      if (cVar13 == '\0') {
        pppppppuStack_408 = (ulonglong *******)0x0;
      }
      else {
        puVar38 = &UNK_1435b1896;
        do {
          bVar2 = puVar38[-1];
          uVar14 = (uint)(char)bVar2;
          if ((char)bVar2 < '\0') {
            bVar3 = puVar38[-2];
            if ((char)bVar3 < -0x40) {
              bVar4 = puVar38[-3];
              if ((char)bVar4 < -0x40) {
                pbVar30 = puVar38 + -4;
                puVar38 = puVar38 + -4;
                uVar14 = bVar4 & 0x3f | (*pbVar30 & 7) << 6;
              }
              else {
                puVar38 = puVar38 + -3;
                uVar14 = bVar4 & 0xf;
              }
              uVar14 = bVar3 & 0x3f | uVar14 << 6;
            }
            else {
              puVar38 = puVar38 + -2;
              uVar14 = bVar3 & 0x1f;
            }
            uVar14 = (uint)(bVar2 & 0x3f) | uVar14 << 6;
            if (uVar14 != 0x5c) goto code_r0x0001428dda82;
code_r0x0001428ddaac:
            if ((undefined *)0x46 < puVar38 + -0x1435b184f) {
              pdb_142dc8070(&UNK_1435b1850,0x46,puVar38 + -0x1435b184f,0x46);
              goto LAB_1428e361d;
            }
            puVar38 = puVar38 + 1;
            goto code_r0x0001428ddace;
          }
          puVar38 = puVar38 + -1;
          if (uVar14 == 0x5c) goto code_r0x0001428ddaac;
code_r0x0001428dda82:
          if (uVar14 == 0x2f) goto code_r0x0001428ddaac;
        } while (puVar38 != &UNK_1435b1850);
        puVar38 = &UNK_1435b1850;
code_r0x0001428ddace:
        plVar19 = (longlong *)pdb_140e97000();
        if (((char)plVar19[0xd] != '\x01') &&
           (plVar19 = (longlong *)pdb_142e16b00(plVar19,0), plVar19 == (longlong *)0x0)) {
          pdb_142dc7890(&UNK_14328b3f8);
          goto LAB_1428e361d;
        }
        if (*plVar19 != 0) goto code_r0x0001428e2e0c;
        *plVar19 = -1;
        pppppppuStack_120 = (ulonglong *******)plVar19;
        uStack_400 = pdb_140e94f10(plVar19 + 1,&UNK_1435b18a4,0x16,puVar38);
        *pppppppuStack_120 = (ulonglong ******)((longlong)*pppppppuStack_120 + 1);
        pppppppuStack_408 = (ulonglong *******)0x1;
      }
      pbVar30 = pbVar35 + (longlong)pppppppuStack_128 * 8;
      fVar62 = fVar59 + _DAT_143020f30;
      puVar37 = (undefined8 *)0x0;
      fVar44 = _DAT_142e36f3c;
      pppppppuStack_120 = pppppppuStack_408;
      while (pbVar35 != pbVar30) {
        puVar9 = *(undefined8 **)pbVar35;
        pbVar35 = pbVar35 + 8;
        fVar63 = (float)*puVar9;
        fVar43 = (float)((ulonglong)*puVar9 >> 0x20);
        fVar46 = (float)puVar9[1];
        fVar49 = (float)((ulonglong)puVar9[1] >> 0x20);
        fVar52 = fVar46 - fVar63;
        fVar53 = fVar49 - fVar43;
        fVar50 = fVar53 * fVar53 + fVar52 * fVar52;
        if (fVar50 <= _DAT_143006dc0) {
          fVar50 = _DAT_143006dc0;
        }
        fVar50 = ((fVar40 - fVar43) * fVar53 + (fVar54 - fVar63) * fVar52) / fVar50;
        fVar52 = 0.0;
        if (0.0 <= fVar50) {
          fVar52 = fVar50;
        }
        fVar50 = fVar56;
        if (fVar52 <= fVar56) {
          fVar50 = fVar52;
        }
        fVar63 = fVar54 - (fVar50 * fVar46 + (fVar56 - fVar50) * fVar63);
        fVar50 = fVar40 - (fVar50 * fVar49 + (fVar56 - fVar50) * fVar43);
        fVar50 = fVar50 * fVar50 + fVar63 * fVar63;
        if (fVar50 < fVar44) {
          lVar16 = pdb_140b54c10(uStack_718,puVar9[5],&UNK_1435b1918);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_1435b1930);
          }
          fVar63 = *(float *)(lVar16 + 0x284);
          fVar43 = (float)pdb_14092f8b0(lVar16);
          fVar56 = _DAT_142e36f28;
          if (fVar63 <= fVar62 && fVar62 < fVar43) {
            puVar37 = puVar9;
            fVar44 = fVar50;
          }
        }
      }
      pppppppuVar18 = pppppppuStack_120;
      if (puVar37 != (undefined8 *)0x0) {
        pdb_140df4540(&pppppppuStack_318,puVar37,fVar59);
        pdb_140df4540(&uStack_6e8,puVar37 + 1,fVar59);
        fVar54 = pppppppuStack_310._0_4_;
        fVar56 = (float)uStack_6e0;
        fVar50 = (float)uStack_6e0 - pppppppuStack_310._0_4_;
        fVar44 = SUB84(pppppppuStack_318,0);
        fVar62 = (float)((ulonglong)pppppppuStack_318 >> 0x20);
        fVar46 = SUB84(uStack_6e8,0);
        fVar49 = (float)((ulonglong)uStack_6e8 >> 0x20);
        fVar63 = fVar46 - fVar44;
        fVar43 = fVar49 - fVar62;
        fVar59 = fVar50 * fVar50 + fVar43 * fVar43 + fVar63 * fVar63;
        if (fVar59 <= _DAT_143006dc0) {
          fVar59 = _DAT_143006dc0;
        }
        fVar52 = (float)puVar37[1] - (float)*puVar37;
        fVar53 = (float)((ulonglong)puVar37[1] >> 0x20) - (float)((ulonglong)*puVar37 >> 0x20);
        fVar51 = _DAT_142e36f28 / SQRT(fVar53 * fVar53 + fVar52 * fVar52);
        pppppppuStack_318 =
             (ulonglong *******)
             CONCAT44(fVar52 * fVar51,fVar53 * (float)((uint)fVar51 ^ _DAT_142e37820));
        pdb_140df4540(&uStack_6e8,&pppppppuStack_318,0);
        fVar59 = ((fVar40 - fVar54) * fVar50 +
                 (uStack_158._4_4_ - fVar62) * fVar43 + ((float)uStack_158 - fVar44) * fVar63) /
                 fVar59;
        fVar40 = 0.0;
        if (0.0 <= fVar59) {
          fVar40 = fVar59;
        }
        fVar59 = _DAT_142e36f28;
        if (fVar40 <= _DAT_142e36f28) {
          fVar59 = fVar40;
        }
        fVar50 = _DAT_142e36f28 - fVar59;
        fStack_340 = (float)uStack_6e0;
        uStack_348 = uStack_6e8;
        pppppppuVar18 = uStack_348;
        fVar63 = fVar55 * _DAT_142e36f50 + _DAT_14300b140 + _DAT_142e37ad4;
        uStack_348._0_4_ = SUB84(uStack_6e8,0);
        fVar55 = (float)uStack_348 * fVar63 + fVar46 * fVar59 + fVar44 * fVar50;
        fVar40 = (float)uStack_6e0 * fVar63 + fVar56 * fVar59 + fVar54 * fVar50;
        uStack_348 = pppppppuVar18;
        if ((uint)pppppuStack_140 < 2) {
          cVar13 = pdb_140e94b40();
          uStack_158 = (ulonglong *******)CONCAT71(uStack_158._1_7_,cVar13);
          if (cVar13 == '\0') {
            pppppppuStack_398 = (ulonglong *******)0x0;
          }
          else {
            puVar38 = &UNK_1435b1896;
            do {
              bVar2 = puVar38[-1];
              uVar14 = (uint)(char)bVar2;
              if ((char)bVar2 < '\0') {
                bVar3 = puVar38[-2];
                if ((char)bVar3 < -0x40) {
                  bVar4 = puVar38[-3];
                  if ((char)bVar4 < -0x40) {
                    pbVar35 = puVar38 + -4;
                    puVar38 = puVar38 + -4;
                    uVar14 = bVar4 & 0x3f | (*pbVar35 & 7) << 6;
                  }
                  else {
                    puVar38 = puVar38 + -3;
                    uVar14 = bVar4 & 0xf;
                  }
                  uVar14 = bVar3 & 0x3f | uVar14 << 6;
                }
                else {
                  puVar38 = puVar38 + -2;
                  uVar14 = bVar3 & 0x1f;
                }
                uVar14 = (uint)(bVar2 & 0x3f) | uVar14 << 6;
                if (uVar14 != 0x5c) goto code_r0x0001428ddee2;
code_r0x0001428ddf53:
                unaff_RBX = puVar38 + -0x1435b184f;
                if ((undefined *)0x46 < unaff_RBX) goto code_r0x0001428e32db;
                puVar38 = puVar38 + 1;
                goto code_r0x0001428ddf75;
              }
              puVar38 = puVar38 + -1;
              if (uVar14 == 0x5c) goto code_r0x0001428ddf53;
code_r0x0001428ddee2:
              if (uVar14 == 0x2f) goto code_r0x0001428ddf53;
            } while (puVar38 != &UNK_1435b1850);
            puVar38 = &UNK_1435b1850;
code_r0x0001428ddf75:
            apppppppuStack_1f0[0] = pppppppuStack_128;
            pppppppuStack_318 = (ulonglong *******)apppppppuStack_1f0;
            pppppppuStack_310 = (ulonglong *******)pdb_140f72a40;
            pdb_140f60760(&uStack_6e8,&UNK_1435b18ba,&pppppppuStack_318);
            pppppppuStack_120 = uStack_6e8;
            pppppppuStack_128 = uStack_6e0;
            pppppuVar23 = (ulonglong *****)pdb_140e97000();
            if ((*(char *)(pppppuVar23 + 0xd) != '\x01') &&
               (pppppuVar23 = (ulonglong *****)pdb_142e16b00(pppppuVar23,0),
               pppppuVar23 == (ulonglong *****)0x0)) {
              pdb_142dc7890(&UNK_14328b3f8);
              goto LAB_1428e361d;
            }
            if (*pppppuVar23 != (ulonglong ****)0x0) {
              pdb_142dc8090(&UNK_14328b468);
              goto LAB_1428e361d;
            }
            *pppppuVar23 = (ulonglong ****)0xffffffffffffffff;
            pppppuStack_180 = pppppuVar23;
            uVar22 = pdb_140e94f10(pppppuVar23 + 1,&UNK_1435b18bc,0xf,puVar38);
            *pppppuStack_180 = (ulonglong ****)((longlong)*pppppuStack_180 + 1);
            if (pppppppuStack_120 != (ulonglong *******)0x0) {
              pub_1406abac0((byte *)pppppppuStack_128,(ulonglong)pppppppuStack_120,1);
            }
            uStack_390 = (undefined4)uVar22;
            uStack_38c = (undefined4)((ulonglong)uVar22 >> 0x20);
            pppppppuStack_398 = (ulonglong *******)0x1;
          }
          lVar16 = pdb_140b54f80(uStack_718,puVar37[5],&UNK_1435b18d0);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_1435b18e8);
          }
          uVar14 = pdb_14219a5a0(lVar16 + 0x88);
          uVar27 = *(ulonglong *)(lVar16 + 0x100);
          uVar26 = (ulonglong)uVar14;
          if (uVar27 <= uVar26) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar26,uVar27,&UNK_1435b1900);
          }
          if (uVar27 <= uVar26 + 1) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar26 + 1,uVar27,&UNK_1435b1900);
          }
          fVar56 = *(float *)(*(longlong *)(lVar16 + 0xf8) + uVar26 * 4);
          if (*(float *)(lVar16 + 0x28c) * _DAT_142e3783c <
              (*(float *)(*(longlong *)(lVar16 + 0xf8) + 4 + uVar26 * 4) - fVar56) *
              extraout_XMM0_Da + fVar56) {
            pppppppuVar18 = pppppppuStack_408;
            if ((char)uStack_158 != '\0') {
              pppppuVar23 = (ulonglong *****)pdb_140e97000();
              if ((*(char *)(pppppuVar23 + 0xd) == '\x01') ||
                 (pppppuVar23 = (ulonglong *****)pdb_142e16b00(pppppuVar23,0),
                 pppppuVar23 != (ulonglong *****)0x0)) {
                if (*pppppuVar23 == (ulonglong ****)0x0) {
                  *pppppuVar23 = (ulonglong ****)0xffffffffffffffff;
                  pppppuStack_108 = pppppuVar23;
                  pdb_140e95370(pppppuVar23 + 1,CONCAT44(uStack_38c,uStack_390));
                  *pppppuStack_108 = (ulonglong ****)((longlong)*pppppuStack_108 + 1);
                  pppppppuVar18 = pppppppuStack_408;
                  goto joined_r0x0001428de15f;
                }
                pdb_142dc8090(&UNK_14328b468);
              }
              else {
                pdb_142dc7890(&UNK_14328b3f8);
              }
              goto LAB_1428e361d;
            }
            goto joined_r0x0001428de15f;
          }
          if ((char)uStack_158 != '\0') {
            pppppppuVar18 = (ulonglong *******)pdb_140e97000();
            if ((*(char *)(pppppppuVar18 + 0xd) != '\x01') &&
               (pppppppuVar18 = (ulonglong *******)pdb_142e16b00(pppppppuVar18,0),
               pppppppuVar18 == (ulonglong *******)0x0)) {
              pdb_142dc7890(&UNK_14328b3f8);
              goto LAB_1428e361d;
            }
            if (*pppppppuVar18 != (ulonglong ******)0x0) {
              pdb_142dc8090(&UNK_14328b468);
              goto LAB_1428e361d;
            }
            *pppppppuVar18 = (ulonglong ******)0xffffffffffffffff;
            uStack_158 = pppppppuVar18;
            pdb_140e95370(pppppppuVar18 + 1,CONCAT44(uStack_38c,uStack_390));
            *uStack_158 = (ulonglong ******)((longlong)*uStack_158 + 1);
          }
          fVar56 = (float)pdb_14140ce00(ppppuStack_3a0);
          pppppppuVar18 = pppppppuStack_408;
        }
        else {
          uStack_348._4_4_ = (float)((ulonglong)uStack_6e8 >> 0x20);
          fVar56 = fVar63 * uStack_348._4_4_ + fVar62 * fVar50 + fVar49 * fVar59;
          pppppppuVar18 = pppppppuStack_120;
        }
        pppppuVar23 = pppppuStack_140;
        if (pppppppuVar18 != (ulonglong *******)0x0) {
          pppppppuVar18 = (ulonglong *******)pdb_140e97000();
          if ((*(char *)(pppppppuVar18 + 0xd) != '\x01') &&
             (pppppppuVar18 = (ulonglong *******)pdb_142e16b00(pppppppuVar18,0),
             pppppppuVar18 == (ulonglong *******)0x0)) {
            pdb_142dc7890(&UNK_14328b3f8);
            goto LAB_1428e361d;
          }
          if (*pppppppuVar18 != (ulonglong ******)0x0) {
            pdb_142dc8090(&UNK_14328b468);
            goto LAB_1428e361d;
          }
          *pppppppuVar18 = (ulonglong ******)0xffffffffffffffff;
          uStack_158 = pppppppuVar18;
          pdb_140e95370(pppppppuVar18 + 1,uStack_400);
          *uStack_158 = (ulonglong ******)((longlong)*uStack_158 + 1);
        }
        if (lStack_708 == 0) goto code_r0x0001428de320;
        pppppppuVar18 = (ulonglong *******)pdb_140e97000();
        if ((*(char *)(pppppppuVar18 + 0xd) != '\x01') &&
           (pppppppuVar18 = (ulonglong *******)pdb_142e16b00(pppppppuVar18,0),
           pppppppuVar18 == (ulonglong *******)0x0)) {
          pdb_142dc7890(&UNK_14328b3f8);
          goto LAB_1428e361d;
        }
        if (*pppppppuVar18 != (ulonglong ******)0x0) {
          pdb_142dc8090(&UNK_14328b468);
          goto LAB_1428e361d;
        }
        *pppppppuVar18 = (ulonglong ******)0xffffffffffffffff;
        uStack_158 = pppppppuVar18;
        pdb_140e95370(pppppppuVar18 + 1,uStack_700);
        *uStack_158 = (ulonglong ******)((longlong)*uStack_158 + 1);
code_r0x0001428de320:
        uStack_338 = (ulonglong *******)pppppuStack_108[8];
        uStack_330 = pppppuStack_108[9];
        fStack_328 = SUB84(pppppuStack_108[10],0);
        fStack_324 = (float)((ulonglong)pppppuStack_108[10] >> 0x20);
        fStack_320 = SUB84(pppppuStack_108[0xb],0);
        fStack_31c = (float)((ulonglong)pppppuStack_108[0xb] >> 0x20);
        uStack_6e8 = (ulonglong *******)CONCAT44(fVar56,fVar55);
        uStack_6e0 = (ulonglong *******)CONCAT44(uStack_6e0._4_4_,fVar40);
        pdb_140df43c0(&uStack_338,&uStack_6e8);
        fVar54 = _DAT_142e36f28 /
                 SQRT(fStack_340 * fStack_340 + (float)uStack_348 * (float)uStack_348);
        auVar47._0_4_ = (float)((uint)fVar54 ^ _DAT_142e37820);
        auVar47._4_4_ = _UNK_142e37824;
        auVar47._8_4_ = _UNK_142e37828;
        auVar47._12_4_ = _UNK_142e3782c;
        auVar48._4_12_ = auVar47._4_12_;
        auVar48._0_4_ = auVar47._0_4_ * fStack_340;
        pdb_140df3f70(&uStack_338,auVar48._0_8_,(float)uStack_348 * fVar54);
        ppppppuVar29 = ppppppuStack_710;
        if (_DAT_142e37adc < *(float *)((longlong)pppppppuStack_130 + -0x14) - fVar56)
        goto LAB_1428dc55e;
        if (1 < (uint)pppppuVar23) goto code_r0x0001428de61f;
        fVar54 = (float)uStack_330;
        fVar59 = uStack_330._4_4_;
        fVar56 = uStack_338._4_4_;
        fVar63 = _DAT_142e36f28 /
                 SQRT(uStack_338._4_4_ * uStack_338._4_4_ + (float)uStack_338 * (float)uStack_338);
        fVar50 = (float)uStack_338 * fVar63;
        fVar62 = uStack_338._4_4_ * fVar63;
        fVar44 = (float)pdb_14140ce00(ppppuStack_3a0,
                                      fStack_328 * fVar50 * _DAT_142e36f50 + (float)uStack_330,
                                      fStack_328 * fVar62 * _DAT_142e36f50 + uStack_330._4_4_);
        fVar62 = (float)pdb_14140ce00(ppppuStack_3a0,fVar54 - fVar50 * fStack_328 * _DAT_142e36f50,
                                      fVar59 - fVar62 * fStack_328 * _DAT_142e36f50);
        fVar59 = (float)pdb_14140ce00(ppppuStack_3a0,
                                      fVar63 * (float)((uint)fVar56 ^ _DAT_142e37820) * fStack_324 *
                                      _DAT_142e36f50 + fVar54,
                                      fStack_324 * fVar50 * _DAT_142e36f50 + fVar59);
        fVar50 = (float)pdb_14140ce00(ppppuStack_3a0);
        fVar54 = fVar62;
        if (fVar62 <= fVar44) {
          fVar54 = fVar44;
        }
        fVar56 = fVar62;
        if (fVar44 <= fVar62) {
          fVar56 = fVar44;
        }
        fVar44 = (float)(~-(uint)NAN(fVar44) & (uint)fVar56 | -(uint)NAN(fVar44) & (uint)fVar62);
        fVar56 = fVar59;
        if (fVar44 <= fVar59) {
          fVar56 = fVar44;
        }
        fVar44 = (float)(-(uint)NAN(fVar44) & (uint)fVar59 | ~-(uint)NAN(fVar44) & (uint)fVar56);
        fVar56 = fVar50;
        if (fVar44 <= fVar50) {
          fVar56 = fVar44;
        }
        fVar56 = (float)(-(uint)NAN(fVar44) & (uint)fVar50 | ~-(uint)NAN(fVar44) & (uint)fVar56);
        fVar44 = fVar59;
        if (fVar59 <= fVar54) {
          fVar44 = fVar54;
        }
        fVar59 = (float)(-(uint)NAN(fVar54) & (uint)fVar59 | ~-(uint)NAN(fVar54) & (uint)fVar44);
        fVar54 = fVar50;
        if (fVar50 <= fVar59) {
          fVar54 = fVar59;
        }
        fVar44 = (fStack_31c - fStack_320) * _DAT_142f95160;
        if (_DAT_142e382c0 <= fVar44) {
          fVar44 = _DAT_142e382c0;
        }
        ppppppuVar29 = ppppppuStack_710;
        if ((float)(-(uint)NAN(fVar59) & (uint)fVar50 | ~-(uint)NAN(fVar59) & (uint)fVar54) - fVar56
            < fVar44) goto code_r0x0001428de61f;
        goto LAB_1428dc55e;
      }
joined_r0x0001428de15f:
      if (pppppppuVar18 != (ulonglong *******)0x0) {
        pppppuVar23 = (ulonglong *****)pdb_140e97000();
        if ((*(char *)(pppppuVar23 + 0xd) != '\x01') &&
           (pppppuVar23 = (ulonglong *****)pdb_142e16b00(pppppuVar23,0),
           pppppuVar23 == (ulonglong *****)0x0)) {
          pdb_142dc7890(&UNK_14328b3f8);
          goto LAB_1428e361d;
        }
        if (*pppppuVar23 != (ulonglong ****)0x0) {
          pdb_142dc8090(&UNK_14328b468);
          goto LAB_1428e361d;
        }
        *pppppuVar23 = (ulonglong ****)0xffffffffffffffff;
        pppppuStack_108 = pppppuVar23;
        pdb_140e95370(pppppuVar23 + 1,uStack_400);
        *pppppuStack_108 = (ulonglong ****)((longlong)*pppppuStack_108 + 1);
      }
code_r0x0001428de1ab:
      ppppppuVar29 = ppppppuStack_710;
      if (lStack_708 != 0) {
        pppppuVar23 = (ulonglong *****)pdb_140e97000();
        if ((*(char *)(pppppuVar23 + 0xd) != '\x01') &&
           (pppppuVar23 = (ulonglong *****)pdb_142e16b00(pppppuVar23,0),
           pppppuVar23 == (ulonglong *****)0x0)) {
          pdb_142dc7890(&UNK_14328b3f8);
          goto LAB_1428e361d;
        }
        if (*pppppuVar23 != (ulonglong ****)0x0) {
          pdb_142dc8090(&UNK_14328b468);
          goto LAB_1428e361d;
        }
        *pppppuVar23 = (ulonglong ****)0xffffffffffffffff;
        pppppuStack_108 = pppppuVar23;
        pdb_140e95370(pppppuVar23 + 1,uStack_700);
        *pppppuStack_108 = (ulonglong ****)((longlong)*pppppuStack_108 + 1);
        ppppppuVar29 = ppppppuStack_710;
      }
      goto LAB_1428dc55e;
    }
    if (_DAT_143cb27c0 != 0) {
      pppppppuStack_318 = (ulonglong *******)CONCAT71(pppppppuStack_318._1_7_,1);
      uStack_6e8 = (ulonglong *******)&pppppppuStack_318;
      pdb_142dc7060(&DAT_143cb27c0,0,&uStack_6e8,&UNK_1435b1bb8);
    }
    pdb_1400f0d40(&uStack_6e8,_DAT_143cb3328);
    if ((float)uStack_6e8 == 1.4013e-45) {
      pppppppuStack_318 = uStack_6e0;
      pppppppuStack_310 =
           (ulonglong *******)CONCAT71(pppppppuStack_310._1_7_,pppppppuStack_6d8._0_1_);
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_1435b1b30,0x13,&pppppppuStack_318,&UNK_1435b1cc8);
    }
    pppppppuStack_130 = uStack_6e0;
    pppppuStack_108 = (ulonglong *****)CONCAT71(pppppuStack_108._1_7_,pppppppuStack_6d8._0_1_);
    pdb_14007ee60();
    pppppppuVar18 = (ulonglong *******)pub_1406abab0(0xf,1);
    if (pppppppuVar18 == (ulonglong *******)0x0) {
      pdb_142dc7e2a(1,0xf);
      goto LAB_1428e361d;
    }
    *(undefined8 *)((longlong)pppppppuVar18 + 7) = 0x2928202168746170;
    *pppppppuVar18 = (ulonglong ******)0x705f656c75646f6d;
    uStack_6e8 = (ulonglong *******)0xf;
    pppppppuStack_6d8 = (ulonglong *******)0xf;
    uStack_6e0 = pppppppuVar18;
    pdb_142d7f1b0(&uStack_6e8,0xf,0x18,1);
    uVar22 = _UNK_1435b1b4b;
    *(undefined8 *)((longlong)uStack_6e0 + (longlong)pppppppuStack_6d8) = _DAT_1435b1b43;
    *(undefined8 *)((char *)((longlong)uStack_6e0 + (longlong)pppppppuStack_6d8) + 8) = uVar22;
    builtin_strncpy((char *)((longlong)uStack_6e0 + (longlong)(pppppppuStack_6d8 + 2)),":: Error",8)
    ;
    pppppppuStack_308 = pppppppuStack_6d8 + 3;
    pppppppuStack_318 = uStack_6e8;
    pppppppuStack_310 = uStack_6e0;
    if ((ulonglong)((longlong)uStack_6e8 - (longlong)pppppppuStack_308) < 0x24) {
      pdb_142d7f1b0(&pppppppuStack_318,pppppppuStack_308,0x24,1);
    }
    uVar22 = _UNK_1435b1b73;
    *(undefined8 *)((longlong)pppppppuStack_310 + (longlong)(pppppppuStack_308 + 2)) =
         _DAT_1435b1b6b;
    *(undefined8 *)((char *)((longlong)pppppppuStack_310 + (longlong)(pppppppuStack_308 + 2)) + 8) =
         uVar22;
    uVar22 = _UNK_1435b1b63;
    *(undefined8 *)((longlong)pppppppuStack_310 + (longlong)pppppppuStack_308) = _DAT_1435b1b5b;
    *(undefined8 *)((char *)((longlong)pppppppuStack_310 + (longlong)pppppppuStack_308) + 8) =
         uVar22;
    builtin_strncpy((char *)((longlong)pppppppuStack_310 + (longlong)(pppppppuStack_308 + 4)),"hed!"
                    ,4);
    pppppppuStack_6d8 = (ulonglong *******)((longlong)pppppppuStack_308 + 0x24);
    uStack_6e8 = pppppppuStack_318;
    uStack_6e0 = pppppppuStack_310;
    pppppppuStack_308 = pppppppuStack_6d8;
    cVar13 = pdb_14216d520(pppppppuStack_130 + 1,&uStack_6e8);
    if ((cVar13 == '\0') && (*_DAT_143ca8e90 != 0)) {
      uStack_6e8 = (ulonglong *******)0x0;
      uStack_6e0 = (ulonglong *******)&UNK_1435b1b7f;
      pppppppuStack_6d8 = (ulonglong *******)0x39;
      uStack_6d0 = 0;
      pppppuStack_6c8 = (ulonglong *****)&UNK_1435b17f0;
      uStack_6c0 = 0x46;
      uStack_6b8 = (ulonglong *******)0x1;
      pppppppuStack_6b0 = (ulonglong *******)&UNK_1435b1b7f;
      pppppppuStack_6a8 = (ulonglong *******)0x39;
      uStack_6a0 = 0xa400000001;
      pppppppuStack_698 = (ulonglong *******)&DAT_1435b1b5b;
      uStack_690 = 0x49;
      pdb_140f332f0(&uStack_171,&uStack_6e8);
    }
    pppppppuVar18 = pppppppuStack_130;
    if ((((char)pppppuStack_108 == '\0') && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)) &&
       (cVar13 = pdb_142dc79e0(), cVar13 == '\0')) {
      *(char *)((longlong)pppppppuVar18 + 1) = '\x01';
    }
    LOCK();
    cVar13 = *(char *)pppppppuVar18;
    *(char *)pppppppuVar18 = '\0';
    UNLOCK();
    if (cVar13 == '\x02') {
      pdb_142dc6ca0(pppppppuVar18);
    }
    if (lStack_468 == 0) {
code_r0x0001428e2d73:
      return;
    }
    plVar19 = (longlong *)pdb_140e97000();
    if (((char)plVar19[0xd] != '\x01') &&
       (plVar19 = (longlong *)pdb_142e16b00(plVar19,0), plVar19 == (longlong *)0x0))
    goto LAB_1428e2fc0;
    if (*plVar19 == 0) {
      *plVar19 = -1;
      pppppppuStack_130 = (ulonglong *******)plVar19;
      pdb_140e95370(plVar19 + 1,uStack_460);
LAB_1428e2d09:
      *pppppppuStack_130 = (ulonglong ******)((longlong)*pppppppuStack_130 + 1);
      return;
    }
  }
  else {
    lVar36 = 0x57;
    lVar16 = pdb_1428e69f0(0x57);
    puVar38 = &UNK_1435b1d33;
    if (lVar16 == 1) {
      if (0x57 < param_2) {
LAB_1428e32ba:
        pdb_142dc8070(&UNK_1435b1d33,0x57,0);
code_r0x0001428e32db:
        pdb_142dc8070(&UNK_1435b1850,0x46,unaff_RBX,0x46);
        goto LAB_1428e361d;
      }
      uVar17 = pdb_1428e69f0(param_2);
      if ((uVar17 & 1) != 0) {
        if (0x57 < param_2 + 2) {
          pdb_142dc8070(&UNK_1435b1d33,0x57,param_2 + 2,0x57);
          uStack_f1 = 1;
          pdb_142dc8070(&UNK_1435b1850,0x46);
          goto LAB_1428e361d;
        }
        lVar36 = 0x55 - param_2;
        puVar38 = &UNK_1435b1d35 + param_2;
      }
    }
    puVar31 = &UNK_1435b1896;
    puVar33 = &UNK_1435b1850;
    do {
      bVar2 = puVar31[-1];
      uVar14 = (uint)(char)bVar2;
      if ((char)bVar2 < '\0') {
        bVar3 = puVar31[-2];
        if ((char)bVar3 < -0x40) {
          bVar4 = puVar31[-3];
          if ((char)bVar4 < -0x40) {
            pbVar35 = puVar31 + -4;
            puVar31 = puVar31 + -4;
            uVar14 = bVar4 & 0x3f | (*pbVar35 & 7) << 6;
          }
          else {
            puVar31 = puVar31 + -3;
            uVar14 = bVar4 & 0xf;
          }
          uVar14 = bVar3 & 0x3f | uVar14 << 6;
        }
        else {
          puVar31 = puVar31 + -2;
          uVar14 = bVar3 & 0x1f;
        }
        uVar14 = (uint)(bVar2 & 0x3f) | uVar14 << 6;
        if (uVar14 != 0x5c) goto LAB_1428dbf04;
LAB_1428dbf1c:
        if ((undefined *)0x46 < puVar31 + -0x1435b184f) {
          pdb_142dc8070(&UNK_1435b1850,0x46,puVar31 + -0x1435b184f,0x46);
          goto LAB_1428e32ba;
        }
        puVar33 = puVar31 + 1;
        break;
      }
      puVar31 = puVar31 + -1;
      if (uVar14 == 0x5c) goto LAB_1428dbf1c;
LAB_1428dbf04:
      if (uVar14 == 0x2f) goto LAB_1428dbf1c;
    } while (puVar31 != &UNK_1435b1850);
    pppppppuVar18 = (ulonglong *******)pdb_140e97000();
    if ((*(char *)(pppppppuVar18 + 0xd) != '\x01') &&
       (pppppppuVar18 = (ulonglong *******)pdb_142e16b00(pppppppuVar18,0),
       pppppppuVar18 == (ulonglong *******)0x0)) {
LAB_1428e2fc0:
      pdb_142dc7890(&UNK_14328b3f8);
      uStack_f1 = 1;
      pdb_142dc8090(&UNK_14328b468);
      goto LAB_1428e361d;
    }
    if (*pppppppuVar18 == (ulonglong ******)0x0) {
      *pppppppuVar18 = (ulonglong ******)0xffffffffffffffff;
      pppppppuStack_118 = pppppppuVar18;
      uStack_460 = pdb_140e94f10(pppppppuVar18 + 1,puVar38,lVar36,puVar33);
      *pppppppuStack_118 = (ulonglong ******)((longlong)*pppppppuStack_118 + 1);
      lStack_468 = 1;
      goto LAB_1428dbfa5;
    }
  }
LAB_1428e2dff:
  pdb_142dc8090(&UNK_14328b468);
code_r0x0001428e2e0c:
  pdb_142dc8090(&UNK_14328b468);
LAB_1428e361d:
                    /* WARNING: Does not return */
  pcVar10 = (code *)invalidInstructionException();
  (*pcVar10)();
code_r0x0001428de61f:
  pppppuStack_140 = pppppuVar23;
  if ((fVar55 == (float)auStack_258._0_4_) && (!NAN(fVar55) && !NAN((float)auStack_258._0_4_))) {
    if ((fVar56 == fVar45) && (!NAN(fVar56) && !NAN(fVar45))) {
      if ((fVar40 == pppppuStack_168._0_4_) && (!NAN(fVar40) && !NAN(pppppuStack_168._0_4_)))
      goto code_r0x0001428de650;
    }
  }
  pppppppuStack_138 = (ulonglong *******)((ulonglong)pppppppuStack_138 & 0xffffffff00000000);
code_r0x0001428de650:
  ppppppuVar29 = (ulonglong ******)0x0;
  pppppppuStack_110 =
       (ulonglong *******)CONCAT71(pppppppuStack_110._1_7_,1 < (byte)pppppppuStack_110);
  pppppppuVar18 = (ulonglong *******)pppppppuStack_130[-8];
  pppppppuVar25 = pppppppuStack_130;
  pppppppuVar21 = pppppppuVar18;
code_r0x0001428de666:
  *(char *)((longlong)ppppppuVar29 + -0x75) =
       *(char *)((longlong)ppppppuVar29 + -0x75) + (char)pppppppuVar25;
  *(char *)((longlong)pppppppuVar25 + -0x77) = *(char *)((longlong)pppppppuVar25 + -0x77);
  pcVar32 = (char *)0x0;
  if ((ulonglong *******)0x1 < pppppppuVar21) {
    pcVar32 = (char *)((longlong)pppppppuVar21 + -2);
  }
  in_R10 = (ulonglong *****)&UNK_1435b1eac;
  pppppppuVar21 = (ulonglong *******)(longlong)*(int *)(&UNK_1435b1eac + (longlong)pcVar32 * 4);
code_r0x0001428de687:
                    /* WARNING: Could not recover jumptable at 0x0001428de6a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((longlong)pppppppuVar21 + (longlong)in_R10))
            (pppppppuVar25,pppppppuVar18,(code *)((longlong)pppppppuVar21 + (longlong)in_R10));
  return;
}

