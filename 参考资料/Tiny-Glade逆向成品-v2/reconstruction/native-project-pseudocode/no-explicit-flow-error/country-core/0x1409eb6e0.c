// VA 0x1409eb6e0, PDB extent 1193 bytes
// country_core::systems::render_loop::compute_passes::mouse_read_terrain_stroke_index::mouse_read_terrain_stroke_index
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/mouse_read_terrain_stroke_index.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::mouse_read_terrain_stroke_index::mouse_read_terrain_stroke_index
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/mouse_read_terrain_stroke_index.rs
   Extent: 1193 */

void pdb_1409eb6e0(longlong param_1,longlong param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 uVar14;
  uint uVar15;
  char *pcVar16;
  longlong lVar17;
  longlong lVar18;
  ushort uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auStack_1c8 [136];
  undefined1 auStack_140 [140];
  undefined1 auStack_b4 [20];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 *puStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulonglong *puStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar10 = *(longlong *)(param_2 + 0x70);
    uVar4 = *(ulonglong *)(param_2 + 0x78);
    uVar12 = 0x62743ee50af3224d;
    lVar18 = 0;
    while( true ) {
      uVar12 = uVar12 & uVar4;
      pcVar1 = (char *)(lVar10 + uVar12);
      auVar25[0] = -(*pcVar1 == DAT_142e34770);
      auVar25[1] = -(pcVar1[1] == UNK_142e34771);
      auVar25[2] = -(pcVar1[2] == UNK_142e34772);
      auVar25[3] = -(pcVar1[3] == UNK_142e34773);
      auVar25[4] = -(pcVar1[4] == UNK_142e34774);
      auVar25[5] = -(pcVar1[5] == UNK_142e34775);
      auVar25[6] = -(pcVar1[6] == UNK_142e34776);
      auVar25[7] = -(pcVar1[7] == UNK_142e34777);
      auVar25[8] = -(pcVar1[8] == UNK_142e34778);
      auVar25[9] = -(pcVar1[9] == UNK_142e34779);
      auVar25[10] = -(pcVar1[10] == UNK_142e3477a);
      auVar25[0xb] = -(pcVar1[0xb] == UNK_142e3477b);
      auVar25[0xc] = -(pcVar1[0xc] == UNK_142e3477c);
      auVar25[0xd] = -(pcVar1[0xd] == UNK_142e3477d);
      auVar25[0xe] = -(pcVar1[0xe] == UNK_142e3477e);
      auVar25[0xf] = -(pcVar1[0xf] == UNK_142e3477f);
      uVar19 = (ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
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
      uVar15 = (uint)uVar19;
      while (uVar19 != 0) {
        uVar7 = 0;
        for (uVar8 = uVar15; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        uVar20 = uVar7 + uVar12 & uVar4;
        pcVar16 = (char *)(lVar10 + -0x18 + uVar20 * -0x18);
        auVar26[0] = -(*pcVar16 == DAT_143031170);
        auVar26[1] = -(pcVar16[1] == UNK_143031171);
        auVar26[2] = -(pcVar16[2] == UNK_143031172);
        auVar26[3] = -(pcVar16[3] == UNK_143031173);
        auVar26[4] = -(pcVar16[4] == UNK_143031174);
        auVar26[5] = -(pcVar16[5] == UNK_143031175);
        auVar26[6] = -(pcVar16[6] == UNK_143031176);
        auVar26[7] = -(pcVar16[7] == UNK_143031177);
        auVar26[8] = -(pcVar16[8] == UNK_143031178);
        auVar26[9] = -(pcVar16[9] == UNK_143031179);
        auVar26[10] = -(pcVar16[10] == UNK_14303117a);
        auVar26[0xb] = -(pcVar16[0xb] == UNK_14303117b);
        auVar26[0xc] = -(pcVar16[0xc] == UNK_14303117c);
        auVar26[0xd] = -(pcVar16[0xd] == UNK_14303117d);
        auVar26[0xe] = -(pcVar16[0xe] == UNK_14303117e);
        auVar26[0xf] = -(pcVar16[0xf] == UNK_14303117f);
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
          uVar12 = *(ulonglong *)(lVar10 + uVar20 * -0x18 + -8);
          uVar20 = *(ulonglong *)(param_2 + 0x210);
          if (uVar20 <= uVar12) goto LAB_1409eb986;
          lVar18 = *(longlong *)(param_2 + 0x208);
          uVar12 = *(ulonglong *)(lVar18 + uVar12 * 8);
          if (uVar12 == 0) goto LAB_1409eb986;
          lVar5 = *(longlong *)(param_2 + 0x1d8);
          lVar13 = ~uVar12 * 0x40;
          if (*(longlong *)(lVar5 + 0x20 + lVar13) == 0) goto LAB_1409eb986;
          pcVar1 = *(char **)(lVar13 + lVar5 + 0x10);
          pcVar16 = "";
          if (*pcVar1 != '\0') {
            pcVar16 = pcVar1 + 4;
          }
          uVar2 = *(undefined4 *)pcVar16;
          uVar3 = *(undefined4 *)(pcVar16 + 8);
          uVar12 = 0x7057b4358e925fdb;
          lVar13 = 0;
          goto LAB_1409eb847;
        }
        uVar19 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar19);
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
      uVar12 = uVar12 + lVar18 + 0x10;
      lVar18 = lVar18 + 0x10;
    }
  }
LAB_1409eb986:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143032880);
LAB_1409eb847:
  uVar12 = uVar12 & uVar4;
  pcVar1 = (char *)(lVar10 + uVar12);
  auVar27[0] = -(*pcVar1 == DAT_142e33d90);
  auVar27[1] = -(pcVar1[1] == DAT_142e33d90._1_1_);
  auVar27[2] = -(pcVar1[2] == DAT_142e33d90._2_1_);
  auVar27[3] = -(pcVar1[3] == DAT_142e33d90._3_1_);
  auVar27[4] = -(pcVar1[4] == DAT_142e33d90._4_1_);
  auVar27[5] = -(pcVar1[5] == DAT_142e33d90._5_1_);
  auVar27[6] = -(pcVar1[6] == DAT_142e33d90._6_1_);
  auVar27[7] = -(pcVar1[7] == DAT_142e33d90._7_1_);
  auVar27[8] = -(pcVar1[8] == DAT_142e33d90._8_1_);
  auVar27[9] = -(pcVar1[9] == DAT_142e33d90._9_1_);
  auVar27[10] = -(pcVar1[10] == DAT_142e33d90._10_1_);
  auVar27[0xb] = -(pcVar1[0xb] == DAT_142e33d90._11_1_);
  auVar27[0xc] = -(pcVar1[0xc] == DAT_142e33d90._12_1_);
  auVar27[0xd] = -(pcVar1[0xd] == DAT_142e33d90._13_1_);
  auVar27[0xe] = -(pcVar1[0xe] == DAT_142e33d90._14_1_);
  auVar27[0xf] = -(pcVar1[0xf] == DAT_142e33d90._15_1_);
  uVar19 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
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
  uVar15 = (uint)uVar19;
  while (uVar19 != 0) {
    uVar7 = 0;
    for (uVar8 = uVar15; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    uVar21 = uVar7 + uVar12 & uVar4;
    pcVar16 = (char *)(lVar10 + -0x18 + uVar21 * -0x18);
    auVar28[0] = -(*pcVar16 == DAT_142e34350);
    auVar28[1] = -(pcVar16[1] == DAT_142e34350._1_1_);
    auVar28[2] = -(pcVar16[2] == DAT_142e34350._2_1_);
    auVar28[3] = -(pcVar16[3] == DAT_142e34350._3_1_);
    auVar28[4] = -(pcVar16[4] == DAT_142e34350._4_1_);
    auVar28[5] = -(pcVar16[5] == DAT_142e34350._5_1_);
    auVar28[6] = -(pcVar16[6] == DAT_142e34350._6_1_);
    auVar28[7] = -(pcVar16[7] == DAT_142e34350._7_1_);
    auVar28[8] = -(pcVar16[8] == DAT_142e34350._8_1_);
    auVar28[9] = -(pcVar16[9] == DAT_142e34350._9_1_);
    auVar28[10] = -(pcVar16[10] == DAT_142e34350._10_1_);
    auVar28[0xb] = -(pcVar16[0xb] == DAT_142e34350._11_1_);
    auVar28[0xc] = -(pcVar16[0xc] == DAT_142e34350._12_1_);
    auVar28[0xd] = -(pcVar16[0xd] == DAT_142e34350._13_1_);
    auVar28[0xe] = -(pcVar16[0xe] == DAT_142e34350._14_1_);
    auVar28[0xf] = -(pcVar16[0xf] == DAT_142e34350._15_1_);
    if ((ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe | (ushort)(auVar28[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar12 = *(ulonglong *)(lVar10 + uVar21 * -0x18 + -8);
      if (((uVar20 <= uVar12) || (uVar12 = *(ulonglong *)(lVar18 + uVar12 * 8), uVar12 == 0)) ||
         (lVar13 = ~uVar12 * 0x40, *(longlong *)(lVar5 + 0x20 + lVar13) == 0)) goto LAB_1409ebb1e;
      uVar12 = 0x1d6a82b468dfb8a2;
      lVar17 = 0;
      goto LAB_1409eb915;
    }
    uVar19 = (ushort)(uVar15 - 1) & (ushort)uVar15;
    uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar19);
  }
  goto LAB_1409eb8a0;
LAB_1409eb915:
  uVar12 = uVar12 & uVar4;
  auVar25 = *(undefined1 (*) [16])(lVar10 + uVar12);
  auVar29[0] = -(auVar25[0] == DAT_142e34ec0);
  auVar29[1] = -(auVar25[1] == DAT_142e34ec0._1_1_);
  auVar29[2] = -(auVar25[2] == DAT_142e34ec0._2_1_);
  auVar29[3] = -(auVar25[3] == DAT_142e34ec0._3_1_);
  auVar29[4] = -(auVar25[4] == DAT_142e34ec0._4_1_);
  auVar29[5] = -(auVar25[5] == DAT_142e34ec0._5_1_);
  auVar29[6] = -(auVar25[6] == DAT_142e34ec0._6_1_);
  auVar29[7] = -(auVar25[7] == DAT_142e34ec0._7_1_);
  auVar29[8] = -(auVar25[8] == DAT_142e34ec0._8_1_);
  auVar29[9] = -(auVar25[9] == DAT_142e34ec0._9_1_);
  auVar29[10] = -(auVar25[10] == DAT_142e34ec0._10_1_);
  auVar29[0xb] = -(auVar25[0xb] == DAT_142e34ec0._11_1_);
  auVar29[0xc] = -(auVar25[0xc] == DAT_142e34ec0._12_1_);
  auVar29[0xd] = -(auVar25[0xd] == DAT_142e34ec0._13_1_);
  auVar29[0xe] = -(auVar25[0xe] == DAT_142e34ec0._14_1_);
  auVar29[0xf] = -(auVar25[0xf] == DAT_142e34ec0._15_1_);
  uVar19 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
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
  uVar15 = (uint)uVar19;
  while (uVar19 != 0) {
    uVar7 = 0;
    for (uVar8 = uVar15; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    uVar21 = uVar7 + uVar12 & uVar4;
    pcVar1 = (char *)(lVar10 + -0x18 + uVar21 * -0x18);
    auVar30[0] = -(*pcVar1 == DAT_142e60e60);
    auVar30[1] = -(pcVar1[1] == DAT_142e60e60._1_1_);
    auVar30[2] = -(pcVar1[2] == DAT_142e60e60._2_1_);
    auVar30[3] = -(pcVar1[3] == DAT_142e60e60._3_1_);
    auVar30[4] = -(pcVar1[4] == DAT_142e60e60._4_1_);
    auVar30[5] = -(pcVar1[5] == DAT_142e60e60._5_1_);
    auVar30[6] = -(pcVar1[6] == DAT_142e60e60._6_1_);
    auVar30[7] = -(pcVar1[7] == DAT_142e60e60._7_1_);
    auVar30[8] = -(pcVar1[8] == DAT_142e60e60._8_1_);
    auVar30[9] = -(pcVar1[9] == DAT_142e60e60._9_1_);
    auVar30[10] = -(pcVar1[10] == DAT_142e60e60._10_1_);
    auVar30[0xb] = -(pcVar1[0xb] == DAT_142e60e60._11_1_);
    auVar30[0xc] = -(pcVar1[0xc] == DAT_142e60e60._12_1_);
    auVar30[0xd] = -(pcVar1[0xd] == DAT_142e60e60._13_1_);
    auVar30[0xe] = -(pcVar1[0xe] == DAT_142e60e60._14_1_);
    auVar30[0xf] = -(pcVar1[0xf] == DAT_142e60e60._15_1_);
    if ((ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe | (ushort)(auVar30[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar4 = *(ulonglong *)(lVar10 + uVar21 * -0x18 + -8);
      if (((uVar4 < uVar20) && (uVar4 = *(ulonglong *)(lVar18 + uVar4 * 8), uVar4 != 0)) &&
         (lVar10 = ~uVar4 * 0x40, *(longlong *)(lVar5 + 0x20 + lVar10) != 0)) {
        uVar6 = *(undefined8 *)(lVar5 + lVar10 + 0x10);
        uVar14 = CONCAT71((int7)((ulonglong)param_2 >> 8),0xc);
        puStack_68 = (ulonglong *)pdb_140a2db30(*(undefined8 *)(lVar13 + lVar5 + 0x10));
        pdb_141528f70(auStack_b4,uVar6,param_1);
        uStack_a0 = 0;
        uStack_98 = 8;
        uStack_90 = 0;
        uVar11 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_1433310ae,0x25,&uStack_a0);
        pdb_140e291c0(auStack_140,&UNK_1433310ae,0x25,uVar11,param_1);
        puStack_88 = auStack_b4;
        uStack_80 = uVar14;
        uStack_78 = uVar2;
        uStack_74 = uVar3;
        pdb_14179b230(auStack_1c8,auStack_140,&puStack_88);
        pub_142e32760(auStack_140,auStack_1c8,0x88);
        puStack_88 = _DAT_142f5c810;
        uStack_80 = _UNK_142f5c818;
        pdb_140e28810(auStack_140,&puStack_88);
        pdb_141537700(uVar6,param_1);
        puVar9 = puStack_68;
        pdb_140e9a350(puStack_68);
        pdb_140e9a350((ulonglong)puVar9 | 1);
        LOCK();
        uVar4 = *puVar9;
        *puVar9 = *puVar9 - 0x10;
        UNLOCK();
        if ((uVar4 & 0xfffffffffffffff2) == 0x12) {
          pdb_142dbbf50(puVar9);
        }
        return;
      }
      goto LAB_1409ebb2a;
    }
    uVar19 = (ushort)(uVar15 - 1) & (ushort)uVar15;
    uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar19);
  }
  auVar24[0] = -(auVar25[0] == -1);
  auVar24[1] = -(auVar25[1] == -1);
  auVar24[2] = -(auVar25[2] == -1);
  auVar24[3] = -(auVar25[3] == -1);
  auVar24[4] = -(auVar25[4] == -1);
  auVar24[5] = -(auVar25[5] == -1);
  auVar24[6] = -(auVar25[6] == -1);
  auVar24[7] = -(auVar25[7] == -1);
  auVar24[8] = -(auVar25[8] == -1);
  auVar24[9] = -(auVar25[9] == -1);
  auVar24[10] = -(auVar25[10] == -1);
  auVar24[0xb] = -(auVar25[0xb] == -1);
  auVar24[0xc] = -(auVar25[0xc] == -1);
  auVar24[0xd] = -(auVar25[0xd] == -1);
  auVar24[0xe] = -(auVar25[0xe] == -1);
  auVar24[0xf] = -(auVar25[0xf] == -1);
  if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar24 >> 0x17,0) & 1) != 0) || (SUB161(auVar24 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar24 >> 0x27,0) & 1) != 0) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar24 >> 0x37,0) & 1) != 0) || (SUB161(auVar24 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar24 >> 0x47,0) & 1) != 0) || (SUB161(auVar24 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar24 >> 0x57,0) & 1) != 0) || (SUB161(auVar24 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar24 >> 0x67,0) & 1) != 0) || (SUB161(auVar24 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar24 >> 0x77,0) & 1) != 0) || auVar24[0xf] < '\0') {
LAB_1409ebb2a:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_1430328b0);
  }
  uVar12 = uVar12 + lVar17 + 0x10;
  lVar17 = lVar17 + 0x10;
  goto LAB_1409eb915;
LAB_1409eb8a0:
  auVar23[0] = -(*pcVar1 == -1);
  auVar23[1] = -(pcVar1[1] == -1);
  auVar23[2] = -(pcVar1[2] == -1);
  auVar23[3] = -(pcVar1[3] == -1);
  auVar23[4] = -(pcVar1[4] == -1);
  auVar23[5] = -(pcVar1[5] == -1);
  auVar23[6] = -(pcVar1[6] == -1);
  auVar23[7] = -(pcVar1[7] == -1);
  auVar23[8] = -(pcVar1[8] == -1);
  auVar23[9] = -(pcVar1[9] == -1);
  auVar23[10] = -(pcVar1[10] == -1);
  auVar23[0xb] = -(pcVar1[0xb] == -1);
  auVar23[0xc] = -(pcVar1[0xc] == -1);
  auVar23[0xd] = -(pcVar1[0xd] == -1);
  auVar23[0xe] = -(pcVar1[0xe] == -1);
  auVar23[0xf] = -(pcVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar23 >> 7,0) & 1) != 0 || (SUB161(auVar23 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar23 >> 0x17,0) & 1) != 0) || (SUB161(auVar23 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar23 >> 0x27,0) & 1) != 0) || (SUB161(auVar23 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar23 >> 0x37,0) & 1) != 0) || (SUB161(auVar23 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar23 >> 0x47,0) & 1) != 0) || (SUB161(auVar23 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar23 >> 0x57,0) & 1) != 0) || (SUB161(auVar23 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar23 >> 0x67,0) & 1) != 0) || (SUB161(auVar23 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar23 >> 0x77,0) & 1) != 0) || auVar23[0xf] < '\0') {
LAB_1409ebb1e:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143032898);
  }
  uVar12 = uVar12 + lVar13 + 0x10;
  lVar13 = lVar13 + 0x10;
  goto LAB_1409eb847;
}

