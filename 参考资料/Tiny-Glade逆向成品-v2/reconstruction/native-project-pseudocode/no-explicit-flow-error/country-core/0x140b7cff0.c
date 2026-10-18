// VA 0x140b7cff0, PDB extent 4855 bytes
// country_core::startup::mod_hot_reload::refresh_mod_hot_reload_watches
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/mod_hot_reload.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::startup::mod_hot_reload::refresh_mod_hot_reload_watches
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/mod_hot_reload.rs
   Extent: 4855 */

void pdb_140b7cff0(longlong param_1,longlong *param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  undefined1 (**arg0) [16];
  undefined8 uVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  char cVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 (*pauVar11) [16];
  ulonglong uVar12;
  longlong lVar13;
  undefined1 (*pauVar14) [16];
  byte *pbVar15;
  undefined8 *puVar16;
  undefined1 (*pauVar17) [16];
  uint uVar18;
  ulonglong *puVar19;
  undefined1 (*pauVar20) [16];
  undefined8 uVar21;
  bool bVar22;
  undefined1 (*pauStack_1c8) [16];
  undefined1 (*pauStack_1c0) [16];
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined1 (*pauStack_198) [16];
  undefined1 (*pauStack_190) [16];
  undefined1 (*pauStack_188) [16];
  longlong *plStack_180;
  byte *pbStack_178;
  undefined1 (*pauStack_170) [16];
  undefined1 (*pauStack_168) [16];
  longlong lStack_160;
  byte *pbStack_158;
  undefined8 *puStack_150;
  undefined1 (*pauStack_148) [16];
  undefined1 (*pauStack_140) [16];
  undefined1 (*pauStack_138) [16];
  undefined1 (*pauStack_130) [16];
  longlong *plStack_120;
  undefined1 (*pauStack_118) [16];
  undefined1 (*pauStack_110) [16];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 (*pauStack_e8) [16];
  undefined1 (*pauStack_e0) [16];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 (*pauStack_c8) [16];
  undefined1 (*pauStack_c0) [16];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 (**ppauStack_98) [16];
  byte *pbStack_90;
  longlong *plStack_88;
  longlong *plStack_80;
  undefined *puStack_78;
  undefined1 (*pauStack_70) [16];
  undefined1 (*pauStack_60) [16];
  undefined8 uStack_58;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_58 = param_1;
  pdb_140d8ae10(&pauStack_c8);
  pauVar14 = pauStack_c0 + (longlong)uStack_b8 * 0xb;
  pauStack_e8 = pauStack_c0;
  pauStack_e0 = pauStack_c0;
  uStack_d8 = pauStack_c8;
  uStack_4c = 1;
  uStack_d0 = pauVar14;
  plVar9 = (longlong *)pdb_140f3bda0();
  if ((char)plVar9[2] == '\x01') {
    uStack_a8 = (undefined1 (**) [16])*plVar9;
    pauVar14 = (undefined1 (*) [16])plVar9[1];
  }
  else {
    uStack_4c = 1;
    uStack_a8 = (undefined1 (**) [16])pdb_140f4fd10();
    *plVar9 = (longlong)uStack_a8;
    plVar9[1] = (longlong)pauVar14;
    *(undefined1 *)(plVar9 + 2) = 1;
  }
  puVar16 = (undefined8 *)((longlong)uStack_a8 + 1);
  *plVar9 = (longlong)puVar16;
  uStack_b8 = _DAT_14305c5d0;
  uStack_b0 = _UNK_14305c5d8;
  pauStack_c8 = _DAT_14305c5c0;
  pauStack_c0 = _UNK_14305c5c8;
  pauStack_1c8 = pauStack_e8;
  pauStack_1c0 = pauStack_e0;
  uStack_1b8 = (undefined4)uStack_d8;
  uStack_1b4 = uStack_d8._4_4_;
  uStack_1b0 = (undefined4)uStack_d0;
  uStack_1ac = uStack_d0._4_4_;
  uStack_a0 = pauVar14;
  if ((longlong)uStack_d0 - (longlong)pauStack_e0 != 0) {
    puVar16 = &uStack_a8;
    uStack_4e = 1;
    pdb_142da6120(&pauStack_c8,
                  ((ulonglong)((longlong)uStack_d0 - (longlong)pauStack_e0) >> 4) *
                  0x2e8ba2e8ba2e8ba3,puVar16,1);
  }
  uStack_108 = uStack_d8;
  uStack_100 = (code *)uStack_d0;
  pauStack_118 = pauStack_e8;
  pauStack_110 = pauStack_e0;
  uStack_4e = 0;
  pdb_141b763c0(&pauStack_118,&pauStack_c8);
  pauStack_118 = pauStack_c8;
  pauStack_110 = pauStack_c0;
  uStack_108 = uStack_b8;
  uStack_100 = (code *)uStack_b0;
  uStack_f8 = (undefined4)uStack_a8;
  uStack_f4 = uStack_a8._4_4_;
  uStack_f0 = (undefined4)uStack_a0;
  uStack_ec = uStack_a0._4_4_;
  pdb_140d8ead0(&pauStack_c8);
  pauVar14 = pauStack_c8;
  uStack_b0 = pauStack_c0 + (longlong)uStack_b8 * 0xb;
  pauStack_c8 = pauStack_c0;
  uStack_b8 = pauVar14;
  uStack_a8 = &pauStack_118;
  pdb_140c7e080(&lStack_160,&pauStack_c8);
  pauVar14 = pauStack_110;
  if (pauStack_110 != (undefined1 (*) [16])0x0) {
    if ((undefined1 (*) [16])uStack_100 != (undefined1 (*) [16])0x0) {
      auVar1 = *pauStack_118;
      pauVar17 = pauStack_118 + 1;
      uVar18 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
      pauVar11 = (undefined1 (*) [16])uStack_100;
      pauVar20 = pauStack_118;
      do {
        if ((short)uVar18 == 0) {
          do {
            auVar1 = *pauVar17;
            pauVar20 = pauVar20 + -0x20;
            pauVar17 = pauVar17 + 1;
            uVar18 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar18 == 0);
        }
        iVar5 = 0;
        for (uVar6 = uVar18; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          iVar5 = iVar5 + 1;
        }
        uVar12 = *(ulonglong *)((longlong)pauVar20 + (-0x20 - (ulonglong)(uint)(iVar5 << 5)));
        if (uVar12 != 0) {
          puVar16 = (undefined8 *)0x1;
          pub_1406abac0(*(byte **)((longlong)pauVar20 + (-0x18 - (ulonglong)(uint)(iVar5 << 5))),
                        uVar12,1);
        }
        uVar18 = uVar18 - 1 & uVar18;
        pauVar11 = (undefined1 (*) [16])(pauVar11[-1] + 0xf);
      } while (pauVar11 != (undefined1 (*) [16])0x0);
    }
    if (pauVar14[(longlong)pauVar14 * 2 + 3] + 1 != (undefined *)0x0) {
      puVar16 = (undefined8 *)0x10;
      pub_1406abac0((byte *)((longlong)pauStack_118 - ((longlong)pauVar14 * 0x20 + 0x20)),
                    (ulonglong)(pauVar14[(longlong)pauVar14 * 2 + 3] + 1),0x10);
    }
  }
  puVar7 = puStack_150;
  lVar2 = *param_2;
  if (lVar2 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = *(longlong *)(lVar2 + 0x38);
    puVar16 = *(undefined8 **)(lVar2 + 0x40);
  }
  if (lVar10 == 0) {
    puVar16 = (undefined8 *)0x0;
  }
  if (puVar16 == puStack_150) {
    lVar13 = 8;
    if (lVar10 != 0) {
      lVar13 = lVar10;
    }
    uStack_49 = 1;
    cVar8 = pdb_140afe2b0(lVar13,pbStack_158);
    if (cVar8 != '\0') {
      if (lVar2 != 0) {
        lVar2 = *(longlong *)(lVar2 + 0x48);
        pauVar14 = (undefined1 (*) [16])(lVar2 + 0x10);
        LOCK();
        bVar22 = *(char *)(lVar2 + 0x10) == '\0';
        if (bVar22) {
          *(char *)(lVar2 + 0x10) = '\x01';
        }
        UNLOCK();
        if (!bVar22) {
          uStack_49 = 1;
          pdb_142dc6be0(pauVar14);
        }
        puVar19 = _DAT_143ca8f38;
        if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
          uVar18 = 0;
          cVar8 = *(char *)(lVar2 + 0x11);
        }
        else {
          uStack_49 = 1;
          uVar18 = pdb_142dc79e0();
          uVar18 = uVar18 ^ 1;
          cVar8 = *(char *)(lVar2 + 0x11);
        }
        if (cVar8 != '\0') {
          uVar12 = (ulonglong)pauStack_c0 >> 8;
          pauStack_c0 = (undefined1 (*) [16])CONCAT71((int7)uVar12,(char)uVar18);
          pauStack_c8 = pauVar14;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_14305cbe0,0x2b,&pauStack_c8,&UNK_14305cc10,&UNK_14305c9f0);
        }
        uVar12 = (ulonglong)uStack_58 >> 0x20;
        uStack_58 = CONCAT44((int)uVar12,uVar18);
        pauStack_60 = pauVar14;
        pdb_1417bd0c0(lVar2 + 0x18,&uStack_4b);
        if (((char)uStack_58 == '\0') && ((*puVar19 & 0x7fffffffffffffff) != 0)) {
          uStack_49 = 1;
          cVar8 = pdb_142dc79e0();
          if (cVar8 == '\0') {
            *(undefined1 *)(lVar2 + 0x11) = 1;
          }
        }
        LOCK();
        cVar8 = (*pauStack_60)[0];
        (*pauStack_60)[0] = 0;
        UNLOCK();
        if (cVar8 == '\x02') {
          uStack_49 = 1;
          pdb_142dc6ca0();
        }
      }
      goto LAB_140b7d53e;
    }
  }
  if (puVar7 == (undefined8 *)0x0) {
    plVar9 = *(longlong **)(uStack_58 + 8);
    if (plVar9 == (longlong *)0x0) {
      plVar9 = *(longlong **)(uStack_58 + 0x10);
    }
    lVar2 = plVar9[2];
    if ((ulonglong)(*plVar9 - lVar2) < 8) {
      uStack_49 = 1;
      pdb_142d7f1b0(plVar9,lVar2,8,1,1);
    }
    *(code **)(plVar9[1] + lVar2) = pdb_141608ad0;
    plVar9[2] = lVar2 + 8;
  }
  else {
    uStack_49 = 1;
    pdb_140c28b70((undefined1 (*) [16])&pauStack_118,0,250000000);
    if ((int)pauStack_118 != 3) {
      uStack_1a8 = uStack_f8;
      uStack_1a4 = uStack_f4;
      uStack_1a0 = uStack_f0;
      uStack_19c = uStack_ec;
      uStack_1b8 = (undefined4)uStack_108;
      uStack_1b4 = uStack_108._4_4_;
      uStack_1b0 = (undefined4)uStack_100;
      uStack_1ac = uStack_100._4_4_;
      pauStack_1c8 = pauStack_118;
      pauStack_1c0 = pauStack_110;
      uStack_4d = 1;
      plVar9 = (longlong *)pdb_140c7d190();
      pbStack_178 = pbStack_158 + (longlong)puVar7 * 0x28;
      pauStack_60 = (undefined1 (*) [16])pbStack_158;
      puVar19 = _DAT_143ca8e90;
      plStack_180 = plVar9;
      plStack_120 = plVar9;
      if (pbStack_158 != pbStack_178) {
        do {
          while( true ) {
            pdb_140f4ee90(&pauStack_148,*(undefined8 *)((longlong)pauStack_60 + 8),
                          *(undefined8 *)((longlong)pauStack_60 + 0x10));
            pauVar17 = pauStack_130;
            pauVar14 = pauStack_138;
            pbVar15 = (byte *)((longlong)pauStack_60 + 0x28);
            if (!SBORROW8(0,(longlong)pauStack_148)) break;
            pauStack_198 = pauStack_140;
            if (*puVar19 != 0) {
              pdb_141b1e240((undefined1 (*) [16])&pauStack_e8,
                            *(undefined8 *)((longlong)pauStack_60 + 8),
                            *(undefined8 *)((longlong)pauStack_60 + 0x10),2);
              pauStack_110 = (undefined1 (*) [16])pdb_140f58250;
              uStack_100 = pdb_140f59780;
              pauStack_c8 = (undefined1 (*) [16])0x0;
              pauStack_c0 = (undefined1 (*) [16])&UNK_14305c685;
              uStack_b8 = (undefined1 (*) [16])0x25;
              uStack_b0 = (undefined1 (*) [16])0x0;
              uStack_a8 = (undefined1 (**) [16])&UNK_14305c5e0;
              uStack_a0 = (undefined1 (*) [16])0x31;
              ppauStack_98 = (undefined1 (**) [16])0x1;
              pbStack_90 = &UNK_14305c685;
              plStack_88 = (longlong *)0x25;
              plStack_80 = (longlong *)0xc300000001;
              puStack_78 = &UNK_14305c98b;
              pauStack_118 = (undefined1 (*) [16])&pauStack_e8;
              uStack_108 = (undefined1 (*) [16])&pauStack_198;
              pauStack_70 = (undefined1 (*) [16])&pauStack_118;
              pdb_140f332f0(&uStack_4b,&pauStack_c8);
              if (pauStack_e8 != (undefined1 (*) [16])0x0) {
                pub_1406abac0((byte *)pauStack_e0,(ulonglong)pauStack_e8,1);
              }
            }
            pdb_1404b38e0((undefined1 (*) [16])&pauStack_198);
            pauStack_60 = (undefined1 (*) [16])pbVar15;
            if (pbVar15 == pbStack_178) goto LAB_140b7db79;
          }
          pauStack_170 = pauStack_140;
          LOCK();
          lVar2 = *plVar9;
          *plVar9 = *plVar9 + 1;
          UNLOCK();
          if (*plVar9 == 0 || SCARRY8(lVar2,1) != *plVar9 < 0) goto LAB_140b7dd6a;
          arg0 = *(undefined1 (***) [16])((longlong)pauStack_60 + 0x10);
          pauStack_168 = pauStack_148;
          if ((longlong)arg0 < 0) {
            uVar21 = 0;
LAB_140b7dbdc:
            uStack_4a = 1;
            pdb_142dc7e2a(uVar21,arg0);
LAB_140b7dd6a:
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          if (arg0 == (undefined1 (**) [16])0x0) {
            pauVar11 = (undefined1 (*) [16])0x1;
          }
          else {
            uVar3 = *(undefined8 *)((longlong)pauStack_60 + 8);
            pdb_14007ee60();
            uVar21 = 1;
            pauVar11 = (undefined1 (*) [16])pub_1406abab0((ulonglong)arg0,1);
            if (pauVar11 == (undefined1 (*) [16])0x0) goto LAB_140b7dbdc;
            pub_142e32760(pauVar11,uVar3,arg0);
            plVar9 = plStack_120;
          }
          pauStack_c0 = pauStack_170;
          uStack_b8 = pauVar14;
          uStack_b0 = pauVar17;
          pbStack_90 = (byte *)CONCAT71(pbStack_90._1_7_,*(byte *)((longlong)pauStack_60 + 0x18));
          uStack_4a = 0;
          pauStack_c8 = pauStack_168;
          uStack_a8 = arg0;
          uStack_a0 = pauVar11;
          ppauStack_98 = arg0;
          plStack_88 = plVar9;
          pdb_140c29a30((undefined1 (*) [16])&pauStack_198,&pauStack_1c8,pauStack_60,&pauStack_c8);
          puVar19 = _DAT_143ca8e90;
          if (pauStack_198 == (undefined1 (*) [16])0x8000000000000004) {
            if (2 < *_DAT_143ca8e90) {
              uStack_4a = 0;
              pdb_141b1e240((undefined1 (*) [16])&pauStack_118,
                            *(undefined8 *)((longlong)pauStack_60 + 8),
                            *(undefined8 *)((longlong)pauStack_60 + 0x10),2);
              pauStack_e0 = (undefined1 (*) [16])pdb_140f58250;
              pauStack_c8 = (undefined1 (*) [16])0x0;
              pauStack_c0 = (undefined1 (*) [16])&UNK_14305c685;
              uStack_b8 = (undefined1 (*) [16])0x25;
              uStack_b0 = (undefined1 (*) [16])0x0;
              uStack_a8 = (undefined1 (**) [16])&UNK_14305c5e0;
              uStack_a0 = (undefined1 (*) [16])0x31;
              ppauStack_98 = (undefined1 (**) [16])0x3;
              pbStack_90 = &UNK_14305c685;
              plStack_88 = (longlong *)0x25;
              plStack_80 = (longlong *)0xdf00000001;
              puStack_78 = &UNK_14305c948;
              pauStack_e8 = (undefined1 (*) [16])&pauStack_118;
              pauStack_70 = (undefined1 (*) [16])&pauStack_e8;
              pdb_140f332f0(&uStack_4b,&pauStack_c8);
              pauVar14 = pauStack_118;
              pauVar17 = pauStack_110;
joined_r0x000140b7db2e:
              if (pauVar14 != (undefined1 (*) [16])0x0) {
                pub_1406abac0((byte *)pauVar17,(ulonglong)pauVar14,1);
              }
            }
          }
          else {
            pauStack_138 = pauStack_188;
            pauStack_148 = pauStack_198;
            pauStack_140 = pauStack_190;
            if (*_DAT_143ca8e90 != 0) {
              pdb_141b1e240((undefined1 (*) [16])&pauStack_e8,
                            *(undefined8 *)((longlong)pauStack_60 + 8),
                            *(undefined8 *)((longlong)pauStack_60 + 0x10),2);
              pauStack_110 = (undefined1 (*) [16])pdb_140f58250;
              uStack_100 = pdb_141c5de90;
              pauStack_c8 = (undefined1 (*) [16])0x0;
              pauStack_c0 = (undefined1 (*) [16])&UNK_14305c685;
              uStack_b8 = (undefined1 (*) [16])0x25;
              uStack_b0 = (undefined1 (*) [16])0x0;
              uStack_a8 = (undefined1 (**) [16])&UNK_14305c5e0;
              uStack_a0 = (undefined1 (*) [16])0x31;
              ppauStack_98 = (undefined1 (**) [16])0x1;
              pbStack_90 = &UNK_14305c685;
              plStack_88 = (longlong *)0x25;
              plStack_80 = (longlong *)0xe000000001;
              puStack_78 = &UNK_14305c964;
              pauStack_118 = (undefined1 (*) [16])&pauStack_e8;
              uStack_108 = (undefined1 (*) [16])&pauStack_148;
              pauStack_70 = (undefined1 (*) [16])&pauStack_118;
              pdb_140f332f0(&uStack_4b,&pauStack_c8);
              if (pauStack_e8 != (undefined1 (*) [16])0x0) {
                pub_1406abac0((byte *)pauStack_e0,(ulonglong)pauStack_e8,1);
              }
            }
            if (pauStack_148 == (undefined1 (*) [16])0x8000000000000003) {
              uStack_4a = 0;
              pdb_1404b38e0(&pauStack_140);
            }
            else {
              uVar12 = (longlong)pauStack_148 >> 0x3f &
                       (ulonglong)(pauStack_148[-0x800000000000000] + 1);
              if (uVar12 == 1) {
                uStack_4a = 0;
                pdb_1404b38e0(&pauStack_140);
              }
              else {
                pauVar14 = pauStack_148;
                pauVar17 = pauStack_140;
                if (uVar12 == 0) goto joined_r0x000140b7db2e;
              }
            }
          }
          plVar9 = plStack_120;
          pauStack_60 = (undefined1 (*) [16])pbVar15;
        } while (pbVar15 != pbStack_178);
      }
LAB_140b7db79:
      uStack_a8 = (undefined1 (**) [16])CONCAT44(uStack_1a4,uStack_1a8);
      uStack_a0 = (undefined1 (*) [16])CONCAT44(uStack_19c,uStack_1a0);
      uStack_b8 = (undefined1 (*) [16])CONCAT44(uStack_1b4,uStack_1b8);
      uStack_b0 = (undefined1 (*) [16])CONCAT44(uStack_1ac,uStack_1b0);
      pauStack_c8 = pauStack_1c8;
      pauStack_c0 = pauStack_1c0;
      ppauStack_98 = (undefined1 (**) [16])lStack_160;
      pbStack_90 = pbStack_158;
      plStack_88 = puStack_150;
      plStack_80 = plVar9;
      pdb_14161a7b0(uStack_58,&pauStack_c8,&UNK_14305c930);
      return;
    }
    uStack_d8 = (undefined1 (*) [16])uStack_100;
    pauStack_e8 = pauStack_110;
    pauStack_e0 = uStack_108;
    if (*_DAT_143ca8e90 != 0) {
      pauStack_148 = (undefined1 (*) [16])&pauStack_e8;
      pauStack_140 = (undefined1 (*) [16])pdb_141c5de90;
      pauStack_c8 = (undefined1 (*) [16])0x0;
      pauStack_c0 = (undefined1 (*) [16])&UNK_14305c685;
      uStack_b8 = (undefined1 (*) [16])0x25;
      uStack_b0 = (undefined1 (*) [16])0x0;
      uStack_a8 = (undefined1 (**) [16])&UNK_14305c5e0;
      uStack_a0 = (undefined1 (*) [16])0x31;
      ppauStack_98 = (undefined1 (**) [16])0x1;
      pbStack_90 = &UNK_14305c685;
      plStack_88 = (longlong *)0x25;
      plStack_80 = (longlong *)0xb200000001;
      puStack_78 = &UNK_14305c9b9;
      pauStack_70 = (undefined1 (*) [16])&pauStack_148;
      pdb_140f332f0(&uStack_4b,&pauStack_c8);
    }
    plVar9 = *(longlong **)(uStack_58 + 8);
    if (plVar9 == (longlong *)0x0) {
      plVar9 = *(longlong **)(uStack_58 + 0x10);
    }
    lVar2 = plVar9[2];
    if ((ulonglong)(*plVar9 - lVar2) < 8) {
      pdb_142d7f1b0(plVar9,lVar2,8,1,1);
    }
    *(code **)(plVar9[1] + lVar2) = pdb_141608ad0;
    plVar9[2] = lVar2 + 8;
    if (pauStack_e8 == (undefined1 (*) [16])0x8000000000000003) {
      uStack_49 = 1;
      pdb_1404b38e0(&pauStack_e0);
    }
    else {
      uVar12 = (longlong)pauStack_e8 >> 0x3f & (ulonglong)(pauStack_e8[-0x800000000000000] + 1);
      if (uVar12 == 1) {
        uStack_49 = 1;
        pdb_1404b38e0(&pauStack_e0);
      }
      else if ((uVar12 == 0) && (pauStack_e8 != (undefined1 (*) [16])0x0)) {
        pub_1406abac0((byte *)pauStack_e0,(ulonglong)pauStack_e8,1);
      }
    }
  }
LAB_140b7d53e:
  if (puStack_150 != (undefined8 *)0x0) {
    pbVar15 = pbStack_158 + 8;
    puVar16 = puStack_150;
    do {
      if (*(ulonglong *)(pbVar15 + -8) != 0) {
        pub_1406abac0(*(byte **)pbVar15,*(ulonglong *)(pbVar15 + -8),1);
      }
      pbVar15 = pbVar15 + 0x28;
      puVar16 = (undefined8 *)((longlong)puVar16 + -1);
    } while (puVar16 != (undefined8 *)0x0);
  }
  if (lStack_160 != 0) {
    pub_1406abac0(pbStack_158,lStack_160 * 0x28,8);
  }
  return;
}

