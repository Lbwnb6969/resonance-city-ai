// VA 0x140926dd0, PDB extent 1648 bytes
// country_core::resources::history::terrain_edit::TerrainEdit::revert
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/terrain_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::history::terrain_edit::TerrainEdit::revert
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/terrain_edit.rs
   Extent: 1648 */

void pdb_140926dd0(ulonglong *param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,float param_6)

{
  char *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ushort uVar15;
  longlong lVar16;
  byte bVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  undefined8 uStack_e0;
  longlong lStack_d8;
  ulonglong uStack_d0;
  ulonglong uStack_c8;
  longlong lStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  ulonglong *puStack_80;
  undefined4 *puStack_78;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  uVar9 = 2;
  if ((longlong)*param_1 < 0) {
    uVar9 = *param_1 ^ 0x8000000000000000;
  }
  if (uVar9 == 0) {
    if (_DAT_143020f30 <= param_6) {
      iVar12 = (int)param_1[4];
      uStack_90 = (ulonglong *)CONCAT44(uStack_90._4_4_,iVar12);
      if (*(longlong *)(param_2 + 0x20) != 0) {
        uVar9 = pdb_1400aede0(param_2 + 0x28,&uStack_90);
        lVar11 = *(longlong *)(param_2 + 8);
        bVar17 = (byte)(uVar9 >> 0x39);
        auVar19 = ZEXT216(CONCAT11(bVar17,bVar17));
        auVar19 = pshuflw(auVar19,auVar19,0);
        lVar13 = 0;
        while( true ) {
          uVar9 = uVar9 & *(ulonglong *)(param_2 + 0x10);
          pcVar1 = (char *)(lVar11 + uVar9);
          auVar23[0] = -(*pcVar1 == auVar19[0]);
          auVar23[1] = -(pcVar1[1] == auVar19[1]);
          auVar23[2] = -(pcVar1[2] == auVar19[2]);
          auVar23[3] = -(pcVar1[3] == auVar19[3]);
          auVar23[4] = -(pcVar1[4] == auVar19[4]);
          auVar23[5] = -(pcVar1[5] == auVar19[5]);
          auVar23[6] = -(pcVar1[6] == auVar19[6]);
          auVar23[7] = -(pcVar1[7] == auVar19[7]);
          auVar23[8] = -(pcVar1[8] == auVar19[0]);
          auVar23[9] = -(pcVar1[9] == auVar19[1]);
          auVar23[10] = -(pcVar1[10] == auVar19[2]);
          auVar23[0xb] = -(pcVar1[0xb] == auVar19[3]);
          auVar23[0xc] = -(pcVar1[0xc] == auVar19[4]);
          auVar23[0xd] = -(pcVar1[0xd] == auVar19[5]);
          auVar23[0xe] = -(pcVar1[0xe] == auVar19[6]);
          auVar23[0xf] = -(pcVar1[0xf] == auVar19[7]);
          uVar15 = (ushort)(SUB161(auVar23 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar23[0xf] >> 7) << 0xf;
          uVar14 = (uint)uVar15;
          while (uVar15 != 0) {
            uVar7 = 0;
            for (uVar8 = uVar14; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar7 = uVar7 + 1;
            }
            lVar16 = (uVar7 + uVar9 & *(ulonglong *)(param_2 + 0x10)) * -0x30;
            if (iVar12 == *(int *)(lVar11 + -0x30 + lVar16)) {
              *(undefined4 *)(lVar11 + lVar16 + -8) = 0;
              goto LAB_1409272c0;
            }
            uVar15 = (ushort)(uVar14 - 1) & (ushort)uVar14;
            uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar15);
          }
          auVar21[0] = -(*pcVar1 == -1);
          auVar21[1] = -(pcVar1[1] == -1);
          auVar21[2] = -(pcVar1[2] == -1);
          auVar21[3] = -(pcVar1[3] == -1);
          auVar21[4] = -(pcVar1[4] == -1);
          auVar21[5] = -(pcVar1[5] == -1);
          auVar21[6] = -(pcVar1[6] == -1);
          auVar21[7] = -(pcVar1[7] == -1);
          auVar21[8] = -(pcVar1[8] == -1);
          auVar21[9] = -(pcVar1[9] == -1);
          auVar21[10] = -(pcVar1[10] == -1);
          auVar21[0xb] = -(pcVar1[0xb] == -1);
          auVar21[0xc] = -(pcVar1[0xc] == -1);
          auVar21[0xd] = -(pcVar1[0xd] == -1);
          auVar21[0xe] = -(pcVar1[0xe] == -1);
          auVar21[0xf] = -(pcVar1[0xf] == -1);
          if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 || (SUB161(auVar21 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar21 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar21 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar21 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar21 >> 0x2f,0) & 1) != 0) || (SUB161(auVar21 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar21 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar21 >> 0x47,0) & 1) != 0) || (SUB161(auVar21 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar21 >> 0x57,0) & 1) != 0) || (SUB161(auVar21 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar21 >> 0x67,0) & 1) != 0) || (SUB161(auVar21 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar21 >> 0x77,0) & 1) != 0) || auVar21[0xf] < '\0') break;
          uVar9 = uVar9 + lVar13 + 0x10;
          lVar13 = lVar13 + 0x10;
        }
      }
      pcStack_88 = pdb_140927dd0;
      uStack_90 = param_1 + 4;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_143021488,&uStack_90,&UNK_1430214f0);
    }
    iVar12 = (int)param_1[4];
    uVar9 = param_1[2];
    uVar5 = param_1[3];
    fVar18 = (float)pdb_140926600(iVar12,uVar9,uVar5,_DAT_142e36f28 - param_6,param_2);
    fVar2 = *(float *)((longlong)param_1 + 0x24);
    if ((uVar5 == 0) || (uVar9 + uVar5 * 0xc == 0xc)) {
      uStack_a0 = 0;
      uStack_a8 = 0;
    }
    else {
      lVar11 = uVar9 + uVar5 * 0xc;
      uStack_90 = (ulonglong *)CONCAT44(*(undefined4 *)(lVar11 + -4),*(undefined4 *)(lVar11 + -0xc))
      ;
      pdb_140df4540(&uStack_a8,&uStack_90);
    }
    *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
    lVar11 = *param_3;
    lVar13 = *(longlong *)(lVar11 + 0x30);
    uVar6 = *(undefined8 *)(lVar11 + 0x40);
    if (lVar13 == *(longlong *)(lVar11 + 0x20)) {
      pdb_142d7ede0(lVar11 + 0x20);
    }
    lVar16 = *(longlong *)(lVar11 + 0x28);
    *(undefined4 *)(lVar16 + lVar13 * 0x28) = 0;
    *(undefined4 *)(lVar16 + 8 + lVar13 * 0x28) = 1;
    *(float *)(lVar16 + 0xc + lVar13 * 0x28) = fVar18 * fVar2;
    *(undefined8 *)(lVar16 + 0x10 + lVar13 * 0x28) = uStack_a8;
    *(undefined4 *)(lVar16 + 0x18 + lVar13 * 0x28) = uStack_a0;
    *(int *)(lVar16 + 0x1c + lVar13 * 0x28) = iVar12;
    *(undefined8 *)(lVar16 + 0x20 + lVar13 * 0x28) = uVar6;
    *(longlong *)(lVar11 + 0x30) = lVar13 + 1;
    *(longlong *)(lVar11 + 0x40) = *(longlong *)(lVar11 + 0x40) + 1;
LAB_1409272c0:
    *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
    lVar13 = *param_4;
    lVar11 = *(longlong *)(lVar13 + 0x30);
    uVar6 = *(undefined8 *)(lVar13 + 0x40);
    if (lVar11 == *(longlong *)(lVar13 + 0x20)) {
      pdb_142d7e980(lVar13 + 0x20);
    }
    lVar16 = *(longlong *)(lVar13 + 0x28);
    *(undefined8 *)(lVar16 + lVar11 * 0x10) = uVar6;
    *(int *)(lVar16 + 8 + lVar11 * 0x10) = iVar12;
  }
  else {
    if (uVar9 == 1) {
      fVar2 = *(float *)((longlong)param_1 + 0xc);
      fVar24 = _DAT_142e36f28 - param_6;
      fVar18 = *(float *)(param_1 + 2);
      iVar12 = (int)param_1[1];
      fVar3 = *(float *)(param_1 + 3);
      fVar4 = *(float *)((longlong)param_1 + 0x14);
      uStack_90 = (ulonglong *)CONCAT44(uStack_90._4_4_,iVar12);
      if (*(longlong *)(param_2 + 0x20) != 0) {
        uVar9 = pdb_1400aede0(param_2 + 0x28,&uStack_90);
        lVar11 = *(longlong *)(param_2 + 8);
        bVar17 = (byte)(uVar9 >> 0x39);
        auVar19 = ZEXT216(CONCAT11(bVar17,bVar17));
        auVar19 = pshuflw(auVar19,auVar19,0);
        lVar13 = 0;
        while( true ) {
          uVar9 = uVar9 & *(ulonglong *)(param_2 + 0x10);
          pcVar1 = (char *)(lVar11 + uVar9);
          auVar22[0] = -(*pcVar1 == auVar19[0]);
          auVar22[1] = -(pcVar1[1] == auVar19[1]);
          auVar22[2] = -(pcVar1[2] == auVar19[2]);
          auVar22[3] = -(pcVar1[3] == auVar19[3]);
          auVar22[4] = -(pcVar1[4] == auVar19[4]);
          auVar22[5] = -(pcVar1[5] == auVar19[5]);
          auVar22[6] = -(pcVar1[6] == auVar19[6]);
          auVar22[7] = -(pcVar1[7] == auVar19[7]);
          auVar22[8] = -(pcVar1[8] == auVar19[0]);
          auVar22[9] = -(pcVar1[9] == auVar19[1]);
          auVar22[10] = -(pcVar1[10] == auVar19[2]);
          auVar22[0xb] = -(pcVar1[0xb] == auVar19[3]);
          auVar22[0xc] = -(pcVar1[0xc] == auVar19[4]);
          auVar22[0xd] = -(pcVar1[0xd] == auVar19[5]);
          auVar22[0xe] = -(pcVar1[0xe] == auVar19[6]);
          auVar22[0xf] = -(pcVar1[0xf] == auVar19[7]);
          uVar15 = (ushort)(SUB161(auVar22 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar22[0xf] >> 7) << 0xf;
          uVar14 = (uint)uVar15;
          while (uVar15 != 0) {
            uVar7 = 0;
            for (uVar8 = uVar14; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar7 = uVar7 + 1;
            }
            lVar16 = (uVar7 + uVar9 & *(ulonglong *)(param_2 + 0x10)) * -0x30;
            if (iVar12 == *(int *)(lVar11 + -0x30 + lVar16)) {
              lVar11 = lVar11 + lVar16;
              uVar9 = *(ulonglong *)(lVar11 + -0x18);
              if (uVar9 == 0) goto LAB_1409271c1;
              lVar11 = *(longlong *)(lVar11 + -0x20);
              uVar9 = uVar9 >> 1;
              uStack_90 = (ulonglong *)
                          CONCAT44(*(undefined4 *)(lVar11 + 8 + uVar9 * 0xc),
                                   *(undefined4 *)(lVar11 + uVar9 * 0xc));
              pdb_140df4540(&uStack_b8,&uStack_90);
              goto LAB_1409271d0;
            }
            uVar15 = (ushort)(uVar14 - 1) & (ushort)uVar14;
            uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar15);
          }
          auVar20[0] = -(*pcVar1 == -1);
          auVar20[1] = -(pcVar1[1] == -1);
          auVar20[2] = -(pcVar1[2] == -1);
          auVar20[3] = -(pcVar1[3] == -1);
          auVar20[4] = -(pcVar1[4] == -1);
          auVar20[5] = -(pcVar1[5] == -1);
          auVar20[6] = -(pcVar1[6] == -1);
          auVar20[7] = -(pcVar1[7] == -1);
          auVar20[8] = -(pcVar1[8] == -1);
          auVar20[9] = -(pcVar1[9] == -1);
          auVar20[10] = -(pcVar1[10] == -1);
          auVar20[0xb] = -(pcVar1[0xb] == -1);
          auVar20[0xc] = -(pcVar1[0xc] == -1);
          auVar20[0xd] = -(pcVar1[0xd] == -1);
          auVar20[0xe] = -(pcVar1[0xe] == -1);
          auVar20[0xf] = -(pcVar1[0xf] == -1);
          if ((((((((((((((((SUB161(auVar20 >> 7,0) & 1) != 0 || (SUB161(auVar20 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar20 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar20 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar20 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar20 >> 0x2f,0) & 1) != 0) || (SUB161(auVar20 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar20 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar20 >> 0x47,0) & 1) != 0) || (SUB161(auVar20 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar20 >> 0x57,0) & 1) != 0) || (SUB161(auVar20 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar20 >> 0x67,0) & 1) != 0) || (SUB161(auVar20 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar20 >> 0x77,0) & 1) != 0) || auVar20[0xf] < '\0') break;
          uVar9 = uVar9 + lVar13 + 0x10;
          lVar13 = lVar13 + 0x10;
        }
      }
LAB_1409271c1:
      uStack_b0 = 0;
      uStack_b8 = 0;
LAB_1409271d0:
      *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
      lVar13 = *param_3;
      lVar11 = *(longlong *)(lVar13 + 0x30);
      uVar6 = *(undefined8 *)(lVar13 + 0x40);
      if (lVar11 == *(longlong *)(lVar13 + 0x20)) {
        pdb_142d7ede0(lVar13 + 0x20);
      }
      lVar16 = *(longlong *)(lVar13 + 0x28);
      *(uint *)(lVar16 + lVar11 * 0x28) = -(uint)(fVar3 != fVar4) & 1;
      *(float *)(lVar16 + 4 + lVar11 * 0x28) = fVar24 * fVar3 + param_6 * fVar4;
      *(uint *)(lVar16 + 8 + lVar11 * 0x28) = -(uint)(fVar18 != fVar2) & 1;
      *(float *)(lVar16 + 0xc + lVar11 * 0x28) = fVar24 * fVar18 + param_6 * fVar2;
      *(undefined8 *)(lVar16 + 0x10 + lVar11 * 0x28) = uStack_b8;
      *(undefined4 *)(lVar16 + 0x18 + lVar11 * 0x28) = uStack_b0;
      *(int *)(lVar16 + 0x1c + lVar11 * 0x28) = iVar12;
      *(undefined8 *)(lVar16 + 0x20 + lVar11 * 0x28) = uVar6;
      *(longlong *)(lVar13 + 0x30) = lVar11 + 1;
      goto LAB_140927301;
    }
    uStack_9c = pdb_140dedcd0(&UNK_1430214d0);
    uStack_90 = (ulonglong *)param_1[1];
    pcStack_88 = (code *)((longlong)uStack_90 + param_1[2] * 0xc);
    puStack_78 = &uStack_9c;
    puStack_80 = param_1 + 3;
    pdb_1415ec3a0(&uStack_e0,&uStack_90);
    uStack_c8 = uStack_d0;
    if (uStack_d0 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(0,0,&UNK_1430214d8);
    }
    uStack_98 = uStack_e0;
    uStack_90 = *(ulonglong **)(lStack_d8 + (uStack_d0 >> 1) * 0xc);
    lStack_c0 = lStack_d8;
    pcStack_88 = (code *)CONCAT44(pcStack_88._4_4_,
                                  *(undefined4 *)(lStack_d8 + 8 + (uStack_d0 >> 1) * 0xc));
    uVar9 = param_1[4];
    *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
    lVar13 = *param_5;
    lVar11 = *(longlong *)(lVar13 + 0x30);
    uVar6 = *(undefined8 *)(lVar13 + 0x40);
    if (lVar11 == *(longlong *)(lVar13 + 0x20)) {
      pdb_142d7e7c0(lVar13 + 0x20);
    }
    lVar16 = *(longlong *)(lVar13 + 0x28);
    lVar10 = lVar11 * 0x30;
    *(undefined8 *)(lVar16 + lVar10) = uStack_98;
    *(longlong *)(lVar16 + 8 + lVar10) = lStack_c0;
    *(ulonglong *)(lVar16 + 0x10 + lVar10) = uStack_c8;
    *(ulonglong **)(lVar16 + 0x18 + lVar10) = uStack_90;
    *(undefined4 *)(lVar16 + 0x20 + lVar10) = pcStack_88._0_4_;
    *(int *)(lVar16 + 0x24 + lVar10) = (int)uVar9;
    *(undefined8 *)(lVar16 + 0x28 + lVar10) = uVar6;
  }
  *(longlong *)(lVar13 + 0x30) = lVar11 + 1;
LAB_140927301:
  *(longlong *)(lVar13 + 0x40) = *(longlong *)(lVar13 + 0x40) + 1;
  return;
}

