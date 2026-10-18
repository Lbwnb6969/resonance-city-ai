// VA 0x140735270, PDB extent 2965 bytes
// toolbar::impl$0::build
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::impl$0::build
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
   Extent: 2965 */

void pdb_140735270(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  char *pcVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  uint uVar11;
  ushort uVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
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
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
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
  undefined1 uStack_21;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  pdb_1411bdca0(&uStack_178);
  uStack_e0 = 0;
  uStack_d8 = 8;
  uStack_d0 = 0;
  uVar6 = pdb_1411a82c0(param_2,&uStack_178);
  uVar6 = pdb_1411a5600(uVar6);
  pdb_1411a60f0(uVar6);
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar3 = *(longlong *)(param_2 + 0x70);
    uVar7 = 0xc3b63328fcac8ae1;
    lVar10 = 0;
    while( true ) {
      uVar7 = uVar7 & *(ulonglong *)(param_2 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar7);
      auVar23[0] = -(*pcVar1 == DAT_142e34040);
      auVar23[1] = -(pcVar1[1] == DAT_142e34040._1_1_);
      auVar23[2] = -(pcVar1[2] == DAT_142e34040._2_1_);
      auVar23[3] = -(pcVar1[3] == DAT_142e34040._3_1_);
      auVar23[4] = -(pcVar1[4] == DAT_142e34040._4_1_);
      auVar23[5] = -(pcVar1[5] == DAT_142e34040._5_1_);
      auVar23[6] = -(pcVar1[6] == DAT_142e34040._6_1_);
      auVar23[7] = -(pcVar1[7] == DAT_142e34040._7_1_);
      auVar23[8] = -(pcVar1[8] == DAT_142e34040._8_1_);
      auVar23[9] = -(pcVar1[9] == DAT_142e34040._9_1_);
      auVar23[10] = -(pcVar1[10] == DAT_142e34040._10_1_);
      auVar23[0xb] = -(pcVar1[0xb] == DAT_142e34040._11_1_);
      auVar23[0xc] = -(pcVar1[0xc] == DAT_142e34040._12_1_);
      auVar23[0xd] = -(pcVar1[0xd] == DAT_142e34040._13_1_);
      auVar23[0xe] = -(pcVar1[0xe] == DAT_142e34040._14_1_);
      auVar23[0xf] = -(pcVar1[0xf] == DAT_142e34040._15_1_);
      uVar12 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar13 = uVar4 + uVar7 & *(ulonglong *)(param_2 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar13 * -0x18);
        auVar24[0] = -(*pcVar2 == DAT_142fa7090);
        auVar24[1] = -(pcVar2[1] == UNK_142fa7091);
        auVar24[2] = -(pcVar2[2] == UNK_142fa7092);
        auVar24[3] = -(pcVar2[3] == UNK_142fa7093);
        auVar24[4] = -(pcVar2[4] == UNK_142fa7094);
        auVar24[5] = -(pcVar2[5] == UNK_142fa7095);
        auVar24[6] = -(pcVar2[6] == UNK_142fa7096);
        auVar24[7] = -(pcVar2[7] == UNK_142fa7097);
        auVar24[8] = -(pcVar2[8] == UNK_142fa7098);
        auVar24[9] = -(pcVar2[9] == UNK_142fa7099);
        auVar24[10] = -(pcVar2[10] == UNK_142fa709a);
        auVar24[0xb] = -(pcVar2[0xb] == UNK_142fa709b);
        auVar24[0xc] = -(pcVar2[0xc] == UNK_142fa709c);
        auVar24[0xd] = -(pcVar2[0xd] == UNK_142fa709d);
        auVar24[0xe] = -(pcVar2[0xe] == UNK_142fa709e);
        auVar24[0xf] = -(pcVar2[0xf] == UNK_142fa709f);
        if ((ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar24[0xf] >> 7) << 0xf) == 0xffff) {
          uVar7 = *(ulonglong *)(lVar3 + uVar13 * -0x18 + -8);
          if (((*(ulonglong *)(param_2 + 0x210) <= uVar7) ||
              (uVar7 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar7 * 8), uVar7 == 0)) ||
             (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + ~uVar7 * 0x40) == 0))
          goto LAB_1407353c2;
          goto LAB_1407353d8;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
      }
      auVar14[0] = -(*pcVar1 == -1);
      auVar14[1] = -(pcVar1[1] == -1);
      auVar14[2] = -(pcVar1[2] == -1);
      auVar14[3] = -(pcVar1[3] == -1);
      auVar14[4] = -(pcVar1[4] == -1);
      auVar14[5] = -(pcVar1[5] == -1);
      auVar14[6] = -(pcVar1[6] == -1);
      auVar14[7] = -(pcVar1[7] == -1);
      auVar14[8] = -(pcVar1[8] == -1);
      auVar14[9] = -(pcVar1[9] == -1);
      auVar14[10] = -(pcVar1[10] == -1);
      auVar14[0xb] = -(pcVar1[0xb] == -1);
      auVar14[0xc] = -(pcVar1[0xc] == -1);
      auVar14[0xd] = -(pcVar1[0xd] == -1);
      auVar14[0xe] = -(pcVar1[0xe] == -1);
      auVar14[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar14 >> 7,0) & 1) != 0 || (SUB161(auVar14 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar14 >> 0x17,0) & 1) != 0) || (SUB161(auVar14 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar14 >> 0x27,0) & 1) != 0) || (SUB161(auVar14 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar14 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar14 >> 0x3f,0) & 1) != 0) || (SUB161(auVar14 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar14 >> 0x4f,0) & 1) != 0) || (SUB161(auVar14 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar14 >> 0x5f,0) & 1) != 0) || (SUB161(auVar14 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar14 >> 0x6f,0) & 1) != 0) || (SUB161(auVar14 >> 0x77,0) & 1) != 0) ||
          auVar14[0xf] < '\0') break;
      uVar7 = uVar7 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_1407353c2:
  pdb_1411c0930(param_2);
  if (*(longlong *)(param_2 + 0x88) != 0) {
LAB_1407353d8:
    lVar3 = *(longlong *)(param_2 + 0x70);
    uVar7 = 0xac93b6275f65820f;
    lVar10 = 0;
    while( true ) {
      uVar7 = uVar7 & *(ulonglong *)(param_2 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar7);
      auVar25[0] = -(*pcVar1 == DAT_142e33f50);
      auVar25[1] = -(pcVar1[1] == DAT_142e33f50._1_1_);
      auVar25[2] = -(pcVar1[2] == DAT_142e33f50._2_1_);
      auVar25[3] = -(pcVar1[3] == DAT_142e33f50._3_1_);
      auVar25[4] = -(pcVar1[4] == DAT_142e33f50._4_1_);
      auVar25[5] = -(pcVar1[5] == DAT_142e33f50._5_1_);
      auVar25[6] = -(pcVar1[6] == DAT_142e33f50._6_1_);
      auVar25[7] = -(pcVar1[7] == DAT_142e33f50._7_1_);
      auVar25[8] = -(pcVar1[8] == DAT_142e33f50._8_1_);
      auVar25[9] = -(pcVar1[9] == DAT_142e33f50._9_1_);
      auVar25[10] = -(pcVar1[10] == DAT_142e33f50._10_1_);
      auVar25[0xb] = -(pcVar1[0xb] == DAT_142e33f50._11_1_);
      auVar25[0xc] = -(pcVar1[0xc] == DAT_142e33f50._12_1_);
      auVar25[0xd] = -(pcVar1[0xd] == DAT_142e33f50._13_1_);
      auVar25[0xe] = -(pcVar1[0xe] == DAT_142e33f50._14_1_);
      auVar25[0xf] = -(pcVar1[0xf] == DAT_142e33f50._15_1_);
      uVar12 = (ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe | (ushort)(auVar25[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar13 = uVar4 + uVar7 & *(ulonglong *)(param_2 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar13 * -0x18);
        auVar26[0] = -(*pcVar2 == DAT_142fa70a0);
        auVar26[1] = -(pcVar2[1] == UNK_142fa70a1);
        auVar26[2] = -(pcVar2[2] == UNK_142fa70a2);
        auVar26[3] = -(pcVar2[3] == UNK_142fa70a3);
        auVar26[4] = -(pcVar2[4] == UNK_142fa70a4);
        auVar26[5] = -(pcVar2[5] == UNK_142fa70a5);
        auVar26[6] = -(pcVar2[6] == UNK_142fa70a6);
        auVar26[7] = -(pcVar2[7] == UNK_142fa70a7);
        auVar26[8] = -(pcVar2[8] == UNK_142fa70a8);
        auVar26[9] = -(pcVar2[9] == UNK_142fa70a9);
        auVar26[10] = -(pcVar2[10] == UNK_142fa70aa);
        auVar26[0xb] = -(pcVar2[0xb] == UNK_142fa70ab);
        auVar26[0xc] = -(pcVar2[0xc] == UNK_142fa70ac);
        auVar26[0xd] = -(pcVar2[0xd] == UNK_142fa70ad);
        auVar26[0xe] = -(pcVar2[0xe] == UNK_142fa70ae);
        auVar26[0xf] = -(pcVar2[0xf] == UNK_142fa70af);
        if ((ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
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
                    (ushort)(auVar26[0xf] >> 7) << 0xf) == 0xffff) {
          uVar7 = *(ulonglong *)(lVar3 + uVar13 * -0x18 + -8);
          if (((*(ulonglong *)(param_2 + 0x210) <= uVar7) ||
              (uVar7 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar7 * 8), uVar7 == 0)) ||
             (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + ~uVar7 * 0x40) == 0))
          goto LAB_1407354b2;
          goto LAB_1407354c8;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
      }
      auVar15[0] = -(*pcVar1 == -1);
      auVar15[1] = -(pcVar1[1] == -1);
      auVar15[2] = -(pcVar1[2] == -1);
      auVar15[3] = -(pcVar1[3] == -1);
      auVar15[4] = -(pcVar1[4] == -1);
      auVar15[5] = -(pcVar1[5] == -1);
      auVar15[6] = -(pcVar1[6] == -1);
      auVar15[7] = -(pcVar1[7] == -1);
      auVar15[8] = -(pcVar1[8] == -1);
      auVar15[9] = -(pcVar1[9] == -1);
      auVar15[10] = -(pcVar1[10] == -1);
      auVar15[0xb] = -(pcVar1[0xb] == -1);
      auVar15[0xc] = -(pcVar1[0xc] == -1);
      auVar15[0xd] = -(pcVar1[0xd] == -1);
      auVar15[0xe] = -(pcVar1[0xe] == -1);
      auVar15[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar15 >> 7,0) & 1) != 0 || (SUB161(auVar15 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar15 >> 0x17,0) & 1) != 0) || (SUB161(auVar15 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar15 >> 0x27,0) & 1) != 0) || (SUB161(auVar15 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar15 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar15 >> 0x3f,0) & 1) != 0) || (SUB161(auVar15 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar15 >> 0x4f,0) & 1) != 0) || (SUB161(auVar15 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar15 >> 0x5f,0) & 1) != 0) || (SUB161(auVar15 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar15 >> 0x6f,0) & 1) != 0) || (SUB161(auVar15 >> 0x77,0) & 1) != 0) ||
          auVar15[0xf] < '\0') break;
      uVar7 = uVar7 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_1407354b2:
  pdb_1411c2730(param_2);
  if (*(longlong *)(param_2 + 0x88) != 0) {
LAB_1407354c8:
    lVar3 = *(longlong *)(param_2 + 0x70);
    uVar7 = 0x49d6ead2ec35fe5a;
    lVar10 = 0;
    while( true ) {
      uVar7 = uVar7 & *(ulonglong *)(param_2 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar7);
      auVar27[0] = -(*pcVar1 == DAT_142e342d0);
      auVar27[1] = -(pcVar1[1] == DAT_142e342d0._1_1_);
      auVar27[2] = -(pcVar1[2] == DAT_142e342d0._2_1_);
      auVar27[3] = -(pcVar1[3] == DAT_142e342d0._3_1_);
      auVar27[4] = -(pcVar1[4] == DAT_142e342d0._4_1_);
      auVar27[5] = -(pcVar1[5] == DAT_142e342d0._5_1_);
      auVar27[6] = -(pcVar1[6] == DAT_142e342d0._6_1_);
      auVar27[7] = -(pcVar1[7] == DAT_142e342d0._7_1_);
      auVar27[8] = -(pcVar1[8] == DAT_142e342d0._8_1_);
      auVar27[9] = -(pcVar1[9] == DAT_142e342d0._9_1_);
      auVar27[10] = -(pcVar1[10] == DAT_142e342d0._10_1_);
      auVar27[0xb] = -(pcVar1[0xb] == DAT_142e342d0._11_1_);
      auVar27[0xc] = -(pcVar1[0xc] == DAT_142e342d0._12_1_);
      auVar27[0xd] = -(pcVar1[0xd] == DAT_142e342d0._13_1_);
      auVar27[0xe] = -(pcVar1[0xe] == DAT_142e342d0._14_1_);
      auVar27[0xf] = -(pcVar1[0xf] == DAT_142e342d0._15_1_);
      uVar12 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
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
               (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe | (ushort)(auVar27[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar13 = uVar4 + uVar7 & *(ulonglong *)(param_2 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar13 * -0x18);
        auVar28[0] = -(*pcVar2 == DAT_142fa70b0);
        auVar28[1] = -(pcVar2[1] == UNK_142fa70b1);
        auVar28[2] = -(pcVar2[2] == UNK_142fa70b2);
        auVar28[3] = -(pcVar2[3] == UNK_142fa70b3);
        auVar28[4] = -(pcVar2[4] == UNK_142fa70b4);
        auVar28[5] = -(pcVar2[5] == UNK_142fa70b5);
        auVar28[6] = -(pcVar2[6] == UNK_142fa70b6);
        auVar28[7] = -(pcVar2[7] == UNK_142fa70b7);
        auVar28[8] = -(pcVar2[8] == UNK_142fa70b8);
        auVar28[9] = -(pcVar2[9] == UNK_142fa70b9);
        auVar28[10] = -(pcVar2[10] == UNK_142fa70ba);
        auVar28[0xb] = -(pcVar2[0xb] == UNK_142fa70bb);
        auVar28[0xc] = -(pcVar2[0xc] == UNK_142fa70bc);
        auVar28[0xd] = -(pcVar2[0xd] == UNK_142fa70bd);
        auVar28[0xe] = -(pcVar2[0xe] == UNK_142fa70be);
        auVar28[0xf] = -(pcVar2[0xf] == UNK_142fa70bf);
        if ((ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar28[0xf] >> 7) << 0xf) == 0xffff) {
          uVar7 = *(ulonglong *)(lVar3 + uVar13 * -0x18 + -8);
          if (((*(ulonglong *)(param_2 + 0x210) <= uVar7) ||
              (uVar7 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar7 * 8), uVar7 == 0)) ||
             (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + ~uVar7 * 0x40) == 0))
          goto LAB_1407355a2;
          goto LAB_1407355b8;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
      }
      auVar16[0] = -(*pcVar1 == -1);
      auVar16[1] = -(pcVar1[1] == -1);
      auVar16[2] = -(pcVar1[2] == -1);
      auVar16[3] = -(pcVar1[3] == -1);
      auVar16[4] = -(pcVar1[4] == -1);
      auVar16[5] = -(pcVar1[5] == -1);
      auVar16[6] = -(pcVar1[6] == -1);
      auVar16[7] = -(pcVar1[7] == -1);
      auVar16[8] = -(pcVar1[8] == -1);
      auVar16[9] = -(pcVar1[9] == -1);
      auVar16[10] = -(pcVar1[10] == -1);
      auVar16[0xb] = -(pcVar1[0xb] == -1);
      auVar16[0xc] = -(pcVar1[0xc] == -1);
      auVar16[0xd] = -(pcVar1[0xd] == -1);
      auVar16[0xe] = -(pcVar1[0xe] == -1);
      auVar16[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar16 >> 7,0) & 1) != 0 || (SUB161(auVar16 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar16 >> 0x17,0) & 1) != 0) || (SUB161(auVar16 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar16 >> 0x27,0) & 1) != 0) || (SUB161(auVar16 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar16 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar16 >> 0x3f,0) & 1) != 0) || (SUB161(auVar16 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar16 >> 0x4f,0) & 1) != 0) || (SUB161(auVar16 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar16 >> 0x5f,0) & 1) != 0) || (SUB161(auVar16 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar16 >> 0x6f,0) & 1) != 0) || (SUB161(auVar16 >> 0x77,0) & 1) != 0) ||
          auVar16[0xf] < '\0') break;
      uVar7 = uVar7 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_1407355a2:
  pdb_1411c0330(param_2);
  if (*(longlong *)(param_2 + 0x88) != 0) {
LAB_1407355b8:
    lVar3 = *(longlong *)(param_2 + 0x70);
    uVar7 = 0x690f506560a8a020;
    lVar10 = 0;
    while( true ) {
      uVar7 = uVar7 & *(ulonglong *)(param_2 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar7);
      auVar29[0] = -(*pcVar1 == DAT_142e349e0);
      auVar29[1] = -(pcVar1[1] == DAT_142e349e0._1_1_);
      auVar29[2] = -(pcVar1[2] == DAT_142e349e0._2_1_);
      auVar29[3] = -(pcVar1[3] == DAT_142e349e0._3_1_);
      auVar29[4] = -(pcVar1[4] == DAT_142e349e0._4_1_);
      auVar29[5] = -(pcVar1[5] == DAT_142e349e0._5_1_);
      auVar29[6] = -(pcVar1[6] == DAT_142e349e0._6_1_);
      auVar29[7] = -(pcVar1[7] == DAT_142e349e0._7_1_);
      auVar29[8] = -(pcVar1[8] == DAT_142e349e0._8_1_);
      auVar29[9] = -(pcVar1[9] == DAT_142e349e0._9_1_);
      auVar29[10] = -(pcVar1[10] == DAT_142e349e0._10_1_);
      auVar29[0xb] = -(pcVar1[0xb] == DAT_142e349e0._11_1_);
      auVar29[0xc] = -(pcVar1[0xc] == DAT_142e349e0._12_1_);
      auVar29[0xd] = -(pcVar1[0xd] == DAT_142e349e0._13_1_);
      auVar29[0xe] = -(pcVar1[0xe] == DAT_142e349e0._14_1_);
      auVar29[0xf] = -(pcVar1[0xf] == DAT_142e349e0._15_1_);
      uVar12 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe | (ushort)(auVar29[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar13 = uVar4 + uVar7 & *(ulonglong *)(param_2 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar13 * -0x18);
        auVar30[0] = -(*pcVar2 == DAT_142fa70c0);
        auVar30[1] = -(pcVar2[1] == UNK_142fa70c1);
        auVar30[2] = -(pcVar2[2] == UNK_142fa70c2);
        auVar30[3] = -(pcVar2[3] == UNK_142fa70c3);
        auVar30[4] = -(pcVar2[4] == UNK_142fa70c4);
        auVar30[5] = -(pcVar2[5] == UNK_142fa70c5);
        auVar30[6] = -(pcVar2[6] == UNK_142fa70c6);
        auVar30[7] = -(pcVar2[7] == UNK_142fa70c7);
        auVar30[8] = -(pcVar2[8] == UNK_142fa70c8);
        auVar30[9] = -(pcVar2[9] == UNK_142fa70c9);
        auVar30[10] = -(pcVar2[10] == UNK_142fa70ca);
        auVar30[0xb] = -(pcVar2[0xb] == UNK_142fa70cb);
        auVar30[0xc] = -(pcVar2[0xc] == UNK_142fa70cc);
        auVar30[0xd] = -(pcVar2[0xd] == UNK_142fa70cd);
        auVar30[0xe] = -(pcVar2[0xe] == UNK_142fa70ce);
        auVar30[0xf] = -(pcVar2[0xf] == UNK_142fa70cf);
        if ((ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar30[0xf] >> 7) << 0xf) == 0xffff) {
          uVar7 = *(ulonglong *)(lVar3 + uVar13 * -0x18 + -8);
          if (((*(ulonglong *)(param_2 + 0x210) <= uVar7) ||
              (uVar7 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar7 * 8), uVar7 == 0)) ||
             (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + ~uVar7 * 0x40) == 0))
          goto LAB_140735692;
          goto LAB_1407356a8;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
      }
      auVar17[0] = -(*pcVar1 == -1);
      auVar17[1] = -(pcVar1[1] == -1);
      auVar17[2] = -(pcVar1[2] == -1);
      auVar17[3] = -(pcVar1[3] == -1);
      auVar17[4] = -(pcVar1[4] == -1);
      auVar17[5] = -(pcVar1[5] == -1);
      auVar17[6] = -(pcVar1[6] == -1);
      auVar17[7] = -(pcVar1[7] == -1);
      auVar17[8] = -(pcVar1[8] == -1);
      auVar17[9] = -(pcVar1[9] == -1);
      auVar17[10] = -(pcVar1[10] == -1);
      auVar17[0xb] = -(pcVar1[0xb] == -1);
      auVar17[0xc] = -(pcVar1[0xc] == -1);
      auVar17[0xd] = -(pcVar1[0xd] == -1);
      auVar17[0xe] = -(pcVar1[0xe] == -1);
      auVar17[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 || (SUB161(auVar17 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar17 >> 0x17,0) & 1) != 0) || (SUB161(auVar17 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar17 >> 0x27,0) & 1) != 0) || (SUB161(auVar17 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar17 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar17 >> 0x3f,0) & 1) != 0) || (SUB161(auVar17 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar17 >> 0x4f,0) & 1) != 0) || (SUB161(auVar17 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar17 >> 0x5f,0) & 1) != 0) || (SUB161(auVar17 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar17 >> 0x6f,0) & 1) != 0) || (SUB161(auVar17 >> 0x77,0) & 1) != 0) ||
          auVar17[0xf] < '\0') break;
      uVar7 = uVar7 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_140735692:
  pdb_1411bf130(param_2);
  if (*(longlong *)(param_2 + 0x88) != 0) {
LAB_1407356a8:
    lVar3 = *(longlong *)(param_2 + 0x70);
    uVar7 = 0x5c5cbcc0c6a2366f;
    lVar10 = 0;
    while( true ) {
      uVar7 = uVar7 & *(ulonglong *)(param_2 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar7);
      auVar31[0] = -(*pcVar1 == DAT_142f9ff20);
      auVar31[1] = -(pcVar1[1] == DAT_142f9ff20._1_1_);
      auVar31[2] = -(pcVar1[2] == DAT_142f9ff20._2_1_);
      auVar31[3] = -(pcVar1[3] == DAT_142f9ff20._3_1_);
      auVar31[4] = -(pcVar1[4] == DAT_142f9ff20._4_1_);
      auVar31[5] = -(pcVar1[5] == DAT_142f9ff20._5_1_);
      auVar31[6] = -(pcVar1[6] == DAT_142f9ff20._6_1_);
      auVar31[7] = -(pcVar1[7] == DAT_142f9ff20._7_1_);
      auVar31[8] = -(pcVar1[8] == DAT_142f9ff20._8_1_);
      auVar31[9] = -(pcVar1[9] == DAT_142f9ff20._9_1_);
      auVar31[10] = -(pcVar1[10] == DAT_142f9ff20._10_1_);
      auVar31[0xb] = -(pcVar1[0xb] == DAT_142f9ff20._11_1_);
      auVar31[0xc] = -(pcVar1[0xc] == DAT_142f9ff20._12_1_);
      auVar31[0xd] = -(pcVar1[0xd] == DAT_142f9ff20._13_1_);
      auVar31[0xe] = -(pcVar1[0xe] == DAT_142f9ff20._14_1_);
      auVar31[0xf] = -(pcVar1[0xf] == DAT_142f9ff20._15_1_);
      uVar12 = (ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe | (ushort)(auVar31[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar13 = uVar4 + uVar7 & *(ulonglong *)(param_2 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar13 * -0x18);
        auVar32[0] = -(*pcVar2 == DAT_142fa70d0);
        auVar32[1] = -(pcVar2[1] == UNK_142fa70d1);
        auVar32[2] = -(pcVar2[2] == UNK_142fa70d2);
        auVar32[3] = -(pcVar2[3] == UNK_142fa70d3);
        auVar32[4] = -(pcVar2[4] == UNK_142fa70d4);
        auVar32[5] = -(pcVar2[5] == UNK_142fa70d5);
        auVar32[6] = -(pcVar2[6] == UNK_142fa70d6);
        auVar32[7] = -(pcVar2[7] == UNK_142fa70d7);
        auVar32[8] = -(pcVar2[8] == UNK_142fa70d8);
        auVar32[9] = -(pcVar2[9] == UNK_142fa70d9);
        auVar32[10] = -(pcVar2[10] == UNK_142fa70da);
        auVar32[0xb] = -(pcVar2[0xb] == UNK_142fa70db);
        auVar32[0xc] = -(pcVar2[0xc] == UNK_142fa70dc);
        auVar32[0xd] = -(pcVar2[0xd] == UNK_142fa70dd);
        auVar32[0xe] = -(pcVar2[0xe] == UNK_142fa70de);
        auVar32[0xf] = -(pcVar2[0xf] == UNK_142fa70df);
        if ((ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
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
                    (ushort)(auVar32[0xf] >> 7) << 0xf) == 0xffff) {
          uVar7 = *(ulonglong *)(lVar3 + uVar13 * -0x18 + -8);
          if (((*(ulonglong *)(param_2 + 0x210) <= uVar7) ||
              (uVar7 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar7 * 8), uVar7 == 0)) ||
             (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + ~uVar7 * 0x40) == 0))
          goto LAB_140735782;
          goto LAB_140735798;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
      }
      auVar18[0] = -(*pcVar1 == -1);
      auVar18[1] = -(pcVar1[1] == -1);
      auVar18[2] = -(pcVar1[2] == -1);
      auVar18[3] = -(pcVar1[3] == -1);
      auVar18[4] = -(pcVar1[4] == -1);
      auVar18[5] = -(pcVar1[5] == -1);
      auVar18[6] = -(pcVar1[6] == -1);
      auVar18[7] = -(pcVar1[7] == -1);
      auVar18[8] = -(pcVar1[8] == -1);
      auVar18[9] = -(pcVar1[9] == -1);
      auVar18[10] = -(pcVar1[10] == -1);
      auVar18[0xb] = -(pcVar1[0xb] == -1);
      auVar18[0xc] = -(pcVar1[0xc] == -1);
      auVar18[0xd] = -(pcVar1[0xd] == -1);
      auVar18[0xe] = -(pcVar1[0xe] == -1);
      auVar18[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar18 >> 0x17,0) & 1) != 0) || (SUB161(auVar18 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar18 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar18 >> 0x3f,0) & 1) != 0) || (SUB161(auVar18 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar18 >> 0x4f,0) & 1) != 0) || (SUB161(auVar18 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar18 >> 0x5f,0) & 1) != 0) || (SUB161(auVar18 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar18 >> 0x6f,0) & 1) != 0) || (SUB161(auVar18 >> 0x77,0) & 1) != 0) ||
          auVar18[0xf] < '\0') break;
      uVar7 = uVar7 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_140735782:
  pdb_1411bf730(param_2);
  if (*(longlong *)(param_2 + 0x88) != 0) {
LAB_140735798:
    lVar3 = *(longlong *)(param_2 + 0x70);
    uVar7 = 0xf79e819824bc2d4f;
    lVar10 = 0;
    while( true ) {
      uVar7 = uVar7 & *(ulonglong *)(param_2 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar7);
      auVar33[0] = -(*pcVar1 == DAT_142e34950);
      auVar33[1] = -(pcVar1[1] == DAT_142e34950._1_1_);
      auVar33[2] = -(pcVar1[2] == DAT_142e34950._2_1_);
      auVar33[3] = -(pcVar1[3] == DAT_142e34950._3_1_);
      auVar33[4] = -(pcVar1[4] == DAT_142e34950._4_1_);
      auVar33[5] = -(pcVar1[5] == DAT_142e34950._5_1_);
      auVar33[6] = -(pcVar1[6] == DAT_142e34950._6_1_);
      auVar33[7] = -(pcVar1[7] == DAT_142e34950._7_1_);
      auVar33[8] = -(pcVar1[8] == DAT_142e34950._8_1_);
      auVar33[9] = -(pcVar1[9] == DAT_142e34950._9_1_);
      auVar33[10] = -(pcVar1[10] == DAT_142e34950._10_1_);
      auVar33[0xb] = -(pcVar1[0xb] == DAT_142e34950._11_1_);
      auVar33[0xc] = -(pcVar1[0xc] == DAT_142e34950._12_1_);
      auVar33[0xd] = -(pcVar1[0xd] == DAT_142e34950._13_1_);
      auVar33[0xe] = -(pcVar1[0xe] == DAT_142e34950._14_1_);
      auVar33[0xf] = -(pcVar1[0xf] == DAT_142e34950._15_1_);
      uVar12 = (ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe | (ushort)(auVar33[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar13 = uVar4 + uVar7 & *(ulonglong *)(param_2 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar13 * -0x18);
        auVar34[0] = -(*pcVar2 == DAT_142fa70e0);
        auVar34[1] = -(pcVar2[1] == UNK_142fa70e1);
        auVar34[2] = -(pcVar2[2] == UNK_142fa70e2);
        auVar34[3] = -(pcVar2[3] == UNK_142fa70e3);
        auVar34[4] = -(pcVar2[4] == UNK_142fa70e4);
        auVar34[5] = -(pcVar2[5] == UNK_142fa70e5);
        auVar34[6] = -(pcVar2[6] == UNK_142fa70e6);
        auVar34[7] = -(pcVar2[7] == UNK_142fa70e7);
        auVar34[8] = -(pcVar2[8] == UNK_142fa70e8);
        auVar34[9] = -(pcVar2[9] == UNK_142fa70e9);
        auVar34[10] = -(pcVar2[10] == UNK_142fa70ea);
        auVar34[0xb] = -(pcVar2[0xb] == UNK_142fa70eb);
        auVar34[0xc] = -(pcVar2[0xc] == UNK_142fa70ec);
        auVar34[0xd] = -(pcVar2[0xd] == UNK_142fa70ed);
        auVar34[0xe] = -(pcVar2[0xe] == UNK_142fa70ee);
        auVar34[0xf] = -(pcVar2[0xf] == UNK_142fa70ef);
        if ((ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar34[0xf] >> 7) << 0xf) == 0xffff) {
          uVar7 = *(ulonglong *)(lVar3 + uVar13 * -0x18 + -8);
          if (((*(ulonglong *)(param_2 + 0x210) <= uVar7) ||
              (uVar7 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar7 * 8), uVar7 == 0)) ||
             (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + ~uVar7 * 0x40) == 0))
          goto LAB_140735872;
          goto LAB_140735888;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
      }
      auVar19[0] = -(*pcVar1 == -1);
      auVar19[1] = -(pcVar1[1] == -1);
      auVar19[2] = -(pcVar1[2] == -1);
      auVar19[3] = -(pcVar1[3] == -1);
      auVar19[4] = -(pcVar1[4] == -1);
      auVar19[5] = -(pcVar1[5] == -1);
      auVar19[6] = -(pcVar1[6] == -1);
      auVar19[7] = -(pcVar1[7] == -1);
      auVar19[8] = -(pcVar1[8] == -1);
      auVar19[9] = -(pcVar1[9] == -1);
      auVar19[10] = -(pcVar1[10] == -1);
      auVar19[0xb] = -(pcVar1[0xb] == -1);
      auVar19[0xc] = -(pcVar1[0xc] == -1);
      auVar19[0xd] = -(pcVar1[0xd] == -1);
      auVar19[0xe] = -(pcVar1[0xe] == -1);
      auVar19[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 || (SUB161(auVar19 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar19 >> 0x17,0) & 1) != 0) || (SUB161(auVar19 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar19 >> 0x27,0) & 1) != 0) || (SUB161(auVar19 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar19 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar19 >> 0x3f,0) & 1) != 0) || (SUB161(auVar19 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar19 >> 0x4f,0) & 1) != 0) || (SUB161(auVar19 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar19 >> 0x5f,0) & 1) != 0) || (SUB161(auVar19 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar19 >> 0x6f,0) & 1) != 0) || (SUB161(auVar19 >> 0x77,0) & 1) != 0) ||
          auVar19[0xf] < '\0') break;
      uVar7 = uVar7 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_140735872:
  pdb_1411c0f30(param_2);
  if (*(longlong *)(param_2 + 0x88) != 0) {
LAB_140735888:
    lVar3 = *(longlong *)(param_2 + 0x70);
    uVar7 = 0xdf14f47678cc1eaf;
    lVar10 = 0;
    while( true ) {
      uVar7 = uVar7 & *(ulonglong *)(param_2 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar7);
      auVar35[0] = -(*pcVar1 == DAT_142e34c80);
      auVar35[1] = -(pcVar1[1] == DAT_142e34c80._1_1_);
      auVar35[2] = -(pcVar1[2] == DAT_142e34c80._2_1_);
      auVar35[3] = -(pcVar1[3] == DAT_142e34c80._3_1_);
      auVar35[4] = -(pcVar1[4] == DAT_142e34c80._4_1_);
      auVar35[5] = -(pcVar1[5] == DAT_142e34c80._5_1_);
      auVar35[6] = -(pcVar1[6] == DAT_142e34c80._6_1_);
      auVar35[7] = -(pcVar1[7] == DAT_142e34c80._7_1_);
      auVar35[8] = -(pcVar1[8] == DAT_142e34c80._8_1_);
      auVar35[9] = -(pcVar1[9] == DAT_142e34c80._9_1_);
      auVar35[10] = -(pcVar1[10] == DAT_142e34c80._10_1_);
      auVar35[0xb] = -(pcVar1[0xb] == DAT_142e34c80._11_1_);
      auVar35[0xc] = -(pcVar1[0xc] == DAT_142e34c80._12_1_);
      auVar35[0xd] = -(pcVar1[0xd] == DAT_142e34c80._13_1_);
      auVar35[0xe] = -(pcVar1[0xe] == DAT_142e34c80._14_1_);
      auVar35[0xf] = -(pcVar1[0xf] == DAT_142e34c80._15_1_);
      uVar12 = (ushort)(SUB161(auVar35 >> 7,0) & 1) | (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe | (ushort)(auVar35[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar13 = uVar4 + uVar7 & *(ulonglong *)(param_2 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar13 * -0x18);
        auVar36[0] = -(*pcVar2 == DAT_142fa70f0);
        auVar36[1] = -(pcVar2[1] == UNK_142fa70f1);
        auVar36[2] = -(pcVar2[2] == UNK_142fa70f2);
        auVar36[3] = -(pcVar2[3] == UNK_142fa70f3);
        auVar36[4] = -(pcVar2[4] == UNK_142fa70f4);
        auVar36[5] = -(pcVar2[5] == UNK_142fa70f5);
        auVar36[6] = -(pcVar2[6] == UNK_142fa70f6);
        auVar36[7] = -(pcVar2[7] == UNK_142fa70f7);
        auVar36[8] = -(pcVar2[8] == UNK_142fa70f8);
        auVar36[9] = -(pcVar2[9] == UNK_142fa70f9);
        auVar36[10] = -(pcVar2[10] == UNK_142fa70fa);
        auVar36[0xb] = -(pcVar2[0xb] == UNK_142fa70fb);
        auVar36[0xc] = -(pcVar2[0xc] == UNK_142fa70fc);
        auVar36[0xd] = -(pcVar2[0xd] == UNK_142fa70fd);
        auVar36[0xe] = -(pcVar2[0xe] == UNK_142fa70fe);
        auVar36[0xf] = -(pcVar2[0xf] == UNK_142fa70ff);
        if ((ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
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
                    (ushort)(auVar36[0xf] >> 7) << 0xf) == 0xffff) {
          uVar7 = *(ulonglong *)(lVar3 + uVar13 * -0x18 + -8);
          if (((*(ulonglong *)(param_2 + 0x210) <= uVar7) ||
              (uVar7 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar7 * 8), uVar7 == 0)) ||
             (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + ~uVar7 * 0x40) == 0))
          goto LAB_140735962;
          goto LAB_140735978;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
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
      if ((((((((((((((((SUB161(auVar20 >> 7,0) & 1) != 0 || (SUB161(auVar20 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar20 >> 0x17,0) & 1) != 0) || (SUB161(auVar20 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar20 >> 0x27,0) & 1) != 0) || (SUB161(auVar20 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar20 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar20 >> 0x3f,0) & 1) != 0) || (SUB161(auVar20 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar20 >> 0x4f,0) & 1) != 0) || (SUB161(auVar20 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar20 >> 0x5f,0) & 1) != 0) || (SUB161(auVar20 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar20 >> 0x6f,0) & 1) != 0) || (SUB161(auVar20 >> 0x77,0) & 1) != 0) ||
          auVar20[0xf] < '\0') break;
      uVar7 = uVar7 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_140735962:
  pdb_1411c2130(param_2);
  if (*(longlong *)(param_2 + 0x88) != 0) {
LAB_140735978:
    lVar3 = *(longlong *)(param_2 + 0x70);
    uVar7 = 0x1d8a64477239ded7;
    lVar10 = 0;
    while( true ) {
      uVar7 = uVar7 & *(ulonglong *)(param_2 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar7);
      auVar37[0] = -(*pcVar1 == DAT_142e34ec0);
      auVar37[1] = -(pcVar1[1] == DAT_142e34ec0._1_1_);
      auVar37[2] = -(pcVar1[2] == DAT_142e34ec0._2_1_);
      auVar37[3] = -(pcVar1[3] == DAT_142e34ec0._3_1_);
      auVar37[4] = -(pcVar1[4] == DAT_142e34ec0._4_1_);
      auVar37[5] = -(pcVar1[5] == DAT_142e34ec0._5_1_);
      auVar37[6] = -(pcVar1[6] == DAT_142e34ec0._6_1_);
      auVar37[7] = -(pcVar1[7] == DAT_142e34ec0._7_1_);
      auVar37[8] = -(pcVar1[8] == DAT_142e34ec0._8_1_);
      auVar37[9] = -(pcVar1[9] == DAT_142e34ec0._9_1_);
      auVar37[10] = -(pcVar1[10] == DAT_142e34ec0._10_1_);
      auVar37[0xb] = -(pcVar1[0xb] == DAT_142e34ec0._11_1_);
      auVar37[0xc] = -(pcVar1[0xc] == DAT_142e34ec0._12_1_);
      auVar37[0xd] = -(pcVar1[0xd] == DAT_142e34ec0._13_1_);
      auVar37[0xe] = -(pcVar1[0xe] == DAT_142e34ec0._14_1_);
      auVar37[0xf] = -(pcVar1[0xf] == DAT_142e34ec0._15_1_);
      uVar12 = (ushort)(SUB161(auVar37 >> 7,0) & 1) | (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe | (ushort)(auVar37[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar13 = uVar4 + uVar7 & *(ulonglong *)(param_2 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar13 * -0x18);
        auVar38[0] = -(*pcVar2 == DAT_142fa7100);
        auVar38[1] = -(pcVar2[1] == UNK_142fa7101);
        auVar38[2] = -(pcVar2[2] == UNK_142fa7102);
        auVar38[3] = -(pcVar2[3] == UNK_142fa7103);
        auVar38[4] = -(pcVar2[4] == UNK_142fa7104);
        auVar38[5] = -(pcVar2[5] == UNK_142fa7105);
        auVar38[6] = -(pcVar2[6] == UNK_142fa7106);
        auVar38[7] = -(pcVar2[7] == UNK_142fa7107);
        auVar38[8] = -(pcVar2[8] == UNK_142fa7108);
        auVar38[9] = -(pcVar2[9] == UNK_142fa7109);
        auVar38[10] = -(pcVar2[10] == UNK_142fa710a);
        auVar38[0xb] = -(pcVar2[0xb] == UNK_142fa710b);
        auVar38[0xc] = -(pcVar2[0xc] == UNK_142fa710c);
        auVar38[0xd] = -(pcVar2[0xd] == UNK_142fa710d);
        auVar38[0xe] = -(pcVar2[0xe] == UNK_142fa710e);
        auVar38[0xf] = -(pcVar2[0xf] == UNK_142fa710f);
        if ((ushort)((ushort)(SUB161(auVar38 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar38[0xf] >> 7) << 0xf) == 0xffff) {
          uVar7 = *(ulonglong *)(lVar3 + uVar13 * -0x18 + -8);
          if (((*(ulonglong *)(param_2 + 0x210) <= uVar7) ||
              (uVar7 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar7 * 8), uVar7 == 0)) ||
             (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + ~uVar7 * 0x40) == 0))
          goto LAB_140735a52;
          goto LAB_140735a68;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
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
      if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 || (SUB161(auVar21 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar21 >> 0x17,0) & 1) != 0) || (SUB161(auVar21 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar21 >> 0x27,0) & 1) != 0) || (SUB161(auVar21 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar21 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar21 >> 0x3f,0) & 1) != 0) || (SUB161(auVar21 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar21 >> 0x4f,0) & 1) != 0) || (SUB161(auVar21 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar21 >> 0x5f,0) & 1) != 0) || (SUB161(auVar21 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar21 >> 0x6f,0) & 1) != 0) || (SUB161(auVar21 >> 0x77,0) & 1) != 0) ||
          auVar21[0xf] < '\0') break;
      uVar7 = uVar7 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_140735a52:
  pdb_1411c1b30(param_2);
  if (*(longlong *)(param_2 + 0x88) != 0) {
LAB_140735a68:
    lVar3 = *(longlong *)(param_2 + 0x70);
    uVar7 = 0x3ae6cffe3072e239;
    lVar10 = 0;
    while( true ) {
      uVar7 = uVar7 & *(ulonglong *)(param_2 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar7);
      auVar39[0] = -(*pcVar1 == DAT_142e34730);
      auVar39[1] = -(pcVar1[1] == DAT_142e34730._1_1_);
      auVar39[2] = -(pcVar1[2] == DAT_142e34730._2_1_);
      auVar39[3] = -(pcVar1[3] == DAT_142e34730._3_1_);
      auVar39[4] = -(pcVar1[4] == DAT_142e34730._4_1_);
      auVar39[5] = -(pcVar1[5] == DAT_142e34730._5_1_);
      auVar39[6] = -(pcVar1[6] == DAT_142e34730._6_1_);
      auVar39[7] = -(pcVar1[7] == DAT_142e34730._7_1_);
      auVar39[8] = -(pcVar1[8] == DAT_142e34730._8_1_);
      auVar39[9] = -(pcVar1[9] == DAT_142e34730._9_1_);
      auVar39[10] = -(pcVar1[10] == DAT_142e34730._10_1_);
      auVar39[0xb] = -(pcVar1[0xb] == DAT_142e34730._11_1_);
      auVar39[0xc] = -(pcVar1[0xc] == DAT_142e34730._12_1_);
      auVar39[0xd] = -(pcVar1[0xd] == DAT_142e34730._13_1_);
      auVar39[0xe] = -(pcVar1[0xe] == DAT_142e34730._14_1_);
      auVar39[0xf] = -(pcVar1[0xf] == DAT_142e34730._15_1_);
      uVar12 = (ushort)(SUB161(auVar39 >> 7,0) & 1) | (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe | (ushort)(auVar39[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar13 = uVar4 + uVar7 & *(ulonglong *)(param_2 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar13 * -0x18);
        auVar40[0] = -(*pcVar2 == DAT_142fa7110);
        auVar40[1] = -(pcVar2[1] == UNK_142fa7111);
        auVar40[2] = -(pcVar2[2] == UNK_142fa7112);
        auVar40[3] = -(pcVar2[3] == UNK_142fa7113);
        auVar40[4] = -(pcVar2[4] == UNK_142fa7114);
        auVar40[5] = -(pcVar2[5] == UNK_142fa7115);
        auVar40[6] = -(pcVar2[6] == UNK_142fa7116);
        auVar40[7] = -(pcVar2[7] == UNK_142fa7117);
        auVar40[8] = -(pcVar2[8] == UNK_142fa7118);
        auVar40[9] = -(pcVar2[9] == UNK_142fa7119);
        auVar40[10] = -(pcVar2[10] == UNK_142fa711a);
        auVar40[0xb] = -(pcVar2[0xb] == UNK_142fa711b);
        auVar40[0xc] = -(pcVar2[0xc] == UNK_142fa711c);
        auVar40[0xd] = -(pcVar2[0xd] == UNK_142fa711d);
        auVar40[0xe] = -(pcVar2[0xe] == UNK_142fa711e);
        auVar40[0xf] = -(pcVar2[0xf] == UNK_142fa711f);
        if ((ushort)((ushort)(SUB161(auVar40 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar40[0xf] >> 7) << 0xf) == 0xffff) {
          uVar7 = *(ulonglong *)(lVar3 + uVar13 * -0x18 + -8);
          if (((*(ulonglong *)(param_2 + 0x210) <= uVar7) ||
              (uVar7 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar7 * 8), uVar7 == 0)) ||
             (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + ~uVar7 * 0x40) == 0))
          goto LAB_140735b42;
          goto LAB_140735b4a;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
      }
      auVar22[0] = -(*pcVar1 == -1);
      auVar22[1] = -(pcVar1[1] == -1);
      auVar22[2] = -(pcVar1[2] == -1);
      auVar22[3] = -(pcVar1[3] == -1);
      auVar22[4] = -(pcVar1[4] == -1);
      auVar22[5] = -(pcVar1[5] == -1);
      auVar22[6] = -(pcVar1[6] == -1);
      auVar22[7] = -(pcVar1[7] == -1);
      auVar22[8] = -(pcVar1[8] == -1);
      auVar22[9] = -(pcVar1[9] == -1);
      auVar22[10] = -(pcVar1[10] == -1);
      auVar22[0xb] = -(pcVar1[0xb] == -1);
      auVar22[0xc] = -(pcVar1[0xc] == -1);
      auVar22[0xd] = -(pcVar1[0xd] == -1);
      auVar22[0xe] = -(pcVar1[0xe] == -1);
      auVar22[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) != 0 || (SUB161(auVar22 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar22 >> 0x17,0) & 1) != 0) || (SUB161(auVar22 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar22 >> 0x27,0) & 1) != 0) || (SUB161(auVar22 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar22 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar22 >> 0x3f,0) & 1) != 0) || (SUB161(auVar22 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar22 >> 0x4f,0) & 1) != 0) || (SUB161(auVar22 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar22 >> 0x5f,0) & 1) != 0) || (SUB161(auVar22 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar22 >> 0x6f,0) & 1) != 0) || (SUB161(auVar22 >> 0x77,0) & 1) != 0) ||
          auVar22[0xf] < '\0') break;
      uVar7 = uVar7 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_140735b42:
  pdb_1411bfd30(param_2);
LAB_140735b4a:
  pdb_1411a9080(param_2);
  pdb_1411c44a0(&uStack_178);
  uStack_98 = CONCAT71(uStack_98._1_7_,7);
  puVar8 = &uStack_98;
  uVar6 = pdb_1411ac1a0(_DAT_143ca8dd0,puVar8,&UNK_1432a7688);
  pdb_140676be0(&uStack_178,uVar6,puVar8);
  uStack_188 = uStack_118;
  uStack_180 = uStack_110;
  uStack_198 = uStack_128;
  uStack_190 = uStack_120;
  uStack_1a8 = uStack_138;
  uStack_1a0 = uStack_130;
  uStack_1b8 = uStack_148;
  uStack_1b0 = uStack_140;
  uStack_1c8 = uStack_158;
  uStack_1c0 = uStack_150;
  uStack_1d8 = uStack_168;
  uStack_1d0 = uStack_160;
  uStack_1e8 = uStack_178;
  uStack_1e0 = uStack_170;
  pdb_1411c6180(&uStack_98);
  uStack_21 = 0x24;
  puVar9 = &uStack_21;
  uVar6 = pdb_1411ac1a0(_DAT_143ca8dd0,puVar9,&UNK_1432a7688);
  pdb_140676be0(&uStack_98,uVar6,puVar9);
  uStack_a8 = uStack_38;
  uStack_a0 = uStack_30;
  uStack_b8 = uStack_48;
  uStack_b0 = uStack_40;
  uStack_c8 = uStack_58;
  uStack_c0 = uStack_50;
  uStack_d8 = uStack_68;
  uStack_d0 = uStack_60;
  uStack_e8 = uStack_78;
  uStack_e0 = uStack_70;
  uStack_f8 = uStack_88;
  uStack_f0 = uStack_80;
  uStack_108 = uStack_98;
  uStack_100 = uStack_90;
  uStack_178 = uStack_1e8;
  uStack_170 = uStack_1e0;
  uStack_168 = uStack_1d8;
  uStack_160 = uStack_1d0;
  uStack_158 = uStack_1c8;
  uStack_150 = uStack_1c0;
  uStack_148 = uStack_1b8;
  uStack_140 = uStack_1b0;
  uStack_138 = uStack_1a8;
  uStack_130 = uStack_1a0;
  uStack_128 = uStack_198;
  uStack_120 = uStack_190;
  uStack_118 = uStack_188;
  uStack_110 = uStack_180;
  pdb_1411a94d0(param_2,&uStack_178);
  pdb_1411c4f00(&uStack_178);
  uStack_1e8 = CONCAT71(uStack_1e8._1_7_,0x2c);
  puVar8 = &uStack_1e8;
  uVar6 = pdb_1411ac1a0(_DAT_143ca8dd0,puVar8,&UNK_1432a7688);
  pdb_140676be0(&uStack_178,uVar6,puVar8);
  uStack_38 = uStack_118;
  uStack_30 = uStack_110;
  uStack_48 = uStack_128;
  uStack_40 = uStack_120;
  uStack_58 = uStack_138;
  uStack_50 = uStack_130;
  uStack_68 = uStack_148;
  uStack_60 = uStack_140;
  uStack_78 = uStack_158;
  uStack_70 = uStack_150;
  uStack_88 = uStack_168;
  uStack_80 = uStack_160;
  uStack_98 = uStack_178;
  uStack_90 = uStack_170;
  pdb_1411a9300(param_2,&uStack_98);
  return;
}

