// VA 0x141737290, PDB extent 17214 bytes
// turbosloth::asset::impl$44::build::async_block$1<asset_pipe::texture::TextureAssetList,turbosloth::asset::BuildContext>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x000141740419) overlaps instruction at (ram,0x000141740418)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   turbosloth::asset::impl$44::build::async_block$1<asset_pipe::texture::TextureAssetList,turbosloth::asset::BuildContext>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 17214 */

undefined1 (*) [16]
pdb_141737290(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
             byte param_4)

{
  char *pcVar1;
  int iVar2;
  undefined1 (*pauVar3) [16];
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 uVar21;
  byte bVar22;
  char cVar23;
  uint uVar24;
  undefined1 (*pauVar25) [16];
  longlong *plVar26;
  undefined1 (**ppauVar27) [16];
  undefined1 (**ppauVar28) [16];
  longlong lVar29;
  undefined1 (*pauVar30) [16];
  undefined1 (*pauVar31) [16];
  byte *pbVar32;
  undefined4 uVar33;
  undefined *puVar34;
  undefined1 (*pauVar35) [16];
  undefined1 (**ppauVar36) [16];
  undefined8 *puVar37;
  ulonglong uVar38;
  undefined8 uVar39;
  undefined1 *puVar40;
  undefined1 *puVar41;
  undefined1 (**ppauVar42) [16];
  undefined1 *puVar43;
  undefined1 *puVar44;
  undefined1 *puVar45;
  undefined1 *puVar46;
  undefined1 *puVar47;
  undefined1 (*unaff_RSI) [16];
  ulonglong *puVar48;
  longlong lVar49;
  byte *unaff_R15;
  undefined1 (*pauVar50) [16];
  bool bVar51;
  undefined1 (*in_XMM0_Qa) [16];
  undefined1 (*in_XMM0_Qb) [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined8 in_XMM1_Qa;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined8 in_XMM2_Qa;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  undefined8 in_XMM3_Qa;
  undefined4 in_XMM3_Dc;
  undefined4 in_XMM3_Dd;
  undefined8 uStack_7e0;
  undefined1 auStack_7d8 [48];
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined4 uStack_790;
  undefined4 uStack_78c;
  undefined4 uStack_788;
  undefined4 uStack_784;
  undefined4 uStack_780;
  undefined4 uStack_77c;
  undefined4 uStack_778;
  undefined4 uStack_774;
  undefined1 auStack_758 [16];
  longlong lStack_748;
  undefined8 uStack_740;
  undefined4 uStack_738;
  undefined4 uStack_734;
  undefined *puStack_730;
  undefined1 (*pauStack_728) [16];
  undefined *puStack_720;
  undefined8 uStack_718;
  undefined1 *puStack_710;
  undefined1 (*pauStack_708) [16];
  undefined1 auStack_700 [32];
  undefined1 (**ppauStack_6e0) [16];
  undefined8 *puStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 *puStack_6c0;
  undefined1 (**ppauStack_6b8) [16];
  undefined8 *puStack_6b0;
  int iStack_6a8;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined1 (*pauStack_678) [16];
  undefined8 uStack_670;
  undefined1 (*pauStack_668) [16];
  undefined1 (*pauStack_660) [16];
  undefined1 (*pauStack_658) [16];
  undefined1 (*pauStack_650) [16];
  undefined1 (*pauStack_648) [16];
  undefined1 (*pauStack_640) [16];
  undefined1 (*pauStack_638) [16];
  undefined1 (*pauStack_630) [16];
  undefined8 uStack_628;
  undefined8 uStack_620;
  longlong lStack_618;
  undefined1 (*pauStack_610) [16];
  longlong lStack_608;
  undefined8 uStack_600;
  undefined1 (*pauStack_5f8) [16];
  undefined1 (*pauStack_5f0) [16];
  undefined1 (*pauStack_5e8) [16];
  undefined1 (*pauStack_5e0) [16];
  undefined1 (*pauStack_5d8) [16];
  undefined1 (*pauStack_5d0) [16];
  undefined1 (**ppauStack_5c0) [16];
  undefined8 uStack_5b8;
  undefined1 (*pauStack_5b0) [16];
  undefined1 (*pauStack_5a8) [16];
  undefined1 (*pauStack_5a0) [16];
  undefined1 (*pauStack_598) [16];
  undefined1 (**ppauStack_590) [16];
  undefined4 uStack_588;
  undefined4 uStack_584;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined4 uStack_578;
  undefined4 uStack_574;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined1 (*pauStack_530) [16];
  undefined4 uStack_528;
  undefined4 uStack_524;
  undefined1 (*pauStack_520) [16];
  undefined8 uStack_510;
  undefined1 (*pauStack_508) [16];
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined *puStack_4e0;
  undefined8 uStack_4d8;
  undefined1 (*pauStack_4d0) [16];
  undefined1 (*pauStack_4c8) [16];
  undefined1 (*pauStack_4c0) [16];
  undefined8 uStack_4b0;
  undefined1 (**ppauStack_4a8) [16];
  longlong lStack_4a0;
  undefined1 (*pauStack_498) [16];
  byte *pbStack_490;
  undefined *puStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined1 (*pauStack_470) [16];
  undefined1 (*pauStack_468) [16];
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_400;
  undefined8 uStack_3d8;
  undefined1 auStack_200 [16];
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 (**ppauStack_130) [16];
  longlong lStack_128;
  undefined1 (*pauStack_120) [16];
  undefined1 (*pauStack_118) [16];
  undefined1 (*pauStack_110) [16];
  undefined1 (*pauStack_108) [16];
  undefined1 (*pauStack_100) [16];
  undefined1 (*pauStack_f8) [16];
  undefined1 (*apauStack_f0 [2]) [16];
  undefined1 (*pauStack_e0) [16];
  undefined1 (*pauStack_d8) [16];
  undefined1 (*pauStack_d0) [16];
  undefined1 (*pauStack_c8) [16];
  undefined1 (*apauStack_c0 [2]) [16];
  undefined1 (*pauStack_b0) [16];
  undefined1 (*pauStack_a8) [16];
  undefined1 (*pauStack_a0) [16];
  ulonglong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 (*pauStack_80) [16];
  undefined8 uStack_70;
  
  uVar33 = (undefined4)((ulonglong)in_XMM1_Qa >> 0x20);
  pauVar31 = (undefined1 (*) [16])&pauStack_678;
  puVar41 = auStack_700;
  puVar44 = auStack_700;
  puVar46 = auStack_700;
  puVar45 = auStack_700;
  puVar47 = auStack_700;
  puVar43 = auStack_700;
  puVar40 = auStack_700;
  pauStack_80 = pauVar31;
  uStack_70 = 0xfffffffffffffffe;
  puVar34 = &UNK_14332bd94;
  iVar2 = *(int *)(&UNK_14332bd94 + (ulonglong)(byte)param_2[4][10] * 4);
  pauVar25 = (undefined1 (*) [16])(&UNK_14332bd94 + iVar2);
  uStack_690 = param_2;
  cVar23 = (char)pauVar25;
  pauVar30 = pauVar25;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2[4][10]) {
  case 0:
    *(undefined2 *)(param_2[4] + 8) = 0;
    lVar29 = *(longlong *)(param_2[3] + 8);
    pauVar31 = (undefined1 (*) [16])(lVar29 + 0x30);
    LOCK();
    bVar51 = *(int *)(lVar29 + 0x30) == 0;
    if (bVar51) {
      *(int *)(lVar29 + 0x30) = 0x3fffffff;
    }
    UNLOCK();
    if (!bVar51) {
      pauStack_708 = (undefined1 (*) [16])0x1417387ec;
      pdb_142dc6e70(pauVar31);
    }
    puVar48 = _DAT_143ca8f38;
    if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
      bVar22 = 0;
      cVar23 = *(char *)(lVar29 + 0x38);
    }
    else {
      pauStack_708 = (undefined1 (*) [16])0x1417387f7;
      bVar22 = pdb_142dc79e0();
      bVar22 = bVar22 ^ 1;
      cVar23 = *(char *)(lVar29 + 0x38);
    }
    if (cVar23 != '\0') {
      uStack_478._1_7_ = (undefined7)((ulonglong)uStack_478 >> 8);
      uStack_478._0_1_ = bVar22;
      ppauStack_6e0 = (undefined1 (**) [16])&UNK_14332afe0;
                    /* WARNING: Subroutine does not return */
      pauStack_708 = (undefined1 (*) [16])0x14173884a;
      uStack_480 = pauVar31;
      pdb_142dc8170(&UNK_14332b8d0,0x2b,&uStack_480,&UNK_14332b960);
    }
    uVar38 = (ulonglong)pauStack_660 >> 8;
    pauStack_660 = (undefined1 (*) [16])CONCAT71((int7)uVar38,bVar22);
    pauVar30 = *(undefined1 (**) [16])(lVar29 + 0x70);
    pauStack_668 = pauVar31;
    if (pauVar30 == (undefined1 (*) [16])0x0) {
      if (SBORROW8(0,*(longlong *)(lVar29 + 0x58))) {
        *(undefined8 *)(lVar29 + 0x58) = 0;
        *(undefined8 *)(lVar29 + 0x60) = 8;
        *(undefined8 *)(lVar29 + 0x68) = 0;
        *(undefined8 *)uStack_690[2] = 2;
      }
      else {
        uStack_480 = (undefined1 (*) [16])0x1;
        uStack_478 = (undefined1 (*) [16])0x1;
        uStack_400 = 0;
        uStack_3d8 = 0;
        auStack_200 = (undefined1  [16])0x0;
        uStack_1f0 = 0;
        uStack_1e8 = 1;
        uStack_1e0 = 1;
        pauStack_708 = (undefined1 (*) [16])0x141737d42;
        pdb_14007ee60();
        pauStack_708 = (undefined1 (*) [16])0x141737d51;
        pauVar30 = (undefined1 (*) [16])pub_1406abab0(0x300,0x80);
        if (pauVar30 == (undefined1 (*) [16])0x0) {
                    /* WARNING: Subroutine does not return */
          pauStack_708 = (undefined1 (*) [16])0x141738983;
          pdb_142dc7e11(0x80,0x300);
        }
        pauStack_708 = (undefined1 (*) [16])0x141737d79;
        uStack_680 = param_3;
        pub_142e32760(pauVar30,&uStack_480,0x300);
        LOCK();
        lVar49 = *(longlong *)*pauVar30;
        *(longlong *)*pauVar30 = *(longlong *)*pauVar30 + 1;
        UNLOCK();
        if (*(longlong *)*pauVar30 == 0 || SCARRY8(lVar49,1) != *(longlong *)*pauVar30 < 0)
        goto code_r0x00014173a218;
        uStack_478 = (undefined1 (*) [16])0x0;
        lVar49 = *(longlong *)(lVar29 + 0x68);
        pauStack_5b0 = pauVar30;
        uStack_480 = pauVar30;
        if (lVar49 == *(longlong *)(lVar29 + 0x58)) {
          pauStack_708 = (undefined1 (*) [16])0x141737db2;
          pdb_142d7e8a0(lVar29 + 0x58);
        }
        *(undefined1 (**) [16])(*(longlong *)(lVar29 + 0x60) + lVar49 * 8) = pauVar30;
        *(longlong *)(lVar29 + 0x68) = lVar49 + 1;
        *(undefined1 (**) [16])(uStack_690[2] + 8) = pauVar30;
        *(undefined8 *)uStack_690[3] = 0;
        *(undefined8 *)uStack_690[2] = 1;
        puVar48 = _DAT_143ca8f38;
        param_3 = uStack_680;
      }
    }
    else {
      pauVar25 = *(undefined1 (**) [16])(lVar29 + 0x78);
      LOCK();
      lVar49 = *(longlong *)*pauVar30;
      *(longlong *)*pauVar30 = *(longlong *)*pauVar30 + 1;
      UNLOCK();
      if (*(longlong *)*pauVar30 == 0 || SCARRY8(lVar49,1) != *(longlong *)*pauVar30 < 0)
      goto code_r0x00014173a218;
      pauStack_708 = (undefined1 (*) [16])0x141737399;
      pauStack_5b0 = pauVar30;
      pauStack_5a8 = pauVar25;
      pdb_141c34660(&uStack_98,*(longlong *)uStack_690[4] + 0x10,*(undefined8 *)(lVar29 + 0x48),
                    *(undefined8 *)(lVar29 + 0x50));
      uVar38 = 1;
      if ((longlong)uStack_98 < 0) {
        uVar38 = uStack_98 ^ 0x8000000000000000;
      }
      if (uVar38 != 0) {
        if (uVar38 != 1) {
          if (SBORROW8(0,*(longlong *)(lVar29 + 0x58))) {
            *(undefined8 *)(lVar29 + 0x58) = 0;
            *(undefined8 *)(lVar29 + 0x60) = 8;
            *(undefined8 *)(lVar29 + 0x68) = 0;
            *(undefined8 *)uStack_690[2] = 2;
            LOCK();
            *(longlong *)*pauStack_5b0 = *(longlong *)*pauStack_5b0 + -1;
            lVar49 = *(longlong *)*pauStack_5b0;
            UNLOCK();
          }
          else {
            uStack_480 = (undefined1 (*) [16])0x1;
            uStack_478 = (undefined1 (*) [16])0x1;
            uStack_400 = 0;
            uStack_3d8 = 0;
            auStack_200 = (undefined1  [16])0x0;
            uStack_1f0 = 0;
            uStack_1e8 = 1;
            uStack_1e0 = 1;
            pauStack_708 = (undefined1 (*) [16])0x141737ef4;
            pdb_14007ee60();
            pauStack_708 = (undefined1 (*) [16])0x141737f03;
            pauVar30 = (undefined1 (*) [16])pub_1406abab0(0x300,0x80);
            if (pauVar30 == (undefined1 (*) [16])0x0) {
                    /* WARNING: Subroutine does not return */
              pauStack_708 = (undefined1 (*) [16])0x141738a11;
              pdb_142dc7e11(0x80,0x300);
            }
            pauStack_708 = (undefined1 (*) [16])0x141737f2b;
            uStack_680 = param_3;
            pub_142e32760(pauVar30,&uStack_480,0x300);
            LOCK();
            lVar49 = *(longlong *)*pauVar30;
            *(longlong *)*pauVar30 = *(longlong *)*pauVar30 + 1;
            UNLOCK();
            if (*(longlong *)*pauVar30 == 0 || SCARRY8(lVar49,1) != *(longlong *)*pauVar30 < 0)
            goto code_r0x00014173a218;
            uStack_478 = (undefined1 (*) [16])0x0;
            lVar49 = *(longlong *)(lVar29 + 0x68);
            pauStack_640 = pauVar30;
            uStack_480 = pauVar30;
            if (lVar49 == *(longlong *)(lVar29 + 0x58)) {
              pauStack_708 = (undefined1 (*) [16])0x141737f64;
              pdb_142d7e8a0(lVar29 + 0x58);
            }
            *(undefined1 (**) [16])(*(longlong *)(lVar29 + 0x60) + lVar49 * 8) = pauVar30;
            *(longlong *)(lVar29 + 0x68) = lVar49 + 1;
            *(undefined1 (**) [16])(uStack_690[2] + 8) = pauVar30;
            *(undefined8 *)uStack_690[3] = 0;
            *(undefined8 *)uStack_690[2] = 1;
            puVar48 = _DAT_143ca8f38;
            LOCK();
            *(longlong *)*pauStack_5b0 = *(longlong *)*pauStack_5b0 + -1;
            lVar49 = *(longlong *)*pauStack_5b0;
            UNLOCK();
            param_3 = uStack_680;
          }
          if (lVar49 == 0) {
            pauStack_708 = (undefined1 (*) [16])0x141737fb5;
            pdb_140c7a240(&pauStack_5b0);
          }
          goto code_r0x000141737fb6;
        }
        pauStack_678 = *(undefined1 (**) [16])(lVar29 + 0x48);
        lVar49 = *(longlong *)(lVar29 + 0x50);
        uStack_680 = param_1;
        if (lVar49 != 0) {
          puVar37 = (undefined8 *)(pauStack_678[4] + 8);
          do {
            if (*(ulonglong *)*(undefined1 (*) [16])(puVar37 + -1) != 0) {
              pauStack_708 = (undefined1 (*) [16])0x141737435;
              pub_1406abac0((byte *)*puVar37,*(ulonglong *)*(undefined1 (*) [16])(puVar37 + -1),1);
            }
            puVar37 = puVar37 + 0xc;
            lVar49 = lVar49 + -1;
          } while (lVar49 != 0);
        }
        uVar38 = *(ulonglong *)(lVar29 + 0x40);
        if (uVar38 != 0) {
          pauStack_708 = (undefined1 (*) [16])0x141737c5b;
          pub_1406abac0((byte *)pauStack_678,uVar38 * 0x60,0x10);
        }
        *(undefined8 *)(lVar29 + 0x50) = uStack_88;
        *(ulonglong *)(lVar29 + 0x40) = uStack_98;
        *(undefined8 *)(lVar29 + 0x48) = uStack_90;
        puVar48 = _DAT_143ca8f38;
        param_1 = uStack_680;
      }
      *(undefined1 (**) [16])(uStack_690[2] + 8) = pauStack_5b0;
      *(undefined1 (**) [16])uStack_690[3] = pauStack_5a8;
      *(undefined8 *)uStack_690[2] = 0;
    }
code_r0x000141737fb6:
    if ((bVar22 == 0) && ((*puVar48 & 0x7fffffffffffffff) != 0)) {
      pauStack_708 = (undefined1 (*) [16])0x141738960;
      cVar23 = pdb_142dc79e0();
      if (cVar23 == '\0') {
        *(undefined1 *)(lVar29 + 0x38) = 1;
      }
    }
    LOCK();
    iVar2 = *(int *)*pauVar31;
    *(int *)*pauVar31 = *(int *)*pauVar31 + -0x3fffffff;
    UNLOCK();
    uVar24 = iVar2 + 0xc0000001;
    uVar38 = (ulonglong)uVar24;
    if (0x3fffffff < uVar24) {
      pauStack_708 = (undefined1 (*) [16])0x1417387de;
      pdb_142dc6fa0(pauVar31);
    }
    plVar26 = plRam0000000143cad8b0;
    if (*(longlong *)uStack_690[2] != 0) {
      if ((int)*(longlong *)uStack_690[2] != 1) {
        plVar26 = *(longlong **)(uStack_690[3] + 8);
        LOCK();
        lVar29 = *plVar26;
        *plVar26 = *plVar26 + 1;
        UNLOCK();
        uStack_680 = param_1;
        if (*plVar26 == 0 || SCARRY8(lVar29,1) != *plVar26 < 0) goto code_r0x00014173a218;
        *(longlong **)(uStack_690[5] + 8) = plVar26;
        uStack_690[6][0] = 1;
        ppauVar27 = (undefined1 (**) [16])(*(longlong *)uStack_690[4] + 0x10);
        pauStack_708 = (undefined1 (*) [16])0x1417383e6;
        pdb_141805d60(&uStack_540,ppauVar27,*(undefined8 *)(*(longlong *)(uStack_690[3] + 8) + 0x20)
                      ,*(undefined8 *)(*(longlong *)(uStack_690[3] + 8) + 0x28));
        pauVar31 = uStack_538;
        plVar4 = plRam0000000143cad8a8;
        plVar26 = plRam0000000143cad898;
        if (SBORROW8(0,(longlong)pauStack_530)) {
          if (*_DAT_143ca4b08 < 3) {
            bVar22 = *(byte *)(plRam0000000143cad898 + 2);
            ppauVar27 = (undefined1 (**) [16])(ulonglong)bVar22;
            if (2 < bVar22) {
              pauStack_708 = (undefined1 (*) [16])0x1417391e4;
              uVar24 = pdb_142db8070(plRam0000000143cad898);
              ppauVar27 = (undefined1 (**) [16])(ulonglong)uVar24;
              if ((char)uVar24 != '\0') goto code_r0x000141738431;
              goto code_r0x0001417391fa;
            }
            if (bVar22 == 0) goto code_r0x0001417391fa;
code_r0x000141738431:
            pauStack_708 = (undefined1 (*) [16])0x141738439;
            cVar23 = pdb_140dd7f60(*plVar26);
            if (cVar23 == '\0') goto code_r0x0001417391fa;
            lVar29 = *plVar26;
            pauVar31 = *(undefined1 (**) [16])(lVar29 + 0x38);
            if (pauVar31 == (undefined1 (*) [16])0x0) {
              pauStack_708 = (undefined1 (*) [16])0x14173a073;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
              goto code_r0x00014173a218;
            }
            pauStack_640 = *(undefined1 (**) [16])(lVar29 + 0x30);
            pauStack_630 = *(undefined1 (**) [16])(lVar29 + 0x40);
            uStack_628 = *(undefined1 (**) [16])(lVar29 + 0x48);
            uStack_620 = 0;
            pauStack_610 = (undefined1 (*) [16])&UNK_14332b168;
            lStack_608 = 0x1d;
            pauStack_638 = pauVar31;
            if (pauVar31 == (undefined1 (*) [16])0x1) {
              pauStack_708 = (undefined1 (*) [16])0x14173a0af;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
              goto code_r0x00014173a218;
            }
            pauStack_648 = (undefined1 (*) [16])0x1;
            pauStack_5f8 = (undefined1 (*) [16])(*(longlong *)(uStack_690[3] + 8) + 0x20);
            pauStack_658 = pauStack_630;
            pauStack_668 = pauStack_640;
            pauStack_660 = pauVar31;
            pauStack_650 = uStack_628;
            if (pauVar31 < (undefined1 (*) [16])0x3) {
              pauStack_708 = (undefined1 (*) [16])0x14173a0eb;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
              goto code_r0x00014173a218;
            }
            pauStack_530 = (undefined1 (*) [16])(lVar29 + 0x30);
            ppauStack_590 = (undefined1 (**) [16])0x2;
            uStack_448 = uStack_690 + 1;
            uStack_480 = (undefined1 (*) [16])&pauStack_640;
            uStack_478 = (undefined1 (*) [16])&pauStack_610;
            pauStack_470 = (undefined1 (*) [16])&UNK_14332b058;
            pauStack_468 = (undefined1 (*) [16])&pauStack_668;
            uStack_460 = (undefined1 (*) [16])&pauStack_5f8;
            uStack_458 = (undefined1 (*) [16])&UNK_14332b078;
            ppauVar36 = &pauStack_5b0;
            uStack_440 = &UNK_14332b098;
            uStack_540 = (undefined1 (*) [16])&uStack_480;
            uStack_538 = (undefined1 (*) [16])0x3;
            pauStack_708 = (undefined1 (*) [16])0x1417385c5;
            pauStack_5b0 = pauStack_640;
            pauStack_5a8 = pauVar31;
            pauStack_5a0 = pauStack_630;
            pauStack_598 = uStack_628;
            uStack_450 = ppauVar36;
            pdb_14173b8e0(&uStack_540);
          }
          else {
code_r0x0001417391fa:
            plVar26 = plRam0000000143cad898;
            ppauVar36 = ppauVar27;
            if ((*_DAT_143ca4ab0 == '\0') && (2 < *_DAT_143ca8e90)) {
              lVar29 = *plRam0000000143cad898;
              pauStack_d0 = *(undefined1 (**) [16])(lVar29 + 0x20);
              pauStack_c8 = *(undefined1 (**) [16])(lVar29 + 0x28);
              pauStack_d8 = (undefined1 (*) [16])0x3;
              pauStack_708 = (undefined1 (*) [16])0x141739248;
              ppauVar28 = (undefined1 (**) [16])pdb_140f33290();
              ppauVar36 = &pauStack_d8;
              pauStack_708 = (undefined1 (*) [16])0x14173925e;
              cVar23 = (*(code *)ppauVar27[3])(ppauVar28);
              if (cVar23 != '\0') {
                lVar49 = *plVar26;
                pauVar31 = *(undefined1 (**) [16])(lVar49 + 0x38);
                if (pauVar31 == (undefined1 (*) [16])0x0) {
                  pauStack_708 = (undefined1 (*) [16])0x14173a18d;
                  pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
                  goto code_r0x00014173a218;
                }
                pauStack_640 = *(undefined1 (**) [16])(lVar49 + 0x30);
                pauStack_630 = *(undefined1 (**) [16])(lVar49 + 0x40);
                uStack_628 = *(undefined1 (**) [16])(lVar49 + 0x48);
                uStack_620 = 0;
                pauStack_5f8 = (undefined1 (*) [16])&UNK_14332b168;
                pauStack_5f0 = (undefined1 (*) [16])0x1d;
                pauStack_638 = pauVar31;
                if (pauVar31 == (undefined1 (*) [16])0x1) {
                  pauStack_708 = (undefined1 (*) [16])0x14173a1c6;
                  pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
                  goto code_r0x00014173a218;
                }
                pauStack_648 = (undefined1 (*) [16])0x1;
                pauStack_5e0 = (undefined1 (*) [16])(*(longlong *)(uStack_690[3] + 8) + 0x20);
                pauStack_658 = pauStack_630;
                pauStack_668 = pauStack_640;
                pauStack_660 = pauVar31;
                pauStack_650 = uStack_628;
                if (pauVar31 < (undefined1 (*) [16])0x3) {
                  pauStack_708 = (undefined1 (*) [16])0x14173a1fc;
                  pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
                  goto code_r0x00014173a218;
                }
                uStack_600 = (undefined1 (*) [16])(lVar49 + 0x30);
                ppauStack_590 = (undefined1 (**) [16])0x2;
                uStack_448 = uStack_690 + 1;
                uStack_480 = (undefined1 (*) [16])&pauStack_640;
                uStack_478 = (undefined1 (*) [16])&pauStack_5f8;
                pauStack_470 = (undefined1 (*) [16])&UNK_14332b058;
                pauStack_468 = (undefined1 (*) [16])&pauStack_668;
                uStack_460 = (undefined1 (*) [16])&pauStack_5e0;
                uStack_458 = (undefined1 (*) [16])&UNK_14332b078;
                uStack_450 = &pauStack_5b0;
                uStack_440 = &UNK_14332b098;
                pauStack_610 = (undefined1 (*) [16])&uStack_480;
                lStack_608 = 3;
                pauStack_530 = pauStack_c8;
                uStack_540 = pauStack_d8;
                uStack_538 = pauStack_d0;
                ppauStack_6e0 = &pauStack_610;
                pauStack_708 = (undefined1 (*) [16])0x14173941d;
                pauStack_5b0 = pauStack_640;
                pauStack_5a8 = pauVar31;
                pauStack_5a0 = pauStack_630;
                pauStack_598 = uStack_628;
                pdb_140dd7f80(lVar29,ppauVar28,ppauVar27,&uStack_540);
                ppauVar36 = ppauVar28;
              }
            }
          }
          param_1 = uStack_680;
          pauStack_708 = (undefined1 (*) [16])0x141739438;
          uStack_5b8 = (**(code **)(*(longlong *)(*(longlong *)(uStack_690[3] + 8) + 0x18) + 0x28))
                                 (*(undefined8 *)(*(longlong *)(uStack_690[3] + 8) + 0x10));
          uStack_690[4][9] = 1;
          pauVar31 = *(undefined1 (**) [16])uStack_690[4];
          LOCK();
          lVar29 = *(longlong *)*pauVar31;
          *(longlong *)*pauVar31 = *(longlong *)*pauVar31 + 1;
          UNLOCK();
          ppauStack_5c0 = ppauVar36;
          if (*(longlong *)*pauVar31 == 0 || SCARRY8(lVar29,1) != *(longlong *)*pauVar31 < 0)
          goto code_r0x00014173a218;
          pauStack_708 = (undefined1 (*) [16])0x141739477;
          uStack_680 = pauVar31;
          pauStack_668 = pauVar31;
          pdb_1417473a0(&pauStack_5b0);
          uStack_480 = (undefined1 (*) [16])0x1;
          uStack_478 = (undefined1 (*) [16])0x1;
          pauStack_470 = pauStack_5b0;
          pauStack_468 = pauStack_5a8;
          uStack_460 = pauStack_5a0;
          uStack_458 = pauStack_598;
          uStack_450 = ppauStack_590;
          uStack_448 = (undefined1 (*) [16])CONCAT44(uStack_584,uStack_588);
          uStack_440 = (undefined *)CONCAT44(uStack_57c,uStack_580);
          uStack_438 = uStack_578;
          uStack_434 = uStack_574;
          uStack_430 = uStack_570;
          uStack_428 = uStack_568;
          uStack_420 = uStack_560;
          uStack_418 = uStack_558;
          pauStack_708 = (undefined1 (*) [16])0x1417394e9;
          pdb_14007ee60();
          uVar39 = 8;
          pauStack_708 = (undefined1 (*) [16])0x1417394f8;
          pbVar32 = pub_1406abab0(0x70,8);
          if (pbVar32 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
            pauStack_708 = (undefined1 (*) [16])0x141739612;
            pdb_142dc7e11(8,0x70);
          }
          *(undefined8 *)(pbVar32 + 0x60) = uStack_420;
          *(undefined8 *)(pbVar32 + 0x68) = uStack_418;
          *(undefined8 *)(pbVar32 + 0x50) = uStack_430;
          *(undefined8 *)(pbVar32 + 0x58) = uStack_428;
          *(undefined **)(pbVar32 + 0x40) = uStack_440;
          *(ulonglong *)(pbVar32 + 0x48) = CONCAT44(uStack_434,uStack_438);
          *(undefined4 *)(pbVar32 + 0x30) = (undefined4)uStack_450;
          *(undefined4 *)(pbVar32 + 0x34) = uStack_450._4_4_;
          *(undefined4 *)(pbVar32 + 0x38) = (undefined4)uStack_448;
          *(undefined4 *)(pbVar32 + 0x3c) = uStack_448._4_4_;
          *(undefined4 *)(pbVar32 + 0x20) = (undefined4)uStack_460;
          *(undefined4 *)(pbVar32 + 0x24) = uStack_460._4_4_;
          *(undefined4 *)(pbVar32 + 0x28) = (undefined4)uStack_458;
          *(undefined4 *)(pbVar32 + 0x2c) = uStack_458._4_4_;
          *(undefined1 (**) [16])(pbVar32 + 0x10) = pauStack_470;
          *(undefined1 (**) [16])(pbVar32 + 0x18) = pauStack_468;
          *(undefined1 (**) [16])pbVar32 = uStack_480;
          *(undefined1 (**) [16])(pbVar32 + 8) = uStack_478;
          plVar26 = *(longlong **)*uStack_690;
          if (plVar26 != (longlong *)0x0) {
            uVar39 = *(undefined8 *)(*uStack_690 + 8);
            LOCK();
            lVar29 = *plVar26;
            *plVar26 = *plVar26 + 1;
            UNLOCK();
            if (*plVar26 == 0 || SCARRY8(lVar29,1) != *plVar26 < 0) goto code_r0x00014173a218;
          }
          uStack_690[4][8] = 1;
          *(undefined1 (**) [16])(uStack_690[7] + 8) = uStack_680;
          *(byte **)uStack_690[8] = pbVar32;
          *(longlong **)(uStack_690[8] + 8) = plVar26;
          *(undefined8 *)uStack_690[9] = uVar39;
          LOCK();
          lVar29 = *(longlong *)pbVar32;
          *(longlong *)pbVar32 = *(longlong *)pbVar32 + 1;
          UNLOCK();
          if (*(longlong *)pbVar32 == 0 || SCARRY8(lVar29,1) != *(longlong *)pbVar32 < 0)
          goto code_r0x00014173a218;
          *(byte **)uStack_690[5] = pbVar32;
          uStack_690[4][9] = 0;
          uStack_690[4][8] = 0;
          uStack_480 = *(undefined1 (**) [16])(uStack_690[7] + 8);
          uStack_478 = *(undefined1 (**) [16])uStack_690[8];
          pauStack_470 = *(undefined1 (**) [16])(uStack_690[8] + 8);
          pauStack_468 = *(undefined1 (**) [16])uStack_690[9];
          uStack_510 = uStack_5b8;
          pauStack_508 = (undefined1 (*) [16])ppauStack_5c0;
          puVar37 = &uStack_480;
          pauStack_708 = (undefined1 (*) [16])0x1417395eb;
          uVar39 = (*(code *)ppauStack_5c0[6])();
          *(undefined8 *)(uStack_690[6] + 8) = uVar39;
          *(undefined8 **)uStack_690[7] = puVar37;
          goto code_r0x00014173743f;
        }
        pauStack_a8 = uStack_540;
        pauStack_a0 = uStack_538;
        pauStack_5d0 = pauStack_520;
        pauStack_5d8 = (undefined1 (*) [16])CONCAT44(uStack_524,uStack_528);
        pauStack_5e0 = pauStack_530;
        pauVar25 = uStack_540;
        if (*_DAT_143ca4b08 < 2) {
          bVar22 = *(byte *)(plRam0000000143cad8a8 + 2);
          ppauVar27 = (undefined1 (**) [16])(ulonglong)bVar22;
          if (2 < bVar22) {
            pauStack_678 = uStack_540;
            pauStack_708 = (undefined1 (*) [16])0x14173962b;
            uVar24 = pdb_142db8070(plRam0000000143cad8a8);
            ppauVar27 = (undefined1 (**) [16])(ulonglong)uVar24;
            pauVar25 = pauStack_678;
            pauVar30 = pauStack_678;
            if ((char)uVar24 != '\0') goto code_r0x000141738635;
            goto code_r0x00014173963d;
          }
          pauVar30 = uStack_540;
          if (bVar22 == 0) goto code_r0x00014173963d;
code_r0x000141738635:
          pauStack_708 = (undefined1 (*) [16])0x141738644;
          pauStack_678 = pauVar30;
          cVar23 = pdb_140dd7f60(*plVar4);
          pauVar25 = pauStack_678;
          if (cVar23 == '\0') goto code_r0x00014173963d;
          lVar29 = *plVar4;
          pauVar30 = *(undefined1 (**) [16])(lVar29 + 0x38);
          if (pauVar30 == (undefined1 (*) [16])0x0) {
            pauStack_708 = (undefined1 (*) [16])0x14173a091;
            pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
            goto code_r0x00014173a218;
          }
          pauStack_640 = *(undefined1 (**) [16])(lVar29 + 0x30);
          pauStack_630 = *(undefined1 (**) [16])(lVar29 + 0x40);
          uStack_628 = *(undefined1 (**) [16])(lVar29 + 0x48);
          uStack_620 = 0;
          pauStack_5f8 = (undefined1 (*) [16])&UNK_14332b130;
          pauStack_5f0 = (undefined1 (*) [16])0x39;
          pauStack_638 = pauVar30;
          if (pauVar30 == (undefined1 (*) [16])0x1) {
            pauStack_708 = (undefined1 (*) [16])0x14173a0cd;
            pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
            goto code_r0x00014173a218;
          }
          pauStack_648 = (undefined1 (*) [16])0x1;
          puStack_4e0 = (undefined *)(*(longlong *)(uStack_690[3] + 8) + 0x20);
          pauStack_658 = pauStack_630;
          pauStack_668 = pauStack_640;
          pauStack_660 = pauVar30;
          pauStack_650 = uStack_628;
          if (pauVar30 < (undefined1 (*) [16])0x3) {
            pauStack_708 = (undefined1 (*) [16])0x14173a109;
            pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
            goto code_r0x00014173a218;
          }
          uStack_600 = (undefined1 (*) [16])(lVar29 + 0x30);
          ppauStack_590 = (undefined1 (**) [16])0x2;
          uStack_448 = uStack_690 + 1;
          uStack_480 = (undefined1 (*) [16])&pauStack_640;
          uStack_478 = (undefined1 (*) [16])&pauStack_5f8;
          pauStack_470 = (undefined1 (*) [16])&UNK_14332b058;
          pauStack_468 = (undefined1 (*) [16])&pauStack_668;
          uStack_460 = (undefined1 (*) [16])&puStack_4e0;
          uStack_458 = (undefined1 (*) [16])&UNK_14332b078;
          uStack_450 = &pauStack_5b0;
          uStack_440 = &UNK_14332b098;
          pauStack_610 = (undefined1 (*) [16])&uStack_480;
          lStack_608 = 3;
          pauStack_708 = (undefined1 (*) [16])0x1417387d0;
          pauStack_5b0 = pauStack_640;
          pauStack_5a8 = pauVar30;
          pauStack_5a0 = pauStack_630;
          pauStack_598 = uStack_628;
          pdb_14173b830(&pauStack_610);
          pauVar25 = pauStack_678;
        }
        else {
code_r0x00014173963d:
          plVar26 = plRam0000000143cad8a8;
          if ((*_DAT_143ca4ab0 == '\0') && (3 < *_DAT_143ca8e90)) {
            param_3 = (undefined1 (*) [16])*plRam0000000143cad8a8;
            apauStack_f0[1] = *(undefined1 (**) [16])param_3[2];
            pauStack_e0 = *(undefined1 (**) [16])(param_3[2] + 8);
            apauStack_f0[0] = (undefined1 (*) [16])0x4;
            pauStack_708 = (undefined1 (*) [16])0x141739691;
            pauStack_678 = pauVar25;
            uVar39 = pdb_140f33290();
            pauStack_708 = (undefined1 (*) [16])0x1417396a7;
            cVar23 = (*(code *)ppauVar27[3])(uVar39,apauStack_f0);
            pauVar25 = pauStack_678;
            if (cVar23 != '\0') {
              lVar29 = *plVar26;
              pauVar30 = *(undefined1 (**) [16])(lVar29 + 0x38);
              if (pauVar30 == (undefined1 (*) [16])0x0) {
                pauStack_708 = (undefined1 (*) [16])0x14173a1ab;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
                goto code_r0x00014173a218;
              }
              pauStack_640 = *(undefined1 (**) [16])(lVar29 + 0x30);
              pauStack_630 = *(undefined1 (**) [16])(lVar29 + 0x40);
              uStack_628 = *(undefined1 (**) [16])(lVar29 + 0x48);
              uStack_620 = 0;
              puStack_4e0 = &UNK_14332b130;
              uStack_4d8 = 0x39;
              pauStack_638 = pauVar30;
              if (pauVar30 == (undefined1 (*) [16])0x1) {
                pauStack_708 = (undefined1 (*) [16])0x14173a1e1;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
                goto code_r0x00014173a218;
              }
              pauStack_648 = (undefined1 (*) [16])0x1;
              lStack_128 = *(longlong *)(uStack_690[3] + 8) + 0x20;
              pauStack_658 = pauStack_630;
              pauStack_668 = pauStack_640;
              pauStack_660 = pauVar30;
              pauStack_650 = uStack_628;
              if (pauVar30 < (undefined1 (*) [16])0x3) {
                pauStack_708 = (undefined1 (*) [16])0x14173a217;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
                goto code_r0x00014173a218;
              }
              pauStack_5e8 = (undefined1 (*) [16])(lVar29 + 0x30);
              ppauStack_590 = (undefined1 (**) [16])0x2;
              uStack_448 = uStack_690 + 1;
              uStack_480 = (undefined1 (*) [16])&pauStack_640;
              uStack_478 = (undefined1 (*) [16])&puStack_4e0;
              pauStack_470 = (undefined1 (*) [16])&UNK_14332b058;
              pauStack_468 = (undefined1 (*) [16])&pauStack_668;
              uStack_460 = (undefined1 (*) [16])&lStack_128;
              uStack_458 = (undefined1 (*) [16])&UNK_14332b078;
              uStack_450 = &pauStack_5b0;
              uStack_440 = &UNK_14332b098;
              pauStack_5f8 = (undefined1 (*) [16])&uStack_480;
              pauStack_5f0 = (undefined1 (*) [16])0x3;
              uStack_600 = pauStack_e0;
              pauStack_610 = apauStack_f0[0];
              lStack_608 = (longlong)apauStack_f0[1];
              ppauStack_6e0 = &pauStack_5f8;
              pauStack_708 = (undefined1 (*) [16])0x141739866;
              pauStack_5b0 = pauStack_640;
              pauStack_5a8 = pauVar30;
              pauStack_5a0 = pauStack_630;
              pauStack_598 = uStack_628;
              pdb_140dd7f80(param_3,uVar39,ppauVar27,&pauStack_610);
              pauVar25 = pauStack_678;
            }
          }
        }
        pauStack_4c0 = pauStack_5d0;
        pauStack_4d0 = pauStack_5e0;
        pauStack_4c8 = pauStack_5d8;
        pauVar30 = (undefined1 (*) [16])0x0;
        goto code_r0x000141739892;
      }
      *(undefined8 *)uStack_690[5] = *(undefined8 *)(uStack_690[2] + 8);
      *(undefined8 *)(uStack_690[5] + 8) = *(undefined8 *)uStack_690[3];
      plVar26 = plRam0000000143cad8a0;
      if (*_DAT_143ca4b08 < 2) {
        bVar22 = *(byte *)(plRam0000000143cad8a0 + 2);
        uVar38 = (ulonglong)bVar22;
        if (2 < bVar22) {
          pauStack_708 = (undefined1 (*) [16])0x141738a23;
          uVar24 = pdb_142db8070(plRam0000000143cad8a0);
          uVar38 = (ulonglong)uVar24;
          if ((char)uVar24 != '\0') goto code_r0x00014173803c;
          goto code_r0x000141738a32;
        }
        if (bVar22 == 0) goto code_r0x000141738a32;
code_r0x00014173803c:
        pauStack_708 = (undefined1 (*) [16])0x141738044;
        cVar23 = pdb_140dd7f60(*plVar26);
        if (cVar23 == '\0') goto code_r0x000141738a32;
        lVar29 = *plVar26;
        pauVar31 = *(undefined1 (**) [16])(lVar29 + 0x38);
        if (pauVar31 == (undefined1 (*) [16])0x0) {
          pauStack_708 = (undefined1 (*) [16])0x141739e8d;
          pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
          goto code_r0x00014173a218;
        }
        pauStack_640 = *(undefined1 (**) [16])(lVar29 + 0x30);
        pauStack_630 = *(undefined1 (**) [16])(lVar29 + 0x40);
        uStack_628 = *(undefined1 (**) [16])(lVar29 + 0x48);
        uStack_620 = 0;
        pauStack_610 = (undefined1 (*) [16])&UNK_14332b0f0;
        lStack_608 = 0x47;
        pauStack_638 = pauVar31;
        if (pauVar31 == (undefined1 (*) [16])0x1) {
          pauStack_708 = (undefined1 (*) [16])0x141739ecd;
          pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
          goto code_r0x00014173a218;
        }
        pauStack_648 = (undefined1 (*) [16])0x1;
        pauStack_5f8 = (undefined1 (*) [16])(*(longlong *)(uStack_690[3] + 8) + 0x20);
        pauStack_658 = pauStack_630;
        pauStack_668 = pauStack_640;
        pauStack_660 = pauVar31;
        pauStack_650 = uStack_628;
        if (pauVar31 < (undefined1 (*) [16])0x3) {
          pauStack_708 = (undefined1 (*) [16])0x141739f0d;
          pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
          goto code_r0x00014173a218;
        }
        pauStack_530 = (undefined1 (*) [16])(lVar29 + 0x30);
        ppauStack_590 = (undefined1 (**) [16])0x2;
        uStack_448 = uStack_690 + 1;
        uStack_480 = (undefined1 (*) [16])&pauStack_640;
        uStack_478 = (undefined1 (*) [16])&pauStack_610;
        pauStack_470 = (undefined1 (*) [16])&UNK_14332b058;
        pauStack_468 = (undefined1 (*) [16])&pauStack_668;
        uStack_460 = (undefined1 (*) [16])&pauStack_5f8;
        uStack_458 = (undefined1 (*) [16])&UNK_14332b078;
        uStack_450 = &pauStack_5b0;
        uStack_440 = &UNK_14332b098;
        uStack_540 = (undefined1 (*) [16])&uStack_480;
        uStack_538 = (undefined1 (*) [16])0x3;
        pauStack_708 = (undefined1 (*) [16])0x1417381c9;
        pauStack_5b0 = pauStack_640;
        pauStack_5a8 = pauVar31;
        pauStack_5a0 = pauStack_630;
        pauStack_598 = uStack_628;
        pdb_14173b6d0(&uStack_540);
      }
      else {
code_r0x000141738a32:
        plVar26 = plRam0000000143cad8a0;
        if ((*_DAT_143ca4ab0 == '\0') && (3 < *_DAT_143ca8e90)) {
          lVar29 = *plRam0000000143cad8a0;
          pauStack_100 = *(undefined1 (**) [16])(lVar29 + 0x20);
          pauStack_f8 = *(undefined1 (**) [16])(lVar29 + 0x28);
          pauStack_108 = (undefined1 (*) [16])0x4;
          pauStack_708 = (undefined1 (*) [16])0x141738a80;
          uVar39 = pdb_140f33290();
          pauStack_708 = (undefined1 (*) [16])0x141738a96;
          cVar23 = (**(code **)(uVar38 + 0x18))(uVar39,&pauStack_108);
          if (cVar23 != '\0') {
            lVar49 = *plVar26;
            pauVar31 = *(undefined1 (**) [16])(lVar49 + 0x38);
            if (pauVar31 == (undefined1 (*) [16])0x0) {
              pauStack_708 = (undefined1 (*) [16])0x141739fb3;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
              goto code_r0x00014173a218;
            }
            pauStack_640 = *(undefined1 (**) [16])(lVar49 + 0x30);
            pauStack_630 = *(undefined1 (**) [16])(lVar49 + 0x40);
            uStack_628 = *(undefined1 (**) [16])(lVar49 + 0x48);
            uStack_620 = 0;
            pauStack_5f8 = (undefined1 (*) [16])&UNK_14332b0f0;
            pauStack_5f0 = (undefined1 (*) [16])0x47;
            pauStack_638 = pauVar31;
            if (pauVar31 == (undefined1 (*) [16])0x1) {
              pauStack_708 = (undefined1 (*) [16])0x141739ff3;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
              goto code_r0x00014173a218;
            }
            pauStack_648 = (undefined1 (*) [16])0x1;
            pauStack_5e0 = (undefined1 (*) [16])(*(longlong *)(uStack_690[3] + 8) + 0x20);
            pauStack_658 = pauStack_630;
            pauStack_668 = pauStack_640;
            pauStack_660 = pauVar31;
            pauStack_650 = uStack_628;
            if (pauVar31 < (undefined1 (*) [16])0x3) {
              pauStack_708 = (undefined1 (*) [16])0x14173a033;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
              goto code_r0x00014173a218;
            }
            uStack_600 = (undefined1 (*) [16])(lVar49 + 0x30);
            ppauStack_590 = (undefined1 (**) [16])0x2;
            uStack_448 = uStack_690 + 1;
            uStack_480 = (undefined1 (*) [16])&pauStack_640;
            uStack_478 = (undefined1 (*) [16])&pauStack_5f8;
            pauStack_470 = (undefined1 (*) [16])&UNK_14332b058;
            pauStack_468 = (undefined1 (*) [16])&pauStack_668;
            uStack_460 = (undefined1 (*) [16])&pauStack_5e0;
            uStack_458 = (undefined1 (*) [16])&UNK_14332b078;
            uStack_450 = &pauStack_5b0;
            uStack_440 = &UNK_14332b098;
            pauStack_610 = (undefined1 (*) [16])&uStack_480;
            lStack_608 = 3;
            pauStack_530 = pauStack_f8;
            uStack_540 = pauStack_108;
            uStack_538 = pauStack_100;
            ppauStack_6e0 = &pauStack_610;
            pauStack_708 = (undefined1 (*) [16])0x141738c4e;
            pauStack_5b0 = pauStack_640;
            pauStack_5a8 = pauVar31;
            pauStack_5a0 = pauStack_630;
            pauStack_598 = uStack_628;
            pdb_140dd7f80(lVar29,uVar39,uVar38,&uStack_540);
          }
        }
      }
      *(undefined1 (**) [16])uStack_690[6] = uStack_690 + 5;
      *(undefined8 *)(uStack_690[6] + 8) = 0;
      goto code_r0x000141738c63;
    }
    pauStack_5e0 = *(undefined1 (**) [16])(uStack_690[2] + 8);
    pauStack_5d8 = *(undefined1 (**) [16])uStack_690[3];
    if (*_DAT_143ca4b08 < 2) {
      bVar22 = *(byte *)(plRam0000000143cad8b0 + 2);
      uVar38 = (ulonglong)bVar22;
      if (2 < bVar22) {
        uStack_698._0_4_ = CONCAT13(1,(undefined3)uStack_698);
        pauStack_708 = (undefined1 (*) [16])0x141738e3f;
        uVar24 = pdb_142db8070(plRam0000000143cad8b0);
        uVar38 = (ulonglong)uVar24;
        if ((char)uVar24 != '\0') goto code_r0x00014173820d;
        goto code_r0x000141738e4e;
      }
      if (bVar22 == 0) goto code_r0x000141738e4e;
code_r0x00014173820d:
      uStack_698._0_4_ = CONCAT13(1,(undefined3)uStack_698);
      pauStack_708 = (undefined1 (*) [16])0x141738219;
      cVar23 = pdb_140dd7f60(*plVar26);
      if (cVar23 == '\0') goto code_r0x000141738e4e;
      lVar29 = *plVar26;
      pauVar31 = *(undefined1 (**) [16])(lVar29 + 0x38);
      if (pauVar31 == (undefined1 (*) [16])0x0) {
        uStack_698._0_4_ = CONCAT13(1,(undefined3)uStack_698);
        pauStack_708 = (undefined1 (*) [16])0x141739eaf;
        pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
        goto code_r0x00014173a218;
      }
      pauStack_640 = *(undefined1 (**) [16])(lVar29 + 0x30);
      pauStack_630 = *(undefined1 (**) [16])(lVar29 + 0x40);
      uStack_628 = *(undefined1 (**) [16])(lVar29 + 0x48);
      uStack_620 = 0;
      pauStack_610 = (undefined1 (*) [16])&UNK_14332b038;
      lStack_608 = 0x33;
      pauStack_638 = pauVar31;
      if (pauVar31 == (undefined1 (*) [16])0x1) {
        uStack_698._0_4_ = CONCAT13(1,(undefined3)uStack_698);
        pauStack_708 = (undefined1 (*) [16])0x141739eef;
        pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
        goto code_r0x00014173a218;
      }
      pauStack_648 = (undefined1 (*) [16])0x1;
      pauStack_5f8 = (undefined1 (*) [16])(*(longlong *)(uStack_690[3] + 8) + 0x20);
      pauStack_658 = pauStack_630;
      pauStack_668 = pauStack_640;
      pauStack_660 = pauVar31;
      pauStack_650 = uStack_628;
      if (pauVar31 < (undefined1 (*) [16])0x3) {
        uStack_698._0_4_ = CONCAT13(1,(undefined3)uStack_698);
        pauStack_708 = (undefined1 (*) [16])0x141739f2f;
        pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
        goto code_r0x00014173a218;
      }
      pauStack_530 = (undefined1 (*) [16])(lVar29 + 0x30);
      ppauStack_590 = (undefined1 (**) [16])0x2;
      uStack_448 = uStack_690 + 1;
      uStack_480 = (undefined1 (*) [16])&pauStack_640;
      uStack_478 = (undefined1 (*) [16])&pauStack_610;
      pauStack_470 = (undefined1 (*) [16])&UNK_14332b058;
      pauStack_468 = (undefined1 (*) [16])&pauStack_668;
      uStack_460 = (undefined1 (*) [16])&pauStack_5f8;
      uStack_458 = (undefined1 (*) [16])&UNK_14332b078;
      uStack_450 = &pauStack_5b0;
      uStack_440 = &UNK_14332b098;
      uStack_540 = (undefined1 (*) [16])&uStack_480;
      uStack_538 = (undefined1 (*) [16])0x3;
      uStack_698._0_4_ = CONCAT13(1,(undefined3)uStack_698);
      pauStack_708 = (undefined1 (*) [16])0x1417383a2;
      pauStack_5b0 = pauStack_640;
      pauStack_5a8 = pauVar31;
      pauStack_5a0 = pauStack_630;
      pauStack_598 = uStack_628;
      pdb_14173b620(&uStack_540);
    }
    else {
code_r0x000141738e4e:
      plVar26 = plRam0000000143cad8b0;
      if ((*_DAT_143ca4ab0 == '\0') && (3 < *_DAT_143ca8e90)) {
        lVar29 = *plRam0000000143cad8b0;
        pauStack_118 = *(undefined1 (**) [16])(lVar29 + 0x20);
        pauStack_110 = *(undefined1 (**) [16])(lVar29 + 0x28);
        pauStack_120 = (undefined1 (*) [16])0x4;
        uStack_698._0_4_ = CONCAT13(1,(undefined3)uStack_698);
        pauStack_708 = (undefined1 (*) [16])0x141738e9f;
        uVar39 = pdb_140f33290();
        uStack_698._0_4_ = CONCAT13(1,(undefined3)uStack_698);
        pauStack_708 = (undefined1 (*) [16])0x141738eba;
        cVar23 = (**(code **)(uVar38 + 0x18))(uVar39,&pauStack_120);
        if (cVar23 != '\0') {
          lVar49 = *plVar26;
          pauVar31 = *(undefined1 (**) [16])(lVar49 + 0x38);
          if (pauVar31 == (undefined1 (*) [16])0x0) {
            uStack_698._0_4_ = CONCAT13(1,(undefined3)uStack_698);
            pauStack_708 = (undefined1 (*) [16])0x141739fd5;
            pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
code_r0x00014173a218:
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          pauStack_640 = *(undefined1 (**) [16])(lVar49 + 0x30);
          pauStack_630 = *(undefined1 (**) [16])(lVar49 + 0x40);
          uStack_628 = *(undefined1 (**) [16])(lVar49 + 0x48);
          uStack_620 = 0;
          pauStack_5f8 = (undefined1 (*) [16])&UNK_14332b038;
          pauStack_5f0 = (undefined1 (*) [16])0x33;
          pauStack_638 = pauVar31;
          if (pauVar31 == (undefined1 (*) [16])0x1) {
            uStack_698._0_4_ = CONCAT13(1,(undefined3)uStack_698);
            pauStack_708 = (undefined1 (*) [16])0x14173a015;
            pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
            goto code_r0x00014173a218;
          }
          pauStack_648 = (undefined1 (*) [16])0x1;
          pauStack_4d0 = (undefined1 (*) [16])(*(longlong *)(uStack_690[3] + 8) + 0x20);
          pauStack_658 = pauStack_630;
          pauStack_668 = pauStack_640;
          pauStack_660 = pauVar31;
          pauStack_650 = uStack_628;
          if (pauVar31 < (undefined1 (*) [16])0x3) {
            uStack_698._0_4_ = CONCAT13(1,(undefined3)uStack_698);
            pauStack_708 = (undefined1 (*) [16])0x14173a055;
            pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
            goto code_r0x00014173a218;
          }
          uStack_600 = (undefined1 (*) [16])(lVar49 + 0x30);
          ppauStack_590 = (undefined1 (**) [16])0x2;
          uStack_448 = uStack_690 + 1;
          uStack_480 = (undefined1 (*) [16])&pauStack_640;
          uStack_478 = (undefined1 (*) [16])&pauStack_5f8;
          pauStack_470 = (undefined1 (*) [16])&UNK_14332b058;
          pauStack_468 = (undefined1 (*) [16])&pauStack_668;
          uStack_460 = (undefined1 (*) [16])&pauStack_4d0;
          uStack_458 = (undefined1 (*) [16])&UNK_14332b078;
          uStack_450 = &pauStack_5b0;
          uStack_440 = &UNK_14332b098;
          pauStack_610 = (undefined1 (*) [16])&uStack_480;
          lStack_608 = 3;
          pauStack_530 = pauStack_110;
          uStack_540 = pauStack_120;
          uStack_538 = pauStack_118;
          uStack_698._0_4_ = CONCAT13(1,(undefined3)uStack_698);
          ppauStack_6e0 = &pauStack_610;
          pauStack_708 = (undefined1 (*) [16])0x141739076;
          pauStack_5b0 = pauStack_640;
          pauStack_5a8 = pauVar31;
          pauStack_5a0 = pauStack_630;
          pauStack_598 = uStack_628;
          pdb_140dd7f80(lVar29,uVar39,uVar38,&uStack_540);
        }
      }
    }
    uStack_480 = _DAT_14332b4f8;
    uStack_478 = _UNK_14332b500;
    uStack_698._0_4_ = CONCAT13(1,(undefined3)uStack_698);
    ppauStack_6e0 = &pauStack_5e0;
    pauStack_708 = (undefined1 (*) [16])0x1417390bb;
    pdb_141c2b710(*(longlong *)uStack_690[4] + 0x10,&uStack_480,
                  *(undefined8 *)(*(longlong *)(uStack_690[3] + 8) + 0x20),
                  *(undefined8 *)(*(longlong *)(uStack_690[3] + 8) + 0x28));
    pauVar31 = pauStack_5d8;
    pauStack_5b0 = pauStack_5e0;
    pauStack_5a8 = pauStack_5d8;
    uStack_680 = pauStack_5e0;
    pauStack_708 = (undefined1 (*) [16])0x1417390fc;
    (**(code **)(pauStack_5d8[1] + 8))
              (&uStack_480,
               pauStack_5e0[1] + (*(longlong *)pauStack_5d8[1] - 1U & 0xfffffffffffffff0));
    auVar53[0] = -((char)uStack_480 == DAT_14332a670);
    auVar53[1] = -(uStack_480._1_1_ == UNK_14332a671);
    auVar53[2] = -(uStack_480._2_1_ == UNK_14332a672);
    auVar53[3] = -(uStack_480._3_1_ == UNK_14332a673);
    auVar53[4] = -(uStack_480._4_1_ == UNK_14332a674);
    auVar53[5] = -(uStack_480._5_1_ == UNK_14332a675);
    auVar53[6] = -(uStack_480._6_1_ == UNK_14332a676);
    auVar53[7] = -(uStack_480._7_1_ == UNK_14332a677);
    auVar53[8] = -((char)uStack_478 == UNK_14332a678);
    auVar53[9] = -(uStack_478._1_1_ == UNK_14332a679);
    auVar53[10] = -(uStack_478._2_1_ == UNK_14332a67a);
    auVar53[0xb] = -(uStack_478._3_1_ == UNK_14332a67b);
    auVar53[0xc] = -(uStack_478._4_1_ == UNK_14332a67c);
    auVar53[0xd] = -(uStack_478._5_1_ == UNK_14332a67d);
    auVar53[0xe] = -(uStack_478._6_1_ == UNK_14332a67e);
    auVar53[0xf] = -(uStack_478._7_1_ == UNK_14332a67f);
    if ((ushort)((ushort)(SUB161(auVar53 >> 7,0) & 1) | (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar53 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar53 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar53 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar53 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar53 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar53 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar53 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar53 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar53 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar53 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar53 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar53 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar53 >> 0x77,0) & 1) << 0xe | (ushort)(auVar53[0xf] >> 7) << 0xf
                ) != 0xffff) {
      uStack_480 = uStack_680;
      uStack_478 = pauVar31;
      ppauStack_6e0 = (undefined1 (**) [16])&UNK_14332b0c0;
                    /* WARNING: Subroutine does not return */
      pauStack_708 = (undefined1 (*) [16])0x1417391d2;
      pdb_142dc8170(&UNK_14332b0b8,8,&uStack_480,&UNK_14332b870);
    }
    lStack_4a0 = 0;
    plVar26 = *(longlong **)(uStack_690[3] + 8);
    LOCK();
    *plVar26 = *plVar26 + -1;
    lVar29 = *plVar26;
    UNLOCK();
    pauStack_498 = uStack_680;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    pauStack_708 = (undefined1 (*) [16])0x141739e68;
    pdb_142dc8570(&UNK_14332b178);
  case 2:
                    /* WARNING: Subroutine does not return */
    pauStack_708 = (undefined1 (*) [16])0x141739e74;
    pdb_142dc8590(&UNK_14332b178);
  case 3:
code_r0x000141738c63:
    uStack_680 = uStack_690 + 6;
    pauStack_708 = (undefined1 (*) [16])0x141738c84;
    pdb_140b35bb0(&uStack_480,uStack_680,(longlong)&uStack_548 + 7,param_3);
    pauVar3 = uStack_460;
    pauVar35 = pauStack_468;
    pauVar25 = pauStack_470;
    pauVar30 = uStack_478;
    pauVar31 = uStack_480;
    if (uStack_480 == (undefined1 (*) [16])0x2) {
      *(undefined8 *)*param_1 = 1;
      uVar21 = 3;
      goto code_r0x000141739e30;
    }
    if (*(undefined1 (**) [16])(uStack_690[6] + 8) != (undefined1 (*) [16])0x0) {
      pauStack_708 = (undefined1 (*) [16])0x141738ccf;
      uStack_680 = *(undefined1 (**) [16])(uStack_690[6] + 8);
      pdb_140974580();
      pauStack_708 = (undefined1 (*) [16])0x141738ce7;
      pub_1406abac0((byte *)uStack_680,0x38,8);
    }
    pauVar50 = uStack_690;
    if ((int)pauVar31 == 1) {
      lVar29 = *(longlong *)uStack_690[1];
      pauVar31 = *(undefined1 (**) [16])(uStack_690[1] + 8);
      pauStack_708 = (undefined1 (*) [16])0x141738cfd;
      pdb_14007ee60();
      pauStack_708 = (undefined1 (*) [16])0x141738d0c;
      pbStack_490 = pub_1406abab0(0x10,8);
      if (pbStack_490 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pauStack_708 = (undefined1 (*) [16])0x141738e29;
        pdb_142dc7e11(8,0x10);
      }
      pbStack_490[0] = 1;
      pbStack_490[1] = 0;
      pbStack_490[2] = 0;
      pbStack_490[3] = 0;
      pbStack_490[4] = 0;
      pbStack_490[5] = 0;
      pbStack_490[6] = 0;
      pbStack_490[7] = 0;
      pbStack_490[8] = 1;
      pbStack_490[9] = 0;
      pbStack_490[10] = 0;
      pbStack_490[0xb] = 0;
      pbStack_490[0xc] = 0;
      pbStack_490[0xd] = 0;
      pbStack_490[0xe] = 0;
      pbStack_490[0xf] = 0;
      puStack_488 = &UNK_14332b300;
      lStack_4a0 = lVar29;
      pauStack_498 = pauVar31;
    }
    else {
      pauStack_5b0 = pauVar30;
      pauStack_5a8 = pauVar25;
      pauStack_5a0 = pauVar35;
      pauStack_598 = pauVar3;
      if (pauVar30 == (undefined1 (*) [16])0x0) {
        ppauStack_6e0 = &pauStack_5a8;
        uStack_480 = _DAT_14332b4f8;
        uStack_478 = _UNK_14332b500;
        uStack_670 = (undefined1 (*) [16])CONCAT17(1,(undefined7)uStack_670);
        pauStack_708 = (undefined1 (*) [16])0x141738dad;
        pdb_141c2b710(*(longlong *)uStack_690[4] + 0x10,&uStack_480,
                      *(undefined8 *)(*(longlong *)(uStack_690[3] + 8) + 0x20),
                      *(undefined8 *)(*(longlong *)(uStack_690[3] + 8) + 0x28));
      }
      pauStack_470 = pauStack_5a0;
      pauStack_468 = pauStack_598;
      uStack_480 = pauStack_5b0;
      uStack_478 = pauStack_5a8;
      uStack_670 = (undefined1 (*) [16])((ulonglong)uStack_670 & 0xffffffffffffff);
      pauStack_708 = (undefined1 (*) [16])0x141738df4;
      pdb_14173b990(&lStack_4a0,&uStack_480);
      pauVar50 = uStack_690;
    }
    pauStack_708 = (undefined1 (*) [16])0x141738e02;
    pdb_140981490(pauVar50 + 5);
    plVar26 = *(longlong **)(uStack_690[3] + 8);
    LOCK();
    *plVar26 = *plVar26 + -1;
    lVar29 = *plVar26;
    UNLOCK();
    break;
  case 4:
    uVar39 = *(undefined8 *)(param_2[6] + 8);
    puVar37 = *(undefined8 **)param_2[7];
code_r0x00014173743f:
    pauStack_708 = (undefined1 (*) [16])0x14173744d;
    (*(code *)puVar37[3])(&uStack_480,uVar39,param_3);
    pauVar25 = pauStack_470;
    pauVar30 = uStack_478;
    pauVar31 = uStack_480;
    if (uStack_480 == (undefined1 (*) [16])0x2) {
      *(undefined8 *)*param_1 = 1;
      uVar21 = 4;
      goto code_r0x000141739e30;
    }
    uStack_680 = *(undefined1 (**) [16])(uStack_690[6] + 8);
    pauStack_678 = *(undefined1 (**) [16])uStack_690[7];
    if (*(code **)pauStack_678 != (code *)0x0) {
      pauStack_708 = (undefined1 (*) [16])0x1417374a3;
      (**(code **)pauStack_678)(uStack_680);
    }
    pauVar35 = *(undefined1 (**) [16])((longlong)pauStack_678 + 8);
    if (pauVar35 != (undefined1 (*) [16])0x0) {
      pauStack_708 = (undefined1 (*) [16])0x1417374c4;
      pub_1406abac0((byte *)uStack_680,(ulonglong)pauVar35,
                    *(ulonglong *)((longlong)pauStack_678 + 0x10));
    }
    if ((int)pauVar31 == 1) {
      pauVar31 = *(undefined1 (**) [16])uStack_690[1];
      pauVar3 = *(undefined1 (**) [16])(uStack_690[1] + 8);
      uStack_510 = uStack_5b8;
      pauStack_508 = (undefined1 (*) [16])ppauStack_5c0;
      pauStack_708 = (undefined1 (*) [16])0x1417374fd;
      pauStack_658 = (undefined1 (*) [16])pdb_140c799b0(pauVar30);
      pauVar35 = pauVar25;
      pauVar30 = pauVar3;
      pauStack_650 = pauVar25;
    }
    else {
      pauVar31 = (undefined1 (*) [16])0x0;
      pauStack_658 = pauVar25;
    }
    lVar29 = *(longlong *)uStack_690[5];
    pcVar1 = (char *)(lVar29 + 0x10);
    LOCK();
    bVar51 = *(char *)(lVar29 + 0x10) == '\0';
    if (bVar51) {
      *(char *)(lVar29 + 0x10) = '\x01';
    }
    UNLOCK();
    pauStack_668 = pauVar31;
    pauStack_660 = pauVar30;
    if (!bVar51) {
      uStack_688._0_6_ = CONCAT15(1,(uint5)uStack_688);
      pauStack_708 = (undefined1 (*) [16])0x14173885c;
      pdb_142dc6be0(pcVar1);
    }
    puVar48 = _DAT_143ca8f38;
    if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
      bVar22 = 0;
      cVar23 = *(char *)(lVar29 + 0x11);
      uVar39 = _UNK_14332bb30;
      uVar5 = _UNK_14332bb38;
      pauVar31 = uStack_688;
    }
    else {
      uStack_688._0_6_ = CONCAT15(1,(uint5)uStack_688);
      pauStack_708 = (undefined1 (*) [16])0x14173886b;
      bVar22 = pdb_142dc79e0();
      bVar22 = bVar22 ^ 1;
      cVar23 = *(char *)(lVar29 + 0x11);
      uVar39 = _UNK_14332bb30;
      uVar5 = _UNK_14332bb38;
      pauVar31 = uStack_688;
    }
    _UNK_14332bb30 = uVar39;
    _UNK_14332bb38 = uVar5;
    uStack_688 = pauVar31;
    if (cVar23 != '\0') {
      uStack_478._1_7_ = (undefined7)((ulonglong)uStack_478 >> 8);
      uStack_478._0_1_ = bVar22;
      ppauStack_6e0 = (undefined1 (**) [16])&UNK_14332b190;
                    /* WARNING: Subroutine does not return */
      pauStack_708 = (undefined1 (*) [16])0x1417388b2;
      uStack_480 = (undefined1 (*) [16])pcVar1;
      pdb_142dc8170(&UNK_14332b8d0,0x2b,&uStack_480,&UNK_14332b920);
    }
    pauStack_5b0 = *(undefined1 (**) [16])(lVar29 + 0x18);
    pauStack_5a8 = *(undefined1 (**) [16])(lVar29 + 0x20);
    pauStack_5a0 = *(undefined1 (**) [16])(lVar29 + 0x28);
    pauStack_598 = *(undefined1 (**) [16])(lVar29 + 0x30);
    *(undefined8 *)(lVar29 + 0x18) = uVar39;
    *(undefined8 *)(lVar29 + 0x20) = uVar5;
    uVar16 = _UNK_14332bb48;
    uVar6 = _UNK_14332bb40;
    *(undefined8 *)(lVar29 + 0x28) = _UNK_14332bb40;
    *(undefined8 *)(lVar29 + 0x30) = uVar16;
    if ((bVar22 == 0) && ((*puVar48 & 0x7fffffffffffffff) != 0)) {
      uStack_688._4_4_ = (undefined4)((ulonglong)pauVar31 >> 0x20);
      uStack_688._0_3_ = SUB83(pauVar31,0);
      uStack_688._0_4_ = CONCAT13(1,(undefined3)uStack_688);
      pauStack_708 = (undefined1 (*) [16])0x141738992;
      cVar23 = pdb_142dc79e0();
      if (cVar23 == '\0') {
        *(undefined1 *)(lVar29 + 0x11) = 1;
      }
    }
    LOCK();
    cVar23 = *pcVar1;
    *pcVar1 = '\0';
    UNLOCK();
    if (cVar23 == '\x02') {
      uStack_688._0_4_ = CONCAT13(1,(undefined3)uStack_688);
      pauStack_708 = (undefined1 (*) [16])0x1417388c4;
      pdb_142dc6ca0(pcVar1);
    }
    pauVar31 = uStack_690 + 5;
    lVar29 = *(longlong *)*pauVar31;
    pcVar1 = (char *)(lVar29 + 0x38);
    LOCK();
    bVar51 = *(char *)(lVar29 + 0x38) == '\0';
    if (bVar51) {
      *(char *)(lVar29 + 0x38) = '\x01';
    }
    UNLOCK();
    if (!bVar51) {
      uStack_688._0_4_ = CONCAT13(1,(undefined3)uStack_688);
      pauStack_708 = (undefined1 (*) [16])0x1417388d6;
      pdb_142dc6be0(pcVar1);
    }
    if ((*puVar48 & 0x7fffffffffffffff) == 0) {
      uVar24 = 0;
      cVar23 = *(char *)(lVar29 + 0x39);
    }
    else {
      uStack_688._0_4_ = CONCAT13(1,(undefined3)uStack_688);
      pauStack_708 = (undefined1 (*) [16])0x1417388e5;
      uVar24 = pdb_142dc79e0();
      uVar24 = uVar24 ^ 1;
      cVar23 = *(char *)(lVar29 + 0x39);
    }
    if (cVar23 != '\0') {
      uStack_478._1_7_ = (undefined7)((ulonglong)uStack_478 >> 8);
      uStack_478._0_1_ = (char)uVar24;
      ppauStack_6e0 = (undefined1 (**) [16])&UNK_14332b1a8;
                    /* WARNING: Subroutine does not return */
      pauStack_708 = (undefined1 (*) [16])0x14173892c;
      uStack_480 = (undefined1 (*) [16])pcVar1;
      pdb_142dc8170(&UNK_14332b8d0,0x2b,&uStack_480,&UNK_14332b940);
    }
    uVar38 = (ulonglong)pauStack_678 >> 0x20;
    pauStack_678 = (undefined1 (*) [16])CONCAT44((int)uVar38,uVar24);
    pauStack_708 = (undefined1 (*) [16])0x141737633;
    uStack_680 = (undefined1 (*) [16])pcVar1;
    plVar26 = (longlong *)pdb_140f3bda0();
    if ((char)plVar26[2] == '\x01') {
      uStack_478 = (undefined1 (*) [16])*plVar26;
      pauVar35 = (undefined1 (*) [16])plVar26[1];
    }
    else {
      pauStack_708 = (undefined1 (*) [16])0x141738937;
      uStack_478 = (undefined1 (*) [16])pdb_140f4fd10();
      *plVar26 = (longlong)uStack_478;
      plVar26[1] = (longlong)pauVar35;
      *(undefined1 *)(plVar26 + 2) = 1;
    }
    *plVar26 = (longlong)uStack_478 + 1;
    pauStack_468 = *(undefined1 (**) [16])(lVar29 + 0x40);
    lVar49 = *(longlong *)(lVar29 + 0x48);
    uStack_448 = *(undefined1 (**) [16])(lVar29 + 0x58);
    *(undefined8 *)(lVar29 + 0x50) = uVar6;
    *(undefined8 *)(lVar29 + 0x58) = uVar16;
    *(undefined8 *)(lVar29 + 0x40) = uVar39;
    *(undefined8 *)(lVar29 + 0x48) = uVar5;
    *(undefined1 (**) [16])(lVar29 + 0x60) = uStack_478;
    *(undefined1 (**) [16])(lVar29 + 0x68) = pauVar35;
    auVar54 = *pauStack_468;
    if (lVar49 == 0) {
      uStack_480 = (undefined1 (*) [16])0x0;
    }
    else {
      uStack_478 = (undefined1 (*) [16])(lVar49 * 0x61 + 0x71);
      pauVar35 = pauStack_468 + lVar49 * -6 + -6;
      uStack_480 = (undefined1 (*) [16])0x10;
    }
    uStack_460 = pauStack_468 + 1;
    uStack_458 = (undefined1 (*) [16])(*pauStack_468 + lVar49 + 1);
    uStack_450 = (undefined1 (**) [16])
                 CONCAT62(uStack_450._2_6_,
                          ~((ushort)(SUB161(auVar54 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar54 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar54 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar54 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar54 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar54 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar54 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar54 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar54 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar54 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar54 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar54 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar54 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar54[0xf] >> 7) << 0xf));
    pauStack_708 = (undefined1 (*) [16])0x1417376f8;
    pauStack_470 = pauVar35;
    pdb_1415ed630(&pauStack_5e0,&uStack_480);
    if (((char)pauStack_678 == '\0') && ((*puVar48 & 0x7fffffffffffffff) != 0)) {
      uStack_688._0_7_ = CONCAT16(1,(undefined6)uStack_688);
      uStack_688 = (undefined1 (*) [16])CONCAT17(1,(undefined7)uStack_688);
      pauStack_708 = (undefined1 (*) [16])0x1417389b1;
      cVar23 = pdb_142dc79e0();
      if (cVar23 == '\0') {
        *(undefined1 *)(lVar29 + 0x39) = 1;
      }
    }
    LOCK();
    cVar23 = *(char *)uStack_680;
    *(char *)uStack_680 = '\0';
    UNLOCK();
    if (cVar23 == '\x02') {
      uStack_688._0_7_ = CONCAT16(1,(undefined6)uStack_688);
      uStack_688 = (undefined1 (*) [16])CONCAT17(1,(undefined7)uStack_688);
      pauStack_708 = (undefined1 (*) [16])0x141738955;
      pdb_142dc6ca0();
    }
    pauStack_470 = (undefined1 (*) [16])(*pauStack_5b0 + (longlong)(*pauStack_5a8 + 1));
    auVar54 = *pauStack_5b0;
    uStack_480 = pauStack_5b0;
    uStack_478 = pauStack_5b0 + 1;
    pauStack_468 = (undefined1 (*) [16])
                   CONCAT62(pauStack_468._2_6_,
                            ~((ushort)(SUB161(auVar54 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar54 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar54 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar54 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar54 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar54 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar54 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar54 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar54 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar54 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar54 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar54 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar54 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar54[0xf] >> 7) << 0xf));
    uStack_460 = pauStack_598;
    uStack_458 = uStack_690 + 4;
    uStack_688._0_7_ = CONCAT16(1,(undefined6)uStack_688);
    uStack_688 = (undefined1 (*) [16])CONCAT17(1,(undefined7)uStack_688);
    puVar37 = &uStack_480;
    pauStack_708 = (undefined1 (*) [16])0x14173779a;
    pdb_1415ea2a0(&pauStack_5f8);
    uStack_680 = param_1;
    pauStack_678 = pauVar31;
    if (pauStack_668 == (undefined1 (*) [16])0x0) {
      puVar34 = pauStack_660[1] + (*(longlong *)pauStack_658[1] - 1U & 0xfffffffffffffff0);
      uStack_698._0_6_ = CONCAT15(1,(uint5)uStack_698);
      uStack_698._0_7_ = CONCAT16(1,(uint6)uStack_698);
      uStack_698 = (undefined1 (*) [16])CONCAT17(1,(undefined7)uStack_698);
      pauStack_708 = (undefined1 (*) [16])0x141737946;
      (**(code **)(pauStack_658[1] + 8))(&uStack_480,puVar34);
      auVar52[0] = -((char)uStack_480 == DAT_14332a670);
      auVar52[1] = -(uStack_480._1_1_ == UNK_14332a671);
      auVar52[2] = -(uStack_480._2_1_ == UNK_14332a672);
      auVar52[3] = -(uStack_480._3_1_ == UNK_14332a673);
      auVar52[4] = -(uStack_480._4_1_ == UNK_14332a674);
      auVar52[5] = -(uStack_480._5_1_ == UNK_14332a675);
      auVar52[6] = -(uStack_480._6_1_ == UNK_14332a676);
      auVar52[7] = -(uStack_480._7_1_ == UNK_14332a677);
      auVar52[8] = -((char)uStack_478 == UNK_14332a678);
      auVar52[9] = -(uStack_478._1_1_ == UNK_14332a679);
      auVar52[10] = -(uStack_478._2_1_ == UNK_14332a67a);
      auVar52[0xb] = -(uStack_478._3_1_ == UNK_14332a67b);
      auVar52[0xc] = -(uStack_478._4_1_ == UNK_14332a67c);
      auVar52[0xd] = -(uStack_478._5_1_ == UNK_14332a67d);
      auVar52[0xe] = -(uStack_478._6_1_ == UNK_14332a67e);
      auVar52[0xf] = -(uStack_478._7_1_ == UNK_14332a67f);
      if ((ushort)((ushort)(SUB161(auVar52 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar52 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar52 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar52 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar52 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar52 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar52 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar52 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar52 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar52 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar52 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar52 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar52 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar52 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar52 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar52[0xf] >> 7) << 0xf) != 0xffff) {
        uStack_698._0_6_ = CONCAT15(1,(uint5)uStack_698);
        uStack_698._0_7_ = CONCAT16(1,(uint6)uStack_698);
        uStack_698 = (undefined1 (*) [16])CONCAT17(1,(undefined7)uStack_698);
        pauStack_708 = (undefined1 (*) [16])0x1417389fc;
        pdb_142dc8110(&UNK_14332b0b8,8,&UNK_14332b1c0);
        goto code_r0x00014173a218;
      }
      pauStack_610 = (undefined1 (*) [16])0x0;
      lStack_608 = 0x10;
      uStack_600 = (undefined1 (*) [16])0x0;
      uStack_480 = (undefined1 (*) [16])&pauStack_610;
      uStack_688._0_5_ = CONCAT14(1,(uint)uStack_688);
      puVar37 = &uStack_480;
      pauStack_708 = (undefined1 (*) [16])0x1417379af;
      pdb_140d9d5e0(puVar34,puVar37,&UNK_14332b448);
      lVar29 = *(longlong *)(uStack_690[3] + 8);
      lVar49 = *(longlong *)uStack_690[4];
      uStack_4f8 = *(undefined8 *)(lVar29 + 0x28);
      uStack_500 = *(undefined8 *)(lVar29 + 0x20);
      uStack_688._0_5_ = CONCAT14(1,(uint)uStack_688);
      pauStack_708 = (undefined1 (*) [16])0x1417379e4;
      ppauStack_130 =
           (undefined1 (**) [16])
           (**(code **)(*(longlong *)(lVar29 + 0x18) + 0x38))(*(undefined8 *)(lVar29 + 0x10));
      uStack_688._0_5_ = CONCAT14(1,(uint)uStack_688);
      pauStack_708 = (undefined1 (*) [16])0x141737a08;
      uVar39 = (**(code **)(*(longlong *)(*(longlong *)(uStack_690[3] + 8) + 0x18) + 0x18))
                         (*(undefined8 *)(*(longlong *)(uStack_690[3] + 8) + 0x10));
      uStack_688._0_5_ = CONCAT14(1,(uint)uStack_688);
      pauStack_708 = (undefined1 (*) [16])0x141737a26;
      uVar21 = (**(code **)(*(longlong *)(*(longlong *)(uStack_690[3] + 8) + 0x18) + 0x20))
                         (*(undefined8 *)(*(longlong *)(uStack_690[3] + 8) + 0x10));
      uStack_688._0_5_ = CONCAT14(1,(uint)uStack_688);
      pauStack_708 = (undefined1 (*) [16])0x141737a44;
      pdb_1415e6d20(&uStack_540,&pauStack_5e0);
      pauStack_630 = pauStack_5e8;
      pauStack_640 = pauStack_5f8;
      pauStack_638 = pauStack_5f0;
      pauStack_470 = uStack_600;
      uStack_480 = pauStack_610;
      uStack_478 = (undefined1 (*) [16])lStack_608;
      uStack_688._0_5_ = (uint5)(uint)uStack_688;
      puStack_6b0 = &uStack_480;
      ppauStack_6b8 = &pauStack_640;
      uStack_6c8 = CONCAT71(uStack_6c8._1_7_,uVar21);
      ppauStack_6e0 = ppauStack_130;
      pauStack_708 = (undefined1 (*) [16])0x141737ad8;
      puStack_6d8 = puVar37;
      uStack_6d0 = uVar39;
      puStack_6c0 = &uStack_540;
      uStack_460 = (undefined1 (*) [16])pdb_1417ffee0(lVar49 + 0x10,uStack_500,uStack_4f8,puVar34);
    }
    else {
      lVar29 = *(longlong *)(uStack_690[3] + 8);
      lVar49 = *(longlong *)uStack_690[4];
      uStack_4f8 = *(undefined8 *)(lVar29 + 0x28);
      uStack_500 = *(undefined8 *)(lVar29 + 0x20);
      uStack_698._0_6_ = CONCAT15(1,(uint5)uStack_698);
      uStack_698._0_7_ = CONCAT16(1,(uint6)uStack_698);
      uStack_698 = (undefined1 (*) [16])CONCAT17(1,(undefined7)uStack_698);
      pauStack_708 = (undefined1 (*) [16])0x1417377f3;
      ppauVar27 = (undefined1 (**) [16])
                  (**(code **)(*(longlong *)(lVar29 + 0x18) + 0x38))(*(undefined8 *)(lVar29 + 0x10))
      ;
      uStack_698._0_6_ = CONCAT15(1,(uint5)uStack_698);
      uStack_698._0_7_ = CONCAT16(1,(uint6)uStack_698);
      uStack_698 = (undefined1 (*) [16])CONCAT17(1,(undefined7)uStack_698);
      pauStack_708 = (undefined1 (*) [16])0x14173781c;
      uVar39 = (**(code **)(*(longlong *)(*(longlong *)(uStack_690[3] + 8) + 0x18) + 0x18))
                         (*(undefined8 *)(*(longlong *)(uStack_690[3] + 8) + 0x10));
      uStack_698._0_6_ = CONCAT15(1,(uint5)uStack_698);
      uStack_698._0_7_ = CONCAT16(1,(uint6)uStack_698);
      uStack_698 = (undefined1 (*) [16])CONCAT17(1,(undefined7)uStack_698);
      pauStack_708 = (undefined1 (*) [16])0x141737842;
      uVar21 = (**(code **)(*(longlong *)(*(longlong *)(uStack_690[3] + 8) + 0x18) + 0x20))
                         (*(undefined8 *)(*(longlong *)(uStack_690[3] + 8) + 0x10));
      uStack_698._0_6_ = CONCAT15(1,(uint5)uStack_698);
      uStack_698._0_7_ = CONCAT16(1,(uint6)uStack_698);
      uStack_698 = (undefined1 (*) [16])CONCAT17(1,(undefined7)uStack_698);
      pauStack_708 = (undefined1 (*) [16])0x141737868;
      pdb_1415e6d20(&uStack_540,&pauStack_5e0);
      pauStack_630 = pauStack_5e8;
      pauStack_640 = pauStack_5f8;
      pauStack_638 = pauStack_5f0;
      uStack_480 = (undefined1 (*) [16])0x0;
      uStack_478 = (undefined1 (*) [16])0x10;
      pauStack_470 = (undefined1 (*) [16])0x0;
      uStack_698._0_6_ = (uint6)uStack_698 & 0xffffffffff;
      uStack_698._0_7_ = CONCAT16(1,(uint6)uStack_698);
      uStack_698 = (undefined1 (*) [16])CONCAT17(1,(undefined7)uStack_698);
      puStack_6b0 = &uStack_480;
      ppauStack_6b8 = &pauStack_640;
      uStack_6c8 = CONCAT71(uStack_6c8._1_7_,uVar21);
      pauStack_708 = (undefined1 (*) [16])0x141737902;
      ppauStack_6e0 = ppauVar27;
      puStack_6d8 = puVar37;
      uStack_6d0 = uVar39;
      puStack_6c0 = &uStack_540;
      uStack_460 = (undefined1 (*) [16])pdb_1417ffee0(lVar49 + 0x10,uStack_500,uStack_4f8,0);
    }
    param_3 = pauStack_650;
    pauVar31 = pauStack_658;
    pauVar25 = pauStack_660;
    pauVar30 = pauStack_668;
    uStack_480 = pauStack_668;
    uStack_478 = pauStack_660;
    pauStack_470 = pauStack_658;
    pauStack_468 = pauStack_650;
    if (uStack_460 == (undefined1 (*) [16])0x0 || pauStack_668 != (undefined1 (*) [16])0x0) {
      pauStack_4c0 = pauStack_5d0;
      pauStack_4d0 = pauStack_5e0;
      pauStack_4c8 = pauStack_5d8;
      if (uStack_460 != (undefined1 (*) [16])0x0) {
        uStack_698._0_6_ = (uint6)uStack_698 & 0xffffffffff;
        uStack_698 = (undefined1 (*) [16])(ulonglong)(uint6)uStack_698;
        pauStack_708 = (undefined1 (*) [16])0x141737b6d;
        pdb_1404b38e0(&uStack_460);
      }
    }
    else {
      pauVar30 = *(undefined1 (**) [16])uStack_690[1];
      pauVar25 = *(undefined1 (**) [16])(uStack_690[1] + 8);
      pauStack_640 = (undefined1 (*) [16])0x1;
      pauStack_638 = (undefined1 (*) [16])0x1;
      pauStack_708 = (undefined1 (*) [16])0x141737b9d;
      pauStack_630 = uStack_460;
      pdb_14007ee60();
      pauStack_708 = (undefined1 (*) [16])0x141737bac;
      pauVar31 = (undefined1 (*) [16])pub_1406abab0(0x18,8);
      if (pauVar31 == (undefined1 (*) [16])0x0) {
                    /* WARNING: Subroutine does not return */
        pauStack_708 = (undefined1 (*) [16])0x1417389d2;
        pdb_142dc7e11(8,0x18);
      }
      *(undefined1 (**) [16])pauVar31[1] = pauStack_630;
      *(undefined1 (**) [16])*pauVar31 = pauStack_640;
      *(undefined1 (**) [16])(*pauVar31 + 8) = pauStack_638;
      pauStack_4d0 = pauStack_5e0;
      pauStack_4c8 = pauStack_5d8;
      pauStack_4c0 = pauStack_5d0;
      if (uStack_480 == (undefined1 (*) [16])0x0) {
        LOCK();
        *(longlong *)*uStack_478 = *(longlong *)*uStack_478 + -1;
        UNLOCK();
        param_3 = (undefined1 (*) [16])&UNK_14332b220;
        if (*(longlong *)*uStack_478 == 0) {
          uStack_698._0_6_ = (uint6)uStack_698 & 0xffffffffff;
          uStack_698 = (undefined1 (*) [16])(ulonglong)(uint6)uStack_698;
          pauStack_708 = (undefined1 (*) [16])0x141737e1b;
          pdb_140c7a240(&uStack_478);
        }
      }
      else {
        LOCK();
        *(longlong *)*pauStack_470 = *(longlong *)*pauStack_470 + -1;
        UNLOCK();
        param_3 = (undefined1 (*) [16])&UNK_14332b220;
        if (*(longlong *)*pauStack_470 == 0) {
          uStack_698._0_6_ = (uint6)uStack_698 & 0xffffffffff;
          uStack_698 = (undefined1 (*) [16])(ulonglong)(uint6)uStack_698;
          pauStack_708 = (undefined1 (*) [16])0x141737c2a;
          pdb_140c7a240(&pauStack_470);
        }
      }
    }
    if (pauStack_5a8 != (undefined1 (*) [16])0x0) {
      if (pauStack_5a8[(longlong)(*pauStack_5a8 + 2)] + 1 != (undefined *)0x0) {
        pauStack_708 = (undefined1 (*) [16])0x141737e55;
        pub_1406abac0((byte *)((longlong)pauStack_5b0 - ((longlong)pauStack_5a8 * 0x10 + 0x10)),
                      (ulonglong)(pauStack_5a8[(longlong)(*pauStack_5a8 + 2)] + 1),0x10);
      }
    }
    plVar26 = *(longlong **)*pauStack_678;
    LOCK();
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (*plVar26 == 0) {
      uStack_4b0 = uStack_5b8;
      ppauStack_4a8 = ppauStack_5c0;
      pauStack_708 = (undefined1 (*) [16])0x141737e86;
      pdb_140dd7630();
    }
    *(undefined2 *)(uStack_690[4] + 8) = 0;
code_r0x000141739892:
    uVar38 = *(longlong *)(uStack_690[3] + 8) + 0x10;
    pauStack_5a0 = pauStack_4c0;
    pauStack_5b0 = pauStack_4d0;
    pauStack_5a8 = pauStack_4c8;
    pauStack_708 = (undefined1 (*) [16])0x1417398f4;
    uStack_480 = pauVar30;
    uStack_478 = pauVar25;
    pauStack_470 = pauVar31;
    pauStack_468 = param_3;
    pdb_141746c10(&uStack_540,uVar38,(undefined1 (*) [16])&uStack_480,&pauStack_5b0);
    plVar26 = (longlong *)(uStack_690[3] + 8);
    uStack_690[6][0] = 0;
    plVar4 = plRam0000000143cad8b8;
    if (uStack_540 == (undefined1 (*) [16])0x0) {
      if (*_DAT_143ca4b08 < 2) {
        bVar22 = *(byte *)(plRam0000000143cad8b8 + 2);
        uVar38 = (ulonglong)bVar22;
        if (2 < bVar22) {
          uStack_698._0_5_ = CONCAT14(1,(uint)uStack_698);
          pauStack_708 = (undefined1 (*) [16])0x141739adb;
          uVar24 = pdb_142db8070(plRam0000000143cad8b8);
          uVar38 = (ulonglong)uVar24;
          if ((char)uVar24 != '\0') goto code_r0x00014173993f;
          goto code_r0x000141739ae6;
        }
        if (bVar22 == 0) goto code_r0x000141739ae6;
code_r0x00014173993f:
        uStack_698._0_5_ = CONCAT14(1,(uint)uStack_698);
        pauStack_708 = (undefined1 (*) [16])0x14173994b;
        cVar23 = pdb_140dd7f60(*plVar4);
        if (cVar23 == '\0') goto code_r0x000141739ae6;
        lVar29 = *plVar4;
        pauVar31 = *(undefined1 (**) [16])(lVar29 + 0x38);
        if (pauVar31 == (undefined1 (*) [16])0x0) {
          uStack_698._0_5_ = CONCAT14(1,(uint)uStack_698);
          pauStack_708 = (undefined1 (*) [16])0x141739f51;
          pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
          goto code_r0x00014173a218;
        }
        pauStack_640 = *(undefined1 (**) [16])(lVar29 + 0x30);
        pauStack_630 = *(undefined1 (**) [16])(lVar29 + 0x40);
        uStack_628 = *(undefined1 (**) [16])(lVar29 + 0x48);
        uStack_620 = 0;
        pauStack_5f8 = (undefined1 (*) [16])&UNK_14332b290;
        pauStack_5f0 = (undefined1 (*) [16])0x33;
        pauStack_638 = pauVar31;
        if (pauVar31 == (undefined1 (*) [16])0x1) {
          uStack_698._0_5_ = CONCAT14(1,(uint)uStack_698);
          pauStack_708 = (undefined1 (*) [16])0x141739f73;
          pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
          goto code_r0x00014173a218;
        }
        pauStack_648 = (undefined1 (*) [16])0x1;
        pauStack_5e0 = (undefined1 (*) [16])(*plVar26 + 0x20);
        pauStack_658 = pauStack_630;
        pauStack_668 = pauStack_640;
        pauStack_660 = pauVar31;
        pauStack_650 = uStack_628;
        if (pauVar31 < (undefined1 (*) [16])0x3) {
          uStack_698._0_5_ = CONCAT14(1,(uint)uStack_698);
          pauStack_708 = (undefined1 (*) [16])0x141739f95;
          pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
          goto code_r0x00014173a218;
        }
        uStack_600 = (undefined1 (*) [16])(lVar29 + 0x30);
        ppauStack_590 = (undefined1 (**) [16])0x2;
        uStack_448 = uStack_690 + 1;
        uStack_480 = (undefined1 (*) [16])&pauStack_640;
        uStack_478 = (undefined1 (*) [16])&pauStack_5f8;
        pauStack_470 = (undefined1 (*) [16])&UNK_14332b058;
        pauStack_468 = (undefined1 (*) [16])&pauStack_668;
        uStack_460 = (undefined1 (*) [16])&pauStack_5e0;
        uStack_458 = (undefined1 (*) [16])&UNK_14332b078;
        uStack_440 = &UNK_14332b098;
        lStack_608 = 3;
        uStack_698._0_5_ = CONCAT14(1,(uint)uStack_698);
        pauStack_708 = (undefined1 (*) [16])0x141739ac5;
        pauStack_610 = (undefined1 (*) [16])&uStack_480;
        pauStack_5b0 = pauStack_640;
        pauStack_5a8 = pauVar31;
        pauStack_5a0 = pauStack_630;
        pauStack_598 = uStack_628;
        uStack_450 = &pauStack_5b0;
        pdb_14173b780(&pauStack_610);
      }
      else {
code_r0x000141739ae6:
        plVar4 = plRam0000000143cad8b8;
        if ((*_DAT_143ca4ab0 == '\0') && (3 < *_DAT_143ca8e90)) {
          pauStack_678 = (undefined1 (*) [16])*plRam0000000143cad8b8;
          apauStack_c0[1] = *(undefined1 (**) [16])pauStack_678[2];
          pauStack_b0 = *(undefined1 (**) [16])(pauStack_678[2] + 8);
          apauStack_c0[0] = (undefined1 (*) [16])0x4;
          uStack_698._0_5_ = CONCAT14(1,(uint)uStack_698);
          pauStack_708 = (undefined1 (*) [16])0x141739b3e;
          uVar39 = pdb_140f33290();
          uStack_698._0_5_ = CONCAT14(1,(uint)uStack_698);
          pauStack_708 = (undefined1 (*) [16])0x141739b59;
          cVar23 = (**(code **)(uVar38 + 0x18))(uVar39,apauStack_c0);
          if (cVar23 != '\0') {
            lVar29 = *plVar4;
            pauVar31 = *(undefined1 (**) [16])(lVar29 + 0x38);
            if (pauVar31 == (undefined1 (*) [16])0x0) {
              uStack_698._0_5_ = CONCAT14(1,(uint)uStack_698);
              pauStack_708 = (undefined1 (*) [16])0x14173a12b;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
              goto code_r0x00014173a218;
            }
            pauStack_640 = *(undefined1 (**) [16])(lVar29 + 0x30);
            pauStack_630 = *(undefined1 (**) [16])(lVar29 + 0x40);
            uStack_628 = *(undefined1 (**) [16])(lVar29 + 0x48);
            uStack_620 = 0;
            pauStack_5e0 = (undefined1 (*) [16])&UNK_14332b290;
            pauStack_5d8 = (undefined1 (*) [16])0x33;
            pauStack_638 = pauVar31;
            if (pauVar31 == (undefined1 (*) [16])0x1) {
              uStack_698._0_5_ = CONCAT14(1,(uint)uStack_698);
              pauStack_708 = (undefined1 (*) [16])0x14173a14d;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
              goto code_r0x00014173a218;
            }
            pauStack_648 = (undefined1 (*) [16])0x1;
            puStack_4e0 = (undefined *)(*plVar26 + 0x20);
            pauStack_658 = pauStack_630;
            pauStack_668 = pauStack_640;
            pauStack_660 = pauVar31;
            pauStack_650 = uStack_628;
            if (pauVar31 < (undefined1 (*) [16])0x3) {
              uStack_698._0_5_ = CONCAT14(1,(uint)uStack_698);
              pauStack_708 = (undefined1 (*) [16])0x14173a16f;
              pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
              goto code_r0x00014173a218;
            }
            pauStack_5e8 = (undefined1 (*) [16])(lVar29 + 0x30);
            ppauStack_590 = (undefined1 (**) [16])0x2;
            uStack_448 = uStack_690 + 1;
            uStack_480 = (undefined1 (*) [16])&pauStack_640;
            uStack_478 = (undefined1 (*) [16])&pauStack_5e0;
            pauStack_470 = (undefined1 (*) [16])&UNK_14332b058;
            pauStack_468 = (undefined1 (*) [16])&pauStack_668;
            uStack_460 = (undefined1 (*) [16])&puStack_4e0;
            uStack_458 = (undefined1 (*) [16])&UNK_14332b078;
            uStack_440 = &UNK_14332b098;
            pauStack_5f0 = (undefined1 (*) [16])0x3;
            uStack_600 = pauStack_b0;
            pauStack_610 = apauStack_c0[0];
            lStack_608 = (longlong)apauStack_c0[1];
            uStack_698._0_5_ = CONCAT14(1,(uint)uStack_698);
            ppauStack_6e0 = &pauStack_5f8;
            pauStack_708 = (undefined1 (*) [16])0x141739d0a;
            pauStack_5f8 = (undefined1 (*) [16])&uStack_480;
            pauStack_5b0 = pauStack_640;
            pauStack_5a8 = pauVar31;
            pauStack_5a0 = pauStack_630;
            pauStack_598 = uStack_628;
            uStack_450 = &pauStack_5b0;
            pdb_140dd7f80(pauStack_678,uVar39,uVar38,&pauStack_610);
          }
        }
      }
      if (uStack_540 == (undefined1 (*) [16])0x0) {
        ppauStack_6e0 = (undefined1 (**) [16])&uStack_538;
        uStack_480 = _DAT_14332b4f8;
        uStack_478 = _UNK_14332b500;
        uStack_698._0_5_ = CONCAT14(1,(uint)uStack_698);
        pauStack_708 = (undefined1 (*) [16])0x141739d59;
        pdb_141c2b710(*(longlong *)uStack_690[4] + 0x10,&uStack_480,
                      *(undefined8 *)(*(longlong *)(uStack_690[3] + 8) + 0x20),
                      *(undefined8 *)(*(longlong *)(uStack_690[3] + 8) + 0x28));
      }
    }
    pauStack_470 = pauStack_530;
    uStack_480 = uStack_540;
    uStack_478 = uStack_538;
    uStack_698._0_5_ = (uint5)(uint)uStack_698;
    pauStack_708 = (undefined1 (*) [16])0x141739d8f;
    pdb_14173b990(&lStack_4a0,&uStack_480);
    pauStack_678 = (undefined1 (*) [16])(uStack_690[5] + 8);
    pauStack_708 = (undefined1 (*) [16])0x141739da4;
    pdb_141ac4fd0();
    param_1 = uStack_680;
    plVar4 = *(longlong **)pauStack_678;
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      pauStack_708 = (undefined1 (*) [16])0x141739dc1;
      pdb_140dd76c0();
    }
    plVar4 = (longlong *)*plVar26;
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      pauStack_708 = (undefined1 (*) [16])0x141739dd3;
      pdb_140dd76c0(plVar26);
    }
    plVar26 = *(longlong **)uStack_690[4];
    LOCK();
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (*plVar26 == 0) {
      pauStack_708 = (undefined1 (*) [16])0x141739def;
      pdb_140dd78e0(uStack_690 + 4);
    }
    plVar26 = *(longlong **)*uStack_690;
    if (plVar26 != (longlong *)0x0) {
      LOCK();
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (*plVar26 == 0) {
        pauStack_708 = (undefined1 (*) [16])0x141739e0b;
        pdb_140c7a240(uStack_690);
      }
    }
    goto code_r0x000141739e0c;
  case 5:
    pauStack_5d0 = param_2;
                    /* WARNING: Could not emulate address calculation at 0x00014173f2f0 */
                    /* WARNING: Treating indirect jump as call */
    pauVar31 = (undefined1 (*) [16])
               (*(code *)((ulonglong)*(uint *)((longlong)pauVar25 * 4 + 0x4801beca) + 0x4801beca))()
    ;
    return pauVar31;
  case 6:
    goto code_r0x00014173f49a;
  case 7:
    puVar41 = (undefined1 *)(ulonglong)(iVar2 + 0x8b32bd94);
    puVar34 = (undefined *)0x4332bb50;
    goto code_r0x00014173f49a;
  case 8:
    (*pauVar25)[0] = (*pauVar25)[0];
    (*param_3)[0] = (*param_3)[0] + -0x6c;
    *(int *)param_2[9] = *(int *)param_2[9] - (int)auStack_700;
    param_2[10][0] = 0;
    pauStack_5e0 = (undefined1 (*) [16])&UNK_14332bd94;
    uStack_688 = (undefined1 (*) [16])_UNK_14332bd94;
    uStack_680 = _UNK_14332bd9c;
    lVar29 = *(longlong *)param_2[6];
    pauStack_658 = *(undefined1 (**) [16])(param_2[7] + 8);
    pauStack_668 = *(undefined1 (**) [16])(param_2[6] + 8);
    pauStack_660 = *(undefined1 (**) [16])param_2[7];
    uStack_628 = *(undefined1 (**) [16])param_2[8];
    uStack_620 = *(undefined8 *)(param_2[8] + 8);
    lStack_618 = *(longlong *)param_2[9];
    pauStack_610 = *(undefined1 (**) [16])(param_2[9] + 8);
    pauStack_708 = (undefined1 (*) [16])0x14173f3a1;
    pdb_14098a860(&uStack_628);
    pauStack_678 = uStack_688;
    uStack_670 = uStack_680;
    pauStack_648 = pauStack_668;
    pauStack_640 = pauStack_660;
    pauStack_638 = pauStack_658;
    pauStack_5d0[10][0] = 1;
    if (SBORROW8(0,lVar29)) {
      *(undefined8 *)*unaff_RSI = 2;
      uVar21 = 3;
    }
    else {
      lStack_618 = (longlong)uStack_688;
      pauStack_610 = uStack_680;
      uStack_600 = pauStack_668;
      pauStack_5f8 = pauStack_660;
      pauStack_5f0 = pauStack_658;
      uStack_628 = (undefined1 (*) [16])0x1;
      uStack_620 = 1;
      pauStack_708 = (undefined1 (*) [16])0x14173f412;
      lStack_608 = lVar29;
      pdb_14007ee60();
      pauStack_708 = (undefined1 (*) [16])0x14173f421;
      pbVar32 = pub_1406abab0(0x40,0x10);
      if (pbVar32 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pauStack_708 = (undefined1 (*) [16])0x14173f484;
        pdb_142dc7e11(0x10,0x40);
      }
      *(undefined1 (**) [16])(pbVar32 + 0x30) = pauStack_5f8;
      *(undefined1 (**) [16])(pbVar32 + 0x38) = pauStack_5f0;
      *(longlong *)(pbVar32 + 0x20) = lStack_608;
      *(undefined1 (**) [16])(pbVar32 + 0x28) = uStack_600;
      *(longlong *)(pbVar32 + 0x10) = lStack_618;
      *(undefined1 (**) [16])(pbVar32 + 0x18) = pauStack_610;
      *(undefined1 (**) [16])pbVar32 = uStack_628;
      *(undefined8 *)(pbVar32 + 8) = uStack_620;
      *(undefined8 *)*unaff_RSI = 0;
      *(byte **)(*unaff_RSI + 8) = pbVar32;
      *(undefined **)unaff_RSI[1] = &UNK_14332ba98;
      uVar21 = 1;
    }
    pauStack_5d0[0xb][0] = uVar21;
    return unaff_RSI;
  case 9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 10:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb:
code_r0x00014173f702:
                    /* WARNING: Subroutine does not return */
    pauStack_708 = (undefined1 (*) [16])0x14173f707;
    pdb_142dc7e11(puVar34,param_2);
  case 0xc:
    iStack_6a8 = iStack_6a8 - (int)auStack_700;
    pauStack_638 = param_2 + 4;
    *(undefined1 (**) [16])param_2[4] = in_XMM0_Qa;
    *(undefined1 (**) [16])(param_2[4] + 8) = in_XMM0_Qb;
    *(int *)param_2[5] = (int)in_XMM1_Qa;
    *(undefined4 *)(param_2[5] + 4) = uVar33;
    *(undefined4 *)(param_2[5] + 8) = in_XMM1_Dc;
    *(undefined4 *)(param_2[5] + 0xc) = in_XMM1_Dd;
    *(int *)param_2[6] = (int)in_XMM2_Qa;
    *(int *)(param_2[6] + 4) = (int)((ulonglong)in_XMM2_Qa >> 0x20);
    *(undefined4 *)(param_2[6] + 8) = in_XMM2_Dc;
    *(undefined4 *)(param_2[6] + 0xc) = in_XMM2_Dd;
    *(int *)param_2[7] = (int)in_XMM3_Qa;
    *(int *)(param_2[7] + 4) = (int)((ulonglong)in_XMM3_Qa >> 0x20);
    *(undefined4 *)(param_2[7] + 8) = in_XMM3_Dc;
    *(undefined4 *)(param_2[7] + 0xc) = in_XMM3_Dd;
    param_2[8][0] = 0;
    pauVar30 = *(undefined1 (**) [16])param_2[4];
    pauVar25 = *(undefined1 (**) [16])(param_2[4] + 8);
    uStack_698 = *(undefined1 (**) [16])param_2[5];
    uStack_690 = *(undefined1 (**) [16])(param_2[5] + 8);
    pauStack_678 = *(undefined1 (**) [16])param_2[6];
    uStack_670 = *(undefined1 (**) [16])(param_2[6] + 8);
    pauStack_668 = *(undefined1 (**) [16])param_2[7];
    pauStack_660 = *(undefined1 (**) [16])(param_2[7] + 8);
    pauStack_708 = (undefined1 (*) [16])0x14173f65a;
    pdb_14098a860(pauVar31);
    uStack_688 = uStack_698;
    uStack_680 = uStack_690;
    pauStack_640[8][0] = 1;
    if (SBORROW8(0,(longlong)pauVar30)) {
      *(undefined8 *)*unaff_RSI = 2;
      uVar21 = 3;
    }
    else {
      pauStack_678 = uStack_698;
      uStack_670 = uStack_690;
      pauStack_708 = (undefined1 (*) [16])0x14173f68e;
      pdb_14007ee60();
      pauStack_708 = (undefined1 (*) [16])0x14173f69d;
      pbVar32 = pub_1406abab0(0x30,8);
      if (pbVar32 == (byte *)0x0) {
        puVar34 = (undefined *)0x8;
        param_2 = (undefined1 (*) [16])0x30;
        pauStack_650 = pauVar25;
        pauStack_638 = pauVar30;
        goto code_r0x00014173f702;
      }
      pbVar32[0] = 1;
      pbVar32[1] = 0;
      pbVar32[2] = 0;
      pbVar32[3] = 0;
      pbVar32[4] = 0;
      pbVar32[5] = 0;
      pbVar32[6] = 0;
      pbVar32[7] = 0;
      pbVar32[8] = 1;
      pbVar32[9] = 0;
      pbVar32[10] = 0;
      pbVar32[0xb] = 0;
      pbVar32[0xc] = 0;
      pbVar32[0xd] = 0;
      pbVar32[0xe] = 0;
      pbVar32[0xf] = 0;
      *(undefined1 (**) [16])(pbVar32 + 0x10) = pauVar30;
      *(undefined1 (**) [16])(pbVar32 + 0x18) = pauVar25;
      *(undefined1 (**) [16])(pbVar32 + 0x20) = pauStack_678;
      *(undefined1 (**) [16])(pbVar32 + 0x28) = uStack_670;
      *(undefined8 *)*unaff_RSI = 0;
      *(byte **)(*unaff_RSI + 8) = pbVar32;
      *(undefined **)unaff_RSI[1] = &UNK_14332ba78;
      uVar21 = 1;
    }
    pauStack_640[8][8] = uVar21;
    return unaff_RSI;
  case 0xd:
    pauStack_708 = param_3;
    puStack_710 = auStack_700;
    puVar37 = (undefined8 *)auStack_7d8;
    puVar46 = auStack_7d8;
    puVar44 = auStack_7d8;
    puVar43 = auStack_7d8;
    ppauVar42 = (undefined1 (**) [16])auStack_7d8;
    puVar45 = auStack_7d8;
    pauVar31 = &auStack_758;
    uStack_718 = 0xfffffffffffffffe;
    unaff_RSI = (undefined1 (*) [16])&UNK_14332bd94;
    puVar34 = &UNK_14332bdc8;
    lVar29 = (longlong)*(int *)(&UNK_14332bdc8 + (ulonglong)(byte)param_2[7][8] * 4);
    pauVar30 = (undefined1 (*) [16])(&UNK_14332bdc8 + lVar29);
    bVar51 = pauVar30 == (undefined1 (*) [16])0x0;
    pauStack_728 = param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(param_2[7][8]) {
    case 0:
      uStack_798 = *(undefined8 *)param_2[1];
      uStack_7a8 = *(undefined8 *)*param_2;
      uStack_7a0 = *(undefined8 *)(*param_2 + 8);
      uStack_790 = *(undefined4 *)(param_2[1] + 8);
      uStack_78c = *(undefined4 *)(param_2[1] + 0xc);
      uStack_788 = *(undefined4 *)param_2[2];
      uStack_784 = *(undefined4 *)(param_2[2] + 4);
      uStack_780 = *(undefined4 *)(param_2[2] + 8);
      uStack_77c = *(undefined4 *)(param_2[2] + 0xc);
      uStack_778 = *(undefined4 *)param_2[3];
      uStack_774 = *(undefined4 *)(param_2[3] + 4);
      puStack_720 = param_2[3] + 8;
      *(undefined8 *)(param_2[3] + 8) = *(undefined8 *)*param_2;
      *(undefined8 *)param_2[4] = *(undefined8 *)(*param_2 + 8);
      goto code_r0x00014173f8a1;
    case 1:
                    /* WARNING: Subroutine does not return */
      uStack_7e0 = 0x14173f9ef;
      pdb_142dc8570(&UNK_14332ba20);
    case 2:
                    /* WARNING: Subroutine does not return */
      uStack_7e0 = 0x14173f9e3;
      pdb_142dc8590(&UNK_14332ba20);
    case 3:
      puStack_730 = param_2[3] + 8;
      puStack_720 = puStack_730;
      if (param_2[7][0] != '\0') {
        if (param_2[7][0] == '\x01') {
                    /* WARNING: Subroutine does not return */
          uStack_7e0 = 0x14173f9d4;
          pdb_142dc8570(&UNK_14332bb50);
        }
                    /* WARNING: Subroutine does not return */
        uStack_7e0 = 0x14173fa03;
        pdb_142dc8590(&UNK_14332bb50);
      }
      break;
    case 4:
      pauStack_508 = param_2;
                    /* WARNING: Could not emulate address calculation at 0x00014173fb02 */
                    /* WARNING: Treating indirect jump as call */
      pauVar31 = (undefined1 (*) [16])
                 (*(code *)(&UNK_14332bdc8 + *(int *)(&UNK_14332bdc8 + (longlong)pauVar30 * 4)))();
      return pauVar31;
    case 5:
      *(int *)(lVar29 + 0xd07af1b3) = *(int *)(lVar29 + 0xd07af1b3) + (int)param_2;
                    /* WARNING: Subroutine does not return */
      uStack_7e0 = 0x14173fcd6;
      pdb_142dc8590();
    case 6:
      (&UNK_14332bd55)[lVar29] = (&UNK_14332bd55)[lVar29] + -0x38;
                    /* WARNING: Subroutine does not return */
      uStack_7e0 = 0x14173fcc7;
      pdb_142dc8570();
    case 7:
      goto code_r0x00014173fb24;
    case 8:
      unaff_RSI = (undefined1 (*) [16])0x4332bdc8;
      pauStack_610 = param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(param_2[8][8]) {
      case 0:
        puStack_6d8 = *(undefined8 **)*param_2;
        uStack_6d0 = *(undefined8 *)(*param_2 + 8);
        uStack_6c8 = *(undefined8 *)param_2[1];
        puStack_6c0 = *(undefined8 **)(param_2[1] + 8);
        lStack_748 = *(longlong *)param_2[2];
        uStack_740 = *(undefined8 *)(param_2[2] + 8);
        uStack_738 = *(undefined4 *)param_2[3];
        uStack_734 = *(undefined4 *)(param_2[3] + 4);
        puStack_730 = *(undefined **)(param_2[3] + 8);
        uStack_7e0 = 0x14173fe55;
        pdb_141748860(&uStack_698,&puStack_6d8,&lStack_748);
        in_XMM1_Dc = (undefined4)uStack_680;
        in_XMM1_Dd = uStack_680._4_4_;
        in_XMM0_Qa = uStack_698;
        in_XMM0_Qb = uStack_690;
        goto code_r0x00014173fe65;
      case 1:
                    /* WARNING: Subroutine does not return */
        uStack_7e0 = 0x141740485;
        pdb_142dc8570(&UNK_14332ba20);
      case 2:
                    /* WARNING: Subroutine does not return */
        uStack_7e0 = 0x141740479;
        pdb_142dc8590(&UNK_14332ba20);
      }
      goto code_r0x00014173feae;
    case 9:
      puVar37 = &uStack_7e0;
      uStack_7e0 = 0xdeb9001;
      goto code_r0x00014174045e;
    case 10:
      goto code_r0x00014174044d;
    case 0xb:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    goto code_r0x00014173f8db;
  case 0xe:
    (*pauVar25)[0] = (*pauVar25)[0] - cVar23;
    (*pauVar25)[0] = (*pauVar25)[0] + cVar23;
    goto code_r0x00014173f9a9;
  case 0xf:
    return pauVar25;
  case 0x10:
    ppauVar42 = &pauStack_708;
    pauStack_708 = pauVar31;
    *(uint *)(param_2[3] + 8) =
         *(int *)(param_2[3] + 8) + (int)pauVar25 + (uint)(*unaff_R15 < param_4);
code_r0x00014173f8a1:
    uVar39 = *(undefined8 *)(pauVar31[-3] + 8);
    *(undefined8 *)(param_2[5] + 8) = *(undefined8 *)pauVar31[-3];
    *(undefined8 *)param_2[6] = uVar39;
    *(undefined8 *)(param_2[6] + 8) = *(undefined8 *)pauVar31[-2];
    *(undefined8 *)(param_2[4] + 8) = *(undefined8 *)pauVar31[-4];
    *(undefined8 *)param_2[5] = *(undefined8 *)(pauVar31[-4] + 8);
    param_2[7][0] = 0;
    puVar43 = (undefined1 *)ppauVar42;
code_r0x00014173f8db:
    lVar29 = *(longlong *)(param_2[3] + 8);
    *(undefined8 *)pauVar31[-1] = *(undefined8 *)param_2[4];
    *(undefined8 *)(pauVar31[-1] + 8) = *(undefined8 *)(param_2[4] + 8);
    uVar39 = *(undefined8 *)param_2[5];
    uVar5 = *(undefined8 *)(param_2[5] + 8);
    uVar6 = *(undefined8 *)(param_2[6] + 8);
    *(undefined8 *)pauVar31[1] = *(undefined8 *)param_2[6];
    *(undefined8 *)(pauVar31[1] + 8) = uVar6;
    *(undefined8 *)*pauVar31 = uVar39;
    *(undefined8 *)(*pauVar31 + 8) = uVar5;
    *(undefined8 *)(puVar43 + -8) = 0x14173f90f;
    pdb_14098a860(pauVar31);
    uVar39 = *(undefined8 *)(pauVar31[-1] + 8);
    *(undefined8 *)pauVar31[-6] = *(undefined8 *)pauVar31[-1];
    *(undefined8 *)(pauVar31[-6] + 8) = uVar39;
    lVar49 = *(longlong *)pauVar31[3];
    *(undefined1 *)(lVar49 + 0x70) = 1;
    if (SBORROW8(0,lVar29)) {
      *(undefined8 *)*unaff_RSI = 2;
      uVar21 = 3;
    }
    else {
      uVar39 = *(undefined8 *)(pauVar31[-6] + 8);
      *(undefined8 *)(pauVar31[1] + 8) = *(undefined8 *)pauVar31[-6];
      *(undefined8 *)pauVar31[2] = uVar39;
      *(undefined8 *)*pauVar31 = 1;
      *(undefined8 *)(*pauVar31 + 8) = 1;
      *(longlong *)pauVar31[1] = lVar29;
      *(undefined8 *)(puVar43 + -8) = 0x14173f954;
      pdb_14007ee60();
      *(undefined8 *)(puVar43 + -8) = 0x14173f963;
      pbVar32 = pub_1406abab0(0x28,8);
      if (pbVar32 == (byte *)0x0) {
code_r0x00014173f9a9:
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar43 + -8) = 0x14173f9b8;
        pdb_142dc7e11(8,0x28);
      }
      *(undefined8 *)(pbVar32 + 0x20) = *(undefined8 *)pauVar31[2];
      uVar39 = *(undefined8 *)*pauVar31;
      uVar5 = *(undefined8 *)(*pauVar31 + 8);
      uVar6 = *(undefined8 *)(pauVar31[1] + 8);
      *(undefined8 *)(pbVar32 + 0x10) = *(undefined8 *)pauVar31[1];
      *(undefined8 *)(pbVar32 + 0x18) = uVar6;
      *(undefined8 *)pbVar32 = uVar39;
      *(undefined8 *)(pbVar32 + 8) = uVar5;
      *(undefined8 *)*unaff_RSI = 0;
      *(byte **)(*unaff_RSI + 8) = pbVar32;
      *(undefined **)unaff_RSI[1] = &UNK_14332ba58;
      uVar21 = 1;
    }
    *(undefined1 *)(lVar49 + 0x78) = uVar21;
    return unaff_RSI;
  case 0x11:
    pcVar8 = (code *)swi(3);
    pauVar31 = (undefined1 (*) [16])(*pcVar8)();
    return pauVar31;
  case 0x12:
    goto code_r0x00014173fc92;
  case 0x13:
    (&UNK_14332bd1d)[iVar2] = (&UNK_14332bd1d)[iVar2] + -0x6c;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x14:
code_r0x00014173fb24:
    pauVar25 = unaff_RSI;
    uVar24 = *(uint *)*param_3;
    *(uint *)*param_3 = *(int *)*param_3 + (uint)puVar34;
    pauStack_638 = (undefined1 (*) [16])
                   CONCAT71(pauStack_638._1_7_,
                            (char)pauStack_638 + (char)pauVar30 + -0x6f +
                            CARRY4(uVar24,(uint)puVar34));
    *(undefined1 (**) [16])(pauVar31[0x12] + 8) = in_XMM0_Qa;
    *(undefined1 (**) [16])pauVar31[0x13] = in_XMM0_Qb;
    *(undefined4 *)(pauVar31[0x13] + 8) = (undefined4)uStack_628;
    *(undefined4 *)(pauVar31[0x13] + 0xc) = uStack_628._4_4_;
    *(undefined4 *)pauVar31[0x14] = (undefined4)uStack_620;
    *(undefined4 *)(pauVar31[0x14] + 4) = uStack_620._4_4_;
    *(longlong **)(pauVar31[0x25] + 8) = &lStack_618;
    *(undefined8 *)(puVar44 + -8) = 0x14173fb5f;
    pub_142e32760(&lStack_618,param_3,0xe8);
    pauStack_530 = (undefined1 (*) [16])((ulonglong)pauStack_530 & 0xffffffffffffff00);
    *(undefined8 *)(puVar44 + -8) = 0x14173fba5;
    pub_142e32760(pauVar31[0x14] + 8,&pauStack_610,0xc0);
    *(undefined4 *)pauVar31[0x23] = (undefined4)uStack_540;
    *(undefined4 *)(pauVar31[0x23] + 4) = uStack_540._4_4_;
    *(undefined4 *)(pauVar31[0x23] + 8) = (undefined4)uStack_538;
    *(undefined4 *)(pauVar31[0x23] + 0xc) = uStack_538._4_4_;
    *(undefined8 *)pauVar31[0x22] = uStack_550;
    *(undefined8 *)(pauVar31[0x22] + 8) = uStack_548;
    *(undefined8 *)(puVar44 + -8) = 0x14173fbcd;
    pdb_14098a860(pauVar31 + 0x22);
    *(undefined8 *)(puVar44 + -8) = 0x14173fbe4;
    pub_142e32760(pauVar31 + -6,pauVar31[0x14] + 8,0xc0);
    lVar29 = *(longlong *)pauVar31[0x25];
    *(undefined1 *)(lVar29 + 0x1d0) = 1;
    if (SBORROW8(0,lStack_618)) {
      *(undefined8 *)*pauVar25 = 2;
      uVar21 = 3;
    }
    else {
      *(undefined8 *)(puVar44 + -8) = 0x14173fc1b;
      pub_142e32760(pauVar31 + 0x16,pauVar31 + -6,0xc0);
      *(undefined8 *)(pauVar31[0x14] + 8) = 1;
      *(undefined8 *)pauVar31[0x15] = 1;
      *(longlong *)(pauVar31[0x15] + 8) = lStack_618;
      *(undefined8 *)(puVar44 + -8) = 0x14173fc3d;
      pdb_14007ee60();
      *(undefined8 *)(puVar44 + -8) = 0x14173fc4c;
      pbVar32 = pub_1406abab0(0xd8,8);
      if (pbVar32 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar44 + -8) = 0x14173fca5;
        pdb_142dc7e11(8,0xd8);
      }
      *(undefined8 *)(puVar44 + -8) = 0x14173fc69;
      pub_142e32760(pbVar32,pauVar31[0x14] + 8,0xd8);
      *(undefined8 *)*pauVar25 = 0;
      *(byte **)(*pauVar25 + 8) = pbVar32;
      *(undefined **)pauVar25[1] = &UNK_14332bab8;
      uVar21 = 1;
    }
    *(undefined1 *)(lVar29 + 0x1d8) = uVar21;
code_r0x00014173fc92:
    return pauVar25;
  case 0x15:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x16:
code_r0x000141740425:
    pauVar31[0x15][0xf] = 0;
    pauVar31[0x15][0xe] = 1;
    *(undefined8 *)(puVar46 + -8) = 0x141740438;
    cVar23 = pdb_142dc79e0();
    if (cVar23 == '\0') {
      puVar40[0x39] = 1;
    }
code_r0x00014174008e:
    uVar33 = 0;
    LOCK();
    bVar22 = *unaff_R15;
    *unaff_R15 = 0;
    UNLOCK();
    puVar47 = puVar46;
    if (bVar22 == 2) {
      pauVar31[0x15][0xf] = 0;
      pauVar31[0x15][0xe] = 1;
      *(undefined8 *)(puVar46 + -8) = 0x1417400af;
      pdb_142dc6ca0();
      uVar33 = 0;
    }
code_r0x0001417400b6:
    *(undefined4 *)(pauVar31[0x15] + 8) = uVar33;
    *(undefined8 *)*pauVar31 = *(undefined8 *)(pauVar31[0x13] + 8);
    *(undefined1 (**) [16])(*pauVar31 + 8) = param_3;
    *(undefined8 *)pauVar31[10] = 0;
    *(undefined8 *)(pauVar31[10] + 8) = 1;
    *(undefined8 *)pauVar31[0xb] = 0;
    *(undefined8 *)pauVar31[0xd] = 0x60000020;
    *(undefined1 (**) [16])pauVar31[0xc] = pauVar31 + 10;
    *(undefined **)(pauVar31[0xc] + 8) = &UNK_14332b508;
    *(undefined8 *)(puVar47 + -8) = 0x141740122;
    cVar23 = pdb_140f58310(pauVar31,pauVar31 + 0xc);
    if (cVar23 != '\0') {
      *(undefined **)(puVar47 + 0x20) = &UNK_14332b5e0;
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar47 + -8) = 0x141740394;
      pdb_142dc8170(&UNK_14332b538,0x37,pauVar31[0x15] + 7,&UNK_14332b890);
    }
    uVar39 = *(undefined8 *)(pauVar31[10] + 8);
    uVar5 = *(undefined8 *)pauVar31[0xb];
    lVar29 = *(longlong *)pauVar31[7];
    *(undefined8 *)pauVar31[0x14] = *(undefined8 *)pauVar31[10];
    if (lVar29 == 0) {
      pbVar32 = (byte *)0x0;
      cVar23 = pauVar31[0x15][8];
    }
    else {
      param_3 = *(undefined1 (**) [16])(pauVar31[7] + 8);
      *(longlong *)pauVar31[0xc] = lVar29;
      *(undefined1 (**) [16])(pauVar31[0xc] + 8) = param_3;
      *(undefined8 *)(pauVar31[0xb] + 8) = uVar39;
      if (param_3 == (undefined1 (*) [16])0x0) {
        pbVar32 = (byte *)0x1;
      }
      else {
        *(undefined8 *)(puVar47 + -8) = 0x141740173;
        pdb_14007ee60();
        *(undefined8 *)(puVar47 + -8) = 0x141740180;
        pbVar32 = pub_1406abab0((ulonglong)param_3,1);
        if (pbVar32 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)(puVar47 + -8) = 0x141740195;
          pdb_142dc7e11(1,param_3);
        }
      }
      *(undefined8 *)(puVar47 + -8) = 0x1417401bf;
      pub_142e32760(pbVar32,lVar29 + 0x10,param_3);
      plVar26 = *(longlong **)pauVar31[0xc];
      LOCK();
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (*plVar26 == 0) {
        *(undefined8 *)(puVar47 + -8) = 0x1417401d8;
        pdb_1406ed6a0(pauVar31 + 0xc);
      }
      uVar39 = *(undefined8 *)(pauVar31[0xb] + 8);
      cVar23 = pauVar31[0x15][8];
    }
    if ((cVar23 != '\0') && (uVar38 = *(ulonglong *)pauVar31[5], uVar38 != 0)) {
      pbVar7 = *(byte **)(pauVar31[5] + 8);
      *(undefined8 *)(puVar47 + -8) = 0x141740201;
      pub_1406abac0(pbVar7,uVar38,1);
    }
    *(undefined8 *)(puVar47 + -8) = 0x14174020e;
    pdb_14098a860(pauVar31 + 8);
    lVar29 = *(longlong *)pauVar31[0x14];
    uVar38 = *(ulonglong *)pauVar31[0x13];
    if (uVar38 != 0) {
      pbVar7 = *(byte **)(pauVar31[0x13] + 8);
      *(undefined8 *)(puVar47 + -8) = 0x141740234;
      pub_1406abac0(pbVar7,uVar38,1);
    }
    lVar49 = *(longlong *)(pauVar31[0x14] + 8);
    *(undefined1 *)(lVar49 + 0x80) = 1;
    if (SBORROW8(0,lVar29)) goto code_r0x000141740265;
    if (lVar29 == -0x7fffffffffffffff) {
      *(undefined8 *)*unaff_RSI = 2;
      uVar21 = 3;
      goto code_r0x0001417402a5;
    }
    *(undefined8 *)pauVar31[0xc] = 1;
    *(undefined8 *)(pauVar31[0xc] + 8) = 1;
    *(longlong *)pauVar31[0xd] = lVar29;
    *(undefined8 *)(pauVar31[0xd] + 8) = uVar39;
    *(undefined8 *)pauVar31[0xe] = uVar5;
    *(byte **)(pauVar31[0xe] + 8) = pbVar32;
    *(undefined1 (**) [16])pauVar31[0xf] = param_3;
    *(undefined8 *)(puVar47 + -8) = 0x141740301;
    pdb_14007ee60();
    *(undefined8 *)(puVar47 + -8) = 0x141740310;
    pbVar32 = pub_1406abab0(0x38,8);
    if (pbVar32 == (byte *)0x0) {
code_r0x000141740413:
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar47 + -8) = 0x141740422;
      pdb_142dc7e11(8,0x38);
    }
    *(undefined8 *)(pbVar32 + 0x30) = *(undefined8 *)pauVar31[0xf];
    uVar39 = *(undefined8 *)pauVar31[0xc];
    uVar5 = *(undefined8 *)(pauVar31[0xc] + 8);
    uVar6 = *(undefined8 *)pauVar31[0xd];
    uVar16 = *(undefined8 *)(pauVar31[0xd] + 8);
    uVar17 = *(undefined8 *)(pauVar31[0xe] + 8);
    *(undefined8 *)(pbVar32 + 0x20) = *(undefined8 *)pauVar31[0xe];
    *(undefined8 *)(pbVar32 + 0x28) = uVar17;
    *(undefined8 *)(pbVar32 + 0x10) = uVar6;
    *(undefined8 *)(pbVar32 + 0x18) = uVar16;
    *(undefined8 *)pbVar32 = uVar39;
    *(undefined8 *)(pbVar32 + 8) = uVar5;
    puVar34 = &UNK_14332ba38;
    uVar39 = 0;
    goto code_r0x000141740298;
  case 0x17:
    (*pauVar25)[0] = (*pauVar25)[0] + cVar23;
    goto code_r0x000141740413;
  case 0x18:
    (*pauVar25)[0] = (*pauVar25)[0];
    bVar22 = (*param_3)[0];
    (*param_3)[0] = (*param_3)[0] + -0x6c;
    pauStack_5a8 = (undefined1 (*) [16])
                   CONCAT71(pauStack_5a8._1_7_,(char)pauStack_5a8 + -0x6c + (0x6b < bVar22));
    uStack_688._0_4_ = (int)in_XMM1_Qa;
    uStack_688._4_4_ = uVar33;
code_r0x00014173fe65:
    uVar33 = *(undefined4 *)pauVar31[0xe];
    uVar9 = *(undefined4 *)(pauVar31[0xe] + 4);
    uVar10 = *(undefined4 *)(pauVar31[0xe] + 8);
    uVar11 = *(undefined4 *)(pauVar31[0xe] + 0xc);
    uVar12 = *(undefined4 *)pauVar31[0xf];
    uVar13 = *(undefined4 *)(pauVar31[0xf] + 4);
    uVar14 = *(undefined4 *)(pauVar31[0xf] + 8);
    uVar15 = *(undefined4 *)(pauVar31[0xf] + 0xc);
    *(undefined1 (**) [16])pauVar31[-5] = in_XMM0_Qa;
    *(undefined1 (**) [16])(pauVar31[-5] + 8) = in_XMM0_Qb;
    *(uint *)pauVar31[-4] = (uint)uStack_688;
    *(undefined4 *)(pauVar31[-4] + 4) = uStack_688._4_4_;
    *(undefined4 *)(pauVar31[-4] + 8) = in_XMM1_Dc;
    *(undefined4 *)(pauVar31[-4] + 0xc) = in_XMM1_Dd;
    *(undefined4 *)pauVar31[-3] = uVar33;
    *(undefined4 *)(pauVar31[-3] + 4) = uVar9;
    *(undefined4 *)(pauVar31[-3] + 8) = uVar10;
    *(undefined4 *)(pauVar31[-3] + 0xc) = uVar11;
    *(undefined4 *)pauVar31[-2] = uVar12;
    *(undefined4 *)(pauVar31[-2] + 4) = uVar13;
    *(undefined4 *)(pauVar31[-2] + 8) = uVar14;
    *(undefined4 *)(pauVar31[-2] + 0xc) = uVar15;
    *(undefined8 *)pauVar31[-1] = *(undefined8 *)pauVar31[0x10];
    param_2 = *(undefined1 (**) [16])(pauVar31[0x14] + 8);
    *(undefined8 *)param_2[8] = *(undefined8 *)pauVar31[0x10];
    *(undefined4 *)param_2[7] = uVar12;
    *(undefined4 *)(param_2[7] + 4) = uVar13;
    *(undefined4 *)(param_2[7] + 8) = uVar14;
    *(undefined4 *)(param_2[7] + 0xc) = uVar15;
    *(undefined4 *)param_2[6] = uVar33;
    *(undefined4 *)(param_2[6] + 4) = uVar9;
    *(undefined4 *)(param_2[6] + 8) = uVar10;
    *(undefined4 *)(param_2[6] + 0xc) = uVar11;
    *(uint *)param_2[5] = (uint)uStack_688;
    *(undefined4 *)(param_2[5] + 4) = uStack_688._4_4_;
    *(undefined4 *)(param_2[5] + 8) = in_XMM1_Dc;
    *(undefined4 *)(param_2[5] + 0xc) = in_XMM1_Dd;
    *(undefined1 (**) [16])param_2[4] = in_XMM0_Qa;
    *(undefined1 (**) [16])(param_2[4] + 8) = in_XMM0_Qb;
    puVar46 = puVar45;
code_r0x00014173feae:
    if (param_2[8][0] != '\0') {
      bVar51 = param_2[8][0] == '\x01';
      puVar37 = (undefined8 *)puVar46;
code_r0x00014174044d:
      if (bVar51) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)puVar37 + -8) = 0x14174045b;
        pdb_142dc8570(&UNK_14332bb00);
      }
code_r0x00014174045e:
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)puVar37 + -8) = 0x14174046a;
      pdb_142dc8590(&UNK_14332bb00);
    }
    *(undefined8 *)pauVar31[0x13] = *(undefined8 *)param_2[4];
    uVar39 = *(undefined8 *)(param_2[4] + 8);
    param_3 = *(undefined1 (**) [16])param_2[5];
    uVar5 = *(undefined8 *)param_2[6];
    uVar6 = *(undefined8 *)(param_2[6] + 8);
    uVar33 = *(undefined4 *)(param_2[7] + 4);
    uVar9 = *(undefined4 *)(param_2[7] + 8);
    uVar10 = *(undefined4 *)(param_2[7] + 0xc);
    *(undefined4 *)pauVar31[9] = *(undefined4 *)param_2[7];
    *(undefined4 *)(pauVar31[9] + 4) = uVar33;
    *(undefined4 *)(pauVar31[9] + 8) = uVar9;
    *(undefined4 *)(pauVar31[9] + 0xc) = uVar10;
    *(undefined8 *)pauVar31[8] = uVar5;
    *(undefined8 *)(pauVar31[8] + 8) = uVar6;
    lVar29 = *(longlong *)pauVar31[8];
    *(undefined8 *)(pauVar31[0x13] + 8) = uVar39;
    *(undefined8 *)(puVar46 + -8) = 0x14173ff09;
    pdb_141c2f360(pauVar31 + 0xc,lVar29 + 0x10,uVar39,param_3);
    auVar54[0] = -(pauVar31[0xc][0] == DAT_142f5c7c0);
    auVar54[1] = -(pauVar31[0xc][1] == UNK_142f5c7c1);
    auVar54[2] = -(pauVar31[0xc][2] == UNK_142f5c7c2);
    auVar54[3] = -(pauVar31[0xc][3] == UNK_142f5c7c3);
    auVar54[4] = -(pauVar31[0xc][4] == UNK_142f5c7c4);
    auVar54[5] = -(pauVar31[0xc][5] == UNK_142f5c7c5);
    auVar54[6] = -(pauVar31[0xc][6] == UNK_142f5c7c6);
    auVar54[7] = -(pauVar31[0xc][7] == UNK_142f5c7c7);
    auVar54[8] = -(pauVar31[0xc][8] == UNK_142f5c7c8);
    auVar54[9] = -(pauVar31[0xc][9] == UNK_142f5c7c9);
    auVar54[10] = -(pauVar31[0xc][10] == UNK_142f5c7ca);
    auVar54[0xb] = -(pauVar31[0xc][0xb] == UNK_142f5c7cb);
    auVar54[0xc] = -(pauVar31[0xc][0xc] == UNK_142f5c7cc);
    auVar54[0xd] = -(pauVar31[0xc][0xd] == UNK_142f5c7cd);
    auVar54[0xe] = -(pauVar31[0xc][0xe] == UNK_142f5c7ce);
    auVar54[0xf] = -(pauVar31[0xc][0xf] == UNK_142f5c7cf);
    uVar39 = *(undefined8 *)pauVar31[0xd];
    puVar47 = puVar46;
    if ((ushort)((ushort)(SUB161(auVar54 >> 7,0) & 1) | (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar54 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar54 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar54 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar54 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar54 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar54 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar54 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar54 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar54 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar54 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar54 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar54 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe | (ushort)(auVar54[0xf] >> 7) << 0xf
                ) != 0xffff) {
      uVar5 = *(undefined8 *)pauVar31[0xc];
      uVar6 = *(undefined8 *)(pauVar31[0xc] + 8);
      *(undefined8 *)(pauVar31[7] + 8) = *(undefined8 *)(pauVar31[0x12] + 8);
      uVar16 = *(undefined8 *)pauVar31[0x12];
      *(undefined8 *)(pauVar31[6] + 8) = *(undefined8 *)(pauVar31[0x11] + 8);
      *(undefined8 *)pauVar31[7] = uVar16;
      uVar16 = *(undefined8 *)(pauVar31[0xd] + 8);
      uVar17 = *(undefined8 *)pauVar31[0xe];
      uVar33 = *(undefined4 *)(pauVar31[0xe] + 8);
      uVar9 = *(undefined4 *)(pauVar31[0xe] + 0xc);
      uVar10 = *(undefined4 *)pauVar31[0xf];
      uVar11 = *(undefined4 *)(pauVar31[0xf] + 4);
      uVar12 = *(undefined4 *)(pauVar31[0xf] + 8);
      uVar13 = *(undefined4 *)(pauVar31[0xf] + 0xc);
      uVar14 = *(undefined4 *)pauVar31[0x10];
      uVar15 = *(undefined4 *)(pauVar31[0x10] + 4);
      uVar18 = *(undefined4 *)(pauVar31[0x10] + 0xc);
      uVar19 = *(undefined4 *)pauVar31[0x11];
      uVar20 = *(undefined4 *)(pauVar31[0x11] + 4);
      *(undefined4 *)(pauVar31[5] + 8) = *(undefined4 *)(pauVar31[0x10] + 8);
      *(undefined4 *)(pauVar31[5] + 0xc) = uVar18;
      *(undefined4 *)pauVar31[6] = uVar19;
      *(undefined4 *)(pauVar31[6] + 4) = uVar20;
      *(undefined4 *)(pauVar31[4] + 8) = uVar12;
      *(undefined4 *)(pauVar31[4] + 0xc) = uVar13;
      *(undefined4 *)pauVar31[5] = uVar14;
      *(undefined4 *)(pauVar31[5] + 4) = uVar15;
      *(undefined4 *)(pauVar31[3] + 8) = uVar33;
      *(undefined4 *)(pauVar31[3] + 0xc) = uVar9;
      *(undefined4 *)pauVar31[4] = uVar10;
      *(undefined4 *)(pauVar31[4] + 4) = uVar11;
      *(undefined8 *)(pauVar31[2] + 8) = uVar16;
      *(undefined8 *)pauVar31[3] = uVar17;
      *(undefined8 *)pauVar31[1] = uVar5;
      *(undefined8 *)(pauVar31[1] + 8) = uVar6;
      *(undefined8 *)pauVar31[2] = uVar39;
      puVar40 = *(undefined1 **)(pauVar31[8] + 8);
      if (puVar40 != (undefined1 *)0x0) {
        puVar47 = puVar40 + 0x38;
        LOCK();
        bVar51 = puVar40[0x38] == '\0';
        if (bVar51) {
          puVar40[0x38] = '\x01';
        }
        UNLOCK();
        if (!bVar51) {
          pauVar31[0x15][0xf] = 1;
          pauVar31[0x15][0xe] = 1;
          *(undefined8 *)(puVar46 + -8) = 0x1417403b0;
          pdb_142dc6be0(puVar47);
        }
        puVar48 = _DAT_143ca8f38;
        if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
          uVar24 = 0;
          cVar23 = puVar40[0x39];
        }
        else {
          pauVar31[0x15][0xf] = 1;
          pauVar31[0x15][0xe] = 1;
          *(undefined8 *)(puVar46 + -8) = 0x1417403c9;
          uVar24 = pdb_142dc79e0();
          uVar24 = uVar24 ^ 1;
          cVar23 = puVar40[0x39];
        }
        if (cVar23 != '\0') {
          *(undefined1 **)pauVar31[0xc] = puVar47;
          pauVar31[0xc][8] = (char)uVar24;
          *(undefined **)(puVar46 + 0x20) = &UNK_14332bae8;
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)(puVar46 + -8) = 0x141740410;
          pdb_142dc8170(&UNK_14332b8d0,0x2b,pauVar31 + 0xc,&UNK_14332b940);
        }
        *(uint *)(pauVar31[0x15] + 8) = uVar24;
        *(undefined1 **)pauVar31[0x14] = puVar47;
        uVar39 = *(undefined8 *)(pauVar31[6] + 8);
        *(undefined8 *)pauVar31[0x11] = *(undefined8 *)pauVar31[6];
        *(undefined8 *)(pauVar31[0x11] + 8) = uVar39;
        uVar39 = *(undefined8 *)(pauVar31[5] + 8);
        *(undefined8 *)pauVar31[0x10] = *(undefined8 *)pauVar31[5];
        *(undefined8 *)(pauVar31[0x10] + 8) = uVar39;
        uVar39 = *(undefined8 *)pauVar31[1];
        uVar5 = *(undefined8 *)(pauVar31[1] + 8);
        uVar33 = *(undefined4 *)pauVar31[2];
        uVar9 = *(undefined4 *)(pauVar31[2] + 4);
        uVar10 = *(undefined4 *)(pauVar31[2] + 8);
        uVar11 = *(undefined4 *)(pauVar31[2] + 0xc);
        uVar12 = *(undefined4 *)pauVar31[3];
        uVar13 = *(undefined4 *)(pauVar31[3] + 4);
        uVar14 = *(undefined4 *)(pauVar31[3] + 8);
        uVar15 = *(undefined4 *)(pauVar31[3] + 0xc);
        uVar18 = *(undefined4 *)(pauVar31[4] + 4);
        uVar19 = *(undefined4 *)(pauVar31[4] + 8);
        uVar20 = *(undefined4 *)(pauVar31[4] + 0xc);
        *(undefined4 *)pauVar31[0xf] = *(undefined4 *)pauVar31[4];
        *(undefined4 *)(pauVar31[0xf] + 4) = uVar18;
        *(undefined4 *)(pauVar31[0xf] + 8) = uVar19;
        *(undefined4 *)(pauVar31[0xf] + 0xc) = uVar20;
        *(undefined4 *)pauVar31[0xe] = uVar12;
        *(undefined4 *)(pauVar31[0xe] + 4) = uVar13;
        *(undefined4 *)(pauVar31[0xe] + 8) = uVar14;
        *(undefined4 *)(pauVar31[0xe] + 0xc) = uVar15;
        *(undefined4 *)pauVar31[0xd] = uVar33;
        *(undefined4 *)(pauVar31[0xd] + 4) = uVar9;
        *(undefined4 *)(pauVar31[0xd] + 8) = uVar10;
        *(undefined4 *)(pauVar31[0xd] + 0xc) = uVar11;
        *(undefined8 *)pauVar31[0xc] = uVar39;
        *(undefined8 *)(pauVar31[0xc] + 8) = uVar5;
        *(undefined8 *)(puVar46 + -8) = 0x141740071;
        pdb_1417b89d0(puVar40 + 0x40,pauVar31 + 0xc);
        unaff_R15 = puVar40 + 0x38;
        if ((pauVar31[0x15][8] == '\0') && ((*puVar48 & 0x7fffffffffffffff) != 0))
        goto code_r0x000141740425;
        goto code_r0x00014174008e;
      }
      uVar33 = (undefined4)CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
      goto code_r0x0001417400b6;
    }
    *(undefined8 *)(puVar46 + -8) = 0x14173ff38;
    pdb_14098a860(pauVar31 + 8);
    uVar38 = *(ulonglong *)pauVar31[0x13];
    if (uVar38 != 0) {
      pbVar32 = *(byte **)(pauVar31[0x13] + 8);
      *(undefined8 *)(puVar46 + -8) = 0x14173ff57;
      pub_1406abac0(pbVar32,uVar38,1);
    }
    lVar49 = *(longlong *)(pauVar31[0x14] + 8);
    *(undefined1 *)(lVar49 + 0x80) = 1;
code_r0x000141740265:
    *(undefined8 *)pauVar31[0xc] = uVar39;
    *(undefined8 *)(puVar47 + -8) = 0x141740271;
    pdb_14007ee60();
    *(undefined8 *)(puVar47 + -8) = 0x141740280;
    pbVar32 = pub_1406abab0(8,8);
    if (pbVar32 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar47 + -8) = 0x141740363;
      pdb_142dc7e11(8,8);
    }
    *(undefined8 *)pbVar32 = uVar39;
    uVar39 = 1;
    puVar34 = &UNK_1430712c0;
code_r0x000141740298:
    *(undefined8 *)*unaff_RSI = uVar39;
    *(byte **)(*unaff_RSI + 8) = pbVar32;
    *(undefined **)unaff_RSI[1] = puVar34;
    uVar21 = 1;
code_r0x0001417402a5:
    *(undefined1 *)(lVar49 + 0x88) = uVar21;
    return unaff_RSI;
  }
  if (lVar29 == 0) {
    pauStack_708 = (undefined1 (*) [16])0x14173914c;
    pdb_140dd76c0(uStack_690[3] + 8);
  }
  plVar26 = *(longlong **)uStack_690[4];
  LOCK();
  *plVar26 = *plVar26 + -1;
  UNLOCK();
  if (*plVar26 == 0) {
    pauStack_708 = (undefined1 (*) [16])0x141739168;
    pdb_140dd78e0(uStack_690 + 4);
  }
  plVar26 = *(longlong **)*uStack_690;
  if (plVar26 != (longlong *)0x0) {
    LOCK();
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (*plVar26 == 0) {
      pauStack_708 = (undefined1 (*) [16])0x14173918c;
      pdb_140c7a240(uStack_690);
    }
  }
code_r0x000141739e0c:
  *(byte **)(param_1[1] + 8) = pbStack_490;
  *(undefined **)param_1[2] = puStack_488;
  *(longlong *)(*param_1 + 8) = lStack_4a0;
  *(undefined1 (**) [16])param_1[1] = pauStack_498;
  *(undefined8 *)*param_1 = 0;
  uVar21 = 1;
code_r0x000141739e30:
  uStack_690[4][10] = uVar21;
  return param_1;
code_r0x00014173f49a:
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar41 + -8) = 0x14173f49f;
  pdb_142dc8570(puVar34);
}

