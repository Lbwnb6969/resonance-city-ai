// VA 0x140a94750, PDB extent 1461 bytes
// country_core::resources::session::impl$10::build
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::session::impl$10::build
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
   Extent: 1461 */

void pdb_140a94750(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char *pcVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  byte *pbVar8;
  ulonglong uVar9;
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
  undefined1 *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1b8;
  undefined1 uStack_1b4;
  undefined8 uStack_1b0;
  undefined4 uStack_190;
  undefined1 uStack_18c;
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
  undefined1 *puStack_118;
  code *pcStack_110;
  undefined1 *puStack_108;
  code *pcStack_100;
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
  undefined1 uStack_38;
  undefined1 uStack_21;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  puStack_118 = (undefined1 *)0x0;
  pcStack_110 = (code *)0x4;
  puStack_108 = (undefined1 *)0x0;
  uVar6 = pdb_1418feae0(param_2,&puStack_118);
  pcStack_100 = (code *)0x8000000000000001;
  puStack_118 = (undefined1 *)0x0;
  pcStack_110 = (code *)0x8;
  puStack_108 = (undefined1 *)0x0;
  uStack_38 = 0;
  uStack_40 = 0;
  lVar7 = pdb_14190cf40(uVar6,&puStack_118);
  pdb_140c94e70(lVar7);
  pdb_14007ee60();
  pbVar8 = pub_1406abab0(0x28,8);
  if (pbVar8 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x28);
  }
  pbVar8[0] = 0;
  pbVar8[1] = 0;
  pbVar8[2] = 0;
  pbVar8[3] = 0;
  pbVar8[4] = 0;
  pbVar8[5] = 0;
  pbVar8[6] = 0;
  pbVar8[7] = 0;
  pbVar8[0x20] = 0;
  pbVar8[0x21] = 0;
  pbVar8[0x22] = 0;
  pbVar8[0x23] = 0;
  pbVar8[0x24] = 0;
  pdb_140ed3cd0(&puStack_118,pbVar8,&UNK_1433564f8);
  pdb_1417e42c0(&puStack_248,&puStack_118);
  puStack_118 = &uStack_21;
  pcStack_110 = pdb_140f33ec0;
  pcStack_100 = pdb_140f33ec0;
  puStack_108 = puStack_118;
  pdb_140f60760(&uStack_188,&UNK_1430693bf,&puStack_118);
  pdb_14049e030(&uStack_188);
  pdb_14007ee60();
  pbVar8 = pub_1406abab0(0x28,8);
  if (pbVar8 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x28);
  }
  pbVar8[0] = 0;
  pbVar8[1] = 0;
  pbVar8[2] = 0;
  pbVar8[3] = 0;
  pbVar8[4] = 0;
  pbVar8[5] = 0;
  pbVar8[6] = 0;
  pbVar8[7] = 0;
  pbVar8[0x20] = 0;
  pbVar8[0x21] = 0;
  pbVar8[0x22] = 0;
  pbVar8[0x23] = 0;
  pbVar8[0x24] = 0;
  pdb_140ed3cd0(&puStack_118,pbVar8,&UNK_143356450);
  uStack_1d8 = 0;
  uStack_1b8 = 0;
  uStack_1b4 = 0;
  uStack_1b0 = 0;
  uStack_190 = 0;
  uStack_18c = 0;
  pdb_1417e27e0(&uStack_188,&puStack_118);
  puStack_118 = puStack_248;
  pcStack_110 = (code *)uStack_240;
  puStack_108 = (undefined1 *)uStack_238;
  pcStack_100 = (code *)uStack_230;
  uStack_f8 = uStack_228;
  uStack_f0 = uStack_220;
  uStack_e8 = uStack_218;
  uStack_e0 = uStack_210;
  uStack_d8 = uStack_208;
  uStack_d0 = uStack_200;
  uStack_c8 = uStack_1f8;
  uStack_c0 = uStack_1f0;
  uStack_b8 = uStack_1e8;
  uStack_b0 = uStack_1e0;
  uStack_a8 = uStack_188;
  uStack_a0 = uStack_180;
  uStack_98 = uStack_178;
  uStack_90 = uStack_170;
  uStack_88 = uStack_168;
  uStack_80 = uStack_160;
  uStack_78 = uStack_158;
  uStack_70 = uStack_150;
  uStack_68 = uStack_148;
  uStack_60 = uStack_140;
  uStack_58 = uStack_138;
  uStack_50 = uStack_130;
  uStack_48 = uStack_128;
  uStack_40 = uStack_120;
  pdb_140c971f0(lVar7,&puStack_118);
  if (*(longlong *)(lVar7 + 0x88) != 0) {
    lVar3 = *(longlong *)(lVar7 + 0x70);
    uVar9 = 0xf36fe14336ef5900;
    lVar10 = 0;
    while( true ) {
      uVar9 = uVar9 & *(ulonglong *)(lVar7 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar9);
      auVar17[0] = -(*pcVar1 == DAT_142e33cf0);
      auVar17[1] = -(pcVar1[1] == DAT_142e33cf0._1_1_);
      auVar17[2] = -(pcVar1[2] == DAT_142e33cf0._2_1_);
      auVar17[3] = -(pcVar1[3] == DAT_142e33cf0._3_1_);
      auVar17[4] = -(pcVar1[4] == DAT_142e33cf0._4_1_);
      auVar17[5] = -(pcVar1[5] == DAT_142e33cf0._5_1_);
      auVar17[6] = -(pcVar1[6] == DAT_142e33cf0._6_1_);
      auVar17[7] = -(pcVar1[7] == DAT_142e33cf0._7_1_);
      auVar17[8] = -(pcVar1[8] == DAT_142e33cf0._8_1_);
      auVar17[9] = -(pcVar1[9] == DAT_142e33cf0._9_1_);
      auVar17[10] = -(pcVar1[10] == DAT_142e33cf0._10_1_);
      auVar17[0xb] = -(pcVar1[0xb] == DAT_142e33cf0._11_1_);
      auVar17[0xc] = -(pcVar1[0xc] == DAT_142e33cf0._12_1_);
      auVar17[0xd] = -(pcVar1[0xd] == DAT_142e33cf0._13_1_);
      auVar17[0xe] = -(pcVar1[0xe] == DAT_142e33cf0._14_1_);
      auVar17[0xf] = -(pcVar1[0xf] == DAT_142e33cf0._15_1_);
      uVar12 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe | (ushort)(auVar17[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar13 = uVar4 + uVar9 & *(ulonglong *)(lVar7 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar13 * -0x18);
        auVar18[0] = -(*pcVar2 == DAT_142e34010);
        auVar18[1] = -(pcVar2[1] == UNK_142e34011);
        auVar18[2] = -(pcVar2[2] == UNK_142e34012);
        auVar18[3] = -(pcVar2[3] == UNK_142e34013);
        auVar18[4] = -(pcVar2[4] == UNK_142e34014);
        auVar18[5] = -(pcVar2[5] == UNK_142e34015);
        auVar18[6] = -(pcVar2[6] == UNK_142e34016);
        auVar18[7] = -(pcVar2[7] == UNK_142e34017);
        auVar18[8] = -(pcVar2[8] == UNK_142e34018);
        auVar18[9] = -(pcVar2[9] == UNK_142e34019);
        auVar18[10] = -(pcVar2[10] == UNK_142e3401a);
        auVar18[0xb] = -(pcVar2[0xb] == UNK_142e3401b);
        auVar18[0xc] = -(pcVar2[0xc] == UNK_142e3401c);
        auVar18[0xd] = -(pcVar2[0xd] == UNK_142e3401d);
        auVar18[0xe] = -(pcVar2[0xe] == UNK_142e3401e);
        auVar18[0xf] = -(pcVar2[0xf] == UNK_142e3401f);
        if ((ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar18[0xf] >> 7) << 0xf) == 0xffff) {
          uVar9 = *(ulonglong *)(lVar3 + uVar13 * -0x18 + -8);
          if (((*(ulonglong *)(lVar7 + 0x210) <= uVar9) ||
              (uVar9 = *(ulonglong *)(*(longlong *)(lVar7 + 0x208) + uVar9 * 8), uVar9 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar7 + 0x1d8) + 0x20 + ~uVar9 * 0x40) == 0))
          goto LAB_140a94ac2;
          goto LAB_140a94ad8;
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
      uVar9 = uVar9 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_140a94ac2:
  pdb_1418e07f0(lVar7);
  if (*(longlong *)(lVar7 + 0x88) != 0) {
LAB_140a94ad8:
    lVar3 = *(longlong *)(lVar7 + 0x70);
    uVar9 = 0x11f9e73eb11d88bb;
    lVar10 = 0;
    while( true ) {
      uVar9 = uVar9 & *(ulonglong *)(lVar7 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar9);
      auVar19[0] = -(*pcVar1 == DAT_142e33df0);
      auVar19[1] = -(pcVar1[1] == DAT_142e33df0._1_1_);
      auVar19[2] = -(pcVar1[2] == DAT_142e33df0._2_1_);
      auVar19[3] = -(pcVar1[3] == DAT_142e33df0._3_1_);
      auVar19[4] = -(pcVar1[4] == DAT_142e33df0._4_1_);
      auVar19[5] = -(pcVar1[5] == DAT_142e33df0._5_1_);
      auVar19[6] = -(pcVar1[6] == DAT_142e33df0._6_1_);
      auVar19[7] = -(pcVar1[7] == DAT_142e33df0._7_1_);
      auVar19[8] = -(pcVar1[8] == DAT_142e33df0._8_1_);
      auVar19[9] = -(pcVar1[9] == DAT_142e33df0._9_1_);
      auVar19[10] = -(pcVar1[10] == DAT_142e33df0._10_1_);
      auVar19[0xb] = -(pcVar1[0xb] == DAT_142e33df0._11_1_);
      auVar19[0xc] = -(pcVar1[0xc] == DAT_142e33df0._12_1_);
      auVar19[0xd] = -(pcVar1[0xd] == DAT_142e33df0._13_1_);
      auVar19[0xe] = -(pcVar1[0xe] == DAT_142e33df0._14_1_);
      auVar19[0xf] = -(pcVar1[0xf] == DAT_142e33df0._15_1_);
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
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar13 = uVar4 + uVar9 & *(ulonglong *)(lVar7 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar13 * -0x18);
        auVar20[0] = -(*pcVar2 == DAT_142e33e00);
        auVar20[1] = -(pcVar2[1] == UNK_142e33e01);
        auVar20[2] = -(pcVar2[2] == UNK_142e33e02);
        auVar20[3] = -(pcVar2[3] == UNK_142e33e03);
        auVar20[4] = -(pcVar2[4] == UNK_142e33e04);
        auVar20[5] = -(pcVar2[5] == UNK_142e33e05);
        auVar20[6] = -(pcVar2[6] == UNK_142e33e06);
        auVar20[7] = -(pcVar2[7] == UNK_142e33e07);
        auVar20[8] = -(pcVar2[8] == UNK_142e33e08);
        auVar20[9] = -(pcVar2[9] == UNK_142e33e09);
        auVar20[10] = -(pcVar2[10] == UNK_142e33e0a);
        auVar20[0xb] = -(pcVar2[0xb] == UNK_142e33e0b);
        auVar20[0xc] = -(pcVar2[0xc] == UNK_142e33e0c);
        auVar20[0xd] = -(pcVar2[0xd] == UNK_142e33e0d);
        auVar20[0xe] = -(pcVar2[0xe] == UNK_142e33e0e);
        auVar20[0xf] = -(pcVar2[0xf] == UNK_142e33e0f);
        if ((ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar20[0xf] >> 7) << 0xf) == 0xffff) {
          uVar9 = *(ulonglong *)(lVar3 + uVar13 * -0x18 + -8);
          if (((*(ulonglong *)(lVar7 + 0x210) <= uVar9) ||
              (uVar9 = *(ulonglong *)(*(longlong *)(lVar7 + 0x208) + uVar9 * 8), uVar9 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar7 + 0x1d8) + 0x20 + ~uVar9 * 0x40) == 0))
          goto LAB_140a94bb2;
          goto LAB_140a94bc8;
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
      uVar9 = uVar9 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_140a94bb2:
  pdb_1418e49f0(lVar7);
  if (*(longlong *)(lVar7 + 0x88) != 0) {
LAB_140a94bc8:
    lVar3 = *(longlong *)(lVar7 + 0x70);
    uVar9 = 0xe6e5d608398c244;
    lVar10 = 0;
    while( true ) {
      uVar9 = uVar9 & *(ulonglong *)(lVar7 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar9);
      auVar21[0] = -(*pcVar1 == DAT_142e33ff0);
      auVar21[1] = -(pcVar1[1] == DAT_142e33ff0._1_1_);
      auVar21[2] = -(pcVar1[2] == DAT_142e33ff0._2_1_);
      auVar21[3] = -(pcVar1[3] == DAT_142e33ff0._3_1_);
      auVar21[4] = -(pcVar1[4] == DAT_142e33ff0._4_1_);
      auVar21[5] = -(pcVar1[5] == DAT_142e33ff0._5_1_);
      auVar21[6] = -(pcVar1[6] == DAT_142e33ff0._6_1_);
      auVar21[7] = -(pcVar1[7] == DAT_142e33ff0._7_1_);
      auVar21[8] = -(pcVar1[8] == DAT_142e33ff0._8_1_);
      auVar21[9] = -(pcVar1[9] == DAT_142e33ff0._9_1_);
      auVar21[10] = -(pcVar1[10] == DAT_142e33ff0._10_1_);
      auVar21[0xb] = -(pcVar1[0xb] == DAT_142e33ff0._11_1_);
      auVar21[0xc] = -(pcVar1[0xc] == DAT_142e33ff0._12_1_);
      auVar21[0xd] = -(pcVar1[0xd] == DAT_142e33ff0._13_1_);
      auVar21[0xe] = -(pcVar1[0xe] == DAT_142e33ff0._14_1_);
      auVar21[0xf] = -(pcVar1[0xf] == DAT_142e33ff0._15_1_);
      uVar12 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe | (ushort)(auVar21[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar13 = uVar4 + uVar9 & *(ulonglong *)(lVar7 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar13 * -0x18);
        auVar22[0] = -(*pcVar2 == DAT_143044fd0);
        auVar22[1] = -(pcVar2[1] == UNK_143044fd1);
        auVar22[2] = -(pcVar2[2] == UNK_143044fd2);
        auVar22[3] = -(pcVar2[3] == UNK_143044fd3);
        auVar22[4] = -(pcVar2[4] == UNK_143044fd4);
        auVar22[5] = -(pcVar2[5] == UNK_143044fd5);
        auVar22[6] = -(pcVar2[6] == UNK_143044fd6);
        auVar22[7] = -(pcVar2[7] == UNK_143044fd7);
        auVar22[8] = -(pcVar2[8] == UNK_143044fd8);
        auVar22[9] = -(pcVar2[9] == UNK_143044fd9);
        auVar22[10] = -(pcVar2[10] == UNK_143044fda);
        auVar22[0xb] = -(pcVar2[0xb] == UNK_143044fdb);
        auVar22[0xc] = -(pcVar2[0xc] == UNK_143044fdc);
        auVar22[0xd] = -(pcVar2[0xd] == UNK_143044fdd);
        auVar22[0xe] = -(pcVar2[0xe] == UNK_143044fde);
        auVar22[0xf] = -(pcVar2[0xf] == UNK_143044fdf);
        if ((ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
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
                    (ushort)(auVar22[0xf] >> 7) << 0xf) == 0xffff) {
          uVar9 = *(ulonglong *)(lVar3 + uVar13 * -0x18 + -8);
          if (((uVar9 < *(ulonglong *)(lVar7 + 0x210)) &&
              (uVar9 = *(ulonglong *)(*(longlong *)(lVar7 + 0x208) + uVar9 * 8), uVar9 != 0)) &&
             (*(longlong *)(*(longlong *)(lVar7 + 0x1d8) + 0x20 + ~uVar9 * 0x40) != 0)) {
            return;
          }
          goto LAB_140a94ca2;
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
      uVar9 = uVar9 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_140a94ca2:
  pdb_1418e85f0(lVar7);
  return;
}

