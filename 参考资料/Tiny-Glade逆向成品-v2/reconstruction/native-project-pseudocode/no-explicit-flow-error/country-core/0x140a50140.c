// VA 0x140a50140, PDB extent 2676 bytes
// country_core::systems::ivy::ivy_leaf_animation::ivy_leaf_animation
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ivy/ivy_leaf_animation.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::ivy::ivy_leaf_animation::ivy_leaf_animation
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ivy/ivy_leaf_animation.rs
   Extent: 2676 */

void pdb_140a50140(code *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong *unaff_RBX;
  longlong *plVar21;
  longlong lVar22;
  longlong lVar23;
  ushort uVar24;
  longlong lVar25;
  undefined *unaff_R12;
  code *unaff_R13;
  code *pcVar26;
  longlong lVar27;
  byte bVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
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
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 (*pauStack_128) [16];
  undefined1 (*pauStack_120) [16];
  undefined *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  longlong **pplStack_f0;
  longlong *plStack_e8;
  code *pcStack_e0;
  longlong *plStack_d8;
  code *pcStack_d0;
  code *pcStack_c8;
  undefined4 uStack_bc;
  code *pcStack_b8;
  longlong *plStack_b0;
  longlong *plStack_a8;
  longlong *plStack_a0;
  undefined1 uStack_92;
  char cStack_91;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  cStack_91 = pdb_140e94b40();
  plVar21 = param_3;
  if (cStack_91 == '\0') goto LAB_140a50347;
  unaff_R12 = &UNK_14303dfb4;
  plVar21 = (longlong *)0x42;
  uVar20 = 0x42;
  plStack_a0 = param_3;
  lVar13 = pdb_140a58ed0(&UNK_14303dfb4);
  if (lVar13 == 1) {
    if (uVar20 < 0x43) {
      unaff_R12 = &UNK_14303dfb4;
      uVar14 = pdb_140a58ed0(&UNK_14303dfb4);
      if ((uVar14 & 1) != 0) {
        if (0x42 < uVar20 + 2) goto LAB_140a50991;
        plVar21 = (longlong *)(0x40 - uVar20);
        unaff_R12 = &UNK_14303dfb6 + uVar20;
      }
      goto LAB_140a5020d;
    }
  }
  else {
LAB_140a5020d:
    puVar15 = &UNK_14303d5bb;
    unaff_R13 = (code *)&UNK_14303d582;
    do {
      pbVar1 = puVar15 + -1;
      uVar19 = (uint)(char)*pbVar1;
      if ((int)uVar19 < 0) {
        bVar28 = puVar15[-2];
        if ((char)bVar28 < -0x40) {
          bVar4 = puVar15[-3];
          if ((char)bVar4 < -0x40) {
            pbVar2 = puVar15 + -4;
            puVar15 = puVar15 + -4;
            uVar19 = bVar4 & 0x3f | (*pbVar2 & 7) << 6;
          }
          else {
            puVar15 = puVar15 + -3;
            uVar19 = bVar4 & 0xf;
          }
          uVar19 = bVar28 & 0x3f | uVar19 << 6;
        }
        else {
          puVar15 = puVar15 + -2;
          uVar19 = bVar28 & 0x1f;
        }
        uVar19 = (uint)(*pbVar1 & 0x3f) | uVar19 << 6;
        if (uVar19 != 0x5c) goto LAB_140a50299;
LAB_140a502b5:
        if ((undefined *)0x39 < puVar15 + -0x14303d581) goto LAB_140a5094e;
        unaff_RBX = (longlong *)(0x38 - (longlong)(puVar15 + -0x14303d582));
        unaff_R13 = (code *)(puVar15 + 1);
        goto LAB_140a502d8;
      }
      puVar15 = puVar15 + -1;
      if (uVar19 == 0x5c) goto LAB_140a502b5;
LAB_140a50299:
      if (uVar19 == 0x2f) goto LAB_140a502b5;
    } while (puVar15 != &UNK_14303d582);
    unaff_RBX = (longlong *)0x39;
LAB_140a502d8:
    plVar16 = (longlong *)pdb_140e97000();
    if ((char)plVar16[0xd] != '\x01') goto LAB_140a5091a;
    do {
      if (*plVar16 == 0) {
        *plVar16 = -1;
        plStack_a8 = plVar16;
        uStack_150 = pdb_140e94f10(plVar16 + 1,unaff_R12,plVar21,unaff_R13,unaff_RBX,1,0);
        *plStack_a8 = *plStack_a8 + 1;
        plVar21 = plStack_a0;
LAB_140a50347:
        **(undefined4 **)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x1c);
        puVar5 = *(undefined8 **)param_1;
        pauStack_128 = (undefined1 (*) [16])*puVar5;
        puStack_118 = *pauStack_128 + puVar5[1] + 1;
        auVar30 = *pauStack_128;
        uStack_108 = puVar5[3];
        puStack_148 = (undefined *)0x0;
        uStack_138 = 0;
        pauStack_120 = pauStack_128 + 1;
        puStack_110 = (undefined *)
                      CONCAT62(puStack_110._2_6_,
                               ~((ushort)(SUB161(auVar30 >> 7,0) & 1) |
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
                                (ushort)(byte)(auVar30[0xf] >> 7) << 0xf));
        pdb_1415ee280(&plStack_e8,&puStack_148);
        fVar12 = _DAT_142e36f50;
        fVar11 = _DAT_142e36f28;
        plStack_b0 = plStack_e8;
        pcStack_b8 = pcStack_e0;
        if (plStack_d8 != (longlong *)0x0) {
          pcStack_c8 = pcStack_e0 + (longlong)plStack_d8 * 8;
          plStack_a0 = (longlong *)*param_2;
          unaff_RBX = (longlong *)*plVar21;
          uStack_bc = *(undefined4 *)((longlong)param_4 + 0x1c);
          plStack_a8 = (longlong *)*param_4;
          puVar6 = (undefined4 *)param_4[2];
          plVar17 = plStack_a8 + 4;
          iVar10 = -(uint)(CONCAT13(unaff_XMM8_Bd,
                                    CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba)))
                          == CONCAT13(unaff_XMM8_Bd,
                                      CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba)))
                          );
          unaff_XMM8_Ba = (char)iVar10;
          unaff_XMM8_Bb = (char)((uint)iVar10 >> 8);
          unaff_XMM8_Bc = (char)((uint)iVar10 >> 0x10);
          unaff_XMM8_Bd = (char)((uint)iVar10 >> 0x18);
          iVar10 = -(uint)(CONCAT13(unaff_XMM8_Bh,
                                    CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be)))
                          == CONCAT13(unaff_XMM8_Bh,
                                      CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be)))
                          );
          unaff_XMM8_Be = (char)iVar10;
          unaff_XMM8_Bf = (char)((uint)iVar10 >> 8);
          unaff_XMM8_Bg = (char)((uint)iVar10 >> 0x10);
          unaff_XMM8_Bh = (char)((uint)iVar10 >> 0x18);
          iVar10 = -(uint)(CONCAT13(unaff_XMM8_Bl,
                                    CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi)))
                          == CONCAT13(unaff_XMM8_Bl,
                                      CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi)))
                          );
          unaff_XMM8_Bi = (char)iVar10;
          unaff_XMM8_Bj = (char)((uint)iVar10 >> 8);
          unaff_XMM8_Bk = (char)((uint)iVar10 >> 0x10);
          unaff_XMM8_Bl = (char)((uint)iVar10 >> 0x18);
          iVar10 = -(uint)(CONCAT13(unaff_XMM8_Bp,
                                    CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm)))
                          == CONCAT13(unaff_XMM8_Bp,
                                      CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm)))
                          );
          unaff_XMM8_Bm = (char)iVar10;
          unaff_XMM8_Bn = (char)((uint)iVar10 >> 8);
          unaff_XMM8_Bo = (char)((uint)iVar10 >> 0x10);
          unaff_XMM8_Bp = (char)((uint)iVar10 >> 0x18);
          param_1 = pcStack_e0;
          pcVar26 = pcStack_c8;
          plVar16 = _DAT_143ca8e90;
LAB_140a5046d:
          plVar21 = *(longlong **)param_1;
          if (*(float *)((longlong)plVar21 + 0x4c) < fVar11) {
            fVar29 = *(float *)(plStack_a0 + 5);
            if (*(float *)(plVar21 + 10) <= 0.0) {
              fVar29 = *(float *)((longlong)plVar21 + 0x4c) + fVar29 + fVar29;
              if (fVar11 <= fVar29) {
                fVar29 = fVar11;
              }
              *(float *)((longlong)plVar21 + 0x4c) = fVar29;
              *puVar6 = uStack_bc;
              lVar13 = plStack_a8[6];
              lVar22 = plStack_a8[8];
              if (lVar13 == plStack_a8[4]) {
                pdb_142d7e8a0(plVar17);
              }
              *(longlong *)(plStack_a8[5] + lVar13 * 8) = lVar22;
              plStack_a8[6] = lVar13 + 1;
              plStack_a8[8] = plStack_a8[8] + 1;
            }
            else {
              *(float *)(plVar21 + 10) = *(float *)(plVar21 + 10) - fVar29;
            }
          }
          param_4 = plVar21 + 2;
          unaff_R12 = (undefined *)plVar21[2];
          puStack_148 = unaff_R12;
          if (unaff_RBX[3] != 0) {
            uVar20 = pdb_1400af0a0(unaff_RBX + 4,&puStack_148);
            unaff_R13 = pcStack_c8;
            param_2 = _DAT_143ca8e90;
            lVar13 = *unaff_RBX;
            bVar28 = (byte)(uVar20 >> 0x39);
            auVar30 = ZEXT216(CONCAT11(bVar28,bVar28));
            auVar30 = pshuflw(auVar30,auVar30,0);
            lVar22 = 0;
            do {
              uVar20 = uVar20 & unaff_RBX[1];
              auVar3 = *(undefined1 (*) [16])(lVar13 + uVar20);
              auVar32[0] = -(auVar3[0] == auVar30[0]);
              auVar32[1] = -(auVar3[1] == auVar30[1]);
              auVar32[2] = -(auVar3[2] == auVar30[2]);
              auVar32[3] = -(auVar3[3] == auVar30[3]);
              auVar32[4] = -(auVar3[4] == auVar30[4]);
              auVar32[5] = -(auVar3[5] == auVar30[5]);
              auVar32[6] = -(auVar3[6] == auVar30[6]);
              auVar32[7] = -(auVar3[7] == auVar30[7]);
              auVar32[8] = -(auVar3[8] == auVar30[0]);
              auVar32[9] = -(auVar3[9] == auVar30[1]);
              auVar32[10] = -(auVar3[10] == auVar30[2]);
              auVar32[0xb] = -(auVar3[0xb] == auVar30[3]);
              auVar32[0xc] = -(auVar3[0xc] == auVar30[4]);
              auVar32[0xd] = -(auVar3[0xd] == auVar30[5]);
              auVar32[0xe] = -(auVar3[0xe] == auVar30[6]);
              auVar32[0xf] = -(auVar3[0xf] == auVar30[7]);
              uVar24 = (ushort)(SUB161(auVar32 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar32[0xf] >> 7) << 0xf;
              uVar19 = (uint)uVar24;
              while (uVar24 != 0) {
                uVar8 = 0;
                for (uVar9 = uVar19; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                  uVar8 = uVar8 + 1;
                }
                lVar25 = (uVar8 + uVar20 & unaff_RBX[1]) * -0x98;
                if (unaff_R12 == *(undefined **)(lVar13 + -0x98 + lVar25)) {
                  lVar13 = lVar13 + lVar25;
                  uVar20 = *(ulonglong *)(lVar13 + -0x78);
                  if (uVar20 == 0) {
                    lVar22 = 0;
                    uVar14 = 0;
LAB_140a50690:
                    lVar25 = 0;
                  }
                  else {
                    uVar14 = *(ulonglong *)(lVar13 + -0x90);
                    uVar18 = 0;
                    if (uVar14 <= *(ulonglong *)(lVar13 + -0x80)) {
                      uVar18 = uVar14;
                    }
                    lVar22 = *(ulonglong *)(lVar13 + -0x80) - uVar18;
                    lVar25 = uVar20 - (uVar14 - lVar22);
                    if (uVar20 < uVar14 - lVar22 || lVar25 == 0) {
                      uVar14 = lVar22 + uVar20;
                      goto LAB_140a50690;
                    }
                  }
                  lVar7 = *(longlong *)(lVar13 + -0x88);
                  lVar27 = uVar14 * 0x28 + lVar22 * -0x28;
                  lVar22 = lVar7 + lVar22 * 0x28 + -0x28;
                  goto LAB_140a506d0;
                }
                uVar24 = (ushort)(uVar19 - 1) & (ushort)uVar19;
                uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar24);
              }
              auVar31[0] = -(auVar3[0] == unaff_XMM8_Ba);
              auVar31[1] = -(auVar3[1] == unaff_XMM8_Bb);
              auVar31[2] = -(auVar3[2] == unaff_XMM8_Bc);
              auVar31[3] = -(auVar3[3] == unaff_XMM8_Bd);
              auVar31[4] = -(auVar3[4] == unaff_XMM8_Be);
              auVar31[5] = -(auVar3[5] == unaff_XMM8_Bf);
              auVar31[6] = -(auVar3[6] == unaff_XMM8_Bg);
              auVar31[7] = -(auVar3[7] == unaff_XMM8_Bh);
              auVar31[8] = -(auVar3[8] == unaff_XMM8_Bi);
              auVar31[9] = -(auVar3[9] == unaff_XMM8_Bj);
              auVar31[10] = -(auVar3[10] == unaff_XMM8_Bk);
              auVar31[0xb] = -(auVar3[0xb] == unaff_XMM8_Bl);
              auVar31[0xc] = -(auVar3[0xc] == unaff_XMM8_Bm);
              auVar31[0xd] = -(auVar3[0xd] == unaff_XMM8_Bn);
              auVar31[0xe] = -(auVar3[0xe] == unaff_XMM8_Bo);
              auVar31[0xf] = -(auVar3[0xf] == unaff_XMM8_Bp);
              if ((((((((((((((((SUB161(auVar31 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar31 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar31 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar31 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar31 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar31 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar31 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar31 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar31 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar31 >> 0x4f,0) & 1) != 0) || (SUB161(auVar31 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar31 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar31 >> 0x67,0) & 1) != 0) || (SUB161(auVar31 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar31 >> 0x77,0) & 1) != 0) || auVar31[0xf] < '\0') break;
              uVar20 = uVar20 + lVar22 + 0x10;
              lVar22 = lVar22 + 0x10;
            } while( true );
          }
          unaff_R13 = pcVar26;
          param_2 = plVar16;
          if (*plVar16 != 0) {
            pcStack_e0 = pdb_140f72a40;
            puStack_148 = (undefined *)0x0;
            puStack_140 = &UNK_14303d5fd;
            uStack_138 = 0x2e;
            uStack_130 = 0;
            pauStack_128 = (undefined1 (*) [16])&UNK_14303d548;
            pauStack_120 = (undefined1 (*) [16])0x39;
            puStack_118 = (undefined *)0x1;
            puStack_110 = &UNK_14303d5fd;
            uStack_108 = 0x2e;
            uStack_100 = 0x3300000001;
            puStack_f8 = &UNK_14303d62b;
            pplStack_f0 = &plStack_e8;
            plStack_e8 = param_4;
            pdb_140f332f0(&uStack_92,&puStack_148);
          }
          goto LAB_140a50460;
        }
LAB_140a5087a:
        if (plStack_b0 != (longlong *)0x0) {
          pub_1406abac0((byte *)pcStack_b8,(longlong)plStack_b0 << 3,8);
        }
        if (cStack_91 == '\0') {
          return;
        }
        plVar16 = (longlong *)pdb_140e97000();
        if (((char)plVar16[0xd] != '\x01') &&
           (plVar16 = (longlong *)pdb_142d8ec20(plVar16,0), plVar16 == (longlong *)0x0)) break;
        if (*plVar16 == 0) {
          *plVar16 = -1;
          plStack_a0 = plVar16;
          pdb_140e95370(plVar16 + 1,uStack_150);
          *plStack_a0 = *plStack_a0 + 1;
          return;
        }
      }
      plVar16 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140a5091a:
      plVar16 = (longlong *)pdb_142d8ec20(plVar16,0);
    } while (plVar16 != (longlong *)0x0);
    pdb_142dc7890(&UNK_143326860);
LAB_140a5094e:
    pdb_142dc8070(&UNK_14303d582,0x39);
  }
  pdb_142dc8070(&UNK_14303dfb4,0x42,0);
LAB_140a50991:
  pdb_142dc8070(&UNK_14303dfb4,0x42);
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
  while( true ) {
    lVar23 = lVar22 + 0x28;
    lVar27 = lVar27 + -0x28;
    plVar16 = (longlong *)(lVar22 + 0x28);
    lVar22 = lVar23;
    if (*plVar16 == *plVar21) break;
LAB_140a506d0:
    if (lVar27 == 0) {
      lVar25 = lVar25 * 0x28;
      lVar22 = lVar7 + -0x28;
      goto LAB_140a50700;
    }
  }
  goto joined_r0x000140a5075a;
  while( true ) {
    lVar23 = lVar22 + 0x28;
    lVar25 = lVar25 + -0x28;
    plVar16 = (longlong *)(lVar22 + 0x28);
    lVar22 = lVar23;
    if (*plVar16 == *plVar21) break;
LAB_140a50700:
    if (lVar25 == 0) {
      lVar23 = 0;
      break;
    }
  }
joined_r0x000140a5075a:
  if (uVar20 == 0) {
    lVar22 = 0;
    uVar14 = 0;
    lVar13 = 0;
  }
  else {
    uVar14 = *(ulonglong *)(lVar13 + -0x90);
    uVar18 = 0;
    if (uVar14 <= *(ulonglong *)(lVar13 + -0x80)) {
      uVar18 = uVar14;
    }
    lVar22 = *(ulonglong *)(lVar13 + -0x80) - uVar18;
    lVar13 = uVar20 - (uVar14 - lVar22);
    if (uVar20 < uVar14 - lVar22 || lVar13 == 0) {
      uVar14 = uVar20 + lVar22;
      lVar13 = 0;
    }
  }
  unaff_R12 = (undefined *)(uVar14 * 8);
  lVar25 = uVar14 * 0x28 + lVar22 * -0x28;
  lVar22 = lVar7 + lVar22 * 0x28 + -0x28;
  do {
    if (lVar25 == 0) {
      lVar13 = lVar13 * 0x28;
      lVar22 = lVar7 + -0x28;
      goto LAB_140a507b0;
    }
    lVar27 = lVar22 + 0x28;
    lVar25 = lVar25 + -0x28;
    plVar16 = (longlong *)(lVar22 + 0x28);
    lVar22 = lVar27;
  } while (*plVar16 != plVar21[1]);
LAB_140a507c6:
  if (lVar23 == 0) {
LAB_140a507cf:
    if (*_DAT_143ca8e90 != 0) {
      pcStack_e0 = pdb_140f72a40;
      pcStack_d0 = pdb_141705e10;
      puStack_148 = (undefined *)0x0;
      puStack_140 = &UNK_14303d5fd;
      uStack_138 = 0x2e;
      uStack_130 = 0;
      pauStack_128 = (undefined1 (*) [16])&UNK_14303d548;
      pauStack_120 = (undefined1 (*) [16])0x39;
      puStack_118 = (undefined *)0x1;
      puStack_110 = &UNK_14303d5fd;
      uStack_108 = 0x2e;
      uStack_100 = 0x2c00000001;
      puStack_f8 = &UNK_14303d5bb;
      pplStack_f0 = &plStack_e8;
      plStack_e8 = param_4;
      plStack_d8 = plVar21;
      pdb_140f332f0(&uStack_92,&puStack_148);
    }
  }
  else {
    fVar29 = (*(float *)(lVar23 + 0x20) + *(float *)(lVar27 + 0x20)) * fVar12;
    *(float *)(plVar21 + 9) = (fVar11 - fVar29) * fVar12 + fVar29;
  }
LAB_140a50460:
  param_1 = param_1 + 8;
  pcVar26 = unaff_R13;
  plVar16 = param_2;
  if (param_1 == unaff_R13) goto LAB_140a5087a;
  goto LAB_140a5046d;
  while( true ) {
    lVar27 = lVar22 + 0x28;
    lVar13 = lVar13 + -0x28;
    plVar16 = (longlong *)(lVar22 + 0x28);
    lVar22 = lVar27;
    if (*plVar16 == plVar21[1]) break;
LAB_140a507b0:
    if (lVar13 == 0) goto LAB_140a507cf;
  }
  goto LAB_140a507c6;
}

