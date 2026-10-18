// VA 0x142581d20, PDB extent 2720 bytes
// country_core::render::nani::systems::nani_update_stone_foundation_surface
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/systems.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::render::nani::systems::nani_update_stone_foundation_surface
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/systems.rs
   Extent: 2720 */

longlong * pdb_142581d20(uint *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  byte *pbVar1;
  longlong lVar2;
  char *pcVar3;
  float fVar4;
  byte bVar5;
  byte bVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  char cVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong *plVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  longlong lVar21;
  uint *puVar22;
  longlong lVar23;
  undefined *puVar24;
  ushort uVar25;
  longlong lVar26;
  longlong *unaff_R12;
  undefined *puVar27;
  bool bVar28;
  byte bVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  char unaff_XMM7_Ba;
  char unaff_XMM7_Bb;
  char unaff_XMM7_Bc;
  char unaff_XMM7_Bd;
  char unaff_XMM7_Be;
  char unaff_XMM7_Bf;
  char unaff_XMM7_Bg;
  char unaff_XMM7_Bh;
  char unaff_XMM7_Bi;
  char unaff_XMM7_Bj;
  char unaff_XMM7_Bk;
  char unaff_XMM7_Bl;
  char unaff_XMM7_Bm;
  char unaff_XMM7_Bn;
  char unaff_XMM7_Bo;
  char unaff_XMM7_Bp;
  longlong alStack_188 [2];
  undefined4 uStack_178;
  float fStack_174;
  uint uStack_170;
  undefined4 uStack_16c;
  longlong lStack_168;
  undefined4 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  uint uStack_14c;
  undefined8 uStack_138;
  undefined4 uStack_130;
  longlong lStack_128;
  longlong *plStack_120;
  undefined8 uStack_118;
  longlong *plStack_110;
  longlong lStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  longlong lStack_e8;
  undefined8 *puStack_e0;
  longlong lStack_d8;
  uint *puStack_d0;
  uint uStack_c8;
  int iStack_c4;
  ulonglong uStack_c0;
  undefined8 uStack_b8;
  longlong *plStack_b0;
  longlong lStack_a8;
  longlong *plStack_a0;
  char cStack_91;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  plVar18 = param_2;
  cVar12 = pdb_140e94b40();
  if (cVar12 == '\0') {
    lStack_108 = 0;
    goto LAB_142581f1b;
  }
  unaff_R12 = (longlong *)&UNK_14351c6b8;
  lVar23 = 0x49;
  uVar19 = 0x49;
  lVar14 = pdb_142585200(&UNK_14351c6b8);
  if (lVar14 != 1) goto LAB_142581de0;
  if (uVar19 < 0x4a) {
    unaff_R12 = (longlong *)&UNK_14351c6b8;
    uVar15 = pdb_142585200(&UNK_14351c6b8);
    if ((uVar15 & 1) == 0) {
LAB_142581de0:
      puVar24 = &UNK_14351bdcd;
      puVar27 = &UNK_14351bd9f;
      do {
        bVar29 = puVar24[-1];
        uVar13 = (uint)(char)bVar29;
        plStack_a0 = param_3;
        if ((char)bVar29 < '\0') {
          bVar5 = puVar24[-2];
          if ((char)bVar5 < -0x40) {
            bVar6 = puVar24[-3];
            if ((char)bVar6 < -0x40) {
              pbVar1 = puVar24 + -4;
              puVar24 = puVar24 + -4;
              uVar13 = bVar6 & 0x3f | (*pbVar1 & 7) << 6;
            }
            else {
              puVar24 = puVar24 + -3;
              uVar13 = bVar6 & 0xf;
            }
            uVar13 = bVar5 & 0x3f | uVar13 << 6;
          }
          else {
            puVar24 = puVar24 + -2;
            uVar13 = bVar5 & 0x1f;
          }
          uVar13 = (uint)(bVar29 & 0x3f) | uVar13 << 6;
          if (uVar13 != 0x5c) goto LAB_142581e74;
LAB_142581e8d:
          if ((undefined *)0x2e < puVar24 + -0x14351bd9e) goto LAB_142582587;
          lVar14 = 0x2e - (longlong)(puVar24 + -0x14351bd9e);
          puVar27 = puVar24 + 1;
          goto LAB_142581eb0;
        }
        puVar24 = puVar24 + -1;
        if (uVar13 == 0x5c) goto LAB_142581e8d;
LAB_142581e74:
        if (uVar13 == 0x2f) goto LAB_142581e8d;
      } while (puVar24 != &UNK_14351bd9f);
      lVar14 = 0x2e;
LAB_142581eb0:
      plVar16 = (longlong *)pdb_140e97000();
      if ((char)plVar16[0xd] != '\x01') goto LAB_142582543;
LAB_142581ebf:
      if (*plVar16 == 0) {
        *plVar16 = -1;
        plVar18 = unaff_R12;
        plStack_b0 = plVar16;
        uStack_100 = pdb_140e94f10(plVar16 + 1,unaff_R12,lVar23,puVar27,lVar14,1,0);
        *plStack_b0 = *plStack_b0 + 1;
        lStack_108 = 1;
        param_3 = plStack_a0;
LAB_142581f1b:
        uVar20 = CONCAT71((int7)((ulonglong)plVar18 >> 8),0x19);
        param_4 = (undefined8 *)pdb_1409d2d80(*param_4);
        uVar11 = _DAT_142e36f28;
        lStack_a8 = *(longlong *)param_1;
        lVar14 = *(longlong *)(param_1 + 2);
        puVar22 = *(uint **)(lStack_a8 + 0xf8);
        param_1 = puVar22 + *(longlong *)(lStack_a8 + 0x100);
        cStack_91 = *(char *)(lStack_a8 + 0x108);
        plStack_a0 = (longlong *)*param_2;
        plStack_b0 = (longlong *)*param_3;
        plStack_110 = plStack_b0 + 4;
        plStack_120 = plStack_a0 + 4;
        lVar23 = 0;
        lStack_d8 = 8;
        iVar10 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                                  CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                        CONCAT13(unaff_XMM7_Bd,
                                 CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
        unaff_XMM7_Ba = (char)iVar10;
        unaff_XMM7_Bb = (char)((uint)iVar10 >> 8);
        unaff_XMM7_Bc = (char)((uint)iVar10 >> 0x10);
        unaff_XMM7_Bd = (char)((uint)iVar10 >> 0x18);
        iVar10 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                                  CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                        CONCAT13(unaff_XMM7_Bh,
                                 CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
        unaff_XMM7_Be = (char)iVar10;
        unaff_XMM7_Bf = (char)((uint)iVar10 >> 8);
        unaff_XMM7_Bg = (char)((uint)iVar10 >> 0x10);
        unaff_XMM7_Bh = (char)((uint)iVar10 >> 0x18);
        iVar10 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                                  CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                        CONCAT13(unaff_XMM7_Bl,
                                 CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
        unaff_XMM7_Bi = (char)iVar10;
        unaff_XMM7_Bj = (char)((uint)iVar10 >> 8);
        unaff_XMM7_Bk = (char)((uint)iVar10 >> 0x10);
        unaff_XMM7_Bl = (char)((uint)iVar10 >> 0x18);
        iVar10 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                                  CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                        CONCAT13(unaff_XMM7_Bp,
                                 CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
        unaff_XMM7_Bm = (char)iVar10;
        unaff_XMM7_Bn = (char)((uint)iVar10 >> 8);
        unaff_XMM7_Bo = (char)((uint)iVar10 >> 0x10);
        unaff_XMM7_Bp = (char)((uint)iVar10 >> 0x18);
        uVar19 = 0;
        uStack_118 = uVar20;
        lVar17 = 0;
        puVar27 = (undefined *)0x0;
        lVar2 = lStack_e8;
joined_r0x000142581fb0:
        lStack_e8 = lVar17;
        uVar15 = uVar19;
        puStack_e0 = param_4;
        if (cStack_91 == '\0') {
          if ((int)uVar19 == (int)lVar23) {
            do {
              if (puVar22 == param_1) goto LAB_14258247c;
              uVar13 = *puVar22;
              puVar22 = puVar22 + 1;
              lVar23 = *(longlong *)
                        (*(longlong *)(lVar14 + 0x100) + 0x58 + (ulonglong)uVar13 * 0xa0);
            } while (lVar23 == 0);
            lVar17 = *(longlong *)(lVar14 + 0x100) + (ulonglong)uVar13 * 0xa0;
            uVar19 = (ulonglong)*(uint *)(lVar17 + 0x94);
            lVar2 = *(longlong *)(lVar14 + 0x1a0) + uVar19 * 0x48;
            uVar19 = *(ulonglong *)(*(longlong *)(lVar14 + 0x1a0) + 0x40 + uVar19 * 0x48);
            if ((*(ulonglong *)(lStack_a8 + 0x110) < uVar19) &&
               (uVar15 = *(ulonglong *)
                          (*(longlong *)(lVar2 + 0x38) + *(ulonglong *)(lStack_a8 + 0x110) * 8),
               uVar15 != 0)) {
              puVar27 = *(undefined **)(*(longlong *)(lVar2 + 0x18) + 0x10 + ~uVar15 * 0x30);
            }
            else {
              puVar27 = (undefined *)0x0;
            }
            if ((*(ulonglong *)(lStack_a8 + 0x118) < uVar19) &&
               (uVar19 = *(ulonglong *)
                          (*(longlong *)(lVar2 + 0x38) + *(ulonglong *)(lStack_a8 + 0x118) * 8),
               uVar19 != 0)) {
              lStack_e8 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x10 + ~uVar19 * 0x30);
            }
            else {
              lStack_e8 = 0;
            }
            lStack_d8 = *(longlong *)(lVar17 + 0x50);
            uVar15 = 0;
          }
          uVar19 = (ulonglong)~*(uint *)(lStack_d8 + 8 + uVar15 * 0x10);
        }
        else if ((int)uVar19 == (int)lVar23) {
          do {
            if (puVar22 == param_1) goto LAB_14258247c;
            uVar13 = *puVar22;
            puVar22 = puVar22 + 1;
            lVar23 = *(longlong *)(*(longlong *)(lVar14 + 0x1a0) + 0x10 + (ulonglong)uVar13 * 0x48);
          } while (lVar23 == 0);
          lVar2 = *(longlong *)(lVar14 + 0x1a0) + (ulonglong)uVar13 * 0x48;
          if ((*(ulonglong *)(lStack_a8 + 0x110) < *(ulonglong *)(lVar2 + 0x40)) &&
             (uVar19 = *(ulonglong *)
                        (*(longlong *)(lVar2 + 0x38) + *(ulonglong *)(lStack_a8 + 0x110) * 8),
             uVar19 != 0)) {
            puVar27 = *(undefined **)(*(longlong *)(lVar2 + 0x18) + 0x10 + ~uVar19 * 0x30);
            uVar19 = *(ulonglong *)(lStack_a8 + 0x118);
          }
          else {
            puVar27 = (undefined *)0x0;
            uVar19 = *(ulonglong *)(lStack_a8 + 0x118);
          }
          if ((uVar19 < *(ulonglong *)(lVar2 + 0x40)) &&
             (uVar19 = *(ulonglong *)(*(longlong *)(lVar2 + 0x38) + uVar19 * 8), uVar19 != 0)) {
            lStack_e8 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x10 + ~uVar19 * 0x30);
          }
          else {
            lStack_e8 = 0;
          }
          uVar19 = 0;
          uVar15 = uVar19;
        }
        puStack_f8 = puVar27 + uVar19 * 0xc;
        unaff_R12 = (longlong *)(uVar19 * 0x30 + lStack_e8);
        lVar2 = *unaff_R12;
        alStack_188[0] = lVar2;
        lStack_128 = lVar2;
        puStack_f0 = puVar27;
        if (plStack_a0[3] != 0) {
          uStack_c8 = (int)uVar15 + 1;
          uVar19 = pdb_1400af0a0(plStack_120,alStack_188);
          plVar18 = plStack_b0;
          lVar17 = *plStack_a0;
          bVar29 = (byte)(uVar19 >> 0x39);
          auVar30 = ZEXT216(CONCAT11(bVar29,bVar29));
          auVar30 = pshuflw(auVar30,auVar30,0);
          lVar21 = 0;
          while( true ) {
            uVar19 = uVar19 & plStack_a0[1];
            auVar34 = *(undefined1 (*) [16])(lVar17 + uVar19);
            auVar33[0] = -(auVar34[0] == auVar30[0]);
            auVar33[1] = -(auVar34[1] == auVar30[1]);
            auVar33[2] = -(auVar34[2] == auVar30[2]);
            auVar33[3] = -(auVar34[3] == auVar30[3]);
            auVar33[4] = -(auVar34[4] == auVar30[4]);
            auVar33[5] = -(auVar34[5] == auVar30[5]);
            auVar33[6] = -(auVar34[6] == auVar30[6]);
            auVar33[7] = -(auVar34[7] == auVar30[7]);
            auVar33[8] = -(auVar34[8] == auVar30[0]);
            auVar33[9] = -(auVar34[9] == auVar30[1]);
            auVar33[10] = -(auVar34[10] == auVar30[2]);
            auVar33[0xb] = -(auVar34[0xb] == auVar30[3]);
            auVar33[0xc] = -(auVar34[0xc] == auVar30[4]);
            auVar33[0xd] = -(auVar34[0xd] == auVar30[5]);
            auVar33[0xe] = -(auVar34[0xe] == auVar30[6]);
            auVar33[0xf] = -(auVar34[0xf] == auVar30[7]);
            uVar25 = (ushort)(SUB161(auVar33 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar33[0xf] >> 7) << 0xf;
            uVar13 = (uint)uVar25;
            while (uVar25 != 0) {
              uVar8 = 0;
              for (uVar9 = uVar13; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                uVar8 = uVar8 + 1;
              }
              lVar26 = (uVar8 + uVar19 & plStack_a0[1]) * -0x2b0;
              if (lVar2 == *(longlong *)(lVar17 + -0x2b0 + lVar26)) {
                param_2 = (longlong *)(lVar17 + lVar26);
                if (((ulonglong)param_2[-0x53] < 2) ||
                   (fVar4 = *(float *)(param_2 + -0x4f), fVar4 <= 0.0)) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_14351c188);
                }
                iStack_c4 = (int)param_2[-10];
                puStack_d0 = param_1;
                if (plStack_b0[3] != 0) {
                  uVar15 = pdb_1400af0a0(plStack_110,&lStack_128);
                  lVar17 = *plVar18;
                  uVar19 = plVar18[1];
                  bVar29 = (byte)(uVar15 >> 0x39);
                  auVar30 = ZEXT216(CONCAT11(bVar29,bVar29));
                  auVar30 = pshuflw(auVar30,auVar30,0);
                  lVar21 = 0;
                  goto LAB_1425822da;
                }
                uStack_c0 = 0;
                uStack_b8 = 0;
                goto LAB_142582396;
              }
              uVar25 = (ushort)(uVar13 - 1) & (ushort)uVar13;
              uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar25);
            }
            auVar31[0] = -(auVar34[0] == unaff_XMM7_Ba);
            auVar31[1] = -(auVar34[1] == unaff_XMM7_Bb);
            auVar31[2] = -(auVar34[2] == unaff_XMM7_Bc);
            auVar31[3] = -(auVar34[3] == unaff_XMM7_Bd);
            auVar31[4] = -(auVar34[4] == unaff_XMM7_Be);
            auVar31[5] = -(auVar34[5] == unaff_XMM7_Bf);
            auVar31[6] = -(auVar34[6] == unaff_XMM7_Bg);
            auVar31[7] = -(auVar34[7] == unaff_XMM7_Bh);
            auVar31[8] = -(auVar34[8] == unaff_XMM7_Bi);
            auVar31[9] = -(auVar34[9] == unaff_XMM7_Bj);
            auVar31[10] = -(auVar34[10] == unaff_XMM7_Bk);
            auVar31[0xb] = -(auVar34[0xb] == unaff_XMM7_Bl);
            auVar31[0xc] = -(auVar34[0xc] == unaff_XMM7_Bm);
            auVar31[0xd] = -(auVar34[0xd] == unaff_XMM7_Bn);
            auVar31[0xe] = -(auVar34[0xe] == unaff_XMM7_Bo);
            auVar31[0xf] = -(auVar34[0xf] == unaff_XMM7_Bp);
            if ((((((((((((((((SUB161(auVar31 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar31 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar31 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar31 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar31 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar31 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar31 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar31 >> 0x3f,0) & 1) != 0) || (SUB161(auVar31 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar31 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar31 >> 0x57,0) & 1) != 0) || (SUB161(auVar31 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar31 >> 0x67,0) & 1) != 0) || (SUB161(auVar31 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar31 >> 0x77,0) & 1) != 0) || auVar31[0xf] < '\0') break;
            uVar19 = uVar19 + lVar21 + 0x10;
            lVar21 = lVar21 + 0x10;
          }
        }
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14351c1a0);
      }
      goto LAB_142582537;
    }
    if (uVar19 + 2 < 0x4a) {
      lVar23 = 0x47 - uVar19;
      unaff_R12 = (longlong *)(&UNK_14351c6ba + uVar19);
      goto LAB_142581de0;
    }
    goto LAB_1425825ca;
  }
  goto LAB_1425825aa;
LAB_1425822da:
  uVar15 = uVar15 & uVar19;
  pcVar3 = (char *)(lVar17 + uVar15);
  auVar34[0] = -(*pcVar3 == auVar30[0]);
  auVar34[1] = -(pcVar3[1] == auVar30[1]);
  auVar34[2] = -(pcVar3[2] == auVar30[2]);
  auVar34[3] = -(pcVar3[3] == auVar30[3]);
  auVar34[4] = -(pcVar3[4] == auVar30[4]);
  auVar34[5] = -(pcVar3[5] == auVar30[5]);
  auVar34[6] = -(pcVar3[6] == auVar30[6]);
  auVar34[7] = -(pcVar3[7] == auVar30[7]);
  auVar34[8] = -(pcVar3[8] == auVar30[0]);
  auVar34[9] = -(pcVar3[9] == auVar30[1]);
  auVar34[10] = -(pcVar3[10] == auVar30[2]);
  auVar34[0xb] = -(pcVar3[0xb] == auVar30[3]);
  auVar34[0xc] = -(pcVar3[0xc] == auVar30[4]);
  auVar34[0xd] = -(pcVar3[0xd] == auVar30[5]);
  auVar34[0xe] = -(pcVar3[0xe] == auVar30[6]);
  auVar34[0xf] = -(pcVar3[0xf] == auVar30[7]);
  uVar25 = (ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe | (ushort)(auVar34[0xf] >> 7) << 0xf;
  uVar13 = (uint)uVar25;
  while (uVar25 != 0) {
    uVar8 = 0;
    for (uVar9 = uVar13; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    lVar26 = (uVar8 + uVar15 & uVar19) * -0x30;
    if (lVar2 == *(longlong *)(lVar17 + -0x30 + lVar26)) {
      lVar17 = lVar17 + lVar26;
      uStack_c0 = (ulonglong)*(uint *)(lVar17 + -0x18);
      uStack_b8 = *(undefined8 *)(lVar17 + -8);
      goto LAB_142582396;
    }
    uVar25 = (ushort)(uVar13 - 1) & (ushort)uVar13;
    uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar25);
  }
  auVar32[0] = -(*pcVar3 == unaff_XMM7_Ba);
  auVar32[1] = -(pcVar3[1] == unaff_XMM7_Bb);
  auVar32[2] = -(pcVar3[2] == unaff_XMM7_Bc);
  auVar32[3] = -(pcVar3[3] == unaff_XMM7_Bd);
  auVar32[4] = -(pcVar3[4] == unaff_XMM7_Be);
  auVar32[5] = -(pcVar3[5] == unaff_XMM7_Bf);
  auVar32[6] = -(pcVar3[6] == unaff_XMM7_Bg);
  auVar32[7] = -(pcVar3[7] == unaff_XMM7_Bh);
  auVar32[8] = -(pcVar3[8] == unaff_XMM7_Bi);
  auVar32[9] = -(pcVar3[9] == unaff_XMM7_Bj);
  auVar32[10] = -(pcVar3[10] == unaff_XMM7_Bk);
  auVar32[0xb] = -(pcVar3[0xb] == unaff_XMM7_Bl);
  auVar32[0xc] = -(pcVar3[0xc] == unaff_XMM7_Bm);
  auVar32[0xd] = -(pcVar3[0xd] == unaff_XMM7_Bn);
  auVar32[0xe] = -(pcVar3[0xe] == unaff_XMM7_Bo);
  auVar32[0xf] = -(pcVar3[0xf] == unaff_XMM7_Bp);
  if ((((((((((((((((SUB161(auVar32 >> 7,0) & 1) != 0 || (SUB161(auVar32 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar32 >> 0x17,0) & 1) != 0) || (SUB161(auVar32 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar32 >> 0x27,0) & 1) != 0) || (SUB161(auVar32 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar32 >> 0x37,0) & 1) != 0) || (SUB161(auVar32 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar32 >> 0x47,0) & 1) != 0) || (SUB161(auVar32 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar32 >> 0x57,0) & 1) != 0) || (SUB161(auVar32 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar32 >> 0x67,0) & 1) != 0) || (SUB161(auVar32 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar32 >> 0x77,0) & 1) != 0) || auVar32[0xf] < '\0') goto LAB_142582380;
  uVar15 = uVar15 + lVar21 + 0x10;
  lVar21 = lVar21 + 0x10;
  goto LAB_1425822da;
LAB_142582380:
  uStack_c0 = 0;
  uStack_b8 = 0;
LAB_142582396:
  param_1 = puStack_d0;
  pdb_140fb49c0(alStack_188,unaff_R12 + 1);
  uStack_178 = *(undefined4 *)((longlong)param_2 + -0x34);
  uStack_160 = *(undefined4 *)((longlong)unaff_R12 + 0x24);
  lStack_168 = unaff_R12[3];
  uStack_16c = (undefined4)unaff_R12[4];
  uStack_170 = (uint)(iStack_c4 != 2);
  uStack_158 = uStack_b8;
  uStack_150 = (undefined4)uStack_c0;
  uStack_14c = (uint)*(byte *)(unaff_R12 + 5);
  uStack_130 = 0;
  uStack_138 = 0;
  fStack_174 = fVar4;
  pdb_140952650(uStack_118,puStack_f8,&uStack_138,uVar11,alStack_188,&UNK_14351c1b8);
  uVar19 = (ulonglong)uStack_c8;
  param_4 = puStack_e0;
  lVar17 = lStack_e8;
  puVar27 = puStack_f0;
  lVar2 = lStack_e8;
  goto joined_r0x000142581fb0;
LAB_14258247c:
  lStack_e8 = lVar2;
  pdb_140e9a350(param_4);
  pdb_140e9a350();
  LOCK();
  plVar18 = (longlong *)*param_4;
  bVar28 = plVar18 == (longlong *)0x8;
  if (bVar28) {
    *param_4 = 0;
    plVar18 = (longlong *)0x8;
  }
  UNLOCK();
  if (!bVar28) {
    plVar18 = (longlong *)pdb_142dbca40(param_4,0);
  }
  if (lStack_108 != 0) {
    plVar18 = (longlong *)pdb_140e97000();
    if (((char)plVar18[0xd] != '\x01') &&
       (plVar18 = (longlong *)pdb_142d8ec20(plVar18,0), plVar18 == (longlong *)0x0))
    goto LAB_14258257b;
    if (*plVar18 != 0) {
LAB_142582537:
      plVar16 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_142582543:
      plVar16 = (longlong *)pdb_142d8ec20(plVar16,0);
      if (plVar16 == (longlong *)0x0) goto LAB_14258257b;
      goto LAB_142581ebf;
    }
    *plVar18 = -1;
    plStack_a0 = plVar18;
    pdb_140e95370(plVar18 + 1,uStack_100);
    *plStack_a0 = *plStack_a0 + 1;
    plVar18 = plStack_a0;
  }
  return plVar18;
LAB_14258257b:
  pdb_142dc7890(&UNK_143326860);
LAB_142582587:
  pdb_142dc8070(&UNK_14351bd9f,0x2e);
LAB_1425825aa:
  pdb_142dc8070(&UNK_14351c6b8,0x49,0);
LAB_1425825ca:
  pdb_142dc8070(&UNK_14351c6b8,0x49);
  pcVar7 = (code *)swi(3);
  plVar18 = (longlong *)(*pcVar7)();
  return plVar18;
}

