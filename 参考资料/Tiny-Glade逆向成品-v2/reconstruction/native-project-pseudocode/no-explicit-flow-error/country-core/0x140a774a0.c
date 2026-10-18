// VA 0x140a774a0, PDB extent 1300 bytes
// country_core::systems::render_loop::compute_passes::mouse_depth_value::mouse_depth_compute
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/mouse_depth_value.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::mouse_depth_value::mouse_depth_compute
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/mouse_depth_value.rs
   Extent: 1300 */

void pdb_140a774a0(longlong param_1,longlong param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  ushort uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  double dVar20;
  double dVar21;
  float fVar22;
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
  float fVar35;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  undefined1 auStack_17c [20];
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 auStack_e0 [168];
  
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar10 = *(longlong *)(param_2 + 0x70);
    uVar12 = 0x1d6a82b468dfb8a2;
    lVar13 = 0;
    while( true ) {
      uVar12 = uVar12 & *(ulonglong *)(param_2 + 0x78);
      auVar28 = *(undefined1 (*) [16])(lVar10 + uVar12);
      auVar26[0] = -(auVar28[0] == DAT_142e34ec0);
      auVar26[1] = -(auVar28[1] == DAT_142e34ec0._1_1_);
      auVar26[2] = -(auVar28[2] == DAT_142e34ec0._2_1_);
      auVar26[3] = -(auVar28[3] == DAT_142e34ec0._3_1_);
      auVar26[4] = -(auVar28[4] == DAT_142e34ec0._4_1_);
      auVar26[5] = -(auVar28[5] == DAT_142e34ec0._5_1_);
      auVar26[6] = -(auVar28[6] == DAT_142e34ec0._6_1_);
      auVar26[7] = -(auVar28[7] == DAT_142e34ec0._7_1_);
      auVar26[8] = -(auVar28[8] == DAT_142e34ec0._8_1_);
      auVar26[9] = -(auVar28[9] == DAT_142e34ec0._9_1_);
      auVar26[10] = -(auVar28[10] == DAT_142e34ec0._10_1_);
      auVar26[0xb] = -(auVar28[0xb] == DAT_142e34ec0._11_1_);
      auVar26[0xc] = -(auVar28[0xc] == DAT_142e34ec0._12_1_);
      auVar26[0xd] = -(auVar28[0xd] == DAT_142e34ec0._13_1_);
      auVar26[0xe] = -(auVar28[0xe] == DAT_142e34ec0._14_1_);
      auVar26[0xf] = -(auVar28[0xf] == DAT_142e34ec0._15_1_);
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
      uVar14 = (uint)uVar15;
      while (uVar15 != 0) {
        uVar6 = 0;
        for (uVar7 = uVar14; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        uVar16 = uVar6 + uVar12 & *(ulonglong *)(param_2 + 0x78);
        pcVar1 = (char *)(lVar10 + -0x18 + uVar16 * -0x18);
        auVar27[0] = -(*pcVar1 == DAT_142e60e60);
        auVar27[1] = -(pcVar1[1] == DAT_142e60e60._1_1_);
        auVar27[2] = -(pcVar1[2] == DAT_142e60e60._2_1_);
        auVar27[3] = -(pcVar1[3] == DAT_142e60e60._3_1_);
        auVar27[4] = -(pcVar1[4] == DAT_142e60e60._4_1_);
        auVar27[5] = -(pcVar1[5] == DAT_142e60e60._5_1_);
        auVar27[6] = -(pcVar1[6] == DAT_142e60e60._6_1_);
        auVar27[7] = -(pcVar1[7] == DAT_142e60e60._7_1_);
        auVar27[8] = -(pcVar1[8] == DAT_142e60e60._8_1_);
        auVar27[9] = -(pcVar1[9] == DAT_142e60e60._9_1_);
        auVar27[10] = -(pcVar1[10] == DAT_142e60e60._10_1_);
        auVar27[0xb] = -(pcVar1[0xb] == DAT_142e60e60._11_1_);
        auVar27[0xc] = -(pcVar1[0xc] == DAT_142e60e60._12_1_);
        auVar27[0xd] = -(pcVar1[0xd] == DAT_142e60e60._13_1_);
        auVar27[0xe] = -(pcVar1[0xe] == DAT_142e60e60._14_1_);
        auVar27[0xf] = -(pcVar1[0xf] == DAT_142e60e60._15_1_);
        if ((ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar27[0xf] >> 7) << 0xf) == 0xffff) {
          uVar12 = *(ulonglong *)(lVar10 + uVar16 * -0x18 + -8);
          if ((*(ulonglong *)(param_2 + 0x210) <= uVar12) ||
             (uVar12 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar12 * 8), uVar12 == 0))
          goto LAB_140a77770;
          lVar10 = ~uVar12 * 0x40;
          if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar10) == 0)
          goto LAB_140a77770;
          uVar3 = *(undefined8 *)(*(longlong *)(param_2 + 0x1d8) + lVar10 + 0x10);
          pdb_14152b220(auStack_17c,uVar3);
          if (*(longlong *)(param_2 + 0x88) == 0) goto LAB_140a7784c;
          lVar10 = *(longlong *)(param_2 + 0x70);
          uVar12 = *(ulonglong *)(param_2 + 0x78);
          uVar16 = 0xac85b006918a30ef;
          lVar13 = 0;
          goto LAB_140a77613;
        }
        uVar15 = (ushort)(uVar14 - 1) & (ushort)uVar14;
        uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar15);
      }
      auVar23[0] = -(auVar28[0] == -1);
      auVar23[1] = -(auVar28[1] == -1);
      auVar23[2] = -(auVar28[2] == -1);
      auVar23[3] = -(auVar28[3] == -1);
      auVar23[4] = -(auVar28[4] == -1);
      auVar23[5] = -(auVar28[5] == -1);
      auVar23[6] = -(auVar28[6] == -1);
      auVar23[7] = -(auVar28[7] == -1);
      auVar23[8] = -(auVar28[8] == -1);
      auVar23[9] = -(auVar28[9] == -1);
      auVar23[10] = -(auVar28[10] == -1);
      auVar23[0xb] = -(auVar28[0xb] == -1);
      auVar23[0xc] = -(auVar28[0xc] == -1);
      auVar23[0xd] = -(auVar28[0xd] == -1);
      auVar23[0xe] = -(auVar28[0xe] == -1);
      auVar23[0xf] = -(auVar28[0xf] == -1);
      if ((((((((((((((((SUB161(auVar23 >> 7,0) & 1) != 0 || (SUB161(auVar23 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar23 >> 0x17,0) & 1) != 0) || (SUB161(auVar23 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar23 >> 0x27,0) & 1) != 0) || (SUB161(auVar23 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar23 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar23 >> 0x3f,0) & 1) != 0) || (SUB161(auVar23 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar23 >> 0x4f,0) & 1) != 0) || (SUB161(auVar23 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar23 >> 0x5f,0) & 1) != 0) || (SUB161(auVar23 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar23 >> 0x6f,0) & 1) != 0) || (SUB161(auVar23 >> 0x77,0) & 1) != 0) ||
          auVar23[0xf] < '\0') break;
      uVar12 = uVar12 + lVar13 + 0x10;
      lVar13 = lVar13 + 0x10;
    }
  }
LAB_140a77770:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143041e98);
LAB_140a77613:
  uVar16 = uVar16 & uVar12;
  pcVar1 = (char *)(lVar10 + uVar16);
  auVar28[0] = -(*pcVar1 == DAT_142e33f50);
  auVar28[1] = -(pcVar1[1] == DAT_142e33f50._1_1_);
  auVar28[2] = -(pcVar1[2] == DAT_142e33f50._2_1_);
  auVar28[3] = -(pcVar1[3] == DAT_142e33f50._3_1_);
  auVar28[4] = -(pcVar1[4] == DAT_142e33f50._4_1_);
  auVar28[5] = -(pcVar1[5] == DAT_142e33f50._5_1_);
  auVar28[6] = -(pcVar1[6] == DAT_142e33f50._6_1_);
  auVar28[7] = -(pcVar1[7] == DAT_142e33f50._7_1_);
  auVar28[8] = -(pcVar1[8] == DAT_142e33f50._8_1_);
  auVar28[9] = -(pcVar1[9] == DAT_142e33f50._9_1_);
  auVar28[10] = -(pcVar1[10] == DAT_142e33f50._10_1_);
  auVar28[0xb] = -(pcVar1[0xb] == DAT_142e33f50._11_1_);
  auVar28[0xc] = -(pcVar1[0xc] == DAT_142e33f50._12_1_);
  auVar28[0xd] = -(pcVar1[0xd] == DAT_142e33f50._13_1_);
  auVar28[0xe] = -(pcVar1[0xe] == DAT_142e33f50._14_1_);
  auVar28[0xf] = -(pcVar1[0xf] == DAT_142e33f50._15_1_);
  uVar15 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe | (ushort)(auVar28[0xf] >> 7) << 0xf;
  uVar14 = (uint)uVar15;
  while (uVar15 != 0) {
    uVar6 = 0;
    for (uVar7 = uVar14; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    uVar17 = uVar6 + uVar16 & uVar12;
    pcVar2 = (char *)(lVar10 + -0x18 + uVar17 * -0x18);
    auVar29[0] = -(*pcVar2 == DAT_142e33f60);
    auVar29[1] = -(pcVar2[1] == UNK_142e33f61);
    auVar29[2] = -(pcVar2[2] == UNK_142e33f62);
    auVar29[3] = -(pcVar2[3] == UNK_142e33f63);
    auVar29[4] = -(pcVar2[4] == UNK_142e33f64);
    auVar29[5] = -(pcVar2[5] == UNK_142e33f65);
    auVar29[6] = -(pcVar2[6] == UNK_142e33f66);
    auVar29[7] = -(pcVar2[7] == UNK_142e33f67);
    auVar29[8] = -(pcVar2[8] == UNK_142e33f68);
    auVar29[9] = -(pcVar2[9] == UNK_142e33f69);
    auVar29[10] = -(pcVar2[10] == UNK_142e33f6a);
    auVar29[0xb] = -(pcVar2[0xb] == UNK_142e33f6b);
    auVar29[0xc] = -(pcVar2[0xc] == UNK_142e33f6c);
    auVar29[0xd] = -(pcVar2[0xd] == UNK_142e33f6d);
    auVar29[0xe] = -(pcVar2[0xe] == UNK_142e33f6e);
    auVar29[0xf] = -(pcVar2[0xf] == UNK_142e33f6f);
    if ((ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe | (ushort)(auVar29[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar16 = *(ulonglong *)(lVar10 + uVar17 * -0x18 + -8);
      uVar17 = *(ulonglong *)(param_2 + 0x210);
      if (uVar17 <= uVar16) goto LAB_140a7784c;
      lVar13 = *(longlong *)(param_2 + 0x208);
      uVar16 = *(ulonglong *)(lVar13 + uVar16 * 8);
      if (uVar16 == 0) goto LAB_140a7784c;
      lVar4 = *(longlong *)(param_2 + 0x1d8);
      lVar18 = ~uVar16 * 0x40;
      if (*(longlong *)(lVar4 + 0x20 + lVar18) == 0) goto LAB_140a7784c;
      puVar5 = *(undefined4 **)(lVar18 + lVar4 + 0x10);
      uVar8 = *puVar5;
      uVar9 = puVar5[1];
      uVar16 = 0x7d09499a2a58ccaf;
      lVar18 = 0;
      goto LAB_140a77702;
    }
    uVar15 = (ushort)(uVar14 - 1) & (ushort)uVar14;
    uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar15);
  }
  goto LAB_140a77670;
LAB_140a77702:
  uVar16 = uVar16 & uVar12;
  pcVar1 = (char *)(lVar10 + uVar16);
  auVar30[0] = -(*pcVar1 == DAT_142e34280);
  auVar30[1] = -(pcVar1[1] == DAT_142e34280._1_1_);
  auVar30[2] = -(pcVar1[2] == DAT_142e34280._2_1_);
  auVar30[3] = -(pcVar1[3] == DAT_142e34280._3_1_);
  auVar30[4] = -(pcVar1[4] == DAT_142e34280._4_1_);
  auVar30[5] = -(pcVar1[5] == DAT_142e34280._5_1_);
  auVar30[6] = -(pcVar1[6] == DAT_142e34280._6_1_);
  auVar30[7] = -(pcVar1[7] == DAT_142e34280._7_1_);
  auVar30[8] = -(pcVar1[8] == DAT_142e34280._8_1_);
  auVar30[9] = -(pcVar1[9] == DAT_142e34280._9_1_);
  auVar30[10] = -(pcVar1[10] == DAT_142e34280._10_1_);
  auVar30[0xb] = -(pcVar1[0xb] == DAT_142e34280._11_1_);
  auVar30[0xc] = -(pcVar1[0xc] == DAT_142e34280._12_1_);
  auVar30[0xd] = -(pcVar1[0xd] == DAT_142e34280._13_1_);
  auVar30[0xe] = -(pcVar1[0xe] == DAT_142e34280._14_1_);
  auVar30[0xf] = -(pcVar1[0xf] == DAT_142e34280._15_1_);
  uVar15 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
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
  uVar14 = (uint)uVar15;
  while (uVar15 != 0) {
    uVar6 = 0;
    for (uVar7 = uVar14; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    uVar19 = uVar6 + uVar16 & uVar12;
    pcVar2 = (char *)(lVar10 + -0x18 + uVar19 * -0x18);
    auVar31[0] = -(*pcVar2 == DAT_142e42330);
    auVar31[1] = -(pcVar2[1] == DAT_142e42330._1_1_);
    auVar31[2] = -(pcVar2[2] == DAT_142e42330._2_1_);
    auVar31[3] = -(pcVar2[3] == DAT_142e42330._3_1_);
    auVar31[4] = -(pcVar2[4] == DAT_142e42330._4_1_);
    auVar31[5] = -(pcVar2[5] == DAT_142e42330._5_1_);
    auVar31[6] = -(pcVar2[6] == DAT_142e42330._6_1_);
    auVar31[7] = -(pcVar2[7] == DAT_142e42330._7_1_);
    auVar31[8] = -(pcVar2[8] == DAT_142e42330._8_1_);
    auVar31[9] = -(pcVar2[9] == DAT_142e42330._9_1_);
    auVar31[10] = -(pcVar2[10] == DAT_142e42330._10_1_);
    auVar31[0xb] = -(pcVar2[0xb] == DAT_142e42330._11_1_);
    auVar31[0xc] = -(pcVar2[0xc] == DAT_142e42330._12_1_);
    auVar31[0xd] = -(pcVar2[0xd] == DAT_142e42330._13_1_);
    auVar31[0xe] = -(pcVar2[0xe] == DAT_142e42330._14_1_);
    auVar31[0xf] = -(pcVar2[0xf] == DAT_142e42330._15_1_);
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
      uVar16 = *(ulonglong *)(lVar10 + uVar19 * -0x18 + -8);
      if (((uVar17 <= uVar16) || (uVar16 = *(ulonglong *)(lVar13 + uVar16 * 8), uVar16 == 0)) ||
         (lVar18 = ~uVar16 * 0x40, *(longlong *)(lVar4 + 0x20 + lVar18) == 0)) goto LAB_140a7799b;
      fVar35 = *(float *)(*(longlong *)(lVar18 + lVar4 + 0x10) + 0x110);
      uVar16 = 0x7138c34c528b712f;
      lVar18 = 0;
      goto LAB_140a777de;
    }
    uVar15 = (ushort)(uVar14 - 1) & (ushort)uVar14;
    uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar15);
  }
  goto LAB_140a77753;
LAB_140a777de:
  uVar16 = uVar16 & uVar12;
  pcVar1 = (char *)(lVar10 + uVar16);
  auVar33[0] = -(*pcVar1 == DAT_142e33d90);
  auVar33[1] = -(pcVar1[1] == DAT_142e33d90._1_1_);
  auVar33[2] = -(pcVar1[2] == DAT_142e33d90._2_1_);
  auVar33[3] = -(pcVar1[3] == DAT_142e33d90._3_1_);
  auVar33[4] = -(pcVar1[4] == DAT_142e33d90._4_1_);
  auVar33[5] = -(pcVar1[5] == DAT_142e33d90._5_1_);
  auVar33[6] = -(pcVar1[6] == DAT_142e33d90._6_1_);
  auVar33[7] = -(pcVar1[7] == DAT_142e33d90._7_1_);
  auVar33[8] = -(pcVar1[8] == DAT_142e33d90._8_1_);
  auVar33[9] = -(pcVar1[9] == DAT_142e33d90._9_1_);
  auVar33[10] = -(pcVar1[10] == DAT_142e33d90._10_1_);
  auVar33[0xb] = -(pcVar1[0xb] == DAT_142e33d90._11_1_);
  auVar33[0xc] = -(pcVar1[0xc] == DAT_142e33d90._12_1_);
  auVar33[0xd] = -(pcVar1[0xd] == DAT_142e33d90._13_1_);
  auVar33[0xe] = -(pcVar1[0xe] == DAT_142e33d90._14_1_);
  auVar33[0xf] = -(pcVar1[0xf] == DAT_142e33d90._15_1_);
  uVar15 = (ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
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
  uVar14 = (uint)uVar15;
  while (uVar15 != 0) {
    uVar6 = 0;
    for (uVar7 = uVar14; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    uVar19 = uVar6 + uVar16 & uVar12;
    pcVar2 = (char *)(lVar10 + -0x18 + uVar19 * -0x18);
    auVar34[0] = -(*pcVar2 == DAT_142e340c0);
    auVar34[1] = -(pcVar2[1] == DAT_142e340c0._1_1_);
    auVar34[2] = -(pcVar2[2] == DAT_142e340c0._2_1_);
    auVar34[3] = -(pcVar2[3] == DAT_142e340c0._3_1_);
    auVar34[4] = -(pcVar2[4] == DAT_142e340c0._4_1_);
    auVar34[5] = -(pcVar2[5] == DAT_142e340c0._5_1_);
    auVar34[6] = -(pcVar2[6] == DAT_142e340c0._6_1_);
    auVar34[7] = -(pcVar2[7] == DAT_142e340c0._7_1_);
    auVar34[8] = -(pcVar2[8] == DAT_142e340c0._8_1_);
    auVar34[9] = -(pcVar2[9] == DAT_142e340c0._9_1_);
    auVar34[10] = -(pcVar2[10] == DAT_142e340c0._10_1_);
    auVar34[0xb] = -(pcVar2[0xb] == DAT_142e340c0._11_1_);
    auVar34[0xc] = -(pcVar2[0xc] == DAT_142e340c0._12_1_);
    auVar34[0xd] = -(pcVar2[0xd] == DAT_142e340c0._13_1_);
    auVar34[0xe] = -(pcVar2[0xe] == DAT_142e340c0._14_1_);
    auVar34[0xf] = -(pcVar2[0xf] == DAT_142e340c0._15_1_);
    if ((ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe | (ushort)(auVar34[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar12 = *(ulonglong *)(lVar10 + uVar19 * -0x18 + -8);
      if (((uVar12 < uVar17) && (uVar12 = *(ulonglong *)(lVar13 + uVar12 * 8), uVar12 != 0)) &&
         (lVar10 = ~uVar12 * 0x40, *(longlong *)(lVar4 + 0x20 + lVar10) != 0)) {
        fVar22 = 0.0;
        if (0.0 <= fVar35) {
          fVar22 = fVar35;
        }
        fVar35 = _DAT_142e36f28;
        if (fVar22 <= _DAT_142e36f28) {
          fVar35 = fVar22;
        }
        uStack_1c0 = 0;
        uStack_1b8 = 8;
        uStack_1b0 = 0;
        uVar12 = **(ulonglong **)(lVar4 + lVar10 + 0x10);
        dVar20 = (double)(uVar12 & 0xffffffff | (ulonglong)_DAT_142e33010) - _DAT_142e33010;
        dVar21 = (double)(uVar12 >> 0x20 | (ulonglong)_UNK_142e33018) - _UNK_142e33018;
        uVar11 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_143330b28,0x28,&uStack_1c0);
        pdb_140e291c0(&uStack_168,&UNK_143330b28,0x28,uVar11,param_1);
        puStack_1a8 = auStack_17c;
        uStack_1a0 = param_3;
        uStack_198 = uVar8;
        uStack_194 = uVar9;
        fStack_190 = (float)dVar20;
        fStack_18c = (float)dVar21;
        fStack_188 = fVar35;
        pdb_14179ddd0(auStack_e0,&uStack_168,&puStack_1a8);
        uStack_168 = _DAT_142f5c810;
        uStack_160 = _UNK_142f5c818;
        pdb_140e28810(auStack_e0,&uStack_168);
        pdb_141539f00(uVar3,param_1);
        return;
      }
      goto LAB_140a779a7;
    }
    uVar15 = (ushort)(uVar14 - 1) & (ushort)uVar14;
    uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar15);
  }
  auVar32[0] = -(*pcVar1 == -1);
  auVar32[1] = -(pcVar1[1] == -1);
  auVar32[2] = -(pcVar1[2] == -1);
  auVar32[3] = -(pcVar1[3] == -1);
  auVar32[4] = -(pcVar1[4] == -1);
  auVar32[5] = -(pcVar1[5] == -1);
  auVar32[6] = -(pcVar1[6] == -1);
  auVar32[7] = -(pcVar1[7] == -1);
  auVar32[8] = -(pcVar1[8] == -1);
  auVar32[9] = -(pcVar1[9] == -1);
  auVar32[10] = -(pcVar1[10] == -1);
  auVar32[0xb] = -(pcVar1[0xb] == -1);
  auVar32[0xc] = -(pcVar1[0xc] == -1);
  auVar32[0xd] = -(pcVar1[0xd] == -1);
  auVar32[0xe] = -(pcVar1[0xe] == -1);
  auVar32[0xf] = -(pcVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar32 >> 7,0) & 1) != 0 || (SUB161(auVar32 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar32 >> 0x17,0) & 1) != 0) || (SUB161(auVar32 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar32 >> 0x27,0) & 1) != 0) || (SUB161(auVar32 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar32 >> 0x37,0) & 1) != 0) || (SUB161(auVar32 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar32 >> 0x47,0) & 1) != 0) || (SUB161(auVar32 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar32 >> 0x57,0) & 1) != 0) || (SUB161(auVar32 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar32 >> 0x67,0) & 1) != 0) || (SUB161(auVar32 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar32 >> 0x77,0) & 1) != 0) || auVar32[0xf] < '\0') {
LAB_140a779a7:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143041ee0);
  }
  uVar16 = uVar16 + lVar18 + 0x10;
  lVar18 = lVar18 + 0x10;
  goto LAB_140a777de;
LAB_140a77753:
  auVar25[0] = -(*pcVar1 == -1);
  auVar25[1] = -(pcVar1[1] == -1);
  auVar25[2] = -(pcVar1[2] == -1);
  auVar25[3] = -(pcVar1[3] == -1);
  auVar25[4] = -(pcVar1[4] == -1);
  auVar25[5] = -(pcVar1[5] == -1);
  auVar25[6] = -(pcVar1[6] == -1);
  auVar25[7] = -(pcVar1[7] == -1);
  auVar25[8] = -(pcVar1[8] == -1);
  auVar25[9] = -(pcVar1[9] == -1);
  auVar25[10] = -(pcVar1[10] == -1);
  auVar25[0xb] = -(pcVar1[0xb] == -1);
  auVar25[0xc] = -(pcVar1[0xc] == -1);
  auVar25[0xd] = -(pcVar1[0xd] == -1);
  auVar25[0xe] = -(pcVar1[0xe] == -1);
  auVar25[0xf] = -(pcVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar25 >> 7,0) & 1) != 0 || (SUB161(auVar25 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar25 >> 0x17,0) & 1) != 0) || (SUB161(auVar25 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar25 >> 0x27,0) & 1) != 0) || (SUB161(auVar25 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar25 >> 0x37,0) & 1) != 0) || (SUB161(auVar25 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar25 >> 0x47,0) & 1) != 0) || (SUB161(auVar25 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar25 >> 0x57,0) & 1) != 0) || (SUB161(auVar25 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar25 >> 0x67,0) & 1) != 0) || (SUB161(auVar25 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar25 >> 0x77,0) & 1) != 0) || auVar25[0xf] < '\0') {
LAB_140a7799b:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143041ec8);
  }
  uVar16 = uVar16 + lVar18 + 0x10;
  lVar18 = lVar18 + 0x10;
  goto LAB_140a77702;
LAB_140a77670:
  auVar24[0] = -(*pcVar1 == -1);
  auVar24[1] = -(pcVar1[1] == -1);
  auVar24[2] = -(pcVar1[2] == -1);
  auVar24[3] = -(pcVar1[3] == -1);
  auVar24[4] = -(pcVar1[4] == -1);
  auVar24[5] = -(pcVar1[5] == -1);
  auVar24[6] = -(pcVar1[6] == -1);
  auVar24[7] = -(pcVar1[7] == -1);
  auVar24[8] = -(pcVar1[8] == -1);
  auVar24[9] = -(pcVar1[9] == -1);
  auVar24[10] = -(pcVar1[10] == -1);
  auVar24[0xb] = -(pcVar1[0xb] == -1);
  auVar24[0xc] = -(pcVar1[0xc] == -1);
  auVar24[0xd] = -(pcVar1[0xd] == -1);
  auVar24[0xe] = -(pcVar1[0xe] == -1);
  auVar24[0xf] = -(pcVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar24 >> 0x17,0) & 1) != 0) || (SUB161(auVar24 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar24 >> 0x27,0) & 1) != 0) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar24 >> 0x37,0) & 1) != 0) || (SUB161(auVar24 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar24 >> 0x47,0) & 1) != 0) || (SUB161(auVar24 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar24 >> 0x57,0) & 1) != 0) || (SUB161(auVar24 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar24 >> 0x67,0) & 1) != 0) || (SUB161(auVar24 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar24 >> 0x77,0) & 1) != 0) || auVar24[0xf] < '\0') {
LAB_140a7784c:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143041eb0);
  }
  uVar16 = uVar16 + lVar13 + 0x10;
  lVar13 = lVar13 + 0x10;
  goto LAB_140a77613;
}

