// VA 0x140b20150, PDB extent 3594 bytes
// country_core::systems::render_loop::compute_passes::grass2::grass2_card_splat
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/grass2.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::grass2::grass2_card_splat
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/grass2.rs
   Extent: 3594 */

void pdb_140b20150(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  char *pcVar1;
  char *pcVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  ushort uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ushort uVar20;
  ushort uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  ulonglong uStack_4d8;
  longlong lStack_4d0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined4 uStack_4a8;
  undefined1 auStack_450 [24];
  undefined1 auStack_438 [24];
  undefined4 auStack_420 [6];
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined4 uStack_3f8;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined1 uStack_3d8;
  undefined1 auStack_3d4 [20];
  undefined1 auStack_3c0 [20];
  undefined1 auStack_3ac [20];
  undefined1 auStack_398 [20];
  undefined1 auStack_384 [20];
  undefined1 auStack_370 [40];
  undefined8 uStack_348;
  undefined4 *puStack_340;
  undefined *puStack_338;
  undefined1 *puStack_330;
  undefined1 *puStack_328;
  undefined4 *puStack_320;
  undefined1 *puStack_318;
  undefined1 *puStack_310;
  undefined4 *puStack_308;
  ushort *puStack_300;
  int *piStack_2f8;
  undefined4 uStack_2bc;
  undefined1 uStack_2b8;
  undefined8 uStack_2b4;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined1 uStack_2a4;
  undefined8 uStack_2a0;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined1 uStack_290;
  undefined8 uStack_28c;
  undefined4 uStack_284;
  uint uStack_280;
  undefined1 uStack_27c;
  undefined8 uStack_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined1 uStack_268;
  undefined8 uStack_264;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined1 uStack_254;
  undefined8 uStack_250;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined1 uStack_240;
  undefined8 uStack_23c;
  undefined4 uStack_234;
  undefined8 uStack_230;
  longlong lStack_228;
  undefined8 uStack_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 uStack_208;
  undefined1 auStack_1f8 [8];
  uint uStack_1f0;
  undefined4 *puStack_1e0;
  undefined8 *puStack_1d8;
  uint *puStack_1d0;
  undefined4 *puStack_1c8;
  undefined4 *puStack_1c0;
  undefined4 *puStack_1b8;
  undefined4 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined1 *puStack_1a0;
  undefined1 *puStack_198;
  undefined1 *puStack_190;
  undefined4 *puStack_188;
  undefined8 uStack_180;
  ulonglong uStack_178;
  undefined4 uStack_16c;
  undefined1 uStack_168;
  undefined8 uStack_164;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined8 uStack_12c;
  undefined4 uStack_124;
  undefined2 uStack_120;
  ushort uStack_11e;
  undefined2 uStack_11c;
  undefined2 uStack_11a;
  ushort uStack_118;
  ushort uStack_116;
  undefined2 uStack_114;
  undefined1 uStack_112;
  undefined1 uStack_111;
  undefined4 uStack_110;
  uint uStack_10c;
  undefined4 uStack_108;
  uint uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined1 uStack_f4;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 uStack_e0;
  undefined8 uStack_dc;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined1 uStack_cc;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 uStack_b8;
  undefined8 uStack_b4;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined1 uStack_a4;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined1 auStack_80 [24];
  int iStack_68;
  ushort uStack_64;
  ushort uStack_62;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lVar8 = *(longlong *)(param_1 + 0x130);
  if (lVar8 == *(longlong *)(param_1 + 0x120)) {
    pdb_142d8afd0(param_1 + 0x120);
  }
  lVar16 = *(longlong *)(param_1 + 0x128);
  *(undefined **)(lVar16 + lVar8 * 0x10) = &UNK_143055c38;
  *(undefined8 *)(lVar16 + 8 + lVar8 * 0x10) = 0x11;
  *(longlong *)(param_1 + 0x130) = lVar8 + 1;
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar8 = *(longlong *)(param_2 + 0x70);
    uVar3 = *(ulonglong *)(param_2 + 0x78);
    uVar14 = 0x1d6a82b468dfb8a2;
    lVar16 = 0;
    while( true ) {
      uVar14 = uVar14 & uVar3;
      pcVar1 = (char *)(lVar8 + uVar14);
      auVar24[0] = -(*pcVar1 == DAT_142e34ec0);
      auVar24[1] = -(pcVar1[1] == UNK_142e34ec1);
      auVar24[2] = -(pcVar1[2] == UNK_142e34ec2);
      auVar24[3] = -(pcVar1[3] == UNK_142e34ec3);
      auVar24[4] = -(pcVar1[4] == UNK_142e34ec4);
      auVar24[5] = -(pcVar1[5] == UNK_142e34ec5);
      auVar24[6] = -(pcVar1[6] == UNK_142e34ec6);
      auVar24[7] = -(pcVar1[7] == UNK_142e34ec7);
      auVar24[8] = -(pcVar1[8] == UNK_142e34ec8);
      auVar24[9] = -(pcVar1[9] == UNK_142e34ec9);
      auVar24[10] = -(pcVar1[10] == UNK_142e34eca);
      auVar24[0xb] = -(pcVar1[0xb] == UNK_142e34ecb);
      auVar24[0xc] = -(pcVar1[0xc] == UNK_142e34ecc);
      auVar24[0xd] = -(pcVar1[0xd] == UNK_142e34ecd);
      auVar24[0xe] = -(pcVar1[0xe] == UNK_142e34ece);
      auVar24[0xf] = -(pcVar1[0xf] == UNK_142e34ecf);
      uVar17 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
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
      uVar15 = (uint)uVar17;
      while (uVar17 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar15; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar18 = uVar4 + uVar14 & uVar3;
        pcVar2 = (char *)(lVar8 + -0x18 + uVar18 * -0x18);
        auVar25[0] = -(*pcVar2 == DAT_142e60e60);
        auVar25[1] = -(pcVar2[1] == UNK_142e60e61);
        auVar25[2] = -(pcVar2[2] == UNK_142e60e62);
        auVar25[3] = -(pcVar2[3] == UNK_142e60e63);
        auVar25[4] = -(pcVar2[4] == UNK_142e60e64);
        auVar25[5] = -(pcVar2[5] == UNK_142e60e65);
        auVar25[6] = -(pcVar2[6] == UNK_142e60e66);
        auVar25[7] = -(pcVar2[7] == UNK_142e60e67);
        auVar25[8] = -(pcVar2[8] == UNK_142e60e68);
        auVar25[9] = -(pcVar2[9] == UNK_142e60e69);
        auVar25[10] = -(pcVar2[10] == UNK_142e60e6a);
        auVar25[0xb] = -(pcVar2[0xb] == UNK_142e60e6b);
        auVar25[0xc] = -(pcVar2[0xc] == UNK_142e60e6c);
        auVar25[0xd] = -(pcVar2[0xd] == UNK_142e60e6d);
        auVar25[0xe] = -(pcVar2[0xe] == UNK_142e60e6e);
        auVar25[0xf] = -(pcVar2[0xf] == UNK_142e60e6f);
        if ((ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar25[0xf] >> 7) << 0xf) == 0xffff) {
          uVar14 = *(ulonglong *)(lVar8 + uVar18 * -0x18 + -8);
          if (*(ulonglong *)(param_2 + 0x210) <= uVar14) goto LAB_140b20ec2;
          uVar14 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar14 * 8);
          if (uVar14 == 0) goto LAB_140b20ec2;
          lVar16 = *(longlong *)(param_2 + 0x1d8);
          lVar19 = ~uVar14 * 0x40;
          if (*(longlong *)(lVar16 + 0x20 + lVar19) == 0) goto LAB_140b20ec2;
          uVar11 = *(undefined8 *)(lVar19 + lVar16 + 0x10);
          uVar14 = 0x7057b4358e925fdb;
          lVar19 = 0;
          goto LAB_140b202ed;
        }
        uVar17 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar17);
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
      uVar14 = uVar14 + lVar16 + 0x10;
      lVar16 = lVar16 + 0x10;
    }
  }
LAB_140b20ec2:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143055c50);
LAB_140b202ed:
  uVar14 = uVar14 & uVar3;
  auVar24 = *(undefined1 (*) [16])(lVar8 + uVar14);
  auVar26[0] = -(auVar24[0] == DAT_142e33d90);
  auVar26[1] = -(auVar24[1] == DAT_142e33d90._1_1_);
  auVar26[2] = -(auVar24[2] == DAT_142e33d90._2_1_);
  auVar26[3] = -(auVar24[3] == DAT_142e33d90._3_1_);
  auVar26[4] = -(auVar24[4] == DAT_142e33d90._4_1_);
  auVar26[5] = -(auVar24[5] == DAT_142e33d90._5_1_);
  auVar26[6] = -(auVar24[6] == DAT_142e33d90._6_1_);
  auVar26[7] = -(auVar24[7] == DAT_142e33d90._7_1_);
  auVar26[8] = -(auVar24[8] == DAT_142e33d90._8_1_);
  auVar26[9] = -(auVar24[9] == DAT_142e33d90._9_1_);
  auVar26[10] = -(auVar24[10] == DAT_142e33d90._10_1_);
  auVar26[0xb] = -(auVar24[0xb] == DAT_142e33d90._11_1_);
  auVar26[0xc] = -(auVar24[0xc] == DAT_142e33d90._12_1_);
  auVar26[0xd] = -(auVar24[0xd] == DAT_142e33d90._13_1_);
  auVar26[0xe] = -(auVar24[0xe] == DAT_142e33d90._14_1_);
  auVar26[0xf] = -(auVar24[0xf] == DAT_142e33d90._15_1_);
  uVar17 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
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
  uVar15 = (uint)uVar17;
  while (uVar17 != 0) {
    uVar4 = 0;
    for (uVar5 = uVar15; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    uVar18 = uVar4 + uVar14 & uVar3;
    pcVar1 = (char *)(lVar8 + -0x18 + uVar18 * -0x18);
    auVar27[0] = -(*pcVar1 == DAT_142e34350);
    auVar27[1] = -(pcVar1[1] == DAT_142e34350._1_1_);
    auVar27[2] = -(pcVar1[2] == DAT_142e34350._2_1_);
    auVar27[3] = -(pcVar1[3] == DAT_142e34350._3_1_);
    auVar27[4] = -(pcVar1[4] == DAT_142e34350._4_1_);
    auVar27[5] = -(pcVar1[5] == DAT_142e34350._5_1_);
    auVar27[6] = -(pcVar1[6] == DAT_142e34350._6_1_);
    auVar27[7] = -(pcVar1[7] == DAT_142e34350._7_1_);
    auVar27[8] = -(pcVar1[8] == DAT_142e34350._8_1_);
    auVar27[9] = -(pcVar1[9] == DAT_142e34350._9_1_);
    auVar27[10] = -(pcVar1[10] == DAT_142e34350._10_1_);
    auVar27[0xb] = -(pcVar1[0xb] == DAT_142e34350._11_1_);
    auVar27[0xc] = -(pcVar1[0xc] == DAT_142e34350._12_1_);
    auVar27[0xd] = -(pcVar1[0xd] == DAT_142e34350._13_1_);
    auVar27[0xe] = -(pcVar1[0xe] == DAT_142e34350._14_1_);
    auVar27[0xf] = -(pcVar1[0xf] == DAT_142e34350._15_1_);
    if ((ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe | (ushort)(auVar27[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar3 = *(ulonglong *)(lVar8 + uVar18 * -0x18 + -8);
      if (((uVar3 < *(ulonglong *)(param_2 + 0x210)) &&
          (uVar3 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar3 * 8), uVar3 != 0)) &&
         (lVar8 = ~uVar3 * 0x40, *(longlong *)(lVar16 + 0x20 + lVar8) != 0)) {
        uVar12 = *(undefined8 *)(lVar16 + lVar8 + 0x10);
        uVar17 = *(ushort *)(param_3 + 8);
        uVar6 = *(ushort *)(param_3 + 10);
        uStack_3e8 = (ulonglong)*(uint *)(param_3 + 8) << 0x20;
        uStack_3e0 = 0x162011000010001;
        uStack_3d8 = 2;
        pdb_141749b70(&uStack_120,param_1,&UNK_143055c80,0x17,&uStack_3e8);
        if (CONCAT22(uStack_11e,uStack_120) == 1) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_143056220,0x2b,&uStack_3e8,&UNK_143056200,&UNK_143055c98);
        }
        uStack_1f0 = CONCAT13(uStack_111,CONCAT12(uStack_112,uStack_114));
        if ((uStack_104 & 1) == 0) {
          uStack_348 = (undefined1 *)0x0;
          puStack_340 = (undefined4 *)0x8;
          puStack_338 = (undefined *)0x0;
          uVar9 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_1433318c4,0x2b,&uStack_348);
          pdb_140e291c0(&uStack_3e8,&UNK_1433318c4,0x2b,uVar9,param_1);
          pdb_1417a1a80(&uStack_120,&uStack_3e8,auStack_1f8,0);
          uStack_3e0 = CONCAT44(1,uStack_1f0 >> 0x10);
          uStack_3e8 = CONCAT44(uStack_1f0 & 0xffff,1);
          pdb_140e28810(&uStack_120,&uStack_3e8);
        }
        uStack_120 = 0;
        uStack_11c._0_1_ = (undefined1)uVar6;
        uStack_11c._1_1_ = (undefined1)(uVar6 >> 8);
        uStack_11a = 1;
        uStack_118 = 1;
        uStack_116 = 0x6201;
        uStack_114 = 0x201;
        uStack_112 = 0;
        uStack_110 = 0x43055cb0;
        uStack_10c = 1;
        uStack_108 = 0x19;
        uStack_104 = 0;
        uStack_11e = uVar17;
        uVar7 = pdb_140e2b4e0(param_1,&uStack_120);
        uStack_11c._0_1_ = (undefined1)uVar7;
        uStack_11c._1_1_ = (undefined1)((uint)uVar7 >> 8);
        uStack_11a = (undefined2)((uint)uVar7 >> 0x10);
        uStack_114 = 1;
        uStack_112 = 1;
        uStack_111 = 0;
        uStack_110 = 0x2016201;
        uStack_10c = uStack_10c & 0xffffff00;
        uStack_120 = 0;
        uStack_11e = 0;
        uStack_118 = uVar17;
        uStack_116 = uVar6;
        if (*(char *)(param_1 + 0x24c) == '\x01') {
          pdb_140e19620(&uStack_120,param_1);
        }
        uStack_208 = CONCAT44(uStack_10c,uStack_110);
        uStack_218 = CONCAT22(uStack_11e,uStack_120);
        uStack_214 = CONCAT22(uStack_11a,CONCAT11(uStack_11c._1_1_,(undefined1)uStack_11c));
        uStack_210 = CONCAT22(uStack_116,uStack_118);
        uStack_20c = CONCAT13(uStack_111,CONCAT12(uStack_112,uStack_114));
        uVar20 = ((uVar6 >> 5) - (ushort)((uVar6 & _DAT_143055690) == 0)) + 1;
        uVar21 = ((uVar17 >> 5) - (ushort)((uVar17 & _UNK_143055692) == 0)) + 1;
        iStack_68 = (uint)uVar20 * (uint)uVar21;
        uStack_120 = 0;
        uStack_11a = 1;
        uStack_118 = 1;
        uStack_116 = 0x901;
        uStack_114 = 0x201;
        uStack_112 = 0;
        uStack_110 = 0x43055cc9;
        uStack_10c = 1;
        uStack_108 = 0x18;
        uStack_104 = 0;
        uStack_230 = param_4;
        lStack_228 = param_3;
        uStack_11e = uVar21;
        uStack_64 = uVar17;
        uStack_62 = uVar6;
        uStack_11c = uVar20;
        uVar7 = pdb_140e2b4e0(param_1,&uStack_120);
        uStack_11c._0_1_ = (undefined1)uVar7;
        uStack_11c._1_1_ = (undefined1)((uint)uVar7 >> 8);
        uStack_11a = (undefined2)((uint)uVar7 >> 0x10);
        uStack_114 = 1;
        uStack_112 = 1;
        uStack_111 = 0;
        uStack_110 = 0x2010901;
        uStack_10c = uStack_10c & 0xffffff00;
        uStack_120 = 0;
        uStack_11e = 0;
        uStack_118 = uVar21;
        uStack_116 = uVar20;
        if (*(char *)(param_1 + 0x24c) == '\x01') {
          pdb_140e19620(&uStack_120,param_1);
        }
        uStack_148 = CONCAT44(uStack_10c,uStack_110);
        uStack_158 = CONCAT22(uStack_11e,uStack_120);
        uStack_154 = CONCAT22(uStack_11a,CONCAT11(uStack_11c._1_1_,(undefined1)uStack_11c));
        uStack_150 = CONCAT22(uStack_116,uStack_118);
        uStack_14c = CONCAT13(uStack_111,CONCAT12(uStack_112,uStack_114));
        pdb_140e2b390(param_1,&uStack_158);
        uVar9 = pdb_140df4400(&UNK_143055ce1,0x19);
        puVar10 = (undefined8 *)pdb_140a2e580(uVar12,uVar9);
        pdb_140e1ea30(auStack_420,*puVar10,param_1,0x23,&UNK_143330ab0);
        uVar9 = pdb_140df4400(&UNK_143055cfa,0x21);
        puVar10 = (undefined8 *)pdb_140a2e580(uVar12,uVar9);
        pdb_140e1ea30(auStack_438,*puVar10,param_1,0x23,&UNK_143330ab0);
        uVar9 = pdb_140df4400(&UNK_143055d1b,0x21);
        puVar10 = (undefined8 *)pdb_140a2e580(uVar12,uVar9);
        pdb_140e1ea30(auStack_450,*puVar10,param_1,0x23,&UNK_143330ab0);
        pdb_140ad9e60(&uStack_120,param_1,uVar11);
        uStack_244 = CONCAT22(uStack_11e,uStack_120);
        uStack_234 = uStack_110;
        uStack_240 = (undefined1)uStack_11c;
        uStack_23c = CONCAT17(uStack_111,
                              CONCAT16(uStack_112,
                                       CONCAT24(uStack_114,CONCAT22(uStack_116,uStack_118))));
        uStack_248 = uStack_c0;
        uStack_258 = uStack_d0;
        uStack_254 = uStack_cc;
        uStack_250 = uStack_c8;
        uStack_25c = uStack_ac;
        uStack_26c = uStack_bc;
        uStack_268 = uStack_b8;
        uStack_264 = uStack_b4;
        uStack_270 = uStack_fc;
        uStack_280 = uStack_10c;
        uStack_27c = (undefined1)uStack_108;
        uStack_278 = CONCAT44(uStack_100,uStack_104);
        uStack_284 = uStack_e8;
        uStack_294 = uStack_f8;
        uStack_290 = uStack_f4;
        uStack_28c = uStack_f0;
        uStack_298 = uStack_d4;
        uStack_2a8 = uStack_e4;
        uStack_2a4 = uStack_e0;
        uStack_2a0 = uStack_dc;
        uStack_2ac = uStack_98;
        uStack_2bc = uStack_a8;
        uStack_2b8 = uStack_a4;
        uStack_2b4 = uStack_a0;
        uStack_15c = uStack_84;
        uStack_16c = uStack_94;
        uStack_168 = uStack_90;
        uStack_164 = uStack_8c;
        pdb_140b22160(&uStack_3e8,param_1);
        pdb_140e29980(param_1,&uStack_3e8);
        uVar13 = SUB81(auStack_3c0,0);
        pdb_140e29980(param_1);
        uVar7 = pdb_140e25e40(0x10);
        uStack_348 = (undefined1 *)CONCAT62(uStack_348._2_6_,1);
        uStack_348 = (undefined1 *)CONCAT44(uVar7,(undefined4)uStack_348);
        puStack_340 = (undefined4 *)CONCAT71(puStack_340._1_7_,uVar13);
        puStack_338 = &UNK_143056170;
        puStack_330 = (undefined1 *)0x20;
        uStack_220 = uVar11;
        uStack_124 = pdb_140e2b4e0(param_1,&uStack_348);
        uStack_130 = CONCAT31(uStack_130._1_3_,uVar13);
        uStack_12c = 0xffffffff00000000;
        uStack_60 = 0;
        uStack_58 = 8;
        uStack_50 = 0;
        uStack_134 = uVar7;
        uVar11 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_143331dc0,0x32,&uStack_60);
        pdb_140e291c0(&uStack_4d8,&UNK_143331dc0,0x32,uVar11,param_1);
        puStack_1e0 = &uStack_134;
        puStack_1d8 = (undefined8 *)&uStack_16c;
        puStack_1d0 = (uint *)CONCAT44(puStack_1d0._4_4_,0x40);
        pdb_1417830f0(&uStack_348,&uStack_4d8,&puStack_1e0);
        uStack_4d8 = _DAT_142f5c810;
        lStack_4d0 = _UNK_142f5c818;
        pdb_140e28810(&uStack_348,&uStack_4d8);
        uStack_408 = CONCAT44(uStack_130,uStack_134);
        uStack_400 = uStack_12c;
        uStack_3f8 = uStack_124;
        pdb_141765440(param_1,&UNK_143055d3c,0x16,&UNK_143055d52,0x40,auStack_80);
        uVar11 = *param_5;
        uStack_60 = 0;
        uStack_58 = 8;
        uStack_50 = 0;
        uVar12 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_143331500,0x28,&uStack_60);
        pdb_140e291c0(&uStack_348,&UNK_143331500,0x28,uVar12,param_1);
        puStack_1e0 = auStack_420;
        puStack_1d0 = &uStack_280;
        puStack_1c8 = &uStack_294;
        puStack_1c0 = &uStack_2a8;
        puStack_1b8 = &uStack_2bc;
        puStack_1b0 = &uStack_16c;
        puStack_1a0 = auStack_3d4;
        puStack_198 = auStack_3c0;
        puStack_190 = auStack_3ac;
        puStack_188 = &uStack_158;
        puStack_1d8 = param_5 + 1;
        puStack_1a8 = &uStack_3e8;
        uStack_180 = uVar11;
        uStack_178 = CONCAT44(uStack_1f0 >> 0x10,uStack_1f0) & 0xffffffff0000ffff;
        pdb_1417926f0(&uStack_4d8,&uStack_348,&puStack_1e0);
        pdb_140e29040(&uStack_4d8,&uStack_408,0);
        pdb_140b23ee0(param_1,&uStack_3e8);
        uStack_60 = 0;
        uStack_58 = 8;
        uStack_50 = 0;
        uVar11 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_143331757,0x27,&uStack_60);
        pdb_140e291c0(&uStack_348,&UNK_143331757,0x27,uVar11,param_1);
        puStack_1e0 = &uStack_244;
        puStack_1d8 = (undefined8 *)&uStack_258;
        puStack_1d0 = (uint *)auStack_398;
        puStack_1c8 = (undefined4 *)auStack_384;
        puStack_1c0 = (undefined4 *)auStack_3d4;
        puStack_1b8 = (undefined4 *)auStack_3ac;
        puStack_1b0 = (undefined4 *)auStack_370;
        puStack_1a8 = (undefined8 *)&uStack_218;
        puStack_1a0 = auStack_1f8;
        pdb_14179a5b0(&uStack_4d8,&uStack_348,&puStack_1e0);
        pdb_140e29040(&uStack_4d8,auStack_370,0);
        uStack_4d8 = uStack_4d8 & 0xffffffff00000000;
        lStack_4d0 = lStack_228;
        uStack_4b8 = 0;
        uStack_4b0 = uStack_230;
        uStack_4a8 = 0;
        puStack_328 = auStack_398;
        puStack_320 = &uStack_26c;
        puStack_318 = auStack_438;
        puStack_310 = auStack_450;
        puStack_308 = &uStack_158;
        puStack_300 = &uStack_64;
        piStack_2f8 = &iStack_68;
        uStack_348 = auStack_1f8;
        puStack_340 = &uStack_218;
        puStack_338 = auStack_3d4;
        puStack_330 = auStack_3ac;
        pdb_141759640(param_1,&UNK_143055d92,0x19,&uStack_4d8,&uStack_348);
        uVar11 = uStack_220;
        pdb_141534eb0(uStack_220,param_1);
        pdb_141536650(uVar11,param_1);
        pdb_141536ce0(uVar11,param_1);
        pdb_141534ac0(uVar11,param_1);
        pdb_141534970(uVar11,param_1);
        pdb_141535690(uVar11,param_1);
        pdb_141534820(uVar11,param_1);
        pdb_1415363b0(uVar11,param_1);
        pdb_1415367a0(uVar11,param_1);
        lVar8 = *(longlong *)(param_1 + 0x130);
        if (lVar8 == *(longlong *)(param_1 + 0x120)) {
          pdb_142d8afd0(param_1 + 0x120);
        }
        *(undefined8 *)(*(longlong *)(param_1 + 0x128) + lVar8 * 0x10) = 0;
        *(longlong *)(param_1 + 0x130) = lVar8 + 1;
        return;
      }
      goto LAB_140b20ece;
    }
    uVar17 = (ushort)(uVar15 - 1) & (ushort)uVar15;
    uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar17);
  }
  auVar23[0] = -(auVar24[0] == -1);
  auVar23[1] = -(auVar24[1] == -1);
  auVar23[2] = -(auVar24[2] == -1);
  auVar23[3] = -(auVar24[3] == -1);
  auVar23[4] = -(auVar24[4] == -1);
  auVar23[5] = -(auVar24[5] == -1);
  auVar23[6] = -(auVar24[6] == -1);
  auVar23[7] = -(auVar24[7] == -1);
  auVar23[8] = -(auVar24[8] == -1);
  auVar23[9] = -(auVar24[9] == -1);
  auVar23[10] = -(auVar24[10] == -1);
  auVar23[0xb] = -(auVar24[0xb] == -1);
  auVar23[0xc] = -(auVar24[0xc] == -1);
  auVar23[0xd] = -(auVar24[0xd] == -1);
  auVar23[0xe] = -(auVar24[0xe] == -1);
  auVar23[0xf] = -(auVar24[0xf] == -1);
  if ((((((((((((((((SUB161(auVar23 >> 7,0) & 1) != 0 || (SUB161(auVar23 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar23 >> 0x17,0) & 1) != 0) || (SUB161(auVar23 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar23 >> 0x27,0) & 1) != 0) || (SUB161(auVar23 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar23 >> 0x37,0) & 1) != 0) || (SUB161(auVar23 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar23 >> 0x47,0) & 1) != 0) || (SUB161(auVar23 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar23 >> 0x57,0) & 1) != 0) || (SUB161(auVar23 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar23 >> 0x67,0) & 1) != 0) || (SUB161(auVar23 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar23 >> 0x77,0) & 1) != 0) || auVar23[0xf] < '\0') {
LAB_140b20ece:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143055c68);
  }
  uVar14 = uVar14 + lVar19 + 0x10;
  lVar19 = lVar19 + 0x10;
  goto LAB_140b202ed;
}

