// VA 0x140bef0a0, PDB extent 3615 bytes
// country_core::systems::ui::hover_intersection::hover_intersection
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/hover_intersection.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::ui::hover_intersection::hover_intersection
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/hover_intersection.rs
   Extent: 3615 */

void pdb_140bef0a0(longlong *param_1,byte **param_2,longlong param_3,byte **param_4,byte ***param_5,
                  undefined8 *param_6,longlong *param_7)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  byte bVar5;
  undefined1 *puVar6;
  code *pcVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  byte *pbVar15;
  byte *pbVar16;
  char cVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined *puVar20;
  byte *pbVar21;
  longlong *plVar22;
  longlong *plVar23;
  uint uVar24;
  ulonglong uVar25;
  byte *pbVar26;
  undefined1 (*pauVar27) [16];
  ulonglong *puVar28;
  byte **ppbVar29;
  undefined8 *puVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined1 (*pauVar36) [16];
  byte **ppbVar37;
  undefined8 in_stack_fffffffffffffea8;
  undefined4 uVar38;
  undefined8 in_stack_fffffffffffffeb0;
  undefined4 uVar39;
  longlong lStack_140;
  byte *pbStack_138;
  longlong lStack_130;
  byte *pbStack_128;
  undefined1 *puStack_120;
  byte abStack_118 [12];
  undefined1 auStack_10c [12];
  byte **ppbStack_100;
  byte *apbStack_f8 [3];
  ulonglong uStack_e0;
  byte **ppbStack_d8;
  longlong lStack_d0;
  undefined8 uStack_c8;
  byte *pbStack_c0;
  byte **ppbStack_b8;
  byte **ppbStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  byte *pbStack_98;
  byte *pbStack_90;
  byte **ppbStack_88;
  byte ***pppbStack_80;
  byte bStack_71;
  byte **ppbStack_70;
  longlong *plStack_68;
  ulonglong *puStack_60;
  byte *pbStack_58;
  undefined8 uStack_48;
  
  uVar38 = (undefined4)((ulonglong)in_stack_fffffffffffffea8 >> 0x20);
  uVar39 = (undefined4)((ulonglong)in_stack_fffffffffffffeb0 >> 0x20);
  uStack_48 = 0xfffffffffffffffe;
  lStack_a0 = param_3;
  ppbStack_70 = param_4;
  cVar17 = pdb_140e94b40();
  if (cVar17 == '\0') {
    lStack_d0 = 0;
LAB_140bef27f:
    *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
    param_1 = (longlong *)*param_1;
    ppbStack_d8 = param_2;
    pdb_1414c9450(abStack_118,*(undefined4 *)*ppbStack_70,*(undefined4 *)(*ppbStack_70 + 4),*param_2
                  ,CONCAT44(uVar38,(float)*(uint *)*param_6),
                  CONCAT44(uVar39,(float)((uint *)*param_6)[1]));
    puStack_120 = auStack_10c;
    param_7[2] = 0;
    puVar28 = (ulonglong *)(param_1 + 0x12);
    uVar25 = param_1[0x12];
    pbStack_128 = abStack_118;
    if (uVar25 < 0xfffffffffffffff0 && (char)(((uint)uVar25 & 8) >> 3) == '\0') {
      LOCK();
      uVar19 = *puVar28;
      if (uVar25 == uVar19) {
        *puVar28 = uVar25 + 0x10;
      }
      UNLOCK();
      if (uVar25 != uVar19) goto LAB_140bef317;
    }
    else {
LAB_140bef317:
      pdb_142dbb5f0(puVar28);
    }
    pdb_140e9a150(puVar28);
    uStack_e0 = (ulonglong)puVar28 | 1;
    pdb_140e9a150();
    lVar18 = param_1[0x16];
    plStack_68 = param_1;
    puStack_60 = puVar28;
    if (lVar18 != 0) {
      pauVar27 = (undefined1 (*) [16])param_1[0x13];
      auVar3 = *pauVar27;
      uVar24 = ~(uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar3[0xf] >> 7) << 0xf);
      pauVar36 = pauVar27 + 1;
      do {
        if ((short)uVar24 == 0) {
          do {
            auVar3 = *pauVar36;
            pauVar27 = pauVar27 + -0x10;
            pauVar36 = pauVar36 + 1;
            uVar24 = (ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar24 == 0);
        }
        iVar8 = 0;
        for (uVar9 = uVar24; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          iVar8 = iVar8 + 1;
        }
        pbStack_58 = *(byte **)((longlong)pauVar27 + (-0x10 - (ulonglong)(uint)(iVar8 << 4)));
        lVar32 = *(longlong *)((longlong)pauVar27 + (-8 - (ulonglong)(uint)(iVar8 << 4)));
        lVar33 = param_7[2];
        if (lVar33 == *param_7) {
          pdb_142d7f1b0(param_7,lVar33,lVar18,8,0x10);
        }
        uVar24 = uVar24 - 1 & uVar24;
        lVar18 = lVar18 + -1;
        lVar31 = param_7[1];
        *(byte **)(lVar31 + lVar33 * 0x10) = pbStack_58;
        *(longlong *)(lVar31 + 8 + lVar33 * 0x10) = lVar32 + 0x10;
        param_7[2] = lVar33 + 1;
      } while (lVar18 != 0);
    }
    puVar28 = puStack_60;
    pdb_140e9a350(puStack_60);
    plVar23 = plStack_68;
    pdb_140e9a350(uStack_e0);
    LOCK();
    uVar25 = *puVar28;
    *puVar28 = *puVar28 - 0x10;
    UNLOCK();
    if ((uVar25 & 0xfffffffffffffff2) == 0x12) {
      pdb_142dbbf50(puVar28);
    }
    lVar18 = pdb_140f2cc80();
    uVar25 = *(ulonglong *)(lVar18 + 0x10);
    if (uVar25 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc84f0(&UNK_14331f8a8);
    }
    pbVar26 = (byte *)param_7[1];
    puVar6 = (undefined1 *)param_7[2];
    if (((ulonglong)puVar6 | uVar25) >> 0x20 == 0) {
      uVar19 = ((ulonglong)puVar6 & 0xffffffff) / (uVar25 & 0xffffffff);
      uVar25 = ((ulonglong)puVar6 & 0xffffffff) % (uVar25 & 0xffffffff);
    }
    else {
      uVar19 = (ulonglong)puVar6 / uVar25;
      uVar25 = (ulonglong)puVar6 % uVar25;
    }
    if (uVar19 < (puVar6 == (undefined1 *)0xffffffffffffffff)) {
      uVar19 = (ulonglong)(puVar6 == (undefined1 *)0xffffffffffffffff);
    }
    apbStack_f8[0] = (byte *)(uVar19 + (uVar19 == 0));
    ppbStack_b8 = &pbStack_128;
    ppbStack_b0 = ppbStack_70;
    lStack_a8 = lStack_a0;
    ppbStack_100 = &pbStack_c0;
    pbStack_c0 = abStack_118;
    plVar22 = (longlong *)pdb_140901ce0(0,uVar25);
    if (plVar22 == (longlong *)0x0) goto LAB_140befb2a;
    pppbStack_80 = &ppbStack_100;
    pbStack_98 = pbVar26;
    pbStack_90 = puVar6;
    ppbStack_88 = apbStack_f8;
    pdb_1409c0190(&lStack_140,lVar18,1,*plVar22 + 0x10,*plVar22 + 0x10,&pbStack_98);
    if (SBORROW8(0,lStack_140)) goto LAB_140befb2a;
    param_7[2] = 0;
    plVar23[2] = 0;
    pbStack_c0 = (byte *)0x0;
    ppbStack_b8 = (byte **)0x8;
    ppbStack_b0 = (byte **)0x0;
    pppbStack_80 = (byte ***)(pbStack_138 + lStack_130 * 0x30);
    pbStack_98 = pbStack_138;
    pbStack_90 = pbStack_138;
    ppbStack_88 = (byte **)lStack_140;
    if (lStack_130 == 0) {
      param_2 = (byte **)0x0;
    }
    else {
      lVar18 = *(longlong *)pbStack_138;
      pbStack_90 = pbStack_138 + 0x30;
      if (SBORROW8(0,lVar18)) {
        param_2 = (byte **)0x0;
      }
      else {
        ppbVar37 = (byte **)0x8;
        param_2 = (byte **)0x0;
        do {
          pbStack_58 = *(byte **)(pbStack_138 + 8);
          uVar25 = *(ulonglong *)(pbStack_138 + 0x10);
          puVar28 = *(ulonglong **)(pbStack_138 + 0x18);
          ppbStack_70 = *(byte ***)(pbStack_138 + 0x20);
          uVar19 = *(ulonglong *)(pbStack_138 + 0x28);
          lVar32 = plVar23[2];
          lStack_a0 = lVar18;
          if ((ulonglong)(*plVar23 - lVar32) < uVar25) {
            puStack_60 = puVar28;
            pdb_142d7f1b0(plVar23,lVar32,uVar25,8,0x38);
            lVar32 = plVar23[2];
            puVar28 = puStack_60;
LAB_140bef75e:
            pub_142e32760(lVar32 * 0x38 + plVar23[1],pbStack_58,uVar25 * 0x38);
          }
          else if (uVar25 != 0) goto LAB_140bef75e;
          plVar23[2] = lVar32 + uVar25;
          if (lStack_a0 != 0) {
            pub_1406abac0(pbStack_58,lStack_a0 * 0x38,8);
          }
          if ((ulonglong)((longlong)pbStack_c0 - (longlong)param_2) < uVar19) {
            puStack_60 = puVar28;
            pdb_142d7f1b0(&pbStack_c0,param_2,uVar19,8,0x40);
            puVar28 = puStack_60;
            param_2 = ppbStack_b0;
            ppbVar37 = ppbStack_b8;
LAB_140bef7b8:
            ppbVar29 = ppbStack_70;
            pub_142e32760(ppbVar37 + (longlong)param_2 * 8,ppbStack_70,uVar19 << 6);
          }
          else {
            ppbVar29 = ppbStack_70;
            if (uVar19 != 0) goto LAB_140bef7b8;
          }
          param_2 = (byte **)((longlong)param_2 + uVar19);
          ppbStack_b0 = param_2;
          if (puVar28 != (ulonglong *)0x0) {
            pub_1406abac0((byte *)ppbVar29,(longlong)puVar28 << 6,8);
          }
          pbStack_138 = pbStack_90;
          if ((byte ***)pbStack_90 == pppbStack_80) goto LAB_140bef5ce;
          pbVar26 = pbStack_90 + 0x30;
          lVar18 = *(longlong *)pbStack_90;
          pbStack_90 = pbVar26;
        } while (!SBORROW8(0,lVar18));
      }
      pbStack_138 = pbStack_138 + 0x30;
    }
LAB_140bef5ce:
    if (pppbStack_80 != (byte ***)pbStack_138) {
      uVar25 = (ulonglong)((longlong)pppbStack_80 - (longlong)pbStack_138) / 0x30;
      pbVar26 = pbStack_138 + 0x20;
      do {
        if (*(longlong *)(pbVar26 + -0x20) != 0) {
          pub_1406abac0(*(byte **)(pbVar26 + -0x18),*(longlong *)(pbVar26 + -0x20) * 0x38,8);
        }
        if (*(longlong *)(pbVar26 + -8) != 0) {
          pub_1406abac0(*(byte **)pbVar26,*(longlong *)(pbVar26 + -8) << 6,8);
        }
        pbVar26 = pbVar26 + 0x30;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
    if (ppbStack_88 != (byte **)0x0) {
      pub_1406abac0(pbStack_98,(longlong)ppbStack_88 * 0x30,8);
    }
    pbStack_90 = auStack_10c;
    ppbStack_88 = ppbStack_d8;
    pppbStack_80 = param_5;
    pbStack_98 = abStack_118;
    pdb_1415e0cb0(plVar23,&pbStack_98);
    ppbVar37 = ppbStack_b8;
    pbVar26 = &bStack_71;
    pbStack_98 = pbVar26;
    if ((byte **)0x1 < param_2) {
      if (param_2 < (byte **)0x15) {
        pdb_14151be80(ppbStack_b8,param_2,1,&pbStack_98);
      }
      else {
LAB_140befb6c:
        pdb_140c75670(ppbVar37,param_2,&pbStack_98);
      }
    }
    uVar25 = plStack_68[2];
    if (uVar25 != 0) {
      lVar18 = plStack_68[1];
      pbVar21 = (byte *)(lVar18 + 0x69);
      uVar19 = 0;
LAB_140bef6e0:
      if ((0.0 <= *(float *)(pbVar21 + -0x49)) || ((pbVar21[-0x38] & 4) != 0)) goto LAB_140bef6d0;
      if (uVar19 + 1 < uVar25) {
        lVar32 = ~uVar19 + uVar25;
        do {
          if ((0.0 <= *(float *)(pbVar21 + -0x11)) || ((*pbVar21 & 4) != 0)) {
            lVar33 = uVar19 * 0x38;
            *(undefined8 *)(lVar18 + 0x30 + lVar33) = *(undefined8 *)(pbVar21 + -1);
            uVar38 = *(undefined4 *)(pbVar21 + -0x31);
            uVar39 = *(undefined4 *)(pbVar21 + -0x2d);
            uVar10 = *(undefined4 *)(pbVar21 + -0x29);
            uVar11 = *(undefined4 *)(pbVar21 + -0x25);
            uVar12 = *(undefined8 *)(pbVar21 + -0x21);
            uVar13 = *(undefined8 *)(pbVar21 + -0x19);
            uVar14 = *(undefined8 *)(pbVar21 + -9);
            puVar30 = (undefined8 *)(lVar18 + 0x20 + lVar33);
            *puVar30 = *(undefined8 *)(pbVar21 + -0x11);
            puVar30[1] = uVar14;
            puVar30 = (undefined8 *)(lVar18 + 0x10 + lVar33);
            *puVar30 = uVar12;
            puVar30[1] = uVar13;
            puVar2 = (undefined4 *)(lVar18 + lVar33);
            *puVar2 = uVar38;
            puVar2[1] = uVar39;
            puVar2[2] = uVar10;
            puVar2[3] = uVar11;
            uVar19 = uVar19 + 1;
          }
          pbVar21 = pbVar21 + 0x38;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
        lVar18 = plStack_68[1];
      }
      plStack_68[2] = uVar19;
      uVar25 = uVar19;
LAB_140bef900:
      pbStack_98 = pbVar26;
      if (1 < uVar25) {
        if (uVar25 < 0x15) {
          pdb_14151b930(lVar18,uVar25,1,&pbStack_98);
        }
        else {
          pdb_140c76ff0(lVar18,uVar25,&pbStack_98);
        }
      }
    }
    lVar18 = plStack_68[2];
    if ((byte **)(*plStack_68 - lVar18) < param_2) {
      pdb_142d7f1b0(plStack_68,lVar18,param_2,8,0x38);
      lVar18 = plStack_68[2];
      lVar32 = plStack_68[1];
      if (param_2 == (byte **)0x1) goto LAB_140bef937;
LAB_140bef9c1:
      puVar30 = (undefined8 *)(lVar18 * 0x38 + lVar32);
      ppbVar29 = ppbVar37 + 9;
      lVar33 = 0;
      do {
        puVar30[6] = ppbVar29[-2];
        pbVar26 = ppbVar29[-8];
        pbVar21 = ppbVar29[-7];
        pbVar1 = ppbVar29[-6];
        pbVar15 = ppbVar29[-5];
        pbVar16 = ppbVar29[-3];
        puVar30[4] = ppbVar29[-4];
        puVar30[5] = pbVar16;
        puVar30[2] = pbVar1;
        puVar30[3] = pbVar15;
        *puVar30 = pbVar26;
        puVar30[1] = pbVar21;
        pbVar26 = ppbVar29[1];
        pbVar21 = ppbVar29[2];
        pbVar1 = ppbVar29[3];
        pbVar15 = ppbVar29[4];
        pbVar16 = ppbVar29[5];
        puVar30[7] = *ppbVar29;
        puVar30[8] = pbVar26;
        puVar30[9] = pbVar21;
        puVar30[10] = pbVar1;
        puVar30[0xb] = pbVar15;
        puVar30[0xc] = pbVar16;
        puVar30[0xd] = ppbVar29[6];
        puVar30 = puVar30 + 0xe;
        lVar33 = lVar33 + -2;
        ppbVar29 = ppbVar29 + 0x10;
      } while (-lVar33 != ((ulonglong)param_2 & 0xfffffffffffffffe));
      lVar18 = lVar18 - lVar33;
      if (((ulonglong)param_2 & 1) == 0) goto LAB_140befa7c;
      lVar33 = -lVar33;
LAB_140befa47:
      lVar31 = lVar18 * 0x38;
      *(byte **)(lVar32 + 0x30 + lVar31) = ppbVar37[lVar33 * 8 + 7];
      pbVar26 = ppbVar37[lVar33 * 8 + 1];
      pbVar21 = (ppbVar37 + lVar33 * 8 + 1)[1];
      pbVar1 = ppbVar37[lVar33 * 8 + 3];
      pbVar15 = (ppbVar37 + lVar33 * 8 + 3)[1];
      pbVar16 = (ppbVar37 + lVar33 * 8 + 5)[1];
      puVar30 = (undefined8 *)(lVar32 + 0x20 + lVar31);
      *puVar30 = ppbVar37[lVar33 * 8 + 5];
      puVar30[1] = pbVar16;
      puVar30 = (undefined8 *)(lVar32 + 0x10 + lVar31);
      *puVar30 = pbVar1;
      puVar30[1] = pbVar15;
      *(undefined8 *)(lVar32 + lVar31) = pbVar26;
      ((undefined8 *)(lVar32 + lVar31))[1] = pbVar21;
      lVar18 = lVar18 + 1;
    }
    else if (param_2 != (byte **)0x0) {
      lVar32 = plStack_68[1];
      if (param_2 != (byte **)0x1) goto LAB_140bef9c1;
LAB_140bef937:
      lVar33 = 0;
      goto LAB_140befa47;
    }
LAB_140befa7c:
    plStack_68[2] = lVar18;
    if (pbStack_c0 != (byte *)0x0) {
      pub_1406abac0((byte *)ppbVar37,(longlong)pbStack_c0 << 6,8);
    }
    if (lStack_d0 == 0) {
      return;
    }
    plVar23 = (longlong *)pdb_140e97000();
    if ((char)plVar23[0xd] != '\x01') goto LAB_140befaf9;
    do {
      if (*plVar23 == 0) {
        *plVar23 = -1;
        pbStack_58 = (byte *)plVar23;
        pdb_140e95370(plVar23 + 1,uStack_c8);
        *(longlong *)pbStack_58 = *(longlong *)pbStack_58 + 1;
        return;
      }
LAB_140befaed:
      plVar23 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140befaf9:
      plVar23 = (longlong *)pdb_142d8ec20(plVar23,0);
    } while (plVar23 != (longlong *)0x0);
  }
  else {
    puVar34 = &UNK_1430664ba;
    pbVar26 = (byte *)0x41;
    uVar25 = 0x41;
    lVar18 = pdb_140bf4190(&UNK_1430664ba);
    if (lVar18 == 1) {
      if (0x41 < uVar25) {
        pdb_142dc8070(&UNK_1430664ba,0x41,0,uVar25,&UNK_1430665c8);
LAB_140befbb0:
        pdb_142dc8070(&UNK_1430664ba,0x41);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      puVar34 = &UNK_1430664ba;
      uVar19 = pdb_140bf4190(&UNK_1430664ba);
      if ((uVar19 & 1) != 0) {
        if (0x41 < uVar25 + 2) goto LAB_140befbb0;
        pbVar26 = (byte *)(0x3f - uVar25);
        puVar34 = &UNK_1430664bc + uVar25;
      }
    }
    puVar20 = &UNK_143065f84;
    puVar35 = &UNK_143065f4c;
    do {
      pbVar21 = puVar20 + -1;
      uVar24 = (uint)(char)*pbVar21;
      if ((int)uVar24 < 0) {
        bVar4 = puVar20[-2];
        if ((char)bVar4 < -0x40) {
          bVar5 = puVar20[-3];
          if ((char)bVar5 < -0x40) {
            pbVar1 = puVar20 + -4;
            puVar20 = puVar20 + -4;
            uVar24 = bVar5 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar20 = puVar20 + -3;
            uVar24 = bVar5 & 0xf;
          }
          uVar24 = bVar4 & 0x3f | uVar24 << 6;
        }
        else {
          puVar20 = puVar20 + -2;
          uVar24 = bVar4 & 0x1f;
        }
        uVar24 = (uint)(*pbVar21 & 0x3f) | uVar24 << 6;
        if (uVar24 != 0x5c) goto LAB_140bef1d9;
LAB_140bef1f5:
        if (puVar20 + -0x143065f4b < (undefined *)0x39) {
          lVar18 = 0x37 - (longlong)(puVar20 + -0x143065f4c);
          puVar35 = puVar20 + 1;
          goto LAB_140bef218;
        }
        pdb_142dc8070(&UNK_143065f4c,0x38,puVar20 + -0x143065f4b,0x38,&UNK_1430665a8);
        ppbVar37 = param_2;
        goto LAB_140befb6c;
      }
      puVar20 = puVar20 + -1;
      if (uVar24 == 0x5c) goto LAB_140bef1f5;
LAB_140bef1d9:
      if (uVar24 == 0x2f) goto LAB_140bef1f5;
    } while (puVar20 != &UNK_143065f4c);
    lVar18 = 0x38;
LAB_140bef218:
    pbVar21 = (byte *)pdb_140e97000();
    if ((pbVar21[0x68] == 1) || (pbVar21 = (byte *)pdb_142d8ec20(pbVar21,0), pbVar21 != (byte *)0x0)
       ) {
      if (*(longlong *)pbVar21 != 0) goto LAB_140befaed;
      pbVar21[0] = 0xff;
      pbVar21[1] = 0xff;
      pbVar21[2] = 0xff;
      pbVar21[3] = 0xff;
      pbVar21[4] = 0xff;
      pbVar21[5] = 0xff;
      pbVar21[6] = 0xff;
      pbVar21[7] = 0xff;
      uVar39 = 0;
      pbStack_58 = pbVar21;
      uStack_c8 = pdb_140e94f10(pbVar21 + 8,puVar34,pbVar26,puVar35,lVar18,1,0);
      uVar38 = (undefined4)((ulonglong)lVar18 >> 0x20);
      *(longlong *)pbStack_58 = *(longlong *)pbStack_58 + 1;
      lStack_d0 = 1;
      goto LAB_140bef27f;
    }
  }
  pdb_142dc7890(&UNK_143326860);
LAB_140befb2a:
  pdb_142dc7890(&UNK_143326860);
                    /* WARNING: Does not return */
  pcVar7 = (code *)invalidInstructionException();
  (*pcVar7)();
LAB_140bef6d0:
  uVar19 = uVar19 + 1;
  pbVar21 = pbVar21 + 0x38;
  if (uVar25 == uVar19) goto LAB_140bef900;
  goto LAB_140bef6e0;
}

