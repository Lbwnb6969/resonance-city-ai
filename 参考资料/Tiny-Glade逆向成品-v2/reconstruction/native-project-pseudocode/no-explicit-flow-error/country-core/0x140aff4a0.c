// VA 0x140aff4a0, PDB extent 1556 bytes
// country_core::systems::render_loop::draw_passes::ui_2d_pass::ui_2d_pass
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/ui_2d_pass.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::draw_passes::ui_2d_pass::ui_2d_pass
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/ui_2d_pass.rs
   Extent: 1556 */

void pdb_140aff4a0(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  ulonglong *puVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  byte bVar7;
  longlong lVar8;
  code *pcVar9;
  uint uVar10;
  uint uVar11;
  char cVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined *puVar15;
  longlong *plVar16;
  uint uVar17;
  ulonglong uVar18;
  ushort uVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined *unaff_R12;
  longlong unaff_R13;
  int iVar22;
  longlong lVar23;
  undefined *puVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined4 auStack_a8 [2];
  undefined8 uStack_a0;
  ulonglong *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  ulonglong uStack_68;
  longlong *plStack_60;
  undefined8 uStack_58;
  longlong *plStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_68 = param_2;
  cVar12 = pdb_140e94b40();
  plStack_50 = (longlong *)CONCAT71(plStack_50._1_7_,cVar12);
  if (cVar12 == '\0') goto LAB_140aff66b;
  puVar24 = &UNK_143053a1b;
  lVar23 = 0x47;
  uVar18 = 0x47;
  lVar13 = pdb_140b05ec0(&UNK_143053a1b);
  if (lVar13 == 1) {
    if (uVar18 < 0x48) {
      puVar24 = &UNK_143053a1b;
      uVar14 = pdb_140b05ec0(&UNK_143053a1b);
      if ((uVar14 & 1) != 0) {
        if (0x47 < uVar18 + 2) goto LAB_140aff982;
        lVar23 = 0x45 - uVar18;
        puVar24 = &UNK_143053a1d + uVar18;
      }
      goto LAB_140aff544;
    }
  }
  else {
LAB_140aff544:
    puVar15 = &UNK_143052bb3;
    unaff_R12 = &UNK_143052b6e;
    do {
      pbVar1 = puVar15 + -1;
      uVar17 = (uint)(char)*pbVar1;
      if ((int)uVar17 < 0) {
        bVar6 = puVar15[-2];
        if ((char)bVar6 < -0x40) {
          bVar7 = puVar15[-3];
          if ((char)bVar7 < -0x40) {
            pbVar2 = puVar15 + -4;
            puVar15 = puVar15 + -4;
            uVar17 = bVar7 & 0x3f | (*pbVar2 & 7) << 6;
          }
          else {
            puVar15 = puVar15 + -3;
            uVar17 = bVar7 & 0xf;
          }
          uVar17 = bVar6 & 0x3f | uVar17 << 6;
        }
        else {
          puVar15 = puVar15 + -2;
          uVar17 = bVar6 & 0x1f;
        }
        uVar17 = (uint)(*pbVar1 & 0x3f) | uVar17 << 6;
        if (uVar17 != 0x5c) goto LAB_140aff5d9;
LAB_140aff5ef:
        if ((undefined *)0x45 < puVar15 + -0x143052b6d) goto LAB_140aff93f;
        unaff_R13 = 0x44 - (longlong)(puVar15 + -0x143052b6e);
        unaff_R12 = puVar15 + 1;
        goto LAB_140aff613;
      }
      puVar15 = puVar15 + -1;
      if (uVar17 == 0x5c) goto LAB_140aff5ef;
LAB_140aff5d9:
      if (uVar17 == 0x2f) goto LAB_140aff5ef;
    } while (puVar15 != &UNK_143052b6e);
    unaff_R13 = 0x45;
LAB_140aff613:
    plVar16 = (longlong *)pdb_140e97000();
    if ((char)plVar16[0xd] != '\x01') goto LAB_140aff90b;
    do {
      if (*plVar16 == 0) {
        *plVar16 = -1;
        plStack_60 = plVar16;
        uStack_58 = pdb_140e94f10(plVar16 + 1,puVar24,lVar23,unaff_R12,unaff_R13,1,0);
        *plStack_60 = *plStack_60 + 1;
LAB_140aff66b:
        if (*(longlong *)(param_2 + 0x88) != 0) {
          lVar13 = *(longlong *)(param_2 + 0x70);
          uVar18 = *(ulonglong *)(param_2 + 0x78);
          uVar14 = 0x7138c34c528b712f;
          lVar23 = 0;
          while( true ) {
            uVar14 = uVar14 & uVar18;
            pcVar4 = (char *)(lVar13 + uVar14);
            auVar28[0] = -(*pcVar4 == DAT_142e33d90);
            auVar28[1] = -(pcVar4[1] == DAT_142e33d90._1_1_);
            auVar28[2] = -(pcVar4[2] == DAT_142e33d90._2_1_);
            auVar28[3] = -(pcVar4[3] == DAT_142e33d90._3_1_);
            auVar28[4] = -(pcVar4[4] == DAT_142e33d90._4_1_);
            auVar28[5] = -(pcVar4[5] == DAT_142e33d90._5_1_);
            auVar28[6] = -(pcVar4[6] == DAT_142e33d90._6_1_);
            auVar28[7] = -(pcVar4[7] == DAT_142e33d90._7_1_);
            auVar28[8] = -(pcVar4[8] == DAT_142e33d90._8_1_);
            auVar28[9] = -(pcVar4[9] == DAT_142e33d90._9_1_);
            auVar28[10] = -(pcVar4[10] == DAT_142e33d90._10_1_);
            auVar28[0xb] = -(pcVar4[0xb] == DAT_142e33d90._11_1_);
            auVar28[0xc] = -(pcVar4[0xc] == DAT_142e33d90._12_1_);
            auVar28[0xd] = -(pcVar4[0xd] == DAT_142e33d90._13_1_);
            auVar28[0xe] = -(pcVar4[0xe] == DAT_142e33d90._14_1_);
            auVar28[0xf] = -(pcVar4[0xf] == DAT_142e33d90._15_1_);
            uVar19 = (ushort)(SUB161(auVar28 >> 7,0) & 1) |
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
                     (ushort)(auVar28[0xf] >> 7) << 0xf;
            uVar17 = (uint)uVar19;
            while (uVar19 != 0) {
              uVar10 = 0;
              for (uVar11 = uVar17; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
                uVar10 = uVar10 + 1;
              }
              uVar20 = uVar10 + uVar14 & uVar18;
              pcVar5 = (char *)(lVar13 + -0x18 + uVar20 * -0x18);
              auVar29[0] = -(*pcVar5 == DAT_142e340c0);
              auVar29[1] = -(pcVar5[1] == UNK_142e340c1);
              auVar29[2] = -(pcVar5[2] == UNK_142e340c2);
              auVar29[3] = -(pcVar5[3] == UNK_142e340c3);
              auVar29[4] = -(pcVar5[4] == UNK_142e340c4);
              auVar29[5] = -(pcVar5[5] == UNK_142e340c5);
              auVar29[6] = -(pcVar5[6] == UNK_142e340c6);
              auVar29[7] = -(pcVar5[7] == UNK_142e340c7);
              auVar29[8] = -(pcVar5[8] == UNK_142e340c8);
              auVar29[9] = -(pcVar5[9] == UNK_142e340c9);
              auVar29[10] = -(pcVar5[10] == UNK_142e340ca);
              auVar29[0xb] = -(pcVar5[0xb] == UNK_142e340cb);
              auVar29[0xc] = -(pcVar5[0xc] == UNK_142e340cc);
              auVar29[0xd] = -(pcVar5[0xd] == UNK_142e340cd);
              auVar29[0xe] = -(pcVar5[0xe] == UNK_142e340ce);
              auVar29[0xf] = -(pcVar5[0xf] == UNK_142e340cf);
              if ((ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
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
                           (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                          (ushort)(auVar29[0xf] >> 7) << 0xf) == 0xffff) {
                uVar14 = *(ulonglong *)(lVar13 + uVar20 * -0x18 + -8);
                puVar3 = (ulonglong *)(param_2 + 0x210);
                if (*puVar3 <= uVar14) goto LAB_140aff8e1;
                plVar16 = (longlong *)(param_2 + 0x208);
                uVar14 = *(ulonglong *)(*plVar16 + uVar14 * 8);
                if (uVar14 == 0) goto LAB_140aff8e1;
                lVar8 = *(longlong *)(param_2 + 0x1d8);
                lVar23 = ~uVar14 * 0x40;
                if (*(longlong *)(lVar8 + 0x20 + lVar23) == 0) goto LAB_140aff8e1;
                uVar14 = **(ulonglong **)(lVar23 + lVar8 + 0x10);
                auVar25._0_8_ = uVar14 & 0xffffffff;
                auVar25._8_4_ = (int)(uVar14 >> 0x20);
                auVar25._12_4_ = 0;
                uStack_70 = CONCAT44((float)(SUB168(auVar25 | _DAT_142e33010,8) -
                                            DAT_142e33010._8_8_),
                                     (float)(SUB168(auVar25 | _DAT_142e33010,0) -
                                            (double)DAT_142e33010));
                uVar14 = 0x7057b4358e925fdb;
                lVar21 = 0;
                goto LAB_140aff7ab;
              }
              uVar19 = (ushort)(uVar17 - 1) & (ushort)uVar17;
              uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar19);
            }
            auVar26[0] = -(*pcVar4 == -1);
            auVar26[1] = -(pcVar4[1] == -1);
            auVar26[2] = -(pcVar4[2] == -1);
            auVar26[3] = -(pcVar4[3] == -1);
            auVar26[4] = -(pcVar4[4] == -1);
            auVar26[5] = -(pcVar4[5] == -1);
            auVar26[6] = -(pcVar4[6] == -1);
            auVar26[7] = -(pcVar4[7] == -1);
            auVar26[8] = -(pcVar4[8] == -1);
            auVar26[9] = -(pcVar4[9] == -1);
            auVar26[10] = -(pcVar4[10] == -1);
            auVar26[0xb] = -(pcVar4[0xb] == -1);
            auVar26[0xc] = -(pcVar4[0xc] == -1);
            auVar26[0xd] = -(pcVar4[0xd] == -1);
            auVar26[0xe] = -(pcVar4[0xe] == -1);
            auVar26[0xf] = -(pcVar4[0xf] == -1);
            if ((((((((((((((((SUB161(auVar26 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar26 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar26 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar26 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar26 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar26 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar26 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar26 >> 0x3f,0) & 1) != 0) || (SUB161(auVar26 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar26 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar26 >> 0x57,0) & 1) != 0) || (SUB161(auVar26 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar26 >> 0x67,0) & 1) != 0) || (SUB161(auVar26 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar26 >> 0x77,0) & 1) != 0) || auVar26[0xf] < '\0') break;
            uVar14 = uVar14 + lVar23 + 0x10;
            lVar23 = lVar23 + 0x10;
          }
        }
LAB_140aff8e1:
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143052bb8);
      }
LAB_140aff8ff:
      plVar16 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140aff90b:
      plVar16 = (longlong *)pdb_142d8ec20(plVar16,0);
    } while (plVar16 != (longlong *)0x0);
LAB_140aff933:
    pdb_142dc7890(&UNK_143326860);
LAB_140aff93f:
    pdb_142dc8070(&UNK_143052b6e,0x45);
  }
  pdb_142dc8070(&UNK_143053a1b,0x47,0);
LAB_140aff982:
  pdb_142dc8070(&UNK_143053a1b,0x47);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
LAB_140aff7ab:
  uVar14 = uVar14 & uVar18;
  auVar28 = *(undefined1 (*) [16])(lVar13 + uVar14);
  auVar30[0] = -(auVar28[0] == DAT_142e33d90);
  auVar30[1] = -(auVar28[1] == DAT_142e33d90._1_1_);
  auVar30[2] = -(auVar28[2] == DAT_142e33d90._2_1_);
  auVar30[3] = -(auVar28[3] == DAT_142e33d90._3_1_);
  auVar30[4] = -(auVar28[4] == DAT_142e33d90._4_1_);
  auVar30[5] = -(auVar28[5] == DAT_142e33d90._5_1_);
  auVar30[6] = -(auVar28[6] == DAT_142e33d90._6_1_);
  auVar30[7] = -(auVar28[7] == DAT_142e33d90._7_1_);
  auVar30[8] = -(auVar28[8] == DAT_142e33d90._8_1_);
  auVar30[9] = -(auVar28[9] == DAT_142e33d90._9_1_);
  auVar30[10] = -(auVar28[10] == DAT_142e33d90._10_1_);
  auVar30[0xb] = -(auVar28[0xb] == DAT_142e33d90._11_1_);
  auVar30[0xc] = -(auVar28[0xc] == DAT_142e33d90._12_1_);
  auVar30[0xd] = -(auVar28[0xd] == DAT_142e33d90._13_1_);
  auVar30[0xe] = -(auVar28[0xe] == DAT_142e33d90._14_1_);
  auVar30[0xf] = -(auVar28[0xf] == DAT_142e33d90._15_1_);
  uVar19 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe | (ushort)(auVar30[0xf] >> 7) << 0xf;
  param_2 = (ulonglong)uVar19;
  while (uVar19 != 0) {
    uVar17 = 0;
    for (uVar10 = (uint)param_2; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
      uVar17 = uVar17 + 1;
    }
    uVar20 = uVar17 + uVar14 & uVar18;
    lVar23 = uVar20 * -3;
    pcVar4 = (char *)(lVar13 + -0x18 + uVar20 * -0x18);
    auVar31[0] = -(*pcVar4 == DAT_142e34350);
    auVar31[1] = -(pcVar4[1] == DAT_142e34350._1_1_);
    auVar31[2] = -(pcVar4[2] == DAT_142e34350._2_1_);
    auVar31[3] = -(pcVar4[3] == DAT_142e34350._3_1_);
    auVar31[4] = -(pcVar4[4] == DAT_142e34350._4_1_);
    auVar31[5] = -(pcVar4[5] == DAT_142e34350._5_1_);
    auVar31[6] = -(pcVar4[6] == DAT_142e34350._6_1_);
    auVar31[7] = -(pcVar4[7] == DAT_142e34350._7_1_);
    auVar31[8] = -(pcVar4[8] == DAT_142e34350._8_1_);
    auVar31[9] = -(pcVar4[9] == DAT_142e34350._9_1_);
    auVar31[10] = -(pcVar4[10] == DAT_142e34350._10_1_);
    auVar31[0xb] = -(pcVar4[0xb] == DAT_142e34350._11_1_);
    auVar31[0xc] = -(pcVar4[0xc] == DAT_142e34350._12_1_);
    auVar31[0xd] = -(pcVar4[0xd] == DAT_142e34350._13_1_);
    auVar31[0xe] = -(pcVar4[0xe] == DAT_142e34350._14_1_);
    auVar31[0xf] = -(pcVar4[0xf] == DAT_142e34350._15_1_);
    if ((ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe | (ushort)(auVar31[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar18 = *(ulonglong *)(lVar13 + uVar20 * -0x18 + -8);
      if (((*puVar3 <= uVar18) || (uVar18 = *(ulonglong *)(*plVar16 + uVar18 * 8), uVar18 == 0)) ||
         (lVar13 = ~uVar18 * 0x40, *(longlong *)(lVar8 + 0x20 + lVar13) == 0)) goto LAB_140aff8f0;
      uStack_80 = *(undefined8 *)(lVar8 + lVar13 + 0x10);
      auStack_a8[0] = 0;
      puStack_78 = &uStack_70;
      uStack_a0 = param_3;
      puStack_88 = &uStack_68;
      pdb_14175d630(param_1,&UNK_143052be8,5,auStack_a8,&puStack_88);
      if ((char)plStack_50 != '\0') {
        plVar16 = (longlong *)pdb_140e97000();
        if (((char)plVar16[0xd] != '\x01') &&
           (plVar16 = (longlong *)pdb_142d8ec20(plVar16,0), plVar16 == (longlong *)0x0))
        goto LAB_140aff933;
        puVar24 = (undefined *)0xffff;
        if (*plVar16 != 0) goto LAB_140aff8ff;
        *plVar16 = -1;
        plStack_50 = plVar16;
        pdb_140e95370(plVar16 + 1,uStack_58);
        *plStack_50 = *plStack_50 + 1;
      }
      return;
    }
    iVar22 = (uint)param_2 - 1;
    uVar19 = (ushort)iVar22 & (ushort)param_2;
    param_2 = (ulonglong)CONCAT22((short)((uint)iVar22 >> 0x10),uVar19);
  }
  auVar27[0] = -(auVar28[0] == -1);
  auVar27[1] = -(auVar28[1] == -1);
  auVar27[2] = -(auVar28[2] == -1);
  auVar27[3] = -(auVar28[3] == -1);
  auVar27[4] = -(auVar28[4] == -1);
  auVar27[5] = -(auVar28[5] == -1);
  auVar27[6] = -(auVar28[6] == -1);
  auVar27[7] = -(auVar28[7] == -1);
  auVar27[8] = -(auVar28[8] == -1);
  auVar27[9] = -(auVar28[9] == -1);
  auVar27[10] = -(auVar28[10] == -1);
  auVar27[0xb] = -(auVar28[0xb] == -1);
  auVar27[0xc] = -(auVar28[0xc] == -1);
  auVar27[0xd] = -(auVar28[0xd] == -1);
  auVar27[0xe] = -(auVar28[0xe] == -1);
  auVar27[0xf] = -(auVar28[0xf] == -1);
  if ((((((((((((((((SUB161(auVar27 >> 7,0) & 1) != 0 || (SUB161(auVar27 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar27 >> 0x17,0) & 1) != 0) || (SUB161(auVar27 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar27 >> 0x27,0) & 1) != 0) || (SUB161(auVar27 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar27 >> 0x37,0) & 1) != 0) || (SUB161(auVar27 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar27 >> 0x47,0) & 1) != 0) || (SUB161(auVar27 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar27 >> 0x57,0) & 1) != 0) || (SUB161(auVar27 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar27 >> 0x67,0) & 1) != 0) || (SUB161(auVar27 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar27 >> 0x77,0) & 1) != 0) || auVar27[0xf] < '\0') {
LAB_140aff8f0:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143052bd0);
  }
  uVar14 = uVar14 + lVar21 + 0x10;
  lVar21 = lVar21 + 0x10;
  goto LAB_140aff7ab;
}

