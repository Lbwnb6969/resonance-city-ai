// VA 0x1410cff30, PDB extent 2062 bytes
// system_clutter::autoclutter::AutoClutterState::add_region
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/autoclutter/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_clutter::autoclutter::AutoClutterState::add_region
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/autoclutter/mod.rs
   Extent: 2062 */

void pdb_1410cff30(longlong param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined1 (*pauVar4) [16];
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ushort uVar12;
  ulonglong uVar13;
  byte bVar14;
  byte bVar15;
  undefined1 auVar16 [16];
  longlong *plVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined *puVar25;
  longlong lStack_120;
  undefined8 auStack_118 [2];
  longlong lStack_108;
  longlong lStack_100;
  longlong *plStack_f8;
  ulonglong uStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  longlong *plStack_c0;
  undefined1 uStack_b1;
  undefined8 uStack_b0;
  
  uStack_b0 = 0xfffffffffffffffe;
  uStack_b1 = 1;
  lStack_108 = param_2;
  plStack_c0 = param_3;
  uVar6 = pdb_14216e010(param_1 + 0x80,&lStack_108);
  lVar10 = *(longlong *)(param_1 + 0x60);
  bVar14 = (byte)(uVar6 >> 0x38);
  bVar15 = bVar14 >> 1;
  auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
  auVar16 = pshuflw(auVar16,auVar16,0);
  lVar9 = 0;
  uVar11 = uVar6;
  do {
    uVar11 = uVar11 & *(ulonglong *)(param_1 + 0x68);
    auVar2 = *(undefined1 (*) [16])(lVar10 + uVar11);
    auVar19[0] = -(auVar2[0] == auVar16[0]);
    auVar19[1] = -(auVar2[1] == auVar16[1]);
    auVar19[2] = -(auVar2[2] == auVar16[2]);
    auVar19[3] = -(auVar2[3] == auVar16[3]);
    auVar19[4] = -(auVar2[4] == auVar16[4]);
    auVar19[5] = -(auVar2[5] == auVar16[5]);
    auVar19[6] = -(auVar2[6] == auVar16[6]);
    auVar19[7] = -(auVar2[7] == auVar16[7]);
    auVar19[8] = -(auVar2[8] == auVar16[0]);
    auVar19[9] = -(auVar2[9] == auVar16[1]);
    auVar19[10] = -(auVar2[10] == auVar16[2]);
    auVar19[0xb] = -(auVar2[0xb] == auVar16[3]);
    auVar19[0xc] = -(auVar2[0xc] == auVar16[4]);
    auVar19[0xd] = -(auVar2[0xd] == auVar16[5]);
    auVar19[0xe] = -(auVar2[0xe] == auVar16[6]);
    auVar19[0xf] = -(auVar2[0xf] == auVar16[7]);
    uVar12 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe | (ushort)(auVar19[0xf] >> 7) << 0xf;
    uVar7 = (uint)uVar12;
    while (lStack_120 = param_2, uVar12 != 0) {
      uVar8 = 0;
      for (uVar5 = uVar7; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        uVar8 = uVar8 + 1;
      }
      uVar13 = uVar8 + uVar11 & *(ulonglong *)(param_1 + 0x68);
      if (*(longlong *)(lVar10 + -0x48 + uVar13 * -0x48) == param_2) {
        lVar10 = lVar10 + uVar13 * -0x48;
        if ((*(float *)(lVar10 + -0x18) == *(float *)(plStack_c0 + 5)) &&
           (!NAN(*(float *)(lVar10 + -0x18)) && !NAN(*(float *)(plStack_c0 + 5)))) {
          if ((*(float *)(lVar10 + -0x14) == *(float *)((longlong)plStack_c0 + 0x2c)) &&
             (!NAN(*(float *)(lVar10 + -0x14)) && !NAN(*(float *)((longlong)plStack_c0 + 0x2c)))) {
            if ((*(float *)(lVar10 + -0x10) == *(float *)(plStack_c0 + 6)) &&
               (!NAN(*(float *)(lVar10 + -0x10)) && !NAN(*(float *)(plStack_c0 + 6)))) {
              if ((*(float *)(lVar10 + -0x28) == *(float *)(plStack_c0 + 3)) &&
                 (!NAN(*(float *)(lVar10 + -0x28)) && !NAN(*(float *)(plStack_c0 + 3)))) {
                if ((*(float *)(lVar10 + -0x24) == *(float *)((longlong)plStack_c0 + 0x1c)) &&
                   (!NAN(*(float *)(lVar10 + -0x24)) &&
                    !NAN(*(float *)((longlong)plStack_c0 + 0x1c)))) {
                  if ((*(float *)(lVar10 + -0x20) == *(float *)(plStack_c0 + 4)) &&
                     (!NAN(*(float *)(lVar10 + -0x20)) && !NAN(*(float *)(plStack_c0 + 4)))) {
                    if ((((*(float *)(lVar10 + -0x1c) == *(float *)((longlong)plStack_c0 + 0x24)) &&
                         (!NAN(*(float *)(lVar10 + -0x1c)) &&
                          !NAN(*(float *)((longlong)plStack_c0 + 0x24)))) &&
                        (*(int *)(lVar10 + -0xc) == *(int *)((longlong)plStack_c0 + 0x34))) &&
                       ((*(char *)(lVar10 + -8) == (char)plStack_c0[7] &&
                        (*(char *)(lVar10 + -7) == *(char *)((longlong)plStack_c0 + 0x39))))) {
                      *(undefined1 *)(lVar10 + -4) = *(undefined1 *)(param_1 + 0x90);
                      uStack_b1 = 1;
                      pdb_1410d0740(param_1);
                      if ((int)*plStack_c0 != 4) {
                        return;
                      }
                      plVar17 = (longlong *)plStack_c0[1];
                      LOCK();
                      *plVar17 = *plVar17 + -1;
                      UNLOCK();
                      if (*plVar17 != 0) {
                        return;
                      }
                      pdb_140c79ee0(plStack_c0 + 1);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
        lVar9 = *(longlong *)(param_1 + 8);
        uVar3 = *(undefined8 *)(param_1 + 0x10);
        fVar24 = (float)*(undefined8 *)(lVar10 + -0x24);
        fVar22 = (float)((ulonglong)*(undefined8 *)(lVar10 + -0x20) >> 0x20);
        auStack_118[0] =
             CONCAT44(*(float *)(lVar10 + -0x28) * fVar22 +
                      fVar24 * (float)((ulonglong)*(undefined8 *)(lVar10 + -0x24) >> 0x20),
                      *(float *)(lVar10 + -0x28) * (float)*(undefined8 *)(lVar10 + -0x20) -
                      fVar22 * fVar24);
        uStack_b1 = 1;
        pdb_140df4520(&lStack_108,auStack_118);
        fVar21 = _DAT_142e36f50;
        uStack_b1 = 1;
        pdb_140df3380(&lStack_108);
        uStack_b1 = 1;
        pdb_140df3450(auStack_118,&lStack_108);
        uStack_b1 = 1;
        lStack_108 = lVar9;
        lStack_100 = uVar3;
        plStack_f8 = &lStack_120;
        pdb_1421a65f0(auStack_118,&lStack_108);
        lVar9 = *(longlong *)(param_1 + 8);
        uVar3 = *(undefined8 *)(param_1 + 0x10);
        fVar22 = *(float *)(plStack_c0 + 5);
        fVar24 = *(float *)(plStack_c0 + 6);
        fVar23 = (float)*(undefined8 *)((longlong)plStack_c0 + 0x1c);
        fVar20 = (float)((ulonglong)plStack_c0[4] >> 0x20);
        auStack_118[0] =
             CONCAT44(*(float *)(plStack_c0 + 3) * fVar20 +
                      fVar23 * (float)((ulonglong)*(undefined8 *)((longlong)plStack_c0 + 0x1c) >>
                                      0x20),
                      *(float *)(plStack_c0 + 3) * (float)plStack_c0[4] - fVar20 * fVar23);
        uStack_b1 = 1;
        lStack_120 = param_2;
        pdb_140df4520(&lStack_108,auStack_118);
        fVar22 = fVar22 + (float)lStack_108 * fVar21;
        fVar24 = fVar24 + fVar21 * (float)lStack_100;
        uStack_b1 = 1;
        puVar25 = &UNK_14328aa58;
        pdb_140df3380(&lStack_108);
        uStack_b1 = 1;
        pdb_140df3450(auStack_118,&lStack_108);
        uStack_b1 = 1;
        lStack_108 = lVar9;
        lStack_100 = uVar3;
        plStack_f8 = &lStack_120;
        pdb_1421a6bd0(auStack_118,&lStack_108);
        uVar12 = *(ushort *)(lVar10 + -6);
        if (uVar12 < 0xfffe) {
          lVar9 = *(longlong *)(param_1 + 0x40);
          if (lVar9 == *(longlong *)(param_1 + 0x30)) {
            uStack_b1 = 1;
            pdb_142dc74c0(param_1 + 0x30);
          }
          *(ushort *)(*(longlong *)(param_1 + 0x38) + lVar9 * 2) = uVar12;
          *(longlong *)(param_1 + 0x40) = lVar9 + 1;
        }
        lStack_108 = *plStack_c0;
        lStack_100 = plStack_c0[1];
        plStack_f8 = (longlong *)plStack_c0[2];
        uStack_f0 = plStack_c0[3];
        lStack_e8 = plStack_c0[4];
        lStack_e0 = plStack_c0[5];
        lStack_d8 = plStack_c0[6];
        lStack_d0 = plStack_c0[7];
        if (*(int *)(lVar10 + -0x40) == 4) {
          plVar17 = *(longlong **)(lVar10 + -0x38);
          LOCK();
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (*plVar17 == 0) {
            pdb_140c79ee0(lVar10 + -0x38);
          }
        }
        *(longlong *)(lVar10 + -0x10) = lStack_d8;
        *(longlong *)(lVar10 + -8) = lStack_d0;
        *(longlong *)(lVar10 + -0x20) = lStack_e8;
        *(longlong *)(lVar10 + -0x18) = lStack_e0;
        *(longlong **)(lVar10 + -0x30) = plStack_f8;
        *(ulonglong *)(lVar10 + -0x28) = uStack_f0;
        *(longlong *)(lVar10 + -0x40) = lStack_108;
        *(longlong *)(lVar10 + -0x38) = lStack_100;
        plVar17 = plStack_f8;
        goto LAB_1410d0537;
      }
      uVar12 = (ushort)(uVar7 - 1) & (ushort)uVar7;
      uVar7 = CONCAT22((short)(uVar7 - 1 >> 0x10),uVar12);
    }
    auVar18[0] = -(auVar2[0] == -1);
    auVar18[1] = -(auVar2[1] == -1);
    auVar18[2] = -(auVar2[2] == -1);
    auVar18[3] = -(auVar2[3] == -1);
    auVar18[4] = -(auVar2[4] == -1);
    auVar18[5] = -(auVar2[5] == -1);
    auVar18[6] = -(auVar2[6] == -1);
    auVar18[7] = -(auVar2[7] == -1);
    auVar18[8] = -(auVar2[8] == -1);
    auVar18[9] = -(auVar2[9] == -1);
    auVar18[10] = -(auVar2[10] == -1);
    auVar18[0xb] = -(auVar2[0xb] == -1);
    auVar18[0xc] = -(auVar2[0xc] == -1);
    auVar18[0xd] = -(auVar2[0xd] == -1);
    auVar18[0xe] = -(auVar2[0xe] == -1);
    auVar18[0xf] = -(auVar2[0xf] == -1);
    if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar18 >> 0x17,0) & 1) != 0) || (SUB161(auVar18 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar18 >> 0x37,0) & 1) != 0) || (SUB161(auVar18 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar18 >> 0x47,0) & 1) != 0) || (SUB161(auVar18 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar18 >> 0x57,0) & 1) != 0) || (SUB161(auVar18 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar18 >> 0x67,0) & 1) != 0) || (SUB161(auVar18 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar18 >> 0x77,0) & 1) != 0) || auVar18[0xf] < '\0') {
      if (*(longlong *)(param_1 + 0x70) == 0) {
        uStack_b1 = 1;
        pdb_142dcba20(param_1 + 0x60,1,param_1 + 0x80,CONCAT71((int7)(uVar11 >> 8),1));
      }
      lVar10 = *(longlong *)(param_1 + 8);
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      fVar22 = *(float *)(plStack_c0 + 5);
      fVar24 = *(float *)(plStack_c0 + 6);
      fVar23 = (float)*(undefined8 *)((longlong)plStack_c0 + 0x1c);
      fVar21 = (float)((ulonglong)plStack_c0[4] >> 0x20);
      auStack_118[0] =
           CONCAT44(*(float *)(plStack_c0 + 3) * fVar21 +
                    fVar23 * (float)((ulonglong)*(undefined8 *)((longlong)plStack_c0 + 0x1c) >> 0x20
                                    ),
                    *(float *)(plStack_c0 + 3) * (float)plStack_c0[4] - fVar21 * fVar23);
      uStack_b1 = 1;
      pdb_140df4520(&lStack_108,auStack_118);
      fVar22 = fVar22 + (float)lStack_108 * _DAT_142e36f50;
      fVar24 = fVar24 + _DAT_142e36f50 * (float)lStack_100;
      uStack_b1 = 1;
      puVar25 = &UNK_14328aa58;
      pdb_140df3380(&lStack_108);
      uStack_b1 = 1;
      pdb_140df3450(auStack_118,&lStack_108);
      plStack_f8 = &lStack_120;
      uStack_b1 = 1;
      lStack_108 = lVar10;
      lStack_100 = uVar3;
      pdb_1421a6bd0(auStack_118,&lStack_108);
      lStack_108 = *plStack_c0;
      lStack_100 = plStack_c0[1];
      plStack_f8 = (longlong *)plStack_c0[2];
      uStack_f0 = plStack_c0[3];
      lStack_e8 = plStack_c0[4];
      lStack_e0 = plStack_c0[5];
      lStack_d8 = plStack_c0[6];
      lStack_d0 = plStack_c0[7];
      pauVar4 = *(undefined1 (**) [16])(param_1 + 0x60);
      uVar11 = *(ulonglong *)(param_1 + 0x68);
      uVar6 = uVar6 & uVar11;
      auVar16 = *(undefined1 (*) [16])(*pauVar4 + uVar6);
      uVar12 = (ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar16[0xf] >> 7) << 0xf;
      uVar7 = (uint)uVar12;
      if (uVar12 == 0) {
        lVar10 = 0x10;
        do {
          uVar6 = uVar6 + lVar10 & uVar11;
          auVar16 = *(undefined1 (*) [16])(*pauVar4 + uVar6);
          lVar10 = lVar10 + 0x10;
          uVar7 = (uint)(ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar16[0xf] >> 7) << 0xf);
        } while (uVar7 == 0);
      }
      uVar8 = 0;
      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar8 = uVar8 + 1;
      }
      uVar6 = uVar8 + uVar6 & uVar11;
      bVar15 = (*pauVar4)[uVar6];
      if (-1 < (char)bVar15) {
        auVar16 = *pauVar4;
        uVar7 = 0;
        for (uVar8 = (uint)(ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar16[0xf] >> 7) << 0xf); (uVar8 & 1) == 0;
            uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        uVar6 = (ulonglong)uVar7;
        bVar15 = (*pauVar4)[uVar6];
      }
      bVar14 = bVar14 >> 1;
      (*pauVar4)[uVar6] = bVar14;
      pauVar4[1][uVar6 - 0x10 & uVar11] = bVar14;
      lVar10 = (longlong)pauVar4 + uVar6 * -0x48;
      *(longlong *)((longlong)pauVar4 + uVar6 * -0x48 + -0x48) = param_2;
      plVar17 = (longlong *)((longlong)pauVar4 + uVar6 * -0x48 + -0x40);
      *plVar17 = lStack_108;
      plVar17[1] = lStack_100;
      puVar1 = (ulonglong *)((longlong)pauVar4 + uVar6 * -0x48 + -0x30);
      *puVar1 = (ulonglong)plStack_f8;
      puVar1[1] = uStack_f0;
      plVar17 = (longlong *)((longlong)pauVar4 + uVar6 * -0x48 + -0x20);
      *plVar17 = lStack_e8;
      plVar17[1] = lStack_e0;
      plVar17 = (longlong *)((longlong)pauVar4 + uVar6 * -0x48 + -0x10);
      *plVar17 = lStack_d8;
      plVar17[1] = lStack_d0;
      lVar9 = *(longlong *)(param_1 + 0x78) - _UNK_142e47bf8;
      *(ulonglong *)(param_1 + 0x70) = *(longlong *)(param_1 + 0x70) - (ulonglong)(bVar15 & 1);
      *(longlong *)(param_1 + 0x78) = lVar9;
      plVar17 = (longlong *)(ulonglong)(bVar15 & 1);
LAB_1410d0537:
      *(undefined1 *)(lVar10 + -4) = *(undefined1 *)(param_1 + 0x90);
      uStack_b1 = 0;
      pdb_1410d0740(param_1,plVar17,lStack_e8,lStack_d8,fVar23,fVar22,fVar24,puVar25);
      return;
    }
    uVar11 = uVar11 + lVar9 + 0x10;
    lVar9 = lVar9 + 0x10;
  } while( true );
}

