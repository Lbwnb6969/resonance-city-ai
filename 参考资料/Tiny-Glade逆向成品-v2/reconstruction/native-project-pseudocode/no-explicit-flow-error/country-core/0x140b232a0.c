// VA 0x140b232a0, PDB extent 2606 bytes
// country_core::systems::render_loop::compute_passes::grass2::grass2_splat_shadow_cascade
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/grass2.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::grass2::grass2_splat_shadow_cascade
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/grass2.rs
   Extent: 2606 */

void pdb_140b232a0(undefined8 *param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  undefined8 *param_5,longlong param_6,longlong param_7)

{
  char *pcVar1;
  char *pcVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  ushort uVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined4 uStack_438;
  undefined4 uStack_434;
  uint uStack_430;
  undefined4 uStack_42c;
  undefined8 uStack_428;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined8 uStack_40c;
  undefined4 uStack_404;
  undefined4 *puStack_400;
  undefined4 *puStack_3f8;
  undefined4 *puStack_3f0;
  undefined4 *puStack_3e8;
  uint *puStack_3e0;
  undefined4 *puStack_3d8;
  undefined2 *puStack_3d0;
  uint *puStack_3c8;
  undefined1 *puStack_3c0;
  undefined1 *puStack_3b8;
  undefined4 *puStack_3b0;
  undefined4 *puStack_3a8;
  ulonglong uStack_3a0;
  undefined8 uStack_398;
  undefined8 *puStack_390;
  undefined4 uStack_384;
  undefined1 uStack_380;
  undefined8 uStack_37c;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined1 uStack_36c;
  undefined8 uStack_368;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined1 uStack_358;
  undefined8 uStack_354;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined1 uStack_344;
  undefined8 uStack_340;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined1 uStack_330;
  undefined8 uStack_32c;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined1 uStack_31c;
  undefined8 uStack_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined1 uStack_308;
  undefined8 uStack_304;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined6 uStack_2f0;
  undefined2 uStack_2ea;
  undefined6 uStack_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined6 uStack_2d8;
  undefined2 uStack_2d2;
  undefined6 uStack_2d0;
  undefined4 uStack_2c8;
  undefined1 uStack_2c4;
  undefined8 uStack_2c0;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined1 uStack_2b0;
  undefined8 uStack_2ac;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined1 uStack_29c;
  undefined8 uStack_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined1 uStack_288;
  undefined8 uStack_284;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined1 uStack_274;
  undefined8 uStack_270;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined1 uStack_260;
  undefined8 uStack_25c;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined1 uStack_24c;
  undefined8 uStack_248;
  undefined4 uStack_240;
  undefined1 auStack_23c [20];
  undefined2 uStack_228;
  undefined2 uStack_226;
  undefined2 uStack_224;
  undefined2 uStack_222;
  uint uStack_220;
  undefined2 uStack_21c;
  undefined1 uStack_21a;
  undefined1 uStack_219;
  undefined4 uStack_218;
  uint auStack_214 [5];
  undefined1 auStack_200 [20];
  undefined1 auStack_1ec [20];
  undefined1 auStack_1d8 [20];
  undefined1 auStack_1c4 [20];
  undefined1 auStack_1b0 [40];
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined4 auStack_168 [6];
  undefined2 auStack_150 [2];
  undefined4 uStack_14c;
  undefined1 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  
  if (*(longlong *)(param_3 + 0x88) != 0) {
    lVar7 = *(longlong *)(param_3 + 0x70);
    uVar3 = *(ulonglong *)(param_3 + 0x78);
    uVar12 = 0x1d6a82b468dfb8a2;
    lVar16 = 0;
    while( true ) {
      uVar12 = uVar12 & uVar3;
      pcVar1 = (char *)(lVar7 + uVar12);
      auVar22[0] = -(*pcVar1 == DAT_142e34ec0);
      auVar22[1] = -(pcVar1[1] == UNK_142e34ec1);
      auVar22[2] = -(pcVar1[2] == UNK_142e34ec2);
      auVar22[3] = -(pcVar1[3] == UNK_142e34ec3);
      auVar22[4] = -(pcVar1[4] == UNK_142e34ec4);
      auVar22[5] = -(pcVar1[5] == UNK_142e34ec5);
      auVar22[6] = -(pcVar1[6] == UNK_142e34ec6);
      auVar22[7] = -(pcVar1[7] == UNK_142e34ec7);
      auVar22[8] = -(pcVar1[8] == UNK_142e34ec8);
      auVar22[9] = -(pcVar1[9] == UNK_142e34ec9);
      auVar22[10] = -(pcVar1[10] == UNK_142e34eca);
      auVar22[0xb] = -(pcVar1[0xb] == UNK_142e34ecb);
      auVar22[0xc] = -(pcVar1[0xc] == UNK_142e34ecc);
      auVar22[0xd] = -(pcVar1[0xd] == UNK_142e34ecd);
      auVar22[0xe] = -(pcVar1[0xe] == UNK_142e34ece);
      auVar22[0xf] = -(pcVar1[0xf] == UNK_142e34ecf);
      uVar17 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(auVar22[0xf] >> 7) << 0xf;
      uVar15 = (uint)uVar17;
      while (uVar17 != 0) {
        uVar5 = 0;
        for (uVar13 = uVar15; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar18 = uVar5 + uVar12 & uVar3;
        pcVar2 = (char *)(lVar7 + -0x18 + uVar18 * -0x18);
        auVar23[0] = -(*pcVar2 == DAT_142e60e60);
        auVar23[1] = -(pcVar2[1] == UNK_142e60e61);
        auVar23[2] = -(pcVar2[2] == UNK_142e60e62);
        auVar23[3] = -(pcVar2[3] == UNK_142e60e63);
        auVar23[4] = -(pcVar2[4] == UNK_142e60e64);
        auVar23[5] = -(pcVar2[5] == UNK_142e60e65);
        auVar23[6] = -(pcVar2[6] == UNK_142e60e66);
        auVar23[7] = -(pcVar2[7] == UNK_142e60e67);
        auVar23[8] = -(pcVar2[8] == UNK_142e60e68);
        auVar23[9] = -(pcVar2[9] == UNK_142e60e69);
        auVar23[10] = -(pcVar2[10] == UNK_142e60e6a);
        auVar23[0xb] = -(pcVar2[0xb] == UNK_142e60e6b);
        auVar23[0xc] = -(pcVar2[0xc] == UNK_142e60e6c);
        auVar23[0xd] = -(pcVar2[0xd] == UNK_142e60e6d);
        auVar23[0xe] = -(pcVar2[0xe] == UNK_142e60e6e);
        auVar23[0xf] = -(pcVar2[0xf] == UNK_142e60e6f);
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
          uVar12 = *(ulonglong *)(lVar7 + uVar18 * -0x18 + -8);
          if (*(ulonglong *)(param_3 + 0x210) <= uVar12) goto LAB_140b23cb5;
          uVar12 = *(ulonglong *)(*(longlong *)(param_3 + 0x208) + uVar12 * 8);
          if (uVar12 == 0) goto LAB_140b23cb5;
          lVar16 = *(longlong *)(param_3 + 0x1d8);
          lVar19 = ~uVar12 * 0x40;
          if (*(longlong *)(lVar16 + 0x20 + lVar19) == 0) goto LAB_140b23cb5;
          uVar4 = *(undefined8 *)(lVar19 + lVar16 + 0x10);
          uVar12 = 0x7057b4358e925fdb;
          lVar19 = 0;
          goto LAB_140b233dd;
        }
        uVar17 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar17);
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
      uVar12 = uVar12 + lVar16 + 0x10;
      lVar16 = lVar16 + 0x10;
    }
  }
LAB_140b23cb5:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_1430560b8);
LAB_140b233dd:
  uVar12 = uVar12 & uVar3;
  auVar22 = *(undefined1 (*) [16])(lVar7 + uVar12);
  auVar24[0] = -(auVar22[0] == DAT_142e33d90);
  auVar24[1] = -(auVar22[1] == DAT_142e33d90._1_1_);
  auVar24[2] = -(auVar22[2] == DAT_142e33d90._2_1_);
  auVar24[3] = -(auVar22[3] == DAT_142e33d90._3_1_);
  auVar24[4] = -(auVar22[4] == DAT_142e33d90._4_1_);
  auVar24[5] = -(auVar22[5] == DAT_142e33d90._5_1_);
  auVar24[6] = -(auVar22[6] == DAT_142e33d90._6_1_);
  auVar24[7] = -(auVar22[7] == DAT_142e33d90._7_1_);
  auVar24[8] = -(auVar22[8] == DAT_142e33d90._8_1_);
  auVar24[9] = -(auVar22[9] == DAT_142e33d90._9_1_);
  auVar24[10] = -(auVar22[10] == DAT_142e33d90._10_1_);
  auVar24[0xb] = -(auVar22[0xb] == DAT_142e33d90._11_1_);
  auVar24[0xc] = -(auVar22[0xc] == DAT_142e33d90._12_1_);
  auVar24[0xd] = -(auVar22[0xd] == DAT_142e33d90._13_1_);
  auVar24[0xe] = -(auVar22[0xe] == DAT_142e33d90._14_1_);
  auVar24[0xf] = -(auVar22[0xf] == DAT_142e33d90._15_1_);
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
    uVar5 = 0;
    for (uVar13 = uVar15; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    uVar18 = uVar5 + uVar12 & uVar3;
    pcVar1 = (char *)(lVar7 + -0x18 + uVar18 * -0x18);
    auVar25[0] = -(*pcVar1 == DAT_142e34350);
    auVar25[1] = -(pcVar1[1] == DAT_142e34350._1_1_);
    auVar25[2] = -(pcVar1[2] == DAT_142e34350._2_1_);
    auVar25[3] = -(pcVar1[3] == DAT_142e34350._3_1_);
    auVar25[4] = -(pcVar1[4] == DAT_142e34350._4_1_);
    auVar25[5] = -(pcVar1[5] == DAT_142e34350._5_1_);
    auVar25[6] = -(pcVar1[6] == DAT_142e34350._6_1_);
    auVar25[7] = -(pcVar1[7] == DAT_142e34350._7_1_);
    auVar25[8] = -(pcVar1[8] == DAT_142e34350._8_1_);
    auVar25[9] = -(pcVar1[9] == DAT_142e34350._9_1_);
    auVar25[10] = -(pcVar1[10] == DAT_142e34350._10_1_);
    auVar25[0xb] = -(pcVar1[0xb] == DAT_142e34350._11_1_);
    auVar25[0xc] = -(pcVar1[0xc] == DAT_142e34350._12_1_);
    auVar25[0xd] = -(pcVar1[0xd] == DAT_142e34350._13_1_);
    auVar25[0xe] = -(pcVar1[0xe] == DAT_142e34350._14_1_);
    auVar25[0xf] = -(pcVar1[0xf] == DAT_142e34350._15_1_);
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
      uVar3 = *(ulonglong *)(lVar7 + uVar18 * -0x18 + -8);
      if (((uVar3 < *(ulonglong *)(param_3 + 0x210)) &&
          (uVar3 = *(ulonglong *)(*(longlong *)(param_3 + 0x208) + uVar3 * 8), uVar3 != 0)) &&
         (lVar7 = ~uVar3 * 0x40, *(longlong *)(lVar16 + 0x20 + lVar7) != 0)) {
        uVar10 = *(undefined8 *)(lVar16 + lVar7 + 0x10);
        uVar15 = *(uint *)(param_7 + 8);
        uVar5 = (uVar15 & 0xffff) + 0x1f >> 5;
        uVar13 = (uVar15 >> 0x10) * 0x800 + 0xf800 & 0xfff0000;
        uVar14 = uVar13 | uVar5;
        uStack_228 = 0;
        uStack_226 = (undefined2)uVar5;
        uStack_224 = (undefined2)(uVar13 >> 0x10);
        uStack_222 = 1;
        uStack_220 = 0x9010001;
        uStack_21c = 0x201;
        uStack_21a = 0;
        uStack_218 = 0x430560e8;
        auStack_214[0] = 1;
        auStack_214[1] = 0x1f;
        auStack_214[2] = 0;
        puStack_390 = param_1;
        uVar6 = pdb_140e2b4e0(param_2,&uStack_228);
        uStack_224 = (undefined2)uVar6;
        uStack_222 = (undefined2)((uint)uVar6 >> 0x10);
        uStack_21c = 1;
        uStack_21a = 1;
        uStack_219 = 0;
        uStack_218 = 0x2010901;
        auStack_214[0] = auStack_214[0] & 0xffffff00;
        uStack_228 = 0;
        uStack_226 = 0;
        uStack_220 = uVar14;
        if (*(char *)(param_2 + 0x24c) == '\x01') {
          pdb_140e19620(&uStack_228,param_2);
        }
        uStack_428 = CONCAT44(auStack_214[0],uStack_218);
        uStack_438 = CONCAT22(uStack_226,uStack_228);
        uStack_434 = CONCAT22(uStack_222,uStack_224);
        uStack_430 = uStack_220;
        uStack_42c = CONCAT13(uStack_219,CONCAT12(uStack_21a,uStack_21c));
        pdb_140e2b390(param_2,&uStack_438);
        uVar6 = pdb_140e25fd0(0,param_4);
        uStack_2f8 = pdb_140e26030(uVar6,2);
        uStack_2f4 = *(undefined4 *)((longlong)param_5 + 0xc);
        uStack_2f0 = (undefined6)param_5[2];
        uStack_2ea = (undefined2)*(undefined8 *)((longlong)param_5 + 0x16);
        uStack_2e8 = (undefined6)((ulonglong)*(undefined8 *)((longlong)param_5 + 0x16) >> 0x10);
        uVar6 = pdb_140e25fd0(0,param_4);
        uStack_2e0 = pdb_140e26030(uVar6,2);
        uStack_2dc = *(undefined4 *)(param_6 + 4);
        uStack_2d8 = (undefined6)*(undefined8 *)(param_6 + 8);
        uStack_2d2 = (undefined2)*(undefined8 *)(param_6 + 0xe);
        uStack_2d0 = (undefined6)((ulonglong)*(undefined8 *)(param_6 + 0xe) >> 0x10);
        uVar8 = pdb_140df4400(&UNK_143055ce1,0x19);
        puVar9 = (undefined8 *)pdb_140a2e580(uVar10,uVar8);
        pdb_140e1ea30(auStack_168,*puVar9,param_2,0x23,&UNK_143330ab0);
        pdb_140ad9d30(&uStack_2c8,param_2,uVar4);
        uStack_374 = uStack_2b8;
        uStack_384 = uStack_2c8;
        uStack_380 = uStack_2c4;
        uStack_37c = uStack_2c0;
        uStack_360 = uStack_2a4;
        uStack_370 = uStack_2b4;
        uStack_36c = uStack_2b0;
        uStack_368 = uStack_2ac;
        uStack_34c = uStack_290;
        uStack_35c = uStack_2a0;
        uStack_358 = uStack_29c;
        uStack_354 = uStack_298;
        uStack_338 = uStack_27c;
        uStack_348 = uStack_28c;
        uStack_344 = uStack_288;
        uStack_340 = uStack_284;
        uStack_324 = uStack_268;
        uStack_334 = uStack_278;
        uStack_330 = uStack_274;
        uStack_32c = uStack_270;
        uStack_310 = uStack_254;
        uStack_320 = uStack_264;
        uStack_31c = uStack_260;
        uStack_318 = uStack_25c;
        uStack_2fc = uStack_240;
        uStack_30c = uStack_250;
        uStack_308 = uStack_24c;
        uStack_304 = uStack_248;
        pdb_140b22160(&uStack_228,param_2);
        pdb_140e29980(param_2,&uStack_228);
        uVar11 = 0;
        pdb_140e29980(param_2);
        uVar6 = pdb_140e25e40(0x10);
        auStack_150[0] = 1;
        puStack_140 = &UNK_143056170;
        uStack_138 = 0x20;
        uStack_14c = uVar6;
        uStack_148 = uVar11;
        uStack_404 = pdb_140e2b4e0(param_2,auStack_150);
        uStack_410 = CONCAT31(uStack_410._1_3_,uVar11);
        uStack_40c = 0xffffffff00000000;
        uStack_450 = 0;
        uStack_448 = 8;
        uStack_440 = 0;
        uStack_414 = uVar6;
        uVar10 = pdb_14177be60(*(undefined8 *)(param_2 + 0x208),&UNK_143331dc0,0x32,&uStack_450);
        pdb_140e291c0(&uStack_c8,&UNK_143331dc0,0x32,uVar10,param_2);
        puStack_400 = &uStack_414;
        puStack_3f0 = (undefined4 *)CONCAT44(puStack_3f0._4_4_,0x40);
        puStack_3f8 = &uStack_30c;
        pdb_1417830f0(auStack_150,&uStack_c8,&puStack_400);
        uStack_c8 = _DAT_142f5c810;
        uStack_c0 = _UNK_142f5c818;
        pdb_140e28810(auStack_150,&uStack_c8);
        uStack_188 = CONCAT44(uStack_410,uStack_414);
        uStack_180 = uStack_40c;
        uStack_178 = uStack_404;
        pdb_141765440(param_2,&UNK_143055d3c,0x16,&UNK_143055d52,0x40,auStack_23c);
        uVar10 = *param_5;
        uStack_450 = 0;
        uStack_448 = 8;
        uStack_440 = 0;
        uVar8 = pdb_14177be60(*(undefined8 *)(param_2 + 0x208),&UNK_143331d62,0x2f,&uStack_450);
        pdb_140e291c0(auStack_150,&UNK_143331d62,0x2f,uVar8,param_2);
        puStack_400 = auStack_168;
        puStack_3f8 = &uStack_370;
        puStack_3f0 = &uStack_35c;
        puStack_3e8 = &uStack_348;
        puStack_3e0 = &uStack_320;
        puStack_3c0 = auStack_200;
        puStack_3b8 = auStack_1ec;
        puStack_3b0 = &uStack_438;
        puStack_3a8 = &uStack_2f8;
        puStack_3d8 = &uStack_30c;
        puStack_3d0 = &uStack_228;
        puStack_3c8 = auStack_214;
        uStack_3a0 = CONCAT44(uVar15 >> 0x10,uVar15) & 0xffffffff0000ffff;
        uStack_398 = uVar10;
        pdb_14178c540(&uStack_c8,auStack_150,&puStack_400);
        pdb_140e29040(&uStack_c8,&uStack_188,0);
        pdb_140b23ee0(param_2,&uStack_228);
        uStack_450 = 0;
        uStack_448 = 8;
        uStack_440 = 0;
        uVar10 = pdb_14177be60(*(undefined8 *)(param_2 + 0x208),&UNK_143330b88,0x2e,&uStack_450);
        pdb_140e291c0(auStack_150,&UNK_143330b88,0x2e,uVar10,param_2);
        puStack_400 = &uStack_384;
        puStack_3f8 = &uStack_334;
        puStack_3d8 = (undefined4 *)auStack_1ec;
        puStack_3c8 = &uStack_2e0;
        puStack_3c0 = (undefined1 *)param_7;
        puStack_3f0 = (undefined4 *)auStack_1d8;
        puStack_3e8 = (undefined4 *)auStack_1c4;
        puStack_3e0 = auStack_214;
        puStack_3d0 = (undefined2 *)auStack_1b0;
        pdb_1417902e0(&uStack_c8,auStack_150,&puStack_400);
        pdb_140e29040(&uStack_c8,auStack_1b0,0);
        pdb_141534eb0(uVar4,param_2);
        pdb_141536650(uVar4,param_2);
        pdb_141536ce0(uVar4,param_2);
        pdb_141534ac0(uVar4,param_2);
        pdb_141534970(uVar4,param_2);
        pdb_141534820(uVar4,param_2);
        pdb_1415363b0(uVar4,param_2);
        pdb_1415367a0(uVar4,param_2);
        puStack_390[2] = uStack_428;
        *puStack_390 = CONCAT44(uStack_434,uStack_438);
        puStack_390[1] = CONCAT44(uStack_42c,uStack_430);
        return;
      }
      goto LAB_140b23cc1;
    }
    uVar17 = (ushort)(uVar15 - 1) & (ushort)uVar15;
    uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar17);
  }
  auVar21[0] = -(auVar22[0] == -1);
  auVar21[1] = -(auVar22[1] == -1);
  auVar21[2] = -(auVar22[2] == -1);
  auVar21[3] = -(auVar22[3] == -1);
  auVar21[4] = -(auVar22[4] == -1);
  auVar21[5] = -(auVar22[5] == -1);
  auVar21[6] = -(auVar22[6] == -1);
  auVar21[7] = -(auVar22[7] == -1);
  auVar21[8] = -(auVar22[8] == -1);
  auVar21[9] = -(auVar22[9] == -1);
  auVar21[10] = -(auVar22[10] == -1);
  auVar21[0xb] = -(auVar22[0xb] == -1);
  auVar21[0xc] = -(auVar22[0xc] == -1);
  auVar21[0xd] = -(auVar22[0xd] == -1);
  auVar21[0xe] = -(auVar22[0xe] == -1);
  auVar21[0xf] = -(auVar22[0xf] == -1);
  if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 || (SUB161(auVar21 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar21 >> 0x17,0) & 1) != 0) || (SUB161(auVar21 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar21 >> 0x27,0) & 1) != 0) || (SUB161(auVar21 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar21 >> 0x37,0) & 1) != 0) || (SUB161(auVar21 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar21 >> 0x47,0) & 1) != 0) || (SUB161(auVar21 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar21 >> 0x57,0) & 1) != 0) || (SUB161(auVar21 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar21 >> 0x67,0) & 1) != 0) || (SUB161(auVar21 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar21 >> 0x77,0) & 1) != 0) || auVar21[0xf] < '\0') {
LAB_140b23cc1:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_1430560d0);
  }
  uVar12 = uVar12 + lVar19 + 0x10;
  lVar19 = lVar19 + 0x10;
  goto LAB_140b233dd;
}

