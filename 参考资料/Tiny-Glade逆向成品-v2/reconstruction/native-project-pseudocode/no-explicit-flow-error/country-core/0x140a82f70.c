// VA 0x140a82f70, PDB extent 749 bytes
// country_core::utils::dirty_tiles::DirtyTiles::iter_tiles<country_core::systems::wall::wall_state::publish_public_wall_state::gather_lazy_update_sources::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/dirty_tiles.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::utils::dirty_tiles::DirtyTiles::iter_tiles<country_core::systems::wall::wall_state::publish_public_wall_state::gather_lazy_update_sources::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/dirty_tiles.rs
   Extent: 749 */

void pdb_140a82f70(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  ushort uVar19;
  longlong lVar20;
  longlong *plVar21;
  byte bVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 unaff_XMM6_Ba;
  undefined1 unaff_XMM6_Bb;
  char cVar28;
  undefined1 unaff_XMM6_Bc;
  char cVar29;
  undefined1 unaff_XMM6_Bd;
  char cVar30;
  undefined1 unaff_XMM6_Be;
  undefined1 unaff_XMM6_Bf;
  char cVar31;
  undefined1 unaff_XMM6_Bg;
  char cVar32;
  undefined1 unaff_XMM6_Bh;
  char cVar33;
  undefined1 unaff_XMM6_Bi;
  undefined1 unaff_XMM6_Bj;
  char cVar34;
  undefined1 unaff_XMM6_Bk;
  char cVar35;
  undefined1 unaff_XMM6_Bl;
  char cVar36;
  undefined1 unaff_XMM6_Bm;
  undefined1 unaff_XMM6_Bn;
  char cVar37;
  undefined1 unaff_XMM6_Bo;
  char cVar38;
  undefined1 unaff_XMM6_Bp;
  char cVar39;
  longlong lStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  ulonglong uStack_80;
  
  fVar12 = _DAT_142e36f50;
  lVar15 = *param_2;
  plVar3 = (longlong *)param_2[1];
  plVar4 = (longlong *)param_2[2];
  lStack_a8 = 0;
  iVar8 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                           CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                 CONCAT13(unaff_XMM6_Bd,
                          CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
  cVar28 = (char)((uint)iVar8 >> 8);
  cVar29 = (char)((uint)iVar8 >> 0x10);
  cVar30 = (char)((uint)iVar8 >> 0x18);
  iVar9 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                           CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                 CONCAT13(unaff_XMM6_Bh,
                          CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
  cVar31 = (char)((uint)iVar9 >> 8);
  cVar32 = (char)((uint)iVar9 >> 0x10);
  cVar33 = (char)((uint)iVar9 >> 0x18);
  iVar10 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                            CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                  CONCAT13(unaff_XMM6_Bl,
                           CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
  cVar34 = (char)((uint)iVar10 >> 8);
  cVar35 = (char)((uint)iVar10 >> 0x10);
  cVar36 = (char)((uint)iVar10 >> 0x18);
  iVar11 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                            CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                  CONCAT13(unaff_XMM6_Bp,
                           CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
  cVar37 = (char)((uint)iVar11 >> 8);
  cVar38 = (char)((uint)iVar11 >> 0x10);
  cVar39 = (char)((uint)iVar11 >> 0x18);
  lStack_90 = 0;
  lStack_98 = param_1;
  lStack_88 = lVar15;
  do {
    uVar14 = *(ulonglong *)(lStack_98 + lStack_90);
    if (uVar14 != 0) {
      uStack_80 = lStack_a8 << 6;
      do {
        uVar13 = 0;
        for (uVar7 = uVar14; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x8000000000000000) {
          uVar13 = uVar13 + 1;
        }
        uVar13 = uVar13 | uStack_80;
        if (*(ulonglong *)(lVar15 + 0x10) <= uVar13) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar13,*(ulonglong *)(lVar15 + 0x10),&UNK_14305a6e8);
        }
        lVar16 = *(longlong *)(*(longlong *)(lVar15 + 8) + 0x28 + uVar13 * 0x30);
        if ((lVar16 != 0) && (plVar3[3] != 0)) {
          plVar21 = *(longlong **)(*(longlong *)(lVar15 + 8) + 0x20 + uVar13 * 0x30);
          plVar1 = plVar21 + lVar16;
          lVar15 = *plVar21;
          do {
            lStack_a0 = lVar15;
            uVar13 = pdb_1400af0a0(plVar3 + 4,&lStack_a0);
            bVar22 = (byte)(uVar13 >> 0x39);
            auVar23 = ZEXT216(CONCAT11(bVar22,bVar22));
            auVar23 = pshuflw(auVar23,auVar23,0);
            lVar16 = 0;
            while( true ) {
              uVar13 = uVar13 & plVar3[1];
              auVar2 = *(undefined1 (*) [16])(*plVar3 + uVar13);
              auVar26[0] = -(auVar2[0] == auVar23[0]);
              auVar26[1] = -(auVar2[1] == auVar23[1]);
              auVar26[2] = -(auVar2[2] == auVar23[2]);
              auVar26[3] = -(auVar2[3] == auVar23[3]);
              auVar26[4] = -(auVar2[4] == auVar23[4]);
              auVar26[5] = -(auVar2[5] == auVar23[5]);
              auVar26[6] = -(auVar2[6] == auVar23[6]);
              auVar26[7] = -(auVar2[7] == auVar23[7]);
              auVar26[8] = -(auVar2[8] == auVar23[0]);
              auVar26[9] = -(auVar2[9] == auVar23[1]);
              auVar26[10] = -(auVar2[10] == auVar23[2]);
              auVar26[0xb] = -(auVar2[0xb] == auVar23[3]);
              auVar26[0xc] = -(auVar2[0xc] == auVar23[4]);
              auVar26[0xd] = -(auVar2[0xd] == auVar23[5]);
              auVar26[0xe] = -(auVar2[0xe] == auVar23[6]);
              auVar26[0xf] = -(auVar2[0xf] == auVar23[7]);
              uVar19 = (ushort)(SUB161(auVar26 >> 7,0) & 1) |
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
                       (ushort)(auVar26[0xf] >> 7) << 0xf;
              uVar18 = (uint)uVar19;
              while (uVar19 != 0) {
                uVar5 = 0;
                for (uVar6 = uVar18; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                  uVar5 = uVar5 + 1;
                }
                if (lVar15 == *(longlong *)(*plVar3 + -0x78 + (uVar5 + uVar13 & plVar3[1]) * -0x78))
                {
                  lStack_a0 = lVar15;
                  if (plVar4[3] == 0) goto LAB_140a831f0;
                  uVar13 = pdb_1400af0a0(plVar4 + 4,&lStack_a0);
                  lVar16 = *plVar4;
                  bVar22 = (byte)(uVar13 >> 0x39);
                  auVar23 = ZEXT216(CONCAT11(bVar22,bVar22));
                  auVar23 = pshuflw(auVar23,auVar23,0);
                  lVar17 = 0;
                  goto LAB_140a83150;
                }
                uVar19 = (ushort)(uVar18 - 1) & (ushort)uVar18;
                uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar19);
              }
              auVar24[0] = -(auVar2[0] == (char)iVar8);
              auVar24[1] = -(auVar2[1] == cVar28);
              auVar24[2] = -(auVar2[2] == cVar29);
              auVar24[3] = -(auVar2[3] == cVar30);
              auVar24[4] = -(auVar2[4] == (char)iVar9);
              auVar24[5] = -(auVar2[5] == cVar31);
              auVar24[6] = -(auVar2[6] == cVar32);
              auVar24[7] = -(auVar2[7] == cVar33);
              auVar24[8] = -(auVar2[8] == (char)iVar10);
              auVar24[9] = -(auVar2[9] == cVar34);
              auVar24[10] = -(auVar2[10] == cVar35);
              auVar24[0xb] = -(auVar2[0xb] == cVar36);
              auVar24[0xc] = -(auVar2[0xc] == (char)iVar11);
              auVar24[0xd] = -(auVar2[0xd] == cVar37);
              auVar24[0xe] = -(auVar2[0xe] == cVar38);
              auVar24[0xf] = -(auVar2[0xf] == cVar39);
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
              uVar13 = uVar13 + lVar16 + 0x10;
              lVar16 = lVar16 + 0x10;
            }
LAB_140a831f0:
            do {
              plVar21 = plVar21 + 1;
              if (plVar21 == plVar1) goto LAB_140a83010;
              lVar15 = *plVar21;
              lStack_a0 = lVar15;
            } while (plVar3[3] == 0);
          } while( true );
        }
LAB_140a83010:
        uVar14 = uVar14 & uVar14 - 1;
        lVar15 = lStack_88;
      } while (uVar14 != 0);
    }
    lStack_90 = lStack_90 + 8;
    lStack_a8 = lStack_a8 + 1;
    if (lStack_90 == 0x200) {
      return;
    }
  } while( true );
LAB_140a83150:
  uVar13 = uVar13 & plVar4[1];
  auVar2 = *(undefined1 (*) [16])(lVar16 + uVar13);
  auVar27[0] = -(auVar2[0] == auVar23[0]);
  auVar27[1] = -(auVar2[1] == auVar23[1]);
  auVar27[2] = -(auVar2[2] == auVar23[2]);
  auVar27[3] = -(auVar2[3] == auVar23[3]);
  auVar27[4] = -(auVar2[4] == auVar23[4]);
  auVar27[5] = -(auVar2[5] == auVar23[5]);
  auVar27[6] = -(auVar2[6] == auVar23[6]);
  auVar27[7] = -(auVar2[7] == auVar23[7]);
  auVar27[8] = -(auVar2[8] == auVar23[0]);
  auVar27[9] = -(auVar2[9] == auVar23[1]);
  auVar27[10] = -(auVar2[10] == auVar23[2]);
  auVar27[0xb] = -(auVar2[0xb] == auVar23[3]);
  auVar27[0xc] = -(auVar2[0xc] == auVar23[4]);
  auVar27[0xd] = -(auVar2[0xd] == auVar23[5]);
  auVar27[0xe] = -(auVar2[0xe] == auVar23[6]);
  auVar27[0xf] = -(auVar2[0xf] == auVar23[7]);
  uVar19 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe | (ushort)(auVar27[0xf] >> 7) << 0xf;
  uVar18 = (uint)uVar19;
  while (uVar19 != 0) {
    uVar5 = 0;
    for (uVar6 = uVar18; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    lVar20 = (uVar5 + uVar13 & plVar4[1]) * -0x2b0;
    if (lVar15 == *(longlong *)(lVar16 + -0x2b0 + lVar20)) {
      lVar16 = lVar16 + lVar20;
      if ((*(ulonglong *)(lVar16 + -0x298) < 2) || (*(float *)(lVar16 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_1430432c0);
      }
      if (*(float *)(lVar16 + -0x28) <= fVar12) {
        pdb_1403b05d0(plVar3 + 0xc,lVar15);
      }
      goto LAB_140a831f0;
    }
    uVar19 = (ushort)(uVar18 - 1) & (ushort)uVar18;
    uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar19);
  }
  auVar25[0] = -(auVar2[0] == (char)iVar8);
  auVar25[1] = -(auVar2[1] == cVar28);
  auVar25[2] = -(auVar2[2] == cVar29);
  auVar25[3] = -(auVar2[3] == cVar30);
  auVar25[4] = -(auVar2[4] == (char)iVar9);
  auVar25[5] = -(auVar2[5] == cVar31);
  auVar25[6] = -(auVar2[6] == cVar32);
  auVar25[7] = -(auVar2[7] == cVar33);
  auVar25[8] = -(auVar2[8] == (char)iVar10);
  auVar25[9] = -(auVar2[9] == cVar34);
  auVar25[10] = -(auVar2[10] == cVar35);
  auVar25[0xb] = -(auVar2[0xb] == cVar36);
  auVar25[0xc] = -(auVar2[0xc] == (char)iVar11);
  auVar25[0xd] = -(auVar2[0xd] == cVar37);
  auVar25[0xe] = -(auVar2[0xe] == cVar38);
  auVar25[0xf] = -(auVar2[0xf] == cVar39);
  if ((((((((((((((((SUB161(auVar25 >> 7,0) & 1) != 0 || (SUB161(auVar25 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar25 >> 0x17,0) & 1) != 0) || (SUB161(auVar25 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar25 >> 0x27,0) & 1) != 0) || (SUB161(auVar25 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar25 >> 0x37,0) & 1) != 0) || (SUB161(auVar25 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar25 >> 0x47,0) & 1) != 0) || (SUB161(auVar25 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar25 >> 0x57,0) & 1) != 0) || (SUB161(auVar25 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar25 >> 0x67,0) & 1) != 0) || (SUB161(auVar25 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar25 >> 0x77,0) & 1) != 0) || auVar25[0xf] < '\0') goto LAB_140a831f0;
  uVar13 = uVar13 + lVar17 + 0x10;
  lVar17 = lVar17 + 0x10;
  goto LAB_140a83150;
}

