// VA 0x1409e4ee0, PDB extent 1291 bytes
// country_core::startup::startup_nani::startup_nani
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_nani.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::startup::startup_nani::startup_nani
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_nani.rs
   Extent: 1291 */

void pdb_1409e4ee0(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  ulonglong uVar14;
  byte bVar15;
  longlong lVar16;
  uint uVar17;
  ushort uVar18;
  longlong lVar19;
  byte bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 unaff_XMM6_Ba;
  undefined1 unaff_XMM6_Bb;
  undefined1 unaff_XMM6_Bc;
  undefined1 unaff_XMM6_Bd;
  undefined1 unaff_XMM6_Be;
  undefined1 unaff_XMM6_Bf;
  undefined1 unaff_XMM6_Bg;
  undefined1 unaff_XMM6_Bh;
  undefined1 unaff_XMM6_Bi;
  undefined1 unaff_XMM6_Bj;
  undefined1 unaff_XMM6_Bk;
  undefined1 unaff_XMM6_Bl;
  undefined1 unaff_XMM6_Bm;
  undefined1 unaff_XMM6_Bn;
  undefined1 unaff_XMM6_Bo;
  undefined1 unaff_XMM6_Bp;
  ulonglong *puStack_110;
  code *pcStack_108;
  ulonglong *puStack_100;
  code *pcStack_f8;
  longlong lStack_78;
  ulonglong uStack_70;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  lVar3 = *param_3;
  uStack_70 = *(ulonglong *)(lVar3 + 0x1258);
  uStack_61 = 0;
  if ((uStack_70 & 0x3f) == 0) {
    uStack_70 = *(ulonglong *)(lVar3 + 0x1260);
    uStack_61 = 1;
    if ((uStack_70 & 0x3f) == 0) {
      uStack_70 = *(ulonglong *)(lVar3 + 0x1268);
      uStack_61 = 2;
      if ((uStack_70 & 0x3f) == 0) {
        uStack_70 = *(ulonglong *)(lVar3 + 0x1270);
        uStack_61 = 3;
        if ((uStack_70 & 0x3f) == 0) {
          uStack_70 = *(ulonglong *)(lVar3 + 0x1278);
          uStack_61 = 4;
          if ((uStack_70 & 0x3f) == 0) {
            uStack_70 = *(ulonglong *)(lVar3 + 0x1280);
            uStack_61 = 5;
            if ((uStack_70 & 0x3f) == 0) {
              uStack_70 = *(ulonglong *)(lVar3 + 0x1288);
              uStack_61 = 6;
              if ((uStack_70 & 0x3f) == 0) {
                uStack_70 = *(ulonglong *)(lVar3 + 0x1290);
                uStack_61 = 7;
                if ((uStack_70 & 0x3f) == 0) {
                  uStack_70 = *(ulonglong *)(lVar3 + 0x1298);
                  uStack_61 = 8;
                  if ((uStack_70 & 0x3f) == 0) {
                    uStack_70 = *(ulonglong *)(lVar3 + 0x12a0);
                    uStack_61 = 9;
                    if ((uStack_70 & 0x3f) == 0) {
                      uStack_70 = *(ulonglong *)(lVar3 + 0x12a8);
                      uStack_61 = 10;
                      if ((uStack_70 & 0x3f) == 0) {
                        uStack_70 = *(ulonglong *)(lVar3 + 0x12b0);
                        uStack_61 = 0xb;
                        if ((uStack_70 & 0x3f) == 0) {
                          uStack_70 = *(ulonglong *)(lVar3 + 0x12b8);
                          uStack_61 = 0xc;
                          if ((uStack_70 & 0x3f) == 0) {
                            uStack_70 = *(ulonglong *)(lVar3 + 0x12c0);
                            uStack_61 = 0xd;
                            if ((uStack_70 & 0x3f) == 0) {
                              uStack_70 = *(ulonglong *)(lVar3 + 0x12c8);
                              uStack_61 = 0xe;
                              if ((uStack_70 & 0x3f) == 0) {
                                uStack_70 = *(ulonglong *)(lVar3 + 0x12d0);
                                uStack_61 = 0xf;
                                if ((uStack_70 & 0x3f) == 0) {
                                  uStack_70 = *(ulonglong *)(lVar3 + 0x12d8);
                                  uStack_61 = 0x10;
                                  if ((uStack_70 & 0x3f) == 0) {
                                    uStack_70 = *(ulonglong *)(lVar3 + 0x12e0);
                                    uStack_61 = 0x11;
                                    if ((uStack_70 & 0x3f) == 0) {
                                      uStack_70 = *(ulonglong *)(lVar3 + 0x12e8);
                                      uStack_61 = 0x12;
                                      if ((uStack_70 & 0x3f) == 0) {
                                        uStack_70 = *(ulonglong *)(lVar3 + 0x12f0);
                                        uStack_61 = 0x13;
                                        if ((uStack_70 & 0x3f) == 0) {
                                          uStack_70 = *(ulonglong *)(lVar3 + 0x12f8);
                                          uStack_61 = 0x14;
                                          if ((uStack_70 & 0x3f) == 0) {
                                            uStack_70 = *(ulonglong *)(lVar3 + 0x1300);
                                            uStack_61 = 0x15;
                                            if ((uStack_70 & 0x3f) == 0) {
                                              uStack_70 = *(ulonglong *)(lVar3 + 0x1308);
                                              uStack_61 = 0x16;
                                              if ((uStack_70 & 0x3f) == 0) {
                                                uStack_70 = *(ulonglong *)(lVar3 + 0x1310);
                                                uStack_61 = 0x17;
                                                if ((uStack_70 & 0x3f) == 0) {
                                                  uStack_70 = *(ulonglong *)(lVar3 + 0x1318);
                                                  uStack_61 = 0x18;
                                                  if ((uStack_70 & 0x3f) == 0) {
                                                    uStack_70 = *(ulonglong *)(lVar3 + 0x1320);
                                                    uStack_61 = 0x19;
                                                    if ((uStack_70 & 0x3f) == 0) {
                                                      uStack_70 = *(ulonglong *)(lVar3 + 0x1328);
                                                      uStack_61 = 0x1a;
                                                      if ((uStack_70 & 0x3f) == 0) {
                                                        uStack_70 = *(ulonglong *)(lVar3 + 0x1330);
                                                        uStack_61 = 0x1b;
                                                        if ((uStack_70 & 0x3f) == 0) {
                                                          uStack_70 = *(ulonglong *)(lVar3 + 0x1338)
                                                          ;
                                                          uStack_61 = 0x1c;
                                                          if ((uStack_70 & 0x3f) == 0) {
                                                            lVar4 = *(longlong *)*param_1;
                                                            param_2 = (longlong *)*param_2;
                                                            uVar2 = *(undefined4 *)
                                                                     ((longlong)param_3 + 0x1c);
                                                            puVar5 = (undefined4 *)param_3[2];
                                                            iVar9 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                                                                                     CONCAT12(
                                                  unaff_XMM6_Bc,
                                                  CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                                                  CONCAT13(unaff_XMM6_Bd,
                                                           CONCAT12(unaff_XMM6_Bc,
                                                                    CONCAT11(unaff_XMM6_Bb,
                                                                             unaff_XMM6_Ba))));
                                                  iVar10 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                                                                            CONCAT12(unaff_XMM6_Bg,
                                                                                     CONCAT11(
                                                  unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                                                  CONCAT13(unaff_XMM6_Bh,
                                                           CONCAT12(unaff_XMM6_Bg,
                                                                    CONCAT11(unaff_XMM6_Bf,
                                                                             unaff_XMM6_Be))));
                                                  iVar11 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                                                                            CONCAT12(unaff_XMM6_Bk,
                                                                                     CONCAT11(
                                                  unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                                                  CONCAT13(unaff_XMM6_Bl,
                                                           CONCAT12(unaff_XMM6_Bk,
                                                                    CONCAT11(unaff_XMM6_Bj,
                                                                             unaff_XMM6_Bi))));
                                                  iVar12 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                                                                            CONCAT12(unaff_XMM6_Bo,
                                                                                     CONCAT11(
                                                  unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                                                  CONCAT13(unaff_XMM6_Bp,
                                                           CONCAT12(unaff_XMM6_Bo,
                                                                    CONCAT11(unaff_XMM6_Bn,
                                                                             unaff_XMM6_Bm))));
                                                  bVar20 = 1;
                                                  bVar15 = 0;
LAB_1409e51f4:
                                                  bVar13 = bVar20;
                                                  uStack_70 = CONCAT71(uStack_70._1_7_,bVar15);
                                                  if (param_2[3] != 0) {
                                                    uVar14 = pdb_1417c4b30(param_2 + 4,&uStack_70);
                                                    lVar6 = *param_2;
                                                    bVar20 = (byte)(uVar14 >> 0x39);
                                                    auVar21 = ZEXT216(CONCAT11(bVar20,bVar20));
                                                    auVar21 = pshuflw(auVar21,auVar21,0);
                                                    lVar16 = 0;
                                                    while( true ) {
                                                      uVar14 = uVar14 & param_2[1];
                                                      auVar1 = *(undefined1 (*) [16])
                                                                (lVar6 + uVar14);
                                                      auVar23[0] = -(auVar1[0] == auVar21[0]);
                                                      auVar23[1] = -(auVar1[1] == auVar21[1]);
                                                      auVar23[2] = -(auVar1[2] == auVar21[2]);
                                                      auVar23[3] = -(auVar1[3] == auVar21[3]);
                                                      auVar23[4] = -(auVar1[4] == auVar21[4]);
                                                      auVar23[5] = -(auVar1[5] == auVar21[5]);
                                                      auVar23[6] = -(auVar1[6] == auVar21[6]);
                                                      auVar23[7] = -(auVar1[7] == auVar21[7]);
                                                      auVar23[8] = -(auVar1[8] == auVar21[0]);
                                                      auVar23[9] = -(auVar1[9] == auVar21[1]);
                                                      auVar23[10] = -(auVar1[10] == auVar21[2]);
                                                      auVar23[0xb] = -(auVar1[0xb] == auVar21[3]);
                                                      auVar23[0xc] = -(auVar1[0xc] == auVar21[4]);
                                                      auVar23[0xd] = -(auVar1[0xd] == auVar21[5]);
                                                      auVar23[0xe] = -(auVar1[0xe] == auVar21[6]);
                                                      auVar23[0xf] = -(auVar1[0xf] == auVar21[7]);
                                                      uVar18 = (ushort)(SUB161(auVar23 >> 7,0) & 1)
                                                               | (ushort)(SUB161(auVar23 >> 0xf,0) &
                                                                         1) << 1 |
                                                               (ushort)(SUB161(auVar23 >> 0x17,0) &
                                                                       1) << 2 |
                                                               (ushort)(SUB161(auVar23 >> 0x1f,0) &
                                                                       1) << 3 |
                                                               (ushort)(SUB161(auVar23 >> 0x27,0) &
                                                                       1) << 4 |
                                                               (ushort)(SUB161(auVar23 >> 0x2f,0) &
                                                                       1) << 5 |
                                                               (ushort)(SUB161(auVar23 >> 0x37,0) &
                                                                       1) << 6 |
                                                               (ushort)(SUB161(auVar23 >> 0x3f,0) &
                                                                       1) << 7 |
                                                               (ushort)(SUB161(auVar23 >> 0x47,0) &
                                                                       1) << 8 |
                                                               (ushort)(SUB161(auVar23 >> 0x4f,0) &
                                                                       1) << 9 |
                                                               (ushort)(SUB161(auVar23 >> 0x57,0) &
                                                                       1) << 10 |
                                                               (ushort)(SUB161(auVar23 >> 0x5f,0) &
                                                                       1) << 0xb |
                                                               (ushort)(SUB161(auVar23 >> 0x67,0) &
                                                                       1) << 0xc |
                                                               (ushort)(SUB161(auVar23 >> 0x6f,0) &
                                                                       1) << 0xd |
                                                               (ushort)(SUB161(auVar23 >> 0x77,0) &
                                                                       1) << 0xe |
                                                               (ushort)(auVar23[0xf] >> 7) << 0xf;
                                                      uVar17 = (uint)uVar18;
                                                      while (uVar18 != 0) {
                                                        uVar7 = 0;
                                                        for (uVar8 = uVar17; (uVar8 & 1) == 0;
                                                            uVar8 = uVar8 >> 1 | 0x80000000) {
                                                          uVar7 = uVar7 + 1;
                                                        }
                                                        lVar19 = (uVar7 + uVar14 & param_2[1]) *
                                                                 -0xf0;
                                                        if ((char)uStack_70 ==
                                                            *(char *)(lVar6 + -0xf0 + lVar19)) {
                                                          (**(code **)(&UNK_143032dc0 +
                                                                      (ulonglong)bVar15 * 8))
                                                                    (&puStack_110,lVar4 + 0x10,
                                                                     *(undefined8 *)
                                                                      (lVar6 + lVar19 + -0x48));
                                                          *puVar5 = uVar2;
                                                          lStack_78 = lVar3 + (ulonglong)
                                                                              ((uint)bVar15 * 0xa0)
                                                                      + 0x40;
                                                          if (-0x7fffffffffffffff <
                                                              *(longlong *)
                                                               (lVar3 + 0x40 +
                                                               (ulonglong)((uint)bVar15 * 0xa0))) {
                                                            pdb_140999c40(lStack_78);
                                                          }
                                                          pub_142e32760(lStack_78,&puStack_110,0x98)
                                                          ;
                                                          bVar20 = bVar13 + 1;
                                                          bVar15 = bVar13;
                                                          if (bVar13 == 0x1d) {
                                                            return;
                                                          }
                                                          goto LAB_1409e51f4;
                                                        }
                                                        uVar18 = (ushort)(uVar17 - 1) &
                                                                 (ushort)uVar17;
                                                        uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10
                                                                                 ),uVar18);
                                                      }
                                                      auVar22[0] = -(auVar1[0] == (char)iVar9);
                                                      auVar22[1] = -(auVar1[1] ==
                                                                    (char)((uint)iVar9 >> 8));
                                                      auVar22[2] = -(auVar1[2] ==
                                                                    (char)((uint)iVar9 >> 0x10));
                                                      auVar22[3] = -(auVar1[3] ==
                                                                    (char)((uint)iVar9 >> 0x18));
                                                      auVar22[4] = -(auVar1[4] == (char)iVar10);
                                                      auVar22[5] = -(auVar1[5] ==
                                                                    (char)((uint)iVar10 >> 8));
                                                      auVar22[6] = -(auVar1[6] ==
                                                                    (char)((uint)iVar10 >> 0x10));
                                                      auVar22[7] = -(auVar1[7] ==
                                                                    (char)((uint)iVar10 >> 0x18));
                                                      auVar22[8] = -(auVar1[8] == (char)iVar11);
                                                      auVar22[9] = -(auVar1[9] ==
                                                                    (char)((uint)iVar11 >> 8));
                                                      auVar22[10] = -(auVar1[10] ==
                                                                     (char)((uint)iVar11 >> 0x10));
                                                      auVar22[0xb] = -(auVar1[0xb] ==
                                                                      (char)((uint)iVar11 >> 0x18));
                                                      auVar22[0xc] = -(auVar1[0xc] == (char)iVar12);
                                                      auVar22[0xd] = -(auVar1[0xd] ==
                                                                      (char)((uint)iVar12 >> 8));
                                                      auVar22[0xe] = -(auVar1[0xe] ==
                                                                      (char)((uint)iVar12 >> 0x10));
                                                      auVar22[0xf] = -(auVar1[0xf] ==
                                                                      (char)((uint)iVar12 >> 0x18));
                                                      if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1)
                                                                        != 0 || (SUB161(auVar22 >>
                                                                                        0xf,0) & 1)
                                                                                != 0) ||
                                                                      (SUB161(auVar22 >> 0x17,0) & 1
                                                                      ) != 0) ||
                                                                     (SUB161(auVar22 >> 0x1f,0) & 1)
                                                                     != 0) || (SUB161(auVar22 >>
                                                                                      0x27,0) & 1)
                                                                              != 0) ||
                                                                   (SUB161(auVar22 >> 0x2f,0) & 1)
                                                                   != 0) || (SUB161(auVar22 >> 0x37,
                                                                                    0) & 1) != 0) ||
                                                                 (SUB161(auVar22 >> 0x3f,0) & 1) !=
                                                                 0) || (SUB161(auVar22 >> 0x47,0) &
                                                                       1) != 0) ||
                                                               (SUB161(auVar22 >> 0x4f,0) & 1) != 0)
                                                              || (SUB161(auVar22 >> 0x57,0) & 1) !=
                                                                 0) || (SUB161(auVar22 >> 0x5f,0) &
                                                                       1) != 0) ||
                                                            (SUB161(auVar22 >> 0x67,0) & 1) != 0) ||
                                                           (SUB161(auVar22 >> 0x6f,0) & 1) != 0) ||
                                                          (SUB161(auVar22 >> 0x77,0) & 1) != 0) ||
                                                          auVar22[0xf] < '\0') break;
                                                      uVar14 = uVar14 + lVar16 + 0x10;
                                                      lVar16 = lVar16 + 0x10;
                                                    }
                                                  }
                                                  puStack_110 = &uStack_70;
                                                  pcStack_108 = pdb_140a593a0;
                    /* WARNING: Subroutine does not return */
                                                  pdb_142dc83d0(&UNK_14303dd85,&puStack_110,
                                                                &UNK_14303dde0);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  puStack_110 = (ulonglong *)&uStack_61;
  pcStack_108 = pdb_140a593a0;
  puStack_100 = &uStack_70;
  pcStack_f8 = pdb_140f72a40;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14303d4f0,&puStack_110,&UNK_14303d530);
}

