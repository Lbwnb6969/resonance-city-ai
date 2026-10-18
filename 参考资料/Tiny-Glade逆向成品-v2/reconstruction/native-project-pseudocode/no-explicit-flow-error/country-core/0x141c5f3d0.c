// VA 0x141c5f3d0, PDB extent 2692 bytes
// country_core::systems::save::save_thread::CurrentSaveFile::change_section
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_thread.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::save::save_thread::CurrentSaveFile::change_section
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_thread.rs
   Extent: 2692 */

void pdb_141c5f3d0(longlong param_1,char param_2,undefined8 param_3,longlong *param_4)

{
  undefined1 auVar1 [16];
  byte bVar2;
  byte bVar3;
  ulonglong *puVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  byte *pbVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined1 (*pauVar15) [16];
  ulonglong *puVar16;
  undefined *puVar17;
  ushort uVar18;
  undefined *puVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 (*pauVar22) [16];
  longlong lVar23;
  undefined *puVar24;
  byte bVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 *puStack_f8;
  code *pcStack_f0;
  ulonglong *puStack_e8;
  code *pcStack_e0;
  ulonglong uStack_d8;
  byte *pbStack_d0;
  longlong *plStack_c8;
  undefined8 uStack_c0;
  longlong *plStack_b8;
  ulonglong uStack_b0;
  byte *pbStack_a8;
  longlong *plStack_98;
  longlong *plStack_90;
  ulonglong uStack_88;
  byte *pbStack_80;
  longlong lStack_78;
  longlong *plStack_70;
  byte *pbStack_68;
  byte *pbStack_60;
  longlong *plStack_58;
  char cStack_4a;
  char cStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_c0 = param_3;
  plStack_b8 = param_4;
  cStack_4a = param_2;
  cStack_49 = pdb_140e94b40();
  if (cStack_49 == '\0') {
LAB_141c5f591:
    lVar9 = *(longlong *)(param_1 + 0xc0);
    if (lVar9 != 0) {
      param_4 = (longlong *)((longlong)param_4 + 2);
      uVar14 = pdb_1400aef40(param_1 + 200,&cStack_4a);
      pauVar22 = *(undefined1 (**) [16])(param_1 + 0xa8);
      bVar25 = (byte)(uVar14 >> 0x39);
      auVar26 = ZEXT216(CONCAT11(bVar25,bVar25));
      auVar26 = pshuflw(auVar26,auVar26,0);
      lVar23 = 0;
      do {
        uVar14 = uVar14 & *(ulonglong *)(param_1 + 0xb0);
        auVar1 = *(undefined1 (*) [16])(*pauVar22 + uVar14);
        auVar28[0] = -(auVar1[0] == auVar26[0]);
        auVar28[1] = -(auVar1[1] == auVar26[1]);
        auVar28[2] = -(auVar1[2] == auVar26[2]);
        auVar28[3] = -(auVar1[3] == auVar26[3]);
        auVar28[4] = -(auVar1[4] == auVar26[4]);
        auVar28[5] = -(auVar1[5] == auVar26[5]);
        auVar28[6] = -(auVar1[6] == auVar26[6]);
        auVar28[7] = -(auVar1[7] == auVar26[7]);
        auVar28[8] = -(auVar1[8] == auVar26[0]);
        auVar28[9] = -(auVar1[9] == auVar26[1]);
        auVar28[10] = -(auVar1[10] == auVar26[2]);
        auVar28[0xb] = -(auVar1[0xb] == auVar26[3]);
        auVar28[0xc] = -(auVar1[0xc] == auVar26[4]);
        auVar28[0xd] = -(auVar1[0xd] == auVar26[5]);
        auVar28[0xe] = -(auVar1[0xe] == auVar26[6]);
        auVar28[0xf] = -(auVar1[0xf] == auVar26[7]);
        uVar18 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe | (ushort)(auVar28[0xf] >> 7) << 0xf
        ;
        uVar8 = (uint)uVar18;
        while (uVar18 != 0) {
          uVar6 = 0;
          for (uVar7 = uVar8; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
            uVar6 = uVar6 + 1;
          }
          uVar10 = uVar6 + uVar14 & *(ulonglong *)(param_1 + 0xb0);
          if (param_2 == *(char *)((longlong)pauVar22 + uVar10 * -0x18 + -0x18)) {
            uVar14 = *(ulonglong *)((longlong)pauVar22 + uVar10 * -0x18 + -0x10);
            uVar10 = *(ulonglong *)((longlong)pauVar22 + uVar10 * -0x18 + -8);
            plVar11 = (longlong *)(uVar10 - uVar14);
            plStack_58 = param_4;
            if (param_4 <= plVar11) {
              pbStack_60 = (byte *)0x1;
              param_4 = (longlong *)0x0;
              plVar13 = plVar11;
              goto LAB_141c5f7da;
            }
            uVar20 = *(ulonglong *)(param_1 + 0x40);
            plStack_90 = plVar11;
            if (uVar20 < uVar10) {
              pbStack_68 = (byte *)0x1;
              plStack_70 = (longlong *)0x0;
              pdb_142dc8420(uVar10,uVar20,uVar20,&UNK_1433a2158);
              goto LAB_141c5fc20;
            }
            param_4 = (longlong *)(uVar20 - uVar10);
            if (param_4 == (longlong *)0x0) {
              pbStack_60 = (byte *)0x1;
            }
            else {
              lVar23 = *(longlong *)(param_1 + 0x38);
              pdb_14007ee60();
              pbVar12 = pub_1406abab0((ulonglong)param_4,1);
              if (pbVar12 == (byte *)0x0) goto LAB_141c5fc02;
              pbStack_60 = pbVar12;
              pub_142e32760(pbVar12,uVar10 + lVar23,param_4);
            }
            plVar13 = (longlong *)((longlong)plVar11 * 2);
            if ((longlong *)((longlong)plVar11 * 2) <= plStack_58) {
              plVar13 = plStack_58;
            }
            auVar26 = *pauVar22;
            uVar8 = ~(uint)(ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar26[0xf] >> 7) << 0xf);
            pauVar15 = pauVar22 + 1;
            do {
              if ((short)uVar8 == 0) {
                do {
                  auVar26 = *pauVar15;
                  pauVar22 = pauVar22 + -0x18;
                  pauVar15 = pauVar15 + 1;
                  uVar8 = (ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar26[0xf] >> 7) << 0xf) ^ 0xffff;
                } while (uVar8 == 0);
              }
              uVar6 = 0;
              for (uVar7 = uVar8; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                uVar6 = uVar6 + 1;
              }
              uVar20 = (ulonglong)uVar6;
              uVar10 = *(ulonglong *)((longlong)pauVar22 + uVar20 * -0x18 + -0x10);
              if (uVar14 < uVar10) {
                *(ulonglong *)((longlong)pauVar22 + uVar20 * -0x18 + -0x10) =
                     (longlong)plVar13 + (uVar10 - (longlong)plVar11);
              }
              uVar10 = *(ulonglong *)((longlong)pauVar22 + uVar20 * -0x18 + -8);
              if (uVar14 < uVar10) {
                *(ulonglong *)((longlong)pauVar22 + uVar20 * -0x18 + -8) =
                     (longlong)plVar13 + (uVar10 - (longlong)plVar11);
              }
              uVar8 = uVar8 - 1 & uVar8;
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
            lVar9 = *(longlong *)(param_1 + 0xa0);
            if (lVar9 != 0) {
              puVar4 = *(ulonglong **)(param_1 + 0x98);
              uVar10 = lVar9 * 8 - 8;
              puVar16 = puVar4;
              if ((~(uint)uVar10 & 0x18) != 0) {
                lVar23 = -(ulonglong)(((uint)(uVar10 >> 3) & 0x1fffffff) + 1 & 3);
                do {
                  if (uVar14 < *puVar16) {
                    *puVar16 = (longlong)plVar13 + (*puVar16 - (longlong)plVar11);
                  }
                  puVar16 = puVar16 + 1;
                  lVar23 = lVar23 + 1;
                } while (lVar23 != 0);
              }
              if (0x17 < uVar10) {
                do {
                  if (uVar14 < *puVar16) {
                    *puVar16 = (longlong)plVar13 + (*puVar16 - (longlong)plVar11);
                    uVar10 = puVar16[1];
                    if (uVar10 <= uVar14) goto LAB_141c5f9be;
LAB_141c5f9ef:
                    puVar16[1] = (longlong)plVar13 + (uVar10 - (longlong)plVar11);
                    uVar10 = puVar16[2];
                    if (uVar10 <= uVar14) goto LAB_141c5f9c7;
LAB_141c5f9ff:
                    puVar16[2] = (longlong)plVar13 + (uVar10 - (longlong)plVar11);
                    uVar10 = puVar16[3];
                  }
                  else {
                    uVar10 = puVar16[1];
                    if (uVar14 < uVar10) goto LAB_141c5f9ef;
LAB_141c5f9be:
                    uVar10 = puVar16[2];
                    if (uVar14 < uVar10) goto LAB_141c5f9ff;
LAB_141c5f9c7:
                    uVar10 = puVar16[3];
                  }
                  if (uVar14 < uVar10) {
                    puVar16[3] = (longlong)plVar13 + (uVar10 - (longlong)plVar11);
                  }
                  puVar16 = puVar16 + 4;
                } while (puVar16 != puVar4 + lVar9);
              }
            }
LAB_141c5f7da:
            lVar9 = (longlong)plVar13 - (longlong)plStack_58;
            plStack_90 = plVar13;
            plStack_70 = param_4;
            pbStack_68 = pbStack_60;
            plStack_58 = param_4;
            pdb_1418ef250(&uStack_b0,&UNK_1433a2170,1,lVar9);
            puStack_f8 = &uStack_c0;
            pcStack_f0 = pdb_1402ed400;
            pcStack_e0 = pdb_140001020;
            puStack_e8 = &uStack_b0;
            pdb_140f60760(&uStack_d8,&UNK_1433a2171,&puStack_f8);
            uStack_88 = uStack_d8;
            pbStack_80 = pbStack_d0;
            plStack_98 = plStack_c8;
            if (plStack_c8 != plVar13) {
              pdb_142dc7fb4(0,&plStack_98,&plStack_90,0);
              goto LAB_141c5fc20;
            }
            *(ulonglong *)(param_1 + 0x48) = uVar14;
            uVar20 = uVar14 + (longlong)plVar13;
            uVar10 = 0xffffffffffffffff;
            if (!CARRY8(uVar14,(ulonglong)plVar13)) {
              uVar10 = uVar20;
            }
            if (*(ulonglong *)(param_1 + 0x30) < uVar10) {
              lVar9 = *(longlong *)(param_1 + 0x40);
              if (*(ulonglong *)(param_1 + 0x30) - lVar9 < uVar10 - lVar9) {
                pdb_142d7f1b0(param_1 + 0x30,lVar9,uVar10 - lVar9,1,1);
              }
            }
            uVar10 = *(ulonglong *)(param_1 + 0x40);
            if (uVar10 < uVar14) {
              lVar9 = *(longlong *)(param_1 + 0x38);
              pub_142e32780(uVar10 + lVar9,0);
              *(ulonglong *)(param_1 + 0x40) = uVar14;
              uVar10 = uVar14;
            }
            else {
              lVar9 = *(longlong *)(param_1 + 0x38);
            }
            pub_142e32760(lVar9 + uVar14,pbStack_80,plVar13);
            if (uVar10 < uVar20) {
              *(ulonglong *)(param_1 + 0x40) = uVar20;
            }
            *(ulonglong *)(param_1 + 0x48) = uVar20;
            pdb_140c6db50(param_1 + 0x10,uVar14,uVar20);
            if (plStack_58 != (longlong *)0x0) {
              uVar14 = *(ulonglong *)(param_1 + 0x48);
              uVar20 = uVar14 + (longlong)plStack_58;
              uVar10 = 0xffffffffffffffff;
              if (!CARRY8(uVar14,(ulonglong)plStack_58)) {
                uVar10 = uVar20;
              }
              uVar21 = *(ulonglong *)(param_1 + 0x40);
              if ((*(ulonglong *)(param_1 + 0x30) < uVar10) &&
                 (*(ulonglong *)(param_1 + 0x30) - uVar21 < uVar10 - uVar21)) {
                pdb_142d7f1b0(param_1 + 0x30,uVar21,uVar10 - uVar21,1,1);
                uVar21 = *(ulonglong *)(param_1 + 0x40);
                if (uVar21 < uVar14) goto LAB_141c5f93b;
LAB_141c5facd:
                lVar9 = *(longlong *)(param_1 + 0x38);
                plVar11 = plStack_58;
              }
              else {
                if (uVar14 <= uVar21) goto LAB_141c5facd;
LAB_141c5f93b:
                plVar11 = plStack_58;
                lVar9 = *(longlong *)(param_1 + 0x38);
                pub_142e32780(uVar21 + lVar9,0);
                *(ulonglong *)(param_1 + 0x40) = uVar14;
                uVar21 = uVar14;
              }
              pub_142e32760(lVar9 + uVar14,pbStack_60,plVar11);
              if (uVar21 < uVar20) {
                *(ulonglong *)(param_1 + 0x40) = uVar20;
              }
              *(ulonglong *)(param_1 + 0x48) = uVar20;
              pdb_140c6db50(param_1 + 0x10,uVar14,uVar20);
            }
            if (uStack_88 != 0) {
              pub_1406abac0(pbStack_80,uStack_88,1);
            }
            param_4 = plStack_58;
            param_1 = lStack_78;
            if (uStack_b0 != 0) {
              pub_1406abac0(pbStack_a8,uStack_b0,1);
            }
            if (param_4 != (longlong *)0x0) {
              pub_1406abac0(pbStack_60,(ulonglong)param_4,1);
            }
            if (cStack_49 == '\0') {
              return;
            }
            plVar11 = (longlong *)pdb_140e97000();
            if ((char)plVar11[0xd] != '\x01') goto LAB_141c5fba4;
            do {
              if (*plVar11 == 0) {
                *plVar11 = -1;
                plStack_58 = plVar11;
                pdb_140e95370(plVar11 + 1,param_1);
                *plStack_58 = *plStack_58 + 1;
                return;
              }
LAB_141c5fb98:
              plVar11 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_141c5fba4:
              plVar11 = (longlong *)pdb_142d8ec20(plVar11,0);
            } while (plVar11 != (longlong *)0x0);
            goto LAB_141c5fbb3;
          }
          uVar18 = (ushort)(uVar8 - 1) & (ushort)uVar8;
          uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar18);
        }
        auVar27[0] = -(auVar1[0] == -1);
        auVar27[1] = -(auVar1[1] == -1);
        auVar27[2] = -(auVar1[2] == -1);
        auVar27[3] = -(auVar1[3] == -1);
        auVar27[4] = -(auVar1[4] == -1);
        auVar27[5] = -(auVar1[5] == -1);
        auVar27[6] = -(auVar1[6] == -1);
        auVar27[7] = -(auVar1[7] == -1);
        auVar27[8] = -(auVar1[8] == -1);
        auVar27[9] = -(auVar1[9] == -1);
        auVar27[10] = -(auVar1[10] == -1);
        auVar27[0xb] = -(auVar1[0xb] == -1);
        auVar27[0xc] = -(auVar1[0xc] == -1);
        auVar27[0xd] = -(auVar1[0xd] == -1);
        auVar27[0xe] = -(auVar1[0xe] == -1);
        auVar27[0xf] = -(auVar1[0xf] == -1);
        if ((((((((((((((((SUB161(auVar27 >> 7,0) & 1) != 0 || (SUB161(auVar27 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar27 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar27 >> 0x1f,0) & 1) != 0) || (SUB161(auVar27 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar27 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar27 >> 0x37,0) & 1) != 0) || (SUB161(auVar27 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar27 >> 0x47,0) & 1) != 0) || (SUB161(auVar27 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar27 >> 0x57,0) & 1) != 0) || (SUB161(auVar27 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar27 >> 0x67,0) & 1) != 0) || (SUB161(auVar27 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar27 >> 0x77,0) & 1) != 0) || auVar27[0xf] < '\0') break;
        uVar14 = uVar14 + lVar23 + 0x10;
        lVar23 = lVar23 + 0x10;
      } while( true );
    }
    pdb_142dc8110(&UNK_1433a1d5e,0x16,&UNK_1433a2140);
  }
  else {
    puVar24 = &UNK_1433a2844;
    lVar23 = 0x49;
    uVar14 = 0x49;
    lVar9 = pdb_141c6bab0(&UNK_1433a2844);
    if (lVar9 == 1) {
      if (uVar14 < 0x4a) {
        puVar24 = &UNK_1433a2844;
        uVar10 = pdb_141c6bab0(&UNK_1433a2844);
        if ((uVar10 & 1) != 0) {
          if (0x49 < uVar14 + 2) {
            pdb_142dc8070(&UNK_1433a2844,0x49,uVar14 + 2,0x49,&UNK_1433a2928);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar23 = 0x47 - uVar14;
          puVar24 = &UNK_1433a2846 + uVar14;
        }
        goto LAB_141c5f47a;
      }
    }
    else {
LAB_141c5f47a:
      puVar17 = &UNK_1433a2093;
      puVar19 = &UNK_1433a2060;
      do {
        bVar25 = puVar17[-1];
        uVar8 = (uint)(char)bVar25;
        if ((char)bVar25 < '\0') {
          bVar2 = puVar17[-2];
          if ((char)bVar2 < -0x40) {
            bVar3 = puVar17[-3];
            if ((char)bVar3 < -0x40) {
              pbVar12 = puVar17 + -4;
              puVar17 = puVar17 + -4;
              uVar8 = bVar3 & 0x3f | (*pbVar12 & 7) << 6;
            }
            else {
              puVar17 = puVar17 + -3;
              uVar8 = bVar3 & 0xf;
            }
            uVar8 = bVar2 & 0x3f | uVar8 << 6;
          }
          else {
            puVar17 = puVar17 + -2;
            uVar8 = bVar2 & 0x1f;
          }
          uVar8 = (uint)(bVar25 & 0x3f) | uVar8 << 6;
          if (uVar8 != 0x5c) goto LAB_141c5f504;
LAB_141c5f516:
          if ((undefined *)0x33 < puVar17 + -0x1433a205f) goto LAB_141c5fbbf;
          lVar9 = 0x33 - (longlong)(puVar17 + -0x1433a205f);
          puVar19 = puVar17 + 1;
          goto LAB_141c5f539;
        }
        puVar17 = puVar17 + -1;
        if (uVar8 == 0x5c) goto LAB_141c5f516;
LAB_141c5f504:
        if (uVar8 == 0x2f) goto LAB_141c5f516;
      } while (puVar17 != &UNK_1433a2060);
      lVar9 = 0x33;
LAB_141c5f539:
      plVar11 = (longlong *)pdb_140e97000();
      if (((char)plVar11[0xd] == '\x01') ||
         (plVar11 = (longlong *)pdb_142d8ec20(plVar11,0), plVar11 != (longlong *)0x0)) {
        if (*plVar11 != 0) goto LAB_141c5fb98;
        *plVar11 = -1;
        plStack_58 = plVar11;
        lStack_78 = pdb_140e94f10(plVar11 + 1,puVar24,lVar23,puVar19,lVar9,1,0);
        *plStack_58 = *plStack_58 + 1;
        goto LAB_141c5f591;
      }
LAB_141c5fbb3:
      pdb_142dc7890(&UNK_143326860);
LAB_141c5fbbf:
      pdb_142dc8070(&UNK_1433a2060,0x33);
    }
    pdb_142dc8070(&UNK_1433a2844,0x49,0);
LAB_141c5fc02:
    pbStack_68 = (byte *)0x1;
    plStack_70 = (longlong *)0x0;
    pdb_142dc7e2a(1,param_4);
  }
LAB_141c5fc20:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}

