// VA 0x1406f2670, PDB extent 691 bytes
// system_glade_border::impl$0::build
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/glade-border/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_glade_border::impl$0::build
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/glade-border/src/lib.rs
   Extent: 691 */

void pdb_1406f2670(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  char *pcVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ushort uVar10;
  ulonglong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  pdb_141080910(&uStack_90);
  uStack_19 = 0x24;
  uVar6 = pdb_141080c00(_DAT_143ca8dd0,&uStack_19,&UNK_14327f5b8);
  pdb_140676be0(&uStack_90,uVar6);
  uStack_a8 = uStack_30;
  uStack_a0 = uStack_28;
  uStack_b8 = uStack_40;
  uStack_b0 = uStack_38;
  uStack_c8 = uStack_50;
  uStack_c0 = uStack_48;
  uStack_d8 = uStack_60;
  uStack_d0 = uStack_58;
  uStack_e8 = uStack_70;
  uStack_e0 = uStack_68;
  uStack_f8 = uStack_80;
  uStack_f0 = uStack_78;
  uStack_108 = uStack_90;
  uStack_100 = uStack_88;
  pdb_141081640(param_2,&uStack_108);
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar3 = *(longlong *)(param_2 + 0x70);
    uVar7 = 0xae5d5446cb4fd696;
    lVar8 = 0;
    while( true ) {
      uVar7 = uVar7 & *(ulonglong *)(param_2 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar7);
      auVar14[0] = -(*pcVar1 == DAT_142e34200);
      auVar14[1] = -(pcVar1[1] == DAT_142e34200._1_1_);
      auVar14[2] = -(pcVar1[2] == DAT_142e34200._2_1_);
      auVar14[3] = -(pcVar1[3] == DAT_142e34200._3_1_);
      auVar14[4] = -(pcVar1[4] == DAT_142e34200._4_1_);
      auVar14[5] = -(pcVar1[5] == DAT_142e34200._5_1_);
      auVar14[6] = -(pcVar1[6] == DAT_142e34200._6_1_);
      auVar14[7] = -(pcVar1[7] == DAT_142e34200._7_1_);
      auVar14[8] = -(pcVar1[8] == DAT_142e34200._8_1_);
      auVar14[9] = -(pcVar1[9] == DAT_142e34200._9_1_);
      auVar14[10] = -(pcVar1[10] == DAT_142e34200._10_1_);
      auVar14[0xb] = -(pcVar1[0xb] == DAT_142e34200._11_1_);
      auVar14[0xc] = -(pcVar1[0xc] == DAT_142e34200._12_1_);
      auVar14[0xd] = -(pcVar1[0xd] == DAT_142e34200._13_1_);
      auVar14[0xe] = -(pcVar1[0xe] == DAT_142e34200._14_1_);
      auVar14[0xf] = -(pcVar1[0xf] == DAT_142e34200._15_1_);
      uVar10 = (ushort)(SUB161(auVar14 >> 7,0) & 1) | (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe | (ushort)(auVar14[0xf] >> 7) << 0xf;
      uVar9 = (uint)uVar10;
      while (uVar10 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar9; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar11 = uVar4 + uVar7 & *(ulonglong *)(param_2 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar11 * -0x18);
        auVar15[0] = -(*pcVar2 == DAT_142e34bc0);
        auVar15[1] = -(pcVar2[1] == UNK_142e34bc1);
        auVar15[2] = -(pcVar2[2] == UNK_142e34bc2);
        auVar15[3] = -(pcVar2[3] == UNK_142e34bc3);
        auVar15[4] = -(pcVar2[4] == UNK_142e34bc4);
        auVar15[5] = -(pcVar2[5] == UNK_142e34bc5);
        auVar15[6] = -(pcVar2[6] == UNK_142e34bc6);
        auVar15[7] = -(pcVar2[7] == UNK_142e34bc7);
        auVar15[8] = -(pcVar2[8] == UNK_142e34bc8);
        auVar15[9] = -(pcVar2[9] == UNK_142e34bc9);
        auVar15[10] = -(pcVar2[10] == UNK_142e34bca);
        auVar15[0xb] = -(pcVar2[0xb] == UNK_142e34bcb);
        auVar15[0xc] = -(pcVar2[0xc] == UNK_142e34bcc);
        auVar15[0xd] = -(pcVar2[0xd] == UNK_142e34bcd);
        auVar15[0xe] = -(pcVar2[0xe] == UNK_142e34bce);
        auVar15[0xf] = -(pcVar2[0xf] == UNK_142e34bcf);
        if ((ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar15[0xf] >> 7) << 0xf) == 0xffff) {
          uVar7 = *(ulonglong *)(lVar3 + uVar11 * -0x18 + -8);
          if (((*(ulonglong *)(param_2 + 0x210) <= uVar7) ||
              (uVar7 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar7 * 8), uVar7 == 0)) ||
             (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + ~uVar7 * 0x40) == 0))
          goto LAB_1406f27f2;
          goto LAB_1406f2808;
        }
        uVar10 = (ushort)(uVar9 - 1) & (ushort)uVar9;
        uVar9 = CONCAT22((short)(uVar9 - 1 >> 0x10),uVar10);
      }
      auVar12[0] = -(*pcVar1 == -1);
      auVar12[1] = -(pcVar1[1] == -1);
      auVar12[2] = -(pcVar1[2] == -1);
      auVar12[3] = -(pcVar1[3] == -1);
      auVar12[4] = -(pcVar1[4] == -1);
      auVar12[5] = -(pcVar1[5] == -1);
      auVar12[6] = -(pcVar1[6] == -1);
      auVar12[7] = -(pcVar1[7] == -1);
      auVar12[8] = -(pcVar1[8] == -1);
      auVar12[9] = -(pcVar1[9] == -1);
      auVar12[10] = -(pcVar1[10] == -1);
      auVar12[0xb] = -(pcVar1[0xb] == -1);
      auVar12[0xc] = -(pcVar1[0xc] == -1);
      auVar12[0xd] = -(pcVar1[0xd] == -1);
      auVar12[0xe] = -(pcVar1[0xe] == -1);
      auVar12[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar12 >> 7,0) & 1) != 0 || (SUB161(auVar12 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar12 >> 0x17,0) & 1) != 0) || (SUB161(auVar12 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar12 >> 0x27,0) & 1) != 0) || (SUB161(auVar12 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar12 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar12 >> 0x3f,0) & 1) != 0) || (SUB161(auVar12 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar12 >> 0x4f,0) & 1) != 0) || (SUB161(auVar12 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar12 >> 0x5f,0) & 1) != 0) || (SUB161(auVar12 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar12 >> 0x6f,0) & 1) != 0) || (SUB161(auVar12 >> 0x77,0) & 1) != 0) ||
          auVar12[0xf] < '\0') break;
      uVar7 = uVar7 + lVar8 + 0x10;
      lVar8 = lVar8 + 0x10;
    }
  }
LAB_1406f27f2:
  pdb_141081d60(param_2);
  if (*(longlong *)(param_2 + 0x88) != 0) {
LAB_1406f2808:
    lVar3 = *(longlong *)(param_2 + 0x70);
    uVar7 = 0xda019b5ac22d6391;
    lVar8 = 0;
    while( true ) {
      uVar7 = uVar7 & *(ulonglong *)(param_2 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar7);
      auVar16[0] = -(*pcVar1 == DAT_142e34890);
      auVar16[1] = -(pcVar1[1] == DAT_142e34890._1_1_);
      auVar16[2] = -(pcVar1[2] == DAT_142e34890._2_1_);
      auVar16[3] = -(pcVar1[3] == DAT_142e34890._3_1_);
      auVar16[4] = -(pcVar1[4] == DAT_142e34890._4_1_);
      auVar16[5] = -(pcVar1[5] == DAT_142e34890._5_1_);
      auVar16[6] = -(pcVar1[6] == DAT_142e34890._6_1_);
      auVar16[7] = -(pcVar1[7] == DAT_142e34890._7_1_);
      auVar16[8] = -(pcVar1[8] == DAT_142e34890._8_1_);
      auVar16[9] = -(pcVar1[9] == DAT_142e34890._9_1_);
      auVar16[10] = -(pcVar1[10] == DAT_142e34890._10_1_);
      auVar16[0xb] = -(pcVar1[0xb] == DAT_142e34890._11_1_);
      auVar16[0xc] = -(pcVar1[0xc] == DAT_142e34890._12_1_);
      auVar16[0xd] = -(pcVar1[0xd] == DAT_142e34890._13_1_);
      auVar16[0xe] = -(pcVar1[0xe] == DAT_142e34890._14_1_);
      auVar16[0xf] = -(pcVar1[0xf] == DAT_142e34890._15_1_);
      uVar10 = (ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe | (ushort)(auVar16[0xf] >> 7) << 0xf;
      uVar9 = (uint)uVar10;
      while (uVar10 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar9; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar11 = uVar4 + uVar7 & *(ulonglong *)(param_2 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar11 * -0x18);
        auVar17[0] = -(*pcVar2 == DAT_142e348a0);
        auVar17[1] = -(pcVar2[1] == UNK_142e348a1);
        auVar17[2] = -(pcVar2[2] == UNK_142e348a2);
        auVar17[3] = -(pcVar2[3] == UNK_142e348a3);
        auVar17[4] = -(pcVar2[4] == UNK_142e348a4);
        auVar17[5] = -(pcVar2[5] == UNK_142e348a5);
        auVar17[6] = -(pcVar2[6] == UNK_142e348a6);
        auVar17[7] = -(pcVar2[7] == UNK_142e348a7);
        auVar17[8] = -(pcVar2[8] == UNK_142e348a8);
        auVar17[9] = -(pcVar2[9] == UNK_142e348a9);
        auVar17[10] = -(pcVar2[10] == UNK_142e348aa);
        auVar17[0xb] = -(pcVar2[0xb] == UNK_142e348ab);
        auVar17[0xc] = -(pcVar2[0xc] == UNK_142e348ac);
        auVar17[0xd] = -(pcVar2[0xd] == UNK_142e348ad);
        auVar17[0xe] = -(pcVar2[0xe] == UNK_142e348ae);
        auVar17[0xf] = -(pcVar2[0xf] == UNK_142e348af);
        if ((ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar17[0xf] >> 7) << 0xf) == 0xffff) {
          uVar7 = *(ulonglong *)(lVar3 + uVar11 * -0x18 + -8);
          if (((uVar7 < *(ulonglong *)(param_2 + 0x210)) &&
              (uVar7 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar7 * 8), uVar7 != 0)) &&
             (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + ~uVar7 * 0x40) != 0)) {
            return;
          }
          goto LAB_1406f28ec;
        }
        uVar10 = (ushort)(uVar9 - 1) & (ushort)uVar9;
        uVar9 = CONCAT22((short)(uVar9 - 1 >> 0x10),uVar10);
      }
      auVar13[0] = -(*pcVar1 == -1);
      auVar13[1] = -(pcVar1[1] == -1);
      auVar13[2] = -(pcVar1[2] == -1);
      auVar13[3] = -(pcVar1[3] == -1);
      auVar13[4] = -(pcVar1[4] == -1);
      auVar13[5] = -(pcVar1[5] == -1);
      auVar13[6] = -(pcVar1[6] == -1);
      auVar13[7] = -(pcVar1[7] == -1);
      auVar13[8] = -(pcVar1[8] == -1);
      auVar13[9] = -(pcVar1[9] == -1);
      auVar13[10] = -(pcVar1[10] == -1);
      auVar13[0xb] = -(pcVar1[0xb] == -1);
      auVar13[0xc] = -(pcVar1[0xc] == -1);
      auVar13[0xd] = -(pcVar1[0xd] == -1);
      auVar13[0xe] = -(pcVar1[0xe] == -1);
      auVar13[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar13 >> 7,0) & 1) != 0 || (SUB161(auVar13 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar13 >> 0x17,0) & 1) != 0) || (SUB161(auVar13 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar13 >> 0x27,0) & 1) != 0) || (SUB161(auVar13 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar13 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar13 >> 0x3f,0) & 1) != 0) || (SUB161(auVar13 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar13 >> 0x4f,0) & 1) != 0) || (SUB161(auVar13 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar13 >> 0x5f,0) & 1) != 0) || (SUB161(auVar13 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar13 >> 0x6f,0) & 1) != 0) || (SUB161(auVar13 >> 0x77,0) & 1) != 0) ||
          auVar13[0xf] < '\0') break;
      uVar7 = uVar7 + lVar8 + 0x10;
      lVar8 = lVar8 + 0x10;
    }
  }
LAB_1406f28ec:
  pdb_141081810(param_2);
  return;
}

