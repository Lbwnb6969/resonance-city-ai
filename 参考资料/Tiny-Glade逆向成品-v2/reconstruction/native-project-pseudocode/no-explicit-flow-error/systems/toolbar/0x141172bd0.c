// VA 0x141172bd0, PDB extent 839 bytes
// toolbar::mei::core::iter_subtree<tuple$<>,toolbar::mei::core::update_nav::closure_env$2>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::core::iter_subtree<tuple$<>,toolbar::mei::core::update_nav::closure_env$2>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
   Extent: 839 */

undefined8 pdb_141172bd0(longlong param_1,longlong param_2,longlong *param_3)

{
  char *pcVar1;
  longlong *plVar2;
  float *pfVar3;
  undefined8 *puVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  ushort uVar17;
  longlong lVar18;
  byte bVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 in_XMM1_Ba;
  char cVar22;
  char cVar23;
  undefined1 in_XMM1_Bb;
  char cVar24;
  char cVar25;
  undefined1 in_XMM1_Bc;
  char cVar26;
  char cVar27;
  undefined1 in_XMM1_Bd;
  char cVar28;
  char cVar29;
  undefined1 in_XMM1_Be;
  undefined1 in_XMM1_Bf;
  undefined1 in_XMM1_Bg;
  undefined1 in_XMM1_Bh;
  undefined1 in_XMM1_Bi;
  char cVar30;
  undefined1 in_XMM1_Bj;
  char cVar31;
  undefined1 in_XMM1_Bk;
  char cVar32;
  undefined1 in_XMM1_Bl;
  char cVar33;
  undefined1 in_XMM1_Bm;
  char cVar34;
  undefined1 in_XMM1_Bn;
  char cVar35;
  undefined1 in_XMM1_Bo;
  char cVar36;
  undefined1 in_XMM1_Bp;
  char cVar37;
  float fVar38;
  float fVar41;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar42;
  float fVar47;
  undefined1 auVar44 [16];
  float fVar43;
  undefined1 auVar45 [16];
  float fVar48;
  undefined1 auVar46 [16];
  longlong lStack_38;
  longlong lStack_30;
  
  plVar2 = (longlong *)*param_3;
  lStack_38 = param_2;
  lStack_30 = param_2;
  if (plVar2[3] != 0) {
    uVar12 = pdb_1400af0a0(plVar2 + 4,&lStack_30);
    lVar15 = *plVar2;
    bVar19 = (byte)(uVar12 >> 0x39);
    auVar21 = ZEXT216(CONCAT11(bVar19,bVar19));
    auVar21 = pshuflw(auVar21,auVar21,0);
    lVar16 = 0;
    iVar7 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    cVar22 = (char)iVar7;
    cVar24 = (char)((uint)iVar7 >> 8);
    cVar26 = (char)((uint)iVar7 >> 0x10);
    cVar28 = (char)((uint)iVar7 >> 0x18);
    iVar7 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    cVar23 = (char)iVar7;
    cVar25 = (char)((uint)iVar7 >> 8);
    cVar27 = (char)((uint)iVar7 >> 0x10);
    cVar29 = (char)((uint)iVar7 >> 0x18);
    iVar7 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    cVar30 = (char)iVar7;
    cVar31 = (char)((uint)iVar7 >> 8);
    cVar32 = (char)((uint)iVar7 >> 0x10);
    cVar33 = (char)((uint)iVar7 >> 0x18);
    iVar7 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    cVar35 = (char)((uint)iVar7 >> 8);
    cVar36 = (char)((uint)iVar7 >> 0x10);
    cVar37 = (char)((uint)iVar7 >> 0x18);
    while( true ) {
      uVar12 = uVar12 & plVar2[1];
      pcVar1 = (char *)(lVar15 + uVar12);
      auVar44[0] = -(*pcVar1 == auVar21[0]);
      auVar44[1] = -(pcVar1[1] == auVar21[1]);
      auVar44[2] = -(pcVar1[2] == auVar21[2]);
      auVar44[3] = -(pcVar1[3] == auVar21[3]);
      auVar44[4] = -(pcVar1[4] == auVar21[4]);
      auVar44[5] = -(pcVar1[5] == auVar21[5]);
      auVar44[6] = -(pcVar1[6] == auVar21[6]);
      auVar44[7] = -(pcVar1[7] == auVar21[7]);
      auVar44[8] = -(pcVar1[8] == auVar21[0]);
      auVar44[9] = -(pcVar1[9] == auVar21[1]);
      auVar44[10] = -(pcVar1[10] == auVar21[2]);
      auVar44[0xb] = -(pcVar1[0xb] == auVar21[3]);
      auVar44[0xc] = -(pcVar1[0xc] == auVar21[4]);
      auVar44[0xd] = -(pcVar1[0xd] == auVar21[5]);
      auVar44[0xe] = -(pcVar1[0xe] == auVar21[6]);
      auVar44[0xf] = -(pcVar1[0xf] == auVar21[7]);
      uVar17 = (ushort)(SUB161(auVar44 >> 7,0) & 1) | (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe | (ushort)(auVar44[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar17;
      while (uVar17 != 0) {
        uVar14 = 0;
        for (uVar6 = uVar11; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar14 = uVar14 + 1;
        }
        lVar18 = (uVar14 + uVar12 & plVar2[1]) * -0xd8;
        if (param_2 == *(longlong *)(lVar15 + -0xd8 + lVar18)) {
          lVar15 = lVar15 + lVar18;
          cVar34 = (char)iVar7;
          if ((*(byte *)(lVar15 + -5) & 0x20) != 0) {
            fVar38 = ((float)*(undefined8 *)(lVar15 + -0x48) * _DAT_142e36f60 +
                     (float)*(undefined8 *)(lVar15 + -0x40)) - (float)*(undefined8 *)param_3[1];
            fVar41 = ((float)((ulonglong)*(undefined8 *)(lVar15 + -0x48) >> 0x20) * _UNK_142e36f64 +
                     (float)((ulonglong)*(undefined8 *)(lVar15 + -0x40) >> 0x20)) -
                     (float)((ulonglong)*(undefined8 *)param_3[1] >> 0x20);
            fVar20 = SQRT(fVar41 * fVar41 + fVar38 * fVar38);
            fVar42 = _DAT_142e36f28 / fVar20;
            uVar14 = (uint)((int)fVar42 - 1U < 0x7fffff ||
                           (int)ABS(fVar42) - 0x800000U < 0x7f000000 && -1 < (int)fVar42);
            fVar43 = (float)*(undefined8 *)param_3[2];
            fVar48 = (float)((ulonglong)*(undefined8 *)param_3[2] >> 0x20);
            fVar47 = _DAT_142e36f28 / SQRT(fVar48 * fVar48 + fVar43 * fVar43);
            fVar48 = fVar47 * fVar48;
            uVar11 = (uint)((int)fVar47 - 1U < 0x7fffff ||
                           (int)ABS(fVar47) - 0x800000U < 0x7f000000 && -1 < (int)fVar47);
            auVar45._0_4_ = (int)(uVar11 << 0x1f) >> 0x1f;
            auVar45._4_4_ = (int)(uVar11 << 0x1f) >> 0x1f;
            auVar45._8_4_ = (int)(uVar11 << 0x1f) >> 0x1f;
            auVar45._12_4_ = (int)(uVar11 << 0x1f) >> 0x1f;
            auVar21[4] = SUB41(fVar48,0);
            auVar21._0_4_ = fVar47 * fVar43;
            auVar21[5] = (char)((uint)fVar48 >> 8);
            auVar21[6] = (char)((uint)fVar48 >> 0x10);
            auVar21[7] = (char)((uint)fVar48 >> 0x18);
            auVar21._8_8_ = 0;
            auVar45 = auVar45 & auVar21;
            fVar47 = auVar45._4_4_ *
                     (float)((int)(uVar14 << 0x1f) >> 0x1f & (uint)(fVar42 * fVar41));
            fVar48 = auVar45._12_4_ *
                     (float)((int)(uVar14 << 0x1f) >> 0x1f &
                            (uint)(((_UNK_142e36f6c * 0.0 + 0.0) - 0.0) * 0.0));
            cVar23 = SUB41(fVar47,0);
            cVar25 = (char)((uint)fVar47 >> 8);
            cVar27 = (char)((uint)fVar47 >> 0x10);
            cVar29 = (char)((uint)fVar47 >> 0x18);
            cVar30 = SUB41(fVar48,0);
            cVar31 = (char)((uint)fVar48 >> 8);
            cVar32 = (char)((uint)fVar48 >> 0x10);
            cVar33 = (char)((uint)fVar48 >> 0x18);
            fVar47 = fVar47 + auVar45._0_4_ *
                              (float)((int)(uVar14 << 0x1f) >> 0x1f & (uint)(fVar42 * fVar38));
            cVar22 = SUB41(fVar47,0);
            cVar24 = (char)((uint)fVar47 >> 8);
            cVar26 = (char)((uint)fVar47 >> 0x10);
            cVar28 = (char)((uint)fVar47 >> 0x18);
            cVar34 = cVar30;
            cVar35 = cVar31;
            cVar36 = cVar32;
            cVar37 = cVar33;
            if (0.0 < fVar47) {
              pfVar3 = (float *)param_3[3];
              fVar47 = *pfVar3;
              cVar22 = SUB41(fVar47,0);
              cVar24 = (char)((uint)fVar47 >> 8);
              cVar26 = (char)((uint)fVar47 >> 0x10);
              cVar28 = (char)((uint)fVar47 >> 0x18);
              cVar23 = '\0';
              cVar25 = '\0';
              cVar27 = '\0';
              cVar29 = '\0';
              cVar30 = '\0';
              cVar31 = '\0';
              cVar32 = '\0';
              cVar33 = '\0';
              cVar34 = '\0';
              cVar35 = '\0';
              cVar36 = '\0';
              cVar37 = '\0';
              if (fVar20 < fVar47) {
                puVar4 = (undefined8 *)param_3[4];
                *puVar4 = 1;
                puVar4[1] = param_2;
                *pfVar3 = fVar20;
              }
            }
          }
          if (*(longlong *)(param_1 + 0x1c8) != 0) {
            uVar12 = pdb_1400af0a0(param_1 + 0x1d0,&lStack_38);
            lVar15 = *(longlong *)(param_1 + 0x1b0);
            bVar19 = (byte)(uVar12 >> 0x39);
            auVar21 = ZEXT216(CONCAT11(bVar19,bVar19));
            auVar21 = pshuflw(auVar21,auVar21,0);
            lVar16 = 0;
            iVar7 = -(uint)(CONCAT13(cVar28,CONCAT12(cVar26,CONCAT11(cVar24,cVar22))) ==
                           CONCAT13(cVar28,CONCAT12(cVar26,CONCAT11(cVar24,cVar22))));
            iVar8 = -(uint)(CONCAT13(cVar29,CONCAT12(cVar27,CONCAT11(cVar25,cVar23))) ==
                           CONCAT13(cVar29,CONCAT12(cVar27,CONCAT11(cVar25,cVar23))));
            iVar9 = -(uint)(CONCAT13(cVar33,CONCAT12(cVar32,CONCAT11(cVar31,cVar30))) ==
                           CONCAT13(cVar33,CONCAT12(cVar32,CONCAT11(cVar31,cVar30))));
            iVar10 = -(uint)(CONCAT13(cVar37,CONCAT12(cVar36,CONCAT11(cVar35,cVar34))) ==
                            CONCAT13(cVar37,CONCAT12(cVar36,CONCAT11(cVar35,cVar34))));
            while( true ) {
              uVar12 = uVar12 & *(ulonglong *)(param_1 + 0x1b8);
              pcVar1 = (char *)(lVar15 + uVar12);
              auVar46[0] = -(*pcVar1 == auVar21[0]);
              auVar46[1] = -(pcVar1[1] == auVar21[1]);
              auVar46[2] = -(pcVar1[2] == auVar21[2]);
              auVar46[3] = -(pcVar1[3] == auVar21[3]);
              auVar46[4] = -(pcVar1[4] == auVar21[4]);
              auVar46[5] = -(pcVar1[5] == auVar21[5]);
              auVar46[6] = -(pcVar1[6] == auVar21[6]);
              auVar46[7] = -(pcVar1[7] == auVar21[7]);
              auVar46[8] = -(pcVar1[8] == auVar21[0]);
              auVar46[9] = -(pcVar1[9] == auVar21[1]);
              auVar46[10] = -(pcVar1[10] == auVar21[2]);
              auVar46[0xb] = -(pcVar1[0xb] == auVar21[3]);
              auVar46[0xc] = -(pcVar1[0xc] == auVar21[4]);
              auVar46[0xd] = -(pcVar1[0xd] == auVar21[5]);
              auVar46[0xe] = -(pcVar1[0xe] == auVar21[6]);
              auVar46[0xf] = -(pcVar1[0xf] == auVar21[7]);
              uVar17 = (ushort)(SUB161(auVar46 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar46 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar46 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar46 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar46 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar46 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar46 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar46 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar46 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar46 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar46 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar46 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar46 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar46[0xf] >> 7) << 0xf;
              uVar11 = (uint)uVar17;
              while (uVar17 != 0) {
                uVar14 = 0;
                for (uVar6 = uVar11; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                  uVar14 = uVar14 + 1;
                }
                lVar18 = (uVar14 + uVar12 & *(ulonglong *)(param_1 + 0x1b8)) * -0xd8;
                if (param_2 == *(longlong *)(lVar15 + -0xd8 + lVar18)) {
                  lVar15 = lVar15 + lVar18;
                  lVar16 = *(longlong *)(lVar15 + -0xc0);
                  if (lVar16 != 0) {
                    lVar15 = *(longlong *)(lVar15 + -200);
                    lVar18 = 0;
                    do {
                      pdb_141172bd0(param_1,*(undefined8 *)(lVar15 + lVar18),param_3);
                      lVar18 = lVar18 + 8;
                    } while (lVar16 << 3 != lVar18);
                  }
                  return 0;
                }
                uVar17 = (ushort)(uVar11 - 1) & (ushort)uVar11;
                uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar17);
              }
              auVar40[0] = -(*pcVar1 == (char)iVar7);
              auVar40[1] = -(pcVar1[1] == (char)((uint)iVar7 >> 8));
              auVar40[2] = -(pcVar1[2] == (char)((uint)iVar7 >> 0x10));
              auVar40[3] = -(pcVar1[3] == (char)((uint)iVar7 >> 0x18));
              auVar40[4] = -(pcVar1[4] == (char)iVar8);
              auVar40[5] = -(pcVar1[5] == (char)((uint)iVar8 >> 8));
              auVar40[6] = -(pcVar1[6] == (char)((uint)iVar8 >> 0x10));
              auVar40[7] = -(pcVar1[7] == (char)((uint)iVar8 >> 0x18));
              auVar40[8] = -(pcVar1[8] == (char)iVar9);
              auVar40[9] = -(pcVar1[9] == (char)((uint)iVar9 >> 8));
              auVar40[10] = -(pcVar1[10] == (char)((uint)iVar9 >> 0x10));
              auVar40[0xb] = -(pcVar1[0xb] == (char)((uint)iVar9 >> 0x18));
              auVar40[0xc] = -(pcVar1[0xc] == (char)iVar10);
              auVar40[0xd] = -(pcVar1[0xd] == (char)((uint)iVar10 >> 8));
              auVar40[0xe] = -(pcVar1[0xe] == (char)((uint)iVar10 >> 0x10));
              auVar40[0xf] = -(pcVar1[0xf] == (char)((uint)iVar10 >> 0x18));
              if ((((((((((((((((SUB161(auVar40 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar40 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar40 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar40 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar40 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar40 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar40 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar40 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar40 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar40 >> 0x4f,0) & 1) != 0) || (SUB161(auVar40 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar40 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar40 >> 0x67,0) & 1) != 0) || (SUB161(auVar40 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar40 >> 0x77,0) & 1) != 0) || auVar40[0xf] < '\0') break;
              uVar12 = uVar12 + lVar16 + 0x10;
              lVar16 = lVar16 + 0x10;
            }
          }
          goto LAB_141172efe;
        }
        uVar17 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar17);
      }
      auVar39[0] = -(*pcVar1 == cVar22);
      auVar39[1] = -(pcVar1[1] == cVar24);
      auVar39[2] = -(pcVar1[2] == cVar26);
      auVar39[3] = -(pcVar1[3] == cVar28);
      auVar39[4] = -(pcVar1[4] == cVar23);
      auVar39[5] = -(pcVar1[5] == cVar25);
      auVar39[6] = -(pcVar1[6] == cVar27);
      auVar39[7] = -(pcVar1[7] == cVar29);
      auVar39[8] = -(pcVar1[8] == cVar30);
      auVar39[9] = -(pcVar1[9] == cVar31);
      auVar39[10] = -(pcVar1[10] == cVar32);
      auVar39[0xb] = -(pcVar1[0xb] == cVar33);
      auVar39[0xc] = -(pcVar1[0xc] == (char)iVar7);
      auVar39[0xd] = -(pcVar1[0xd] == cVar35);
      auVar39[0xe] = -(pcVar1[0xe] == cVar36);
      auVar39[0xf] = -(pcVar1[0xf] == cVar37);
      if ((((((((((((((((SUB161(auVar39 >> 7,0) & 1) != 0 || (SUB161(auVar39 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar39 >> 0x17,0) & 1) != 0) || (SUB161(auVar39 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar39 >> 0x27,0) & 1) != 0) || (SUB161(auVar39 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar39 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar39 >> 0x3f,0) & 1) != 0) || (SUB161(auVar39 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar39 >> 0x4f,0) & 1) != 0) || (SUB161(auVar39 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar39 >> 0x5f,0) & 1) != 0) || (SUB161(auVar39 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar39 >> 0x6f,0) & 1) != 0) || (SUB161(auVar39 >> 0x77,0) & 1) != 0) ||
          auVar39[0xf] < '\0') break;
      uVar12 = uVar12 + lVar16 + 0x10;
      lVar16 = lVar16 + 0x10;
    }
  }
  pdb_142dc8110(&UNK_14329be28,0x16,&UNK_14329c418);
LAB_141172efe:
  pdb_142dc8110(&UNK_14329be28,0x16,&UNK_14329cd78);
  pcVar5 = (code *)swi(3);
  uVar13 = (*pcVar5)();
  return uVar13;
}

