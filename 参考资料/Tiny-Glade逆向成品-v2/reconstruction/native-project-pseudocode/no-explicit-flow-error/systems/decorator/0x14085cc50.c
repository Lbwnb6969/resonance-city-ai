// VA 0x14085cc50, PDB extent 953 bytes
// system_decorator::ui_systems::ui_stairs_viz::visualize_ui_stairs::closure$12
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_stairs_viz.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::ui_systems::ui_stairs_viz::visualize_ui_stairs::closure$12
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_stairs_viz.rs
   Extent: 953 */

void pdb_14085cc50(char *param_1,undefined8 *param_2,longlong *param_3,int param_4)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  ushort uVar22;
  longlong lVar23;
  undefined4 *puVar24;
  byte bVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar34;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  uint uVar39;
  uint uVar40;
  undefined1 unaff_XMM7_Ba;
  undefined1 unaff_XMM7_Bb;
  undefined1 unaff_XMM7_Bc;
  undefined1 unaff_XMM7_Bd;
  undefined1 unaff_XMM7_Be;
  undefined1 unaff_XMM7_Bf;
  undefined1 unaff_XMM7_Bg;
  undefined1 unaff_XMM7_Bh;
  undefined1 unaff_XMM7_Bi;
  undefined1 unaff_XMM7_Bj;
  undefined1 unaff_XMM7_Bk;
  undefined1 unaff_XMM7_Bl;
  undefined1 unaff_XMM7_Bm;
  undefined1 unaff_XMM7_Bn;
  undefined1 unaff_XMM7_Bo;
  undefined1 unaff_XMM7_Bp;
  int iStack_84;
  longlong alStack_80 [8];
  
  if (*param_1 != '\0') {
    return;
  }
  if (*(int *)(param_1 + 8) != 5) {
    return;
  }
  lVar13 = pdb_140a61160(*param_2);
  uVar18 = *(ulonglong *)(lVar13 + 0x10);
  iStack_84 = param_4;
  if (uVar18 == 0) goto LAB_14085cf96;
  if (uVar18 == 1) {
    lVar13 = *(longlong *)(lVar13 + 8);
    if (param_4 != *(int *)(lVar13 + 0x20)) goto LAB_14085cf96;
    uVar14 = 0;
  }
  else {
    uVar14 = pdb_1400aede0(lVar13 + 0x38,&iStack_84);
    uVar15 = pdb_1414af660(lVar13,uVar14,&iStack_84);
    if ((uVar15 & 1) == 0) goto LAB_14085cf96;
    if (uVar18 <= uVar14) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar14,uVar18,&UNK_143311df8);
    }
    lVar13 = *(longlong *)(lVar13 + 8);
    if (lVar13 == 0) goto LAB_14085cf96;
  }
  lVar17 = *(longlong *)(lVar13 + 0x10 + uVar14 * 0x28);
  if (lVar17 != 0) {
    puVar24 = *(undefined4 **)(lVar13 + 8 + uVar14 * 0x28);
    puVar2 = puVar24 + lVar17 * 2;
    uVar39 = 0;
    uVar40 = 0;
    iVar8 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                             CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                   CONCAT13(unaff_XMM7_Bd,
                            CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
    iVar9 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                             CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                   CONCAT13(unaff_XMM7_Bh,
                            CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
    iVar10 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                              CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                    CONCAT13(unaff_XMM7_Bl,
                             CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
    iVar11 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                              CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                    CONCAT13(unaff_XMM7_Bp,
                             CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
    fVar27 = _DAT_142f6e380;
    do {
      lVar13 = *param_3;
      uVar12 = pdb_140a61520(param_4,*puVar24);
      lVar17 = pdb_140c017b0(uVar12);
      alStack_80[0] = lVar17;
      if (*(longlong *)(lVar13 + 0x150) != 0) {
        uVar18 = pdb_1400af0a0(lVar13 + 0x158,alStack_80);
        lVar19 = *(longlong *)(lVar13 + 0x138);
        bVar25 = (byte)(uVar18 >> 0x39);
        auVar29 = ZEXT216(CONCAT11(bVar25,bVar25));
        auVar29 = pshuflw(auVar29,auVar29,0);
        lVar20 = 0;
        while( true ) {
          uVar18 = uVar18 & *(ulonglong *)(lVar13 + 0x140);
          auVar4 = *(undefined1 (*) [16])(lVar19 + uVar18);
          auVar32[0] = -(auVar4[0] == auVar29[0]);
          auVar32[1] = -(auVar4[1] == auVar29[1]);
          auVar32[2] = -(auVar4[2] == auVar29[2]);
          auVar32[3] = -(auVar4[3] == auVar29[3]);
          auVar32[4] = -(auVar4[4] == auVar29[4]);
          auVar32[5] = -(auVar4[5] == auVar29[5]);
          auVar32[6] = -(auVar4[6] == auVar29[6]);
          auVar32[7] = -(auVar4[7] == auVar29[7]);
          auVar32[8] = -(auVar4[8] == auVar29[0]);
          auVar32[9] = -(auVar4[9] == auVar29[1]);
          auVar32[10] = -(auVar4[10] == auVar29[2]);
          auVar32[0xb] = -(auVar4[0xb] == auVar29[3]);
          auVar32[0xc] = -(auVar4[0xc] == auVar29[4]);
          auVar32[0xd] = -(auVar4[0xd] == auVar29[5]);
          auVar32[0xe] = -(auVar4[0xe] == auVar29[6]);
          auVar32[0xf] = -(auVar4[0xf] == auVar29[7]);
          uVar22 = (ushort)(SUB161(auVar32 >> 7,0) & 1) |
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
          uVar21 = (uint)uVar22;
          while (uVar22 != 0) {
            uVar6 = 0;
            for (uVar7 = uVar21; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
              uVar6 = uVar6 + 1;
            }
            lVar23 = (uVar6 + uVar18 & *(ulonglong *)(lVar13 + 0x140)) * -0x98;
            if (lVar17 == *(longlong *)(lVar19 + -0x98 + lVar23)) {
              lVar19 = lVar19 + lVar23;
              uVar18 = *(ulonglong *)(lVar19 + -0x80);
              if (1 < uVar18) {
                puVar5 = *(undefined8 **)(lVar19 + -0x88);
                fVar26 = *(float *)((longlong)puVar5 + 0x14);
                uVar3 = *(undefined8 *)((longlong)puVar5 + 0xc);
                fVar31 = (float)uVar3;
                fVar35 = (float)*puVar5 - fVar31;
                fVar34 = (float)((ulonglong)uVar3 >> 0x20);
                fVar36 = (float)((ulonglong)*puVar5 >> 0x20) - fVar34;
                fVar35 = SQRT((*(float *)(puVar5 + 1) - fVar26) * (*(float *)(puVar5 + 1) - fVar26)
                              + fVar36 * fVar36 + fVar35 * fVar35);
                auVar29 = ZEXT416((uint)fVar35);
                if (uVar18 != 2) {
                  uVar14 = uVar18 * 0xc - 0x24;
                  auVar4._8_8_ = 0;
                  auVar4._0_8_ = uVar14;
                  if ((SUB164(auVar4 * ZEXT816(0xaaaaaaaaaaaaaaab),8) >> 3 & 1) == 0) {
                    puVar16 = (undefined8 *)((longlong)puVar5 + 0x24);
                    fVar36 = *(float *)(puVar5 + 4);
                    uVar3 = puVar5[3];
                    fVar31 = fVar31 - (float)uVar3;
                    fVar34 = fVar34 - (float)((ulonglong)uVar3 >> 0x20);
                    auVar29 = ZEXT416((uint)(fVar35 + SQRT((fVar26 - fVar36) * (fVar26 - fVar36) +
                                                           fVar34 * fVar34 + fVar31 * fVar31)));
                  }
                  else {
                    puVar16 = puVar5 + 3;
                    fVar36 = fVar26;
                  }
                  if (0xb < uVar14) {
                    do {
                      pfVar1 = (float *)(puVar16 + 1);
                      fVar26 = fVar36 - *pfVar1;
                      fVar37 = (float)*puVar16;
                      fVar35 = (float)uVar3 - fVar37;
                      fVar38 = (float)((ulonglong)*puVar16 >> 0x20);
                      fVar31 = (float)((ulonglong)uVar3 >> 0x20) - fVar38;
                      fVar36 = *(float *)((longlong)puVar16 + 0x14);
                      uVar3 = *(undefined8 *)((longlong)puVar16 + 0xc);
                      puVar16 = puVar16 + 3;
                      fVar34 = *pfVar1 - fVar36;
                      fVar37 = fVar37 - (float)uVar3;
                      fVar38 = fVar38 - (float)((ulonglong)uVar3 >> 0x20);
                      auVar29 = ZEXT416((uint)(SQRT(fVar34 * fVar34 +
                                                    fVar38 * fVar38 + fVar37 * fVar37) +
                                              SQRT(fVar26 * fVar26 +
                                                   fVar31 * fVar31 + fVar35 * fVar35) +
                                              auVar29._0_4_));
                    } while (puVar16 != (undefined8 *)((longlong)puVar5 + uVar18 * 0xc));
                  }
                }
                fVar26 = auVar29._0_4_;
                if (0.0 < fVar26) {
                  auVar33._0_4_ = -(uint)NAN(fVar27) & (uint)fVar26;
                  auVar33._4_4_ = 0;
                  auVar33._8_4_ = uVar39 & auVar29._8_4_;
                  auVar33._12_4_ = uVar40 & auVar29._12_4_;
                  if (fVar27 <= fVar26) {
                    auVar29._0_4_ = fVar27;
                  }
                  auVar28._0_4_ = ~-(uint)NAN(fVar27) & auVar29._0_4_;
                  auVar28._4_4_ = 0;
                  auVar28._8_4_ = ~uVar39 & auVar29._8_4_;
                  auVar28._12_4_ = ~uVar40 & auVar29._12_4_;
                  auVar28 = auVar28 | auVar33;
                  fVar27 = auVar28._0_4_;
                  uVar39 = auVar28._8_4_;
                  uVar40 = auVar28._12_4_;
                }
              }
              goto LAB_14085cf80;
            }
            uVar22 = (ushort)(uVar21 - 1) & (ushort)uVar21;
            uVar21 = CONCAT22((short)(uVar21 - 1 >> 0x10),uVar22);
          }
          auVar30[0] = -(auVar4[0] == (char)iVar8);
          auVar30[1] = -(auVar4[1] == (char)((uint)iVar8 >> 8));
          auVar30[2] = -(auVar4[2] == (char)((uint)iVar8 >> 0x10));
          auVar30[3] = -(auVar4[3] == (char)((uint)iVar8 >> 0x18));
          auVar30[4] = -(auVar4[4] == (char)iVar9);
          auVar30[5] = -(auVar4[5] == (char)((uint)iVar9 >> 8));
          auVar30[6] = -(auVar4[6] == (char)((uint)iVar9 >> 0x10));
          auVar30[7] = -(auVar4[7] == (char)((uint)iVar9 >> 0x18));
          auVar30[8] = -(auVar4[8] == (char)iVar10);
          auVar30[9] = -(auVar4[9] == (char)((uint)iVar10 >> 8));
          auVar30[10] = -(auVar4[10] == (char)((uint)iVar10 >> 0x10));
          auVar30[0xb] = -(auVar4[0xb] == (char)((uint)iVar10 >> 0x18));
          auVar30[0xc] = -(auVar4[0xc] == (char)iVar11);
          auVar30[0xd] = -(auVar4[0xd] == (char)((uint)iVar11 >> 8));
          auVar30[0xe] = -(auVar4[0xe] == (char)((uint)iVar11 >> 0x10));
          auVar30[0xf] = -(auVar4[0xf] == (char)((uint)iVar11 >> 0x18));
          if ((((((((((((((((SUB161(auVar30 >> 7,0) & 1) != 0 || (SUB161(auVar30 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar30 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar30 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar30 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar30 >> 0x2f,0) & 1) != 0) || (SUB161(auVar30 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar30 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar30 >> 0x47,0) & 1) != 0) || (SUB161(auVar30 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar30 >> 0x57,0) & 1) != 0) || (SUB161(auVar30 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar30 >> 0x67,0) & 1) != 0) || (SUB161(auVar30 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar30 >> 0x77,0) & 1) != 0) || auVar30[0xf] < '\0') break;
          uVar18 = uVar18 + lVar20 + 0x10;
          lVar20 = lVar20 + 0x10;
        }
      }
LAB_14085cf80:
      puVar24 = puVar24 + 2;
    } while (puVar24 != puVar2);
  }
LAB_14085cf96:
  pdb_140de8220();
  return;
}

