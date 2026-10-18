// VA 0x140a72010, PDB extent 1307 bytes
// country_core::systems::ivy::ivy_pruner::is_point_still_valid
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ivy/ivy_pruner.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::ivy::ivy_pruner::is_point_still_valid
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ivy/ivy_pruner.rs
   Extent: 1307 */

longlong pdb_140a72010(float *param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  char *pcVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  longlong *plVar12;
  char cVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  ushort uVar20;
  longlong lVar21;
  ulonglong uVar22;
  int iVar23;
  longlong lVar24;
  byte bVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 uVar33;
  undefined1 uStack_109;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  ulonglong **ppuStack_b0;
  longlong *plStack_a8;
  ulonglong uStack_a0;
  ulonglong *puStack_98;
  code *pcStack_90;
  
  iVar3 = *(int *)(param_2 + 0x48);
  iVar4 = *(int *)(param_2 + 0x4c);
  plStack_a8 = param_4;
  fVar26 = (float)pub_142e32a40((*(float *)(param_2 + 0x50) * _DAT_142e36f50 + *param_1) /
                                (*(float *)(param_2 + 0x50) / (float)iVar3));
  fVar27 = _DAT_142e382cc;
  iVar23 = (int)fVar26;
  if (_DAT_142e382cc < fVar26) {
    iVar23 = 0x7fffffff;
  }
  if (NAN(fVar26)) {
    iVar23 = 0;
  }
  fVar26 = (float)pub_142e32a40();
  iVar14 = (int)fVar26;
  if (fVar27 < fVar26) {
    iVar14 = 0x7fffffff;
  }
  if (NAN(fVar26)) {
    iVar14 = 0;
  }
  if ((((-1 < iVar23) && (iVar14 < iVar4)) && (iVar23 < iVar3)) &&
     ((-1 < iVar14 &&
      (uVar16 = (ulonglong)(iVar14 * iVar3 + iVar23), uVar16 < *(ulonglong *)(param_2 + 0x10))))) {
    lVar17 = uVar16 * 0x30;
    uVar16 = *(ulonglong *)(*(longlong *)(param_2 + 8) + 0x10 + lVar17);
    if (uVar16 != 0) {
      lVar17 = *(longlong *)(*(longlong *)(param_2 + 8) + 8 + lVar17);
      uVar33 = 0x3f000000;
      uVar15 = uVar16;
      pdb_140bb46f0(&uStack_108);
      if ((char)uStack_108 != '\0') {
        uStack_a0 = (ulonglong)uStack_100;
        if (uVar16 <= uStack_100) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uStack_100,uVar16,&UNK_1430412c0);
        }
        if ((float)uStack_f8 < _DAT_143040ec0) {
          lVar5 = *(longlong *)(lVar17 + 0x28 + (longlong)uStack_100 * 0x38);
          if (param_3[3] != 0) {
            uStack_108 = lVar5;
            uVar16 = pdb_1400af0a0(param_3 + 4,&uStack_108);
            plVar12 = plStack_a8;
            lVar24 = *param_3;
            bVar25 = (byte)(uVar16 >> 0x39);
            auVar28 = ZEXT216(CONCAT11(bVar25,bVar25));
            auVar28 = pshuflw(auVar28,auVar28,0);
            lVar18 = 0;
            while( true ) {
              uVar16 = uVar16 & param_3[1];
              auVar32 = *(undefined1 (*) [16])(lVar24 + uVar16);
              auVar31[0] = -(auVar32[0] == auVar28[0]);
              auVar31[1] = -(auVar32[1] == auVar28[1]);
              auVar31[2] = -(auVar32[2] == auVar28[2]);
              auVar31[3] = -(auVar32[3] == auVar28[3]);
              auVar31[4] = -(auVar32[4] == auVar28[4]);
              auVar31[5] = -(auVar32[5] == auVar28[5]);
              auVar31[6] = -(auVar32[6] == auVar28[6]);
              auVar31[7] = -(auVar32[7] == auVar28[7]);
              auVar31[8] = -(auVar32[8] == auVar28[0]);
              auVar31[9] = -(auVar32[9] == auVar28[1]);
              auVar31[10] = -(auVar32[10] == auVar28[2]);
              auVar31[0xb] = -(auVar32[0xb] == auVar28[3]);
              auVar31[0xc] = -(auVar32[0xc] == auVar28[4]);
              auVar31[0xd] = -(auVar32[0xd] == auVar28[5]);
              auVar31[0xe] = -(auVar32[0xe] == auVar28[6]);
              auVar31[0xf] = -(auVar32[0xf] == auVar28[7]);
              uVar20 = (ushort)(SUB161(auVar31 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar31[0xf] >> 7) << 0xf;
              uVar19 = (uint)uVar20;
              while (uVar20 != 0) {
                uVar6 = 0;
                for (uVar7 = uVar19; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                  uVar6 = uVar6 + 1;
                }
                lVar21 = (uVar6 + uVar16 & param_3[1]) * -0x2b0;
                if (lVar5 == *(longlong *)(lVar24 + -0x2b0 + lVar21)) {
                  lVar24 = lVar24 + lVar21;
                  if ((*(ulonglong *)(lVar24 + -0x298) < 2) || (*(float *)(lVar24 + -0x278) <= 0.0))
                  {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_1430412d8,lVar21,uVar15,uVar33);
                  }
                  fVar27 = _DAT_142e37848 / *(float *)(lVar24 + -0x278);
                  if (uStack_f8._4_4_ <= (float)(_DAT_142e37820 ^ (uint)fVar27)) {
                    return 0;
                  }
                  if (uStack_f8._4_4_ < fVar27 + _DAT_142e36f28) {
                    lVar24 = lVar24 + -0x2a8;
                    if (plStack_a8[3] == 0) {
                      return lVar24;
                    }
                    uStack_108 = lVar5;
                    uVar15 = pdb_1400af0a0(plStack_a8 + 4,&uStack_108);
                    lVar18 = *plVar12;
                    uVar16 = plVar12[1];
                    bVar25 = (byte)(uVar15 >> 0x39);
                    auVar28 = ZEXT216(CONCAT11(bVar25,bVar25));
                    auVar28 = pshuflw(auVar28,auVar28,0);
                    lVar21 = 0;
                    do {
                      uVar15 = uVar15 & uVar16;
                      pcVar1 = (char *)(lVar18 + uVar15);
                      auVar32[0] = -(*pcVar1 == auVar28[0]);
                      auVar32[1] = -(pcVar1[1] == auVar28[1]);
                      auVar32[2] = -(pcVar1[2] == auVar28[2]);
                      auVar32[3] = -(pcVar1[3] == auVar28[3]);
                      auVar32[4] = -(pcVar1[4] == auVar28[4]);
                      auVar32[5] = -(pcVar1[5] == auVar28[5]);
                      auVar32[6] = -(pcVar1[6] == auVar28[6]);
                      auVar32[7] = -(pcVar1[7] == auVar28[7]);
                      auVar32[8] = -(pcVar1[8] == auVar28[0]);
                      auVar32[9] = -(pcVar1[9] == auVar28[1]);
                      auVar32[10] = -(pcVar1[10] == auVar28[2]);
                      auVar32[0xb] = -(pcVar1[0xb] == auVar28[3]);
                      auVar32[0xc] = -(pcVar1[0xc] == auVar28[4]);
                      auVar32[0xd] = -(pcVar1[0xd] == auVar28[5]);
                      auVar32[0xe] = -(pcVar1[0xe] == auVar28[6]);
                      auVar32[0xf] = -(pcVar1[0xf] == auVar28[7]);
                      uVar20 = (ushort)(SUB161(auVar32 >> 7,0) & 1) |
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
                      uVar19 = (uint)uVar20;
                      while (uVar20 != 0) {
                        uVar6 = 0;
                        for (uVar7 = uVar19; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                          uVar6 = uVar6 + 1;
                        }
                        uVar22 = uVar6 + uVar15 & uVar16;
                        if (lVar5 == *(longlong *)(lVar18 + -0x28 + uVar22 * -0x28)) {
                          lVar18 = lVar18 + uVar22 * -0x28;
                          lVar5 = *(longlong *)(lVar18 + -0x10);
                          if (lVar5 == 0) {
                            return lVar24;
                          }
                          lVar18 = *(longlong *)(lVar18 + -0x18);
                          pdb_140b56370(lVar17 + (longlong)uStack_100 * 0x38);
                          pdb_14007ee60();
                          fVar11 = _UNK_143040edc;
                          fVar10 = _UNK_143040ed8;
                          fVar26 = _UNK_143040ed4;
                          fVar27 = _DAT_143040ed0;
                          lVar17 = 0;
                          do {
                            puVar2 = (undefined8 *)(lVar18 + lVar17);
                            uVar8 = *puVar2;
                            uVar9 = puVar2[1];
                            uStack_108._0_4_ = (float)uVar8;
                            uStack_108._4_4_ = (float)((ulonglong)uVar8 >> 0x20);
                            uStack_100._0_4_ = (float)uVar9;
                            uStack_100._4_4_ = (float)((ulonglong)uVar9 >> 0x20);
                            uStack_108 = CONCAT44(uStack_108._4_4_ + fVar26,
                                                  (float)uStack_108 + fVar27);
                            uStack_100 = (undefined *)
                                         CONCAT44(uStack_100._4_4_ + fVar11,
                                                  (float)uStack_100 + fVar10);
                            cVar13 = pdb_140deec60(&uStack_108);
                            if (cVar13 != '\0') {
                              return 0;
                            }
                            lVar17 = lVar17 + 0x14;
                          } while (lVar5 * 0x14 != lVar17);
                          return lVar24;
                        }
                        uVar20 = (ushort)(uVar19 - 1) & (ushort)uVar19;
                        uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar20);
                      }
                      auVar30[0] = -(*pcVar1 == -1);
                      auVar30[1] = -(pcVar1[1] == -1);
                      auVar30[2] = -(pcVar1[2] == -1);
                      auVar30[3] = -(pcVar1[3] == -1);
                      auVar30[4] = -(pcVar1[4] == -1);
                      auVar30[5] = -(pcVar1[5] == -1);
                      auVar30[6] = -(pcVar1[6] == -1);
                      auVar30[7] = -(pcVar1[7] == -1);
                      auVar30[8] = -(pcVar1[8] == -1);
                      auVar30[9] = -(pcVar1[9] == -1);
                      auVar30[10] = -(pcVar1[10] == -1);
                      auVar30[0xb] = -(pcVar1[0xb] == -1);
                      auVar30[0xc] = -(pcVar1[0xc] == -1);
                      auVar30[0xd] = -(pcVar1[0xd] == -1);
                      auVar30[0xe] = -(pcVar1[0xe] == -1);
                      auVar30[0xf] = -(pcVar1[0xf] == -1);
                      if ((((((((((((((((SUB161(auVar30 >> 7,0) & 1) != 0 ||
                                       (SUB161(auVar30 >> 0xf,0) & 1) != 0) ||
                                      (SUB161(auVar30 >> 0x17,0) & 1) != 0) ||
                                     (SUB161(auVar30 >> 0x1f,0) & 1) != 0) ||
                                    (SUB161(auVar30 >> 0x27,0) & 1) != 0) ||
                                   (SUB161(auVar30 >> 0x2f,0) & 1) != 0) ||
                                  (SUB161(auVar30 >> 0x37,0) & 1) != 0) ||
                                 (SUB161(auVar30 >> 0x3f,0) & 1) != 0) ||
                                (SUB161(auVar30 >> 0x47,0) & 1) != 0) ||
                               (SUB161(auVar30 >> 0x4f,0) & 1) != 0) ||
                              (SUB161(auVar30 >> 0x57,0) & 1) != 0) ||
                             (SUB161(auVar30 >> 0x5f,0) & 1) != 0) ||
                            (SUB161(auVar30 >> 0x67,0) & 1) != 0) ||
                           (SUB161(auVar30 >> 0x6f,0) & 1) != 0) ||
                          (SUB161(auVar30 >> 0x77,0) & 1) != 0) || auVar30[0xf] < '\0') {
                        return lVar24;
                      }
                      uVar15 = uVar15 + lVar21 + 0x10;
                      lVar21 = lVar21 + 0x10;
                    } while( true );
                  }
                  return 0;
                }
                uVar20 = (ushort)(uVar19 - 1) & (ushort)uVar19;
                uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar20);
              }
              auVar29[0] = -(auVar32[0] == -1);
              auVar29[1] = -(auVar32[1] == -1);
              auVar29[2] = -(auVar32[2] == -1);
              auVar29[3] = -(auVar32[3] == -1);
              auVar29[4] = -(auVar32[4] == -1);
              auVar29[5] = -(auVar32[5] == -1);
              auVar29[6] = -(auVar32[6] == -1);
              auVar29[7] = -(auVar32[7] == -1);
              auVar29[8] = -(auVar32[8] == -1);
              auVar29[9] = -(auVar32[9] == -1);
              auVar29[10] = -(auVar32[10] == -1);
              auVar29[0xb] = -(auVar32[0xb] == -1);
              auVar29[0xc] = -(auVar32[0xc] == -1);
              auVar29[0xd] = -(auVar32[0xd] == -1);
              auVar29[0xe] = -(auVar32[0xe] == -1);
              auVar29[0xf] = -(auVar32[0xf] == -1);
              if ((((((((((((((((SUB161(auVar29 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar29 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar29 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar29 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar29 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar29 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar29 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar29 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar29 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar29 >> 0x4f,0) & 1) != 0) || (SUB161(auVar29 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar29 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar29 >> 0x67,0) & 1) != 0) || (SUB161(auVar29 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar29 >> 0x77,0) & 1) != 0) || auVar29[0xf] < '\0') break;
              uVar16 = uVar16 + lVar18 + 0x10;
              lVar18 = lVar18 + 0x10;
            }
          }
          if (1 < *_DAT_143ca8e90) {
            puStack_98 = &uStack_a0;
            pcStack_90 = pdb_140f72a40;
            uStack_108 = 0;
            uStack_100 = &UNK_143041327;
            uStack_f8 = 0x26;
            uStack_f0 = 0;
            puStack_e8 = &UNK_143041243;
            uStack_e0 = 0x31;
            uStack_d8 = 2;
            puStack_d0 = &UNK_143041327;
            uStack_c8 = 0x26;
            uStack_c0 = 0xc900000001;
            puStack_b8 = &UNK_1430412f0;
            ppuStack_b0 = &puStack_98;
            pdb_140f332f0(&uStack_109,&uStack_108);
          }
        }
      }
    }
  }
  return 0;
}

