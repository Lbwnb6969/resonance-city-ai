// VA 0x140a0b6d0, PDB extent 1238 bytes
// country_core::systems::wall::wall_state::debug_viz_threshold_curve::debug_viz_threshold_curve
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/debug_viz_threshold_curve.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::wall_state::debug_viz_threshold_curve::debug_viz_threshold_curve
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/debug_viz_threshold_curve.rs
   Extent: 1238 */

void pdb_140a0b6d0(ulonglong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  float fVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong *plVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  ushort uVar25;
  longlong lVar26;
  undefined1 (*pauVar27) [16];
  undefined1 (*pauVar28) [16];
  longlong lVar29;
  longlong *plVar30;
  float *pfVar31;
  byte bVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
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
  float fVar37;
  float fVar38;
  ulonglong auStack_150 [2];
  float fStack_140;
  undefined8 uStack_13c;
  float fStack_134;
  undefined4 uStack_130;
  uint uStack_12c;
  undefined1 (*pauStack_128) [16];
  longlong *plStack_120;
  longlong lStack_118;
  longlong *plStack_110;
  undefined8 uStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  
  fVar15 = _UNK_143035eac;
  fVar14 = _UNK_143035ea8;
  fVar13 = _UNK_143035ea4;
  fVar12 = _DAT_143035ea0;
  fVar11 = _DAT_142e3c608;
  fVar10 = _DAT_142e37ad4;
  fVar9 = _DAT_142e36f28;
  uVar18 = *param_1;
  if (*(char *)(uVar18 + 0xc3) == '\x01') {
    plVar20 = (longlong *)*param_2;
    if (plVar20[3] != 0) {
      uStack_108 = *param_3;
      pauVar27 = (undefined1 (*) [16])*plVar20;
      auVar34 = *pauVar27;
      uVar21 = ~(uint)(ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
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
                               (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar34[0xf] >> 7) << 0xf);
      pauVar28 = pauVar27 + 1;
      iVar5 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                               CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                     CONCAT13(unaff_XMM6_Bd,
                              CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
      iVar6 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                               CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                     CONCAT13(unaff_XMM6_Bh,
                              CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
      iVar7 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                               CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                     CONCAT13(unaff_XMM6_Bl,
                              CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
      iVar8 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                               CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                     CONCAT13(unaff_XMM6_Bp,
                              CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
      lVar29 = plVar20[3];
      plVar30 = plVar20 + 4;
LAB_140a0b7a9:
      if ((short)uVar21 == 0) {
        do {
          auVar34 = *pauVar28;
          pauVar27 = pauVar27 + -0x2b0;
          pauVar28 = pauVar28 + 1;
          uVar21 = (ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
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
                            (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar34[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar21 == 0);
      }
      uVar24 = 0;
      for (uVar3 = uVar21; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        uVar24 = uVar24 + 1;
      }
      uVar22 = *(ulonglong *)pauVar27[(ulonglong)uVar24 * -0x2b + -0x2b];
      auStack_150[0] = uVar22;
      if (plVar20[3] != 0) {
        uVar21 = uVar21 - 1 & uVar21;
        lVar29 = lVar29 + -1;
        uVar17 = pdb_1400af0a0(plVar30,auStack_150);
        uVar16 = uStack_108;
        lVar19 = *plVar20;
        bVar32 = (byte)(uVar17 >> 0x39);
        auVar34 = ZEXT216(CONCAT11(bVar32,bVar32));
        auVar34 = pshuflw(auVar34,auVar34,0);
        lVar23 = 0;
        while( true ) {
          uVar17 = uVar17 & plVar20[1];
          auVar2 = *(undefined1 (*) [16])(lVar19 + uVar17);
          auVar36[0] = -(auVar2[0] == auVar34[0]);
          auVar36[1] = -(auVar2[1] == auVar34[1]);
          auVar36[2] = -(auVar2[2] == auVar34[2]);
          auVar36[3] = -(auVar2[3] == auVar34[3]);
          auVar36[4] = -(auVar2[4] == auVar34[4]);
          auVar36[5] = -(auVar2[5] == auVar34[5]);
          auVar36[6] = -(auVar2[6] == auVar34[6]);
          auVar36[7] = -(auVar2[7] == auVar34[7]);
          auVar36[8] = -(auVar2[8] == auVar34[0]);
          auVar36[9] = -(auVar2[9] == auVar34[1]);
          auVar36[10] = -(auVar2[10] == auVar34[2]);
          auVar36[0xb] = -(auVar2[0xb] == auVar34[3]);
          auVar36[0xc] = -(auVar2[0xc] == auVar34[4]);
          auVar36[0xd] = -(auVar2[0xd] == auVar34[5]);
          auVar36[0xe] = -(auVar2[0xe] == auVar34[6]);
          auVar36[0xf] = -(auVar2[0xf] == auVar34[7]);
          uVar25 = (ushort)(SUB161(auVar36 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar36[0xf] >> 7) << 0xf;
          uVar24 = (uint)uVar25;
          while (uVar25 != 0) {
            uVar3 = 0;
            for (uVar4 = uVar24; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
              uVar3 = uVar3 + 1;
            }
            lVar26 = (uVar3 + uVar17 & plVar20[1]) * -0x2b0;
            if (uVar22 == *(ulonglong *)(lVar19 + -0x2b0 + lVar26)) {
              lVar19 = lVar19 + lVar26;
              if ((*(ulonglong *)(lVar19 + -0x298) < 2) || (*(float *)(lVar19 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_143036018);
              }
              uVar22 = *(ulonglong *)(lVar19 + -0x210);
              if (*(ulonglong *)(lVar19 + -0x1d8) < *(ulonglong *)(lVar19 + -0x210)) {
                uVar22 = *(ulonglong *)(lVar19 + -0x1d8);
              }
              if (*(ulonglong *)(lVar19 + -0x1c0) < uVar22) {
                uVar22 = *(ulonglong *)(lVar19 + -0x1c0);
              }
              if (*(ulonglong *)(lVar19 + -0x1a8) < uVar22) {
                uVar22 = *(ulonglong *)(lVar19 + -0x1a8);
              }
              if (uVar22 == 0) {
                uVar18 = uVar18 & 0xffffffff;
                param_1 = (ulonglong *)((ulonglong)param_1 & 0xffffffff);
                param_2 = (undefined8 *)((ulonglong)param_2 & 0xffffffff);
                if (lVar29 == 0) {
                  return;
                }
              }
              else {
                lStack_f0 = *(longlong *)(lVar19 + -0x1e0);
                lStack_f8 = *(longlong *)(lVar19 + -0x1c8);
                lStack_100 = *(longlong *)(lVar19 + -0x1b0);
                uVar24 = (uint)param_2 & 0xffffff00;
                uVar3 = (uint)param_1 & 0xffffff00;
                uVar4 = (uint)uVar18 & 0xffffff00;
                pfVar31 = (float *)(*(longlong *)(lVar19 + -0x218) + 8);
                uVar18 = 0;
                pauStack_128 = pauVar27;
                plStack_120 = plVar30;
                lStack_118 = lVar29;
                plStack_110 = plVar20;
                do {
                  uVar17 = uVar18 + 1;
                  fVar1 = *pfVar31;
                  auStack_150[0] = auStack_150[0] & 0xffffffff00000000;
                  fStack_140 = 0.1;
                  uStack_13c = *(undefined8 *)(pfVar31 + -2);
                  fVar37 = (float)uStack_13c;
                  fVar38 = (float)((ulonglong)uStack_13c >> 0x20);
                  uStack_130 = 0x3f800000;
                  uStack_12c = uStack_12c & 0xffffff00;
                  fStack_134 = fVar1;
                  pdb_140ab07b0(auStack_150,uVar16);
                  auStack_150[0]._0_4_ = 1;
                  fVar33 = *(float *)(lStack_f0 + uVar18 * 4);
                  fStack_140 = fVar10 + fVar9 * fVar12;
                  fStack_134 = fVar1 + fVar33 * fVar15;
                  uStack_13c = CONCAT44(fVar38 + fVar33 * fVar14,fVar37 + fVar33 * fVar13);
                  uStack_130 = 0x40000000;
                  uStack_12c = uVar24;
                  pdb_140ab07b0(auStack_150,uVar16);
                  auStack_150[0]._0_4_ = 1;
                  fVar33 = *(float *)(lStack_100 + uVar18 * 4);
                  fStack_140 = fVar9 * fVar12 + fVar11;
                  fStack_134 = fVar33 * fVar15 + fVar1;
                  uStack_13c = CONCAT44(fVar33 * fVar14 + fVar38,fVar33 * fVar13 + fVar37);
                  uStack_130 = 0x3f000000;
                  uStack_12c = uVar3;
                  pdb_140ab07b0(auStack_150,uVar16);
                  auStack_150[0] = CONCAT44(auStack_150[0]._4_4_,2);
                  fVar33 = *(float *)(lStack_f8 + uVar18 * 4) - fVar38;
                  fStack_140 = fVar9 * fVar12 + fVar11;
                  fStack_134 = fVar33 * fVar15 + fVar1;
                  uStack_13c = CONCAT44(fVar33 * fVar14 + fVar38,fVar33 * fVar13 + fVar37);
                  uStack_130 = 0x3f000000;
                  uStack_12c = uVar4;
                  pdb_140ab07b0(auStack_150,uVar16);
                  pfVar31 = pfVar31 + 3;
                  uVar18 = uVar17;
                } while (uVar22 != uVar17);
                uVar18 = (ulonglong)uVar4;
                param_1 = (ulonglong *)(ulonglong)uVar3;
                param_2 = (undefined8 *)(ulonglong)uVar24;
                plVar20 = plStack_110;
                pauVar27 = pauStack_128;
                lVar29 = lStack_118;
                plVar30 = plStack_120;
                if (lStack_118 == 0) {
                  return;
                }
              }
              goto LAB_140a0b7a9;
            }
            uVar25 = (ushort)(uVar24 - 1) & (ushort)uVar24;
            uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar25);
          }
          auVar35[0] = -(auVar2[0] == (char)iVar5);
          auVar35[1] = -(auVar2[1] == (char)((uint)iVar5 >> 8));
          auVar35[2] = -(auVar2[2] == (char)((uint)iVar5 >> 0x10));
          auVar35[3] = -(auVar2[3] == (char)((uint)iVar5 >> 0x18));
          auVar35[4] = -(auVar2[4] == (char)iVar6);
          auVar35[5] = -(auVar2[5] == (char)((uint)iVar6 >> 8));
          auVar35[6] = -(auVar2[6] == (char)((uint)iVar6 >> 0x10));
          auVar35[7] = -(auVar2[7] == (char)((uint)iVar6 >> 0x18));
          auVar35[8] = -(auVar2[8] == (char)iVar7);
          auVar35[9] = -(auVar2[9] == (char)((uint)iVar7 >> 8));
          auVar35[10] = -(auVar2[10] == (char)((uint)iVar7 >> 0x10));
          auVar35[0xb] = -(auVar2[0xb] == (char)((uint)iVar7 >> 0x18));
          auVar35[0xc] = -(auVar2[0xc] == (char)iVar8);
          auVar35[0xd] = -(auVar2[0xd] == (char)((uint)iVar8 >> 8));
          auVar35[0xe] = -(auVar2[0xe] == (char)((uint)iVar8 >> 0x10));
          auVar35[0xf] = -(auVar2[0xf] == (char)((uint)iVar8 >> 0x18));
          if ((((((((((((((((SUB161(auVar35 >> 7,0) & 1) != 0 || (SUB161(auVar35 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar35 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar35 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar35 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar35 >> 0x2f,0) & 1) != 0) || (SUB161(auVar35 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar35 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar35 >> 0x47,0) & 1) != 0) || (SUB161(auVar35 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar35 >> 0x57,0) & 1) != 0) || (SUB161(auVar35 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar35 >> 0x67,0) & 1) != 0) || (SUB161(auVar35 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar35 >> 0x77,0) & 1) != 0) || auVar35[0xf] < '\0') break;
          uVar17 = uVar17 + lVar23 + 0x10;
          lVar23 = lVar23 + 0x10;
        }
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143036030);
    }
  }
  return;
}

