// VA 0x1409afff0, PDB extent 5818 bytes
// country_core::systems::render_loop::compute_passes::compute_path_masks::compute_path_masks
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/compute_path_masks.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::compute_path_masks::compute_path_masks
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/compute_path_masks.rs
   Extent: 5818 */

void pdb_1409afff0(longlong param_1,longlong param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulonglong *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  ushort uVar24;
  ulonglong uVar25;
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
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auStack_2e8 [24];
  undefined1 auStack_2d0 [24];
  undefined1 auStack_2b8 [136];
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  longlong lStack_210;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  ulonglong *puStack_1d0;
  ulonglong *puStack_1c8;
  ulonglong *puStack_1c0;
  ulonglong *puStack_1b8;
  ulonglong *puStack_1b0;
  ulonglong *puStack_1a8;
  longlong *plStack_1a0;
  longlong *plStack_198;
  longlong *plStack_190;
  longlong *plStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  longlong lStack_168;
  longlong lStack_160;
  longlong lStack_158;
  longlong lStack_150;
  undefined2 uStack_148;
  undefined2 uStack_146;
  undefined4 uStack_144;
  undefined2 uStack_140;
  undefined4 uStack_13e;
  undefined1 uStack_13a;
  undefined1 uStack_139;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 *puStack_80;
  undefined4 *puStack_78;
  undefined8 uStack_70;
  undefined4 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  ulonglong *puStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar8 = *(longlong *)(param_2 + 0x70);
    uVar12 = 0x7057b4358e925fdb;
    lVar22 = 0;
    while( true ) {
      uVar12 = uVar12 & *(ulonglong *)(param_2 + 0x78);
      auVar40 = *(undefined1 (*) [16])(lVar8 + uVar12);
      auVar30[0] = -(auVar40[0] == DAT_142e33d90);
      auVar30[1] = -(auVar40[1] == DAT_142e33d90._1_1_);
      auVar30[2] = -(auVar40[2] == DAT_142e33d90._2_1_);
      auVar30[3] = -(auVar40[3] == DAT_142e33d90._3_1_);
      auVar30[4] = -(auVar40[4] == DAT_142e33d90._4_1_);
      auVar30[5] = -(auVar40[5] == DAT_142e33d90._5_1_);
      auVar30[6] = -(auVar40[6] == DAT_142e33d90._6_1_);
      auVar30[7] = -(auVar40[7] == DAT_142e33d90._7_1_);
      auVar30[8] = -(auVar40[8] == DAT_142e33d90._8_1_);
      auVar30[9] = -(auVar40[9] == DAT_142e33d90._9_1_);
      auVar30[10] = -(auVar40[10] == DAT_142e33d90._10_1_);
      auVar30[0xb] = -(auVar40[0xb] == DAT_142e33d90._11_1_);
      auVar30[0xc] = -(auVar40[0xc] == DAT_142e33d90._12_1_);
      auVar30[0xd] = -(auVar40[0xd] == DAT_142e33d90._13_1_);
      auVar30[0xe] = -(auVar40[0xe] == DAT_142e33d90._14_1_);
      auVar30[0xf] = -(auVar40[0xf] == DAT_142e33d90._15_1_);
      uVar24 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
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
      uVar19 = (uint)uVar24;
      while (uVar24 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar19; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar25 = uVar3 + uVar12 & *(ulonglong *)(param_2 + 0x78);
        pcVar1 = (char *)(lVar8 + -0x18 + uVar25 * -0x18);
        auVar31[0] = -(*pcVar1 == DAT_142e34350);
        auVar31[1] = -(pcVar1[1] == DAT_142e34350._1_1_);
        auVar31[2] = -(pcVar1[2] == DAT_142e34350._2_1_);
        auVar31[3] = -(pcVar1[3] == DAT_142e34350._3_1_);
        auVar31[4] = -(pcVar1[4] == DAT_142e34350._4_1_);
        auVar31[5] = -(pcVar1[5] == DAT_142e34350._5_1_);
        auVar31[6] = -(pcVar1[6] == DAT_142e34350._6_1_);
        auVar31[7] = -(pcVar1[7] == DAT_142e34350._7_1_);
        auVar31[8] = -(pcVar1[8] == DAT_142e34350._8_1_);
        auVar31[9] = -(pcVar1[9] == DAT_142e34350._9_1_);
        auVar31[10] = -(pcVar1[10] == DAT_142e34350._10_1_);
        auVar31[0xb] = -(pcVar1[0xb] == DAT_142e34350._11_1_);
        auVar31[0xc] = -(pcVar1[0xc] == DAT_142e34350._12_1_);
        auVar31[0xd] = -(pcVar1[0xd] == DAT_142e34350._13_1_);
        auVar31[0xe] = -(pcVar1[0xe] == DAT_142e34350._14_1_);
        auVar31[0xf] = -(pcVar1[0xf] == DAT_142e34350._15_1_);
        if ((ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar31[0xf] >> 7) << 0xf) == 0xffff) {
          uVar25 = *(ulonglong *)(lVar8 + uVar25 * -0x18 + -8);
          if ((*(ulonglong *)(param_2 + 0x210) <= uVar25) ||
             (uVar25 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar25 * 8), uVar25 == 0))
          goto LAB_1409b03d8;
          lVar8 = ~uVar25 * 0x40;
          if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar8) == 0) goto LAB_1409b03d8;
          uVar11 = *(undefined8 *)(*(longlong *)(param_2 + 0x1d8) + lVar8 + 0x10);
          uVar13 = CONCAT71((int7)(uVar12 >> 8),2);
          puStack_1d0 = (ulonglong *)pdb_140a2db30(uVar11);
          uVar14 = CONCAT71((int7)((ulonglong)uVar13 >> 8),3);
          puStack_1c8 = (ulonglong *)pdb_140a2db30(uVar11);
          uVar10 = CONCAT71((int7)((ulonglong)uVar14 >> 8),4);
          puStack_1c0 = (ulonglong *)pdb_140a2db30(uVar11);
          puVar15 = (ulonglong *)CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
          puStack_1b8 = (ulonglong *)pdb_140a2db30(uVar11);
          uVar16 = CONCAT71((int7)((ulonglong)puVar15 >> 8),0x12);
          puStack_50 = puVar15;
          puStack_1b0 = (ulonglong *)pdb_140a2db30(uVar11);
          uVar17 = CONCAT71((int7)((ulonglong)uVar16 >> 8),0xe);
          puStack_1a8 = (ulonglong *)pdb_140a2db30(uVar11);
          uVar18 = CONCAT71((int7)((ulonglong)uVar17 >> 8),9);
          uStack_228 = uVar17;
          plStack_1a0 = (longlong *)pdb_140a2e6e0(uVar11,uVar18,&UNK_143029998);
          uVar17 = CONCAT71((int7)((ulonglong)uVar18 >> 8),7);
          uStack_180 = uVar18;
          plStack_198 = (longlong *)pdb_140a2e6e0(uVar11,uVar17,&UNK_1430299b0);
          uVar18 = CONCAT71((int7)((ulonglong)uVar17 >> 8),8);
          uStack_b0 = uVar17;
          plStack_190 = (longlong *)pdb_140a2e6e0(uVar11,uVar18,&UNK_1430299c8);
          uVar17 = CONCAT71((int7)((ulonglong)uVar18 >> 8),5);
          uStack_178 = uVar18;
          plStack_188 = (longlong *)pdb_140a2e6e0(uVar11,uVar17,&UNK_1430299e0);
          uStack_230 = uVar17;
          if (*(longlong *)(param_2 + 0x88) == 0) goto LAB_1409b04e9;
          lVar8 = *(longlong *)(param_2 + 0x70);
          uVar12 = 0x1a62cfb6ee86ab36;
          lVar22 = 0;
          goto LAB_1409b0250;
        }
        uVar24 = (ushort)(uVar19 - 1) & (ushort)uVar19;
        uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar24);
      }
      auVar26[0] = -(auVar40[0] == -1);
      auVar26[1] = -(auVar40[1] == -1);
      auVar26[2] = -(auVar40[2] == -1);
      auVar26[3] = -(auVar40[3] == -1);
      auVar26[4] = -(auVar40[4] == -1);
      auVar26[5] = -(auVar40[5] == -1);
      auVar26[6] = -(auVar40[6] == -1);
      auVar26[7] = -(auVar40[7] == -1);
      auVar26[8] = -(auVar40[8] == -1);
      auVar26[9] = -(auVar40[9] == -1);
      auVar26[10] = -(auVar40[10] == -1);
      auVar26[0xb] = -(auVar40[0xb] == -1);
      auVar26[0xc] = -(auVar40[0xc] == -1);
      auVar26[0xd] = -(auVar40[0xd] == -1);
      auVar26[0xe] = -(auVar40[0xe] == -1);
      auVar26[0xf] = -(auVar40[0xf] == -1);
      if ((((((((((((((((SUB161(auVar26 >> 7,0) & 1) != 0 || (SUB161(auVar26 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar26 >> 0x17,0) & 1) != 0) || (SUB161(auVar26 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar26 >> 0x27,0) & 1) != 0) || (SUB161(auVar26 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar26 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar26 >> 0x3f,0) & 1) != 0) || (SUB161(auVar26 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar26 >> 0x4f,0) & 1) != 0) || (SUB161(auVar26 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar26 >> 0x5f,0) & 1) != 0) || (SUB161(auVar26 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar26 >> 0x6f,0) & 1) != 0) || (SUB161(auVar26 >> 0x77,0) & 1) != 0) ||
          auVar26[0xf] < '\0') break;
      uVar12 = uVar12 + lVar22 + 0x10;
      lVar22 = lVar22 + 0x10;
    }
  }
LAB_1409b03d8:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143029980);
LAB_1409b0250:
  uVar12 = uVar12 & *(ulonglong *)(param_2 + 0x78);
  auVar40 = *(undefined1 (*) [16])(lVar8 + uVar12);
  auVar32[0] = -(auVar40[0] == DAT_142e342f0);
  auVar32[1] = -(auVar40[1] == DAT_142e342f0._1_1_);
  auVar32[2] = -(auVar40[2] == DAT_142e342f0._2_1_);
  auVar32[3] = -(auVar40[3] == DAT_142e342f0._3_1_);
  auVar32[4] = -(auVar40[4] == DAT_142e342f0._4_1_);
  auVar32[5] = -(auVar40[5] == DAT_142e342f0._5_1_);
  auVar32[6] = -(auVar40[6] == DAT_142e342f0._6_1_);
  auVar32[7] = -(auVar40[7] == DAT_142e342f0._7_1_);
  auVar32[8] = -(auVar40[8] == DAT_142e342f0._8_1_);
  auVar32[9] = -(auVar40[9] == DAT_142e342f0._9_1_);
  auVar32[10] = -(auVar40[10] == DAT_142e342f0._10_1_);
  auVar32[0xb] = -(auVar40[0xb] == DAT_142e342f0._11_1_);
  auVar32[0xc] = -(auVar40[0xc] == DAT_142e342f0._12_1_);
  auVar32[0xd] = -(auVar40[0xd] == DAT_142e342f0._13_1_);
  auVar32[0xe] = -(auVar40[0xe] == DAT_142e342f0._14_1_);
  auVar32[0xf] = -(auVar40[0xf] == DAT_142e342f0._15_1_);
  uVar24 = (ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
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
  uVar19 = (uint)uVar24;
  while (uVar24 != 0) {
    uVar3 = 0;
    for (uVar4 = uVar19; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
      uVar3 = uVar3 + 1;
    }
    uVar25 = uVar3 + uVar12 & *(ulonglong *)(param_2 + 0x78);
    pcVar1 = (char *)(lVar8 + -0x18 + uVar25 * -0x18);
    auVar33[0] = -(*pcVar1 == DAT_142e34550);
    auVar33[1] = -(pcVar1[1] == UNK_142e34551);
    auVar33[2] = -(pcVar1[2] == UNK_142e34552);
    auVar33[3] = -(pcVar1[3] == UNK_142e34553);
    auVar33[4] = -(pcVar1[4] == UNK_142e34554);
    auVar33[5] = -(pcVar1[5] == UNK_142e34555);
    auVar33[6] = -(pcVar1[6] == UNK_142e34556);
    auVar33[7] = -(pcVar1[7] == UNK_142e34557);
    auVar33[8] = -(pcVar1[8] == UNK_142e34558);
    auVar33[9] = -(pcVar1[9] == UNK_142e34559);
    auVar33[10] = -(pcVar1[10] == UNK_142e3455a);
    auVar33[0xb] = -(pcVar1[0xb] == UNK_142e3455b);
    auVar33[0xc] = -(pcVar1[0xc] == UNK_142e3455c);
    auVar33[0xd] = -(pcVar1[0xd] == UNK_142e3455d);
    auVar33[0xe] = -(pcVar1[0xe] == UNK_142e3455e);
    auVar33[0xf] = -(pcVar1[0xf] == UNK_142e3455f);
    lStack_168 = param_1;
    if ((ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe | (ushort)(auVar33[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar12 = *(ulonglong *)(lVar8 + uVar25 * -0x18 + -8);
      if ((*(ulonglong *)(param_2 + 0x210) <= uVar12) ||
         (uVar12 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar12 * 8), uVar12 == 0))
      goto LAB_1409b04e9;
      lVar8 = ~uVar12 * 0x40;
      if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar8) == 0) goto LAB_1409b04e9;
      lVar8 = *(longlong *)(param_2 + 0x1d8) + lVar8;
      lStack_210 = *(longlong *)(lVar8 + 0x10);
      uStack_bc = *(undefined4 *)(param_2 + 0x5a8);
      uStack_220 = uVar13;
      uStack_218 = uVar16;
      uStack_170 = uVar10;
      if (*(longlong *)(param_2 + 0x88) == 0) goto LAB_1409b0603;
      lVar22 = *(longlong *)(param_2 + 0x70);
      uVar12 = 0x402d9e8f067ce2e1;
      lVar20 = 0;
      goto LAB_1409b0368;
    }
    uVar24 = (ushort)(uVar19 - 1) & (ushort)uVar19;
    uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar24);
  }
  goto LAB_1409b02b0;
LAB_1409b0368:
  uVar12 = uVar12 & *(ulonglong *)(param_2 + 0x78);
  pcVar1 = (char *)(lVar22 + uVar12);
  auVar40[0] = -(*pcVar1 == DAT_142e346d0);
  auVar40[1] = -(pcVar1[1] == DAT_142e346d0._1_1_);
  auVar40[2] = -(pcVar1[2] == DAT_142e346d0._2_1_);
  auVar40[3] = -(pcVar1[3] == DAT_142e346d0._3_1_);
  auVar40[4] = -(pcVar1[4] == DAT_142e346d0._4_1_);
  auVar40[5] = -(pcVar1[5] == DAT_142e346d0._5_1_);
  auVar40[6] = -(pcVar1[6] == DAT_142e346d0._6_1_);
  auVar40[7] = -(pcVar1[7] == DAT_142e346d0._7_1_);
  auVar40[8] = -(pcVar1[8] == DAT_142e346d0._8_1_);
  auVar40[9] = -(pcVar1[9] == DAT_142e346d0._9_1_);
  auVar40[10] = -(pcVar1[10] == DAT_142e346d0._10_1_);
  auVar40[0xb] = -(pcVar1[0xb] == DAT_142e346d0._11_1_);
  auVar40[0xc] = -(pcVar1[0xc] == DAT_142e346d0._12_1_);
  auVar40[0xd] = -(pcVar1[0xd] == DAT_142e346d0._13_1_);
  auVar40[0xe] = -(pcVar1[0xe] == DAT_142e346d0._14_1_);
  auVar40[0xf] = -(pcVar1[0xf] == DAT_142e346d0._15_1_);
  uVar24 = (ushort)(SUB161(auVar40 >> 7,0) & 1) | (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe | (ushort)(auVar40[0xf] >> 7) << 0xf;
  uVar19 = (uint)uVar24;
  while (uVar24 != 0) {
    uVar3 = 0;
    for (uVar4 = uVar19; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
      uVar3 = uVar3 + 1;
    }
    uVar25 = uVar3 + uVar12 & *(ulonglong *)(param_2 + 0x78);
    pcVar2 = (char *)(lVar22 + -0x18 + uVar25 * -0x18);
    auVar41[0] = -(*pcVar2 == DAT_142e346e0);
    auVar41[1] = -(pcVar2[1] == DAT_142e346e0._1_1_);
    auVar41[2] = -(pcVar2[2] == DAT_142e346e0._2_1_);
    auVar41[3] = -(pcVar2[3] == DAT_142e346e0._3_1_);
    auVar41[4] = -(pcVar2[4] == DAT_142e346e0._4_1_);
    auVar41[5] = -(pcVar2[5] == DAT_142e346e0._5_1_);
    auVar41[6] = -(pcVar2[6] == DAT_142e346e0._6_1_);
    auVar41[7] = -(pcVar2[7] == DAT_142e346e0._7_1_);
    auVar41[8] = -(pcVar2[8] == DAT_142e346e0._8_1_);
    auVar41[9] = -(pcVar2[9] == DAT_142e346e0._9_1_);
    auVar41[10] = -(pcVar2[10] == DAT_142e346e0._10_1_);
    auVar41[0xb] = -(pcVar2[0xb] == DAT_142e346e0._11_1_);
    auVar41[0xc] = -(pcVar2[0xc] == DAT_142e346e0._12_1_);
    auVar41[0xd] = -(pcVar2[0xd] == DAT_142e346e0._13_1_);
    auVar41[0xe] = -(pcVar2[0xe] == DAT_142e346e0._14_1_);
    auVar41[0xf] = -(pcVar2[0xf] == DAT_142e346e0._15_1_);
    if ((ushort)((ushort)(SUB161(auVar41 >> 7,0) & 1) | (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe | (ushort)(auVar41[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar12 = *(ulonglong *)(lVar22 + uVar25 * -0x18 + -8);
      if ((*(ulonglong *)(param_2 + 0x210) <= uVar12) ||
         (uVar12 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar12 * 8), uVar12 == 0))
      goto LAB_1409b0603;
      lVar22 = ~uVar12 * 0x40;
      if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar22) == 0) goto LAB_1409b0603;
      lVar22 = *(longlong *)(param_2 + 0x1d8) + lVar22;
      lStack_160 = *(longlong *)(lVar22 + 0x10);
      uStack_c0 = *(undefined4 *)(param_2 + 0x5a8);
      if (*(longlong *)(param_2 + 0x88) == 0) goto LAB_1409b071c;
      lVar20 = *(longlong *)(param_2 + 0x70);
      uVar12 = 0xc185266c2e69d0a9;
      lVar21 = 0;
      goto LAB_1409b0479;
    }
    uVar24 = (ushort)(uVar19 - 1) & (ushort)uVar19;
    uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar24);
  }
  goto LAB_1409b03b9;
LAB_1409b0479:
  uVar12 = uVar12 & *(ulonglong *)(param_2 + 0x78);
  pcVar1 = (char *)(lVar20 + uVar12);
  auVar42[0] = -(*pcVar1 == DAT_142e34810);
  auVar42[1] = -(pcVar1[1] == DAT_142e34810._1_1_);
  auVar42[2] = -(pcVar1[2] == DAT_142e34810._2_1_);
  auVar42[3] = -(pcVar1[3] == DAT_142e34810._3_1_);
  auVar42[4] = -(pcVar1[4] == DAT_142e34810._4_1_);
  auVar42[5] = -(pcVar1[5] == DAT_142e34810._5_1_);
  auVar42[6] = -(pcVar1[6] == DAT_142e34810._6_1_);
  auVar42[7] = -(pcVar1[7] == DAT_142e34810._7_1_);
  auVar42[8] = -(pcVar1[8] == DAT_142e34810._8_1_);
  auVar42[9] = -(pcVar1[9] == DAT_142e34810._9_1_);
  auVar42[10] = -(pcVar1[10] == DAT_142e34810._10_1_);
  auVar42[0xb] = -(pcVar1[0xb] == DAT_142e34810._11_1_);
  auVar42[0xc] = -(pcVar1[0xc] == DAT_142e34810._12_1_);
  auVar42[0xd] = -(pcVar1[0xd] == DAT_142e34810._13_1_);
  auVar42[0xe] = -(pcVar1[0xe] == DAT_142e34810._14_1_);
  auVar42[0xf] = -(pcVar1[0xf] == DAT_142e34810._15_1_);
  uVar24 = (ushort)(SUB161(auVar42 >> 7,0) & 1) | (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe | (ushort)(auVar42[0xf] >> 7) << 0xf;
  uVar19 = (uint)uVar24;
  while (uVar24 != 0) {
    uVar3 = 0;
    for (uVar4 = uVar19; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
      uVar3 = uVar3 + 1;
    }
    uVar25 = uVar3 + uVar12 & *(ulonglong *)(param_2 + 0x78);
    pcVar2 = (char *)(lVar20 + -0x18 + uVar25 * -0x18);
    auVar43[0] = -(*pcVar2 == DAT_142e34970);
    auVar43[1] = -(pcVar2[1] == DAT_142e34970._1_1_);
    auVar43[2] = -(pcVar2[2] == DAT_142e34970._2_1_);
    auVar43[3] = -(pcVar2[3] == DAT_142e34970._3_1_);
    auVar43[4] = -(pcVar2[4] == DAT_142e34970._4_1_);
    auVar43[5] = -(pcVar2[5] == DAT_142e34970._5_1_);
    auVar43[6] = -(pcVar2[6] == DAT_142e34970._6_1_);
    auVar43[7] = -(pcVar2[7] == DAT_142e34970._7_1_);
    auVar43[8] = -(pcVar2[8] == DAT_142e34970._8_1_);
    auVar43[9] = -(pcVar2[9] == DAT_142e34970._9_1_);
    auVar43[10] = -(pcVar2[10] == DAT_142e34970._10_1_);
    auVar43[0xb] = -(pcVar2[0xb] == DAT_142e34970._11_1_);
    auVar43[0xc] = -(pcVar2[0xc] == DAT_142e34970._12_1_);
    auVar43[0xd] = -(pcVar2[0xd] == DAT_142e34970._13_1_);
    auVar43[0xe] = -(pcVar2[0xe] == DAT_142e34970._14_1_);
    auVar43[0xf] = -(pcVar2[0xf] == DAT_142e34970._15_1_);
    if ((ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) | (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe | (ushort)(auVar43[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar12 = *(ulonglong *)(lVar20 + uVar25 * -0x18 + -8);
      if ((*(ulonglong *)(param_2 + 0x210) <= uVar12) ||
         (uVar12 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar12 * 8), uVar12 == 0))
      goto LAB_1409b071c;
      lVar20 = ~uVar12 * 0x40;
      if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar20) == 0) goto LAB_1409b071c;
      lVar20 = *(longlong *)(param_2 + 0x1d8) + lVar20;
      lStack_158 = *(longlong *)(lVar20 + 0x10);
      uStack_b8 = *(undefined4 *)(param_2 + 0x5a8);
      if (*(longlong *)(param_2 + 0x88) == 0) goto LAB_1409b12fc;
      lVar21 = *(longlong *)(param_2 + 0x70);
      uVar12 = 0x1a4a18d8105d011a;
      lVar23 = 0;
      goto LAB_1409b0595;
    }
    uVar24 = (ushort)(uVar19 - 1) & (ushort)uVar19;
    uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar24);
  }
  goto LAB_1409b04ca;
LAB_1409b0595:
  uVar12 = uVar12 & *(ulonglong *)(param_2 + 0x78);
  pcVar1 = (char *)(lVar21 + uVar12);
  auVar36[0] = -(*pcVar1 == DAT_142e342f0);
  auVar36[1] = -(pcVar1[1] == DAT_142e342f0._1_1_);
  auVar36[2] = -(pcVar1[2] == DAT_142e342f0._2_1_);
  auVar36[3] = -(pcVar1[3] == DAT_142e342f0._3_1_);
  auVar36[4] = -(pcVar1[4] == DAT_142e342f0._4_1_);
  auVar36[5] = -(pcVar1[5] == DAT_142e342f0._5_1_);
  auVar36[6] = -(pcVar1[6] == DAT_142e342f0._6_1_);
  auVar36[7] = -(pcVar1[7] == DAT_142e342f0._7_1_);
  auVar36[8] = -(pcVar1[8] == DAT_142e342f0._8_1_);
  auVar36[9] = -(pcVar1[9] == DAT_142e342f0._9_1_);
  auVar36[10] = -(pcVar1[10] == DAT_142e342f0._10_1_);
  auVar36[0xb] = -(pcVar1[0xb] == DAT_142e342f0._11_1_);
  auVar36[0xc] = -(pcVar1[0xc] == DAT_142e342f0._12_1_);
  auVar36[0xd] = -(pcVar1[0xd] == DAT_142e342f0._13_1_);
  auVar36[0xe] = -(pcVar1[0xe] == DAT_142e342f0._14_1_);
  auVar36[0xf] = -(pcVar1[0xf] == DAT_142e342f0._15_1_);
  uVar24 = (ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
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
  uVar19 = (uint)uVar24;
  while (uVar24 != 0) {
    uVar3 = 0;
    for (uVar4 = uVar19; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
      uVar3 = uVar3 + 1;
    }
    uVar25 = uVar3 + uVar12 & *(ulonglong *)(param_2 + 0x78);
    pcVar2 = (char *)(lVar21 + -0x18 + uVar25 * -0x18);
    auVar37[0] = -(*pcVar2 == DAT_142e34830);
    auVar37[1] = -(pcVar2[1] == DAT_142e34830._1_1_);
    auVar37[2] = -(pcVar2[2] == DAT_142e34830._2_1_);
    auVar37[3] = -(pcVar2[3] == DAT_142e34830._3_1_);
    auVar37[4] = -(pcVar2[4] == DAT_142e34830._4_1_);
    auVar37[5] = -(pcVar2[5] == DAT_142e34830._5_1_);
    auVar37[6] = -(pcVar2[6] == DAT_142e34830._6_1_);
    auVar37[7] = -(pcVar2[7] == DAT_142e34830._7_1_);
    auVar37[8] = -(pcVar2[8] == DAT_142e34830._8_1_);
    auVar37[9] = -(pcVar2[9] == DAT_142e34830._9_1_);
    auVar37[10] = -(pcVar2[10] == DAT_142e34830._10_1_);
    auVar37[0xb] = -(pcVar2[0xb] == DAT_142e34830._11_1_);
    auVar37[0xc] = -(pcVar2[0xc] == DAT_142e34830._12_1_);
    auVar37[0xd] = -(pcVar2[0xd] == DAT_142e34830._13_1_);
    auVar37[0xe] = -(pcVar2[0xe] == DAT_142e34830._14_1_);
    auVar37[0xf] = -(pcVar2[0xf] == DAT_142e34830._15_1_);
    if ((ushort)((ushort)(SUB161(auVar37 >> 7,0) & 1) | (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe | (ushort)(auVar37[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar12 = *(ulonglong *)(lVar21 + uVar25 * -0x18 + -8);
      if ((*(ulonglong *)(param_2 + 0x210) <= uVar12) ||
         (uVar12 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar12 * 8), uVar12 == 0))
      goto LAB_1409b12fc;
      lVar21 = ~uVar12 * 0x40;
      if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar21) == 0) goto LAB_1409b12fc;
      lVar21 = *(longlong *)(param_2 + 0x1d8) + lVar21;
      lStack_150 = *(longlong *)(lVar21 + 0x10);
      uStack_b4 = *(undefined4 *)(param_2 + 0x5a8);
      if (*(longlong *)(param_2 + 0x88) == 0) goto LAB_1409b130b;
      lVar23 = *(longlong *)(param_2 + 0x70);
      uVar12 = 0xd1d45189b47d6e84;
      lVar9 = 0;
      goto LAB_1409b06aa;
    }
    uVar24 = (ushort)(uVar19 - 1) & (ushort)uVar19;
    uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar24);
  }
  goto LAB_1409b05e6;
LAB_1409b06aa:
  uVar12 = uVar12 & *(ulonglong *)(param_2 + 0x78);
  auVar40 = *(undefined1 (*) [16])(lVar23 + uVar12);
  auVar38[0] = -(auVar40[0] == DAT_143022d00);
  auVar38[1] = -(auVar40[1] == DAT_143022d00._1_1_);
  auVar38[2] = -(auVar40[2] == DAT_143022d00._2_1_);
  auVar38[3] = -(auVar40[3] == DAT_143022d00._3_1_);
  auVar38[4] = -(auVar40[4] == DAT_143022d00._4_1_);
  auVar38[5] = -(auVar40[5] == DAT_143022d00._5_1_);
  auVar38[6] = -(auVar40[6] == DAT_143022d00._6_1_);
  auVar38[7] = -(auVar40[7] == DAT_143022d00._7_1_);
  auVar38[8] = -(auVar40[8] == DAT_143022d00._8_1_);
  auVar38[9] = -(auVar40[9] == DAT_143022d00._9_1_);
  auVar38[10] = -(auVar40[10] == DAT_143022d00._10_1_);
  auVar38[0xb] = -(auVar40[0xb] == DAT_143022d00._11_1_);
  auVar38[0xc] = -(auVar40[0xc] == DAT_143022d00._12_1_);
  auVar38[0xd] = -(auVar40[0xd] == DAT_143022d00._13_1_);
  auVar38[0xe] = -(auVar40[0xe] == DAT_143022d00._14_1_);
  auVar38[0xf] = -(auVar40[0xf] == DAT_143022d00._15_1_);
  uVar24 = (ushort)(SUB161(auVar38 >> 7,0) & 1) | (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
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
  uVar19 = (uint)uVar24;
  while (uVar24 != 0) {
    uVar3 = 0;
    for (uVar4 = uVar19; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
      uVar3 = uVar3 + 1;
    }
    uVar25 = uVar3 + uVar12 & *(ulonglong *)(param_2 + 0x78);
    pcVar1 = (char *)(lVar23 + -0x18 + uVar25 * -0x18);
    auVar39[0] = -(*pcVar1 == DAT_143022d10);
    auVar39[1] = -(pcVar1[1] == DAT_143022d10._1_1_);
    auVar39[2] = -(pcVar1[2] == DAT_143022d10._2_1_);
    auVar39[3] = -(pcVar1[3] == DAT_143022d10._3_1_);
    auVar39[4] = -(pcVar1[4] == DAT_143022d10._4_1_);
    auVar39[5] = -(pcVar1[5] == DAT_143022d10._5_1_);
    auVar39[6] = -(pcVar1[6] == DAT_143022d10._6_1_);
    auVar39[7] = -(pcVar1[7] == DAT_143022d10._7_1_);
    auVar39[8] = -(pcVar1[8] == DAT_143022d10._8_1_);
    auVar39[9] = -(pcVar1[9] == DAT_143022d10._9_1_);
    auVar39[10] = -(pcVar1[10] == DAT_143022d10._10_1_);
    auVar39[0xb] = -(pcVar1[0xb] == DAT_143022d10._11_1_);
    auVar39[0xc] = -(pcVar1[0xc] == DAT_143022d10._12_1_);
    auVar39[0xd] = -(pcVar1[0xd] == DAT_143022d10._13_1_);
    auVar39[0xe] = -(pcVar1[0xe] == DAT_143022d10._14_1_);
    auVar39[0xf] = -(pcVar1[0xf] == DAT_143022d10._15_1_);
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
      uVar12 = *(ulonglong *)(lVar23 + uVar25 * -0x18 + -8);
      if ((uVar12 < *(ulonglong *)(param_2 + 0x210)) &&
         (uVar12 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar12 * 8), uVar12 != 0)) {
        lVar23 = ~uVar12 * 0x40;
        if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar23) != 0) {
          if ((((*(char *)(lStack_210 + 0x29b) != '\0') || (*(char *)(lStack_160 + 0x29b) != '\0'))
              || (*(char *)(lStack_158 + 0x29b) != '\0')) ||
             ((lVar23 = *(longlong *)(*(longlong *)(param_2 + 0x1d8) + lVar23 + 0x10),
              *(longlong *)(lVar23 + 0x30) != 0 || *(longlong *)(lVar23 + 0x10) != 0 ||
              (*(char *)(lStack_150 + 0x29b) != '\0')))) {
            *(undefined4 *)(lVar8 + 0x3c) = uStack_bc;
            *(undefined1 *)(lStack_210 + 0x29b) = 0;
            pub_142e32780(lStack_210 + 0x98,0,0x200);
            *(undefined4 *)(lVar22 + 0x3c) = uStack_c0;
            *(undefined1 *)(lStack_160 + 0x29b) = 0;
            pub_142e32780(lStack_160 + 0x98,0,0x200);
            *(undefined4 *)(lVar20 + 0x3c) = uStack_b8;
            *(undefined1 *)(lStack_158 + 0x29b) = 0;
            pub_142e32780(lStack_158 + 0x98,0,0x200);
            *(undefined4 *)(lVar21 + 0x3c) = uStack_b4;
            *(undefined1 *)(lStack_150 + 0x29b) = 0;
            pub_142e32780(lStack_150 + 0x98,0,0x200);
            uStack_a8 = 0;
            uStack_a0 = 8;
            uStack_98 = 0;
            uVar10 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_1433310ff,0x2f,&uStack_a8);
            uVar13 = uStack_220;
            pdb_140e291c0(&uStack_148,&UNK_1433310ff,0x2f,uVar10,param_1);
            uStack_90._0_4_ = (undefined4)uVar17;
            uVar6 = (undefined4)uStack_90;
            uStack_90._4_4_ = (undefined4)((ulonglong)uVar17 >> 0x20);
            uVar7 = uStack_90._4_4_;
            uStack_88._0_4_ = SUB84(puStack_50,0);
            uStack_88._4_4_ = (undefined4)((ulonglong)puStack_50 >> 0x20);
            puStack_80 = (undefined4 *)uStack_170;
            puStack_78 = (undefined4 *)uVar13;
            uStack_70 = uVar14;
            pdb_1417863d0(auStack_2b8,&uStack_148,&uStack_90);
            pub_142e32760(&uStack_148,auStack_2b8,0x88);
            uStack_90._4_4_ = 0x200;
            uStack_88._0_4_ = 0x200;
            uStack_88._4_4_ = 1;
            uStack_90._0_4_ = 1;
            pdb_140e28810(&uStack_148,&uStack_90);
            uStack_148 = 0;
            uStack_146 = 0x200;
            uStack_144 = 0x10200;
            uStack_140 = 1;
            uStack_13e = 0x2014c01;
            uStack_13a = 0;
            puStack_138 = &UNK_143029915;
            uStack_130 = 0xb;
            uStack_144 = pdb_140e2b4e0(param_1,&uStack_148);
            uStack_140 = 0x200;
            uStack_13e = 0x10200;
            uStack_13a = 1;
            uStack_139 = 0;
            puStack_138 = (undefined *)CONCAT35(puStack_138._5_3_,0x2014c01);
            uStack_148 = 0;
            uStack_146 = 0;
            if (*(char *)(param_1 + 0x24c) == '\x01') {
              pdb_140e19620(&uStack_148,param_1);
            }
            uStack_1d8 = puStack_138;
            uStack_1e8 = CONCAT22(uStack_146,uStack_148);
            uStack_1e4 = uStack_144;
            uStack_1e0 = CONCAT17(uStack_139,CONCAT16(uStack_13a,CONCAT42(uStack_13e,uStack_140)));
            uStack_148 = 0;
            uStack_146 = 0x200;
            uStack_144 = 0x10200;
            uStack_140 = 1;
            uStack_13e = 0x2014c01;
            uStack_13a = 0;
            puStack_138 = &UNK_143029920;
            uStack_130 = 0xb;
            uStack_144 = pdb_140e2b4e0(param_1,&uStack_148);
            uStack_140 = 0x200;
            uStack_13e = 0x10200;
            uStack_13a = 1;
            uStack_139 = 0;
            puStack_138 = (undefined *)CONCAT35(puStack_138._5_3_,0x2014c01);
            uStack_148 = 0;
            uStack_146 = 0;
            if (*(char *)(param_1 + 0x24c) == '\x01') {
              pdb_140e19620(&uStack_148,param_1);
            }
            uStack_1f8 = puStack_138;
            uStack_208 = CONCAT22(uStack_146,uStack_148);
            uStack_204 = uStack_144;
            uStack_200 = CONCAT17(uStack_139,CONCAT16(uStack_13a,CONCAT42(uStack_13e,uStack_140)));
            uStack_a8 = 0;
            uStack_a0 = 8;
            uStack_98 = 0;
            uVar10 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_1433313c4,0x2c,&uStack_a8);
            pdb_140e291c0(&uStack_148,&UNK_1433313c4,0x2c,uVar10,param_1);
            uStack_90._0_4_ = (undefined4)uStack_228;
            uStack_90._4_4_ = (undefined4)((ulonglong)uStack_228 >> 0x20);
            uStack_88._0_4_ = uVar6;
            uStack_88._4_4_ = uVar7;
            puStack_80 = &uStack_208;
            pdb_141798cf0(auStack_2b8,&uStack_148,&uStack_90);
            pub_142e32760(&uStack_148,auStack_2b8,0x88);
            uStack_90._4_4_ = 0x200;
            uStack_88._0_4_ = 0x200;
            uStack_88._4_4_ = 1;
            uStack_90._0_4_ = 1;
            pdb_140e28810(&uStack_148,&uStack_90);
            uStack_a8 = 0;
            uStack_a0 = 8;
            uStack_98 = 0;
            uVar10 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_1433314a6,0x21,&uStack_a8);
            pdb_140e291c0(&uStack_148,&UNK_1433314a6,0x21,uVar10,param_1);
            puStack_80._0_5_ = 0x140000000;
            uStack_90 = &uStack_208;
            uStack_88 = &uStack_1e8;
            pdb_1417a0e30(auStack_2b8,&uStack_148,&uStack_90);
            pub_142e32760(&uStack_148,auStack_2b8,0x88);
            uStack_90._4_4_ = 0x200;
            uStack_88._0_4_ = 0x200;
            uStack_88._4_4_ = 1;
            uStack_90._0_4_ = 1;
            pdb_140e28810(&uStack_148,&uStack_90);
            uStack_a8 = 0;
            uStack_a0 = 8;
            uStack_98 = 0;
            uVar10 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_1433314a6,0x21,&uStack_a8);
            pdb_140e291c0(&uStack_148,&UNK_1433314a6,0x21,uVar10,param_1);
            puStack_80 = (undefined4 *)CONCAT35(puStack_80._5_3_,0x40000000);
            uStack_88._0_4_ = uVar6;
            uStack_88._4_4_ = uVar7;
            uStack_90 = &uStack_1e8;
            pdb_1417a0e30(auStack_2b8,&uStack_148,&uStack_90);
            pub_142e32760(&uStack_148,auStack_2b8,0x88);
            uStack_90._4_4_ = 0x200;
            uStack_88._0_4_ = 0x200;
            uStack_88._4_4_ = 1;
            uStack_90._0_4_ = 1;
            pdb_140e28810(&uStack_148,&uStack_90);
            pdb_1409afcc0(auStack_2d0,param_1,puStack_50);
            pdb_1409afcc0(auStack_2e8,param_1,uVar13);
            pdb_1409afcc0(&uStack_1e8,param_1,uVar14);
            lVar8 = param_1;
            pdb_1409afcc0(&uStack_208,param_1,uStack_170);
            uVar13 = CONCAT71((int7)((ulonglong)lVar8 >> 8),0xf);
            puStack_50 = (ulonglong *)pdb_140a2db30(uVar11);
            uStack_a8 = 0;
            uStack_a0 = 8;
            uStack_98 = 0;
            uVar11 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_143331b72,0x28,&uStack_a8);
            pdb_140e291c0(&uStack_148,&UNK_143331b72,0x28,uVar11,param_1);
            uStack_90._0_4_ = (undefined4)uStack_218;
            uStack_90._4_4_ = (undefined4)((ulonglong)uStack_218 >> 0x20);
            uStack_88._0_4_ = (undefined4)uVar13;
            uStack_88._4_4_ = (undefined4)((ulonglong)uVar13 >> 0x20);
            puStack_80 = (undefined4 *)uStack_b0;
            uStack_70 = uStack_180;
            puStack_78 = &uStack_208;
            puStack_68 = &uStack_1e8;
            puStack_60 = auStack_2d0;
            puStack_58 = auStack_2e8;
            pdb_141794530(auStack_2b8,&uStack_148,&uStack_90);
            pub_142e32760(&uStack_148,auStack_2b8,0x88);
            uStack_90._4_4_ = 0x200;
            uStack_88._0_4_ = 0x200;
            uStack_88._4_4_ = 1;
            uStack_90._0_4_ = 1;
            pdb_140e28810(&uStack_148,&uStack_90);
            pdb_140e9a350(puStack_50);
            pdb_140e9a350((ulonglong)puStack_50 | 1);
            LOCK();
            uVar12 = *puStack_50;
            *puStack_50 = *puStack_50 - 0x10;
            UNLOCK();
            if ((uVar12 & 0xfffffffffffffff2) == 0x12) {
              pdb_142dbbf50();
            }
            uStack_90._0_4_ = 0;
            uStack_90._4_4_ = 0;
            uStack_88._0_4_ = 8;
            uStack_88._4_4_ = 0;
            puStack_80 = (undefined4 *)0x0;
            uVar11 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_143331d91,0x2f,&uStack_90);
            pdb_140e291c0(&uStack_148,&UNK_143331d91,0x2f,uVar11,param_1);
            pdb_1417908f0(auStack_2b8,&uStack_148,uStack_178,uStack_b0);
            pub_142e32760(&uStack_148,auStack_2b8,0x88);
            uStack_90._4_4_ = 0x2f0;
            uStack_88._0_4_ = 0x2f0;
            uStack_88._4_4_ = 1;
            uStack_90._0_4_ = 1;
            pdb_140e28810(&uStack_148,&uStack_90);
          }
          pdb_141767280(param_1,&UNK_143029a70,0x14,&UNK_143029a84,0x20,uVar17);
          pdb_141764a70(param_1,&UNK_143029aa4,0xc,&UNK_143029ab0,0x23,uStack_b0);
          pdb_141764a70(param_1,&UNK_143029ad3,0x13,&UNK_143029ae6,0x2a,uStack_178);
          pdb_141764a70(param_1,&UNK_143029b10,9,&UNK_143029b19,0x20,uStack_180);
          plVar5 = plStack_188;
          pdb_140e9a350(plStack_188);
          pdb_140e9a350();
          LOCK();
          lVar8 = *plVar5;
          if (lVar8 == 8) {
            *plVar5 = 0;
          }
          UNLOCK();
          if (lVar8 != 8) {
            pdb_142dbca40(plVar5,0);
          }
          plVar5 = plStack_190;
          pdb_140e9a350(plStack_190);
          pdb_140e9a350();
          LOCK();
          lVar8 = *plVar5;
          if (lVar8 == 8) {
            *plVar5 = 0;
          }
          UNLOCK();
          if (lVar8 != 8) {
            pdb_142dbca40(plVar5,0);
          }
          plVar5 = plStack_198;
          pdb_140e9a350(plStack_198);
          pdb_140e9a350();
          LOCK();
          lVar8 = *plVar5;
          if (lVar8 == 8) {
            *plVar5 = 0;
          }
          UNLOCK();
          if (lVar8 != 8) {
            pdb_142dbca40(plVar5,0);
          }
          plVar5 = plStack_1a0;
          pdb_140e9a350(plStack_1a0);
          pdb_140e9a350();
          LOCK();
          lVar8 = *plVar5;
          if (lVar8 == 8) {
            *plVar5 = 0;
          }
          UNLOCK();
          if (lVar8 != 8) {
            pdb_142dbca40(plVar5,0);
          }
          puVar15 = puStack_1a8;
          pdb_140e9a350(puStack_1a8);
          pdb_140e9a350((ulonglong)puVar15 | 1);
          LOCK();
          uVar12 = *puVar15;
          *puVar15 = *puVar15 - 0x10;
          UNLOCK();
          if ((uVar12 & 0xfffffffffffffff2) == 0x12) {
            pdb_142dbbf50(puVar15);
          }
          puVar15 = puStack_1b0;
          pdb_140e9a350(puStack_1b0);
          pdb_140e9a350((ulonglong)puVar15 | 1);
          LOCK();
          uVar12 = *puVar15;
          *puVar15 = *puVar15 - 0x10;
          UNLOCK();
          if ((uVar12 & 0xfffffffffffffff2) == 0x12) {
            pdb_142dbbf50(puVar15);
          }
          puVar15 = puStack_1b8;
          pdb_140e9a350(puStack_1b8);
          pdb_140e9a350((ulonglong)puVar15 | 1);
          LOCK();
          uVar12 = *puVar15;
          *puVar15 = *puVar15 - 0x10;
          UNLOCK();
          if ((uVar12 & 0xfffffffffffffff2) == 0x12) {
            pdb_142dbbf50(puVar15);
          }
          puVar15 = puStack_1c0;
          pdb_140e9a350(puStack_1c0);
          pdb_140e9a350((ulonglong)puVar15 | 1);
          LOCK();
          uVar12 = *puVar15;
          *puVar15 = *puVar15 - 0x10;
          UNLOCK();
          if ((uVar12 & 0xfffffffffffffff2) == 0x12) {
            pdb_142dbbf50(puVar15);
          }
          puVar15 = puStack_1c8;
          pdb_140e9a350(puStack_1c8);
          pdb_140e9a350((ulonglong)puVar15 | 1);
          LOCK();
          uVar12 = *puVar15;
          *puVar15 = *puVar15 - 0x10;
          UNLOCK();
          if ((uVar12 & 0xfffffffffffffff2) == 0x12) {
            pdb_142dbbf50(puVar15);
          }
          puVar15 = puStack_1d0;
          pdb_140e9a350(puStack_1d0);
          pdb_140e9a350((ulonglong)puVar15 | 1);
          LOCK();
          uVar12 = *puVar15;
          *puVar15 = *puVar15 - 0x10;
          UNLOCK();
          if ((uVar12 & 0xfffffffffffffff2) == 0x12) {
            pdb_142dbbf50(puVar15);
          }
          return;
        }
      }
      goto LAB_1409b130b;
    }
    uVar24 = (ushort)(uVar19 - 1) & (ushort)uVar19;
    uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar24);
  }
  auVar29[0] = -(auVar40[0] == -1);
  auVar29[1] = -(auVar40[1] == -1);
  auVar29[2] = -(auVar40[2] == -1);
  auVar29[3] = -(auVar40[3] == -1);
  auVar29[4] = -(auVar40[4] == -1);
  auVar29[5] = -(auVar40[5] == -1);
  auVar29[6] = -(auVar40[6] == -1);
  auVar29[7] = -(auVar40[7] == -1);
  auVar29[8] = -(auVar40[8] == -1);
  auVar29[9] = -(auVar40[9] == -1);
  auVar29[10] = -(auVar40[10] == -1);
  auVar29[0xb] = -(auVar40[0xb] == -1);
  auVar29[0xc] = -(auVar40[0xc] == -1);
  auVar29[0xd] = -(auVar40[0xd] == -1);
  auVar29[0xe] = -(auVar40[0xe] == -1);
  auVar29[0xf] = -(auVar40[0xf] == -1);
  if ((((((((((((((((SUB161(auVar29 >> 7,0) & 1) != 0 || (SUB161(auVar29 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar29 >> 0x17,0) & 1) != 0) || (SUB161(auVar29 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar29 >> 0x27,0) & 1) != 0) || (SUB161(auVar29 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar29 >> 0x37,0) & 1) != 0) || (SUB161(auVar29 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar29 >> 0x47,0) & 1) != 0) || (SUB161(auVar29 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar29 >> 0x57,0) & 1) != 0) || (SUB161(auVar29 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar29 >> 0x67,0) & 1) != 0) || (SUB161(auVar29 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar29 >> 0x77,0) & 1) != 0) || auVar29[0xf] < '\0') {
LAB_1409b130b:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143029a58);
  }
  uVar12 = uVar12 + lVar9 + 0x10;
  lVar9 = lVar9 + 0x10;
  goto LAB_1409b06aa;
LAB_1409b05e6:
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
                  (SUB161(auVar28 >> 0x17,0) & 1) != 0) || (SUB161(auVar28 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar28 >> 0x27,0) & 1) != 0) || (SUB161(auVar28 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar28 >> 0x37,0) & 1) != 0) || (SUB161(auVar28 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar28 >> 0x47,0) & 1) != 0) || (SUB161(auVar28 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar28 >> 0x57,0) & 1) != 0) || (SUB161(auVar28 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar28 >> 0x67,0) & 1) != 0) || (SUB161(auVar28 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar28 >> 0x77,0) & 1) != 0) || auVar28[0xf] < '\0') {
LAB_1409b12fc:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143029a40);
  }
  uVar12 = uVar12 + lVar23 + 0x10;
  lVar23 = lVar23 + 0x10;
  goto LAB_1409b0595;
LAB_1409b04ca:
  auVar35[0] = -(*pcVar1 == -1);
  auVar35[1] = -(pcVar1[1] == -1);
  auVar35[2] = -(pcVar1[2] == -1);
  auVar35[3] = -(pcVar1[3] == -1);
  auVar35[4] = -(pcVar1[4] == -1);
  auVar35[5] = -(pcVar1[5] == -1);
  auVar35[6] = -(pcVar1[6] == -1);
  auVar35[7] = -(pcVar1[7] == -1);
  auVar35[8] = -(pcVar1[8] == -1);
  auVar35[9] = -(pcVar1[9] == -1);
  auVar35[10] = -(pcVar1[10] == -1);
  auVar35[0xb] = -(pcVar1[0xb] == -1);
  auVar35[0xc] = -(pcVar1[0xc] == -1);
  auVar35[0xd] = -(pcVar1[0xd] == -1);
  auVar35[0xe] = -(pcVar1[0xe] == -1);
  auVar35[0xf] = -(pcVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar35 >> 7,0) & 1) != 0 || (SUB161(auVar35 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar35 >> 0x17,0) & 1) != 0) || (SUB161(auVar35 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar35 >> 0x27,0) & 1) != 0) || (SUB161(auVar35 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar35 >> 0x37,0) & 1) != 0) || (SUB161(auVar35 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar35 >> 0x47,0) & 1) != 0) || (SUB161(auVar35 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar35 >> 0x57,0) & 1) != 0) || (SUB161(auVar35 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar35 >> 0x67,0) & 1) != 0) || (SUB161(auVar35 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar35 >> 0x77,0) & 1) != 0) || auVar35[0xf] < '\0') {
LAB_1409b071c:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143029a28);
  }
  uVar12 = uVar12 + lVar21 + 0x10;
  lVar21 = lVar21 + 0x10;
  goto LAB_1409b0479;
LAB_1409b03b9:
  auVar34[0] = -(*pcVar1 == -1);
  auVar34[1] = -(pcVar1[1] == -1);
  auVar34[2] = -(pcVar1[2] == -1);
  auVar34[3] = -(pcVar1[3] == -1);
  auVar34[4] = -(pcVar1[4] == -1);
  auVar34[5] = -(pcVar1[5] == -1);
  auVar34[6] = -(pcVar1[6] == -1);
  auVar34[7] = -(pcVar1[7] == -1);
  auVar34[8] = -(pcVar1[8] == -1);
  auVar34[9] = -(pcVar1[9] == -1);
  auVar34[10] = -(pcVar1[10] == -1);
  auVar34[0xb] = -(pcVar1[0xb] == -1);
  auVar34[0xc] = -(pcVar1[0xc] == -1);
  auVar34[0xd] = -(pcVar1[0xd] == -1);
  auVar34[0xe] = -(pcVar1[0xe] == -1);
  auVar34[0xf] = -(pcVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar34 >> 7,0) & 1) != 0 || (SUB161(auVar34 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar34 >> 0x17,0) & 1) != 0) || (SUB161(auVar34 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar34 >> 0x27,0) & 1) != 0) || (SUB161(auVar34 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar34 >> 0x37,0) & 1) != 0) || (SUB161(auVar34 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar34 >> 0x47,0) & 1) != 0) || (SUB161(auVar34 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar34 >> 0x57,0) & 1) != 0) || (SUB161(auVar34 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar34 >> 0x67,0) & 1) != 0) || (SUB161(auVar34 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar34 >> 0x77,0) & 1) != 0) || auVar34[0xf] < '\0') {
LAB_1409b0603:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143029a10);
  }
  uVar12 = uVar12 + lVar20 + 0x10;
  lVar20 = lVar20 + 0x10;
  goto LAB_1409b0368;
LAB_1409b02b0:
  auVar27[0] = -(auVar40[0] == -1);
  auVar27[1] = -(auVar40[1] == -1);
  auVar27[2] = -(auVar40[2] == -1);
  auVar27[3] = -(auVar40[3] == -1);
  auVar27[4] = -(auVar40[4] == -1);
  auVar27[5] = -(auVar40[5] == -1);
  auVar27[6] = -(auVar40[6] == -1);
  auVar27[7] = -(auVar40[7] == -1);
  auVar27[8] = -(auVar40[8] == -1);
  auVar27[9] = -(auVar40[9] == -1);
  auVar27[10] = -(auVar40[10] == -1);
  auVar27[0xb] = -(auVar40[0xb] == -1);
  auVar27[0xc] = -(auVar40[0xc] == -1);
  auVar27[0xd] = -(auVar40[0xd] == -1);
  auVar27[0xe] = -(auVar40[0xe] == -1);
  auVar27[0xf] = -(auVar40[0xf] == -1);
  if ((((((((((((((((SUB161(auVar27 >> 7,0) & 1) != 0 || (SUB161(auVar27 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar27 >> 0x17,0) & 1) != 0) || (SUB161(auVar27 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar27 >> 0x27,0) & 1) != 0) || (SUB161(auVar27 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar27 >> 0x37,0) & 1) != 0) || (SUB161(auVar27 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar27 >> 0x47,0) & 1) != 0) || (SUB161(auVar27 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar27 >> 0x57,0) & 1) != 0) || (SUB161(auVar27 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar27 >> 0x67,0) & 1) != 0) || (SUB161(auVar27 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar27 >> 0x77,0) & 1) != 0) || auVar27[0xf] < '\0') {
LAB_1409b04e9:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_1430299f8);
  }
  uVar12 = uVar12 + lVar22 + 0x10;
  lVar22 = lVar22 + 0x10;
  goto LAB_1409b0250;
}

