// VA 0x1409bb560, PDB extent 1257 bytes
// country_core::systems::ui::signifiers::impl$2::build::dashed_draw_fn
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/signifiers/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui::signifiers::impl$2::build::dashed_draw_fn
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/signifiers/mod.rs
   Extent: 1257 */

void pdb_1409bb560(int *param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                  longlong param_5)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  ushort uVar15;
  ulonglong uVar16;
  byte bVar17;
  undefined4 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  ulonglong uStack_88;
  ulonglong uStack_80;
  undefined8 uStack_78;
  ulonglong uStack_70;
  longlong lStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar7 = *(longlong *)(param_2 + 0x70);
    uVar12 = 0x59a9ebec036a11fe;
    lVar13 = 0;
    while( true ) {
      uVar12 = uVar12 & *(ulonglong *)(param_2 + 0x78);
      auVar19 = *(undefined1 (*) [16])(lVar7 + uVar12);
      auVar24[0] = -(auVar19[0] == DAT_142e33bd0);
      auVar24[1] = -(auVar19[1] == DAT_142e33bd0._1_1_);
      auVar24[2] = -(auVar19[2] == DAT_142e33bd0._2_1_);
      auVar24[3] = -(auVar19[3] == DAT_142e33bd0._3_1_);
      auVar24[4] = -(auVar19[4] == DAT_142e33bd0._4_1_);
      auVar24[5] = -(auVar19[5] == DAT_142e33bd0._5_1_);
      auVar24[6] = -(auVar19[6] == DAT_142e33bd0._6_1_);
      auVar24[7] = -(auVar19[7] == DAT_142e33bd0._7_1_);
      auVar24[8] = -(auVar19[8] == DAT_142e33bd0._8_1_);
      auVar24[9] = -(auVar19[9] == DAT_142e33bd0._9_1_);
      auVar24[10] = -(auVar19[10] == DAT_142e33bd0._10_1_);
      auVar24[0xb] = -(auVar19[0xb] == DAT_142e33bd0._11_1_);
      auVar24[0xc] = -(auVar19[0xc] == DAT_142e33bd0._12_1_);
      auVar24[0xd] = -(auVar19[0xd] == DAT_142e33bd0._13_1_);
      auVar24[0xe] = -(auVar19[0xe] == DAT_142e33bd0._14_1_);
      auVar24[0xf] = -(auVar19[0xf] == DAT_142e33bd0._15_1_);
      uVar15 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe | (ushort)(auVar24[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar15;
      while (uVar15 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar11; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar16 = uVar5 + uVar12 & *(ulonglong *)(param_2 + 0x78);
        pcVar1 = (char *)(lVar7 + -0x18 + uVar16 * -0x18);
        auVar25[0] = -(*pcVar1 == DAT_142e34980);
        auVar25[1] = -(pcVar1[1] == DAT_142e34980._1_1_);
        auVar25[2] = -(pcVar1[2] == DAT_142e34980._2_1_);
        auVar25[3] = -(pcVar1[3] == DAT_142e34980._3_1_);
        auVar25[4] = -(pcVar1[4] == DAT_142e34980._4_1_);
        auVar25[5] = -(pcVar1[5] == DAT_142e34980._5_1_);
        auVar25[6] = -(pcVar1[6] == DAT_142e34980._6_1_);
        auVar25[7] = -(pcVar1[7] == DAT_142e34980._7_1_);
        auVar25[8] = -(pcVar1[8] == DAT_142e34980._8_1_);
        auVar25[9] = -(pcVar1[9] == DAT_142e34980._9_1_);
        auVar25[10] = -(pcVar1[10] == DAT_142e34980._10_1_);
        auVar25[0xb] = -(pcVar1[0xb] == DAT_142e34980._11_1_);
        auVar25[0xc] = -(pcVar1[0xc] == DAT_142e34980._12_1_);
        auVar25[0xd] = -(pcVar1[0xd] == DAT_142e34980._13_1_);
        auVar25[0xe] = -(pcVar1[0xe] == DAT_142e34980._14_1_);
        auVar25[0xf] = -(pcVar1[0xf] == DAT_142e34980._15_1_);
        if ((ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar25[0xf] >> 7) << 0xf) == 0xffff) {
          uVar12 = *(ulonglong *)(lVar7 + uVar16 * -0x18 + -8);
          if ((*(ulonglong *)(param_2 + 0x210) <= uVar12) ||
             (uVar12 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar12 * 8), uVar12 == 0))
          goto LAB_1409bb796;
          lVar7 = ~uVar12 * 0x40;
          if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar7) == 0) goto LAB_1409bb796;
          if (*param_1 == 1) goto LAB_1409bb9b8;
          plVar4 = *(longlong **)(*(longlong *)(param_2 + 0x1d8) + lVar7 + 0x10);
          uVar12 = *(ulonglong *)(param_1 + 2);
          uStack_88 = uVar12;
          if (plVar4[3] == 0) goto LAB_1409bb7a2;
          uVar16 = pdb_1400af0a0(plVar4 + 4,&uStack_88);
          lVar7 = *plVar4;
          bVar17 = (byte)(uVar16 >> 0x39);
          auVar19 = ZEXT216(CONCAT11(bVar17,bVar17));
          auVar19 = pshuflw(auVar19,auVar19,0);
          lVar13 = 0;
          goto LAB_1409bb6de;
        }
        uVar15 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar15);
      }
      auVar21[0] = -(auVar19[0] == -1);
      auVar21[1] = -(auVar19[1] == -1);
      auVar21[2] = -(auVar19[2] == -1);
      auVar21[3] = -(auVar19[3] == -1);
      auVar21[4] = -(auVar19[4] == -1);
      auVar21[5] = -(auVar19[5] == -1);
      auVar21[6] = -(auVar19[6] == -1);
      auVar21[7] = -(auVar19[7] == -1);
      auVar21[8] = -(auVar19[8] == -1);
      auVar21[9] = -(auVar19[9] == -1);
      auVar21[10] = -(auVar19[10] == -1);
      auVar21[0xb] = -(auVar19[0xb] == -1);
      auVar21[0xc] = -(auVar19[0xc] == -1);
      auVar21[0xd] = -(auVar19[0xd] == -1);
      auVar21[0xe] = -(auVar19[0xe] == -1);
      auVar21[0xf] = -(auVar19[0xf] == -1);
      if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 || (SUB161(auVar21 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar21 >> 0x17,0) & 1) != 0) || (SUB161(auVar21 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar21 >> 0x27,0) & 1) != 0) || (SUB161(auVar21 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar21 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar21 >> 0x3f,0) & 1) != 0) || (SUB161(auVar21 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar21 >> 0x4f,0) & 1) != 0) || (SUB161(auVar21 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar21 >> 0x5f,0) & 1) != 0) || (SUB161(auVar21 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar21 >> 0x6f,0) & 1) != 0) || (SUB161(auVar21 >> 0x77,0) & 1) != 0) ||
          auVar21[0xf] < '\0') break;
      uVar12 = uVar12 + lVar13 + 0x10;
      lVar13 = lVar13 + 0x10;
    }
  }
LAB_1409bb796:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14302b088);
LAB_1409bb6de:
  uVar16 = uVar16 & plVar4[1];
  auVar24 = *(undefined1 (*) [16])(lVar7 + uVar16);
  auVar22[0] = -(auVar24[0] == auVar19[0]);
  auVar22[1] = -(auVar24[1] == auVar19[1]);
  auVar22[2] = -(auVar24[2] == auVar19[2]);
  auVar22[3] = -(auVar24[3] == auVar19[3]);
  auVar22[4] = -(auVar24[4] == auVar19[4]);
  auVar22[5] = -(auVar24[5] == auVar19[5]);
  auVar22[6] = -(auVar24[6] == auVar19[6]);
  auVar22[7] = -(auVar24[7] == auVar19[7]);
  auVar22[8] = -(auVar24[8] == auVar19[0]);
  auVar22[9] = -(auVar24[9] == auVar19[1]);
  auVar22[10] = -(auVar24[10] == auVar19[2]);
  auVar22[0xb] = -(auVar24[0xb] == auVar19[3]);
  auVar22[0xc] = -(auVar24[0xc] == auVar19[4]);
  auVar22[0xd] = -(auVar24[0xd] == auVar19[5]);
  auVar22[0xe] = -(auVar24[0xe] == auVar19[6]);
  auVar22[0xf] = -(auVar24[0xf] == auVar19[7]);
  uVar15 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(auVar22[0xf] >> 7) << 0xf;
  uVar11 = (uint)uVar15;
  while (uVar15 != 0) {
    uVar5 = 0;
    for (uVar6 = uVar11; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    lVar14 = (uVar5 + uVar16 & plVar4[1]) * -0x30;
    if (uVar12 == *(ulonglong *)(lVar7 + -0x30 + lVar14)) {
      lVar7 = lVar7 + lVar14;
      lVar13 = pdb_141a076a0(param_5,lVar7 + -0x28);
      uVar8 = pdb_140e17290(lVar7 + -0x10,lVar13);
      *(byte *)(lVar13 + 0x28a) = *(byte *)(lVar13 + 0x28a) | 1;
      *(undefined8 *)(lVar13 + 200) = uVar8;
      if (*(char *)(lVar7 + -4) == '\0') {
        pdb_140e25450(param_5);
      }
      else {
        *(byte *)(param_5 + 0x288) = *(byte *)(param_5 + 0x288) | 0x80;
        *(byte *)(param_5 + 0x83) = *(byte *)(param_5 + 0x83) | 2;
        *(undefined1 *)(param_5 + 0x82) = 0;
      }
      if ((param_4 & 0xffffffff) == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14302b5ec,99,&UNK_14302b680);
      }
      uVar12 = param_4 & 0xffffffff ^ 0xffffffff;
      if (((*(ulonglong *)(param_2 + 0x10) <= uVar12) ||
          (piVar10 = (int *)(uVar12 * 0x18 + *(longlong *)(param_2 + 8)),
          piVar10[4] != (int)(param_4 >> 0x20))) || (*piVar10 == 0)) {
        uStack_88 = param_4;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14302b558,0x2b,&uStack_88,&UNK_14302b538,&UNK_14302b0b8);
      }
      uVar3 = *(undefined4 *)(lVar7 + -8);
      uStack_70 = *(ulonglong *)(piVar10 + 2);
      uStack_60 = *(undefined4 *)(param_2 + 0x5ac);
      uStack_5c = *(undefined4 *)(param_2 + 0x5a8);
      uStack_78 = CONCAT44(piVar10[1],*piVar10);
      uStack_80 = param_4;
      lStack_68 = param_2;
      if (*(longlong *)(param_2 + 0x68) == 0) goto LAB_1409bb9a0;
      lVar7 = *(longlong *)(param_2 + 0x50);
      uVar12 = 0x78b2c2905f29050e;
      lVar13 = 0;
      goto LAB_1409bb873;
    }
    uVar15 = (ushort)(uVar11 - 1) & (ushort)uVar11;
    uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar15);
  }
  auVar20[0] = -(auVar24[0] == -1);
  auVar20[1] = -(auVar24[1] == -1);
  auVar20[2] = -(auVar24[2] == -1);
  auVar20[3] = -(auVar24[3] == -1);
  auVar20[4] = -(auVar24[4] == -1);
  auVar20[5] = -(auVar24[5] == -1);
  auVar20[6] = -(auVar24[6] == -1);
  auVar20[7] = -(auVar24[7] == -1);
  auVar20[8] = -(auVar24[8] == -1);
  auVar20[9] = -(auVar24[9] == -1);
  auVar20[10] = -(auVar24[10] == -1);
  auVar20[0xb] = -(auVar24[0xb] == -1);
  auVar20[0xc] = -(auVar24[0xc] == -1);
  auVar20[0xd] = -(auVar24[0xd] == -1);
  auVar20[0xe] = -(auVar24[0xe] == -1);
  auVar20[0xf] = -(auVar24[0xf] == -1);
  if ((((((((((((((((SUB161(auVar20 >> 7,0) & 1) != 0 || (SUB161(auVar20 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar20 >> 0x17,0) & 1) != 0) || (SUB161(auVar20 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar20 >> 0x27,0) & 1) != 0) || (SUB161(auVar20 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar20 >> 0x37,0) & 1) != 0) || (SUB161(auVar20 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar20 >> 0x47,0) & 1) != 0) || (SUB161(auVar20 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar20 >> 0x57,0) & 1) != 0) || (SUB161(auVar20 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar20 >> 0x67,0) & 1) != 0) || (SUB161(auVar20 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar20 >> 0x77,0) & 1) != 0) || auVar20[0xf] < '\0') {
LAB_1409bb7a2:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14302b0a0);
  }
  uVar16 = uVar16 + lVar13 + 0x10;
  lVar13 = lVar13 + 0x10;
  goto LAB_1409bb6de;
LAB_1409bb873:
  uVar12 = uVar12 & *(ulonglong *)(param_2 + 0x58);
  auVar19 = *(undefined1 (*) [16])(lVar7 + uVar12);
  auVar26[0] = -(auVar19[0] == DAT_142e34c50);
  auVar26[1] = -(auVar19[1] == DAT_142e34c50._1_1_);
  auVar26[2] = -(auVar19[2] == DAT_142e34c50._2_1_);
  auVar26[3] = -(auVar19[3] == DAT_142e34c50._3_1_);
  auVar26[4] = -(auVar19[4] == DAT_142e34c50._4_1_);
  auVar26[5] = -(auVar19[5] == DAT_142e34c50._5_1_);
  auVar26[6] = -(auVar19[6] == DAT_142e34c50._6_1_);
  auVar26[7] = -(auVar19[7] == DAT_142e34c50._7_1_);
  auVar26[8] = -(auVar19[8] == DAT_142e34c50._8_1_);
  auVar26[9] = -(auVar19[9] == DAT_142e34c50._9_1_);
  auVar26[10] = -(auVar19[10] == DAT_142e34c50._10_1_);
  auVar26[0xb] = -(auVar19[0xb] == DAT_142e34c50._11_1_);
  auVar26[0xc] = -(auVar19[0xc] == DAT_142e34c50._12_1_);
  auVar26[0xd] = -(auVar19[0xd] == DAT_142e34c50._13_1_);
  auVar26[0xe] = -(auVar19[0xe] == DAT_142e34c50._14_1_);
  auVar26[0xf] = -(auVar19[0xf] == DAT_142e34c50._15_1_);
  uVar15 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe | (ushort)(auVar26[0xf] >> 7) << 0xf;
  uVar11 = (uint)uVar15;
  while (uVar15 != 0) {
    uVar5 = 0;
    for (uVar6 = uVar11; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    uVar16 = uVar5 + uVar12 & *(ulonglong *)(param_2 + 0x58);
    pcVar1 = (char *)(lVar7 + -0x18 + uVar16 * -0x18);
    auVar27[0] = -(*pcVar1 == DAT_142f624f0);
    auVar27[1] = -(pcVar1[1] == DAT_142f624f0._1_1_);
    auVar27[2] = -(pcVar1[2] == DAT_142f624f0._2_1_);
    auVar27[3] = -(pcVar1[3] == DAT_142f624f0._3_1_);
    auVar27[4] = -(pcVar1[4] == DAT_142f624f0._4_1_);
    auVar27[5] = -(pcVar1[5] == DAT_142f624f0._5_1_);
    auVar27[6] = -(pcVar1[6] == DAT_142f624f0._6_1_);
    auVar27[7] = -(pcVar1[7] == DAT_142f624f0._7_1_);
    auVar27[8] = -(pcVar1[8] == DAT_142f624f0._8_1_);
    auVar27[9] = -(pcVar1[9] == DAT_142f624f0._9_1_);
    auVar27[10] = -(pcVar1[10] == DAT_142f624f0._10_1_);
    auVar27[0xb] = -(pcVar1[0xb] == DAT_142f624f0._11_1_);
    auVar27[0xc] = -(pcVar1[0xc] == DAT_142f624f0._12_1_);
    auVar27[0xd] = -(pcVar1[0xd] == DAT_142f624f0._13_1_);
    auVar27[0xe] = -(pcVar1[0xe] == DAT_142f624f0._14_1_);
    auVar27[0xf] = -(pcVar1[0xf] == DAT_142f624f0._15_1_);
    if ((ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe | (ushort)(auVar27[0xf] >> 7) << 0xf
                ) == 0xffff) {
      if ((uStack_70 >> 0x20 < *(ulonglong *)(param_2 + 0x1a8)) &&
         (puVar9 = (undefined4 *)
                   pdb_140eff5a0((uStack_70 >> 0x20) * 0x48 + *(longlong *)(param_2 + 0x1a0),
                                 *(undefined8 *)(lVar7 + uVar16 * -0x18 + -8)),
         puVar9 != (undefined4 *)0x0)) {
        uVar2 = *puVar9;
        uVar18 = pdb_1409ba9f0(param_2,&uStack_80);
        lVar7 = *(longlong *)(param_5 + 0x40);
        lVar13 = lVar7;
        if ((ulonglong)(*(longlong *)(param_5 + 0x30) - lVar7) < 0xc) {
          pdb_142d7f1b0(param_5 + 0x30,lVar7,0xc,1,1);
          lVar13 = *(longlong *)(param_5 + 0x40);
        }
        lVar14 = *(longlong *)(param_5 + 0x38);
        *(undefined4 *)(lVar14 + lVar13) = uVar3;
        *(undefined4 *)(lVar14 + 4 + lVar13) = uVar2;
        *(undefined4 *)(lVar14 + 8 + lVar13) = uVar18;
        *(longlong *)(param_5 + 0x40) = lVar13 + 0xc;
        *(byte *)(param_5 + 0x28a) = *(byte *)(param_5 + 0x28a) | 0x20;
        *(int *)(param_5 + 0xf0) = (int)lVar7;
        *(undefined4 *)(param_5 + 0xf4) = 0;
        pdb_140e25490(param_5,uVar3,0,1);
        return;
      }
      goto LAB_1409bb9a0;
    }
    uVar15 = (ushort)(uVar11 - 1) & (ushort)uVar11;
    uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar15);
  }
  auVar23[0] = -(auVar19[0] == -1);
  auVar23[1] = -(auVar19[1] == -1);
  auVar23[2] = -(auVar19[2] == -1);
  auVar23[3] = -(auVar19[3] == -1);
  auVar23[4] = -(auVar19[4] == -1);
  auVar23[5] = -(auVar19[5] == -1);
  auVar23[6] = -(auVar19[6] == -1);
  auVar23[7] = -(auVar19[7] == -1);
  auVar23[8] = -(auVar19[8] == -1);
  auVar23[9] = -(auVar19[9] == -1);
  auVar23[10] = -(auVar19[10] == -1);
  auVar23[0xb] = -(auVar19[0xb] == -1);
  auVar23[0xc] = -(auVar19[0xc] == -1);
  auVar23[0xd] = -(auVar19[0xd] == -1);
  auVar23[0xe] = -(auVar19[0xe] == -1);
  auVar23[0xf] = -(auVar19[0xf] == -1);
  if ((((((((((((((((SUB161(auVar23 >> 7,0) & 1) != 0 || (SUB161(auVar23 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar23 >> 0x17,0) & 1) != 0) || (SUB161(auVar23 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar23 >> 0x27,0) & 1) != 0) || (SUB161(auVar23 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar23 >> 0x37,0) & 1) != 0) || (SUB161(auVar23 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar23 >> 0x47,0) & 1) != 0) || (SUB161(auVar23 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar23 >> 0x57,0) & 1) != 0) || (SUB161(auVar23 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar23 >> 0x67,0) & 1) != 0) || (SUB161(auVar23 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar23 >> 0x77,0) & 1) != 0) || auVar23[0xf] < '\0') {
LAB_1409bb9a0:
    pdb_142dc8110(&UNK_14302b0d0,0x28,&UNK_14302b0f8);
LAB_1409bb9b8:
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14302ac29,0x28,&UNK_14302b110);
  }
  uVar12 = uVar12 + lVar13 + 0x10;
  lVar13 = lVar13 + 0x10;
  goto LAB_1409bb873;
}

