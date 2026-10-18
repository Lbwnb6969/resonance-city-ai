// VA 0x1409bb190, PDB extent 972 bytes
// country_core::systems::ui::signifiers::impl$2::build::line_draw_fn
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/signifiers/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::ui::signifiers::impl$2::build::line_draw_fn
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/signifiers/mod.rs
   Extent: 972 */

void pdb_1409bb190(int *param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                  longlong param_5)

{
  char *pcVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  int *piVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ushort uVar12;
  ulonglong uVar13;
  byte bVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  ulonglong uStack_78;
  ulonglong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  longlong lStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar5 = *(longlong *)(param_2 + 0x70);
    uVar9 = 0x59a9ebec036a11fe;
    lVar10 = 0;
    while( true ) {
      uVar9 = uVar9 & *(ulonglong *)(param_2 + 0x78);
      auVar16 = *(undefined1 (*) [16])(lVar5 + uVar9);
      auVar20[0] = -(auVar16[0] == DAT_142e33bd0);
      auVar20[1] = -(auVar16[1] == DAT_142e33bd0._1_1_);
      auVar20[2] = -(auVar16[2] == DAT_142e33bd0._2_1_);
      auVar20[3] = -(auVar16[3] == DAT_142e33bd0._3_1_);
      auVar20[4] = -(auVar16[4] == DAT_142e33bd0._4_1_);
      auVar20[5] = -(auVar16[5] == DAT_142e33bd0._5_1_);
      auVar20[6] = -(auVar16[6] == DAT_142e33bd0._6_1_);
      auVar20[7] = -(auVar16[7] == DAT_142e33bd0._7_1_);
      auVar20[8] = -(auVar16[8] == DAT_142e33bd0._8_1_);
      auVar20[9] = -(auVar16[9] == DAT_142e33bd0._9_1_);
      auVar20[10] = -(auVar16[10] == DAT_142e33bd0._10_1_);
      auVar20[0xb] = -(auVar16[0xb] == DAT_142e33bd0._11_1_);
      auVar20[0xc] = -(auVar16[0xc] == DAT_142e33bd0._12_1_);
      auVar20[0xd] = -(auVar16[0xd] == DAT_142e33bd0._13_1_);
      auVar20[0xe] = -(auVar16[0xe] == DAT_142e33bd0._14_1_);
      auVar20[0xf] = -(auVar16[0xf] == DAT_142e33bd0._15_1_);
      uVar12 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
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
      uVar8 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar8; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar13 = uVar3 + uVar9 & *(ulonglong *)(param_2 + 0x78);
        pcVar1 = (char *)(lVar5 + -0x18 + uVar13 * -0x18);
        auVar21[0] = -(*pcVar1 == DAT_142e34980);
        auVar21[1] = -(pcVar1[1] == DAT_142e34980._1_1_);
        auVar21[2] = -(pcVar1[2] == DAT_142e34980._2_1_);
        auVar21[3] = -(pcVar1[3] == DAT_142e34980._3_1_);
        auVar21[4] = -(pcVar1[4] == DAT_142e34980._4_1_);
        auVar21[5] = -(pcVar1[5] == DAT_142e34980._5_1_);
        auVar21[6] = -(pcVar1[6] == DAT_142e34980._6_1_);
        auVar21[7] = -(pcVar1[7] == DAT_142e34980._7_1_);
        auVar21[8] = -(pcVar1[8] == DAT_142e34980._8_1_);
        auVar21[9] = -(pcVar1[9] == DAT_142e34980._9_1_);
        auVar21[10] = -(pcVar1[10] == DAT_142e34980._10_1_);
        auVar21[0xb] = -(pcVar1[0xb] == DAT_142e34980._11_1_);
        auVar21[0xc] = -(pcVar1[0xc] == DAT_142e34980._12_1_);
        auVar21[0xd] = -(pcVar1[0xd] == DAT_142e34980._13_1_);
        auVar21[0xe] = -(pcVar1[0xe] == DAT_142e34980._14_1_);
        auVar21[0xf] = -(pcVar1[0xf] == DAT_142e34980._15_1_);
        if ((ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar21[0xf] >> 7) << 0xf) == 0xffff) {
          uVar9 = *(ulonglong *)(lVar5 + uVar13 * -0x18 + -8);
          if ((uVar9 < *(ulonglong *)(param_2 + 0x210)) &&
             (uVar9 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar9 * 8), uVar9 != 0)) {
            lVar5 = ~uVar9 * 0x40;
            if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar5) != 0) {
              if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc83b0(&UNK_14302ac29,0x28,&UNK_14302b070);
              }
              plVar2 = *(longlong **)(*(longlong *)(param_2 + 0x1d8) + lVar5 + 0x10);
              uVar9 = *(ulonglong *)(param_1 + 2);
              uStack_78 = uVar9;
              if (plVar2[3] != 0) {
                uVar13 = pdb_1400af0a0(plVar2 + 4,&uStack_78);
                lVar5 = *plVar2;
                bVar14 = (byte)(uVar13 >> 0x39);
                auVar16 = ZEXT216(CONCAT11(bVar14,bVar14));
                auVar16 = pshuflw(auVar16,auVar16,0);
                lVar10 = 0;
                while( true ) {
                  uVar13 = uVar13 & plVar2[1];
                  auVar20 = *(undefined1 (*) [16])(lVar5 + uVar13);
                  auVar19[0] = -(auVar20[0] == auVar16[0]);
                  auVar19[1] = -(auVar20[1] == auVar16[1]);
                  auVar19[2] = -(auVar20[2] == auVar16[2]);
                  auVar19[3] = -(auVar20[3] == auVar16[3]);
                  auVar19[4] = -(auVar20[4] == auVar16[4]);
                  auVar19[5] = -(auVar20[5] == auVar16[5]);
                  auVar19[6] = -(auVar20[6] == auVar16[6]);
                  auVar19[7] = -(auVar20[7] == auVar16[7]);
                  auVar19[8] = -(auVar20[8] == auVar16[0]);
                  auVar19[9] = -(auVar20[9] == auVar16[1]);
                  auVar19[10] = -(auVar20[10] == auVar16[2]);
                  auVar19[0xb] = -(auVar20[0xb] == auVar16[3]);
                  auVar19[0xc] = -(auVar20[0xc] == auVar16[4]);
                  auVar19[0xd] = -(auVar20[0xd] == auVar16[5]);
                  auVar19[0xe] = -(auVar20[0xe] == auVar16[6]);
                  auVar19[0xf] = -(auVar20[0xf] == auVar16[7]);
                  uVar12 = (ushort)(SUB161(auVar19 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
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
                           (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                           (ushort)(auVar19[0xf] >> 7) << 0xf;
                  uVar8 = (uint)uVar12;
                  while (uVar12 != 0) {
                    uVar3 = 0;
                    for (uVar4 = uVar8; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                      uVar3 = uVar3 + 1;
                    }
                    lVar11 = (uVar3 + uVar13 & plVar2[1]) * -0x30;
                    if (uVar9 == *(ulonglong *)(lVar5 + -0x30 + lVar11)) {
                      lVar5 = lVar5 + lVar11;
                      lVar10 = pdb_141a076a0(param_5,lVar5 + -0x28);
                      uVar6 = pdb_140e17290(lVar5 + -0x10,lVar10);
                      *(byte *)(lVar10 + 0x28a) = *(byte *)(lVar10 + 0x28a) | 1;
                      *(undefined8 *)(lVar10 + 200) = uVar6;
                      if (*(char *)(lVar5 + -4) == '\0') {
                        pdb_140e25450(param_5);
                      }
                      else {
                        *(byte *)(param_5 + 0x288) = *(byte *)(param_5 + 0x288) | 0x80;
                        *(byte *)(param_5 + 0x83) = *(byte *)(param_5 + 0x83) | 2;
                        *(undefined1 *)(param_5 + 0x82) = 0;
                      }
                      if ((param_4 & 0xffffffff) != 0) {
                        uVar9 = param_4 & 0xffffffff ^ 0xffffffff;
                        if (((uVar9 < *(ulonglong *)(param_2 + 0x10)) &&
                            (piVar7 = (int *)(uVar9 * 0x18 + *(longlong *)(param_2 + 8)),
                            piVar7[4] == (int)(param_4 >> 0x20))) && (*piVar7 != 0)) {
                          uStack_60 = *(undefined8 *)(piVar7 + 2);
                          uStack_50 = *(undefined4 *)(param_2 + 0x5ac);
                          uStack_4c = *(undefined4 *)(param_2 + 0x5a8);
                          uStack_68 = CONCAT44(piVar7[1],*piVar7);
                          uStack_70 = param_4;
                          lStack_58 = param_2;
                          uVar15 = pdb_1409ba9f0(param_2,&uStack_70);
                          lVar10 = *(longlong *)(param_5 + 0x40);
                          lVar11 = lVar10;
                          if ((ulonglong)(*(longlong *)(param_5 + 0x30) - lVar10) < 4) {
                            pdb_142d7f1b0(param_5 + 0x30,lVar10,4,1,1);
                            lVar11 = *(longlong *)(param_5 + 0x40);
                          }
                          *(undefined4 *)(*(longlong *)(param_5 + 0x38) + lVar11) = uVar15;
                          *(longlong *)(param_5 + 0x40) = lVar11 + 4;
                          *(byte *)(param_5 + 0x28a) = *(byte *)(param_5 + 0x28a) | 0x20;
                          *(int *)(param_5 + 0xf0) = (int)lVar10;
                          *(undefined4 *)(param_5 + 0xf4) = 0;
                          pdb_140e25490(param_5,*(undefined4 *)(lVar5 + -8),0,1);
                          return;
                        }
                        uStack_78 = param_4;
                    /* WARNING: Subroutine does not return */
                        pdb_142dc8170(&UNK_14302b558,0x2b,&uStack_78,&UNK_14302b538,&UNK_14302b058);
                      }
                    /* WARNING: Subroutine does not return */
                      pdb_142dc83d0(&UNK_14302b5ec,99,&UNK_14302b680);
                    }
                    uVar12 = (ushort)(uVar8 - 1) & (ushort)uVar8;
                    uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar12);
                  }
                  auVar17[0] = -(auVar20[0] == -1);
                  auVar17[1] = -(auVar20[1] == -1);
                  auVar17[2] = -(auVar20[2] == -1);
                  auVar17[3] = -(auVar20[3] == -1);
                  auVar17[4] = -(auVar20[4] == -1);
                  auVar17[5] = -(auVar20[5] == -1);
                  auVar17[6] = -(auVar20[6] == -1);
                  auVar17[7] = -(auVar20[7] == -1);
                  auVar17[8] = -(auVar20[8] == -1);
                  auVar17[9] = -(auVar20[9] == -1);
                  auVar17[10] = -(auVar20[10] == -1);
                  auVar17[0xb] = -(auVar20[0xb] == -1);
                  auVar17[0xc] = -(auVar20[0xc] == -1);
                  auVar17[0xd] = -(auVar20[0xd] == -1);
                  auVar17[0xe] = -(auVar20[0xe] == -1);
                  auVar17[0xf] = -(auVar20[0xf] == -1);
                  if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 ||
                                   (SUB161(auVar17 >> 0xf,0) & 1) != 0) ||
                                  (SUB161(auVar17 >> 0x17,0) & 1) != 0) ||
                                 (SUB161(auVar17 >> 0x1f,0) & 1) != 0) ||
                                (SUB161(auVar17 >> 0x27,0) & 1) != 0) ||
                               (SUB161(auVar17 >> 0x2f,0) & 1) != 0) ||
                              (SUB161(auVar17 >> 0x37,0) & 1) != 0) ||
                             (SUB161(auVar17 >> 0x3f,0) & 1) != 0) ||
                            (SUB161(auVar17 >> 0x47,0) & 1) != 0) ||
                           (SUB161(auVar17 >> 0x4f,0) & 1) != 0) ||
                          (SUB161(auVar17 >> 0x57,0) & 1) != 0) ||
                         (SUB161(auVar17 >> 0x5f,0) & 1) != 0) ||
                        (SUB161(auVar17 >> 0x67,0) & 1) != 0) ||
                       (SUB161(auVar17 >> 0x6f,0) & 1) != 0) || (SUB161(auVar17 >> 0x77,0) & 1) != 0
                      ) || auVar17[0xf] < '\0') break;
                  uVar13 = uVar13 + lVar10 + 0x10;
                  lVar10 = lVar10 + 0x10;
                }
              }
                    /* WARNING: Subroutine does not return */
              pdb_142dc8150(&UNK_14302b040);
            }
          }
          goto LAB_1409bb3b6;
        }
        uVar12 = (ushort)(uVar8 - 1) & (ushort)uVar8;
        uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar12);
      }
      auVar18[0] = -(auVar16[0] == -1);
      auVar18[1] = -(auVar16[1] == -1);
      auVar18[2] = -(auVar16[2] == -1);
      auVar18[3] = -(auVar16[3] == -1);
      auVar18[4] = -(auVar16[4] == -1);
      auVar18[5] = -(auVar16[5] == -1);
      auVar18[6] = -(auVar16[6] == -1);
      auVar18[7] = -(auVar16[7] == -1);
      auVar18[8] = -(auVar16[8] == -1);
      auVar18[9] = -(auVar16[9] == -1);
      auVar18[10] = -(auVar16[10] == -1);
      auVar18[0xb] = -(auVar16[0xb] == -1);
      auVar18[0xc] = -(auVar16[0xc] == -1);
      auVar18[0xd] = -(auVar16[0xd] == -1);
      auVar18[0xe] = -(auVar16[0xe] == -1);
      auVar18[0xf] = -(auVar16[0xf] == -1);
      if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar18 >> 0x17,0) & 1) != 0) || (SUB161(auVar18 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar18 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar18 >> 0x3f,0) & 1) != 0) || (SUB161(auVar18 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar18 >> 0x4f,0) & 1) != 0) || (SUB161(auVar18 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar18 >> 0x5f,0) & 1) != 0) || (SUB161(auVar18 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar18 >> 0x6f,0) & 1) != 0) || (SUB161(auVar18 >> 0x77,0) & 1) != 0) ||
          auVar18[0xf] < '\0') break;
      uVar9 = uVar9 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_1409bb3b6:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14302b028);
}

