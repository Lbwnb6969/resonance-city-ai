// VA 0x14083d190, PDB extent 5531 bytes
// system_wall_constructor::construct_elevation_supports::detect_overhang_support_segments
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_elevation_supports/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_elevation_supports::detect_overhang_support_segments
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_elevation_supports/mod.rs
   Extent: 5531 */

void pdb_14083d190(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                  undefined8 *param_4,undefined8 *param_5,undefined8 param_6,undefined8 *param_7,
                  longlong *param_8,longlong *param_9,undefined8 *param_10,undefined8 *param_11,
                  undefined8 *param_12,undefined8 *param_13,undefined1 (*param_14) [16],
                  undefined8 *param_15)

{
  byte *pbVar1;
  longlong lVar2;
  char *pcVar3;
  byte bVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined1 (*pauVar8) [16];
  longlong lVar9;
  code *pcVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined8 uVar14;
  char cVar15;
  byte bVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined1 (**ppauVar20) [16];
  longlong *plVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined1 (**ppauVar25) [16];
  longlong lVar26;
  undefined1 (*pauVar27) [16];
  undefined *puVar28;
  undefined *puVar29;
  longlong lVar30;
  ushort uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  undefined1 (*unaff_R12) [16];
  byte bVar34;
  undefined1 (**ppauVar35) [16];
  undefined1 (**unaff_R15) [16];
  undefined1 (*pauVar36) [16];
  bool bVar37;
  bool bVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  char unaff_XMM8_Ba;
  char unaff_XMM8_Bb;
  char unaff_XMM8_Bc;
  char unaff_XMM8_Bd;
  char unaff_XMM8_Be;
  char unaff_XMM8_Bf;
  char unaff_XMM8_Bg;
  char unaff_XMM8_Bh;
  char unaff_XMM8_Bi;
  char unaff_XMM8_Bj;
  char unaff_XMM8_Bk;
  char unaff_XMM8_Bl;
  char unaff_XMM8_Bm;
  char unaff_XMM8_Bn;
  char unaff_XMM8_Bo;
  char unaff_XMM8_Bp;
  longlong lStack_678;
  ulonglong uStack_670;
  undefined8 uStack_668;
  longlong lStack_660;
  longlong lStack_658;
  undefined1 (**ppauStack_650) [16];
  undefined1 (*pauStack_478) [16];
  undefined1 (*pauStack_470) [16];
  undefined1 (*pauStack_468) [16];
  undefined1 (*pauStack_460) [16];
  undefined1 uStack_458;
  undefined7 uStack_457;
  undefined1 uStack_450;
  undefined7 uStack_44f;
  undefined1 uStack_448;
  undefined1 (*pauStack_270) [16];
  longlong lStack_268;
  longlong lStack_260;
  undefined1 (*pauStack_258) [16];
  longlong lStack_250;
  longlong lStack_248;
  ulonglong *puStack_230;
  byte *pbStack_228;
  undefined8 uStack_220;
  longlong lStack_218;
  byte *pbStack_210;
  undefined8 uStack_200;
  undefined4 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined4 *puStack_1e8;
  undefined4 *puStack_1e0;
  undefined4 *puStack_1d8;
  undefined4 *puStack_1d0;
  longlong lStack_1c8;
  longlong lStack_1c0;
  ulonglong *puStack_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  longlong lStack_178;
  ulonglong uStack_170;
  undefined8 uStack_168;
  longlong lStack_160;
  longlong lStack_158;
  ulonglong uStack_150;
  longlong lStack_148;
  ulonglong uStack_140;
  undefined8 uStack_138;
  longlong lStack_130;
  longlong lStack_128;
  undefined1 (**ppauStack_120) [16];
  longlong alStack_118 [2];
  undefined8 uStack_108;
  undefined1 (*pauStack_100) [16];
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 (**ppauStack_c8) [16];
  undefined8 uStack_c0;
  longlong *plStack_b8;
  uint uStack_ac;
  undefined1 (**ppauStack_a8) [16];
  undefined1 (**ppauStack_a0) [16];
  undefined1 (*pauStack_98) [16];
  longlong *plStack_90;
  undefined1 (**ppauStack_88) [16];
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  plStack_90 = param_4;
  cVar15 = pdb_140e94b40();
  if (cVar15 == '\0') {
    ppauStack_c8 = (undefined1 (**) [16])0x0;
  }
  else {
    unaff_R12 = (undefined1 (*) [16])&UNK_14300ad23;
    unaff_R15 = (undefined1 (**) [16])0x57;
    uVar23 = 0x57;
    lVar18 = pdb_14083ea40(&UNK_14300ad23);
    if (lVar18 == 1) {
      if (0x57 < uVar23) {
LAB_14083e1f9:
        pdb_142dc8070(&UNK_14300ad23,0x57,0);
LAB_14083e219:
        pdb_142dc8070(&UNK_14300ad23,0x57);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      unaff_R12 = (undefined1 (*) [16])&UNK_14300ad23;
      uVar19 = pdb_14083ea40(&UNK_14300ad23);
      if ((uVar19 & 1) != 0) {
        if (0x57 < uVar23 + 2) goto LAB_14083e219;
        unaff_R15 = (undefined1 (**) [16])(0x55 - uVar23);
        unaff_R12 = (undefined1 (*) [16])(&UNK_14300ad25 + uVar23);
      }
    }
    puVar28 = &UNK_14300abb7;
    ppauVar35 = (undefined1 (**) [16])&UNK_14300ab70;
    do {
      bVar16 = puVar28[-1];
      uVar17 = (uint)(char)bVar16;
      if ((char)bVar16 < '\0') {
        bVar34 = puVar28[-2];
        if ((char)bVar34 < -0x40) {
          bVar4 = puVar28[-3];
          if ((char)bVar4 < -0x40) {
            pbVar1 = puVar28 + -4;
            puVar28 = puVar28 + -4;
            uVar17 = bVar4 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar28 = puVar28 + -3;
            uVar17 = bVar4 & 0xf;
          }
          uVar17 = bVar34 & 0x3f | uVar17 << 6;
        }
        else {
          puVar28 = puVar28 + -2;
          uVar17 = bVar34 & 0x1f;
        }
        uVar17 = (uint)(bVar16 & 0x3f) | uVar17 << 6;
        if (uVar17 != 0x5c) goto LAB_14083d2d4;
LAB_14083d2ed:
        puVar29 = puVar28 + -0x14300ab6f;
        if (puVar29 < (undefined *)0x48) {
          pauVar27 = (undefined1 (*) [16])(0x47 - (longlong)puVar29);
          ppauVar35 = (undefined1 (**) [16])(puVar28 + 1);
          goto LAB_14083d30f;
        }
        pdb_142dc8070(&UNK_14300ab70,0x47,puVar29,0x47,&UNK_14300ade0);
        goto LAB_14083e1f9;
      }
      puVar28 = puVar28 + -1;
      if (uVar17 == 0x5c) goto LAB_14083d2ed;
LAB_14083d2d4:
      if (uVar17 == 0x2f) goto LAB_14083d2ed;
    } while (puVar28 != &UNK_14300ab70);
    pauVar27 = (undefined1 (*) [16])0x47;
LAB_14083d30f:
    ppauVar20 = (undefined1 (**) [16])pdb_140e97000();
    if (*(char *)(ppauVar20 + 0xd) != '\x01') {
      ppauVar25 = (undefined1 (**) [16])0x0;
      ppauVar20 = (undefined1 (**) [16])pdb_142dd9610(ppauVar20);
      pauVar36 = param_3;
      if (ppauVar20 == (undefined1 (**) [16])0x0) goto LAB_14083e159;
    }
    if (*ppauVar20 != (undefined1 (*) [16])0x0) goto LAB_14083e125;
    *ppauVar20 = (undefined1 (*) [16])0xffffffffffffffff;
    ppauStack_88 = ppauVar20;
    uStack_c0 = pdb_140e94f10(ppauVar20 + 1,unaff_R12,unaff_R15,ppauVar35,pauVar27,1,0);
    *ppauStack_88 = (undefined1 (*) [16])(**ppauStack_88 + 1);
    ppauStack_c8 = (undefined1 (**) [16])0x1;
  }
  puVar5 = (ulonglong *)*param_12;
  lVar18 = param_12[1];
  uVar23 = *puVar5;
  uVar32 = 0;
  uVar19 = uVar23 - *(ulonglong *)(lVar18 + 0x18);
  if (uVar23 < *(ulonglong *)(lVar18 + 0x18)) {
    uVar19 = uVar32;
  }
  uVar22 = uVar23 - *(ulonglong *)(lVar18 + 0x38);
  if (uVar23 < *(ulonglong *)(lVar18 + 0x38)) {
    uVar22 = uVar32;
  }
  uVar23 = *(ulonglong *)(lVar18 + 0x30);
  uVar24 = uVar23 - uVar22;
  if (uVar22 > uVar23) {
    uVar24 = uVar32;
  }
  uVar6 = *(ulonglong *)(lVar18 + 0x10);
  uVar33 = uVar6 - uVar19;
  if (uVar19 > uVar6) {
    uVar33 = uVar32;
  }
  uVar32 = *(ulonglong *)(lVar18 + 0x40);
  *puVar5 = uVar32 - (uVar33 + uVar24);
  if (uVar19 <= uVar6 && uVar6 - uVar19 != 0 || uVar22 <= uVar23 && uVar23 - uVar22 != 0) {
    *puVar5 = uVar32;
    (*param_14)[0] = 1;
  }
  else {
    puVar5 = (ulonglong *)*param_13;
    lVar18 = param_13[1];
    uVar23 = *puVar5;
    uVar32 = 0;
    uVar19 = uVar23 - *(ulonglong *)(lVar18 + 0x18);
    if (uVar23 < *(ulonglong *)(lVar18 + 0x18)) {
      uVar19 = uVar32;
    }
    uVar22 = uVar23 - *(ulonglong *)(lVar18 + 0x38);
    if (uVar23 < *(ulonglong *)(lVar18 + 0x38)) {
      uVar22 = uVar32;
    }
    uVar23 = *(ulonglong *)(lVar18 + 0x30);
    uVar24 = uVar23 - uVar22;
    if (uVar23 < uVar22) {
      uVar24 = uVar32;
    }
    uVar6 = *(ulonglong *)(lVar18 + 0x10);
    uVar33 = uVar6 - uVar19;
    if (uVar6 < uVar19) {
      uVar33 = uVar32;
    }
    uVar32 = *(ulonglong *)(lVar18 + 0x40);
    *puVar5 = uVar32 - (uVar33 + uVar24);
    if ((uVar6 < uVar19 || uVar6 - uVar19 == 0) && (uVar23 < uVar22 || uVar23 - uVar22 == 0)) {
      pauVar27 = *(undefined1 (**) [16])*param_1;
      puVar5 = *(ulonglong **)((longlong)*param_1 + 8);
      uVar23 = *(ulonglong *)*pauVar27;
      ppauVar20 = (undefined1 (**) [16])0x0;
      ppauVar35 = (undefined1 (**) [16])(uVar23 - puVar5[3]);
      if (uVar23 < puVar5[3]) {
        ppauVar35 = ppauVar20;
      }
      ppauVar25 = (undefined1 (**) [16])(uVar23 - puVar5[7]);
      if (uVar23 < puVar5[7]) {
        ppauVar25 = ppauVar20;
      }
      param_1 = (undefined1 (*) [16])((longlong)ppauVar35 * 0x10 + puVar5[1]);
      unaff_R15 = (undefined1 (**) [16])((longlong)puVar5[2] - (longlong)ppauVar35);
      if ((undefined1 (**) [16])puVar5[2] < ppauVar35) {
        param_1 = (undefined1 (*) [16])0x8;
        unaff_R15 = ppauVar20;
      }
      unaff_R12 = (undefined1 (*) [16])((longlong)ppauVar25 * 0x10 + puVar5[5]);
      ppauVar35 = (undefined1 (**) [16])((longlong)puVar5[6] - (longlong)ppauVar25);
      if ((undefined1 (**) [16])puVar5[6] < ppauVar25) {
        unaff_R12 = (undefined1 (*) [16])0x8;
        ppauVar35 = ppauVar20;
      }
      pauVar36 = (undefined1 (*) [16])((longlong)unaff_R15 + (longlong)ppauVar35);
      *(ulonglong *)*pauVar27 = puVar5[8] - (longlong)pauVar36;
      ppauStack_a0 = ppauStack_c8;
      pauStack_98 = param_3;
      ppauStack_88 = ppauStack_c8;
      plVar21 = (longlong *)pdb_140f3bda0();
      if ((char)plVar21[2] != '\x01') goto LAB_14083e165;
      lStack_658 = *plVar21;
      ppauVar25 = (undefined1 (**) [16])plVar21[1];
      goto LAB_14083d4d5;
    }
    *puVar5 = uVar32;
    (*param_14)[0] = 1;
  }
  pauVar27 = param_14;
  if (ppauStack_c8 != (undefined1 (**) [16])0x0) {
LAB_14083dfc2:
    ppauVar35 = ppauStack_c8;
    plVar21 = (longlong *)pdb_140e97000();
    if ((char)plVar21[0xd] != '\x01') goto LAB_14083e131;
    while (*plVar21 != 0) {
LAB_14083e125:
      while( true ) {
        plVar21 = (longlong *)pdb_142dc8090(&UNK_1433079b0);
LAB_14083e131:
        ppauVar25 = (undefined1 (**) [16])0x0;
        plVar21 = (longlong *)pdb_142dd9610(plVar21);
        pauVar36 = param_3;
        if (plVar21 != (longlong *)0x0) break;
LAB_14083e159:
        do {
          plVar21 = (longlong *)pdb_142dc7890(&UNK_143307940);
LAB_14083e165:
          ppauStack_a0 = ppauStack_88;
          plStack_b8 = plVar21;
          lStack_658 = pdb_140f4fd10();
          *plStack_b8 = lStack_658;
          plStack_b8[1] = (longlong)ppauVar25;
          *(undefined1 *)(plStack_b8 + 2) = 1;
          plVar21 = plStack_b8;
LAB_14083d4d5:
          pauStack_468 = param_1 + (longlong)unaff_R15;
          *plVar21 = lStack_658 + 1;
          lVar9 = _UNK_14300ab08;
          uVar14 = _DAT_14300ab00;
          uVar19 = _UNK_14300aaf8;
          lVar30 = _DAT_14300aaf0;
          uStack_668 = _DAT_14300ab00;
          lStack_660 = _UNK_14300ab08;
          lStack_678 = _DAT_14300aaf0;
          uStack_670 = _UNK_14300aaf8;
          uStack_458 = SUB81(unaff_R12 + (longlong)ppauVar35,0);
          uStack_457 = (undefined7)((ulonglong)(unaff_R12 + (longlong)ppauVar35) >> 8);
          uStack_450 = SUB81(pauVar36,0);
          uStack_44f = (undefined7)((ulonglong)pauVar36 >> 8);
          ppauStack_650 = ppauVar25;
          pauStack_478 = pauVar27;
          pauStack_470 = param_1;
          pauStack_460 = unaff_R12;
          pdb_1414058c0(&lStack_678,&pauStack_478);
          ppauVar35 = ppauStack_88;
          lStack_148 = lStack_678;
          uStack_140 = uStack_670;
          uStack_138 = uStack_668;
          lStack_130 = lStack_660;
          lStack_128 = lStack_658;
          ppauStack_120 = ppauStack_650;
          pauVar27 = *(undefined1 (**) [16])*param_2;
          lVar18 = *(longlong *)(*param_2 + 8);
          uVar23 = *(ulonglong *)*pauVar27;
          uVar22 = 0;
          uVar32 = uVar23 - *(ulonglong *)(lVar18 + 0x18);
          if (uVar23 < *(ulonglong *)(lVar18 + 0x18)) {
            uVar32 = uVar22;
          }
          uVar24 = uVar23 - *(ulonglong *)(lVar18 + 0x38);
          if (uVar23 < *(ulonglong *)(lVar18 + 0x38)) {
            uVar24 = uVar22;
          }
          lVar26 = uVar32 * 0x10 + *(longlong *)(lVar18 + 8);
          uVar23 = *(ulonglong *)(lVar18 + 0x10) - uVar32;
          if (*(ulonglong *)(lVar18 + 0x10) < uVar32) {
            lVar26 = 8;
            uVar23 = uVar22;
          }
          pauVar36 = (undefined1 (*) [16])(uVar24 * 0x10 + *(longlong *)(lVar18 + 0x28));
          uVar32 = *(ulonglong *)(lVar18 + 0x30) - uVar24;
          if (*(ulonglong *)(lVar18 + 0x30) < uVar24) {
            pauVar36 = (undefined1 (*) [16])0x8;
            uVar32 = uVar22;
          }
          lVar2 = uVar32 + uVar23;
          *(longlong *)*pauVar27 = *(longlong *)(lVar18 + 0x40) - lVar2;
          ppauStack_a8 = ppauStack_88;
          plVar21 = (longlong *)pdb_140f3bda0();
          if ((char)plVar21[2] == '\x01') {
            lStack_658 = *plVar21;
            uVar24 = plVar21[1];
          }
          else {
            ppauStack_a8 = ppauVar35;
            lStack_658 = pdb_140f4fd10();
            *plVar21 = lStack_658;
            plVar21[1] = uVar24;
            *(undefined1 *)(plVar21 + 2) = 1;
          }
          pauStack_468 = (undefined1 (*) [16])(uVar23 * 0x10 + lVar26);
          *plVar21 = lStack_658 + 1;
          uStack_668 = uVar14;
          lStack_660 = lVar9;
          lStack_678 = lVar30;
          uStack_670 = uVar19;
          uStack_458 = SUB81(pauVar36 + uVar32,0);
          uStack_457 = (undefined7)((ulonglong)(pauVar36 + uVar32) >> 8);
          uStack_450 = (undefined1)lVar2;
          uStack_44f = (undefined7)((ulonglong)lVar2 >> 8);
          ppauStack_650 = (undefined1 (**) [16])uVar24;
          pauStack_478 = pauVar27;
          pauStack_470 = (undefined1 (*) [16])lVar26;
          pauStack_460 = pauVar36;
          pdb_1414058c0(&lStack_678,&pauStack_478);
          uStack_168 = uStack_668;
          lStack_160 = lStack_660;
          lStack_178 = lStack_678;
          uStack_170 = uStack_670;
          lStack_158 = lStack_658;
          uStack_150 = (ulonglong)ppauStack_650;
          bVar37 = lStack_130 != 0;
          bVar16 = (*param_14)[0];
          bVar38 = lStack_660 != 0;
          pdb_140a84d70(&pauStack_478);
          **(undefined4 **)pauStack_98[1] = *(undefined4 *)(pauStack_98[1] + 0xc);
          param_3 = *(undefined1 (**) [16])(*(longlong *)*pauStack_98 + 8);
          lVar18 = *(longlong *)(*(longlong *)*pauStack_98 + 0x10);
          puVar28 = *param_3;
          bVar34 = 0;
          param_1 = (undefined1 (*) [16])&puStack_230;
          unaff_R15 = &pauStack_478;
          unaff_R12 = (undefined1 (*) [16])alStack_118;
          for (; param_3 != (undefined1 (*) [16])(puVar28 + lVar18 * 8);
              param_3 = (undefined1 (*) [16])(*param_3 + 8)) {
            pdb_14147fe80(param_1,param_3);
            if (puStack_230 != (ulonglong *)0x0) {
              puStack_1b8 = puStack_230;
              uStack_1b0 = SUB84(pbStack_228,0);
              uStack_1ac = (undefined4)((ulonglong)pbStack_228 >> 0x20);
              uStack_1a8 = (undefined4)uStack_220;
              uStack_1a4 = (undefined4)((ulonglong)uStack_220 >> 0x20);
              pdb_140a83f50(unaff_R15,pbStack_228);
              puVar5 = puStack_1b8;
              pdb_140e9a350(puStack_1b8);
              pdb_140e9a350((ulonglong)puVar5 | 1);
              LOCK();
              uVar23 = *puVar5;
              *puVar5 = *puVar5 - 0x10;
              UNLOCK();
              if ((uVar23 & 0xfffffffffffffff2) == 0x12) {
                pdb_142dbbf50(puVar5);
              }
              lVar30 = CONCAT44(uStack_1a4,uStack_1a8);
              uStack_1a8 = 0;
              uStack_1a4 = 0;
              alStack_118[0] = lVar30 + -0x10;
              LOCK();
              plVar21 = (longlong *)(lVar30 + -0x10);
              *plVar21 = *plVar21 + -1;
              UNLOCK();
              if (*plVar21 == 0) {
                pdb_140c7ba10(unaff_R12);
              }
              bVar34 = 1;
            }
          }
          pub_142e32760(&lStack_678,&pauStack_478,0x200);
          (*param_14)[0] = 0;
          param_2 = (undefined1 (*) [16])
                    CONCAT71((int7)((ulonglong)lVar26 >> 8),(bVar37 || bVar38) | bVar16 | bVar34);
          if (((!bVar37 && !bVar38) && (bVar16 & 1) == 0) && bVar34 == 0) {
            if (uStack_170 != 0) {
              uVar23 = uStack_170 * 8 + 0x17 & 0xfffffffffffffff0;
              uVar19 = uStack_170 + uVar23 + 0x11;
              if (uVar19 != 0) {
                pub_1406abac0((byte *)(lStack_178 - uVar23),uVar19,0x10);
              }
            }
            if (uStack_140 != 0) {
              uVar23 = uStack_140 * 8 + 0x17 & 0xfffffffffffffff0;
              uVar19 = uStack_140 + uVar23 + 0x11;
              if (uVar19 != 0) {
                pub_1406abac0((byte *)(lStack_148 - uVar23),uVar19,0x10);
              }
            }
            pauVar27 = (undefined1 (*) [16])(puVar28 + lVar18 * 8);
            if (ppauStack_c8 == (undefined1 (**) [16])0x0) {
              return;
            }
            goto LAB_14083dfc2;
          }
          puVar7 = (undefined8 *)*param_5;
          pdb_1414800d0(&puStack_230,puVar7,param_6);
          unaff_R12 = (undefined1 (*) [16])*puVar7;
          auVar39 = *unaff_R12;
          ppauVar35 = (undefined1 (**) [16])
                      (ulonglong)
                      ~(uint)(ushort)((ushort)(SUB161(auVar39 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar39[0xf] >> 7) << 0xf);
          uStack_f0 = *param_7;
          plStack_b8 = (longlong *)
                       CONCAT44(plStack_b8._4_4_,*(undefined4 *)((longlong)param_11 + 0x1c));
          uStack_200 = *param_11;
          puStack_1f8 = (undefined4 *)param_11[2];
          uStack_d8 = *(undefined4 *)((longlong)param_10 + 0x1c);
          uStack_1f0 = *param_10;
          puStack_1e8 = (undefined4 *)param_10[2];
          pauStack_98 = (undefined1 (*) [16])*plStack_90;
          uStack_d0 = *(undefined4 *)((longlong)param_9 + 0x1c);
          lStack_e8 = *param_9;
          puStack_1d8 = (undefined4 *)param_9[2];
          uStack_cc = *(undefined4 *)((longlong)param_8 + 0x1c);
          lStack_e0 = *param_8;
          puStack_1d0 = (undefined4 *)param_8[2];
          uStack_d4 = *(undefined4 *)((longlong)param_15 + 0x1c);
          ppauStack_88 = (undefined1 (**) [16])*param_15;
          puStack_1e0 = (undefined4 *)param_15[2];
          iVar13 = -(uint)(CONCAT13(unaff_XMM8_Bd,
                                    CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba)))
                          == CONCAT13(unaff_XMM8_Bd,
                                      CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba)))
                          );
          unaff_XMM8_Ba = (char)iVar13;
          unaff_XMM8_Bb = (char)((uint)iVar13 >> 8);
          unaff_XMM8_Bc = (char)((uint)iVar13 >> 0x10);
          unaff_XMM8_Bd = (char)((uint)iVar13 >> 0x18);
          iVar13 = -(uint)(CONCAT13(unaff_XMM8_Bh,
                                    CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be)))
                          == CONCAT13(unaff_XMM8_Bh,
                                      CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be)))
                          );
          unaff_XMM8_Be = (char)iVar13;
          unaff_XMM8_Bf = (char)((uint)iVar13 >> 8);
          unaff_XMM8_Bg = (char)((uint)iVar13 >> 0x10);
          unaff_XMM8_Bh = (char)((uint)iVar13 >> 0x18);
          iVar13 = -(uint)(CONCAT13(unaff_XMM8_Bl,
                                    CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi)))
                          == CONCAT13(unaff_XMM8_Bl,
                                      CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi)))
                          );
          unaff_XMM8_Bi = (char)iVar13;
          unaff_XMM8_Bj = (char)((uint)iVar13 >> 8);
          unaff_XMM8_Bk = (char)((uint)iVar13 >> 0x10);
          unaff_XMM8_Bl = (char)((uint)iVar13 >> 0x18);
          iVar13 = -(uint)(CONCAT13(unaff_XMM8_Bp,
                                    CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm)))
                          == CONCAT13(unaff_XMM8_Bp,
                                      CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm)))
                          );
          unaff_XMM8_Bm = (char)iVar13;
          unaff_XMM8_Bn = (char)((uint)iVar13 >> 8);
          unaff_XMM8_Bo = (char)((uint)iVar13 >> 0x10);
          unaff_XMM8_Bp = (char)((uint)iVar13 >> 0x18);
          plStack_90 = (longlong *)puVar7[3];
          pauVar27 = unaff_R12 + 1;
          lStack_1c8 = lStack_e8 + 0x20;
          lStack_1c0 = lStack_e0 + 0x20;
          puStack_f8 = puVar7;
LAB_14083d99e:
          if (plStack_90 != (undefined8 *)0x0) {
            if ((short)ppauVar35 == 0) {
              do {
                auVar39 = *pauVar27;
                unaff_R12 = unaff_R12 + -0x2b0;
                pauVar27 = pauVar27 + 1;
                uVar17 = (ushort)((ushort)(SUB161(auVar39 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar39[0xf] >> 7) << 0xf) ^ 0xffff;
                ppauVar35 = (undefined1 (**) [16])(ulonglong)uVar17;
              } while (uVar17 == 0);
            }
            uVar12 = (uint)ppauVar35;
            uVar17 = 0;
            for (uVar11 = uVar12; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
              uVar17 = uVar17 + 1;
            }
            uVar23 = (ulonglong)uVar17;
            ppauVar35 = (undefined1 (**) [16])(ulonglong)(uVar12 - 1 & uVar12);
            plStack_90 = (longlong *)((longlong)plStack_90 + -1);
            unaff_R15 = (undefined1 (**) [16])(unaff_R12[uVar23 * -0x2b + -0x2b] + 8);
            param_3 = *(undefined1 (**) [16])unaff_R12[uVar23 * -0x2b + -0x2b];
            pauStack_100 = param_3;
            if ((*(float *)(unaff_R12[uVar23 * -0x2b + -3] + 0xc) != 0.0) ||
               (NAN(*(float *)(unaff_R12[uVar23 * -0x2b + -3] + 0xc)))) {
              if (lStack_130 != 0) {
                uVar19 = pdb_1400af0a0(&lStack_128,&pauStack_100);
                bVar16 = (byte)(uVar19 >> 0x39);
                auVar39 = ZEXT216(CONCAT11(bVar16,bVar16));
                auVar39 = pshuflw(auVar39,auVar39,0);
                lVar18 = 0;
                while( true ) {
                  uVar19 = uVar19 & uStack_140;
                  pcVar3 = (char *)(lStack_148 + uVar19);
                  auVar42[0] = -(*pcVar3 == auVar39[0]);
                  auVar42[1] = -(pcVar3[1] == auVar39[1]);
                  auVar42[2] = -(pcVar3[2] == auVar39[2]);
                  auVar42[3] = -(pcVar3[3] == auVar39[3]);
                  auVar42[4] = -(pcVar3[4] == auVar39[4]);
                  auVar42[5] = -(pcVar3[5] == auVar39[5]);
                  auVar42[6] = -(pcVar3[6] == auVar39[6]);
                  auVar42[7] = -(pcVar3[7] == auVar39[7]);
                  auVar42[8] = -(pcVar3[8] == auVar39[0]);
                  auVar42[9] = -(pcVar3[9] == auVar39[1]);
                  auVar42[10] = -(pcVar3[10] == auVar39[2]);
                  auVar42[0xb] = -(pcVar3[0xb] == auVar39[3]);
                  auVar42[0xc] = -(pcVar3[0xc] == auVar39[4]);
                  auVar42[0xd] = -(pcVar3[0xd] == auVar39[5]);
                  auVar42[0xe] = -(pcVar3[0xe] == auVar39[6]);
                  auVar42[0xf] = -(pcVar3[0xf] == auVar39[7]);
                  uVar31 = (ushort)(SUB161(auVar42 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe |
                           (ushort)(auVar42[0xf] >> 7) << 0xf;
                  uVar17 = (uint)uVar31;
                  while (uVar31 != 0) {
                    uVar11 = 0;
                    for (uVar12 = uVar17; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
                      uVar11 = uVar11 + 1;
                    }
                    uVar32 = uVar11 + uVar19 & uStack_140;
                    uVar22 = CONCAT71((int7)(uVar32 * 8 >> 8),1);
                    if (param_3 == *(undefined1 (**) [16])(lStack_148 + uVar32 * -8 + -8))
                    goto LAB_14083dbe3;
                    uVar31 = (ushort)(uVar17 - 1) & (ushort)uVar17;
                    uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar31);
                  }
                  auVar40[0] = -(*pcVar3 == unaff_XMM8_Ba);
                  auVar40[1] = -(pcVar3[1] == unaff_XMM8_Bb);
                  auVar40[2] = -(pcVar3[2] == unaff_XMM8_Bc);
                  auVar40[3] = -(pcVar3[3] == unaff_XMM8_Bd);
                  auVar40[4] = -(pcVar3[4] == unaff_XMM8_Be);
                  auVar40[5] = -(pcVar3[5] == unaff_XMM8_Bf);
                  auVar40[6] = -(pcVar3[6] == unaff_XMM8_Bg);
                  auVar40[7] = -(pcVar3[7] == unaff_XMM8_Bh);
                  auVar40[8] = -(pcVar3[8] == unaff_XMM8_Bi);
                  auVar40[9] = -(pcVar3[9] == unaff_XMM8_Bj);
                  auVar40[10] = -(pcVar3[10] == unaff_XMM8_Bk);
                  auVar40[0xb] = -(pcVar3[0xb] == unaff_XMM8_Bl);
                  auVar40[0xc] = -(pcVar3[0xc] == unaff_XMM8_Bm);
                  auVar40[0xd] = -(pcVar3[0xd] == unaff_XMM8_Bn);
                  auVar40[0xe] = -(pcVar3[0xe] == unaff_XMM8_Bo);
                  auVar40[0xf] = -(pcVar3[0xf] == unaff_XMM8_Bp);
                  if ((((((((((((((((SUB161(auVar40 >> 7,0) & 1) != 0 ||
                                   (SUB161(auVar40 >> 0xf,0) & 1) != 0) ||
                                  (SUB161(auVar40 >> 0x17,0) & 1) != 0) ||
                                 (SUB161(auVar40 >> 0x1f,0) & 1) != 0) ||
                                (SUB161(auVar40 >> 0x27,0) & 1) != 0) ||
                               (SUB161(auVar40 >> 0x2f,0) & 1) != 0) ||
                              (SUB161(auVar40 >> 0x37,0) & 1) != 0) ||
                             (SUB161(auVar40 >> 0x3f,0) & 1) != 0) ||
                            (SUB161(auVar40 >> 0x47,0) & 1) != 0) ||
                           (SUB161(auVar40 >> 0x4f,0) & 1) != 0) ||
                          (SUB161(auVar40 >> 0x57,0) & 1) != 0) ||
                         (SUB161(auVar40 >> 0x5f,0) & 1) != 0) ||
                        (SUB161(auVar40 >> 0x67,0) & 1) != 0) ||
                       (SUB161(auVar40 >> 0x6f,0) & 1) != 0) || (SUB161(auVar40 >> 0x77,0) & 1) != 0
                      ) || auVar40[0xf] < '\0') break;
                  uVar19 = uVar19 + lVar18 + 0x10;
                  lVar18 = lVar18 + 0x10;
                }
              }
              uVar22 = 0;
LAB_14083dbe3:
              if (lStack_160 == 0) {
                param_1 = (undefined1 (*) [16])0x0;
LAB_14083dcb3:
                cVar15 = (char)uVar22;
                param_2 = unaff_R12 + uVar23 * -0x2b;
                uVar17 = *(uint *)param_2[-5];
              }
              else {
                uStack_ac = (uint)uVar22;
                uVar19 = pdb_1400af0a0(&lStack_158,&pauStack_100);
                bVar16 = (byte)(uVar19 >> 0x39);
                auVar39 = ZEXT216(CONCAT11(bVar16,bVar16));
                auVar39 = pshuflw(auVar39,auVar39,0);
                lVar18 = 0;
                while( true ) {
                  uVar19 = uVar19 & uStack_170;
                  pcVar3 = (char *)(lStack_178 + uVar19);
                  auVar43[0] = -(*pcVar3 == auVar39[0]);
                  auVar43[1] = -(pcVar3[1] == auVar39[1]);
                  auVar43[2] = -(pcVar3[2] == auVar39[2]);
                  auVar43[3] = -(pcVar3[3] == auVar39[3]);
                  auVar43[4] = -(pcVar3[4] == auVar39[4]);
                  auVar43[5] = -(pcVar3[5] == auVar39[5]);
                  auVar43[6] = -(pcVar3[6] == auVar39[6]);
                  auVar43[7] = -(pcVar3[7] == auVar39[7]);
                  auVar43[8] = -(pcVar3[8] == auVar39[0]);
                  auVar43[9] = -(pcVar3[9] == auVar39[1]);
                  auVar43[10] = -(pcVar3[10] == auVar39[2]);
                  auVar43[0xb] = -(pcVar3[0xb] == auVar39[3]);
                  auVar43[0xc] = -(pcVar3[0xc] == auVar39[4]);
                  auVar43[0xd] = -(pcVar3[0xd] == auVar39[5]);
                  auVar43[0xe] = -(pcVar3[0xe] == auVar39[6]);
                  auVar43[0xf] = -(pcVar3[0xf] == auVar39[7]);
                  uVar31 = (ushort)(SUB161(auVar43 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                           (ushort)(auVar43[0xf] >> 7) << 0xf;
                  uVar17 = (uint)uVar31;
                  while (uVar31 != 0) {
                    uVar11 = 0;
                    for (uVar12 = uVar17; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
                      uVar11 = uVar11 + 1;
                    }
                    param_1 = (undefined1 (*) [16])CONCAT71((int7)((ulonglong)param_1 >> 8),1);
                    uVar22 = (ulonglong)uStack_ac;
                    if (param_3 ==
                        *(undefined1 (**) [16])
                         (lStack_178 + (uVar11 + uVar19 & uStack_170) * -8 + -8))
                    goto LAB_14083dcb3;
                    uVar31 = (ushort)(uVar17 - 1) & (ushort)uVar17;
                    uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar31);
                  }
                  auVar41[0] = -(*pcVar3 == unaff_XMM8_Ba);
                  auVar41[1] = -(pcVar3[1] == unaff_XMM8_Bb);
                  auVar41[2] = -(pcVar3[2] == unaff_XMM8_Bc);
                  auVar41[3] = -(pcVar3[3] == unaff_XMM8_Bd);
                  auVar41[4] = -(pcVar3[4] == unaff_XMM8_Be);
                  auVar41[5] = -(pcVar3[5] == unaff_XMM8_Bf);
                  auVar41[6] = -(pcVar3[6] == unaff_XMM8_Bg);
                  auVar41[7] = -(pcVar3[7] == unaff_XMM8_Bh);
                  auVar41[8] = -(pcVar3[8] == unaff_XMM8_Bi);
                  auVar41[9] = -(pcVar3[9] == unaff_XMM8_Bj);
                  auVar41[10] = -(pcVar3[10] == unaff_XMM8_Bk);
                  auVar41[0xb] = -(pcVar3[0xb] == unaff_XMM8_Bl);
                  auVar41[0xc] = -(pcVar3[0xc] == unaff_XMM8_Bm);
                  auVar41[0xd] = -(pcVar3[0xd] == unaff_XMM8_Bn);
                  auVar41[0xe] = -(pcVar3[0xe] == unaff_XMM8_Bo);
                  auVar41[0xf] = -(pcVar3[0xf] == unaff_XMM8_Bp);
                  if ((((((((((((((((SUB161(auVar41 >> 7,0) & 1) != 0 ||
                                   (SUB161(auVar41 >> 0xf,0) & 1) != 0) ||
                                  (SUB161(auVar41 >> 0x17,0) & 1) != 0) ||
                                 (SUB161(auVar41 >> 0x1f,0) & 1) != 0) ||
                                (SUB161(auVar41 >> 0x27,0) & 1) != 0) ||
                               (SUB161(auVar41 >> 0x2f,0) & 1) != 0) ||
                              (SUB161(auVar41 >> 0x37,0) & 1) != 0) ||
                             (SUB161(auVar41 >> 0x3f,0) & 1) != 0) ||
                            (SUB161(auVar41 >> 0x47,0) & 1) != 0) ||
                           (SUB161(auVar41 >> 0x4f,0) & 1) != 0) ||
                          (SUB161(auVar41 >> 0x57,0) & 1) != 0) ||
                         (SUB161(auVar41 >> 0x5f,0) & 1) != 0) ||
                        (SUB161(auVar41 >> 0x67,0) & 1) != 0) ||
                       (SUB161(auVar41 >> 0x6f,0) & 1) != 0) || (SUB161(auVar41 >> 0x77,0) & 1) != 0
                      ) || auVar41[0xf] < '\0') break;
                  uVar19 = uVar19 + lVar18 + 0x10;
                  lVar18 = lVar18 + 0x10;
                }
                param_1 = (undefined1 (*) [16])0x0;
                cVar15 = (char)uStack_ac;
                param_2 = unaff_R12 + uVar23 * -0x2b;
                uVar17 = *(uint *)param_2[-5];
              }
              if (uVar17 < 2) {
                puStack_1b8 = *(ulonglong **)unaff_R12[uVar23 * -0x2b + -5];
                uStack_1b0 = (undefined4)*(undefined8 *)(unaff_R12[uVar23 * -0x2b + -5] + 8);
                uStack_1ac = (undefined4)*(undefined8 *)(unaff_R12[uVar23 * -0x2b + -5] + 0xc);
                uStack_1a8 = (undefined4)
                             ((ulonglong)*(undefined8 *)(unaff_R12[uVar23 * -0x2b + -5] + 0xc) >>
                             0x20);
                uStack_1a4 = (undefined4)*(undefined8 *)(unaff_R12[uVar23 * -0x2b + -4] + 4);
                uStack_1a0 = (undefined4)
                             ((ulonglong)*(undefined8 *)(unaff_R12[uVar23 * -0x2b + -4] + 4) >> 0x20
                             );
                param_2 = (undefined1 (*) [16])(unaff_R12[uVar23 * -0x2b + -5] + 4);
                if ((int)puStack_1b8 == 1) {
                  uStack_108 = *(undefined8 *)(unaff_R12[uVar23 * -0x2b + -4] + 4);
                  alStack_118[0] = *(longlong *)*param_2;
                  alStack_118[1] = *(longlong *)(unaff_R12[uVar23 * -0x2b + -5] + 0xc);
                  if (cVar15 == '\0') {
                    pdb_140df3450(&pauStack_478,alStack_118);
                    cVar15 = pdb_140a839c0(&lStack_678,&pauStack_478);
                    if (cVar15 == '\0') goto LAB_14083d99e;
                  }
                  pdb_14083e730(pauStack_98,unaff_R15);
                  pdb_1414803f0(&pauStack_258,param_3,unaff_R15,&puStack_1b8,puStack_f8,uStack_f0,
                                &puStack_230,1,0x3f19999a);
                  pauStack_468 = (undefined1 (*) [16])lStack_248;
                  pauStack_478 = pauStack_258;
                  pauStack_470 = (undefined1 (*) [16])lStack_250;
                  *puStack_1d0 = uStack_cc;
                  uStack_458 = (undefined1)*(undefined8 *)(lStack_e0 + 0x40);
                  uStack_457 = (undefined7)((ulonglong)*(undefined8 *)(lStack_e0 + 0x40) >> 8);
                  lVar18 = *(longlong *)(lStack_e0 + 0x30);
                  lVar30 = lStack_e0;
                  pauStack_460 = param_3;
                  if (lVar18 == *(longlong *)(lStack_e0 + 0x20)) {
                    pdb_142d7ede0(lStack_1c0);
                    lVar30 = lStack_e0;
                  }
                }
                else {
                  alStack_118[0] = *(longlong *)*param_2;
                  alStack_118[1] = *(longlong *)(unaff_R12[uVar23 * -0x2b + -5] + 0xc);
                  if (cVar15 == '\0') {
                    pdb_140defaa0(&pauStack_478,alStack_118);
                    bVar16 = pdb_140a839c0(&lStack_678,&pauStack_478);
                    bVar16 = (byte)param_1 | bVar16;
                    param_1 = (undefined1 (*) [16])CONCAT71((int7)((ulonglong)param_1 >> 8),bVar16);
                    if (bVar16 == 0) goto LAB_14083d99e;
                  }
                  pdb_14083e730(pauStack_98,unaff_R15);
                  pdb_1414803f0(&pauStack_270,param_3,unaff_R15,&puStack_1b8,puStack_f8,uStack_f0,
                                &puStack_230,0,0);
                  pauStack_468 = (undefined1 (*) [16])lStack_260;
                  pauStack_478 = pauStack_270;
                  pauStack_470 = (undefined1 (*) [16])lStack_268;
                  *puStack_1d8 = uStack_d0;
                  uStack_458 = (undefined1)*(undefined8 *)(lStack_e8 + 0x40);
                  uStack_457 = (undefined7)((ulonglong)*(undefined8 *)(lStack_e8 + 0x40) >> 8);
                  lVar18 = *(longlong *)(lStack_e8 + 0x30);
                  lVar30 = lStack_e8;
                  pauStack_460 = param_3;
                  if (lVar18 == *(longlong *)(lStack_e8 + 0x20)) {
                    pdb_142d7ede0(lStack_1c8);
                    lVar30 = lStack_e8;
                  }
                }
                lVar9 = *(longlong *)(lVar30 + 0x28);
                *(ulonglong *)(lVar9 + 0x20 + lVar18 * 0x28) = CONCAT71(uStack_457,uStack_458);
                plVar21 = (longlong *)(lVar9 + 0x10 + lVar18 * 0x28);
                *plVar21 = (longlong)pauStack_468;
                plVar21[1] = (longlong)pauStack_460;
                plVar21 = (longlong *)(lVar9 + lVar18 * 0x28);
                *plVar21 = (longlong)pauStack_478;
                plVar21[1] = (longlong)pauStack_470;
                param_3 = (undefined1 (*) [16])(lVar18 + 1);
                *(undefined1 (**) [16])(lVar30 + 0x30) = param_3;
                *(longlong *)(lVar30 + 0x40) = *(longlong *)(lVar30 + 0x40) + 1;
              }
            }
            else {
              *puStack_1f8 = plStack_b8._0_4_;
              pdb_140a6aaf0(uStack_200,param_3);
              *puStack_1e8 = uStack_d8;
              pauStack_478 = (undefined1 (*) [16])0x0;
              uStack_450 = 0;
              uStack_44f = 0;
              uStack_448 = 0;
              pauStack_460 = (undefined1 (*) [16])0x0;
              uStack_458 = 0;
              uStack_457 = 0;
              pauStack_470 = (undefined1 (*) [16])0x4;
              pauStack_468 = (undefined1 (*) [16])0x0;
              pdb_1414086e0(&puStack_1b8,uStack_1f0,param_3,&pauStack_478);
              if ((!SBORROW8(0,(longlong)puStack_1b8)) && (puStack_1b8 != (ulonglong *)0x0)) {
                pub_1406abac0((byte *)CONCAT44(uStack_1ac,uStack_1b0),(longlong)puStack_1b8 << 5,4);
              }
              pdb_14083e730(pauStack_98,unaff_R15);
              *puStack_1e0 = uStack_d4;
              pauVar36 = ppauStack_88[6];
              param_1 = ppauStack_88[8];
              if (pauVar36 == ppauStack_88[4]) {
                pdb_142d7ede0(ppauStack_88 + 4);
              }
              pauVar8 = ppauStack_88[5];
              *(undefined8 *)((longlong)pauVar8 + (longlong)pauVar36 * 0x28) = 0;
              *(undefined8 *)((longlong)pauVar8 + (longlong)pauVar36 * 0x28 + 8) = 4;
              *(undefined8 *)((longlong)pauVar8 + (longlong)pauVar36 * 0x28 + 0x10) = 0;
              *(undefined1 (**) [16])((longlong)pauVar8 + (longlong)pauVar36 * 0x28 + 0x18) =
                   param_3;
              *(undefined1 (**) [16])((longlong)pauVar8 + (longlong)pauVar36 * 0x28 + 0x20) =
                   param_1;
              param_2 = (undefined1 (*) [16])(*pauVar36 + 1);
              ppauStack_88[6] = param_2;
              ppauStack_88[8] = (undefined1 (*) [16])(*ppauStack_88[8] + 1);
            }
            goto LAB_14083d99e;
          }
          if (puStack_230 != (ulonglong *)0x0) {
            pub_1406abac0(pbStack_228,(longlong)puStack_230 << 4,8);
          }
          if (lStack_218 != 0) {
            pub_1406abac0(pbStack_210,lStack_218 << 4,8);
          }
          if (uStack_170 != 0) {
            uVar23 = uStack_170 * 8 + 0x17 & 0xfffffffffffffff0;
            uVar19 = uStack_170 + uVar23 + 0x11;
            if (uVar19 != 0) {
              pub_1406abac0((byte *)(lStack_178 - uVar23),uVar19,0x10);
            }
          }
          if (uStack_140 != 0) {
            uVar23 = uStack_140 * 8 + 0x17 & 0xfffffffffffffff0;
            uVar19 = uStack_140 + uVar23 + 0x11;
            if (uVar19 != 0) {
              pub_1406abac0((byte *)(lStack_148 - uVar23),uVar19,0x10);
            }
          }
          if (ppauStack_c8 == (undefined1 (**) [16])0x0) {
            return;
          }
          plVar21 = (longlong *)pdb_140e97000();
          if ((char)plVar21[0xd] == '\x01') break;
          ppauVar25 = (undefined1 (**) [16])0x0;
          plVar21 = (longlong *)pdb_142dd9610(plVar21);
          pauVar36 = param_3;
        } while (plVar21 == (longlong *)0x0);
        if (*plVar21 == 0) {
          *plVar21 = -1;
          plStack_90 = plVar21;
          pdb_140e95370(plVar21 + 1,uStack_c0);
          goto LAB_14083dffa;
        }
      }
    }
    *plVar21 = -1;
    plStack_90 = plVar21;
    pdb_140e95370(plVar21 + 1,uStack_c0);
LAB_14083dffa:
    *plStack_90 = *plStack_90 + 1;
  }
  return;
}

