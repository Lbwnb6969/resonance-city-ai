// VA 0x1400b08c0, PDB extent 4666 bytes
// tiny_glade::screenshot::read_back_screenshot
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/screenshot.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::screenshot::read_back_screenshot
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/screenshot.rs
   Extent: 4666 */

void pdb_1400b08c0(longlong *param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  char cVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong **pplVar15;
  byte *pbVar16;
  longlong *plVar17;
  ulonglong uVar18;
  longlong *arg0;
  longlong unaff_RDI;
  undefined *puVar19;
  undefined *puVar20;
  undefined *unaff_R12;
  undefined *unaff_R13;
  undefined *unaff_R14;
  byte *unaff_R15;
  bool bVar21;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 uStack_1b8;
  longlong **pplStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  longlong lStack_198;
  longlong **pplStack_190;
  longlong **pplStack_188;
  longlong lStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  uint uStack_160;
  undefined4 uStack_15c;
  longlong lStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  undefined8 uStack_140;
  longlong **pplStack_138;
  longlong **pplStack_130;
  longlong lStack_128;
  longlong **pplStack_120;
  byte *pbStack_118;
  longlong **pplStack_110;
  longlong *plStack_108;
  byte *pbStack_100;
  longlong *plStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  longlong *plStack_a8;
  byte *pbStack_a0;
  longlong *plStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 uStack_88;
  undefined7 uStack_87;
  byte *pbStack_70;
  undefined1 uStack_61;
  byte *pbStack_60;
  longlong **pplStack_58;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  arg0 = (longlong *)(param_2 & 0xffffffff);
  cVar11 = pdb_140e94b40();
  if (cVar11 == '\0') {
    lStack_148 = 0;
LAB_1400b0a84:
    bVar2 = *(byte *)(param_1 + 9);
    param_1[9] = 0;
    if ((bVar2 & 1) == 0) {
LAB_1400b12b5:
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_142e3b438);
    }
    uStack_178 = (undefined4)param_1[10];
    uStack_174 = *(undefined4 *)((longlong)param_1 + 0x54);
    uStack_170 = (undefined4)param_1[0xb];
    uStack_16c = *(undefined4 *)((longlong)param_1 + 0x5c);
    puVar19 = (undefined *)param_1[0xb];
    uStack_168 = (undefined4)param_1[0xc];
    uStack_164 = *(undefined4 *)((longlong)param_1 + 100);
    uStack_160 = *(uint *)(param_1 + 0xd);
    uStack_15c = *(undefined4 *)((longlong)param_1 + 0x6c);
    if (param_1[10] == 0) {
      lVar13 = *param_1;
      pbVar16 = (byte *)param_1[1];
      pplVar15 = (longlong **)param_1[2];
      *param_1 = 0;
      puVar19 = unaff_R14;
      if (lVar13 != 1) goto LAB_1400b1245;
      pplStack_130 = (longlong **)(ulonglong)uStack_160;
      uStack_d8 = (longlong **)0x0;
      uStack_d0 = (code *)pplVar15;
      if (pbVar16 != (byte *)0x0) {
        pplStack_138 = (longlong **)0x0;
        pbStack_60 = pbVar16;
        pplStack_58 = pplVar15;
        (*(code *)pplVar15[3])(pbVar16,&pplStack_138);
        if (pplStack_58[1] != (longlong *)0x0) {
          pub_1406abac0(pbStack_60,(ulonglong)pplStack_58[1],(ulonglong)pplStack_58[2]);
        }
        pdb_1404d0050(&uStack_d8);
        goto LAB_1400b1245;
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_142e3b490);
    }
    pbStack_60 = (byte *)CONCAT44(pbStack_60._4_4_,uStack_160);
    pplStack_58 = (longlong **)param_1[0xc];
    cVar11 = pdb_140e94b40();
    if (cVar11 == '\0') {
      unaff_RDI = 0;
      lStack_158 = 0;
      cVar11 = (char)arg0;
      goto joined_r0x0001400b0c7c;
    }
    unaff_R12 = &UNK_142e3b5f0;
    unaff_R15 = (byte *)0x23;
    uVar18 = 0x23;
    lVar13 = pdb_1400b65a0(&UNK_142e3b5f0);
    if (lVar13 == 1) {
      if (0x23 < uVar18) {
        pdb_142dc8070(&UNK_142e3b5f0,0x23,0,uVar18,&UNK_142e3b700);
        goto LAB_1400b14ec;
      }
      unaff_R12 = &UNK_142e3b5f0;
      uVar14 = pdb_1400b65a0(&UNK_142e3b5f0);
      if ((uVar14 & 1) != 0) {
        if (0x23 < uVar18 + 2) goto LAB_1400b14c8;
        unaff_R15 = (byte *)(0x21 - uVar18);
        unaff_R12 = &UNK_142e3b5f2 + uVar18;
      }
    }
    puVar20 = &DAT_142e3b32f;
    unaff_R13 = &UNK_142e3b30c;
    do {
      bVar2 = puVar20[-1];
      uVar12 = (uint)(char)bVar2;
      if ((char)bVar2 < '\0') {
        bVar3 = puVar20[-2];
        if ((char)bVar3 < -0x40) {
          bVar4 = puVar20[-3];
          if ((char)bVar4 < -0x40) {
            pbVar16 = puVar20 + -4;
            puVar20 = puVar20 + -4;
            uVar12 = bVar4 & 0x3f | (*pbVar16 & 7) << 6;
          }
          else {
            puVar20 = puVar20 + -3;
            uVar12 = bVar4 & 0xf;
          }
          uVar12 = bVar3 & 0x3f | uVar12 << 6;
        }
        else {
          puVar20 = puVar20 + -2;
          uVar12 = bVar3 & 0x1f;
        }
        uVar12 = (uint)(bVar2 & 0x3f) | uVar12 << 6;
        if (uVar12 != 0x5c) goto LAB_1400b0bc8;
LAB_1400b0cd8:
        if ((undefined *)0x23 < puVar20 + -0x142e3b30b) goto LAB_1400b1414;
        unaff_RDI = 0x23 - (longlong)(puVar20 + -0x142e3b30b);
        unaff_R13 = puVar20 + 1;
        goto LAB_1400b0cfa;
      }
      puVar20 = puVar20 + -1;
      if (uVar12 == 0x5c) goto LAB_1400b0cd8;
LAB_1400b0bc8:
      if (uVar12 == 0x2f) goto LAB_1400b0cd8;
    } while (puVar20 != &UNK_142e3b30c);
    unaff_RDI = 0x23;
LAB_1400b0cfa:
    pbVar16 = (byte *)pdb_140e97000();
    if (pbVar16[0x68] != 1) goto LAB_1400b12f8;
    do {
      if (*(longlong *)pbVar16 != 0) {
        pdb_142dc8090(&UNK_142f3dcc8);
        goto LAB_1400b14ec;
      }
      pbVar16[0] = 0xff;
      pbVar16[1] = 0xff;
      pbVar16[2] = 0xff;
      pbVar16[3] = 0xff;
      pbVar16[4] = 0xff;
      pbVar16[5] = 0xff;
      pbVar16[6] = 0xff;
      pbVar16[7] = 0xff;
      pbStack_70 = pbVar16;
      uStack_150 = pdb_140e94f10(pbVar16 + 8,unaff_R12,unaff_R15,unaff_R13,unaff_RDI,1,0);
      *(longlong *)pbStack_70 = *(longlong *)pbStack_70 + 1;
      unaff_RDI = 1;
      lStack_158 = 1;
      cVar11 = (char)arg0;
joined_r0x0001400b0c7c:
      if (cVar11 == '\0') {
        plVar17 = (longlong *)0x8000000000000001;
        uVar18 = param_1[3] >> 0x3f & param_1[3] + 0x8000000000000001U;
        if (uVar18 != 0) {
          if (uVar18 == 1) {
            pbVar16 = (byte *)param_1[4];
            LOCK();
            lVar13 = *(longlong *)pbVar16;
            *(longlong *)pbVar16 = *(longlong *)pbVar16 + 1;
            UNLOCK();
            if (*(longlong *)pbVar16 == 0 || SCARRY8(lVar13,1) != *(longlong *)pbVar16 < 0)
            goto LAB_1400b14ec;
            uVar18 = (ulonglong)plStack_98 >> 8;
            plStack_98 = (longlong *)CONCAT71((int7)uVar18,(char)param_1[5]);
            plVar17 = (longlong *)0x8000000000000000;
          }
          else {
            pbVar16 = (byte *)param_1[4];
            LOCK();
            lVar13 = *(longlong *)pbVar16;
            *(longlong *)pbVar16 = *(longlong *)pbVar16 + 1;
            UNLOCK();
            if (*(longlong *)pbVar16 == 0 || SCARRY8(lVar13,1) != *(longlong *)pbVar16 < 0)
            goto LAB_1400b14ec;
          }
          pbStack_a0 = pbVar16;
          plStack_a8 = plVar17;
          if (-1 < (longlong)pplStack_58) goto LAB_1400b0e8f;
LAB_1400b0e00:
          arg0 = (longlong *)0x0;
          pplVar15 = pplStack_58;
LAB_1400b0e02:
          uStack_4b = 1;
          pdb_142dc7e2a(arg0,pplVar15);
          goto LAB_1400b14ec;
        }
        arg0 = (longlong *)param_1[5];
        if ((longlong)arg0 < 0) {
          unaff_R13 = (undefined *)0x0;
LAB_1400b0dc3:
          pdb_142dc7e2a(unaff_R13,arg0);
          goto LAB_1400b14ec;
        }
        if (arg0 == (longlong *)0x0) {
          unaff_R15 = (byte *)0x1;
        }
        else {
          unaff_R12 = (undefined *)param_1[4];
          pdb_14007ee60();
          unaff_R13 = (undefined *)0x1;
          unaff_R15 = pub_1406abab0((ulonglong)arg0,1);
          if (unaff_R15 == (byte *)0x0) goto LAB_1400b0dc3;
          pub_142e32760(unaff_R15,unaff_R12,arg0);
        }
        uStack_88 = (undefined1)param_1[7];
        uStack_90 = CONCAT31(uStack_90._1_3_,(char)param_1[6]);
        plStack_a8 = arg0;
        pbStack_a0 = unaff_R15;
        plStack_98 = arg0;
        if ((longlong)pplStack_58 < 0) goto LAB_1400b0e00;
LAB_1400b0e8f:
        if (pplStack_58 == (longlong **)0x0) {
          pbStack_70 = (byte *)0x1;
        }
        else {
          pdb_14007ee60();
          pplVar15 = pplStack_58;
          arg0 = (longlong *)0x1;
          pbVar16 = pub_1406abab0((ulonglong)pplStack_58,1);
          if (pbVar16 == (byte *)0x0) goto LAB_1400b0e02;
          pbStack_70 = pbVar16;
          pub_142e32760(pbVar16,puVar19,pplVar15);
        }
        lStack_198 = param_1[2];
        uStack_1a8 = (undefined4)*param_1;
        uStack_1a4 = *(undefined4 *)((longlong)param_1 + 4);
        uStack_1a0 = (undefined4)param_1[1];
        uStack_19c = *(undefined4 *)((longlong)param_1 + 0xc);
        *param_1 = 0;
        lStack_128 = -0x8000000000000000;
        pplStack_138 = (longlong **)0x0;
        pplStack_110 = (longlong **)((ulonglong)pplStack_110 & 0xffffffffffffff00);
        pdb_14007ee60();
        pplStack_1b0 = (longlong **)pub_1406abab0(0x1b,1);
        uVar9 = _UNK_142e3b342;
        if (pplStack_1b0 == (longlong **)0x0) {
          pdb_142dc7e2a(1,0x1b);
          goto LAB_1400b14ec;
        }
        *(ulonglong *)((longlong)pplStack_1b0 + 0xb) =
             CONCAT35(_UNK_142e3b33f,CONCAT41(_UNK_142e3b33b,DAT_142e3b33a));
        *(undefined8 *)((longlong)pplStack_1b0 + 0x13) = uVar9;
        uVar8 = _UNK_142e3b33b;
        uVar7 = _UNK_142e3b337;
        uVar6 = _UNK_142e3b333;
        *(undefined4 *)pplStack_1b0 = _DAT_142e3b32f;
        *(undefined4 *)((longlong)pplStack_1b0 + 4) = uVar6;
        *(undefined4 *)(pplStack_1b0 + 1) = uVar7;
        *(undefined4 *)((longlong)pplStack_1b0 + 0xc) = uVar8;
        pplStack_190 = (longlong **)0x1b;
        lStack_180 = 0x1b;
        pplStack_188 = pplStack_1b0;
        pdb_140f3cec0(&uStack_d8,&pplStack_138,&pplStack_190);
        puStack_e8 = (undefined *)CONCAT71(uStack_87,uStack_88);
        plStack_f8 = plStack_98;
        uStack_f0 = CONCAT44(uStack_8c,uStack_90);
        plStack_108 = plStack_a8;
        pbStack_100 = pbStack_a0;
        puStack_e0 = (undefined8 *)CONCAT44(puStack_e0._4_4_,pbStack_60._0_4_);
        pplStack_120 = pplStack_58;
        pbStack_118 = pbStack_70;
        pplStack_110 = pplStack_58;
        pplStack_138 = (longlong **)CONCAT44(uStack_1a4,uStack_1a8);
        pplStack_130 = (longlong **)CONCAT44(uStack_19c,uStack_1a0);
        lStack_128 = lStack_198;
        uStack_1b8 = uStack_b8;
        uStack_1c8 = (undefined4)uStack_c8;
        uStack_1c4 = uStack_c8._4_4_;
        uStack_1c0 = uStack_c0;
        uStack_1bc = uStack_bc;
        uStack_49 = 0;
        pdb_14022ed70(&pplStack_190,&uStack_1c8,uStack_d8,uStack_d0,uStack_b0,0,&pplStack_138);
        if (pplStack_190 == (longlong **)0x0) {
          pplStack_138 = pplStack_188;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_142e3b34a,0x19,&pplStack_138,&UNK_142e3b5d0,&UNK_142e3b368);
        }
        uStack_d8 = pplStack_190;
        uStack_d0 = (code *)pplStack_188;
        uStack_c8 = lStack_180;
        if (_DAT_143ca3000 != 2) {
          uStack_4a = 1;
          pdb_142d84c30(&DAT_143ca3000,&DAT_143ca3000);
        }
        LOCK();
        bVar21 = DAT_143ca3010 == '\0';
        if (bVar21) {
          DAT_143ca3010 = '\x01';
        }
        UNLOCK();
        if (!bVar21) {
          uStack_4a = 1;
          pdb_142dbd1a0(&DAT_143ca3010);
        }
        uStack_4a = 1;
        pdb_140e9a150(&DAT_143ca3010);
        uStack_4c = 1;
        pdb_1401732a0(&DAT_143ca3018);
        lVar13 = _DAT_143ca3028;
        lStack_128 = uStack_c8;
        pplStack_138 = uStack_d8;
        pplStack_130 = (longlong **)uStack_d0;
        if (_DAT_143ca3028 == _DAT_143ca3018) {
          pdb_142d895b0(&DAT_143ca3018);
        }
        lVar10 = _DAT_143ca3020;
        *(longlong *)(_DAT_143ca3020 + 0x10 + lVar13 * 0x18) = uStack_c8;
        puVar1 = (undefined4 *)(lVar10 + lVar13 * 0x18);
        *puVar1 = (undefined4)uStack_d8;
        puVar1[1] = uStack_d8._4_4_;
        puVar1[2] = (undefined4)uStack_d0;
        puVar1[3] = uStack_d0._4_4_;
        _DAT_143ca3028 = lVar13 + 1;
        uStack_4a = 0;
        pdb_140e9a350();
        LOCK();
        bVar21 = DAT_143ca3010 == '\x01';
        if (bVar21) {
          DAT_143ca3010 = '\0';
        }
        UNLOCK();
        if (!bVar21) {
          uStack_4a = 0;
          pdb_142dbcef0(&DAT_143ca3010,0);
        }
        param_1 = (longlong *)0x0;
        unaff_RDI = lStack_158;
      }
      else {
        lStack_128 = param_1[2];
        pplStack_138 = (longlong **)*param_1;
        pplStack_130 = (longlong **)param_1[1];
        *param_1 = 0;
        param_1 = (longlong *)
                  pdb_1400b5010(param_1 + 3,(ulonglong)pbStack_60 & 0xffffffff,puVar19,pplStack_58,
                                &pplStack_138);
      }
      if (unaff_RDI != 0) {
        pplVar15 = (longlong **)pdb_140e97000();
        if ((*(code *)(pplVar15 + 0xd) != (code)0x1) &&
           (pplVar15 = (longlong **)pdb_142d7de90(pplVar15,0), pplVar15 == (longlong **)0x0)) {
          pdb_142dc7890(&UNK_142f3dc40);
          goto LAB_1400b14ec;
        }
        if (*pplVar15 != (longlong *)0x0) {
          pdb_142dc8090(&UNK_142f3dcc8);
          goto LAB_1400b14ec;
        }
        *pplVar15 = (longlong *)0xffffffffffffffff;
        pplStack_58 = pplVar15;
        pdb_140e95370(pplVar15 + 1,uStack_150);
        *pplStack_58 = (longlong *)((longlong)*pplStack_58 + 1);
      }
      if (param_1 != (longlong *)0x0) {
        plStack_a8 = param_1;
        if (*_DAT_143ca8e90 != 0) {
          uStack_d8 = &plStack_a8;
          uStack_d0 = pdb_140f36c30;
          pplStack_138 = (longlong **)0x0;
          pplStack_130 = (longlong **)&UNK_142e3b477;
          lStack_128 = 0x16;
          pplStack_120 = (longlong **)0x0;
          pbStack_118 = &UNK_142e3b2e8;
          pplStack_110 = (longlong **)0x23;
          plStack_108 = (longlong *)0x1;
          pbStack_100 = &UNK_142e3b477;
          plStack_f8 = (longlong *)0x16;
          uStack_f0 = 0x2ed00000001;
          puStack_e8 = &UNK_142e3b450;
          puStack_e0 = &uStack_d8;
          pdb_140f332f0(&uStack_61,&pplStack_138);
        }
        pdb_140f36c40(&plStack_a8);
      }
LAB_1400b1245:
      if (CONCAT44(uStack_174,uStack_178) != 0) {
        pdb_1404b8e50(&uStack_178);
      }
      if (lStack_148 == 0) {
        return;
      }
      plVar17 = (longlong *)pdb_140e97000();
      if (((char)plVar17[0xd] == '\x01') ||
         (plVar17 = (longlong *)pdb_142d7de90(plVar17,0), plVar17 != (longlong *)0x0)) {
        if (*plVar17 == 0) {
          *plVar17 = -1;
          pplStack_58 = (longlong **)plVar17;
          pdb_140e95370(plVar17 + 1,uStack_140);
          *pplStack_58 = (longlong *)((longlong)*pplStack_58 + 1);
          return;
        }
        goto LAB_1400b12a8;
      }
LAB_1400b12eb:
      pbVar16 = (byte *)pdb_142dc7890(&UNK_142f3dc40);
LAB_1400b12f8:
      pbVar16 = (byte *)pdb_142d7de90(pbVar16,0);
    } while (pbVar16 != (byte *)0x0);
    pdb_142dc7890(&UNK_142f3dc40);
  }
  else {
    unaff_R14 = &UNK_142e3b616;
    unaff_RDI = 0x2c;
    uVar18 = 0x2c;
    lVar13 = pdb_1400b65a0(&UNK_142e3b616);
    if (lVar13 != 1) goto LAB_1400b095a;
    if (0x2c < uVar18) {
LAB_1400b13f3:
      pdb_142dc8070(&UNK_142e3b616,0x2c,0);
LAB_1400b1414:
      pdb_142dc8070(&UNK_142e3b30c,0x23);
      goto LAB_1400b14ec;
    }
    unaff_R14 = &UNK_142e3b616;
    uVar14 = pdb_1400b65a0(&UNK_142e3b616);
    if ((uVar14 & 1) == 0) {
LAB_1400b095a:
      puVar19 = &DAT_142e3b32f;
      unaff_R15 = &UNK_142e3b30c;
      do {
        bVar2 = puVar19[-1];
        uVar12 = (uint)(char)bVar2;
        if ((char)bVar2 < '\0') {
          bVar3 = puVar19[-2];
          if ((char)bVar3 < -0x40) {
            bVar4 = puVar19[-3];
            if ((char)bVar4 < -0x40) {
              pbVar16 = puVar19 + -4;
              puVar19 = puVar19 + -4;
              uVar12 = bVar4 & 0x3f | (*pbVar16 & 7) << 6;
            }
            else {
              puVar19 = puVar19 + -3;
              uVar12 = bVar4 & 0xf;
            }
            uVar12 = bVar3 & 0x3f | uVar12 << 6;
          }
          else {
            puVar19 = puVar19 + -2;
            uVar12 = bVar3 & 0x1f;
          }
          uVar12 = (uint)(bVar2 & 0x3f) | uVar12 << 6;
          if (uVar12 != 0x5c) goto LAB_1400b09e4;
LAB_1400b09fd:
          puVar20 = puVar19 + -0x142e3b30b;
          if (puVar20 < (undefined *)0x24) {
            unaff_R12 = (undefined *)(0x23 - (longlong)puVar20);
            unaff_R15 = puVar19 + 1;
            goto LAB_1400b0a20;
          }
          pdb_142dc8070(&UNK_142e3b30c,0x23,puVar20,0x23,&UNK_142e3b6e0);
          goto LAB_1400b13f3;
        }
        puVar19 = puVar19 + -1;
        if (uVar12 == 0x5c) goto LAB_1400b09fd;
LAB_1400b09e4:
        if (uVar12 == 0x2f) goto LAB_1400b09fd;
      } while (puVar19 != &UNK_142e3b30c);
      unaff_R12 = (undefined *)0x23;
LAB_1400b0a20:
      pplVar15 = (longlong **)pdb_140e97000();
      if ((*(code *)(pplVar15 + 0xd) != (code)0x1) &&
         (pplVar15 = (longlong **)pdb_142d7de90(pplVar15,0), puVar19 = unaff_R14,
         pplVar15 == (longlong **)0x0)) goto LAB_1400b12eb;
      if (*pplVar15 != (longlong *)0x0) {
LAB_1400b12a8:
        pdb_142dc8090(&UNK_142f3dcc8);
        goto LAB_1400b12b5;
      }
      *pplVar15 = (longlong *)0xffffffffffffffff;
      pplStack_58 = pplVar15;
      uStack_140 = pdb_140e94f10(pplVar15 + 1,unaff_R14,unaff_RDI,unaff_R15,unaff_R12,1,0);
      *pplStack_58 = (longlong *)((longlong)*pplStack_58 + 1);
      lStack_148 = 1;
      goto LAB_1400b0a84;
    }
    if (uVar18 + 2 < 0x2d) {
      unaff_RDI = 0x2a - uVar18;
      unaff_R14 = &UNK_142e3b618 + uVar18;
      goto LAB_1400b095a;
    }
    pdb_142dc8070(&UNK_142e3b616,0x2c,uVar18 + 2,0x2c,&UNK_142e3b718);
LAB_1400b14c8:
    pdb_142dc8070(&UNK_142e3b5f0,0x23);
  }
LAB_1400b14ec:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}

