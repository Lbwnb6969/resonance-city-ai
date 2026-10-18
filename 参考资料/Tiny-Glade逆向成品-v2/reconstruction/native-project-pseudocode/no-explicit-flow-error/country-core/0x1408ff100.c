// VA 0x1408ff100, PDB extent 2166 bytes
// country_core::systems::render_loop::compute_passes::highlight_active_terrain_stroke::highlight_active_terrain_stroke
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/highlight_active_terrain_stroke.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::highlight_active_terrain_stroke::highlight_active_terrain_stroke
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/highlight_active_terrain_stroke.rs
   Extent: 2166 */

longlong pdb_1408ff100(longlong param_1,longlong param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  longlong *plVar10;
  ulonglong *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  ushort uVar21;
  ulonglong uVar22;
  longlong lVar23;
  int iVar24;
  ulonglong uVar25;
  longlong lVar26;
  bool bVar27;
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
  undefined1 auStack_1b8 [136];
  undefined2 uStack_130;
  undefined2 uStack_12e;
  undefined4 uStack_12c;
  undefined2 uStack_128;
  undefined4 uStack_126;
  undefined1 uStack_122;
  undefined1 uStack_121;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  longlong *plStack_88;
  ulonglong *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  int iStack_50;
  undefined1 uStack_4c;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar14 = *(longlong *)(param_2 + 0x70);
    uVar4 = *(ulonglong *)(param_2 + 0x78);
    uVar19 = 0x17b2b0983155443e;
    lVar20 = 0;
    while( true ) {
      uVar19 = uVar19 & uVar4;
      pcVar1 = (char *)(lVar14 + uVar19);
      auVar32[0] = -(*pcVar1 == DAT_142e42310);
      auVar32[1] = -(pcVar1[1] == UNK_142e42311);
      auVar32[2] = -(pcVar1[2] == UNK_142e42312);
      auVar32[3] = -(pcVar1[3] == UNK_142e42313);
      auVar32[4] = -(pcVar1[4] == UNK_142e42314);
      auVar32[5] = -(pcVar1[5] == UNK_142e42315);
      auVar32[6] = -(pcVar1[6] == UNK_142e42316);
      auVar32[7] = -(pcVar1[7] == UNK_142e42317);
      auVar32[8] = -(pcVar1[8] == UNK_142e42318);
      auVar32[9] = -(pcVar1[9] == UNK_142e42319);
      auVar32[10] = -(pcVar1[10] == UNK_142e4231a);
      auVar32[0xb] = -(pcVar1[0xb] == UNK_142e4231b);
      auVar32[0xc] = -(pcVar1[0xc] == UNK_142e4231c);
      auVar32[0xd] = -(pcVar1[0xd] == UNK_142e4231d);
      auVar32[0xe] = -(pcVar1[0xe] == UNK_142e4231e);
      auVar32[0xf] = -(pcVar1[0xf] == UNK_142e4231f);
      uVar21 = (ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe | (ushort)(auVar32[0xf] >> 7) << 0xf;
      uVar18 = (uint)uVar21;
      while (uVar21 != 0) {
        uVar8 = 0;
        for (uVar9 = uVar18; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar8 = uVar8 + 1;
        }
        uVar22 = uVar8 + uVar19 & uVar4;
        pcVar2 = (char *)(lVar14 + -0x18 + uVar22 * -0x18);
        auVar33[0] = -(*pcVar2 == DAT_142e42320);
        auVar33[1] = -(pcVar2[1] == UNK_142e42321);
        auVar33[2] = -(pcVar2[2] == UNK_142e42322);
        auVar33[3] = -(pcVar2[3] == UNK_142e42323);
        auVar33[4] = -(pcVar2[4] == UNK_142e42324);
        auVar33[5] = -(pcVar2[5] == UNK_142e42325);
        auVar33[6] = -(pcVar2[6] == UNK_142e42326);
        auVar33[7] = -(pcVar2[7] == UNK_142e42327);
        auVar33[8] = -(pcVar2[8] == UNK_142e42328);
        auVar33[9] = -(pcVar2[9] == UNK_142e42329);
        auVar33[10] = -(pcVar2[10] == UNK_142e4232a);
        auVar33[0xb] = -(pcVar2[0xb] == UNK_142e4232b);
        auVar33[0xc] = -(pcVar2[0xc] == UNK_142e4232c);
        auVar33[0xd] = -(pcVar2[0xd] == UNK_142e4232d);
        auVar33[0xe] = -(pcVar2[0xe] == UNK_142e4232e);
        auVar33[0xf] = -(pcVar2[0xf] == UNK_142e4232f);
        if ((ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar33[0xf] >> 7) << 0xf) == 0xffff) {
          uVar19 = *(ulonglong *)(lVar14 + uVar22 * -0x18 + -8);
          uVar22 = *(ulonglong *)(param_2 + 0x210);
          if (uVar22 <= uVar19) goto LAB_1408ff2cc;
          lVar20 = *(longlong *)(param_2 + 0x208);
          uVar19 = *(ulonglong *)(lVar20 + uVar19 * 8);
          if (uVar19 == 0) goto LAB_1408ff2cc;
          lVar5 = *(longlong *)(param_2 + 0x1d8);
          lVar23 = ~uVar19 * 0x40;
          if (*(longlong *)(lVar5 + 0x20 + lVar23) == 0) goto LAB_1408ff2cc;
          pcVar1 = *(char **)(lVar23 + lVar5 + 0x10);
          cVar3 = *pcVar1;
          iVar24 = -1;
          if ((cVar3 != '\x05') && ((cVar3 != '\0' || (*(int *)(pcVar1 + 8) != 6))))
          goto LAB_1408ff352;
          uVar19 = 0xad361d203023790;
          lVar23 = 0;
          goto LAB_1408ff25e;
        }
        uVar21 = (ushort)(uVar18 - 1) & (ushort)uVar18;
        uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar21);
      }
      auVar28[0] = -(*pcVar1 == -1);
      auVar28[1] = -(pcVar1[1] == -1);
      auVar28[2] = -(pcVar1[2] == -1);
      auVar28[3] = -(pcVar1[3] == -1);
      auVar28[4] = -(pcVar1[4] == -1);
      auVar28[5] = -(pcVar1[5] == -1);
      auVar28[6] = -(pcVar1[6] == -1);
      auVar28[7] = -(pcVar1[7] == -1);
      auVar28[8] = -(pcVar1[8] == -1);
      auVar28[9] = -(pcVar1[9] == -1);
      auVar28[10] = -(pcVar1[10] == -1);
      auVar28[0xb] = -(pcVar1[0xb] == -1);
      auVar28[0xc] = -(pcVar1[0xc] == -1);
      auVar28[0xd] = -(pcVar1[0xd] == -1);
      auVar28[0xe] = -(pcVar1[0xe] == -1);
      auVar28[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar28 >> 7,0) & 1) != 0 || (SUB161(auVar28 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar28 >> 0x17,0) & 1) != 0) || (SUB161(auVar28 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar28 >> 0x27,0) & 1) != 0) || (SUB161(auVar28 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar28 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar28 >> 0x3f,0) & 1) != 0) || (SUB161(auVar28 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar28 >> 0x4f,0) & 1) != 0) || (SUB161(auVar28 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar28 >> 0x5f,0) & 1) != 0) || (SUB161(auVar28 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar28 >> 0x6f,0) & 1) != 0) || (SUB161(auVar28 >> 0x77,0) & 1) != 0) ||
          auVar28[0xf] < '\0') break;
      uVar19 = uVar19 + lVar20 + 0x10;
      lVar20 = lVar20 + 0x10;
    }
  }
LAB_1408ff2cc:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14301e228);
LAB_1408ff25e:
  uVar19 = uVar19 & uVar4;
  pcVar1 = (char *)(lVar14 + uVar19);
  auVar34[0] = -(*pcVar1 == DAT_142e34910);
  auVar34[1] = -(pcVar1[1] == DAT_142e34910._1_1_);
  auVar34[2] = -(pcVar1[2] == DAT_142e34910._2_1_);
  auVar34[3] = -(pcVar1[3] == DAT_142e34910._3_1_);
  auVar34[4] = -(pcVar1[4] == DAT_142e34910._4_1_);
  auVar34[5] = -(pcVar1[5] == DAT_142e34910._5_1_);
  auVar34[6] = -(pcVar1[6] == DAT_142e34910._6_1_);
  auVar34[7] = -(pcVar1[7] == DAT_142e34910._7_1_);
  auVar34[8] = -(pcVar1[8] == DAT_142e34910._8_1_);
  auVar34[9] = -(pcVar1[9] == DAT_142e34910._9_1_);
  auVar34[10] = -(pcVar1[10] == DAT_142e34910._10_1_);
  auVar34[0xb] = -(pcVar1[0xb] == DAT_142e34910._11_1_);
  auVar34[0xc] = -(pcVar1[0xc] == DAT_142e34910._12_1_);
  auVar34[0xd] = -(pcVar1[0xd] == DAT_142e34910._13_1_);
  auVar34[0xe] = -(pcVar1[0xe] == DAT_142e34910._14_1_);
  auVar34[0xf] = -(pcVar1[0xf] == DAT_142e34910._15_1_);
  uVar21 = (ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe | (ushort)(auVar34[0xf] >> 7) << 0xf;
  uVar18 = (uint)uVar21;
  while( true ) {
    if (uVar21 == 0) goto LAB_1408ff2af;
    uVar8 = 0;
    for (uVar9 = uVar18; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    uVar25 = uVar8 + uVar19 & uVar4;
    pcVar2 = (char *)(lVar14 + -0x18 + uVar25 * -0x18);
    auVar35[0] = -(*pcVar2 == DAT_14301dff0);
    auVar35[1] = -(pcVar2[1] == DAT_14301dff0._1_1_);
    auVar35[2] = -(pcVar2[2] == DAT_14301dff0._2_1_);
    auVar35[3] = -(pcVar2[3] == DAT_14301dff0._3_1_);
    auVar35[4] = -(pcVar2[4] == DAT_14301dff0._4_1_);
    auVar35[5] = -(pcVar2[5] == DAT_14301dff0._5_1_);
    auVar35[6] = -(pcVar2[6] == DAT_14301dff0._6_1_);
    auVar35[7] = -(pcVar2[7] == DAT_14301dff0._7_1_);
    auVar35[8] = -(pcVar2[8] == DAT_14301dff0._8_1_);
    auVar35[9] = -(pcVar2[9] == DAT_14301dff0._9_1_);
    auVar35[10] = -(pcVar2[10] == DAT_14301dff0._10_1_);
    auVar35[0xb] = -(pcVar2[0xb] == DAT_14301dff0._11_1_);
    auVar35[0xc] = -(pcVar2[0xc] == DAT_14301dff0._12_1_);
    auVar35[0xd] = -(pcVar2[0xd] == DAT_14301dff0._13_1_);
    auVar35[0xe] = -(pcVar2[0xe] == DAT_14301dff0._14_1_);
    auVar35[0xf] = -(pcVar2[0xf] == DAT_14301dff0._15_1_);
    if ((ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) | (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe | (ushort)(auVar35[0xf] >> 7) << 0xf
                ) == 0xffff) break;
    uVar21 = (ushort)(uVar18 - 1) & (ushort)uVar18;
    uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar21);
  }
  uVar19 = *(ulonglong *)(lVar14 + uVar25 * -0x18 + -8);
  if (((uVar22 <= uVar19) || (uVar19 = *(ulonglong *)(lVar20 + uVar19 * 8), uVar19 == 0)) ||
     (lVar23 = ~uVar19 * 0x40, *(longlong *)(lVar5 + 0x20 + lVar23) == 0)) goto LAB_1408ff8d5;
  lVar23 = *(longlong *)(lVar23 + lVar5 + 0x10);
  lVar6 = *(longlong *)(lVar23 + 0x10);
  lVar7 = *(longlong *)(lVar23 + 0x30);
  if (lVar7 != 0 || lVar6 != 0) {
    lVar26 = *(longlong *)(lVar23 + 8) + -0x10 + lVar6 * 0x10;
    if (lVar6 == 0) {
      lVar26 = 0;
    }
    lVar23 = *(longlong *)(lVar23 + 0x28) + -0x10 + lVar7 * 0x10;
    if (lVar7 == 0) {
      lVar23 = lVar26;
    }
    iVar24 = *(int *)(lVar23 + 8);
  }
LAB_1408ff352:
  uVar19 = 0x9f886726fda3974;
  lVar23 = 0;
  do {
    uVar19 = uVar19 & uVar4;
    pcVar1 = (char *)(lVar14 + uVar19);
    auVar36[0] = -(*pcVar1 == DAT_142e645e0);
    auVar36[1] = -(pcVar1[1] == DAT_142e645e0._1_1_);
    auVar36[2] = -(pcVar1[2] == DAT_142e645e0._2_1_);
    auVar36[3] = -(pcVar1[3] == DAT_142e645e0._3_1_);
    auVar36[4] = -(pcVar1[4] == DAT_142e645e0._4_1_);
    auVar36[5] = -(pcVar1[5] == DAT_142e645e0._5_1_);
    auVar36[6] = -(pcVar1[6] == DAT_142e645e0._6_1_);
    auVar36[7] = -(pcVar1[7] == DAT_142e645e0._7_1_);
    auVar36[8] = -(pcVar1[8] == DAT_142e645e0._8_1_);
    auVar36[9] = -(pcVar1[9] == DAT_142e645e0._9_1_);
    auVar36[10] = -(pcVar1[10] == DAT_142e645e0._10_1_);
    auVar36[0xb] = -(pcVar1[0xb] == DAT_142e645e0._11_1_);
    auVar36[0xc] = -(pcVar1[0xc] == DAT_142e645e0._12_1_);
    auVar36[0xd] = -(pcVar1[0xd] == DAT_142e645e0._13_1_);
    auVar36[0xe] = -(pcVar1[0xe] == DAT_142e645e0._14_1_);
    auVar36[0xf] = -(pcVar1[0xf] == DAT_142e645e0._15_1_);
    uVar21 = (ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
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
             (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe | (ushort)(auVar36[0xf] >> 7) << 0xf;
    uVar18 = (uint)uVar21;
    while (uVar21 != 0) {
      uVar8 = 0;
      for (uVar9 = uVar18; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
        uVar8 = uVar8 + 1;
      }
      uVar25 = uVar8 + uVar19 & uVar4;
      pcVar2 = (char *)(lVar14 + -0x18 + uVar25 * -0x18);
      auVar37[0] = -(*pcVar2 == DAT_142e645f0);
      auVar37[1] = -(pcVar2[1] == DAT_142e645f0._1_1_);
      auVar37[2] = -(pcVar2[2] == DAT_142e645f0._2_1_);
      auVar37[3] = -(pcVar2[3] == DAT_142e645f0._3_1_);
      auVar37[4] = -(pcVar2[4] == DAT_142e645f0._4_1_);
      auVar37[5] = -(pcVar2[5] == DAT_142e645f0._5_1_);
      auVar37[6] = -(pcVar2[6] == DAT_142e645f0._6_1_);
      auVar37[7] = -(pcVar2[7] == DAT_142e645f0._7_1_);
      auVar37[8] = -(pcVar2[8] == DAT_142e645f0._8_1_);
      auVar37[9] = -(pcVar2[9] == DAT_142e645f0._9_1_);
      auVar37[10] = -(pcVar2[10] == DAT_142e645f0._10_1_);
      auVar37[0xb] = -(pcVar2[0xb] == DAT_142e645f0._11_1_);
      auVar37[0xc] = -(pcVar2[0xc] == DAT_142e645f0._12_1_);
      auVar37[0xd] = -(pcVar2[0xd] == DAT_142e645f0._13_1_);
      auVar37[0xe] = -(pcVar2[0xe] == DAT_142e645f0._14_1_);
      auVar37[0xf] = -(pcVar2[0xf] == DAT_142e645f0._15_1_);
      if ((ushort)((ushort)(SUB161(auVar37 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
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
                   (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar37[0xf] >> 7) << 0xf) == 0xffff) {
        uVar19 = *(ulonglong *)(lVar14 + uVar25 * -0x18 + -8);
        if (((uVar22 <= uVar19) || (uVar19 = *(ulonglong *)(lVar20 + uVar19 * 8), uVar19 == 0)) ||
           (lVar23 = ~uVar19 * 0x40, *(longlong *)(lVar5 + 0x20 + lVar23) == 0)) goto LAB_1408ff8bd;
        if (*(char *)(*(longlong *)(lVar23 + lVar5 + 0x10) + 0xc9) != '\0') {
          iVar24 = -1;
        }
        uVar19 = 0x7057b4358e925fdb;
        lVar23 = 0;
        goto LAB_1408ff44a;
      }
      uVar21 = (ushort)(uVar18 - 1) & (ushort)uVar18;
      uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar21);
    }
    auVar30[0] = -(*pcVar1 == -1);
    auVar30[1] = -(pcVar1[1] == -1);
    auVar30[2] = -(pcVar1[2] == -1);
    auVar30[3] = -(pcVar1[3] == -1);
    auVar30[4] = -(pcVar1[4] == -1);
    auVar30[5] = -(pcVar1[5] == -1);
    auVar30[6] = -(pcVar1[6] == -1);
    auVar30[7] = -(pcVar1[7] == -1);
    auVar30[8] = -(pcVar1[8] == -1);
    auVar30[9] = -(pcVar1[9] == -1);
    auVar30[10] = -(pcVar1[10] == -1);
    auVar30[0xb] = -(pcVar1[0xb] == -1);
    auVar30[0xc] = -(pcVar1[0xc] == -1);
    auVar30[0xd] = -(pcVar1[0xd] == -1);
    auVar30[0xe] = -(pcVar1[0xe] == -1);
    auVar30[0xf] = -(pcVar1[0xf] == -1);
    if ((((((((((((((((SUB161(auVar30 >> 7,0) & 1) != 0 || (SUB161(auVar30 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar30 >> 0x17,0) & 1) != 0) || (SUB161(auVar30 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar30 >> 0x27,0) & 1) != 0) || (SUB161(auVar30 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar30 >> 0x37,0) & 1) != 0) || (SUB161(auVar30 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar30 >> 0x47,0) & 1) != 0) || (SUB161(auVar30 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar30 >> 0x57,0) & 1) != 0) || (SUB161(auVar30 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar30 >> 0x67,0) & 1) != 0) || (SUB161(auVar30 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar30 >> 0x77,0) & 1) != 0) || auVar30[0xf] < '\0') {
LAB_1408ff8bd:
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14301e258);
    }
    uVar19 = uVar19 + lVar23 + 0x10;
    lVar23 = lVar23 + 0x10;
  } while( true );
LAB_1408ff2af:
  auVar29[0] = -(*pcVar1 == -1);
  auVar29[1] = -(pcVar1[1] == -1);
  auVar29[2] = -(pcVar1[2] == -1);
  auVar29[3] = -(pcVar1[3] == -1);
  auVar29[4] = -(pcVar1[4] == -1);
  auVar29[5] = -(pcVar1[5] == -1);
  auVar29[6] = -(pcVar1[6] == -1);
  auVar29[7] = -(pcVar1[7] == -1);
  auVar29[8] = -(pcVar1[8] == -1);
  auVar29[9] = -(pcVar1[9] == -1);
  auVar29[10] = -(pcVar1[10] == -1);
  auVar29[0xb] = -(pcVar1[0xb] == -1);
  auVar29[0xc] = -(pcVar1[0xc] == -1);
  auVar29[0xd] = -(pcVar1[0xd] == -1);
  auVar29[0xe] = -(pcVar1[0xe] == -1);
  auVar29[0xf] = -(pcVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar29 >> 7,0) & 1) != 0 || (SUB161(auVar29 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar29 >> 0x17,0) & 1) != 0) || (SUB161(auVar29 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar29 >> 0x27,0) & 1) != 0) || (SUB161(auVar29 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar29 >> 0x37,0) & 1) != 0) || (SUB161(auVar29 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar29 >> 0x47,0) & 1) != 0) || (SUB161(auVar29 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar29 >> 0x57,0) & 1) != 0) || (SUB161(auVar29 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar29 >> 0x67,0) & 1) != 0) || (SUB161(auVar29 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar29 >> 0x77,0) & 1) != 0) || auVar29[0xf] < '\0') {
LAB_1408ff8d5:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14301e240);
  }
  uVar19 = uVar19 + lVar23 + 0x10;
  lVar23 = lVar23 + 0x10;
  goto LAB_1408ff25e;
LAB_1408ff44a:
  uVar19 = uVar19 & uVar4;
  auVar32 = *(undefined1 (*) [16])(lVar14 + uVar19);
  auVar38[0] = -(auVar32[0] == DAT_142e33d90);
  auVar38[1] = -(auVar32[1] == DAT_142e33d90._1_1_);
  auVar38[2] = -(auVar32[2] == DAT_142e33d90._2_1_);
  auVar38[3] = -(auVar32[3] == DAT_142e33d90._3_1_);
  auVar38[4] = -(auVar32[4] == DAT_142e33d90._4_1_);
  auVar38[5] = -(auVar32[5] == DAT_142e33d90._5_1_);
  auVar38[6] = -(auVar32[6] == DAT_142e33d90._6_1_);
  auVar38[7] = -(auVar32[7] == DAT_142e33d90._7_1_);
  auVar38[8] = -(auVar32[8] == DAT_142e33d90._8_1_);
  auVar38[9] = -(auVar32[9] == DAT_142e33d90._9_1_);
  auVar38[10] = -(auVar32[10] == DAT_142e33d90._10_1_);
  auVar38[0xb] = -(auVar32[0xb] == DAT_142e33d90._11_1_);
  auVar38[0xc] = -(auVar32[0xc] == DAT_142e33d90._12_1_);
  auVar38[0xd] = -(auVar32[0xd] == DAT_142e33d90._13_1_);
  auVar38[0xe] = -(auVar32[0xe] == DAT_142e33d90._14_1_);
  auVar38[0xf] = -(auVar32[0xf] == DAT_142e33d90._15_1_);
  uVar21 = (ushort)(SUB161(auVar38 >> 7,0) & 1) | (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe | (ushort)(auVar38[0xf] >> 7) << 0xf;
  uVar18 = (uint)uVar21;
  while (uVar21 != 0) {
    uVar8 = 0;
    for (uVar9 = uVar18; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    uVar25 = uVar8 + uVar19 & uVar4;
    pcVar1 = (char *)(lVar14 + -0x18 + uVar25 * -0x18);
    auVar39[0] = -(*pcVar1 == DAT_142e34350);
    auVar39[1] = -(pcVar1[1] == DAT_142e34350._1_1_);
    auVar39[2] = -(pcVar1[2] == DAT_142e34350._2_1_);
    auVar39[3] = -(pcVar1[3] == DAT_142e34350._3_1_);
    auVar39[4] = -(pcVar1[4] == DAT_142e34350._4_1_);
    auVar39[5] = -(pcVar1[5] == DAT_142e34350._5_1_);
    auVar39[6] = -(pcVar1[6] == DAT_142e34350._6_1_);
    auVar39[7] = -(pcVar1[7] == DAT_142e34350._7_1_);
    auVar39[8] = -(pcVar1[8] == DAT_142e34350._8_1_);
    auVar39[9] = -(pcVar1[9] == DAT_142e34350._9_1_);
    auVar39[10] = -(pcVar1[10] == DAT_142e34350._10_1_);
    auVar39[0xb] = -(pcVar1[0xb] == DAT_142e34350._11_1_);
    auVar39[0xc] = -(pcVar1[0xc] == DAT_142e34350._12_1_);
    auVar39[0xd] = -(pcVar1[0xd] == DAT_142e34350._13_1_);
    auVar39[0xe] = -(pcVar1[0xe] == DAT_142e34350._14_1_);
    auVar39[0xf] = -(pcVar1[0xf] == DAT_142e34350._15_1_);
    if ((ushort)((ushort)(SUB161(auVar39 >> 7,0) & 1) | (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe | (ushort)(auVar39[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar4 = *(ulonglong *)(lVar14 + uVar25 * -0x18 + -8);
      if (((uVar4 < uVar22) && (uVar4 = *(ulonglong *)(lVar20 + uVar4 * 8), uVar4 != 0)) &&
         (lVar14 = ~uVar4 * 0x40, *(longlong *)(lVar5 + 0x20 + lVar14) != 0)) {
        uVar15 = *(undefined8 *)(lVar5 + lVar14 + 0x10);
        uVar16 = CONCAT71((int7)((ulonglong)param_2 >> 8),0xd);
        plStack_88 = (longlong *)pdb_140a2e6e0(uVar15,uVar16,&UNK_14301e288);
        uVar17 = CONCAT71((int7)((ulonglong)uVar16 >> 8),0xc);
        puStack_80 = (ulonglong *)pdb_140a2db30(uVar15);
        uStack_78 = 0;
        uStack_70 = 8;
        uStack_68 = 0;
        uVar15 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_143331156,0x3a,&uStack_78);
        pdb_140e291c0(&uStack_130,&UNK_143331156,0x3a,uVar15,param_1);
        uStack_60._0_4_ = (undefined4)uVar16;
        uVar12 = (undefined4)uStack_60;
        uStack_60._4_4_ = (undefined4)((ulonglong)uVar16 >> 0x20);
        uVar13 = uStack_60._4_4_;
        uStack_58._0_4_ = (undefined4)uVar17;
        uStack_58._4_4_ = (undefined4)((ulonglong)uVar17 >> 0x20);
        iStack_50 = iVar24;
        pdb_14178cba0(auStack_1b8,&uStack_130,&uStack_60);
        pub_142e32760(&uStack_130,auStack_1b8,0x88);
        uStack_60._4_4_ = 0x100;
        uStack_58._0_4_ = 0x100;
        uStack_58._4_4_ = 1;
        uStack_60._0_4_ = 1;
        pdb_140e28810(&uStack_130,&uStack_60);
        if (iVar24 != -1) {
          uStack_130 = 0;
          uStack_12e = 0x100;
          uStack_12c = 0x10100;
          uStack_128 = 1;
          uStack_126 = 0x2014c01;
          uStack_122 = 0;
          puStack_120 = &UNK_14301e2a0;
          uStack_118 = 9;
          uStack_12c = pdb_140e2b4e0(param_1,&uStack_130);
          uStack_128 = 0x100;
          uStack_126 = 0x10100;
          uStack_122 = 1;
          uStack_121 = 0;
          puStack_120 = (undefined *)CONCAT35(puStack_120._5_3_,0x2014c01);
          uStack_130 = 0;
          uStack_12e = 0;
          if (*(char *)(param_1 + 0x24c) == '\x01') {
            pdb_140e19620(&uStack_130,param_1);
          }
          uStack_98 = puStack_120;
          uStack_a8 = CONCAT22(uStack_12e,uStack_130);
          uStack_a4 = uStack_12c;
          uStack_a0 = CONCAT17(uStack_121,CONCAT16(uStack_122,CONCAT42(uStack_126,uStack_128)));
          uStack_78 = 0;
          uStack_70 = 8;
          uStack_68 = 0;
          uVar15 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_1433314a6,0x21,&uStack_78);
          pdb_140e291c0(&uStack_130,&UNK_1433314a6,0x21,uVar15,param_1);
          iStack_50 = 0x3f800000;
          uStack_4c = 1;
          uStack_60._0_4_ = uVar12;
          uStack_60._4_4_ = uVar13;
          uStack_58 = &uStack_a8;
          pdb_1417a0e30(auStack_1b8,&uStack_130,&uStack_60);
          pub_142e32760(&uStack_130,auStack_1b8,0x88);
          uStack_60._4_4_ = 0x100;
          uStack_58._0_4_ = 0x100;
          uStack_58._4_4_ = 1;
          uStack_60._0_4_ = 1;
          pdb_140e28810(&uStack_130,&uStack_60);
          uStack_78 = 0;
          uStack_70 = 8;
          uStack_68 = 0;
          uVar15 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_1433314a6,0x21,&uStack_78);
          pdb_140e291c0(&uStack_130,&UNK_1433314a6,0x21,uVar15,param_1);
          iStack_50 = 0x3f800000;
          uStack_4c = 0;
          uStack_58._0_4_ = uVar12;
          uStack_58._4_4_ = uVar13;
          uStack_60 = &uStack_a8;
          pdb_1417a0e30(auStack_1b8,&uStack_130,&uStack_60);
          pub_142e32760(&uStack_130,auStack_1b8,0x88);
          uStack_60._4_4_ = 0x100;
          uStack_58._0_4_ = 0x100;
          uStack_58._4_4_ = 1;
          uStack_60._0_4_ = 1;
          pdb_140e28810(&uStack_130,&uStack_60);
        }
        puVar11 = puStack_80;
        pdb_140e9a350(puStack_80);
        pdb_140e9a350((ulonglong)puVar11 | 1);
        LOCK();
        uVar4 = *puVar11;
        *puVar11 = *puVar11 - 0x10;
        UNLOCK();
        if ((uVar4 & 0xfffffffffffffff2) == 0x12) {
          pdb_142dbbf50(puVar11);
        }
        plVar10 = plStack_88;
        pdb_140e9a350(plStack_88);
        pdb_140e9a350();
        LOCK();
        lVar14 = *plVar10;
        bVar27 = lVar14 == 8;
        if (bVar27) {
          *plVar10 = 0;
          lVar14 = 8;
        }
        UNLOCK();
        if (!bVar27) {
          lVar14 = pdb_142dbca40(plVar10,0);
        }
        return lVar14;
      }
      goto LAB_1408ff8c9;
    }
    uVar21 = (ushort)(uVar18 - 1) & (ushort)uVar18;
    uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar21);
  }
  auVar31[0] = -(auVar32[0] == -1);
  auVar31[1] = -(auVar32[1] == -1);
  auVar31[2] = -(auVar32[2] == -1);
  auVar31[3] = -(auVar32[3] == -1);
  auVar31[4] = -(auVar32[4] == -1);
  auVar31[5] = -(auVar32[5] == -1);
  auVar31[6] = -(auVar32[6] == -1);
  auVar31[7] = -(auVar32[7] == -1);
  auVar31[8] = -(auVar32[8] == -1);
  auVar31[9] = -(auVar32[9] == -1);
  auVar31[10] = -(auVar32[10] == -1);
  auVar31[0xb] = -(auVar32[0xb] == -1);
  auVar31[0xc] = -(auVar32[0xc] == -1);
  auVar31[0xd] = -(auVar32[0xd] == -1);
  auVar31[0xe] = -(auVar32[0xe] == -1);
  auVar31[0xf] = -(auVar32[0xf] == -1);
  if ((((((((((((((((SUB161(auVar31 >> 7,0) & 1) != 0 || (SUB161(auVar31 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar31 >> 0x17,0) & 1) != 0) || (SUB161(auVar31 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar31 >> 0x27,0) & 1) != 0) || (SUB161(auVar31 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar31 >> 0x37,0) & 1) != 0) || (SUB161(auVar31 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar31 >> 0x47,0) & 1) != 0) || (SUB161(auVar31 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar31 >> 0x57,0) & 1) != 0) || (SUB161(auVar31 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar31 >> 0x67,0) & 1) != 0) || (SUB161(auVar31 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar31 >> 0x77,0) & 1) != 0) || auVar31[0xf] < '\0') {
LAB_1408ff8c9:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14301e270);
  }
  uVar19 = uVar19 + lVar23 + 0x10;
  lVar23 = lVar23 + 0x10;
  goto LAB_1408ff44a;
}

