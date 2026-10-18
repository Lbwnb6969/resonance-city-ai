// VA 0x1408e7230, PDB extent 1825 bytes
// system_decorator::decorator_on_rectangle_edited::decorator_on_rectangle_edited
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_on_rectangle_edited.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_on_rectangle_edited::decorator_on_rectangle_edited
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_on_rectangle_edited.rs
   Extent: 1825 */

void pdb_1408e7230(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  int *piVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  int *piVar20;
  longlong lVar21;
  uint uVar22;
  ushort uVar23;
  int *piVar24;
  int *piVar25;
  longlong lVar26;
  int *piVar27;
  int *piVar28;
  int *piVar29;
  byte bVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  float fVar41;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined4 uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  int iStack_1b0;
  undefined8 uStack_1ac;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  ushort uStack_160;
  undefined8 uStack_158;
  longlong lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  int aiStack_138 [2];
  longlong lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  longlong lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uVar35;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  
  lVar18 = param_2[1];
  uVar17 = *(ulonglong *)*param_2;
  piVar27 = (int *)0x0;
  piVar15 = (int *)(uVar17 - *(ulonglong *)(lVar18 + 0x18));
  if (uVar17 < *(ulonglong *)(lVar18 + 0x18)) {
    piVar15 = piVar27;
  }
  lVar19 = (longlong)piVar15 * 0x58 + *(longlong *)(lVar18 + 8);
  piVar3 = *(int **)(lVar18 + 0x10);
  piVar20 = (int *)((longlong)piVar3 - (longlong)piVar15);
  if (piVar3 < piVar15) {
    piVar20 = piVar27;
  }
  if (piVar3 < piVar15) {
    lVar19 = 8;
  }
  piVar29 = (int *)(lVar19 + -0x58 + (longlong)piVar20 * 0x58);
  if (piVar3 <= piVar15) {
    piVar29 = piVar27;
  }
  piVar4 = *(int **)(lVar18 + 0x30);
  piVar24 = (int *)(uVar17 - *(ulonglong *)(lVar18 + 0x38));
  if (uVar17 < *(ulonglong *)(lVar18 + 0x38)) {
    piVar24 = piVar27;
  }
  lVar19 = (longlong)piVar24 * 0x58 + *(longlong *)(lVar18 + 0x28);
  piVar28 = (int *)((longlong)piVar4 - (longlong)piVar24);
  if (piVar4 < piVar24) {
    piVar28 = piVar27;
  }
  if (piVar4 < piVar24) {
    lVar19 = 8;
  }
  piVar25 = (int *)(lVar19 + -0x58 + (longlong)piVar28 * 0x58);
  if (piVar4 <= piVar24) {
    piVar25 = piVar29;
  }
  piVar20 = (int *)((longlong)piVar28 + (longlong)piVar20);
  if (piVar15 < piVar3 || piVar24 < piVar4) {
    piVar20 = piVar27;
  }
  *(ulonglong *)*param_2 = *(longlong *)(lVar18 + 0x40) - (longlong)piVar20;
  if (piVar15 < piVar3 || piVar24 < piVar4) {
    uVar35 = *param_1;
    *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
    uVar5 = *param_3;
    *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
    if (*piVar25 != 0) {
      uVar6 = *param_4;
      if (*piVar25 == 1) {
        lVar18 = 0x20;
        lVar19 = 0x10;
      }
      else {
        lVar18 = 0x18;
        lVar19 = 8;
      }
      uVar7 = *(undefined8 *)((longlong)piVar25 + lVar19);
      uStack_100 = *(undefined8 *)((longlong)piVar25 + lVar18);
      uVar2 = *(undefined8 *)((longlong)piVar25 + lVar18 + 8);
      fVar51 = (float)uVar2;
      fVar52 = (float)((ulonglong)uVar2 >> 0x20);
      uVar2 = *(undefined8 *)((longlong)piVar25 + lVar18 + 0x10);
      puVar1 = (undefined8 *)((longlong)piVar25 + lVar18 + 8);
      uStack_f8 = *puVar1;
      uStack_f0 = puVar1[1];
      uStack_178 = (undefined1 (*) [16])0x0;
      puStack_168 = (undefined1 *)0x1;
      uStack_170 = (undefined1 (*) [16])uVar7;
      pdb_1414d0570(uVar6,&uStack_178,2,uVar5,param_5,&UNK_14301bc66,0xe);
      pdb_140c419b0(uVar6,uVar7,uVar5);
      lVar18 = pdb_140b0e4b0(uVar35,uVar7);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14301bcb8);
      }
      piVar15 = (int *)pdb_140c33160(lVar18);
      if (piVar15 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14301bcd0);
      }
      if (*piVar15 != 1) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_14301bce8,0x28,&UNK_14301bd10);
      }
      uStack_188 = *(undefined8 *)(piVar15 + 5);
      uStack_198 = *(undefined8 *)(piVar15 + 1);
      uStack_190 = *(undefined8 *)(piVar15 + 3);
      lStack_150 = pdb_140c3f000(uVar5,uVar7);
      if (lStack_150 != 0) {
        uStack_148 = uVar6;
        pdb_140df1c10(&uStack_178,&uStack_100);
        uVar35 = uStack_190;
        fVar60 = (float)uStack_178;
        fVar58 = uStack_178._4_4_;
        fVar59 = (float)uStack_170;
        fVar57 = uStack_170._4_4_;
        pdb_140df1c10(&uStack_178,&uStack_198);
        fVar10 = (float)uStack_178;
        fVar11 = uStack_178._4_4_;
        fVar12 = (float)uStack_170;
        fVar13 = uStack_170._4_4_;
        uStack_178 = *(undefined1 (**) [16])(lStack_150 + 0x30);
        puStack_168 = *uStack_178 + *(longlong *)(lStack_150 + 0x38) + 1;
        auVar36 = *uStack_178;
        uStack_160 = ~((ushort)(SUB161(auVar36 >> 7,0) & 1) |
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
                      (ushort)(byte)(auVar36[0xf] >> 7) << 0xf);
        uStack_158 = *(undefined8 *)(lStack_150 + 0x48);
        lStack_150 = lStack_150 + 0x60;
        uStack_170 = uStack_178 + 1;
        pdb_140c441a0(aiStack_138,&uStack_178);
        if (lStack_130 != 0) {
          fVar31 = fVar57 * fVar60;
          fVar41 = fVar59 * fVar58;
          auVar36._0_4_ = fVar31 - fVar41;
          auVar36._4_4_ = fVar31 - fVar41;
          auVar36._8_4_ = fVar31 - fVar41;
          auVar36._12_4_ = fVar31 - fVar41;
          auVar36 = divps(_DAT_14301bc40,auVar36);
          fVar57 = fVar57 * auVar36._0_4_;
          fVar58 = fVar58 * auVar36._4_4_;
          fVar59 = fVar59 * auVar36._8_4_;
          fVar60 = fVar60 * auVar36._12_4_;
          fVar31 = fVar52 * fVar59;
          fVar41 = fVar52 * fVar60;
          fVar61 = fVar31 + fVar51 * fVar57;
          fVar62 = fVar41 + fVar51 * fVar58;
          fVar48 = (float)((ulonglong)uVar35 >> 0x20);
          fVar47 = (float)uVar35;
          fVar53 = (float)uVar2 * _DAT_142e36f60;
          fVar54 = (float)((ulonglong)uVar2 >> 0x20) * _UNK_142e36f64;
          fVar55 = _UNK_142e36f68 * 0.0;
          fVar56 = _UNK_142e36f6c * 0.0;
          do {
            iVar14 = aiStack_138[0];
            iStack_1b0 = aiStack_138[0];
            uStack_108 = uStack_120;
            lStack_118 = lStack_130;
            uStack_110 = uStack_128;
            lVar19 = pdb_140315970(&lStack_118);
            lVar18 = (ulonglong)*(byte *)(lVar19 + 0x32) - 1;
            if ((ulonglong)*(byte *)(lVar19 + 0x32) < 2) {
              lVar18 = 0;
            }
            if (lVar18 == 0) {
              lVar18 = pdb_140c413c0(&lStack_118);
              puVar16 = (undefined4 *)pdb_140901050(lVar18 + 0x10);
              lVar18 = pdb_140c3e440(uStack_148,uVar7);
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc8150(&UNK_14301bd28);
              }
              if (*(longlong *)(lVar18 + 0x48) != 0) {
                uVar17 = pdb_1400aede0(lVar18 + 0x50,&iStack_1b0);
                lVar19 = *(longlong *)(lVar18 + 0x30);
                bVar30 = (byte)(uVar17 >> 0x39);
                auVar36 = ZEXT216(CONCAT11(bVar30,bVar30));
                auVar36 = pshuflw(auVar36,auVar36,0);
                lVar21 = 0;
                while( true ) {
                  uVar17 = uVar17 & *(ulonglong *)(lVar18 + 0x38);
                  auVar44 = *(undefined1 (*) [16])(lVar19 + uVar17);
                  auVar46[0] = -(auVar44[0] == auVar36[0]);
                  auVar46[1] = -(auVar44[1] == auVar36[1]);
                  auVar46[2] = -(auVar44[2] == auVar36[2]);
                  auVar46[3] = -(auVar44[3] == auVar36[3]);
                  auVar46[4] = -(auVar44[4] == auVar36[4]);
                  auVar46[5] = -(auVar44[5] == auVar36[5]);
                  auVar46[6] = -(auVar44[6] == auVar36[6]);
                  auVar46[7] = -(auVar44[7] == auVar36[7]);
                  auVar46[8] = -(auVar44[8] == auVar36[0]);
                  auVar46[9] = -(auVar44[9] == auVar36[1]);
                  auVar46[10] = -(auVar44[10] == auVar36[2]);
                  auVar46[0xb] = -(auVar44[0xb] == auVar36[3]);
                  auVar46[0xc] = -(auVar44[0xc] == auVar36[4]);
                  auVar46[0xd] = -(auVar44[0xd] == auVar36[5]);
                  auVar46[0xe] = -(auVar44[0xe] == auVar36[6]);
                  auVar46[0xf] = -(auVar44[0xf] == auVar36[7]);
                  uVar23 = (ushort)(SUB161(auVar46 >> 7,0) & 1) |
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
                  uVar22 = (uint)uVar23;
                  while (uVar23 != 0) {
                    uVar8 = 0;
                    for (uVar9 = uVar22; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                      uVar8 = uVar8 + 1;
                    }
                    lVar26 = (uVar8 + uVar17 & *(ulonglong *)(lVar18 + 0x38)) * -0x68;
                    if (iVar14 == *(int *)(lVar19 + -0x68 + lVar26)) {
                      lVar18 = pdb_140901130(lVar19 + lVar26 + -0x60,&UNK_14301bd58);
                      fVar32 = *(float *)(lVar18 + 0x14);
                      fVar50 = *(float *)(lVar18 + 0x1c);
                      uVar17 = pdb_140b86c80(*(undefined1 *)(lVar18 + 0x20));
                      if ((uVar17 & 1) == 0) {
                        fVar49 = fVar50 * fVar59;
                        fVar50 = fVar50 * fVar60;
                        fVar33 = (fVar49 + fVar32 * fVar57) - fVar61;
                        fVar32 = (fVar50 + fVar32 * fVar58) - fVar62;
                        auVar45._4_4_ = fVar32;
                        auVar45._0_4_ = fVar33;
                        auVar45._8_4_ = (fVar49 + fVar49) - (fVar31 + fVar31);
                        auVar45._12_4_ = (fVar50 + fVar50) - (fVar41 + fVar41);
                        auVar44._4_4_ = fVar54;
                        auVar44._0_4_ = fVar53;
                        auVar44._8_4_ = fVar55;
                        auVar44._12_4_ = fVar56;
                        auVar36 = divps(auVar45,auVar44);
                        auVar36 = maxps(auVar36,_DAT_142e37960);
                        auVar36 = minps(auVar36,_DAT_142e37950);
                        if ((float)((uint)auVar36._0_4_ & _DAT_142e377e0) <=
                            (float)((uint)auVar36._4_4_ & _UNK_142e377e4)) {
                          fVar32 = auVar36._4_4_ * uStack_188._4_4_ * _DAT_142e36f50 +
                                   ((fVar48 * fVar60 + fVar47 * fVar58) - fVar62);
                        }
                        else {
                          fVar33 = auVar36._0_4_ * (float)uStack_188 * _DAT_142e36f50 +
                                   ((fVar48 * fVar59 + fVar47 * fVar57) - fVar61);
                        }
                        uStack_140 = CONCAT44(fVar32 * fVar13 + fVar33 * fVar11 + fVar52,
                                              fVar32 * fVar12 + fVar33 * fVar10 + fVar51);
                        pdb_140df4540(&uStack_1ac,&uStack_140);
                        puVar16[7] = uStack_1a4;
                        *(undefined8 *)(puVar16 + 5) = uStack_1ac;
                        fVar32 = (float)pdb_140df2570(&uStack_198);
                        auVar39._0_8_ = pdb_140df3ee0(&uStack_198);
                        auVar39._8_8_ = extraout_XMM0_Qb_00;
                        auVar40._4_12_ = auVar39._4_12_;
                        auVar40._0_4_ = (float)auVar39._0_8_ * fVar32;
                        uVar35 = auVar40._0_8_;
                        uVar42 = puVar16[1];
                      }
                      else {
                        uStack_1a0 = pdb_140df3e10(&uStack_198);
                        uStack_19c = auVar44._0_4_;
                        pdb_140df4540(&uStack_1ac,&uStack_1a0);
                        puVar16[7] = uStack_1a4;
                        *(undefined8 *)(puVar16 + 5) = uStack_1ac;
                        fVar32 = (float)pdb_140df2570(&uStack_198);
                        auVar37._0_8_ = pdb_140df3ee0(&uStack_198);
                        auVar37._8_8_ = extraout_XMM0_Qb;
                        auVar38._4_12_ = auVar37._4_12_;
                        auVar38._0_4_ = (float)auVar37._0_8_ * fVar32;
                        uVar35 = auVar38._0_8_;
                        uVar42 = puVar16[6];
                      }
                      uVar34 = pdb_14007ee60(uVar35);
                      *puVar16 = uVar34;
                      puVar16[1] = uVar42;
                      goto LAB_1408e75a9;
                    }
                    uVar23 = (ushort)(uVar22 - 1) & (ushort)uVar22;
                    uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar23);
                  }
                  auVar43[0] = -(auVar44[0] == -1);
                  auVar43[1] = -(auVar44[1] == -1);
                  auVar43[2] = -(auVar44[2] == -1);
                  auVar43[3] = -(auVar44[3] == -1);
                  auVar43[4] = -(auVar44[4] == -1);
                  auVar43[5] = -(auVar44[5] == -1);
                  auVar43[6] = -(auVar44[6] == -1);
                  auVar43[7] = -(auVar44[7] == -1);
                  auVar43[8] = -(auVar44[8] == -1);
                  auVar43[9] = -(auVar44[9] == -1);
                  auVar43[10] = -(auVar44[10] == -1);
                  auVar43[0xb] = -(auVar44[0xb] == -1);
                  auVar43[0xc] = -(auVar44[0xc] == -1);
                  auVar43[0xd] = -(auVar44[0xd] == -1);
                  auVar43[0xe] = -(auVar44[0xe] == -1);
                  auVar43[0xf] = -(auVar44[0xf] == -1);
                  if ((((((((((((((((SUB161(auVar43 >> 7,0) & 1) != 0 ||
                                   (SUB161(auVar43 >> 0xf,0) & 1) != 0) ||
                                  (SUB161(auVar43 >> 0x17,0) & 1) != 0) ||
                                 (SUB161(auVar43 >> 0x1f,0) & 1) != 0) ||
                                (SUB161(auVar43 >> 0x27,0) & 1) != 0) ||
                               (SUB161(auVar43 >> 0x2f,0) & 1) != 0) ||
                              (SUB161(auVar43 >> 0x37,0) & 1) != 0) ||
                             (SUB161(auVar43 >> 0x3f,0) & 1) != 0) ||
                            (SUB161(auVar43 >> 0x47,0) & 1) != 0) ||
                           (SUB161(auVar43 >> 0x4f,0) & 1) != 0) ||
                          (SUB161(auVar43 >> 0x57,0) & 1) != 0) ||
                         (SUB161(auVar43 >> 0x5f,0) & 1) != 0) ||
                        (SUB161(auVar43 >> 0x67,0) & 1) != 0) ||
                       (SUB161(auVar43 >> 0x6f,0) & 1) != 0) || (SUB161(auVar43 >> 0x77,0) & 1) != 0
                      ) || auVar43[0xf] < '\0') break;
                  uVar17 = uVar17 + lVar21 + 0x10;
                  lVar21 = lVar21 + 0x10;
                }
              }
              pdb_142dc8110(&UNK_14301bc50,0x16,&UNK_14301bd40);
LAB_1408e78fc:
                    /* WARNING: Subroutine does not return */
              pdb_142dc83b0(&UNK_14301bce8,0x28,&UNK_14301bd70);
            }
            if ((int)lVar18 != 1) goto LAB_1408e78fc;
LAB_1408e75a9:
            pdb_140c441a0(aiStack_138,&uStack_178);
          } while (lStack_130 != 0);
        }
      }
    }
  }
  return;
}

