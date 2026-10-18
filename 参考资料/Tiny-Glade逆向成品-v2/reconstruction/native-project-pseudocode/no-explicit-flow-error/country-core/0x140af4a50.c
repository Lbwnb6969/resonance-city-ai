// VA 0x140af4a50, PDB extent 867 bytes
// country_core::systems::render_loop::draw_passes::draw_lists::impl$0::indexed_indirect::draw_fn
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/draw_lists.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::draw_passes::draw_lists::impl$0::indexed_indirect::draw_fn
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/draw_lists.rs
   Extent: 867 */

void pdb_140af4a50(int *param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong param_5)

{
  char *pcVar1;
  char *pcVar2;
  longlong *plVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ushort uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  byte bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  longlong alStack_50 [3];
  
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar7 = *(longlong *)(param_2 + 0x70);
    uVar8 = *(ulonglong *)(param_2 + 0x78);
    uVar13 = 0x59a9ebec036a11fe;
    lVar15 = 0;
    while( true ) {
      uVar13 = uVar13 & uVar8;
      pcVar1 = (char *)(lVar7 + uVar13);
      auVar18[0] = -(*pcVar1 == DAT_142e33bd0);
      auVar18[1] = -(pcVar1[1] == UNK_142e33bd1);
      auVar18[2] = -(pcVar1[2] == UNK_142e33bd2);
      auVar18[3] = -(pcVar1[3] == UNK_142e33bd3);
      auVar18[4] = -(pcVar1[4] == UNK_142e33bd4);
      auVar18[5] = -(pcVar1[5] == UNK_142e33bd5);
      auVar18[6] = -(pcVar1[6] == UNK_142e33bd6);
      auVar18[7] = -(pcVar1[7] == UNK_142e33bd7);
      auVar18[8] = -(pcVar1[8] == UNK_142e33bd8);
      auVar18[9] = -(pcVar1[9] == UNK_142e33bd9);
      auVar18[10] = -(pcVar1[10] == UNK_142e33bda);
      auVar18[0xb] = -(pcVar1[0xb] == UNK_142e33bdb);
      auVar18[0xc] = -(pcVar1[0xc] == UNK_142e33bdc);
      auVar18[0xd] = -(pcVar1[0xd] == UNK_142e33bdd);
      auVar18[0xe] = -(pcVar1[0xe] == UNK_142e33bde);
      auVar18[0xf] = -(pcVar1[0xf] == UNK_142e33bdf);
      uVar10 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe | (ushort)(auVar18[0xf] >> 7) << 0xf;
      uVar12 = (uint)uVar10;
      while (uVar10 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar12; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar11 = uVar5 + uVar13 & uVar8;
        pcVar2 = (char *)(lVar7 + -0x18 + uVar11 * -0x18);
        auVar23[0] = -(*pcVar2 == DAT_142e34980);
        auVar23[1] = -(pcVar2[1] == UNK_142e34981);
        auVar23[2] = -(pcVar2[2] == UNK_142e34982);
        auVar23[3] = -(pcVar2[3] == UNK_142e34983);
        auVar23[4] = -(pcVar2[4] == UNK_142e34984);
        auVar23[5] = -(pcVar2[5] == UNK_142e34985);
        auVar23[6] = -(pcVar2[6] == UNK_142e34986);
        auVar23[7] = -(pcVar2[7] == UNK_142e34987);
        auVar23[8] = -(pcVar2[8] == UNK_142e34988);
        auVar23[9] = -(pcVar2[9] == UNK_142e34989);
        auVar23[10] = -(pcVar2[10] == UNK_142e3498a);
        auVar23[0xb] = -(pcVar2[0xb] == UNK_142e3498b);
        auVar23[0xc] = -(pcVar2[0xc] == UNK_142e3498c);
        auVar23[0xd] = -(pcVar2[0xd] == UNK_142e3498d);
        auVar23[0xe] = -(pcVar2[0xe] == UNK_142e3498e);
        auVar23[0xf] = -(pcVar2[0xf] == UNK_142e3498f);
        if ((ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
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
                    (ushort)(auVar23[0xf] >> 7) << 0xf) == 0xffff) {
          uVar13 = *(ulonglong *)(lVar7 + uVar11 * -0x18 + -8);
          if (*(ulonglong *)(param_2 + 0x210) <= uVar13) goto LAB_140af4cda;
          uVar13 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar13 * 8);
          if (uVar13 == 0) goto LAB_140af4cda;
          lVar15 = *(longlong *)(param_2 + 0x1d8);
          lVar16 = ~uVar13 * 0x40;
          if (*(longlong *)(lVar15 + 0x20 + lVar16) == 0) goto LAB_140af4cda;
          plVar3 = *(longlong **)(lVar16 + lVar15 + 0x10);
          uVar13 = 0x1d6a82b468dfb8a2;
          lVar16 = 0;
          goto LAB_140af4b7c;
        }
        uVar10 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar10);
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
      uVar13 = uVar13 + lVar15 + 0x10;
      lVar15 = lVar15 + 0x10;
    }
  }
LAB_140af4cda:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143051090);
LAB_140af4b7c:
  uVar13 = uVar13 & uVar8;
  auVar18 = *(undefined1 (*) [16])(lVar7 + uVar13);
  auVar24[0] = -(auVar18[0] == DAT_142e34ec0);
  auVar24[1] = -(auVar18[1] == DAT_142e34ec0._1_1_);
  auVar24[2] = -(auVar18[2] == DAT_142e34ec0._2_1_);
  auVar24[3] = -(auVar18[3] == DAT_142e34ec0._3_1_);
  auVar24[4] = -(auVar18[4] == DAT_142e34ec0._4_1_);
  auVar24[5] = -(auVar18[5] == DAT_142e34ec0._5_1_);
  auVar24[6] = -(auVar18[6] == DAT_142e34ec0._6_1_);
  auVar24[7] = -(auVar18[7] == DAT_142e34ec0._7_1_);
  auVar24[8] = -(auVar18[8] == DAT_142e34ec0._8_1_);
  auVar24[9] = -(auVar18[9] == DAT_142e34ec0._9_1_);
  auVar24[10] = -(auVar18[10] == DAT_142e34ec0._10_1_);
  auVar24[0xb] = -(auVar18[0xb] == DAT_142e34ec0._11_1_);
  auVar24[0xc] = -(auVar18[0xc] == DAT_142e34ec0._12_1_);
  auVar24[0xd] = -(auVar18[0xd] == DAT_142e34ec0._13_1_);
  auVar24[0xe] = -(auVar18[0xe] == DAT_142e34ec0._14_1_);
  auVar24[0xf] = -(auVar18[0xf] == DAT_142e34ec0._15_1_);
  uVar10 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
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
  uVar12 = (uint)uVar10;
  while (uVar10 != 0) {
    uVar5 = 0;
    for (uVar6 = uVar12; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    uVar11 = uVar5 + uVar13 & uVar8;
    pcVar1 = (char *)(lVar7 + -0x18 + uVar11 * -0x18);
    auVar25[0] = -(*pcVar1 == DAT_142e60e60);
    auVar25[1] = -(pcVar1[1] == DAT_142e60e60._1_1_);
    auVar25[2] = -(pcVar1[2] == DAT_142e60e60._2_1_);
    auVar25[3] = -(pcVar1[3] == DAT_142e60e60._3_1_);
    auVar25[4] = -(pcVar1[4] == DAT_142e60e60._4_1_);
    auVar25[5] = -(pcVar1[5] == DAT_142e60e60._5_1_);
    auVar25[6] = -(pcVar1[6] == DAT_142e60e60._6_1_);
    auVar25[7] = -(pcVar1[7] == DAT_142e60e60._7_1_);
    auVar25[8] = -(pcVar1[8] == DAT_142e60e60._8_1_);
    auVar25[9] = -(pcVar1[9] == DAT_142e60e60._9_1_);
    auVar25[10] = -(pcVar1[10] == DAT_142e60e60._10_1_);
    auVar25[0xb] = -(pcVar1[0xb] == DAT_142e60e60._11_1_);
    auVar25[0xc] = -(pcVar1[0xc] == DAT_142e60e60._12_1_);
    auVar25[0xd] = -(pcVar1[0xd] == DAT_142e60e60._13_1_);
    auVar25[0xe] = -(pcVar1[0xe] == DAT_142e60e60._14_1_);
    auVar25[0xf] = -(pcVar1[0xf] == DAT_142e60e60._15_1_);
    if ((ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe | (ushort)(auVar25[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar8 = *(ulonglong *)(lVar7 + uVar11 * -0x18 + -8);
      if (((uVar8 < *(ulonglong *)(param_2 + 0x210)) &&
          (uVar8 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar8 * 8), uVar8 != 0)) &&
         (lVar7 = ~uVar8 * 0x40, *(longlong *)(lVar15 + 0x20 + lVar7) != 0)) {
        if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_1430510d8,0xf,&UNK_1430510e8);
        }
        uVar4 = *(undefined8 *)(lVar15 + lVar7 + 0x10);
        lVar7 = *(longlong *)(param_1 + 2);
        alStack_50[0] = lVar7;
        if (plVar3[3] != 0) {
          uVar8 = pdb_1400af0a0(plVar3 + 4,alStack_50);
          lVar15 = *plVar3;
          bVar17 = (byte)(uVar8 >> 0x39);
          auVar18 = ZEXT216(CONCAT11(bVar17,bVar17));
          auVar18 = pshuflw(auVar18,auVar18,0);
          lVar16 = 0;
          while( true ) {
            uVar8 = uVar8 & plVar3[1];
            auVar23 = *(undefined1 (*) [16])(lVar15 + uVar8);
            auVar22[0] = -(auVar23[0] == auVar18[0]);
            auVar22[1] = -(auVar23[1] == auVar18[1]);
            auVar22[2] = -(auVar23[2] == auVar18[2]);
            auVar22[3] = -(auVar23[3] == auVar18[3]);
            auVar22[4] = -(auVar23[4] == auVar18[4]);
            auVar22[5] = -(auVar23[5] == auVar18[5]);
            auVar22[6] = -(auVar23[6] == auVar18[6]);
            auVar22[7] = -(auVar23[7] == auVar18[7]);
            auVar22[8] = -(auVar23[8] == auVar18[0]);
            auVar22[9] = -(auVar23[9] == auVar18[1]);
            auVar22[10] = -(auVar23[10] == auVar18[2]);
            auVar22[0xb] = -(auVar23[0xb] == auVar18[3]);
            auVar22[0xc] = -(auVar23[0xc] == auVar18[4]);
            auVar22[0xd] = -(auVar23[0xd] == auVar18[5]);
            auVar22[0xe] = -(auVar23[0xe] == auVar18[6]);
            auVar22[0xf] = -(auVar23[0xf] == auVar18[7]);
            uVar10 = (ushort)(SUB161(auVar22 >> 7,0) & 1) |
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
            uVar12 = (uint)uVar10;
            while (uVar10 != 0) {
              uVar5 = 0;
              for (uVar6 = uVar12; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                uVar5 = uVar5 + 1;
              }
              lVar14 = (uVar5 + uVar8 & plVar3[1]) * -0x30;
              if (lVar7 == *(longlong *)(lVar15 + -0x30 + lVar14)) {
                lVar15 = lVar15 + lVar14;
                pdb_141528190(alStack_50,uVar4,param_5);
                lVar7 = pdb_141a076a0(param_5,lVar15 + -0x28);
                uVar9 = pdb_140e17290(lVar15 + -0x10,lVar7);
                *(byte *)(lVar7 + 0x28a) = *(byte *)(lVar7 + 0x28a) | 1;
                *(undefined8 *)(lVar7 + 200) = uVar9;
                if (*(char *)(lVar15 + -4) == '\0') {
                  pdb_140e25450(param_5);
                }
                else {
                  *(byte *)(param_5 + 0x288) = *(byte *)(param_5 + 0x288) | 0x80;
                  *(byte *)(param_5 + 0x83) = *(byte *)(param_5 + 0x83) | 2;
                  *(undefined1 *)(param_5 + 0x82) = 0;
                }
                pdb_140e24cb0(param_5,alStack_50,param_4 * 0x14,1);
                pdb_141535a80(uVar4,param_5);
                return;
              }
              uVar10 = (ushort)(uVar12 - 1) & (ushort)uVar12;
              uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar10);
            }
            auVar19[0] = -(auVar23[0] == -1);
            auVar19[1] = -(auVar23[1] == -1);
            auVar19[2] = -(auVar23[2] == -1);
            auVar19[3] = -(auVar23[3] == -1);
            auVar19[4] = -(auVar23[4] == -1);
            auVar19[5] = -(auVar23[5] == -1);
            auVar19[6] = -(auVar23[6] == -1);
            auVar19[7] = -(auVar23[7] == -1);
            auVar19[8] = -(auVar23[8] == -1);
            auVar19[9] = -(auVar23[9] == -1);
            auVar19[10] = -(auVar23[10] == -1);
            auVar19[0xb] = -(auVar23[0xb] == -1);
            auVar19[0xc] = -(auVar23[0xc] == -1);
            auVar19[0xd] = -(auVar23[0xd] == -1);
            auVar19[0xe] = -(auVar23[0xe] == -1);
            auVar19[0xf] = -(auVar23[0xf] == -1);
            if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar19 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar19 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar19 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar19 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar19 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar19 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar19 >> 0x3f,0) & 1) != 0) || (SUB161(auVar19 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar19 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar19 >> 0x57,0) & 1) != 0) || (SUB161(auVar19 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar19 >> 0x67,0) & 1) != 0) || (SUB161(auVar19 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar19 >> 0x77,0) & 1) != 0) || auVar19[0xf] < '\0') break;
            uVar8 = uVar8 + lVar16 + 0x10;
            lVar16 = lVar16 + 0x10;
          }
        }
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_1430510c0);
      }
      goto LAB_140af4d44;
    }
    uVar10 = (ushort)(uVar12 - 1) & (ushort)uVar12;
    uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar10);
  }
  auVar21[0] = -(auVar18[0] == -1);
  auVar21[1] = -(auVar18[1] == -1);
  auVar21[2] = -(auVar18[2] == -1);
  auVar21[3] = -(auVar18[3] == -1);
  auVar21[4] = -(auVar18[4] == -1);
  auVar21[5] = -(auVar18[5] == -1);
  auVar21[6] = -(auVar18[6] == -1);
  auVar21[7] = -(auVar18[7] == -1);
  auVar21[8] = -(auVar18[8] == -1);
  auVar21[9] = -(auVar18[9] == -1);
  auVar21[10] = -(auVar18[10] == -1);
  auVar21[0xb] = -(auVar18[0xb] == -1);
  auVar21[0xc] = -(auVar18[0xc] == -1);
  auVar21[0xd] = -(auVar18[0xd] == -1);
  auVar21[0xe] = -(auVar18[0xe] == -1);
  auVar21[0xf] = -(auVar18[0xf] == -1);
  if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 || (SUB161(auVar21 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar21 >> 0x17,0) & 1) != 0) || (SUB161(auVar21 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar21 >> 0x27,0) & 1) != 0) || (SUB161(auVar21 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar21 >> 0x37,0) & 1) != 0) || (SUB161(auVar21 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar21 >> 0x47,0) & 1) != 0) || (SUB161(auVar21 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar21 >> 0x57,0) & 1) != 0) || (SUB161(auVar21 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar21 >> 0x67,0) & 1) != 0) || (SUB161(auVar21 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar21 >> 0x77,0) & 1) != 0) || auVar21[0xf] < '\0') {
LAB_140af4d44:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_1430510a8);
  }
  uVar13 = uVar13 + lVar16 + 0x10;
  lVar16 = lVar16 + 0x10;
  goto LAB_140af4b7c;
}

