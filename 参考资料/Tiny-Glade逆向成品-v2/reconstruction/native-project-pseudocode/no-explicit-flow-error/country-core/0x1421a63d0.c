// VA 0x1421a63d0, PDB extent 535 bytes
// country_core::utils::dirty_tiles::DirtyTiles::iter_tiles<system_clutter::autoclutter::populate_autoclutter_regions::populate_autoclutter_regions::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/dirty_tiles.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::utils::dirty_tiles::DirtyTiles::iter_tiles<system_clutter::autoclutter::populate_autoclutter_regions::populate_autoclutter_regions::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/dirty_tiles.rs
   Extent: 535 */

void pdb_1421a63d0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  ushort uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong *plVar21;
  byte bVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
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
  
  lVar3 = *param_2;
  lVar20 = 0;
  iVar9 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                           CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                 CONCAT13(unaff_XMM6_Bd,
                          CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
  iVar10 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                            CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                  CONCAT13(unaff_XMM6_Bh,
                           CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
  iVar11 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                            CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                  CONCAT13(unaff_XMM6_Bl,
                           CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
  iVar12 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                            CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                  CONCAT13(unaff_XMM6_Bp,
                           CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
  lVar15 = 0;
  do {
    uVar16 = *(ulonglong *)(param_1 + lVar15);
    if (uVar16 != 0) {
      do {
        uVar14 = 0;
        for (uVar19 = uVar16; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x8000000000000000) {
          uVar14 = uVar14 + 1;
        }
        uVar13 = pdb_140c6c1a0(uVar14 | lVar20 << 0x20);
        uVar14 = (ulonglong)uVar13;
        if (*(ulonglong *)(lVar3 + 0x10) <= uVar14) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar14,*(ulonglong *)(lVar3 + 0x10),&UNK_14328a9e0);
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar3 + 8) + 0x10 + uVar14 * 0x18);
        if (lVar4 != 0) {
          plVar5 = *(longlong **)(*(longlong *)(lVar3 + 8) + 8 + uVar14 * 0x18);
          plVar21 = plVar5;
LAB_1421a648f:
          if (*(longlong *)(lVar3 + 0x78) != 0) {
            plVar1 = plVar21 + 1;
            uVar14 = pdb_14216e010(lVar3 + 0x80,plVar21);
            lVar6 = *(longlong *)(lVar3 + 0x60);
            bVar22 = (byte)(uVar14 >> 0x39);
            auVar23 = ZEXT216(CONCAT11(bVar22,bVar22));
            auVar23 = pshuflw(auVar23,auVar23,0);
            lVar17 = 0;
            while( true ) {
              uVar14 = uVar14 & *(ulonglong *)(lVar3 + 0x68);
              auVar2 = *(undefined1 (*) [16])(lVar6 + uVar14);
              auVar25[0] = -(auVar2[0] == auVar23[0]);
              auVar25[1] = -(auVar2[1] == auVar23[1]);
              auVar25[2] = -(auVar2[2] == auVar23[2]);
              auVar25[3] = -(auVar2[3] == auVar23[3]);
              auVar25[4] = -(auVar2[4] == auVar23[4]);
              auVar25[5] = -(auVar2[5] == auVar23[5]);
              auVar25[6] = -(auVar2[6] == auVar23[6]);
              auVar25[7] = -(auVar2[7] == auVar23[7]);
              auVar25[8] = -(auVar2[8] == auVar23[0]);
              auVar25[9] = -(auVar2[9] == auVar23[1]);
              auVar25[10] = -(auVar2[10] == auVar23[2]);
              auVar25[0xb] = -(auVar2[0xb] == auVar23[3]);
              auVar25[0xc] = -(auVar2[0xc] == auVar23[4]);
              auVar25[0xd] = -(auVar2[0xd] == auVar23[5]);
              auVar25[0xe] = -(auVar2[0xe] == auVar23[6]);
              auVar25[0xf] = -(auVar2[0xf] == auVar23[7]);
              uVar18 = (ushort)(SUB161(auVar25 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar25[0xf] >> 7) << 0xf;
              uVar13 = (uint)uVar18;
              while (uVar18 != 0) {
                uVar7 = 0;
                for (uVar8 = uVar13; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                  uVar7 = uVar7 + 1;
                }
                uVar19 = uVar7 + uVar14 & *(ulonglong *)(lVar3 + 0x68);
                if (*plVar21 == *(longlong *)(lVar6 + -0x48 + uVar19 * -0x48)) {
                  lVar6 = lVar6 + uVar19 * -0x48;
                  uVar18 = *(ushort *)(lVar6 + -6);
                  if (uVar18 < 0xfffe) {
                    lVar17 = *(longlong *)(lVar3 + 0x40);
                    if (lVar17 == *(longlong *)(lVar3 + 0x30)) {
                      pdb_142dc74c0(lVar3 + 0x30);
                    }
                    *(ushort *)(*(longlong *)(lVar3 + 0x38) + lVar17 * 2) = uVar18;
                    *(longlong *)(lVar3 + 0x40) = lVar17 + 1;
                  }
                  *(undefined2 *)(lVar6 + -6) = 0xffff;
                  plVar21 = plVar1;
                  if (plVar1 != plVar5 + lVar4) goto LAB_1421a648f;
                  goto LAB_1421a6580;
                }
                uVar18 = (ushort)(uVar13 - 1) & (ushort)uVar13;
                uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar18);
              }
              auVar24[0] = -(auVar2[0] == (char)iVar9);
              auVar24[1] = -(auVar2[1] == (char)((uint)iVar9 >> 8));
              auVar24[2] = -(auVar2[2] == (char)((uint)iVar9 >> 0x10));
              auVar24[3] = -(auVar2[3] == (char)((uint)iVar9 >> 0x18));
              auVar24[4] = -(auVar2[4] == (char)iVar10);
              auVar24[5] = -(auVar2[5] == (char)((uint)iVar10 >> 8));
              auVar24[6] = -(auVar2[6] == (char)((uint)iVar10 >> 0x10));
              auVar24[7] = -(auVar2[7] == (char)((uint)iVar10 >> 0x18));
              auVar24[8] = -(auVar2[8] == (char)iVar11);
              auVar24[9] = -(auVar2[9] == (char)((uint)iVar11 >> 8));
              auVar24[10] = -(auVar2[10] == (char)((uint)iVar11 >> 0x10));
              auVar24[0xb] = -(auVar2[0xb] == (char)((uint)iVar11 >> 0x18));
              auVar24[0xc] = -(auVar2[0xc] == (char)iVar12);
              auVar24[0xd] = -(auVar2[0xd] == (char)((uint)iVar12 >> 8));
              auVar24[0xe] = -(auVar2[0xe] == (char)((uint)iVar12 >> 0x10));
              auVar24[0xf] = -(auVar2[0xf] == (char)((uint)iVar12 >> 0x18));
              if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar24 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar24 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar24 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar24 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar24 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar24 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar24 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar24 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar24 >> 0x4f,0) & 1) != 0) || (SUB161(auVar24 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar24 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar24 >> 0x67,0) & 1) != 0) || (SUB161(auVar24 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar24 >> 0x77,0) & 1) != 0) || auVar24[0xf] < '\0') break;
              uVar14 = uVar14 + lVar17 + 0x10;
              lVar17 = lVar17 + 0x10;
            }
          }
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_14328a9f8);
        }
LAB_1421a6580:
        uVar16 = uVar16 & uVar16 - 1;
      } while (uVar16 != 0);
    }
    lVar15 = lVar15 + 8;
    lVar20 = lVar20 + 1;
    if (lVar15 == 0x200) {
      return;
    }
  } while( true );
}

