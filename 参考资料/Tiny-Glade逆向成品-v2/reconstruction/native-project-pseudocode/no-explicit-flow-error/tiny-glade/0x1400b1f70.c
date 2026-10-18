// VA 0x1400b1f70, PDB extent 8036 bytes
// tiny_glade::screenshot::gather_screenshot_requests
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/screenshot.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::screenshot::gather_screenshot_requests
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/screenshot.rs
   Extent: 8036 */

char pdb_1400b1f70(longlong *param_1,ulonglong ******param_2,undefined8 *param_3,
                  ulonglong ******param_4,undefined8 *param_5,undefined8 *param_6,longlong *param_7,
                  char *param_8,longlong *param_9,undefined8 *param_10,longlong *param_11,
                  undefined8 *param_12,longlong *param_13,undefined8 *param_14,undefined8 *param_15)

{
  char *pcVar1;
  longlong *plVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong *****pppppuVar9;
  ulonglong *****pppppuVar10;
  code *pcVar11;
  bool bVar12;
  ulonglong ****ppppuVar13;
  byte bVar14;
  ushort uVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  byte *pbVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong ******ppppppuVar21;
  ulonglong *****pppppuVar22;
  longlong *plVar23;
  ulonglong ******ppppppuVar24;
  undefined8 *puVar25;
  longlong lVar26;
  ulonglong *****pppppuVar27;
  ulonglong *****pppppuVar28;
  char cVar29;
  undefined1 uVar30;
  longlong lVar31;
  ulonglong uVar32;
  undefined4 *puVar33;
  longlong lVar34;
  ulonglong *****pppppuVar35;
  ulonglong *****pppppuVar36;
  undefined8 uVar37;
  ulonglong *****pppppuVar38;
  ulonglong *****pppppuVar39;
  uint uVar40;
  longlong lVar41;
  longlong lVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  longlong lVar45;
  ulonglong *****pppppuVar46;
  bool bVar47;
  ulonglong uVar48;
  bool bVar49;
  bool bVar50;
  bool bVar51;
  bool bVar52;
  bool bVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  longlong *plStack_1b0;
  byte *pbStack_1a8;
  undefined8 uStack_1a0;
  ulonglong ***pppuStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  longlong *plStack_180;
  ulonglong *****pppppuStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  int iStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  byte *pbStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined2 uStack_f0;
  uint uStack_ee;
  char cStack_ea;
  undefined1 uStack_e9;
  ulonglong ****ppppuStack_e8;
  ulonglong ****ppppuStack_e0;
  ulonglong ****ppppuStack_d8;
  ulonglong ****ppppuStack_d0;
  ulonglong ****ppppuStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ulonglong *****pppppuStack_90;
  ulonglong ****ppppuStack_88;
  ulonglong *****pppppuStack_80;
  ulonglong ****ppppuStack_78;
  ulonglong *****pppppuStack_70;
  longlong *plStack_68;
  ulonglong *****pppppuStack_60;
  undefined1 uStack_51;
  undefined1 uStack_4f;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pppppuStack_70 = (ulonglong *****)param_14[5];
  lVar20 = param_14[6];
  puVar7 = (ulonglong *)param_14[10];
  lVar34 = param_14[0xb];
  ppppuStack_88 = (ulonglong ****)0x0;
  pppppuStack_80 = (ulonglong *****)0x8;
  ppppuStack_78 = (ulonglong ****)0x0;
  plVar23 = (longlong *)*param_5;
  puStack_188 = param_3;
  pppppuStack_90 = (ulonglong *****)param_4;
  pppppuStack_60 = (ulonglong *****)param_2;
  if (plVar23 != (longlong *)0x0) {
    lVar42 = *plVar23;
    plStack_68 = (longlong *)(lVar42 + 0x10);
    LOCK();
    bVar50 = *(longlong *)(lVar42 + 0x10) == 0;
    if (bVar50) {
      *(longlong *)(lVar42 + 0x10) = 8;
    }
    UNLOCK();
    if (!bVar50) {
      uStack_49 = 1;
      pdb_142dbc1f0(plStack_68,8,1000000000);
    }
    uStack_49 = 1;
    pdb_140e9a150(lVar42 + 0x10);
    uVar48 = lVar42 + 0x10U | 1;
    uStack_49 = 1;
    pdb_140e9a150(uVar48);
    lVar26 = *(longlong *)(lVar42 + 0x28);
    if (lVar26 != 0) {
      lVar45 = *(longlong *)(lVar42 + 0x20);
      lVar41 = lVar26 * 8;
      lVar31 = 0;
      do {
        if (*(longlong *)(lVar45 + lVar31 * 8) == 0) {
          uStack_130 = *(ulonglong *******)(lVar45 + lVar31 * 8);
          *(undefined8 *)(lVar45 + lVar31 * 8) = *(undefined8 *)(lVar45 + -8 + lVar26 * 8);
          *(longlong *)(lVar42 + 0x28) = lVar26 + -1;
          if (uStack_130 != (ulonglong ******)0x0) {
            LOCK();
            *uStack_130 = (ulonglong *****)((longlong)*uStack_130 - 1);
            UNLOCK();
            if (*uStack_130 == (ulonglong *****)0x0) {
              pdb_140c79f20(&uStack_130);
            }
          }
          uStack_49 = 1;
          pdb_140e9a350(plStack_68);
          uStack_49 = 1;
          pdb_140e9a350(uVar48);
          LOCK();
          lVar34 = *plStack_68;
          if (lVar34 == 8) {
            *plStack_68 = 0;
          }
          UNLOCK();
          ppppppuVar21 = (ulonglong ******)CONCAT71((int7)(lVar42 + 0x10U >> 8),1);
          if (lVar34 != 8) {
            uStack_49 = 1;
            pdb_142dbca40(plStack_68,0);
          }
          goto LAB_1400b222b;
        }
        lVar31 = lVar31 + 1;
        lVar41 = lVar41 + -8;
      } while (lVar41 != 0);
    }
    uStack_49 = 1;
    pdb_140e9a350(lVar42 + 0x10);
    uStack_49 = 1;
    pdb_140e9a350(uVar48);
    LOCK();
    lVar42 = *plStack_68;
    if (lVar42 == 8) {
      *plStack_68 = 0;
    }
    UNLOCK();
    if (lVar42 != 8) {
      uStack_49 = 1;
      pdb_142dbca40(plStack_68,0);
    }
  }
  uVar48 = *puVar7;
  uVar43 = 0;
  uVar19 = uVar48 - *(ulonglong *)(lVar34 + 0x18);
  if (uVar48 < *(ulonglong *)(lVar34 + 0x18)) {
    uVar19 = uVar43;
  }
  uVar16 = uVar48 - *(ulonglong *)(lVar34 + 0x38);
  if (uVar48 < *(ulonglong *)(lVar34 + 0x38)) {
    uVar16 = uVar43;
  }
  lVar42 = uVar19 * 0x10 + *(longlong *)(lVar34 + 8);
  uVar48 = *(ulonglong *)(lVar34 + 0x10);
  lVar26 = uVar16 * 0x10 + *(longlong *)(lVar34 + 0x28);
  uVar32 = uVar48 - uVar19;
  if (uVar48 < uVar19) {
    uVar32 = uVar43;
  }
  uVar8 = *(ulonglong *)(lVar34 + 0x30);
  if (uVar48 < uVar19) {
    lVar42 = 8;
    uVar19 = uVar48;
  }
  uVar44 = uVar8 - uVar16;
  if (uVar8 < uVar16) {
    lVar26 = 8;
    uVar44 = uVar43;
  }
  lVar34 = *(longlong *)(lVar34 + 0x40);
  if (uVar8 < uVar16) {
    uVar16 = uVar8;
  }
  *puVar7 = (lVar34 - uVar44) - uVar32;
  uVar48 = ((uVar16 + lVar34 + uVar19) - uVar8) - uVar48;
  lVar34 = lVar26;
  lVar41 = lVar42;
  do {
    uVar48 = uVar48 + 1;
    plStack_68 = plVar23;
    if ((lVar41 == 0) || (lVar41 == uVar32 * 0x10 + lVar42)) {
      if ((lVar34 == 0) || (lVar34 == uVar44 * 0x10 + lVar26)) {
        uStack_49 = 1;
        uVar48 = pdb_140938b60(*(undefined4 *)(*param_1 + 0xf8),*(undefined4 *)(*param_1 + 0xfc));
        ppppppuVar21 = (ulonglong ******)(uVar48 & 0xffffffff);
        goto LAB_1400b222b;
      }
      lVar45 = 0;
      lVar31 = lVar34 + 0x10;
      lVar41 = lVar34;
    }
    else {
      lVar45 = lVar41 + 0x10;
      lVar31 = lVar34;
    }
    *puVar7 = uVar48;
    pcVar1 = (char *)(lVar41 + 8);
    lVar34 = lVar31;
    lVar41 = lVar45;
  } while (*pcVar1 != '\x04');
  ppppppuVar21 = (ulonglong ******)CONCAT71((int7)(uVar8 >> 8),1);
LAB_1400b222b:
  if (plVar23 != (longlong *)0x0) {
    lVar34 = *plVar23;
    plVar2 = (longlong *)(lVar34 + 0x10);
    LOCK();
    bVar50 = *(longlong *)(lVar34 + 0x10) == 0;
    if (bVar50) {
      *(longlong *)(lVar34 + 0x10) = 8;
    }
    UNLOCK();
    if (!bVar50) {
      uStack_49 = 1;
      pdb_142dbc1f0(plVar2);
    }
    uStack_49 = 1;
    pdb_140e9a150(plVar2);
    uStack_49 = 1;
    pdb_140e9a150((ulonglong)plVar2 | 1);
    plStack_68 = plVar2;
    pdb_140172790(lVar34 + 0x18,pppppuStack_90);
    plVar2 = plStack_68;
    uStack_49 = 1;
    pdb_140e9a350(plStack_68);
    uStack_49 = 1;
    pdb_140e9a350();
    LOCK();
    lVar34 = *plVar2;
    if (lVar34 == 8) {
      *plVar2 = 0;
    }
    UNLOCK();
    if (lVar34 != 8) {
      uStack_49 = 1;
      pdb_142dbca40(plVar2,0);
    }
  }
  pcVar1 = (char *)*param_6;
  if (*param_8 == '\x01') {
    bVar14 = param_8[1];
    if (bVar14 < 0x10) {
      *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
      *(undefined1 *)(*param_9 + 0x14) = 1;
      cVar29 = bVar14 + 1;
LAB_1400b2331:
      param_8[1] = cVar29;
      goto LAB_1400b25a9;
    }
    if (bVar14 != 0x10) {
      *(undefined4 *)param_13[2] = *(undefined4 *)((longlong)param_13 + 0x1c);
      *(undefined1 *)(*param_13 + 0x31) = 0;
      puVar33 = (undefined4 *)param_9[2];
      *puVar33 = *(undefined4 *)((longlong)param_9 + 0x1c);
      *(undefined1 *)(*param_9 + 0x14) = 0;
      *param_8 = '\0';
      goto LAB_1400b236d;
    }
    param_8[1] = '\x11';
    puVar33 = (undefined4 *)0x10;
LAB_1400b2376:
    pbVar18 = (byte *)*param_7;
    pppuStack_198 = (ulonglong ***)&UNK_142e3b39e;
    if (pbVar18[0x121] != 0) {
      pppuStack_198 = (ulonglong ***)&UNK_142e3b4a8;
    }
    uStack_190 = 3;
    uStack_49 = 1;
    uVar17 = pdb_140dc7520();
    uStack_49 = 1;
    pdb_140f3e9e0(&uStack_150,uVar17,puVar33,&UNK_142e3b4ab,0xb);
    ppppppuVar24 = uStack_140;
    pppppuStack_90 = (ulonglong *****)uStack_148;
    plStack_180 = param_1;
    pdb_140dee3a0(&pppppuStack_178);
    uStack_128 = pdb_140001020;
    uStack_120 = (ulonglong *****)&pppuStack_198;
    uStack_118 = pdb_1402ed400;
    uStack_130 = &pppppuStack_178;
    pdb_140f60760(&plStack_1b0,&UNK_142e3b4b6,&uStack_130);
    if ((ulonglong ******)pppppuStack_178 != (ulonglong ******)0x0) {
      pub_1406abac0((byte *)CONCAT44(uStack_16c,uStack_170),(ulonglong)pppppuStack_178,1);
    }
    plStack_68 = plStack_1b0;
    pbStack_158 = pbStack_1a8;
    pdb_140f3e9e0(&pppppuStack_178,pppppuStack_90,ppppppuVar24,pbStack_1a8,uStack_1a0);
    if (plStack_68 != (longlong *)0x0) {
      pub_1406abac0(pbStack_158,(ulonglong)plStack_68,1);
    }
    if (uStack_150 != (ulonglong ******)0x0) {
      pub_1406abac0((byte *)pppppuStack_90,(ulonglong)uStack_150,1);
    }
    if (plVar23 == (longlong *)0x0) {
      ppppppuVar24 = (ulonglong ******)0x0;
    }
    else {
      lVar34 = *plVar23;
      plVar23 = (longlong *)(lVar34 + 0x10);
      LOCK();
      bVar50 = *(longlong *)(lVar34 + 0x10) == 0;
      if (bVar50) {
        *(longlong *)(lVar34 + 0x10) = 8;
      }
      UNLOCK();
      if (!bVar50) {
        uStack_4a = 1;
        pdb_142dbc1f0(plVar23);
      }
      uStack_4a = 1;
      pdb_140e9a150(plVar23);
      uStack_4a = 1;
      pdb_140e9a150((ulonglong)plVar23 | 1);
      pdb_14007ee60();
      uStack_150 = (ulonglong ******)pub_1406abab0(0x40,8);
      plStack_68 = plVar23;
      if (uStack_150 == (ulonglong ******)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x40);
      }
      *uStack_150 = (ulonglong *****)0x1;
      uStack_150[1] = (ulonglong *****)0x1;
      *(undefined1 *)(uStack_150 + 2) = 0;
      uStack_150[3] = (ulonglong *****)0x8000000000000001;
      LOCK();
      pppppuVar35 = *uStack_150;
      *uStack_150 = (ulonglong *****)((longlong)*uStack_150 + 1);
      UNLOCK();
      if (*uStack_150 == (ulonglong *****)0x0 ||
          SCARRY8((longlong)pppppuVar35,1) != (longlong)*uStack_150 < 0) goto LAB_1400b34ee;
      lVar42 = *(longlong *)(lVar34 + 0x28);
      uStack_130 = uStack_150;
      pppppuStack_90 = (ulonglong *****)uStack_150;
      if (lVar42 == *(longlong *)(lVar34 + 0x18)) {
        pdb_142d7e8a0(lVar34 + 0x18);
      }
      *(ulonglong ******)(*(longlong *)(lVar34 + 0x20) + lVar42 * 8) = pppppuStack_90;
      *(longlong *)(lVar34 + 0x28) = lVar42 + 1;
      uVar48 = CONCAT44(iStack_164,uStack_168);
      if (iStack_164 < 0) {
        uVar17 = 0;
LAB_1400b2591:
        uStack_4b = 1;
        pdb_142dc7e2a(uVar17,uVar48);
        goto LAB_1400b34ee;
      }
      pbStack_158 = pbVar18;
      if (uVar48 == 0) {
        pbVar18 = (byte *)0x1;
      }
      else {
        uVar37 = CONCAT44(uStack_16c,uStack_170);
        pdb_14007ee60();
        uVar17 = 1;
        pbVar18 = pub_1406abab0(uVar48,1);
        if (pbVar18 == (byte *)0x0) goto LAB_1400b2591;
        pub_142e32760(pbVar18,uVar37,uVar48);
      }
      uStack_110 = (ulonglong ******)pppppuStack_90;
      uStack_118 = (code *)CONCAT71(uStack_118._1_7_,(undefined1)uStack_160);
      uStack_130 = (ulonglong ******)uVar48;
      uStack_128 = (code *)pbVar18;
      uStack_120 = (ulonglong *****)uVar48;
      pdb_14007ee60();
      ppppppuVar21 = (ulonglong ******)pub_1406abab0(0x28,8);
      plVar23 = plStack_68;
      if (ppppppuVar21 == (ulonglong ******)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x28);
      }
      ppppppuVar21[4] = (ulonglong *****)uStack_110;
      *(undefined4 *)(ppppppuVar21 + 2) = (undefined4)uStack_120;
      *(undefined4 *)((longlong)ppppppuVar21 + 0x14) = uStack_120._4_4_;
      *(undefined4 *)(ppppppuVar21 + 3) = (undefined4)uStack_118;
      *(undefined4 *)((longlong)ppppppuVar21 + 0x1c) = uStack_118._4_4_;
      *(undefined4 *)ppppppuVar21 = (undefined4)uStack_130;
      *(undefined4 *)((longlong)ppppppuVar21 + 4) = uStack_130._4_4_;
      *(undefined4 *)(ppppppuVar21 + 1) = (undefined4)uStack_128;
      *(undefined4 *)((longlong)ppppppuVar21 + 0xc) = uStack_128._4_4_;
      uStack_4a = 1;
      pdb_140e9a350(plStack_68);
      pbVar18 = pbStack_158;
      uStack_4a = 1;
      pdb_140e9a350();
      LOCK();
      lVar34 = *plVar23;
      if (lVar34 == 8) {
        *plVar23 = 0;
      }
      UNLOCK();
      ppppppuVar24 = (ulonglong ******)0x1;
      if (lVar34 != 8) {
        uStack_4a = 1;
        pdb_142dbca40(plVar23,0);
      }
    }
    ppppuVar13 = ppppuStack_78;
    cStack_ea = '\x04' - (*pcVar1 == '\x10');
    uStack_108 = (ulonglong ******)CONCAT44(iStack_164,uStack_168);
    uStack_100 = uStack_160;
    uStack_fc = uStack_15c;
    uStack_118 = (code *)pppppuStack_178;
    uStack_110 = (ulonglong ******)CONCAT44(uStack_16c,uStack_170);
    uVar30 = 0x55;
    if (pbVar18[0x121] != 0) {
      uVar30 = 100;
    }
    uStack_f0 = 0;
    uStack_f8 = CONCAT31(uStack_f8._1_3_,uVar30);
    uStack_120 = (ulonglong *****)&UNK_142f5ea28;
    uStack_130 = ppppppuVar24;
    uStack_128 = (code *)ppppppuVar21;
    if (ppppuStack_78 == ppppuStack_88) {
      pdb_142d7eec0(&ppppuStack_88);
    }
    pppppuStack_80[(longlong)ppppuVar13 * 9 + 8] =
         (ulonglong ****)CONCAT17(uStack_e9,CONCAT16(cStack_ea,CONCAT42(uStack_ee,uStack_f0)));
    pppppuStack_80[(longlong)ppppuVar13 * 9 + 6] = (ulonglong ****)CONCAT44(uStack_fc,uStack_100);
    (pppppuStack_80 + (longlong)ppppuVar13 * 9 + 6)[1] =
         (ulonglong ****)CONCAT44(uStack_f4,uStack_f8);
    pppppuStack_80[(longlong)ppppuVar13 * 9 + 4] = (ulonglong ****)uStack_110;
    (pppppuStack_80 + (longlong)ppppuVar13 * 9 + 4)[1] = (ulonglong ****)uStack_108;
    pppppuStack_80[(longlong)ppppuVar13 * 9 + 2] = (ulonglong ****)uStack_120;
    (pppppuStack_80 + (longlong)ppppuVar13 * 9 + 2)[1] = (ulonglong ****)uStack_118;
    ppppppuVar21 = (ulonglong ******)(pppppuStack_80 + (longlong)ppppuVar13 * 9);
    *(undefined4 *)ppppppuVar21 = (undefined4)uStack_130;
    *(undefined4 *)((longlong)ppppppuVar21 + 4) = uStack_130._4_4_;
    *(undefined4 *)(ppppppuVar21 + 1) = (undefined4)uStack_128;
    *(undefined4 *)((longlong)ppppppuVar21 + 0xc) = uStack_128._4_4_;
    ppppuStack_78 = (ulonglong ****)((longlong)ppppuVar13 + 1);
    lVar34 = *plStack_180;
  }
  else {
    bVar50 = *pcVar1 == '\x10';
    puVar33 = (undefined4 *)(ulonglong)bVar50;
    if (((byte)ppppppuVar21 & bVar50) != 0) {
      *(undefined4 *)param_13[2] = *(undefined4 *)((longlong)param_13 + 0x1c);
      *(undefined1 *)(*param_13 + 0x31) = 1;
      *param_8 = '\x01';
      cVar29 = '\x01';
      goto LAB_1400b2331;
    }
LAB_1400b236d:
    if ((byte)ppppppuVar21 != 0) goto LAB_1400b2376;
LAB_1400b25a9:
    lVar34 = *param_1;
    uStack_49 = 1;
    cVar29 = pdb_140938b60(*(undefined4 *)(lVar34 + 0x100),*(undefined4 *)(lVar34 + 0x104));
    if (cVar29 != '\0') {
      uStack_49 = 1;
      pdb_140f60120(&uStack_150,&UNK_142e3b4bb,0x15);
      ppppuVar13 = ppppuStack_78;
      uStack_108 = uStack_140;
      uStack_100 = uStack_138;
      uStack_fc = uStack_134;
      uStack_118 = (code *)uStack_150;
      uStack_110 = uStack_148;
      cStack_ea = '\0';
      uStack_f0 = 0;
      uStack_f8 = CONCAT31(uStack_f8._1_3_,100);
      uStack_130 = (ulonglong ******)0x0;
      if (ppppuStack_78 == ppppuStack_88) {
        pdb_142d7eec0(&ppppuStack_88);
      }
      pppppuStack_80[(longlong)ppppuVar13 * 9 + 8] =
           (ulonglong ****)CONCAT17(uStack_e9,CONCAT16(cStack_ea,CONCAT42(uStack_ee,uStack_f0)));
      pppppuStack_80[(longlong)ppppuVar13 * 9 + 6] = (ulonglong ****)CONCAT44(uStack_fc,uStack_100);
      (pppppuStack_80 + (longlong)ppppuVar13 * 9 + 6)[1] =
           (ulonglong ****)CONCAT44(uStack_f4,uStack_f8);
      pppppuStack_80[(longlong)ppppuVar13 * 9 + 4] = (ulonglong ****)uStack_110;
      (pppppuStack_80 + (longlong)ppppuVar13 * 9 + 4)[1] = (ulonglong ****)uStack_108;
      pppppuStack_80[(longlong)ppppuVar13 * 9 + 2] = (ulonglong ****)uStack_120;
      (pppppuStack_80 + (longlong)ppppuVar13 * 9 + 2)[1] = (ulonglong ****)uStack_118;
      ppppppuVar21 = (ulonglong ******)(pppppuStack_80 + (longlong)ppppuVar13 * 9);
      *(undefined4 *)ppppppuVar21 = (undefined4)uStack_130;
      *(undefined4 *)((longlong)ppppppuVar21 + 4) = uStack_130._4_4_;
      *(undefined4 *)(ppppppuVar21 + 1) = (undefined4)uStack_128;
      *(undefined4 *)((longlong)ppppppuVar21 + 0xc) = uStack_128._4_4_;
      ppppuStack_78 = (ulonglong ****)((longlong)ppppuVar13 + 1);
    }
  }
  pppppuVar35 = (ulonglong *****)*pppppuStack_70;
  uVar19 = 0;
  uVar48 = (longlong)pppppuVar35 - *(ulonglong *)(lVar20 + 0x18);
  if (pppppuVar35 < *(ulonglong ******)(lVar20 + 0x18)) {
    uVar48 = uVar19;
  }
  uVar43 = (longlong)pppppuVar35 - *(ulonglong *)(lVar20 + 0x38);
  if (pppppuVar35 < *(ulonglong ******)(lVar20 + 0x38)) {
    uVar43 = uVar19;
  }
  bVar50 = uVar43 <= *(ulonglong *)(lVar20 + 0x30);
  uVar43 = *(ulonglong *)(lVar20 + 0x30) - uVar43;
  bVar51 = uVar43 != 0;
  if (!bVar50) {
    uVar43 = uVar19;
  }
  bVar49 = uVar48 <= *(ulonglong *)(lVar20 + 0x10);
  uVar48 = *(ulonglong *)(lVar20 + 0x10) - uVar48;
  bVar52 = uVar48 != 0;
  if (!bVar49) {
    uVar48 = uVar19;
  }
  bVar12 = bVar49 && bVar52 || bVar50 && bVar51;
  uVar48 = uVar48 + uVar43;
  if (bVar49 && bVar52 || bVar50 && bVar51) {
    uVar48 = uVar19;
  }
  *pppppuStack_70 = (ulonglong ****)(*(longlong *)(lVar20 + 0x40) - uVar48);
  uStack_49 = 1;
  cVar29 = pdb_140938b60(*(undefined4 *)(lVar34 + 0x108));
  if (cVar29 == '\0') {
    bVar53 = false;
    bVar47 = false;
    plVar23 = (longlong *)*param_15;
    lVar20 = *plVar23;
    if (lVar20 != 0xc) goto LAB_1400b28bb;
LAB_1400b28f6:
    if ((bVar47 | bVar12) != 1) goto LAB_1400b28e4;
LAB_1400b2904:
    pppppuVar35 = pppppuStack_60;
    pdb_14007ee60();
    pppppuStack_178 = (ulonglong *****)pub_1406abab0(0x30,8);
    ppppuVar13 = ppppuStack_78;
    if ((ulonglong ******)pppppuStack_178 == (ulonglong ******)0x0) {
      uStack_49 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x30);
    }
    *pppppuStack_178 = (ulonglong ****)0x1;
    pppppuStack_178[1] = (ulonglong ****)0x1;
    *(undefined1 *)(pppppuStack_178 + 2) = 0;
    pppppuStack_178[3] = (ulonglong ****)0x8000000000000000;
    LOCK();
    pppppuVar36 = (ulonglong *****)*pppppuStack_178;
    *pppppuStack_178 = (ulonglong ****)((longlong)*pppppuStack_178 + 1);
    UNLOCK();
    if ((ulonglong *****)*pppppuStack_178 == (ulonglong *****)0x0 ||
        SCARRY8((longlong)pppppuVar36,1) != (longlong)*pppppuStack_178 < 0) goto LAB_1400b34ee;
    cStack_ea = '\x06';
    uStack_f0 = 0;
    uStack_118 = (code *)0x8000000000000000;
    uStack_108 = (ulonglong ******)CONCAT71(uStack_108._1_7_,0x3c);
    uStack_130 = (ulonglong ******)0x0;
    uStack_110 = (ulonglong ******)pppppuStack_178;
    if (ppppuStack_78 == ppppuStack_88) {
      pdb_142d7eec0(&ppppuStack_88);
    }
    pppppuStack_80[(longlong)ppppuVar13 * 9 + 8] =
         (ulonglong ****)CONCAT17(uStack_e9,CONCAT16(cStack_ea,CONCAT42(uStack_ee,uStack_f0)));
    ppppppuVar21 = (ulonglong ******)(pppppuStack_80 + (longlong)ppppuVar13 * 9 + 6);
    *(undefined4 *)ppppppuVar21 = uStack_100;
    *(undefined4 *)((longlong)ppppppuVar21 + 4) = uStack_fc;
    *(undefined4 *)(ppppppuVar21 + 1) = uStack_f8;
    *(undefined4 *)((longlong)ppppppuVar21 + 0xc) = uStack_f4;
    ppppppuVar21 = (ulonglong ******)(pppppuStack_80 + (longlong)ppppuVar13 * 9 + 4);
    *(undefined4 *)ppppppuVar21 = (undefined4)uStack_110;
    *(undefined4 *)((longlong)ppppppuVar21 + 4) = uStack_110._4_4_;
    *(undefined4 *)(ppppppuVar21 + 1) = (undefined4)uStack_108;
    *(undefined4 *)((longlong)ppppppuVar21 + 0xc) = uStack_108._4_4_;
    ppppppuVar21 = (ulonglong ******)(pppppuStack_80 + (longlong)ppppuVar13 * 9 + 2);
    *(undefined4 *)ppppppuVar21 = (undefined4)uStack_120;
    *(undefined4 *)((longlong)ppppppuVar21 + 4) = uStack_120._4_4_;
    *(undefined4 *)(ppppppuVar21 + 1) = (undefined4)uStack_118;
    *(undefined4 *)((longlong)ppppppuVar21 + 0xc) = uStack_118._4_4_;
    ppppppuVar21 = (ulonglong ******)(pppppuStack_80 + (longlong)ppppuVar13 * 9);
    *(undefined4 *)ppppppuVar21 = (undefined4)uStack_130;
    *(undefined4 *)((longlong)ppppppuVar21 + 4) = uStack_130._4_4_;
    *(undefined4 *)(ppppppuVar21 + 1) = (undefined4)uStack_128;
    *(undefined4 *)((longlong)ppppppuVar21 + 0xc) = uStack_128._4_4_;
    ppppuStack_78 = (ulonglong ****)((longlong)ppppuVar13 + 1);
    pdb_14007ee60();
    ppppppuVar21 = (ulonglong ******)pub_1406abab0(0x20,8);
    ppppuVar13 = ppppuStack_78;
    if (ppppppuVar21 == (ulonglong ******)0x0) {
      uStack_4c = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x20);
    }
    *ppppppuVar21 = (ulonglong *****)0x1;
    ppppppuVar21[1] = (ulonglong *****)0x1;
    *(undefined1 *)(ppppppuVar21 + 2) = 0;
    ppppppuVar21[3] = (ulonglong *****)0x0;
    uVar3 = *(ushort *)*param_9;
    uVar4 = ((ushort *)*param_9)[1];
    LOCK();
    pppppuVar36 = *ppppppuVar21;
    *ppppppuVar21 = (ulonglong *****)((longlong)*ppppppuVar21 + 1);
    UNLOCK();
    uStack_150 = ppppppuVar21;
    if (*ppppppuVar21 == (ulonglong *****)0x0 ||
        SCARRY8((longlong)pppppuVar36,1) != (longlong)*ppppppuVar21 < 0) goto LAB_1400b34ee;
    fVar54 = (float)uVar4 * _DAT_142e3b1d8;
    fVar55 = 0.0;
    if (0.0 <= fVar54) {
      fVar55 = fVar54;
    }
    fVar54 = _DAT_142e3b1dc;
    if (fVar55 <= _DAT_142e3b1dc) {
      fVar54 = fVar55;
    }
    fVar56 = (float)uVar3 * _DAT_142e3b1d8;
    fVar55 = 0.0;
    if (0.0 <= fVar56) {
      fVar55 = fVar56;
    }
    fVar56 = _DAT_142e3b1dc;
    if (fVar55 <= _DAT_142e3b1dc) {
      fVar56 = fVar55;
    }
    uStack_ee = (int)fVar56 + (uint)((short)(int)fVar56 == 0) & 0xffff |
                ((int)fVar54 + (uint)((short)(int)fVar54 == 0)) * 0x10000;
    cStack_ea = '\x06';
    uStack_f0 = 1;
    uStack_118 = (code *)0x8000000000000001;
    uStack_130 = (ulonglong ******)0x0;
    uStack_110 = ppppppuVar21;
    pppppuStack_70 = (ulonglong *****)ppppppuVar21;
    if (ppppuStack_78 == ppppuStack_88) {
      pdb_142d7eec0(&ppppuStack_88);
    }
    pppppuStack_80[(longlong)ppppuVar13 * 9 + 8] =
         (ulonglong ****)CONCAT17(uStack_e9,CONCAT16(cStack_ea,CONCAT42(uStack_ee,uStack_f0)));
    ppppppuVar21 = (ulonglong ******)(pppppuStack_80 + (longlong)ppppuVar13 * 9 + 6);
    *(undefined4 *)ppppppuVar21 = uStack_100;
    *(undefined4 *)((longlong)ppppppuVar21 + 4) = uStack_fc;
    *(undefined4 *)(ppppppuVar21 + 1) = uStack_f8;
    *(undefined4 *)((longlong)ppppppuVar21 + 0xc) = uStack_f4;
    ppppppuVar21 = (ulonglong ******)(pppppuStack_80 + (longlong)ppppuVar13 * 9 + 4);
    *(undefined4 *)ppppppuVar21 = (undefined4)uStack_110;
    *(undefined4 *)((longlong)ppppppuVar21 + 4) = uStack_110._4_4_;
    *(undefined4 *)(ppppppuVar21 + 1) = (undefined4)uStack_108;
    *(undefined4 *)((longlong)ppppppuVar21 + 0xc) = uStack_108._4_4_;
    ppppppuVar21 = (ulonglong ******)(pppppuStack_80 + (longlong)ppppuVar13 * 9 + 2);
    *(undefined4 *)ppppppuVar21 = (undefined4)uStack_120;
    *(undefined4 *)((longlong)ppppppuVar21 + 4) = uStack_120._4_4_;
    *(undefined4 *)(ppppppuVar21 + 1) = (undefined4)uStack_118;
    *(undefined4 *)((longlong)ppppppuVar21 + 0xc) = uStack_118._4_4_;
    ppppppuVar21 = (ulonglong ******)(pppppuStack_80 + (longlong)ppppuVar13 * 9);
    *(undefined4 *)ppppppuVar21 = (undefined4)uStack_130;
    *(undefined4 *)((longlong)ppppppuVar21 + 4) = uStack_130._4_4_;
    *(undefined4 *)(ppppppuVar21 + 1) = (undefined4)uStack_128;
    *(undefined4 *)((longlong)ppppppuVar21 + 0xc) = uStack_128._4_4_;
    ppppuStack_78 = (ulonglong ****)((longlong)ppppuVar13 + 1);
    uVar6 = *(undefined4 *)((longlong)param_10 + 0x1c);
    puVar33 = (undefined4 *)param_10[2];
    *puVar33 = uVar6;
    pppppuStack_60 = (ulonglong *****)*param_10;
    if (*pppppuStack_60 != (ulonglong ****)0x0) {
      if ((int)*pppppuStack_60 == 1) {
        plVar2 = (longlong *)pppppuStack_60[1];
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          pdb_140c7b370();
        }
      }
      else {
        pdb_1404bb6e0();
      }
    }
    *pppppuStack_60 = (ulonglong ****)0x1;
    pppppuStack_60[1] = (ulonglong ****)pppppuStack_70;
    pppppuStack_70 = pppppuStack_178;
    *puVar33 = uVar6;
    plVar2 = (longlong *)pppppuStack_60[2];
    pppppuStack_60 = pppppuStack_60 + 2;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        pdb_140c7a980(pppppuStack_60);
      }
    }
    *pppppuStack_60 = (ulonglong ****)pppppuStack_70;
    pppppuVar35 = (ulonglong *****)*pppppuVar35;
    iVar5 = *(int *)pppppuVar35;
  }
  else {
    bVar53 = *(int *)*pppppuStack_60 != 8;
    plVar23 = (longlong *)*param_15;
    lVar20 = *plVar23;
    bVar47 = bVar53;
    if (lVar20 == 0xc) goto LAB_1400b28f6;
LAB_1400b28bb:
    bVar47 = bVar53;
    if ((int)lVar20 != 8) goto LAB_1400b28f6;
    uStack_49 = 1;
    bVar14 = pdb_140a00370(*pppppuStack_60);
    if ((byte)(bVar53 | bVar14 | bVar12) == 1) goto LAB_1400b2904;
LAB_1400b28e4:
    pppppuVar35 = (ulonglong *****)*pppppuStack_60;
    iVar5 = *(int *)pppppuVar35;
  }
  if ((iVar5 == 0xb) && (*(char *)(pppppuVar35 + 1) == '\0')) {
    *(undefined4 *)param_15[2] = *(undefined4 *)((longlong)param_15 + 0x1c);
    uVar48 = (ulonglong)uStack_128 >> 8;
    uStack_128 = (code *)CONCAT71((int7)uVar48,1);
    uStack_130 = (ulonglong ******)0xb;
    uStack_49 = 1;
    pdb_140a003a0(plVar23,&uStack_130);
    fVar54 = (float)*(ushort *)(*param_9 + 2) * _DAT_142e3798c;
    fVar55 = 0.0;
    if (0.0 <= fVar54) {
      fVar55 = fVar54;
    }
    fVar54 = _DAT_142e3b1dc;
    if (fVar55 <= _DAT_142e3b1dc) {
      fVar54 = fVar55;
    }
    uVar40 = (int)fVar54 + (uint)((short)(int)fVar54 == 0);
    pdb_14007ee60();
    ppppppuVar21 = (ulonglong ******)pub_1406abab0(0x20,8);
    ppppuVar13 = ppppuStack_78;
    if (ppppppuVar21 == (ulonglong ******)0x0) {
      uStack_49 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x20);
    }
    *ppppppuVar21 = (ulonglong *****)0x1;
    ppppppuVar21[1] = (ulonglong *****)0x1;
    *(undefined1 *)(ppppppuVar21 + 2) = 0;
    ppppppuVar21[3] = (ulonglong *****)0x0;
    LOCK();
    pppppuVar35 = *ppppppuVar21;
    *ppppppuVar21 = (ulonglong *****)((longlong)*ppppppuVar21 + 1);
    UNLOCK();
    uStack_150 = ppppppuVar21;
    if (*ppppppuVar21 == (ulonglong *****)0x0 ||
        SCARRY8((longlong)pppppuVar35,1) != (longlong)*ppppppuVar21 < 0) goto LAB_1400b34ee;
    uStack_ee = uVar40 * 0x10000 | uVar40 & 0xffff;
    cStack_ea = '\x01';
    uStack_f0 = 1;
    uStack_118 = (code *)0x8000000000000001;
    uStack_130 = (ulonglong ******)0x0;
    uStack_110 = ppppppuVar21;
    pppppuStack_70 = (ulonglong *****)ppppppuVar21;
    if (ppppuStack_78 == ppppuStack_88) {
      pdb_142d7eec0(&ppppuStack_88);
    }
    pppppuStack_80[(longlong)ppppuVar13 * 9 + 8] =
         (ulonglong ****)CONCAT17(uStack_e9,CONCAT16(cStack_ea,CONCAT42(uStack_ee,uStack_f0)));
    ppppppuVar21 = (ulonglong ******)(pppppuStack_80 + (longlong)ppppuVar13 * 9 + 6);
    *(undefined4 *)ppppppuVar21 = uStack_100;
    *(undefined4 *)((longlong)ppppppuVar21 + 4) = uStack_fc;
    *(undefined4 *)(ppppppuVar21 + 1) = uStack_f8;
    *(undefined4 *)((longlong)ppppppuVar21 + 0xc) = uStack_f4;
    ppppppuVar21 = (ulonglong ******)(pppppuStack_80 + (longlong)ppppuVar13 * 9 + 4);
    *(undefined4 *)ppppppuVar21 = (undefined4)uStack_110;
    *(undefined4 *)((longlong)ppppppuVar21 + 4) = uStack_110._4_4_;
    *(undefined4 *)(ppppppuVar21 + 1) = (undefined4)uStack_108;
    *(undefined4 *)((longlong)ppppppuVar21 + 0xc) = uStack_108._4_4_;
    ppppppuVar21 = (ulonglong ******)(pppppuStack_80 + (longlong)ppppuVar13 * 9 + 2);
    *(undefined4 *)ppppppuVar21 = (undefined4)uStack_120;
    *(undefined4 *)((longlong)ppppppuVar21 + 4) = uStack_120._4_4_;
    *(undefined4 *)(ppppppuVar21 + 1) = (undefined4)uStack_118;
    *(undefined4 *)((longlong)ppppppuVar21 + 0xc) = uStack_118._4_4_;
    ppppppuVar21 = (ulonglong ******)(pppppuStack_80 + (longlong)ppppuVar13 * 9);
    *(undefined4 *)ppppppuVar21 = (undefined4)uStack_130;
    *(undefined4 *)((longlong)ppppppuVar21 + 4) = uStack_130._4_4_;
    *(undefined4 *)(ppppppuVar21 + 1) = (undefined4)uStack_128;
    *(undefined4 *)((longlong)ppppppuVar21 + 0xc) = uStack_128._4_4_;
    ppppuStack_78 = (ulonglong ****)((longlong)ppppuVar13 + 1);
    *(undefined4 *)param_11[2] = *(undefined4 *)((longlong)param_11 + 0x1c);
    plVar23 = *(longlong **)(*param_11 + 8);
    pppppuStack_60 = (ulonglong *****)(*param_11 + 8);
    if (plVar23 != (longlong *)0x0) {
      LOCK();
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
        pdb_140c7b370(pppppuStack_60);
      }
    }
    *pppppuStack_60 = (ulonglong ****)pppppuStack_70;
  }
  ppppuVar13 = ppppuStack_78;
  if (bVar49 && bVar52 || bVar50 && bVar51) {
    ppppppuVar21 = *(ulonglong *******)*puStack_188;
    LOCK();
    pppppuVar35 = *ppppppuVar21;
    *ppppppuVar21 = (ulonglong *****)((longlong)*ppppppuVar21 + 1);
    UNLOCK();
    if (*ppppppuVar21 == (ulonglong *****)0x0 ||
        SCARRY8((longlong)pppppuVar35,1) != (longlong)*ppppppuVar21 < 0) goto LAB_1400b34ee;
    cStack_ea = '\x02';
    uStack_f0 = 0;
    uStack_118 = (code *)0x8000000000000001;
    uStack_130 = (ulonglong ******)0x0;
    uStack_110 = ppppppuVar21;
    if (ppppuStack_78 == ppppuStack_88) {
      pdb_142d7eec0(&ppppuStack_88);
    }
    pppppuStack_80[(longlong)ppppuVar13 * 9 + 8] =
         (ulonglong ****)CONCAT17(uStack_e9,CONCAT16(cStack_ea,CONCAT42(uStack_ee,uStack_f0)));
    pppppuStack_80[(longlong)ppppuVar13 * 9 + 6] = (ulonglong ****)CONCAT44(uStack_fc,uStack_100);
    (pppppuStack_80 + (longlong)ppppuVar13 * 9 + 6)[1] =
         (ulonglong ****)CONCAT44(uStack_f4,uStack_f8);
    pppppuStack_80[(longlong)ppppuVar13 * 9 + 4] = (ulonglong ****)uStack_110;
    (pppppuStack_80 + (longlong)ppppuVar13 * 9 + 4)[1] = (ulonglong ****)uStack_108;
    pppppuStack_80[(longlong)ppppuVar13 * 9 + 2] = (ulonglong ****)uStack_120;
    (pppppuStack_80 + (longlong)ppppuVar13 * 9 + 2)[1] = (ulonglong ****)uStack_118;
    ppppppuVar21 = (ulonglong ******)(pppppuStack_80 + (longlong)ppppuVar13 * 9);
    *(undefined4 *)ppppppuVar21 = (undefined4)uStack_130;
    *(undefined4 *)((longlong)ppppppuVar21 + 4) = uStack_130._4_4_;
    *(undefined4 *)(ppppppuVar21 + 1) = (undefined4)uStack_128;
    *(undefined4 *)((longlong)ppppppuVar21 + 0xc) = uStack_128._4_4_;
    ppppuStack_78 = (ulonglong ****)((longlong)ppppuVar13 + 1);
  }
  lVar20 = param_14[1];
  uVar48 = *(ulonglong *)*param_14;
  pppppuVar36 = (ulonglong *****)0x0;
  pppppuVar35 = (ulonglong *****)(uVar48 - *(ulonglong *)(lVar20 + 0x18));
  if (uVar48 < *(ulonglong *)(lVar20 + 0x18)) {
    pppppuVar35 = pppppuVar36;
  }
  pppppuVar22 = (ulonglong *****)(uVar48 - *(ulonglong *)(lVar20 + 0x38));
  if (uVar48 < *(ulonglong *)(lVar20 + 0x38)) {
    pppppuVar22 = pppppuVar36;
  }
  pppppuVar9 = *(ulonglong ******)(lVar20 + 0x10);
  pppppuVar10 = *(ulonglong ******)(lVar20 + 0x30);
  bVar50 = pppppuVar10 < pppppuVar22;
  pppppuVar27 = (ulonglong *****)((longlong)pppppuVar10 - (longlong)pppppuVar22);
  pppppuVar28 = pppppuVar27;
  if (bVar50) {
    pppppuVar28 = pppppuVar36;
  }
  bVar51 = pppppuVar9 < pppppuVar35;
  pppppuVar38 = (ulonglong *****)((longlong)pppppuVar9 - (longlong)pppppuVar35);
  pppppuVar39 = pppppuVar38;
  if (bVar51) {
    pppppuVar39 = pppppuVar36;
  }
  lVar34 = *(longlong *)(lVar20 + 8);
  pppppuVar46 = (ulonglong *****)((longlong)pppppuVar28 + (longlong)pppppuVar39);
  if (!bVar51 && pppppuVar38 != (ulonglong *****)0x0 ||
      !bVar50 && pppppuVar27 != (ulonglong *****)0x0) {
    pppppuVar46 = pppppuVar36;
  }
  lVar42 = *(longlong *)(lVar20 + 0x28);
  *(ulonglong *)*param_14 = *(longlong *)(lVar20 + 0x40) - (longlong)pppppuVar46;
  if (!bVar51 && pppppuVar38 != (ulonglong *****)0x0 ||
      !bVar50 && pppppuVar27 != (ulonglong *****)0x0) {
    lVar34 = lVar34 + (longlong)pppppuVar35 * 0x28;
    if (pppppuVar9 < pppppuVar35) {
      lVar34 = 8;
    }
    lVar20 = 0;
    if (pppppuVar35 < pppppuVar9) {
      lVar20 = lVar34 + -0x28 + (longlong)pppppuVar39 * 0x28;
    }
    lVar42 = lVar42 + (longlong)pppppuVar22 * 0x28;
    if (pppppuVar10 < pppppuVar22) {
      lVar42 = 8;
    }
    lVar34 = lVar42 + -0x28 + (longlong)pppppuVar28 * 0x28;
    if (pppppuVar10 <= pppppuVar22) {
      lVar34 = lVar20;
    }
    uStack_49 = 1;
    pdb_140f3e9e0(&uStack_150,*(undefined8 *)(lVar34 + 8),*(undefined8 *)(lVar34 + 0x10),
                  &UNK_142e3b4d0,0xe);
    ppppuVar13 = ppppuStack_78;
    uStack_108._0_4_ = SUB84(uStack_140,0);
    uStack_108._4_4_ = uStack_140._4_4_;
    uStack_100 = uStack_138;
    uStack_fc = uStack_134;
    uStack_118._0_4_ = SUB84(uStack_150,0);
    uStack_118._4_4_ = uStack_150._4_4_;
    uStack_110._0_4_ = SUB84(uStack_148,0);
    uStack_110._4_4_ = uStack_148._4_4_;
    cStack_ea = 2;
    uStack_f0 = 1;
    uStack_ee = 0x2000200;
    uStack_f8 = CONCAT31(uStack_f8._1_3_,0x55);
    uStack_130 = (ulonglong ******)0x0;
    if (ppppuStack_78 == ppppuStack_88) {
      pdb_142d7eec0(&ppppuStack_88);
    }
    pppppuStack_80[(longlong)ppppuVar13 * 9 + 8] =
         (ulonglong ****)CONCAT17(uStack_e9,CONCAT16(cStack_ea,CONCAT42(uStack_ee,uStack_f0)));
    ppppppuVar21 = (ulonglong ******)(pppppuStack_80 + (longlong)ppppuVar13 * 9 + 6);
    *(undefined4 *)ppppppuVar21 = uStack_100;
    *(undefined4 *)((longlong)ppppppuVar21 + 4) = uStack_fc;
    *(undefined4 *)(ppppppuVar21 + 1) = uStack_f8;
    *(undefined4 *)((longlong)ppppppuVar21 + 0xc) = uStack_f4;
    ppppppuVar21 = (ulonglong ******)(pppppuStack_80 + (longlong)ppppuVar13 * 9 + 4);
    *(undefined4 *)ppppppuVar21 = (undefined4)uStack_110;
    *(undefined4 *)((longlong)ppppppuVar21 + 4) = uStack_110._4_4_;
    *(undefined4 *)(ppppppuVar21 + 1) = (undefined4)uStack_108;
    *(undefined4 *)((longlong)ppppppuVar21 + 0xc) = uStack_108._4_4_;
    ppppppuVar21 = (ulonglong ******)(pppppuStack_80 + (longlong)ppppuVar13 * 9 + 2);
    *(undefined4 *)ppppppuVar21 = (undefined4)uStack_120;
    *(undefined4 *)((longlong)ppppppuVar21 + 4) = uStack_120._4_4_;
    *(undefined4 *)(ppppppuVar21 + 1) = (undefined4)uStack_118;
    *(undefined4 *)((longlong)ppppppuVar21 + 0xc) = uStack_118._4_4_;
    ppppppuVar21 = (ulonglong ******)(pppppuStack_80 + (longlong)ppppuVar13 * 9);
    *(undefined4 *)ppppppuVar21 = (undefined4)uStack_130;
    *(undefined4 *)((longlong)ppppppuVar21 + 4) = uStack_130._4_4_;
    *(undefined4 *)(ppppppuVar21 + 1) = (undefined4)uStack_128;
    *(undefined4 *)((longlong)ppppppuVar21 + 0xc) = uStack_128._4_4_;
    ppppuStack_78 = (ulonglong ****)((longlong)ppppuVar13 + 1);
    uVar3 = *(ushort *)*param_9;
    uVar4 = ((ushort *)*param_9)[1];
    uStack_49 = 1;
    pdb_140f3e9e0(&uStack_150,*(undefined8 *)(lVar34 + 8),*(undefined8 *)(lVar34 + 0x10),
                  &UNK_142e3b4de,0x16);
    ppppuVar13 = ppppuStack_78;
    uVar15 = 1;
    if (1 < uVar4) {
      uVar15 = uVar4;
    }
    fVar55 = ((float)uVar3 * _DAT_142e3b1e0) / (float)uVar15;
    if (fVar55 <= _DAT_142e36f28) {
      fVar55 = _DAT_142e36f28;
    }
    fVar54 = 0.0;
    if (0.0 <= fVar55) {
      fVar54 = fVar55;
    }
    fVar55 = _DAT_142e3b1dc;
    if (fVar54 <= _DAT_142e3b1dc) {
      fVar55 = fVar54;
    }
    uStack_ee = (int)fVar55 & 0xffffU | 0x400000;
    uStack_108 = uStack_140;
    uStack_100 = uStack_138;
    uStack_fc = uStack_134;
    uStack_118 = (code *)uStack_150;
    uStack_110 = uStack_148;
    cStack_ea = '\x02';
    uStack_f0 = 1;
    uStack_f8 = CONCAT31(uStack_f8._1_3_,0x5f);
    uStack_130 = (ulonglong ******)0x0;
    if (ppppuStack_78 == ppppuStack_88) {
      pdb_142d7eec0(&ppppuStack_88);
    }
    pppppuVar35 = (ulonglong *****)
                  CONCAT17(uStack_e9,CONCAT16(cStack_ea,CONCAT42(uStack_ee,uStack_f0)));
    pppppuStack_80[(longlong)ppppuVar13 * 9 + 8] = (ulonglong ****)pppppuVar35;
    pppppuStack_80[(longlong)ppppuVar13 * 9 + 6] = (ulonglong ****)CONCAT44(uStack_fc,uStack_100);
    (pppppuStack_80 + (longlong)ppppuVar13 * 9 + 6)[1] =
         (ulonglong ****)CONCAT44(uStack_f4,uStack_f8);
    pppppuStack_80[(longlong)ppppuVar13 * 9 + 4] = (ulonglong ****)uStack_110;
    (pppppuStack_80 + (longlong)ppppuVar13 * 9 + 4)[1] = (ulonglong ****)uStack_108;
    pppppuStack_80[(longlong)ppppuVar13 * 9 + 2] = (ulonglong ****)uStack_120;
    (pppppuStack_80 + (longlong)ppppuVar13 * 9 + 2)[1] = (ulonglong ****)uStack_118;
    ppppppuVar21 = (ulonglong ******)(pppppuStack_80 + (longlong)ppppuVar13 * 9);
    *(undefined4 *)ppppppuVar21 = (undefined4)uStack_130;
    *(undefined4 *)((longlong)ppppppuVar21 + 4) = uStack_130._4_4_;
    *(undefined4 *)(ppppppuVar21 + 1) = (undefined4)uStack_128;
    *(undefined4 *)((longlong)ppppppuVar21 + 0xc) = uStack_128._4_4_;
    ppppuStack_78 = (ulonglong ****)((longlong)ppppuVar13 + 1);
  }
  LOCK();
  bVar50 = DAT_143ca3038 == '\0';
  if (bVar50) {
    DAT_143ca3038 = '\x01';
  }
  UNLOCK();
  if (!bVar50) {
    uStack_49 = 1;
    pdb_142dbd1a0(&DAT_143ca3038,pppppuVar35,1000000000);
  }
  uStack_49 = 1;
  pdb_140e9a150(&DAT_143ca3038);
  uStack_118 = (code *)(pppppuStack_80 + (longlong)ppppuStack_78 * 9);
  uStack_130 = (ulonglong ******)pppppuStack_80;
  uStack_128 = (code *)pppppuStack_80;
  uStack_120 = (ulonglong *****)ppppuStack_88;
  if ((ulonglong *****)((longlong)_DAT_143ca3040 - (longlong)_DAT_143ca3050) < ppppuStack_78) {
    uStack_51 = 1;
    pdb_142d7f1b0(&DAT_143ca3040,_DAT_143ca3050,ppppuStack_78,8,0x78);
  }
  uStack_150 = (ulonglong ******)&DAT_143ca3050;
  uStack_148 = _DAT_143ca3050;
  uStack_140 = _DAT_143ca3048;
  uStack_51 = 0;
  pdb_140563b70(&uStack_130,&uStack_150);
  uVar17 = *param_12;
  plVar23 = (longlong *)pdb_140a21420(uVar17);
  if ((plVar23 == (longlong *)0x0) || (*plVar23 != -0x7ffffffffffffff6)) goto LAB_1400b32f4;
  ppppppuVar21 = (ulonglong ******)plVar23[3];
  if ((longlong)ppppppuVar21 < 0) {
    uVar37 = 0;
LAB_1400b314f:
    pdb_142dc7e2a(uVar37,ppppppuVar21);
LAB_1400b34ee:
                    /* WARNING: Does not return */
    pcVar11 = (code *)invalidInstructionException();
    (*pcVar11)();
  }
  pppppuStack_60 = (ulonglong *****)ppppppuVar21;
  if (ppppppuVar21 == (ulonglong ******)0x0) {
    pppppuStack_70 = (ulonglong *****)0x1;
  }
  else {
    lVar20 = plVar23[2];
    pdb_14007ee60();
    uVar37 = 1;
    ppppppuVar24 = (ulonglong ******)pub_1406abab0((ulonglong)ppppppuVar21,1);
    if (ppppppuVar24 == (ulonglong ******)0x0) goto LAB_1400b314f;
    pppppuStack_70 = (ulonglong *****)ppppppuVar24;
    pub_142e32760(ppppppuVar24,lVar20,ppppppuVar21);
  }
  lVar20 = plVar23[4];
  *(undefined4 *)param_12[2] = *(undefined4 *)((longlong)param_12 + 0x1c);
  uStack_4f = 1;
  pdb_140a21450(&uStack_130,uVar17);
  if (uStack_130 != (ulonglong ******)0x8000000000000015) {
    uVar48 = 0xe;
    if ((longlong)uStack_130 < 0) {
      uVar48 = (ulonglong)uStack_130 ^ 0x8000000000000000;
    }
    if (uVar48 < 0x11) {
      puVar25 = &uStack_120;
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(uVar48) {
      case 0:
        if ((ulonglong ******)uStack_118 != (ulonglong ******)0x0) {
          LOCK();
          *(ulonglong ******)uStack_118 =
               (ulonglong *****)((longlong)*(ulonglong ******)uStack_118 - 1);
          UNLOCK();
          if (*(ulonglong ******)uStack_118 == (ulonglong *****)0x0) {
            uStack_4f = 1;
            pdb_140315620(&uStack_118);
          }
        }
        break;
      case 10:
      case 0x10:
        ppppppuVar21 = (ulonglong ******)uStack_128;
        if ((ulonglong ******)uStack_128 != (ulonglong ******)0x0) {
code_r0x0001400b3222:
          pub_1406abac0((byte *)*puVar25,(ulonglong)ppppppuVar21,1);
        }
        break;
      case 0xe:
        if (uStack_130 != (ulonglong ******)0x0) {
          pub_1406abac0((byte *)uStack_128,(ulonglong)uStack_130,1);
        }
        if (0 < (longlong)uStack_118) {
          puVar25 = &uStack_110;
          ppppppuVar21 = (ulonglong ******)uStack_118;
          goto code_r0x0001400b3222;
        }
      }
    }
  }
  ppppppuVar21 = _DAT_143ca3050;
  uStack_118 = (code *)pppppuStack_60;
  uStack_110 = (ulonglong ******)pppppuStack_70;
  uStack_108 = (ulonglong ******)pppppuStack_60;
  uStack_100 = CONCAT31(uStack_100._1_3_,(char)lVar20);
  uStack_130 = (ulonglong ******)0x0;
  uStack_f8 = CONCAT31(uStack_f8._1_3_,0x55);
  uStack_f0 = 0;
  cStack_ea = '\x04';
  uStack_c0 = 1;
  ppppuStack_e8 = (ulonglong ****)0x0;
  if (_DAT_143ca3050 == _DAT_143ca3040) {
    pdb_142d7ead0(&DAT_143ca3040);
  }
  ppppppuVar24 = _DAT_143ca3048;
  _DAT_143ca3048[(longlong)ppppppuVar21 * 0xf + 0xe] =
       (ulonglong *****)CONCAT44(uStack_bc,uStack_c0);
  ppppppuVar24[(longlong)ppppppuVar21 * 0xf + 0xc] = (ulonglong *****)ppppuStack_d0;
  (ppppppuVar24 + (longlong)ppppppuVar21 * 0xf + 0xc)[1] = (ulonglong *****)ppppuStack_c8;
  ppppppuVar24[(longlong)ppppppuVar21 * 0xf + 10] = (ulonglong *****)ppppuStack_e0;
  (ppppppuVar24 + (longlong)ppppppuVar21 * 0xf + 10)[1] = (ulonglong *****)ppppuStack_d8;
  ppppppuVar24[(longlong)ppppppuVar21 * 0xf + 8] =
       (ulonglong *****)CONCAT17(uStack_e9,CONCAT16(cStack_ea,CONCAT42(uStack_ee,uStack_f0)));
  (ppppppuVar24 + (longlong)ppppppuVar21 * 0xf + 8)[1] = (ulonglong *****)ppppuStack_e8;
  ppppppuVar24[(longlong)ppppppuVar21 * 0xf + 6] = (ulonglong *****)CONCAT44(uStack_fc,uStack_100);
  (ppppppuVar24 + (longlong)ppppppuVar21 * 0xf + 6)[1] =
       (ulonglong *****)CONCAT44(uStack_f4,uStack_f8);
  ppppppuVar24[(longlong)ppppppuVar21 * 0xf + 4] = (ulonglong *****)uStack_110;
  (ppppppuVar24 + (longlong)ppppppuVar21 * 0xf + 4)[1] = (ulonglong *****)uStack_108;
  ppppppuVar24[(longlong)ppppppuVar21 * 0xf + 2] = uStack_120;
  (ppppppuVar24 + (longlong)ppppppuVar21 * 0xf + 2)[1] = (ulonglong *****)uStack_118;
  ppppppuVar24 = ppppppuVar24 + (longlong)ppppppuVar21 * 0xf;
  *(undefined4 *)ppppppuVar24 = (undefined4)uStack_130;
  *(undefined4 *)((longlong)ppppppuVar24 + 4) = uStack_130._4_4_;
  *(undefined4 *)(ppppppuVar24 + 1) = (undefined4)uStack_128;
  *(undefined4 *)((longlong)ppppppuVar24 + 0xc) = uStack_128._4_4_;
  _DAT_143ca3050 = (ulonglong ******)((longlong)ppppppuVar21 + 1);
LAB_1400b32f4:
  uStack_49 = 0;
  pdb_140e9a350();
  LOCK();
  bVar50 = DAT_143ca3038 == '\x01';
  cVar29 = DAT_143ca3038;
  if (bVar50) {
    DAT_143ca3038 = '\0';
    cVar29 = '\x01';
  }
  UNLOCK();
  if (!bVar50) {
    uStack_49 = 0;
    cVar29 = pdb_142dbcef0(&DAT_143ca3038,0);
  }
  return cVar29;
}

