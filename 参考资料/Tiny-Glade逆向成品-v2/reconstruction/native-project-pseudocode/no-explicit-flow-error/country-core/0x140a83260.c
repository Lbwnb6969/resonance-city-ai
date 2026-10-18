// VA 0x140a83260, PDB extent 1106 bytes
// country_core::utils::dirty_tiles::DirtyTiles::iter_tiles<country_core::systems::wall::wall_state::publish_public_wall_state::gather_lazy_update_sources::closure_env$1>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/dirty_tiles.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::utils::dirty_tiles::DirtyTiles::iter_tiles<country_core::systems::wall::wall_state::publish_public_wall_state::gather_lazy_update_sources::closure_env$1>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/dirty_tiles.rs
   Extent: 1106 */

void pdb_140a83260(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char *pcVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  ushort uVar20;
  longlong lVar21;
  byte bVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 unaff_XMM6_Ba;
  char cVar30;
  undefined1 unaff_XMM6_Bb;
  char cVar31;
  undefined1 unaff_XMM6_Bc;
  char cVar32;
  undefined1 unaff_XMM6_Bd;
  char cVar33;
  undefined1 unaff_XMM6_Be;
  char cVar34;
  undefined1 unaff_XMM6_Bf;
  char cVar35;
  undefined1 unaff_XMM6_Bg;
  char cVar36;
  undefined1 unaff_XMM6_Bh;
  char cVar37;
  undefined1 unaff_XMM6_Bi;
  char cVar38;
  undefined1 unaff_XMM6_Bj;
  char cVar39;
  undefined1 unaff_XMM6_Bk;
  char cVar40;
  undefined1 unaff_XMM6_Bl;
  char cVar41;
  undefined1 unaff_XMM6_Bm;
  char cVar42;
  undefined1 unaff_XMM6_Bn;
  char cVar43;
  undefined1 unaff_XMM6_Bo;
  char cVar44;
  undefined1 unaff_XMM6_Bp;
  char cVar45;
  longlong lStack_b8;
  longlong lStack_b0;
  longlong *plStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  ulonglong uStack_80;
  
  fVar8 = _DAT_142e36f50;
  lVar15 = *param_2;
  plVar3 = (longlong *)param_2[1];
  plVar4 = (longlong *)param_2[2];
  plStack_a8 = (longlong *)param_2[3];
  lStack_b0 = 0;
  iVar7 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                           CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                 CONCAT13(unaff_XMM6_Bd,
                          CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
  cVar30 = (char)iVar7;
  cVar31 = (char)((uint)iVar7 >> 8);
  cVar32 = (char)((uint)iVar7 >> 0x10);
  cVar33 = (char)((uint)iVar7 >> 0x18);
  iVar7 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                           CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                 CONCAT13(unaff_XMM6_Bh,
                          CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
  cVar34 = (char)iVar7;
  cVar35 = (char)((uint)iVar7 >> 8);
  cVar36 = (char)((uint)iVar7 >> 0x10);
  cVar37 = (char)((uint)iVar7 >> 0x18);
  iVar7 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                           CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                 CONCAT13(unaff_XMM6_Bl,
                          CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
  cVar38 = (char)iVar7;
  cVar39 = (char)((uint)iVar7 >> 8);
  cVar40 = (char)((uint)iVar7 >> 0x10);
  cVar41 = (char)((uint)iVar7 >> 0x18);
  iVar7 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                           CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                 CONCAT13(unaff_XMM6_Bp,
                          CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
  cVar42 = (char)iVar7;
  cVar43 = (char)((uint)iVar7 >> 8);
  cVar44 = (char)((uint)iVar7 >> 0x10);
  cVar45 = (char)((uint)iVar7 >> 0x18);
  lStack_90 = 0;
  lStack_98 = param_1;
  lStack_88 = lVar15;
  do {
    uVar14 = *(ulonglong *)(lStack_98 + lStack_90);
    if (uVar14 != 0) {
      uStack_80 = lStack_b0 << 6;
      do {
        uVar10 = 0;
        for (uVar9 = uVar14; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x8000000000000000) {
          uVar10 = uVar10 + 1;
        }
        uVar10 = uVar10 | uStack_80;
        if (*(ulonglong *)(lVar15 + 0x10) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar10,*(ulonglong *)(lVar15 + 0x10),&UNK_14305a6e8);
        }
        lVar16 = *(longlong *)(*(longlong *)(lVar15 + 8) + 0x28 + uVar10 * 0x30);
        if (lVar16 != 0) {
          plVar12 = *(longlong **)(*(longlong *)(lVar15 + 8) + 0x20 + uVar10 * 0x30);
          plVar1 = plVar12 + lVar16;
          if (plVar3[3] != 0) {
LAB_140a83590:
            lVar15 = *plVar12;
            lStack_b8 = lVar15;
            lStack_a0 = lVar15;
            if (plVar3[3] != 0) {
              uVar10 = pdb_1400af0a0(plVar3 + 4,&lStack_a0);
              bVar22 = (byte)(uVar10 >> 0x39);
              auVar23 = ZEXT216(CONCAT11(bVar22,bVar22));
              auVar23 = pshuflw(auVar23,auVar23,0);
              lVar16 = 0;
              while( true ) {
                uVar10 = uVar10 & plVar3[1];
                auVar29 = *(undefined1 (*) [16])(*plVar3 + uVar10);
                auVar27[0] = -(auVar29[0] == auVar23[0]);
                auVar27[1] = -(auVar29[1] == auVar23[1]);
                auVar27[2] = -(auVar29[2] == auVar23[2]);
                auVar27[3] = -(auVar29[3] == auVar23[3]);
                auVar27[4] = -(auVar29[4] == auVar23[4]);
                auVar27[5] = -(auVar29[5] == auVar23[5]);
                auVar27[6] = -(auVar29[6] == auVar23[6]);
                auVar27[7] = -(auVar29[7] == auVar23[7]);
                auVar27[8] = -(auVar29[8] == auVar23[0]);
                auVar27[9] = -(auVar29[9] == auVar23[1]);
                auVar27[10] = -(auVar29[10] == auVar23[2]);
                auVar27[0xb] = -(auVar29[0xb] == auVar23[3]);
                auVar27[0xc] = -(auVar29[0xc] == auVar23[4]);
                auVar27[0xd] = -(auVar29[0xd] == auVar23[5]);
                auVar27[0xe] = -(auVar29[0xe] == auVar23[6]);
                auVar27[0xf] = -(auVar29[0xf] == auVar23[7]);
                uVar20 = (ushort)(SUB161(auVar27 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
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
                         (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar27[0xf] >> 7) << 0xf;
                uVar18 = (uint)uVar20;
                while (uVar20 != 0) {
                  uVar5 = 0;
                  for (uVar6 = uVar18; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                    uVar5 = uVar5 + 1;
                  }
                  if (lVar15 == *(longlong *)
                                 (*plVar3 + -0x78 + (uVar5 + uVar10 & plVar3[1]) * -0x78)) {
                    lStack_a0 = lVar15;
                    if (plVar4[3] == 0) goto LAB_140a83490;
                    uVar10 = pdb_1400af0a0(plVar4 + 4,&lStack_a0);
                    lVar16 = *plVar4;
                    bVar22 = (byte)(uVar10 >> 0x39);
                    auVar23 = ZEXT216(CONCAT11(bVar22,bVar22));
                    auVar23 = pshuflw(auVar23,auVar23,0);
                    lVar17 = 0;
                    goto LAB_140a83420;
                  }
                  uVar20 = (ushort)(uVar18 - 1) & (ushort)uVar18;
                  uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar20);
                }
                auVar24[0] = -(auVar29[0] == cVar30);
                auVar24[1] = -(auVar29[1] == cVar31);
                auVar24[2] = -(auVar29[2] == cVar32);
                auVar24[3] = -(auVar29[3] == cVar33);
                auVar24[4] = -(auVar29[4] == cVar34);
                auVar24[5] = -(auVar29[5] == cVar35);
                auVar24[6] = -(auVar29[6] == cVar36);
                auVar24[7] = -(auVar29[7] == cVar37);
                auVar24[8] = -(auVar29[8] == cVar38);
                auVar24[9] = -(auVar29[9] == cVar39);
                auVar24[10] = -(auVar29[10] == cVar40);
                auVar24[0xb] = -(auVar29[0xb] == cVar41);
                auVar24[0xc] = -(auVar29[0xc] == cVar42);
                auVar24[0xd] = -(auVar29[0xd] == cVar43);
                auVar24[0xe] = -(auVar29[0xe] == cVar44);
                auVar24[0xf] = -(auVar29[0xf] == cVar45);
                if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar24 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar24 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar24 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar24 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar24 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar24 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar24 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar24 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar24 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar24 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar24 >> 0x5f,0) & 1) != 0) || (SUB161(auVar24 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar24 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar24 >> 0x77,0) & 1) != 0) || auVar24[0xf] < '\0') break;
                uVar10 = uVar10 + lVar16 + 0x10;
                lVar16 = lVar16 + 0x10;
              }
            }
            goto LAB_140a835e0;
          }
          uVar10 = lVar16 * 8 - 8;
          if ((0x17 < uVar10) && (plVar1 <= &lStack_b8 || &lStack_b0 <= plVar12)) {
            uVar9 = (uVar10 >> 3) + 1;
            uVar13 = uVar9 & 0xfffffffffffffffc;
            uVar10 = 0;
            do {
              uVar19 = uVar10;
              uVar10 = uVar19 + 4;
            } while (uVar13 != uVar10);
            lStack_b8 = plVar12[uVar19 + 3];
            plVar12 = plVar12 + uVar13;
            if (uVar9 == uVar13) goto LAB_140a83310;
          }
          do {
            lStack_b8 = *plVar12;
            plVar12 = plVar12 + 1;
          } while (plVar12 != plVar1);
        }
LAB_140a83310:
        uVar14 = uVar14 & uVar14 - 1;
        lVar15 = lStack_88;
      } while (uVar14 != 0);
    }
    lStack_90 = lStack_90 + 8;
    lStack_b0 = lStack_b0 + 1;
    if (lStack_90 == 0x200) {
      return;
    }
  } while( true );
LAB_140a83420:
  uVar10 = uVar10 & plVar4[1];
  auVar29 = *(undefined1 (*) [16])(lVar16 + uVar10);
  auVar28[0] = -(auVar29[0] == auVar23[0]);
  auVar28[1] = -(auVar29[1] == auVar23[1]);
  auVar28[2] = -(auVar29[2] == auVar23[2]);
  auVar28[3] = -(auVar29[3] == auVar23[3]);
  auVar28[4] = -(auVar29[4] == auVar23[4]);
  auVar28[5] = -(auVar29[5] == auVar23[5]);
  auVar28[6] = -(auVar29[6] == auVar23[6]);
  auVar28[7] = -(auVar29[7] == auVar23[7]);
  auVar28[8] = -(auVar29[8] == auVar23[0]);
  auVar28[9] = -(auVar29[9] == auVar23[1]);
  auVar28[10] = -(auVar29[10] == auVar23[2]);
  auVar28[0xb] = -(auVar29[0xb] == auVar23[3]);
  auVar28[0xc] = -(auVar29[0xc] == auVar23[4]);
  auVar28[0xd] = -(auVar29[0xd] == auVar23[5]);
  auVar28[0xe] = -(auVar29[0xe] == auVar23[6]);
  auVar28[0xf] = -(auVar29[0xf] == auVar23[7]);
  uVar20 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
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
           (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe | (ushort)(auVar28[0xf] >> 7) << 0xf;
  uVar18 = (uint)uVar20;
  while (uVar20 != 0) {
    uVar5 = 0;
    for (uVar6 = uVar18; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    lVar21 = (uVar5 + uVar10 & plVar4[1]) * -0x2b0;
    if (lVar15 == *(longlong *)(lVar16 + -0x2b0 + lVar21)) {
      lVar16 = lVar16 + lVar21;
      if ((*(ulonglong *)(lVar16 + -0x298) < 2) || (*(float *)(lVar16 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_1430432a8);
      }
      plVar11 = plVar3 + 0xc;
      if ((*(float *)(lVar16 + -0x28) <= fVar8) || (plVar11 = plStack_a8, plVar3[0xf] == 0))
      goto LAB_140a83580;
      uVar10 = pdb_1400af0a0(plVar3 + 0x10,&lStack_b8);
      bVar22 = (byte)(uVar10 >> 0x39);
      auVar23 = ZEXT216(CONCAT11(bVar22,bVar22));
      auVar23 = pshuflw(auVar23,auVar23,0);
      lVar16 = 0;
      goto LAB_140a83510;
    }
    uVar20 = (ushort)(uVar18 - 1) & (ushort)uVar18;
    uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar20);
  }
  auVar25[0] = -(auVar29[0] == cVar30);
  auVar25[1] = -(auVar29[1] == cVar31);
  auVar25[2] = -(auVar29[2] == cVar32);
  auVar25[3] = -(auVar29[3] == cVar33);
  auVar25[4] = -(auVar29[4] == cVar34);
  auVar25[5] = -(auVar29[5] == cVar35);
  auVar25[6] = -(auVar29[6] == cVar36);
  auVar25[7] = -(auVar29[7] == cVar37);
  auVar25[8] = -(auVar29[8] == cVar38);
  auVar25[9] = -(auVar29[9] == cVar39);
  auVar25[10] = -(auVar29[10] == cVar40);
  auVar25[0xb] = -(auVar29[0xb] == cVar41);
  auVar25[0xc] = -(auVar29[0xc] == cVar42);
  auVar25[0xd] = -(auVar29[0xd] == cVar43);
  auVar25[0xe] = -(auVar29[0xe] == cVar44);
  auVar25[0xf] = -(auVar29[0xf] == cVar45);
  if ((((((((((((((((SUB161(auVar25 >> 7,0) & 1) != 0 || (SUB161(auVar25 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar25 >> 0x17,0) & 1) != 0) || (SUB161(auVar25 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar25 >> 0x27,0) & 1) != 0) || (SUB161(auVar25 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar25 >> 0x37,0) & 1) != 0) || (SUB161(auVar25 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar25 >> 0x47,0) & 1) != 0) || (SUB161(auVar25 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar25 >> 0x57,0) & 1) != 0) || (SUB161(auVar25 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar25 >> 0x67,0) & 1) != 0) || (SUB161(auVar25 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar25 >> 0x77,0) & 1) != 0) || auVar25[0xf] < '\0') goto LAB_140a83490;
  uVar10 = uVar10 + lVar17 + 0x10;
  lVar17 = lVar17 + 0x10;
  goto LAB_140a83420;
LAB_140a83510:
  uVar10 = uVar10 & plVar3[0xd];
  pcVar2 = (char *)(plVar3[0xc] + uVar10);
  auVar29[0] = -(*pcVar2 == auVar23[0]);
  auVar29[1] = -(pcVar2[1] == auVar23[1]);
  auVar29[2] = -(pcVar2[2] == auVar23[2]);
  auVar29[3] = -(pcVar2[3] == auVar23[3]);
  auVar29[4] = -(pcVar2[4] == auVar23[4]);
  auVar29[5] = -(pcVar2[5] == auVar23[5]);
  auVar29[6] = -(pcVar2[6] == auVar23[6]);
  auVar29[7] = -(pcVar2[7] == auVar23[7]);
  auVar29[8] = -(pcVar2[8] == auVar23[0]);
  auVar29[9] = -(pcVar2[9] == auVar23[1]);
  auVar29[10] = -(pcVar2[10] == auVar23[2]);
  auVar29[0xb] = -(pcVar2[0xb] == auVar23[3]);
  auVar29[0xc] = -(pcVar2[0xc] == auVar23[4]);
  auVar29[0xd] = -(pcVar2[0xd] == auVar23[5]);
  auVar29[0xe] = -(pcVar2[0xe] == auVar23[6]);
  auVar29[0xf] = -(pcVar2[0xf] == auVar23[7]);
  uVar20 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe | (ushort)(auVar29[0xf] >> 7) << 0xf;
  uVar18 = (uint)uVar20;
  while (uVar20 != 0) {
    uVar5 = 0;
    for (uVar6 = uVar18; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    if (lVar15 == *(longlong *)(plVar3[0xc] + (uVar5 + uVar10 & plVar3[0xd]) * -8 + -8))
    goto LAB_140a835e0;
    uVar20 = (ushort)(uVar18 - 1) & (ushort)uVar18;
    uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar20);
  }
  auVar26[0] = -(*pcVar2 == cVar30);
  auVar26[1] = -(pcVar2[1] == cVar31);
  auVar26[2] = -(pcVar2[2] == cVar32);
  auVar26[3] = -(pcVar2[3] == cVar33);
  auVar26[4] = -(pcVar2[4] == cVar34);
  auVar26[5] = -(pcVar2[5] == cVar35);
  auVar26[6] = -(pcVar2[6] == cVar36);
  auVar26[7] = -(pcVar2[7] == cVar37);
  auVar26[8] = -(pcVar2[8] == cVar38);
  auVar26[9] = -(pcVar2[9] == cVar39);
  auVar26[10] = -(pcVar2[10] == cVar40);
  auVar26[0xb] = -(pcVar2[0xb] == cVar41);
  auVar26[0xc] = -(pcVar2[0xc] == cVar42);
  auVar26[0xd] = -(pcVar2[0xd] == cVar43);
  auVar26[0xe] = -(pcVar2[0xe] == cVar44);
  auVar26[0xf] = -(pcVar2[0xf] == cVar45);
  plVar11 = plStack_a8;
  if ((((((((((((((((SUB161(auVar26 >> 7,0) & 1) != 0 || (SUB161(auVar26 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar26 >> 0x17,0) & 1) != 0) || (SUB161(auVar26 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar26 >> 0x27,0) & 1) != 0) || (SUB161(auVar26 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar26 >> 0x37,0) & 1) != 0) || (SUB161(auVar26 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar26 >> 0x47,0) & 1) != 0) || (SUB161(auVar26 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar26 >> 0x57,0) & 1) != 0) || (SUB161(auVar26 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar26 >> 0x67,0) & 1) != 0) || (SUB161(auVar26 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar26 >> 0x77,0) & 1) != 0) || auVar26[0xf] < '\0') goto LAB_140a83580;
  uVar10 = uVar10 + lVar16 + 0x10;
  lVar16 = lVar16 + 0x10;
  goto LAB_140a83510;
LAB_140a83490:
  plVar11 = plVar3 + 0xc;
LAB_140a83580:
  pdb_1403b05d0(plVar11,lVar15);
LAB_140a835e0:
  plVar12 = plVar12 + 1;
  if (plVar12 == plVar1) goto LAB_140a83310;
  goto LAB_140a83590;
}

