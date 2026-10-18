// VA 0x141cb55e0, PDB extent 2959 bytes
// tg_package_integrity::find_extra_files<ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-package-integrity/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_package_integrity::find_extra_files<ref$<str$> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-package-integrity/src/lib.rs
   Extent: 2959 */

void pdb_141cb55e0(undefined8 param_1,undefined8 param_2,ulonglong *param_3,byte *param_4,
                  longlong *param_5)

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
  byte *pbVar27;
  byte *pbVar28;
  char cVar29;
  byte bVar30;
  ushort uVar31;
  int iVar32;
  byte *pbVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  undefined8 uVar36;
  longlong lVar37;
  uint uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
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
  undefined1 auVar41 [16];
  longlong lStack_ac8;
  undefined1 auStack_ac0 [592];
  longlong lStack_870;
  undefined8 auStack_868 [77];
  longlong *plStack_600;
  uint uStack_5f8;
  undefined4 uStack_5d4;
  int iStack_3a8;
  undefined4 uStack_3a4;
  undefined8 uStack_3a0;
  longlong *aplStack_398 [76];
  ulonglong uStack_138;
  byte *pbStack_130;
  undefined8 uStack_128;
  ulonglong uStack_118;
  byte *pbStack_110;
  ulonglong uStack_f8;
  longlong lStack_f0;
  longlong *plStack_e8;
  ulonglong uStack_e0;
  ulonglong *puStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  longlong lStack_c0;
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
  puStack_d8 = param_3;
  pdb_140f4f710(&iStack_3a8,param_1,param_2);
  if (iStack_3a8 == 2) {
    auStack_868[0] = uStack_3a0;
    lStack_870 = 2;
  }
  else {
    pub_142e32760(&lStack_870,&iStack_3a8,0x270);
    if (lStack_870 != 2) {
      pub_142e32760(&iStack_3a8,&lStack_870,0x270);
      uStack_f8 = puStack_d8[1];
      pbStack_c8 = (byte *)puStack_d8[2];
      lStack_f0 = *(longlong *)((longlong)param_4 + 0x18);
      plStack_e8 = (longlong *)((longlong)param_4 + 0x20);
      lStack_c0 = *(longlong *)param_4;
      uStack_e0 = *(ulonglong *)((longlong)param_4 + 8);
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
        pdb_140f59fa0(&lStack_870,&iStack_3a8);
        if ((int)lStack_870 != 1) break;
        pub_142e32760(&lStack_ac8,auStack_868,600);
        if (lStack_ac8 == 0) {
LAB_141cb5750:
          pdb_1404b38e0(auStack_ac0);
        }
        else {
          pub_142e32760(&plStack_600,auStack_868,600);
          uVar26 = uStack_5d4;
          uVar38 = uStack_5f8;
          pdb_140f46c20(&uStack_138,&plStack_600);
          pbStack_d0 = pbStack_130;
          pdb_140f69110(&pbStack_b0,pbStack_130,uStack_128);
          pbVar28 = pbStack_a0;
          pbVar27 = pbStack_a8;
          if ((char)pbStack_b0 == '\0') {
            pdb_140f46b10(&uStack_118,&plStack_600);
            if ((longlong)pbStack_c8 < 0) {
              uVar36 = 0;
              pbVar2 = pbStack_b8;
LAB_141cb5be0:
              pbStack_b8 = pbVar2;
              uStack_81 = 1;
              pdb_142dc7e2a(uVar36,pbStack_b8);
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            if (pbStack_c8 == (byte *)0x0) {
              pbVar33 = (byte *)0x1;
              pbStack_b0 = pbStack_c8;
            }
            else {
              pbStack_b8 = param_4;
              pdb_14007ee60();
              pbVar2 = pbStack_c8;
              uVar36 = 1;
              pbVar33 = pub_1406abab0((ulonglong)pbStack_c8,1);
              if (pbVar33 == (byte *)0x0) goto LAB_141cb5be0;
              pub_142e32760(pbVar33,uStack_f8,pbVar2);
              pbStack_b0 = pbVar2;
              param_4 = pbStack_b8;
            }
            pbStack_b8 = pbVar33;
            pbStack_a8 = pbVar33;
            pbStack_a0 = pbStack_b0;
            pdb_1426695d0(&pbStack_b0,pbVar27,pbVar28);
            pbVar27 = pbStack_a0;
            pbStack_98 = pbStack_b0;
            uStack_82 = 1;
            uStack_83 = 1;
            pbStack_90 = pbStack_a8;
            cVar29 = pdb_141b03f30(pbStack_a8,pbStack_a0,&UNK_1433aa964,3);
            if (cVar29 != '\0') {
              if (pbStack_98 != (byte *)0x0) {
                pub_1406abac0(pbStack_90,(ulonglong)pbStack_98,1);
              }
              if (uStack_118 != 0) {
                pub_1406abac0(pbStack_110,uStack_118,1);
              }
              goto LAB_141cb57f7;
            }
            bVar30 = (byte)(uVar38 >> 10) & (byte)((uint)uVar26 >> 0x1d) & 1 ^ 1;
            if (((uVar38 & 0x10) == 0) || (bVar30 == 0)) {
              if (((uVar38 & 0x10) == 0 & bVar30) == 0) {
LAB_141cb5a14:
                if (pbStack_98 != (byte *)0x0) {
                  pub_1406abac0(pbStack_90,(ulonglong)pbStack_98,1);
                }
              }
              else {
                if (lStack_f0 != 0) {
                  uStack_82 = 1;
                  uStack_83 = 1;
                  uVar34 = pdb_1400af950(plStack_e8,pbStack_90,pbVar27);
                  bVar30 = (byte)(uVar34 >> 0x39);
                  auVar39 = ZEXT216(CONCAT11(bVar30,bVar30));
                  auVar39 = pshuflw(auVar39,auVar39,0);
                  lVar37 = 0;
                  while( true ) {
                    uVar34 = uVar34 & uStack_e0;
                    pcVar1 = (char *)(lStack_c0 + uVar34);
                    cVar29 = *pcVar1;
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
                    auVar40[0] = -(cVar29 == auVar39[0]);
                    auVar40[1] = -(cVar11 == auVar39[1]);
                    auVar40[2] = -(cVar12 == auVar39[2]);
                    auVar40[3] = -(cVar13 == auVar39[3]);
                    auVar40[4] = -(cVar14 == auVar39[4]);
                    auVar40[5] = -(cVar15 == auVar39[5]);
                    auVar40[6] = -(cVar16 == auVar39[6]);
                    auVar40[7] = -(cVar17 == auVar39[7]);
                    auVar40[8] = -(cVar18 == auVar39[0]);
                    auVar40[9] = -(cVar19 == auVar39[1]);
                    auVar40[10] = -(cVar20 == auVar39[2]);
                    auVar40[0xb] = -(cVar21 == auVar39[3]);
                    auVar40[0xc] = -(cVar22 == auVar39[4]);
                    auVar40[0xd] = -(cVar23 == auVar39[5]);
                    auVar40[0xe] = -(cVar24 == auVar39[6]);
                    auVar40[0xf] = -(cVar25 == auVar39[7]);
                    uVar31 = (ushort)(SUB161(auVar40 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar40[0xf] >> 7) << 0xf;
                    uVar38 = (uint)uVar31;
                    while (uVar31 != 0) {
                      uVar5 = 0;
                      for (uVar6 = uVar38; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                        uVar5 = uVar5 + 1;
                      }
                      uVar35 = uVar5 + uVar34 & uStack_e0;
                      if ((pbVar27 == *(byte **)(lStack_c0 + -8 + uVar35 * -0x18)) &&
                         (iVar32 = pub_142e32750(pbStack_90,
                                                 *(undefined8 *)(lStack_c0 + uVar35 * -0x18 + -0x10)
                                                 ,pbVar27), iVar32 == 0)) goto LAB_141cb5a14;
                      uVar31 = (ushort)(uVar38 - 1) & (ushort)uVar38;
                      uVar38 = CONCAT22((short)(uVar38 - 1 >> 0x10),uVar31);
                    }
                    auVar41[0] = -(cVar29 == (char)iVar7);
                    auVar41[1] = -(cVar11 == (char)((uint)iVar7 >> 8));
                    auVar41[2] = -(cVar12 == (char)((uint)iVar7 >> 0x10));
                    auVar41[3] = -(cVar13 == (char)((uint)iVar7 >> 0x18));
                    auVar41[4] = -(cVar14 == (char)iVar8);
                    auVar41[5] = -(cVar15 == (char)((uint)iVar8 >> 8));
                    auVar41[6] = -(cVar16 == (char)((uint)iVar8 >> 0x10));
                    auVar41[7] = -(cVar17 == (char)((uint)iVar8 >> 0x18));
                    auVar41[8] = -(cVar18 == (char)iVar9);
                    auVar41[9] = -(cVar19 == (char)((uint)iVar9 >> 8));
                    auVar41[10] = -(cVar20 == (char)((uint)iVar9 >> 0x10));
                    auVar41[0xb] = -(cVar21 == (char)((uint)iVar9 >> 0x18));
                    auVar41[0xc] = -(cVar22 == (char)iVar10);
                    auVar41[0xd] = -(cVar23 == (char)((uint)iVar10 >> 8));
                    auVar41[0xe] = -(cVar24 == (char)((uint)iVar10 >> 0x10));
                    auVar41[0xf] = -(cVar25 == (char)((uint)iVar10 >> 0x18));
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
                         (SUB161(auVar41 >> 0x6f,0) & 1) != 0) ||
                        (SUB161(auVar41 >> 0x77,0) & 1) != 0) || auVar41[0xf] < '\0') break;
                    uVar34 = uVar34 + lVar37 + 0x10;
                    lVar37 = lVar37 + 0x10;
                  }
                }
                lVar37 = param_5[2];
                if (lVar37 == *param_5) {
                  pdb_142d7e830();
                }
                lVar3 = param_5[1];
                *(byte **)(lVar3 + lVar37 * 0x18) = pbStack_98;
                *(byte **)(lVar3 + 8 + lVar37 * 0x18) = pbStack_90;
                *(byte **)(lVar3 + 0x10 + lVar37 * 0x18) = pbVar27;
                param_5[2] = lVar37 + 1;
              }
              if (uStack_118 != 0) {
                pub_1406abac0(pbStack_110,uStack_118,1);
              }
            }
            else {
              pbStack_b0 = pbStack_98;
              pbStack_a8 = pbStack_90;
              uStack_82 = 0;
              uStack_83 = 0;
              pbStack_a0 = pbVar27;
              pdb_141cb6170(&uStack_118,&pbStack_b0,param_4,param_5);
            }
            if (uStack_138 != 0) {
              pub_1406abac0(pbStack_d0,uStack_138,1);
            }
            LOCK();
            *plStack_600 = *plStack_600 + -1;
            UNLOCK();
            if (*plStack_600 == 0) {
              pdb_140cd0de0(&plStack_600);
            }
            if (lStack_ac8 == 0) {
              pdb_1404b38e0(auStack_ac0);
            }
          }
          else {
LAB_141cb57f7:
            if (uStack_138 != 0) {
              pub_1406abac0(pbStack_d0,uStack_138,1);
            }
            LOCK();
            *plStack_600 = *plStack_600 + -1;
            UNLOCK();
            if (*plStack_600 == 0) {
              pdb_140cd0de0(&plStack_600);
            }
            if (lStack_ac8 == 0) goto LAB_141cb5750;
          }
        }
      }
      if (CONCAT44(uStack_3a4,iStack_3a8) != 0) {
        pdb_140f590a0(&uStack_3a0);
      }
      LOCK();
      *aplStack_398[0] = *aplStack_398[0] + -1;
      UNLOCK();
      if (*aplStack_398[0] == 0) {
        pdb_140cd0de0(aplStack_398);
      }
      goto LAB_141cb5690;
    }
  }
  pdb_1404b38e0(auStack_868);
LAB_141cb5690:
  if (*puStack_d8 != 0) {
    pub_1406abac0((byte *)puStack_d8[1],*puStack_d8,1);
  }
  return;
}

