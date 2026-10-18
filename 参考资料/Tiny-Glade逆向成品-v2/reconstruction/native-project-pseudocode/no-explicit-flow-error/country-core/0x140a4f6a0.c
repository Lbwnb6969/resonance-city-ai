// VA 0x140a4f6a0, PDB extent 793 bytes
// country_core::asset_libraries::vao_library::AssetVAOLibrary::rebuild_vao
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/vao_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::asset_libraries::vao_library::AssetVAOLibrary::rebuild_vao
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/vao_library.rs
   Extent: 793 */

undefined8
pdb_140a4f6a0(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4,
             longlong param_5)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined1 (*pauVar17) [16];
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  ushort uVar22;
  longlong lVar23;
  undefined1 (*pauVar24) [16];
  ulonglong unaff_R15;
  byte bVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
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
  ulonglong uStack_90;
  longlong lStack_68;
  longlong alStack_60 [4];
  
  lStack_68 = param_4;
  alStack_60[0] = param_4;
  pdb_140a2b260(param_3,param_4);
  lVar9 = pdb_140bf4880(param_3 + 0x20,alStack_60);
  if (lVar9 == 0) {
    pdb_142dc8110(&UNK_14303d380,0x1f,&UNK_14303d3d8);
LAB_140a4f9a4:
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(unaff_R15,uStack_90,&UNK_14303e5a0);
  }
  if (*(longlong *)(lVar9 + 0x10) == 0) {
LAB_140a4f92c:
    uVar16 = 0;
  }
  else {
    if (param_1[9] != 0) {
      uVar10 = pdb_1400af0a0(param_1 + 10,&lStack_68);
      lVar13 = param_1[6];
      bVar25 = (byte)(uVar10 >> 0x39);
      auVar26 = ZEXT216(CONCAT11(bVar25,bVar25));
      auVar26 = pshuflw(auVar26,auVar26,0);
      lVar19 = 0;
      do {
        uVar10 = uVar10 & param_1[7];
        pcVar1 = (char *)(lVar13 + uVar10);
        auVar30[0] = -(*pcVar1 == auVar26[0]);
        auVar30[1] = -(pcVar1[1] == auVar26[1]);
        auVar30[2] = -(pcVar1[2] == auVar26[2]);
        auVar30[3] = -(pcVar1[3] == auVar26[3]);
        auVar30[4] = -(pcVar1[4] == auVar26[4]);
        auVar30[5] = -(pcVar1[5] == auVar26[5]);
        auVar30[6] = -(pcVar1[6] == auVar26[6]);
        auVar30[7] = -(pcVar1[7] == auVar26[7]);
        auVar30[8] = -(pcVar1[8] == auVar26[0]);
        auVar30[9] = -(pcVar1[9] == auVar26[1]);
        auVar30[10] = -(pcVar1[10] == auVar26[2]);
        auVar30[0xb] = -(pcVar1[0xb] == auVar26[3]);
        auVar30[0xc] = -(pcVar1[0xc] == auVar26[4]);
        auVar30[0xd] = -(pcVar1[0xd] == auVar26[5]);
        auVar30[0xe] = -(pcVar1[0xe] == auVar26[6]);
        auVar30[0xf] = -(pcVar1[0xf] == auVar26[7]);
        uVar22 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe | (ushort)(auVar30[0xf] >> 7) << 0xf
        ;
        uVar18 = (uint)uVar22;
        if (uVar22 != 0) {
LAB_140a4f763:
          uVar12 = 0;
          for (uVar21 = uVar18; (uVar21 & 1) == 0; uVar21 = uVar21 >> 1 | 0x80000000) {
            uVar12 = uVar12 + 1;
          }
          lVar23 = (uVar12 + uVar10 & param_1[7]) * -0x38;
          if (param_4 != *(longlong *)(lVar13 + -0x38 + lVar23)) goto code_r0x000140a4f77c;
          lVar13 = lVar13 + lVar23;
          lVar19 = *(longlong *)(lVar13 + -0x18);
          if (lVar19 != 0) {
            pauVar17 = *(undefined1 (**) [16])(lVar13 + -0x30);
            auVar26 = *pauVar17;
            uVar18 = ~(uint)(ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
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
            pauVar24 = pauVar17 + 1;
            if (param_1[3] == 0) {
              if ((short)uVar18 == 0) {
                do {
                  auVar26 = *pauVar24;
                  pauVar24 = pauVar24 + 1;
                } while ((ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
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
                                 (ushort)(byte)(auVar26[0xf] >> 7) << 0xf) == 0xffff);
              }
            }
            else {
              lVar13 = *param_1;
              uVar10 = param_1[1];
              lVar23 = *(longlong *)(param_5 + 8);
              uStack_90 = *(ulonglong *)(param_5 + 0x10);
              iVar5 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                                       CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))
                                      ) ==
                             CONCAT13(unaff_XMM6_Bd,
                                      CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba)))
                             );
              iVar6 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                                       CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))
                                      ) ==
                             CONCAT13(unaff_XMM6_Bh,
                                      CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be)))
                             );
              iVar7 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                                       CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))
                                      ) ==
                             CONCAT13(unaff_XMM6_Bl,
                                      CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi)))
                             );
              iVar8 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                                       CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))
                                      ) ==
                             CONCAT13(unaff_XMM6_Bp,
                                      CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm)))
                             );
LAB_140a4f80d:
              if ((short)uVar18 == 0) {
                do {
                  auVar26 = *pauVar24;
                  pauVar17 = pauVar17 + -0x10;
                  pauVar24 = pauVar24 + 1;
                  uVar18 = (ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
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
                } while (uVar18 == 0);
              }
              iVar2 = 0;
              for (uVar12 = uVar18; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
                iVar2 = iVar2 + 1;
              }
              uVar18 = uVar18 - 1 & uVar18;
              uVar12 = iVar2 << 4;
              lVar19 = lVar19 + -1;
              unaff_R15 = (ulonglong)*(uint *)((longlong)pauVar17 + (-0x10 - (ulonglong)uVar12));
              uVar11 = pdb_1400af0a0(param_1 + 4,(longlong)pauVar17 + (-8 - (ulonglong)uVar12));
              bVar25 = (byte)(uVar11 >> 0x39);
              auVar26 = ZEXT216(CONCAT11(bVar25,bVar25));
              auVar26 = pshuflw(auVar26,auVar26,0);
              lVar20 = 0;
              while( true ) {
                uVar11 = uVar11 & uVar10;
                auVar30 = *(undefined1 (*) [16])(lVar13 + uVar11);
                auVar29[0] = -(auVar30[0] == auVar26[0]);
                auVar29[1] = -(auVar30[1] == auVar26[1]);
                auVar29[2] = -(auVar30[2] == auVar26[2]);
                auVar29[3] = -(auVar30[3] == auVar26[3]);
                auVar29[4] = -(auVar30[4] == auVar26[4]);
                auVar29[5] = -(auVar30[5] == auVar26[5]);
                auVar29[6] = -(auVar30[6] == auVar26[6]);
                auVar29[7] = -(auVar30[7] == auVar26[7]);
                auVar29[8] = -(auVar30[8] == auVar26[0]);
                auVar29[9] = -(auVar30[9] == auVar26[1]);
                auVar29[10] = -(auVar30[10] == auVar26[2]);
                auVar29[0xb] = -(auVar30[0xb] == auVar26[3]);
                auVar29[0xc] = -(auVar30[0xc] == auVar26[4]);
                auVar29[0xd] = -(auVar30[0xd] == auVar26[5]);
                auVar29[0xe] = -(auVar30[0xe] == auVar26[6]);
                auVar29[0xf] = -(auVar30[0xf] == auVar26[7]);
                uVar22 = (ushort)(SUB161(auVar29 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
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
                         (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar29[0xf] >> 7) << 0xf;
                uVar21 = (uint)uVar22;
                while (uVar22 != 0) {
                  uVar3 = 0;
                  for (uVar4 = uVar21; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                    uVar3 = uVar3 + 1;
                  }
                  lVar14 = (uVar3 + uVar11 & uVar10) * -0x30;
                  if (*(longlong *)((longlong)pauVar17 + (-8 - (ulonglong)uVar12)) ==
                      *(longlong *)(lVar13 + -0x30 + lVar14)) {
                    if (uStack_90 <= unaff_R15) goto LAB_140a4f9a4;
                    pdb_140b90cc0(lVar14 + lVar13 + -0x28,param_2,lVar9,lVar23 + unaff_R15 * 0x18);
                    if (lVar19 == 0) {
                      return 0;
                    }
                    goto LAB_140a4f80d;
                  }
                  uVar22 = (ushort)(uVar21 - 1) & (ushort)uVar21;
                  uVar21 = CONCAT22((short)(uVar21 - 1 >> 0x10),uVar22);
                }
                auVar27[0] = -(auVar30[0] == (char)iVar5);
                auVar27[1] = -(auVar30[1] == (char)((uint)iVar5 >> 8));
                auVar27[2] = -(auVar30[2] == (char)((uint)iVar5 >> 0x10));
                auVar27[3] = -(auVar30[3] == (char)((uint)iVar5 >> 0x18));
                auVar27[4] = -(auVar30[4] == (char)iVar6);
                auVar27[5] = -(auVar30[5] == (char)((uint)iVar6 >> 8));
                auVar27[6] = -(auVar30[6] == (char)((uint)iVar6 >> 0x10));
                auVar27[7] = -(auVar30[7] == (char)((uint)iVar6 >> 0x18));
                auVar27[8] = -(auVar30[8] == (char)iVar7);
                auVar27[9] = -(auVar30[9] == (char)((uint)iVar7 >> 8));
                auVar27[10] = -(auVar30[10] == (char)((uint)iVar7 >> 0x10));
                auVar27[0xb] = -(auVar30[0xb] == (char)((uint)iVar7 >> 0x18));
                auVar27[0xc] = -(auVar30[0xc] == (char)iVar8);
                auVar27[0xd] = -(auVar30[0xd] == (char)((uint)iVar8 >> 8));
                auVar27[0xe] = -(auVar30[0xe] == (char)((uint)iVar8 >> 0x10));
                auVar27[0xf] = -(auVar30[0xf] == (char)((uint)iVar8 >> 0x18));
                if ((((((((((((((((SUB161(auVar27 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar27 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar27 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar27 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar27 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar27 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar27 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar27 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar27 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar27 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar27 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar27 >> 0x5f,0) & 1) != 0) || (SUB161(auVar27 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar27 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar27 >> 0x77,0) & 1) != 0) || auVar27[0xf] < '\0') break;
                uVar11 = uVar11 + lVar20 + 0x10;
                lVar20 = lVar20 + 0x10;
              }
            }
            puVar15 = &UNK_14303d3f0;
            uVar16 = 0x15;
            goto LAB_140a4f971;
          }
          goto LAB_140a4f92c;
        }
LAB_140a4f790:
        auVar28[0] = -(*pcVar1 == -1);
        auVar28[1] = -(pcVar1[1] == -1);
        auVar28[2] = -(pcVar1[2] == -1);
        auVar28[3] = -(pcVar1[3] == -1);
        auVar28[4] = -(pcVar1[4] == -1);
        auVar28[5] = -(pcVar1[5] == -1);
        auVar28[6] = -(pcVar1[6] == -1);
        auVar28[7] = -(pcVar1[7] == -1);
        auVar28[8] = -(pcVar1[8] == -1);
        auVar28[9] = -(pcVar1[9] == -1);
        auVar28[10] = -(pcVar1[10] == -1);
        auVar28[0xb] = -(pcVar1[0xb] == -1);
        auVar28[0xc] = -(pcVar1[0xc] == -1);
        auVar28[0xd] = -(pcVar1[0xd] == -1);
        auVar28[0xe] = -(pcVar1[0xe] == -1);
        auVar28[0xf] = -(pcVar1[0xf] == -1);
        if ((((((((((((((((SUB161(auVar28 >> 7,0) & 1) != 0 || (SUB161(auVar28 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar28 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar28 >> 0x1f,0) & 1) != 0) || (SUB161(auVar28 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar28 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar28 >> 0x37,0) & 1) != 0) || (SUB161(auVar28 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar28 >> 0x47,0) & 1) != 0) || (SUB161(auVar28 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar28 >> 0x57,0) & 1) != 0) || (SUB161(auVar28 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar28 >> 0x67,0) & 1) != 0) || (SUB161(auVar28 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar28 >> 0x77,0) & 1) != 0) || auVar28[0xf] < '\0') break;
        uVar10 = uVar10 + lVar19 + 0x10;
        lVar19 = lVar19 + 0x10;
      } while( true );
    }
    puVar15 = &UNK_14303d405;
    uVar16 = 0x20;
LAB_140a4f971:
    uVar16 = pdb_142de9270(puVar15,uVar16);
  }
  return uVar16;
code_r0x000140a4f77c:
  uVar22 = (ushort)(uVar18 - 1) & (ushort)uVar18;
  uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar22);
  if (uVar22 == 0) goto LAB_140a4f790;
  goto LAB_140a4f763;
}

