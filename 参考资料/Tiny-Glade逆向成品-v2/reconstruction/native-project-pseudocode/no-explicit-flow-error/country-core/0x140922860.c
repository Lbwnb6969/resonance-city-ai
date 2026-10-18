// VA 0x140922860, PDB extent 1998 bytes
// country_core::systems::ui::signifiers::signifier_mark_for_delete::signfier_mark_for_delete
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/signifiers/signifier_mark_for_delete.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui::signifiers::signifier_mark_for_delete::signfier_mark_for_delete
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/signifiers/signifier_mark_for_delete.rs
   Extent: 1998 */

void pdb_140922860(longlong *param_1,longlong *param_2,longlong *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  char *pcVar3;
  longlong lVar4;
  byte bVar5;
  char cVar6;
  longlong lVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  char cVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined *puVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  uint uVar18;
  ulonglong uVar19;
  uint *puVar20;
  bool bVar21;
  longlong lVar22;
  uint uVar23;
  ushort uVar24;
  uint *puVar25;
  float *unaff_R13;
  undefined *puVar26;
  byte bVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  char unaff_XMM6_Ba;
  char unaff_XMM6_Bb;
  char unaff_XMM6_Bc;
  char unaff_XMM6_Bd;
  char unaff_XMM6_Be;
  char unaff_XMM6_Bf;
  char unaff_XMM6_Bg;
  char unaff_XMM6_Bh;
  char unaff_XMM6_Bi;
  char unaff_XMM6_Bj;
  char unaff_XMM6_Bk;
  char unaff_XMM6_Bl;
  char unaff_XMM6_Bm;
  char unaff_XMM6_Bn;
  char unaff_XMM6_Bo;
  char unaff_XMM6_Bp;
  longlong lStack_b8;
  longlong lStack_b0;
  longlong *plStack_98;
  longlong lStack_88;
  longlong lStack_80;
  
  cVar12 = pdb_140e94b40();
  if (cVar12 == '\0') goto LAB_140922a3c;
  puVar26 = &UNK_143021620;
  puVar20 = (uint *)0x5a;
  uVar19 = 0x5a;
  lVar13 = pdb_1409279b0(&UNK_143021620);
  if (lVar13 != 1) goto LAB_140922903;
  if (uVar19 < 0x5b) {
    puVar26 = &UNK_143021620;
    uVar14 = pdb_1409279b0(&UNK_143021620);
    if ((uVar14 & 1) == 0) {
LAB_140922903:
      puVar15 = &UNK_143021085;
      puVar25 = (uint *)&UNK_14302103b;
      do {
        pbVar1 = puVar15 + -1;
        uVar18 = (uint)(char)*pbVar1;
        if ((int)uVar18 < 0) {
          bVar27 = puVar15[-2];
          if ((char)bVar27 < -0x40) {
            bVar5 = puVar15[-3];
            if ((char)bVar5 < -0x40) {
              pbVar2 = puVar15 + -4;
              puVar15 = puVar15 + -4;
              uVar18 = bVar5 & 0x3f | (*pbVar2 & 7) << 6;
            }
            else {
              puVar15 = puVar15 + -3;
              uVar18 = bVar5 & 0xf;
            }
            uVar18 = bVar27 & 0x3f | uVar18 << 6;
          }
          else {
            puVar15 = puVar15 + -2;
            uVar18 = bVar27 & 0x1f;
          }
          uVar18 = (uint)(*pbVar1 & 0x3f) | uVar18 << 6;
          if (uVar18 != 0x5c) goto LAB_140922999;
LAB_1409229b6:
          if ((undefined *)0x4a < puVar15 + -0x14302103a) goto LAB_140922ee8;
          unaff_R13 = (float *)(0x49 - (longlong)(puVar15 + -0x14302103b));
          puVar25 = (uint *)(puVar15 + 1);
          goto LAB_1409229da;
        }
        puVar15 = puVar15 + -1;
        if (uVar18 == 0x5c) goto LAB_1409229b6;
LAB_140922999:
        if (uVar18 == 0x2f) goto LAB_1409229b6;
      } while (puVar15 != &UNK_14302103b);
      unaff_R13 = (float *)0x4a;
LAB_1409229da:
      plVar16 = (longlong *)pdb_140e97000();
      if ((char)plVar16[0xd] != '\x01') goto LAB_140922eb4;
LAB_1409229e9:
      if (*plVar16 == 0) {
        *plVar16 = -1;
        pdb_140e94f10(plVar16 + 1,puVar26,puVar20,puVar25,unaff_R13,1,0);
        *plVar16 = *plVar16 + 1;
LAB_140922a3c:
        lVar13 = *param_2;
        puVar25 = *(uint **)(lVar13 + 0xf8);
        lVar7 = *param_1;
        plStack_98 = (longlong *)param_3[1];
        if (plStack_98 == (longlong *)0x0) {
          plStack_98 = (longlong *)param_3[2];
        }
        param_2 = (longlong *)param_2[1];
        puVar20 = puVar25 + *(longlong *)(lVar13 + 0x100);
        cVar6 = *(char *)(lVar13 + 0x108);
        lStack_b8 = 8;
        iVar11 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                                  CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                        CONCAT13(unaff_XMM6_Bd,
                                 CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
        unaff_XMM6_Ba = (char)iVar11;
        unaff_XMM6_Bb = (char)((uint)iVar11 >> 8);
        unaff_XMM6_Bc = (char)((uint)iVar11 >> 0x10);
        unaff_XMM6_Bd = (char)((uint)iVar11 >> 0x18);
        iVar11 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                                  CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                        CONCAT13(unaff_XMM6_Bh,
                                 CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
        unaff_XMM6_Be = (char)iVar11;
        unaff_XMM6_Bf = (char)((uint)iVar11 >> 8);
        unaff_XMM6_Bg = (char)((uint)iVar11 >> 0x10);
        unaff_XMM6_Bh = (char)((uint)iVar11 >> 0x18);
        iVar11 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                                  CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                        CONCAT13(unaff_XMM6_Bl,
                                 CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
        unaff_XMM6_Bi = (char)iVar11;
        unaff_XMM6_Bj = (char)((uint)iVar11 >> 8);
        unaff_XMM6_Bk = (char)((uint)iVar11 >> 0x10);
        unaff_XMM6_Bl = (char)((uint)iVar11 >> 0x18);
        iVar11 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                                  CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                        CONCAT13(unaff_XMM6_Bp,
                                 CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
        unaff_XMM6_Bm = (char)iVar11;
        unaff_XMM6_Bn = (char)((uint)iVar11 >> 8);
        unaff_XMM6_Bo = (char)((uint)iVar11 >> 0x10);
        unaff_XMM6_Bp = (char)((uint)iVar11 >> 0x18);
        lStack_b0 = 8;
        lStack_80 = 0;
        lStack_88 = 0;
        bVar21 = false;
        puVar26 = (undefined *)0x0;
        uVar18 = 0;
LAB_140922b40:
        do {
          if (cVar6 == '\0') {
            if (uVar18 == (uint)puVar26) {
              do {
                if (puVar25 == puVar20) goto LAB_140922e59;
                uVar18 = *puVar25;
                puVar25 = puVar25 + 1;
                puVar26 = *(undefined **)(param_2[0x20] + 0x58 + (ulonglong)uVar18 * 0xa0);
              } while (puVar26 == (undefined *)0x0);
              lVar22 = param_2[0x20] + (ulonglong)uVar18 * 0xa0;
              lVar4 = param_2[0x34] + (ulonglong)*(uint *)(lVar22 + 0x94) * 0x48;
              uVar19 = *(ulonglong *)
                        (param_2[0x34] + 0x40 + (ulonglong)*(uint *)(lVar22 + 0x94) * 0x48);
              if ((*(ulonglong *)(lVar13 + 0x110) < uVar19) &&
                 (uVar14 = *(ulonglong *)
                            (*(longlong *)(lVar4 + 0x38) + *(ulonglong *)(lVar13 + 0x110) * 8),
                 uVar14 != 0)) {
                lStack_80 = *(longlong *)(*(longlong *)(lVar4 + 0x18) + 0x10 + ~uVar14 * 0x30);
              }
              else {
                lStack_80 = 0;
              }
              uVar14 = *(ulonglong *)(lVar13 + 0x118);
              uVar18 = 0;
              if ((uVar14 < *(ulonglong *)(lVar22 + 0x88)) &&
                 (*(longlong *)(*(longlong *)(lVar22 + 0x80) + uVar14 * 8) != 0)) {
                bVar21 = true;
                if ((uVar14 < uVar19) &&
                   (uVar19 = *(ulonglong *)(*(longlong *)(lVar4 + 0x38) + uVar14 * 8), uVar19 != 0))
                {
                  lStack_88 = *(longlong *)(*(longlong *)(lVar4 + 0x18) + 0x10 + ~uVar19 * 0x30);
                }
                else {
                  lStack_88 = 0;
                }
              }
              else {
                bVar21 = false;
              }
              lStack_b0 = *(longlong *)(lVar22 + 0x50);
            }
            puVar17 = (undefined8 *)(lStack_b0 + (ulonglong)uVar18 * 0x10);
            uVar19 = (ulonglong)~*(uint *)(lStack_b0 + 8 + (ulonglong)uVar18 * 0x10);
          }
          else {
            uVar19 = (ulonglong)uVar18;
            if (uVar18 == (uint)puVar26) {
              do {
                if (puVar25 == puVar20) goto LAB_140922e59;
                uVar18 = *puVar25;
                puVar25 = puVar25 + 1;
                puVar26 = *(undefined **)(param_2[0x34] + 0x10 + (ulonglong)uVar18 * 0x48);
              } while (puVar26 == (undefined *)0x0);
              lVar4 = param_2[0x34] + (ulonglong)uVar18 * 0x48;
              if ((*(ulonglong *)(lVar13 + 0x110) < *(ulonglong *)(lVar4 + 0x40)) &&
                 (uVar19 = *(ulonglong *)
                            (*(longlong *)(lVar4 + 0x38) + *(ulonglong *)(lVar13 + 0x110) * 8),
                 uVar19 != 0)) {
                lStack_80 = *(longlong *)(*(longlong *)(lVar4 + 0x18) + 0x10 + ~uVar19 * 0x30);
              }
              else {
                lStack_80 = 0;
              }
              uVar19 = 0;
              if ((*(ulonglong *)(lVar13 + 0x118) < *(ulonglong *)(lVar4 + 0x40)) &&
                 (uVar14 = *(ulonglong *)
                            (*(longlong *)(lVar4 + 0x38) + *(ulonglong *)(lVar13 + 0x118) * 8),
                 uVar14 != 0)) {
                lStack_88 = *(longlong *)(*(longlong *)(lVar4 + 0x18) + 0x10 + ~uVar14 * 0x30);
                bVar21 = true;
              }
              else {
                bVar21 = false;
              }
              lStack_b8 = *(longlong *)(lVar4 + 8);
            }
            uVar18 = (uint)uVar19;
            puVar17 = (undefined8 *)(lStack_b8 + uVar19 * 8);
          }
          unaff_R13 = (float *)(lStack_88 + uVar19 * 8);
          param_3 = (longlong *)(uVar19 * 0x10 + lStack_80);
          if (!bVar21) {
            unaff_R13 = (float *)0x0;
          }
          param_1 = (longlong *)*puVar17;
          if ((int)param_1 == 0) goto LAB_140922e59;
          uVar18 = uVar18 + 1;
          if (*(longlong *)(lVar7 + 0x78) != 0) {
            uVar19 = pdb_1400af0a0(lVar7 + 0x80,param_3);
            bVar27 = (byte)(uVar19 >> 0x39);
            auVar28 = ZEXT216(CONCAT11(bVar27,bVar27));
            auVar28 = pshuflw(auVar28,auVar28,0);
            lVar4 = *param_3;
            lVar22 = 0;
            while( true ) {
              uVar19 = uVar19 & *(ulonglong *)(lVar7 + 0x68);
              pcVar3 = (char *)(*(longlong *)(lVar7 + 0x60) + uVar19);
              auVar30[0] = -(*pcVar3 == auVar28[0]);
              auVar30[1] = -(pcVar3[1] == auVar28[1]);
              auVar30[2] = -(pcVar3[2] == auVar28[2]);
              auVar30[3] = -(pcVar3[3] == auVar28[3]);
              auVar30[4] = -(pcVar3[4] == auVar28[4]);
              auVar30[5] = -(pcVar3[5] == auVar28[5]);
              auVar30[6] = -(pcVar3[6] == auVar28[6]);
              auVar30[7] = -(pcVar3[7] == auVar28[7]);
              auVar30[8] = -(pcVar3[8] == auVar28[0]);
              auVar30[9] = -(pcVar3[9] == auVar28[1]);
              auVar30[10] = -(pcVar3[10] == auVar28[2]);
              auVar30[0xb] = -(pcVar3[0xb] == auVar28[3]);
              auVar30[0xc] = -(pcVar3[0xc] == auVar28[4]);
              auVar30[0xd] = -(pcVar3[0xd] == auVar28[5]);
              auVar30[0xe] = -(pcVar3[0xe] == auVar28[6]);
              auVar30[0xf] = -(pcVar3[0xf] == auVar28[7]);
              uVar24 = (ushort)(SUB161(auVar30 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar30[0xf] >> 7) << 0xf;
              uVar23 = (uint)uVar24;
              while (uVar24 != 0) {
                uVar9 = 0;
                for (uVar10 = uVar23; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
                  uVar9 = uVar9 + 1;
                }
                param_3 = (longlong *)
                          (*(longlong *)(lVar7 + 0x60) +
                          (uVar9 + uVar19 & *(ulonglong *)(lVar7 + 0x68)) * -8);
                if (lVar4 == param_3[-1]) goto LAB_140922b40;
                uVar24 = (ushort)(uVar23 - 1) & (ushort)uVar23;
                uVar23 = CONCAT22((short)(uVar23 - 1 >> 0x10),uVar24);
              }
              auVar29[0] = -(*pcVar3 == unaff_XMM6_Ba);
              auVar29[1] = -(pcVar3[1] == unaff_XMM6_Bb);
              auVar29[2] = -(pcVar3[2] == unaff_XMM6_Bc);
              auVar29[3] = -(pcVar3[3] == unaff_XMM6_Bd);
              auVar29[4] = -(pcVar3[4] == unaff_XMM6_Be);
              auVar29[5] = -(pcVar3[5] == unaff_XMM6_Bf);
              auVar29[6] = -(pcVar3[6] == unaff_XMM6_Bg);
              auVar29[7] = -(pcVar3[7] == unaff_XMM6_Bh);
              auVar29[8] = -(pcVar3[8] == unaff_XMM6_Bi);
              auVar29[9] = -(pcVar3[9] == unaff_XMM6_Bj);
              auVar29[10] = -(pcVar3[10] == unaff_XMM6_Bk);
              auVar29[0xb] = -(pcVar3[0xb] == unaff_XMM6_Bl);
              auVar29[0xc] = -(pcVar3[0xc] == unaff_XMM6_Bm);
              auVar29[0xd] = -(pcVar3[0xd] == unaff_XMM6_Bn);
              auVar29[0xe] = -(pcVar3[0xe] == unaff_XMM6_Bo);
              auVar29[0xf] = -(pcVar3[0xf] == unaff_XMM6_Bp);
              if ((((((((((((((((SUB161(auVar29 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar29 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar29 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar29 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar29 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar29 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar29 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar29 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar29 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar29 >> 0x4f,0) & 1) != 0) || (SUB161(auVar29 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar29 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar29 >> 0x67,0) & 1) != 0) || (SUB161(auVar29 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar29 >> 0x77,0) & 1) != 0) || auVar29[0xf] < '\0') break;
              uVar19 = uVar19 + lVar22 + 0x10;
              lVar22 = lVar22 + 0x10;
            }
          }
          if ((unaff_R13 == (float *)0x0) ||
             (unaff_R13[1] < *unaff_R13 || unaff_R13[1] == *unaff_R13)) {
            lVar4 = plStack_98[2];
            if ((ulonglong)(*plStack_98 - lVar4) < 0x18) {
              pdb_142d7f1b0(plStack_98,lVar4,0x18,1,1);
            }
            lVar22 = plStack_98[1];
            *(code **)(lVar22 + lVar4) = pdb_14160ccc0;
            *(longlong **)(lVar22 + 8 + lVar4) = param_1;
            *(undefined1 *)(lVar22 + 0x10 + lVar4) = 0;
            param_3 = (longlong *)(lVar4 + 0x18);
            plStack_98[2] = (longlong)param_3;
          }
        } while( true );
      }
      goto LAB_140922ea8;
    }
    if (uVar19 + 2 < 0x5b) {
      puVar20 = (uint *)(0x58 - uVar19);
      puVar26 = &UNK_143021622 + uVar19;
      goto LAB_140922903;
    }
    goto LAB_140922f2b;
  }
  goto LAB_140922f0b;
LAB_140922e59:
  if (cVar12 != '\0') {
    plVar16 = (longlong *)pdb_140e97000();
    if (((char)plVar16[0xd] != '\x01') &&
       (plVar16 = (longlong *)pdb_142d8ec20(plVar16,0), plVar16 == (longlong *)0x0))
    goto LAB_140922edc;
    if (*plVar16 != 0) {
LAB_140922ea8:
      plVar16 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140922eb4:
      plVar16 = (longlong *)pdb_142d8ec20(plVar16,0);
      if (plVar16 == (longlong *)0x0) goto LAB_140922edc;
      goto LAB_1409229e9;
    }
    *plVar16 = -1;
    pdb_140e95370(plVar16 + 1);
    *plVar16 = *plVar16 + 1;
  }
  return;
LAB_140922edc:
  pdb_142dc7890(&UNK_143326860);
LAB_140922ee8:
  pdb_142dc8070(&UNK_14302103b,0x4a);
LAB_140922f0b:
  pdb_142dc8070(&UNK_143021620,0x5a,0);
LAB_140922f2b:
  pdb_142dc8070(&UNK_143021620,0x5a);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

