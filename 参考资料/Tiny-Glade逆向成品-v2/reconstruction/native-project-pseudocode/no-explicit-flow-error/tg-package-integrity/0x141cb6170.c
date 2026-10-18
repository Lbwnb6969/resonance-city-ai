// VA 0x141cb6170, PDB extent 3055 bytes
// tg_package_integrity::find_extra_files<std::path::PathBuf>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-package-integrity/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_package_integrity::find_extra_files<std::path::PathBuf>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-package-integrity/src/lib.rs
   Extent: 3055 */

void pdb_141cb6170(ulonglong *param_1,ulonglong *param_2,byte *param_3,longlong *param_4)

{
  char *pcVar1;
  byte *pbVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  undefined4 uVar26;
  longlong *plVar27;
  byte *pbVar28;
  byte *pbVar29;
  char cVar30;
  byte bVar31;
  ushort uVar32;
  int iVar33;
  byte *pbVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  undefined8 uVar37;
  longlong lVar38;
  uint uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
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
  undefined1 auVar42 [16];
  longlong lStack_ae0;
  undefined8 auStack_ad8 [77];
  longlong *plStack_870;
  uint uStack_868;
  undefined4 uStack_844;
  longlong lStack_618;
  undefined1 auStack_610 [592];
  int iStack_3c0;
  undefined4 uStack_3bc;
  undefined8 uStack_3b8;
  longlong *aplStack_3b0 [76];
  ulonglong uStack_150;
  byte *pbStack_148;
  undefined8 uStack_140;
  ulonglong uStack_130;
  byte *pbStack_128;
  ulonglong uStack_110;
  longlong lStack_108;
  longlong *plStack_100;
  ulonglong *puStack_f8;
  byte *pbStack_f0;
  longlong *plStack_e8;
  ulonglong uStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  longlong lStack_c8;
  ulonglong *puStack_c0;
  byte *pbStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  byte *pbStack_a0;
  byte *pbStack_98;
  byte *pbStack_90;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  pbStack_f0 = (byte *)param_1[1];
  puStack_f8 = param_1;
  puStack_c0 = param_2;
  pdb_140f4f710(&iStack_3c0,pbStack_f0,param_1[2]);
  if (iStack_3c0 == 2) {
    auStack_ad8[0] = uStack_3b8;
    lStack_ae0 = 2;
  }
  else {
    pub_142e32760(&lStack_ae0,&iStack_3c0,0x270);
    if (lStack_ae0 != 2) {
      plStack_e8 = param_4;
      pub_142e32760(&iStack_3c0,&lStack_ae0,0x270);
      uStack_110 = puStack_c0[1];
      pbStack_d0 = (byte *)puStack_c0[2];
      lStack_108 = *(longlong *)((longlong)param_3 + 0x18);
      plStack_100 = (longlong *)((longlong)param_3 + 0x20);
      lStack_c8 = *(longlong *)param_3;
      uStack_e0 = *(ulonglong *)((longlong)param_3 + 8);
      iVar7 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                               CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                     CONCAT13(unaff_XMM6_Bd,
                              CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
      iVar8 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                               CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                     CONCAT13(unaff_XMM6_Bh,
                              CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
      iVar9 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                               CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                     CONCAT13(unaff_XMM6_Bl,
                              CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
      iVar10 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                                CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                      CONCAT13(unaff_XMM6_Bp,
                               CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
      while( true ) {
        pdb_140f59fa0(&lStack_ae0,&iStack_3c0);
        if ((int)lStack_ae0 != 1) break;
        pub_142e32760(&lStack_618,auStack_ad8,600);
        if (lStack_618 == 0) {
LAB_141cb6310:
          pdb_1404b38e0(auStack_610);
        }
        else {
          pub_142e32760(&plStack_870,auStack_ad8,600);
          uVar26 = uStack_844;
          uVar39 = uStack_868;
          pdb_140f46c20(&uStack_150,&plStack_870);
          pbStack_d8 = pbStack_148;
          pdb_140f69110(&pbStack_b0,pbStack_148,uStack_140);
          pbVar29 = pbStack_a0;
          pbVar28 = pbStack_a8;
          if ((char)pbStack_b0 == '\0') {
            pdb_140f46b10(&uStack_130,&plStack_870);
            if ((longlong)pbStack_d0 < 0) {
              uVar37 = 0;
              pbVar2 = pbStack_b8;
LAB_141cb67ab:
              pbStack_b8 = pbVar2;
              uStack_81 = 1;
              pdb_142dc7e2a(uVar37,pbStack_b8);
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            if (pbStack_d0 == (byte *)0x0) {
              pbVar34 = (byte *)0x1;
              pbStack_b0 = pbStack_d0;
            }
            else {
              pbStack_b8 = param_3;
              pdb_14007ee60();
              pbVar2 = pbStack_d0;
              uVar37 = 1;
              pbVar34 = pub_1406abab0((ulonglong)pbStack_d0,1);
              if (pbVar34 == (byte *)0x0) goto LAB_141cb67ab;
              pub_142e32760(pbVar34,uStack_110,pbVar2);
              param_3 = pbStack_b8;
              pbStack_b0 = pbVar2;
            }
            pbStack_b8 = pbVar34;
            pbStack_a8 = pbVar34;
            pbStack_a0 = pbStack_b0;
            pdb_1426695d0(&pbStack_b0,pbVar28,pbVar29);
            pbVar28 = pbStack_a0;
            pbStack_98 = pbStack_b0;
            uStack_82 = 1;
            uStack_83 = 1;
            pbStack_90 = pbStack_a8;
            cVar30 = pdb_141b03f30(pbStack_a8,pbStack_a0,&UNK_1433aa964,3);
            plVar27 = plStack_e8;
            if (cVar30 != '\0') {
              if (pbStack_98 != (byte *)0x0) {
                pub_1406abac0(pbStack_90,(ulonglong)pbStack_98,1);
              }
              if (uStack_130 != 0) {
                pub_1406abac0(pbStack_128,uStack_130,1);
              }
              goto LAB_141cb63b4;
            }
            bVar31 = (byte)(uVar39 >> 10) & (byte)((uint)uVar26 >> 0x1d) & 1 ^ 1;
            if (((uVar39 & 0x10) == 0) || (bVar31 == 0)) {
              if (((uVar39 & 0x10) == 0 & bVar31) == 0) {
LAB_141cb65dc:
                if (pbStack_98 != (byte *)0x0) {
                  pub_1406abac0(pbStack_90,(ulonglong)pbStack_98,1);
                }
              }
              else {
                if (lStack_108 != 0) {
                  uStack_82 = 1;
                  uStack_83 = 1;
                  uVar35 = pdb_1400af950(plStack_100,pbStack_90,pbVar28);
                  bVar31 = (byte)(uVar35 >> 0x39);
                  auVar40 = ZEXT216(CONCAT11(bVar31,bVar31));
                  auVar40 = pshuflw(auVar40,auVar40,0);
                  lVar38 = 0;
                  while( true ) {
                    uVar35 = uVar35 & uStack_e0;
                    pcVar1 = (char *)(lStack_c8 + uVar35);
                    cVar30 = *pcVar1;
                    cVar11 = pcVar1[1];
                    cVar12 = pcVar1[2];
                    cVar13 = pcVar1[3];
                    cVar14 = pcVar1[4];
                    cVar15 = pcVar1[5];
                    cVar16 = pcVar1[6];
                    cVar17 = pcVar1[7];
                    cVar18 = pcVar1[8];
                    cVar19 = pcVar1[9];
                    cVar20 = pcVar1[10];
                    cVar21 = pcVar1[0xb];
                    cVar22 = pcVar1[0xc];
                    cVar23 = pcVar1[0xd];
                    cVar24 = pcVar1[0xe];
                    cVar25 = pcVar1[0xf];
                    auVar41[0] = -(cVar30 == auVar40[0]);
                    auVar41[1] = -(cVar11 == auVar40[1]);
                    auVar41[2] = -(cVar12 == auVar40[2]);
                    auVar41[3] = -(cVar13 == auVar40[3]);
                    auVar41[4] = -(cVar14 == auVar40[4]);
                    auVar41[5] = -(cVar15 == auVar40[5]);
                    auVar41[6] = -(cVar16 == auVar40[6]);
                    auVar41[7] = -(cVar17 == auVar40[7]);
                    auVar41[8] = -(cVar18 == auVar40[0]);
                    auVar41[9] = -(cVar19 == auVar40[1]);
                    auVar41[10] = -(cVar20 == auVar40[2]);
                    auVar41[0xb] = -(cVar21 == auVar40[3]);
                    auVar41[0xc] = -(cVar22 == auVar40[4]);
                    auVar41[0xd] = -(cVar23 == auVar40[5]);
                    auVar41[0xe] = -(cVar24 == auVar40[6]);
                    auVar41[0xf] = -(cVar25 == auVar40[7]);
                    uVar32 = (ushort)(SUB161(auVar41 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar41[0xf] >> 7) << 0xf;
                    uVar39 = (uint)uVar32;
                    while (uVar32 != 0) {
                      uVar5 = 0;
                      for (uVar6 = uVar39; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                        uVar5 = uVar5 + 1;
                      }
                      uVar36 = uVar5 + uVar35 & uStack_e0;
                      if ((pbVar28 == *(byte **)(lStack_c8 + -8 + uVar36 * -0x18)) &&
                         (iVar33 = pub_142e32750(pbStack_90,
                                                 *(undefined8 *)(lStack_c8 + uVar36 * -0x18 + -0x10)
                                                 ,pbVar28), iVar33 == 0)) goto LAB_141cb65dc;
                      uVar32 = (ushort)(uVar39 - 1) & (ushort)uVar39;
                      uVar39 = CONCAT22((short)(uVar39 - 1 >> 0x10),uVar32);
                    }
                    auVar42[0] = -(cVar30 == (char)iVar7);
                    auVar42[1] = -(cVar11 == (char)((uint)iVar7 >> 8));
                    auVar42[2] = -(cVar12 == (char)((uint)iVar7 >> 0x10));
                    auVar42[3] = -(cVar13 == (char)((uint)iVar7 >> 0x18));
                    auVar42[4] = -(cVar14 == (char)iVar8);
                    auVar42[5] = -(cVar15 == (char)((uint)iVar8 >> 8));
                    auVar42[6] = -(cVar16 == (char)((uint)iVar8 >> 0x10));
                    auVar42[7] = -(cVar17 == (char)((uint)iVar8 >> 0x18));
                    auVar42[8] = -(cVar18 == (char)iVar9);
                    auVar42[9] = -(cVar19 == (char)((uint)iVar9 >> 8));
                    auVar42[10] = -(cVar20 == (char)((uint)iVar9 >> 0x10));
                    auVar42[0xb] = -(cVar21 == (char)((uint)iVar9 >> 0x18));
                    auVar42[0xc] = -(cVar22 == (char)iVar10);
                    auVar42[0xd] = -(cVar23 == (char)((uint)iVar10 >> 8));
                    auVar42[0xe] = -(cVar24 == (char)((uint)iVar10 >> 0x10));
                    auVar42[0xf] = -(cVar25 == (char)((uint)iVar10 >> 0x18));
                    if ((((((((((((((((SUB161(auVar42 >> 7,0) & 1) != 0 ||
                                     (SUB161(auVar42 >> 0xf,0) & 1) != 0) ||
                                    (SUB161(auVar42 >> 0x17,0) & 1) != 0) ||
                                   (SUB161(auVar42 >> 0x1f,0) & 1) != 0) ||
                                  (SUB161(auVar42 >> 0x27,0) & 1) != 0) ||
                                 (SUB161(auVar42 >> 0x2f,0) & 1) != 0) ||
                                (SUB161(auVar42 >> 0x37,0) & 1) != 0) ||
                               (SUB161(auVar42 >> 0x3f,0) & 1) != 0) ||
                              (SUB161(auVar42 >> 0x47,0) & 1) != 0) ||
                             (SUB161(auVar42 >> 0x4f,0) & 1) != 0) ||
                            (SUB161(auVar42 >> 0x57,0) & 1) != 0) ||
                           (SUB161(auVar42 >> 0x5f,0) & 1) != 0) ||
                          (SUB161(auVar42 >> 0x67,0) & 1) != 0) ||
                         (SUB161(auVar42 >> 0x6f,0) & 1) != 0) ||
                        (SUB161(auVar42 >> 0x77,0) & 1) != 0) || auVar42[0xf] < '\0') break;
                    uVar35 = uVar35 + lVar38 + 0x10;
                    lVar38 = lVar38 + 0x10;
                  }
                }
                lVar38 = plVar27[2];
                if (lVar38 == *plVar27) {
                  pdb_142d7e830(plVar27);
                }
                lVar3 = plVar27[1];
                *(byte **)(lVar3 + lVar38 * 0x18) = pbStack_98;
                *(byte **)(lVar3 + 8 + lVar38 * 0x18) = pbStack_90;
                *(byte **)(lVar3 + 0x10 + lVar38 * 0x18) = pbVar28;
                plVar27[2] = lVar38 + 1;
              }
              if (uStack_130 != 0) {
                pub_1406abac0(pbStack_128,uStack_130,1);
              }
            }
            else {
              pbStack_b0 = pbStack_98;
              pbStack_a8 = pbStack_90;
              uStack_82 = 0;
              uStack_83 = 0;
              pbStack_a0 = pbVar28;
              pdb_141cb6170(&uStack_130,&pbStack_b0,param_3,plStack_e8);
            }
            if (uStack_150 != 0) {
              pub_1406abac0(pbStack_d8,uStack_150,1);
            }
            LOCK();
            *plStack_870 = *plStack_870 + -1;
            UNLOCK();
            if (*plStack_870 == 0) {
              pdb_140cd0de0(&plStack_870);
            }
            if (lStack_618 == 0) {
              pdb_1404b38e0(auStack_610);
            }
          }
          else {
LAB_141cb63b4:
            if (uStack_150 != 0) {
              pub_1406abac0(pbStack_d8,uStack_150,1);
            }
            LOCK();
            *plStack_870 = *plStack_870 + -1;
            UNLOCK();
            if (*plStack_870 == 0) {
              pdb_140cd0de0(&plStack_870);
            }
            if (lStack_618 == 0) goto LAB_141cb6310;
          }
        }
      }
      if (CONCAT44(uStack_3bc,iStack_3c0) != 0) {
        pdb_140f590a0(&uStack_3b8);
      }
      LOCK();
      *aplStack_3b0[0] = *aplStack_3b0[0] + -1;
      UNLOCK();
      if (*aplStack_3b0[0] == 0) {
        pdb_140cd0de0(aplStack_3b0);
      }
      goto LAB_141cb6224;
    }
  }
  pdb_1404b38e0(auStack_ad8);
LAB_141cb6224:
  if (*puStack_c0 != 0) {
    pub_1406abac0((byte *)puStack_c0[1],*puStack_c0,1);
  }
  if (*puStack_f8 != 0) {
    pub_1406abac0(pbStack_f0,*puStack_f8,1);
  }
  return;
}

