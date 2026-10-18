// VA 0x141b2db30, PDB extent 1061 bytes
// country_core::systems::render_loop::draw_passes::draw_lists::impl$0::multi_instanced_indexed::draw_fn<country_core::resources::sparkle::SparkleSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/draw_lists.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::draw_passes::draw_lists::impl$0::multi_instanced_indexed::draw_fn<country_core::resources::sparkle::SparkleSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/draw_lists.rs
   Extent: 1061 */

void pdb_141b2db30(int *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 *puVar10;
  ushort uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  byte bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  longlong lStack_68;
  byte *pbStack_60;
  longlong lStack_58;
  byte *pbStack_50;
  longlong lStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar7 = *(longlong *)(param_2 + 0x70);
    uVar8 = *(ulonglong *)(param_2 + 0x78);
    uVar14 = 0x59a9ebec036a11fe;
    lVar16 = 0;
    while( true ) {
      uVar14 = uVar14 & uVar8;
      pcVar1 = (char *)(lVar7 + uVar14);
      auVar19[0] = -(*pcVar1 == DAT_142e33bd0);
      auVar19[1] = -(pcVar1[1] == UNK_142e33bd1);
      auVar19[2] = -(pcVar1[2] == UNK_142e33bd2);
      auVar19[3] = -(pcVar1[3] == UNK_142e33bd3);
      auVar19[4] = -(pcVar1[4] == UNK_142e33bd4);
      auVar19[5] = -(pcVar1[5] == UNK_142e33bd5);
      auVar19[6] = -(pcVar1[6] == UNK_142e33bd6);
      auVar19[7] = -(pcVar1[7] == UNK_142e33bd7);
      auVar19[8] = -(pcVar1[8] == UNK_142e33bd8);
      auVar19[9] = -(pcVar1[9] == UNK_142e33bd9);
      auVar19[10] = -(pcVar1[10] == UNK_142e33bda);
      auVar19[0xb] = -(pcVar1[0xb] == UNK_142e33bdb);
      auVar19[0xc] = -(pcVar1[0xc] == UNK_142e33bdc);
      auVar19[0xd] = -(pcVar1[0xd] == UNK_142e33bdd);
      auVar19[0xe] = -(pcVar1[0xe] == UNK_142e33bde);
      auVar19[0xf] = -(pcVar1[0xf] == UNK_142e33bdf);
      uVar11 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
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
      uVar13 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar12 = uVar5 + uVar14 & uVar8;
        pcVar2 = (char *)(lVar7 + -0x18 + uVar12 * -0x18);
        auVar24[0] = -(*pcVar2 == DAT_142e34980);
        auVar24[1] = -(pcVar2[1] == UNK_142e34981);
        auVar24[2] = -(pcVar2[2] == UNK_142e34982);
        auVar24[3] = -(pcVar2[3] == UNK_142e34983);
        auVar24[4] = -(pcVar2[4] == UNK_142e34984);
        auVar24[5] = -(pcVar2[5] == UNK_142e34985);
        auVar24[6] = -(pcVar2[6] == UNK_142e34986);
        auVar24[7] = -(pcVar2[7] == UNK_142e34987);
        auVar24[8] = -(pcVar2[8] == UNK_142e34988);
        auVar24[9] = -(pcVar2[9] == UNK_142e34989);
        auVar24[10] = -(pcVar2[10] == UNK_142e3498a);
        auVar24[0xb] = -(pcVar2[0xb] == UNK_142e3498b);
        auVar24[0xc] = -(pcVar2[0xc] == UNK_142e3498c);
        auVar24[0xd] = -(pcVar2[0xd] == UNK_142e3498d);
        auVar24[0xe] = -(pcVar2[0xe] == UNK_142e3498e);
        auVar24[0xf] = -(pcVar2[0xf] == UNK_142e3498f);
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
          uVar14 = *(ulonglong *)(lVar7 + uVar12 * -0x18 + -8);
          if (*(ulonglong *)(param_2 + 0x210) <= uVar14) goto LAB_141b2ddc6;
          uVar14 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar14 * 8);
          if (uVar14 == 0) goto LAB_141b2ddc6;
          lVar16 = *(longlong *)(param_2 + 0x1d8);
          lVar17 = ~uVar14 * 0x40;
          if (*(longlong *)(lVar16 + 0x20 + lVar17) == 0) goto LAB_141b2ddc6;
          plVar3 = *(longlong **)(lVar17 + lVar16 + 0x10);
          uVar14 = 0x1d6a82b468dfb8a2;
          lVar17 = 0;
          goto LAB_141b2dc6c;
        }
        uVar11 = (ushort)(uVar13 - 1) & (ushort)uVar13;
        uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar11);
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
      uVar14 = uVar14 + lVar16 + 0x10;
      lVar16 = lVar16 + 0x10;
    }
  }
LAB_141b2ddc6:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143393280);
LAB_141b2dc6c:
  uVar14 = uVar14 & uVar8;
  auVar19 = *(undefined1 (*) [16])(lVar7 + uVar14);
  auVar25[0] = -(auVar19[0] == DAT_142e34ec0);
  auVar25[1] = -(auVar19[1] == DAT_142e34ec0._1_1_);
  auVar25[2] = -(auVar19[2] == DAT_142e34ec0._2_1_);
  auVar25[3] = -(auVar19[3] == DAT_142e34ec0._3_1_);
  auVar25[4] = -(auVar19[4] == DAT_142e34ec0._4_1_);
  auVar25[5] = -(auVar19[5] == DAT_142e34ec0._5_1_);
  auVar25[6] = -(auVar19[6] == DAT_142e34ec0._6_1_);
  auVar25[7] = -(auVar19[7] == DAT_142e34ec0._7_1_);
  auVar25[8] = -(auVar19[8] == DAT_142e34ec0._8_1_);
  auVar25[9] = -(auVar19[9] == DAT_142e34ec0._9_1_);
  auVar25[10] = -(auVar19[10] == DAT_142e34ec0._10_1_);
  auVar25[0xb] = -(auVar19[0xb] == DAT_142e34ec0._11_1_);
  auVar25[0xc] = -(auVar19[0xc] == DAT_142e34ec0._12_1_);
  auVar25[0xd] = -(auVar19[0xd] == DAT_142e34ec0._13_1_);
  auVar25[0xe] = -(auVar19[0xe] == DAT_142e34ec0._14_1_);
  auVar25[0xf] = -(auVar19[0xf] == DAT_142e34ec0._15_1_);
  uVar11 = (ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
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
  uVar13 = (uint)uVar11;
  while (uVar11 != 0) {
    uVar5 = 0;
    for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    uVar12 = uVar5 + uVar14 & uVar8;
    pcVar1 = (char *)(lVar7 + -0x18 + uVar12 * -0x18);
    auVar26[0] = -(*pcVar1 == DAT_142e60e60);
    auVar26[1] = -(pcVar1[1] == DAT_142e60e60._1_1_);
    auVar26[2] = -(pcVar1[2] == DAT_142e60e60._2_1_);
    auVar26[3] = -(pcVar1[3] == DAT_142e60e60._3_1_);
    auVar26[4] = -(pcVar1[4] == DAT_142e60e60._4_1_);
    auVar26[5] = -(pcVar1[5] == DAT_142e60e60._5_1_);
    auVar26[6] = -(pcVar1[6] == DAT_142e60e60._6_1_);
    auVar26[7] = -(pcVar1[7] == DAT_142e60e60._7_1_);
    auVar26[8] = -(pcVar1[8] == DAT_142e60e60._8_1_);
    auVar26[9] = -(pcVar1[9] == DAT_142e60e60._9_1_);
    auVar26[10] = -(pcVar1[10] == DAT_142e60e60._10_1_);
    auVar26[0xb] = -(pcVar1[0xb] == DAT_142e60e60._11_1_);
    auVar26[0xc] = -(pcVar1[0xc] == DAT_142e60e60._12_1_);
    auVar26[0xd] = -(pcVar1[0xd] == DAT_142e60e60._13_1_);
    auVar26[0xe] = -(pcVar1[0xe] == DAT_142e60e60._14_1_);
    auVar26[0xf] = -(pcVar1[0xf] == DAT_142e60e60._15_1_);
    if ((ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe | (ushort)(auVar26[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar8 = *(ulonglong *)(lVar7 + uVar12 * -0x18 + -8);
      if (((uVar8 < *(ulonglong *)(param_2 + 0x210)) &&
          (uVar8 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar8 * 8), uVar8 != 0)) &&
         (lVar7 = ~uVar8 * 0x40, *(longlong *)(lVar16 + 0x20 + lVar7) != 0)) {
        if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_1433932e0,0x28,&UNK_143393308);
        }
        uVar4 = *(undefined8 *)(lVar16 + lVar7 + 0x10);
        lVar7 = *(longlong *)(param_1 + 2);
        lStack_68 = lVar7;
        if (plVar3[3] != 0) {
          uVar8 = pdb_1400af0a0(plVar3 + 4,&lStack_68);
          lVar16 = *plVar3;
          bVar18 = (byte)(uVar8 >> 0x39);
          auVar19 = ZEXT216(CONCAT11(bVar18,bVar18));
          auVar19 = pshuflw(auVar19,auVar19,0);
          lVar17 = 0;
          while( true ) {
            uVar8 = uVar8 & plVar3[1];
            auVar24 = *(undefined1 (*) [16])(lVar16 + uVar8);
            auVar23[0] = -(auVar24[0] == auVar19[0]);
            auVar23[1] = -(auVar24[1] == auVar19[1]);
            auVar23[2] = -(auVar24[2] == auVar19[2]);
            auVar23[3] = -(auVar24[3] == auVar19[3]);
            auVar23[4] = -(auVar24[4] == auVar19[4]);
            auVar23[5] = -(auVar24[5] == auVar19[5]);
            auVar23[6] = -(auVar24[6] == auVar19[6]);
            auVar23[7] = -(auVar24[7] == auVar19[7]);
            auVar23[8] = -(auVar24[8] == auVar19[0]);
            auVar23[9] = -(auVar24[9] == auVar19[1]);
            auVar23[10] = -(auVar24[10] == auVar19[2]);
            auVar23[0xb] = -(auVar24[0xb] == auVar19[3]);
            auVar23[0xc] = -(auVar24[0xc] == auVar19[4]);
            auVar23[0xd] = -(auVar24[0xd] == auVar19[5]);
            auVar23[0xe] = -(auVar24[0xe] == auVar19[6]);
            auVar23[0xf] = -(auVar24[0xf] == auVar19[7]);
            uVar11 = (ushort)(SUB161(auVar23 >> 7,0) & 1) |
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
            uVar13 = (uint)uVar11;
            while (uVar11 != 0) {
              uVar5 = 0;
              for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                uVar5 = uVar5 + 1;
              }
              lVar15 = (uVar5 + uVar8 & plVar3[1]) * -0x30;
              if (lVar7 == *(longlong *)(lVar16 + -0x30 + lVar15)) {
                lVar16 = lVar16 + lVar15;
                lVar7 = pdb_141a076a0(param_5,lVar16 + -0x28);
                uVar9 = pdb_140e17290(lVar16 + -0x10,lVar7);
                *(byte *)(lVar7 + 0x28a) = *(byte *)(lVar7 + 0x28a) | 1;
                *(undefined8 *)(lVar7 + 200) = uVar9;
                if (*(char *)(lVar16 + -4) == '\0') {
                  pdb_140e25450(param_5);
                }
                else {
                  *(byte *)(param_5 + 0x288) = *(byte *)(param_5 + 0x288) | 0x80;
                  *(byte *)(param_5 + 0x83) = *(byte *)(param_5 + 0x83) | 2;
                  *(undefined1 *)(param_5 + 0x82) = 0;
                }
                puVar10 = (undefined8 *)pdb_140bf45b0(uVar4,&UNK_14331c928);
                if ((puVar10 != (undefined8 *)0x0) &&
                   (lVar7 = (**(code **)(puVar10[1] + 0x18))(*puVar10), lVar7 != 0)) {
                  pdb_141a78250(&lStack_68,lVar7);
                  lStack_48 = lStack_68;
                  pbStack_50 = pbStack_60;
                  for (lStack_58 = lStack_58 << 3; lStack_58 != 0; lStack_58 = lStack_58 + -8) {
                    pdb_140e25490(param_5,*(undefined4 *)(lVar16 + -8),*(undefined4 *)pbStack_60,
                                  *(undefined4 *)(pbStack_60 + 4));
                    pbStack_60 = pbStack_60 + 8;
                  }
                  if (lStack_48 != 0) {
                    pub_1406abac0(pbStack_50,lStack_48 << 3,4);
                  }
                  return;
                }
                    /* WARNING: Subroutine does not return */
                pdb_142dc8150(&UNK_1433932c8);
              }
              uVar11 = (ushort)(uVar13 - 1) & (ushort)uVar13;
              uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar11);
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
            if ((((((((((((((((SUB161(auVar20 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar20 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar20 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar20 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar20 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar20 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar20 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar20 >> 0x3f,0) & 1) != 0) || (SUB161(auVar20 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar20 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar20 >> 0x57,0) & 1) != 0) || (SUB161(auVar20 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar20 >> 0x67,0) & 1) != 0) || (SUB161(auVar20 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar20 >> 0x77,0) & 1) != 0) || auVar20[0xf] < '\0') break;
            uVar8 = uVar8 + lVar17 + 0x10;
            lVar17 = lVar17 + 0x10;
          }
        }
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_1433932b0);
      }
      goto LAB_141b2de1c;
    }
    uVar11 = (ushort)(uVar13 - 1) & (ushort)uVar13;
    uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar11);
  }
  auVar22[0] = -(auVar19[0] == -1);
  auVar22[1] = -(auVar19[1] == -1);
  auVar22[2] = -(auVar19[2] == -1);
  auVar22[3] = -(auVar19[3] == -1);
  auVar22[4] = -(auVar19[4] == -1);
  auVar22[5] = -(auVar19[5] == -1);
  auVar22[6] = -(auVar19[6] == -1);
  auVar22[7] = -(auVar19[7] == -1);
  auVar22[8] = -(auVar19[8] == -1);
  auVar22[9] = -(auVar19[9] == -1);
  auVar22[10] = -(auVar19[10] == -1);
  auVar22[0xb] = -(auVar19[0xb] == -1);
  auVar22[0xc] = -(auVar19[0xc] == -1);
  auVar22[0xd] = -(auVar19[0xd] == -1);
  auVar22[0xe] = -(auVar19[0xe] == -1);
  auVar22[0xf] = -(auVar19[0xf] == -1);
  if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) != 0 || (SUB161(auVar22 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar22 >> 0x17,0) & 1) != 0) || (SUB161(auVar22 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar22 >> 0x27,0) & 1) != 0) || (SUB161(auVar22 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar22 >> 0x37,0) & 1) != 0) || (SUB161(auVar22 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar22 >> 0x47,0) & 1) != 0) || (SUB161(auVar22 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar22 >> 0x57,0) & 1) != 0) || (SUB161(auVar22 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar22 >> 0x67,0) & 1) != 0) || (SUB161(auVar22 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar22 >> 0x77,0) & 1) != 0) || auVar22[0xf] < '\0') {
LAB_141b2de1c:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143393298);
  }
  uVar14 = uVar14 + lVar17 + 0x10;
  lVar17 = lVar17 + 0x10;
  goto LAB_141b2dc6c;
}

