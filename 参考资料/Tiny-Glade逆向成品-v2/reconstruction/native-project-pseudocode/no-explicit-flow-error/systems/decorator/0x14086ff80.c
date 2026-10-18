// VA 0x14086ff80, PDB extent 1574 bytes
// system_decorator::ui_systems::ui_change_chimney_height::ui_change_chimney_height
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_change_chimney_height.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::ui_systems::ui_change_chimney_height::ui_change_chimney_height
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_change_chimney_height.rs
   Extent: 1574 */

void pdb_14086ff80(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 param_5,longlong *param_6,longlong *param_7,undefined8 *param_8,
                  undefined8 param_9,undefined8 *param_10,undefined8 param_11,longlong *param_12,
                  longlong *param_13)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  char cVar11;
  byte bVar12;
  byte bVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  byte bVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  ushort uVar20;
  longlong lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uStack_178;
  float fStack_170;
  undefined1 uStack_16c;
  undefined1 auStack_164 [4];
  float fStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulonglong uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_c8;
  undefined4 uStack_b8;
  float fStack_b4;
  undefined4 uStack_b0;
  undefined1 uStack_a8;
  undefined1 uStack_a6;
  undefined1 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  uint uStack_90;
  
  pcVar5 = (char *)*param_3;
  auVar24[0] = -(*pcVar5 == DAT_14300c7f0);
  auVar24[1] = -(pcVar5[1] == UNK_14300c7f1);
  auVar24[2] = -(pcVar5[2] == UNK_14300c7f2);
  auVar24[3] = -(pcVar5[3] == UNK_14300c7f3);
  auVar24[4] = -(pcVar5[4] == UNK_14300c7f4);
  auVar24[5] = -(pcVar5[5] == UNK_14300c7f5);
  auVar24[6] = -(pcVar5[6] == UNK_14300c7f6);
  auVar24[7] = -(pcVar5[7] == UNK_14300c7f7);
  auVar24[8] = -(pcVar5[8] == UNK_14300c7f8);
  auVar24[9] = -(pcVar5[9] == UNK_14300c7f9);
  auVar24[10] = -(pcVar5[10] == UNK_14300c7fa);
  auVar24[0xb] = -(pcVar5[0xb] == UNK_14300c7fb);
  auVar24[0xc] = -(pcVar5[0xc] == UNK_14300c7fc);
  auVar24[0xd] = -(pcVar5[0xd] == UNK_14300c7fd);
  auVar24[0xe] = -(pcVar5[0xe] == UNK_14300c7fe);
  auVar24[0xf] = -(pcVar5[0xf] == UNK_14300c7ff);
  if ((ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe | (ushort)(auVar24[0xf] >> 7) << 0xf)
      == 0xffff) {
    uVar23 = *param_4;
    puVar6 = (undefined4 *)param_4[2];
    uVar2 = *(undefined4 *)((longlong)param_4 + 0x1c);
    uStack_120 = param_4[4];
    puVar7 = (undefined4 *)param_4[6];
    uVar3 = *(undefined4 *)((longlong)param_4 + 0x3c);
    uStack_128 = param_4[8];
    uVar4 = *(uint *)(pcVar5 + 0x68);
    uVar22 = *(undefined8 *)(pcVar5 + 0x60);
    uStack_158 = pdb_1406d0830(*param_1);
    uStack_150 = uVar22;
    cVar11 = pdb_1408ffaf0(&uStack_158);
    if (cVar11 != '\0') {
      param_7 = (longlong *)*param_7;
      uStack_118 = CONCAT44(uStack_118._4_4_,uVar4);
      if (param_7[3] != 0) {
        uVar14 = pdb_1400aede0(param_7 + 4,&uStack_118);
        bVar12 = (byte)(uVar14 >> 0x39);
        auVar24 = ZEXT216(CONCAT11(bVar12,bVar12));
        auVar24 = pshuflw(auVar24,auVar24,0);
        lVar18 = 0;
        while( true ) {
          uVar14 = uVar14 & param_7[1];
          auVar1 = *(undefined1 (*) [16])(*param_7 + uVar14);
          auVar26[0] = -(auVar1[0] == auVar24[0]);
          auVar26[1] = -(auVar1[1] == auVar24[1]);
          auVar26[2] = -(auVar1[2] == auVar24[2]);
          auVar26[3] = -(auVar1[3] == auVar24[3]);
          auVar26[4] = -(auVar1[4] == auVar24[4]);
          auVar26[5] = -(auVar1[5] == auVar24[5]);
          auVar26[6] = -(auVar1[6] == auVar24[6]);
          auVar26[7] = -(auVar1[7] == auVar24[7]);
          auVar26[8] = -(auVar1[8] == auVar24[0]);
          auVar26[9] = -(auVar1[9] == auVar24[1]);
          auVar26[10] = -(auVar1[10] == auVar24[2]);
          auVar26[0xb] = -(auVar1[0xb] == auVar24[3]);
          auVar26[0xc] = -(auVar1[0xc] == auVar24[4]);
          auVar26[0xd] = -(auVar1[0xd] == auVar24[5]);
          auVar26[0xe] = -(auVar1[0xe] == auVar24[6]);
          auVar26[0xf] = -(auVar1[0xf] == auVar24[7]);
          uVar20 = (ushort)(SUB161(auVar26 >> 7,0) & 1) |
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
                   (ushort)(auVar26[0xf] >> 7) << 0xf;
          uVar19 = (uint)uVar20;
          while (uVar20 != 0) {
            uVar9 = 0;
            for (uVar10 = uVar19; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
              uVar9 = uVar9 + 1;
            }
            lVar21 = *param_7 + (uVar9 + uVar14 & param_7[1]) * -0x10;
            if (uVar4 == *(uint *)(lVar21 + -0x10)) {
              lVar18 = *(longlong *)(*(longlong *)(lVar21 + -8) + 0x158);
              if (lVar18 == 0) {
                return;
              }
              bVar12 = pdb_1408ffab0(&uStack_158);
              if (bVar12 < 2) {
                *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
                *(undefined1 *)(*param_6 + 0x48) = 1;
              }
              uVar14 = (ulonglong)uVar4;
              uStack_130 = pdb_140c3d2c0(uVar23);
              uStack_138 = uVar14;
              puVar15 = (undefined8 *)pdb_140c3d060(uVar23,uStack_130,uVar14,uVar4);
              if (puVar15 != (undefined8 *)0x0) {
                uStack_140 = *puVar15;
                uStack_148 = puVar15[1];
                bVar13 = pdb_1408ffab0(&uStack_158);
                bVar16 = 3;
                if (1 < bVar13) {
                  bVar16 = bVar13 - 2;
                }
                if (bVar16 - 2 < 2) {
                  pdb_140bce520(&uStack_178,*param_10);
                  uVar22 = pdb_140bce550(&uStack_178);
                  uStack_110 = *(undefined4 *)(param_8 + 1);
                  uStack_118 = *param_8;
                  uStack_10c = 0;
                  uStack_108 = 0x3f800000;
                  uStack_104 = 0;
                  pdb_140bce5a0(auStack_164,uVar22);
                  fVar30 = (fStack_160 - *(float *)((longlong)param_8 + 4)) -
                           *(float *)((longlong)param_8 + 0xc);
                  fVar28 = fVar30 * 0.0 + (float)*param_8;
                  fVar29 = fVar30 + (float)((ulonglong)*param_8 >> 0x20);
                  fVar27 = fVar30 * 0.0 + *(float *)(param_8 + 1);
                  uStack_118 = uStack_130;
                  uStack_110 = (undefined4)uStack_138;
                  uStack_10c = (undefined4)(uStack_138 >> 0x20);
                  uStack_108 = 3;
                  uStack_104 = 0;
                  uStack_c8 = 8;
                  uStack_b8 = 1;
                  uStack_b0 = 0;
                  uStack_a8 = 0;
                  uStack_a6 = 0;
                  uStack_a4 = 2;
                  uStack_a0 = uStack_140;
                  uStack_98 = uStack_148;
                  uStack_178 = CONCAT44(fVar29,fVar28);
                  uStack_16c = 0;
                  *puVar6 = uVar2;
                  *puVar7 = uVar3;
                  *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
                  fStack_170 = fVar27;
                  fStack_b4 = fVar30;
                  uStack_90 = uVar4;
                  pdb_1414c40f0(&uStack_118,1 < bVar12,&uStack_178,uVar23,uStack_120,*param_6,
                                param_5,uStack_128);
                  fVar31 = (float)((uint)(*(float *)(lVar18 + 0x14) -
                                         (fVar30 + *(float *)(lVar18 + 0x24))) & _DAT_142e377e0);
                  fVar30 = *(float *)(*param_13 + 0x28);
                  *(undefined4 *)param_12[2] = *(undefined4 *)((longlong)param_12 + 0x1c);
                  lVar18 = *param_12;
                  lVar21 = *(longlong *)(lVar18 + 0x30);
                  uVar23 = *(undefined8 *)(lVar18 + 0x40);
                  if (lVar21 == *(longlong *)(lVar18 + 0x20)) {
                    pdb_142d7e7c0(lVar18 + 0x20);
                  }
                  lVar8 = *(longlong *)(lVar18 + 0x28);
                  lVar17 = lVar21 * 0x30;
                  *(undefined8 *)(lVar8 + lVar17) = 0x1b;
                  *(float *)(lVar8 + 8 + lVar17) = fVar31 / fVar30;
                  *(ulonglong *)(lVar8 + 0x18 + lVar17) = CONCAT44(fVar29,fVar28);
                  *(float *)(lVar8 + 0x20 + lVar17) = fVar27;
                  *(undefined1 *)(lVar8 + 0x24 + lVar17) = 0;
                  *(undefined8 *)(lVar8 + 0x28 + lVar17) = uVar23;
                  *(longlong *)(lVar18 + 0x30) = lVar21 + 1;
                  *(longlong *)(lVar18 + 0x40) = *(longlong *)(lVar18 + 0x40) + 1;
                  return;
                }
                if (bVar16 == 0) {
                  pdb_14086f880(lVar18,*param_2,uVar4);
                  return;
                }
                pdb_14086f880(lVar18,*param_2,uVar4);
                pdb_140df4540(&uStack_118,lVar18 + 8);
                *(undefined4 *)(param_8 + 1) = uStack_110;
                *param_8 = uStack_118;
                pdb_140bce520(&uStack_178,*param_10);
                uVar23 = pdb_140bce550(&uStack_178);
                uStack_110 = *(undefined4 *)(param_8 + 1);
                uStack_118 = *param_8;
                uStack_10c = 0;
                uStack_108 = 0x3f800000;
                uStack_104 = 0;
                pdb_140bce5a0(auStack_164,uVar23);
                *(float *)((longlong)param_8 + 0xc) = fStack_160 - *(float *)(lVar18 + 0x14);
                return;
              }
                    /* WARNING: Subroutine does not return */
              pdb_142dc8150(&UNK_14300e148);
            }
            uVar20 = (ushort)(uVar19 - 1) & (ushort)uVar19;
            uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar20);
          }
          auVar25[0] = -(auVar1[0] == -1);
          auVar25[1] = -(auVar1[1] == -1);
          auVar25[2] = -(auVar1[2] == -1);
          auVar25[3] = -(auVar1[3] == -1);
          auVar25[4] = -(auVar1[4] == -1);
          auVar25[5] = -(auVar1[5] == -1);
          auVar25[6] = -(auVar1[6] == -1);
          auVar25[7] = -(auVar1[7] == -1);
          auVar25[8] = -(auVar1[8] == -1);
          auVar25[9] = -(auVar1[9] == -1);
          auVar25[10] = -(auVar1[10] == -1);
          auVar25[0xb] = -(auVar1[0xb] == -1);
          auVar25[0xc] = -(auVar1[0xc] == -1);
          auVar25[0xd] = -(auVar1[0xd] == -1);
          auVar25[0xe] = -(auVar1[0xe] == -1);
          auVar25[0xf] = -(auVar1[0xf] == -1);
          if ((((((((((((((((SUB161(auVar25 >> 7,0) & 1) != 0 || (SUB161(auVar25 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar25 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar25 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar25 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar25 >> 0x2f,0) & 1) != 0) || (SUB161(auVar25 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar25 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar25 >> 0x47,0) & 1) != 0) || (SUB161(auVar25 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar25 >> 0x57,0) & 1) != 0) || (SUB161(auVar25 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar25 >> 0x67,0) & 1) != 0) || (SUB161(auVar25 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar25 >> 0x77,0) & 1) != 0) || auVar25[0xf] < '\0') break;
          uVar14 = uVar14 + lVar18 + 0x10;
          lVar18 = lVar18 + 0x10;
        }
      }
    }
  }
  return;
}

