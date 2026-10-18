// VA 0x140bcc870, PDB extent 1176 bytes
// country_core::systems::wall::structure_outline::structure_outline::closure$1::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/structure_outline.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::structure_outline::structure_outline::closure$1::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/structure_outline.rs
   Extent: 1176 */

void pdb_140bcc870(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  float fVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  int *piVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  byte *pbVar11;
  longlong lVar12;
  uint uVar13;
  ushort uVar14;
  longlong lVar15;
  byte bVar16;
  undefined1 auVar17 [16];
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  longlong lStack_160;
  byte *pbStack_158;
  longlong lStack_150;
  longlong lStack_148;
  byte *pbStack_140;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  
  piVar4 = (int *)*param_2;
  if (*piVar4 == 1) {
    param_1[2] = *(undefined8 *)(piVar4 + 5);
    uVar2 = *(undefined8 *)(piVar4 + 3);
    *param_1 = *(undefined8 *)(piVar4 + 1);
    param_1[1] = uVar2;
    return;
  }
  plVar5 = *(longlong **)param_2[1];
  lVar6 = *(longlong *)param_2[2];
  lStack_160 = lVar6;
  if (plVar5[3] != 0) {
    uVar9 = pdb_1400af0a0(plVar5 + 4,&lStack_160);
    lVar10 = *plVar5;
    bVar16 = (byte)(uVar9 >> 0x39);
    auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
    auVar17 = pshuflw(auVar17,auVar17,0);
    lVar12 = 0;
    while( true ) {
      uVar9 = uVar9 & plVar5[1];
      auVar3 = *(undefined1 (*) [16])(lVar10 + uVar9);
      auVar20[0] = -(auVar3[0] == auVar17[0]);
      auVar20[1] = -(auVar3[1] == auVar17[1]);
      auVar20[2] = -(auVar3[2] == auVar17[2]);
      auVar20[3] = -(auVar3[3] == auVar17[3]);
      auVar20[4] = -(auVar3[4] == auVar17[4]);
      auVar20[5] = -(auVar3[5] == auVar17[5]);
      auVar20[6] = -(auVar3[6] == auVar17[6]);
      auVar20[7] = -(auVar3[7] == auVar17[7]);
      auVar20[8] = -(auVar3[8] == auVar17[0]);
      auVar20[9] = -(auVar3[9] == auVar17[1]);
      auVar20[10] = -(auVar3[10] == auVar17[2]);
      auVar20[0xb] = -(auVar3[0xb] == auVar17[3]);
      auVar20[0xc] = -(auVar3[0xc] == auVar17[4]);
      auVar20[0xd] = -(auVar3[0xd] == auVar17[5]);
      auVar20[0xe] = -(auVar3[0xe] == auVar17[6]);
      auVar20[0xf] = -(auVar3[0xf] == auVar17[7]);
      uVar14 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe | (ushort)(auVar20[0xf] >> 7) << 0xf;
      uVar13 = (uint)uVar14;
      while (uVar14 != 0) {
        uVar27 = 0;
        for (uVar8 = uVar13; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar27 = uVar27 + 1;
        }
        lVar15 = (uVar27 + uVar9 & plVar5[1]) * -0x2b0;
        if (lVar6 == *(longlong *)(lVar10 + -0x2b0 + lVar15)) {
          lVar10 = lVar10 + lVar15;
          if ((1 < *(ulonglong *)(lVar10 + -0x298)) && (0.0 < *(float *)(lVar10 + -0x278))) {
            if (*(longlong *)(lVar10 + -0x260) != 0) {
              uVar2 = **(undefined8 **)(lVar10 + -0x268);
              fVar22 = (float)uVar2;
              fVar23 = (float)((ulonglong)uVar2 >> 0x20);
              uVar13 = *(uint *)(*(undefined8 **)(lVar10 + -0x268) + 1);
              pdb_140defdf0(&lStack_160,param_3,lVar12,0);
              fVar28 = fVar22;
              fVar29 = fVar23;
              uVar27 = uVar13;
              if (lStack_150 != 0) {
                puVar7 = *(undefined8 **)param_2[4];
                uStack_e8 = *puVar7;
                uStack_f8 = puVar7[2];
                uStack_108 = puVar7[4];
                uStack_118 = puVar7[6];
                uVar2 = puVar7[0x10];
                uStack_120 = puVar7[0x11];
                pbVar11 = pbStack_158;
                fVar25 = fVar22;
                fVar26 = fVar23;
                fVar31 = fVar22;
                fVar32 = fVar23;
                fVar18 = _DAT_142f6e380;
                fVar21 = 0.0;
                do {
                  fVar22 = (float)*(undefined8 *)pbVar11;
                  fVar23 = (float)((ulonglong)*(undefined8 *)pbVar11 >> 0x20);
                  uStack_128._0_4_ = (float)uVar2;
                  uStack_128._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
                  fVar1 = *(float *)(pbVar11 + 8);
                  fVar28 = fVar1 * *(float *)(puVar7 + 0x14) +
                           fVar23 * *(float *)(puVar7 + 0x12) + fVar22 * (float)uStack_128 +
                           *(float *)(puVar7 + 0x16);
                  fVar29 = fVar1 * *(float *)((longlong)puVar7 + 0xa4) +
                           fVar23 * *(float *)((longlong)puVar7 + 0x94) + fVar22 * uStack_128._4_4_
                           + *(float *)((longlong)puVar7 + 0xb4);
                  fVar30 = fVar1 * *(float *)(puVar7 + 0x15) +
                           fVar23 * *(float *)(puVar7 + 0x13) + fVar22 * (float)uStack_120 +
                           *(float *)(puVar7 + 0x17);
                  uStack_e0._4_4_ = (float)((ulonglong)puVar7[1] >> 0x20);
                  uStack_f0._4_4_ = (float)((ulonglong)puVar7[3] >> 0x20);
                  uStack_100._4_4_ = (float)((ulonglong)puVar7[5] >> 0x20);
                  uStack_110._4_4_ = (float)((ulonglong)puVar7[7] >> 0x20);
                  fVar30 = (((fVar30 * (float)uStack_108 +
                              fVar29 * (float)uStack_f8 + fVar28 * (float)uStack_e8 +
                             (float)uStack_118) /
                            (fVar30 * uStack_100._4_4_ +
                             fVar29 * uStack_f0._4_4_ + fVar28 * uStack_e0._4_4_ + uStack_110._4_4_)
                            ) * _DAT_142e36f50 + _DAT_142e36f50) * (float)**(uint **)param_2[3];
                  fVar28 = fVar22;
                  fVar29 = fVar23;
                  if (fVar30 <= fVar21) {
                    fVar28 = fVar31;
                    fVar29 = fVar32;
                  }
                  if (fVar18 <= fVar30) {
                    fVar22 = fVar25;
                    fVar23 = fVar26;
                  }
                  fVar24 = fVar30;
                  if (fVar30 <= fVar21) {
                    fVar24 = fVar21;
                  }
                  uVar13 = ~-(uint)(fVar21 < fVar30) & uVar13 |
                           -(uint)(fVar21 < fVar30) & (uint)fVar1;
                  uVar27 = ~-(uint)(fVar30 < fVar18) & uVar27 |
                           (uint)fVar1 & -(uint)(fVar30 < fVar18);
                  if (fVar18 <= fVar30) {
                    fVar30 = fVar18;
                  }
                  pbVar11 = pbVar11 + 0xc;
                  fVar25 = fVar22;
                  fVar26 = fVar23;
                  fVar31 = fVar28;
                  fVar32 = fVar29;
                  fVar18 = fVar30;
                  fVar21 = fVar24;
                  uStack_128 = uVar2;
                  uStack_110 = puVar7[7];
                  uStack_100 = puVar7[5];
                  uStack_f0 = puVar7[3];
                  uStack_e0 = puVar7[1];
                } while (pbVar11 != pbStack_158 + lStack_150 * 0xc);
              }
              if (lStack_160 != 0) {
                pub_1406abac0(pbStack_158,lStack_160 * 0xc,4);
              }
              if (lStack_148 != 0) {
                pub_1406abac0(pbStack_140,lStack_148 << 2,4);
              }
              *piVar4 = 1;
              *(ulonglong *)(piVar4 + 1) = CONCAT44(fVar23,fVar22);
              piVar4[3] = uVar27;
              *(ulonglong *)(piVar4 + 4) = CONCAT44(fVar29,fVar28);
              piVar4[6] = uVar13;
              *param_1 = CONCAT44(fVar23,fVar22);
              *(uint *)(param_1 + 1) = uVar27;
              *(ulonglong *)((longlong)param_1 + 0xc) = CONCAT44(fVar29,fVar28);
              *(uint *)((longlong)param_1 + 0x14) = uVar13;
              return;
            }
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(0,0,&UNK_143063cf8);
          }
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_143063cc8);
        }
        uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
        uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
      }
      auVar19[0] = -(auVar3[0] == -1);
      auVar19[1] = -(auVar3[1] == -1);
      auVar19[2] = -(auVar3[2] == -1);
      auVar19[3] = -(auVar3[3] == -1);
      auVar19[4] = -(auVar3[4] == -1);
      auVar19[5] = -(auVar3[5] == -1);
      auVar19[6] = -(auVar3[6] == -1);
      auVar19[7] = -(auVar3[7] == -1);
      auVar19[8] = -(auVar3[8] == -1);
      auVar19[9] = -(auVar3[9] == -1);
      auVar19[10] = -(auVar3[10] == -1);
      auVar19[0xb] = -(auVar3[0xb] == -1);
      auVar19[0xc] = -(auVar3[0xc] == -1);
      auVar19[0xd] = -(auVar3[0xd] == -1);
      auVar19[0xe] = -(auVar3[0xe] == -1);
      auVar19[0xf] = -(auVar3[0xf] == -1);
      if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 || (SUB161(auVar19 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar19 >> 0x17,0) & 1) != 0) || (SUB161(auVar19 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar19 >> 0x27,0) & 1) != 0) || (SUB161(auVar19 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar19 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar19 >> 0x3f,0) & 1) != 0) || (SUB161(auVar19 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar19 >> 0x4f,0) & 1) != 0) || (SUB161(auVar19 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar19 >> 0x5f,0) & 1) != 0) || (SUB161(auVar19 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar19 >> 0x6f,0) & 1) != 0) || (SUB161(auVar19 >> 0x77,0) & 1) != 0) ||
          auVar19[0xf] < '\0') break;
      uVar9 = uVar9 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143063ce0);
}

