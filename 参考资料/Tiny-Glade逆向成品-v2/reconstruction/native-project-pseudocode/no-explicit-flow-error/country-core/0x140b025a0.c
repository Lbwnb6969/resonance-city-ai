// VA 0x140b025a0, PDB extent 1728 bytes
// country_core::systems::render_loop::draw_passes::transparency_pass::water_surface_pass
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/transparency_pass.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::draw_passes::transparency_pass::water_surface_pass
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/transparency_pass.rs
   Extent: 1728 */

void pdb_140b025a0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6,byte param_7,undefined8 param_8,
                  undefined8 param_9,longlong param_10,undefined8 param_11)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ushort uVar14;
  ulonglong uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined4 uStack_230;
  undefined1 uStack_22c;
  undefined8 uStack_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined1 uStack_218;
  undefined8 uStack_214;
  undefined4 uStack_20c;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  byte abStack_1e8 [8];
  longlong lStack_1e0;
  undefined8 uStack_1d8;
  longlong *plStack_1d0;
  undefined *puStack_1c8;
  byte *pbStack_1c0;
  longlong lStack_1b8;
  undefined8 uStack_1b0;
  undefined4 *puStack_1a8;
  undefined4 *puStack_1a0;
  undefined8 uStack_198;
  undefined4 **ppuStack_190;
  undefined8 *puStack_188;
  longlong lStack_180;
  undefined4 *puStack_150;
  undefined4 *puStack_148;
  longlong lStack_140;
  longlong lStack_138;
  longlong lStack_130;
  longlong lStack_128;
  longlong lStack_120;
  undefined8 uStack_118;
  longlong lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  uint uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  
  uStack_1f0 = param_6;
  abStack_1e8[0] = param_7;
  if (DAT_143ca43c8 != '\x01') {
    return;
  }
  lVar8 = param_2;
  uVar6 = pdb_140e25e40(0x10);
  uStack_1d8 = CONCAT62(uStack_1d8._2_6_,1);
  uStack_1d8 = CONCAT44(uVar6,(undefined4)uStack_1d8);
  puStack_1c8 = &UNK_143053000;
  pbStack_1c0 = (byte *)0x15;
  plStack_1d0._0_1_ = (char)lVar8;
  uStack_220 = pdb_140e2b4e0(param_1,&uStack_1d8);
  uStack_228 = 0xffffffff00000000;
  uVar11 = SUB81(&uStack_230,0);
  uStack_230 = uVar6;
  uStack_22c = (char)lVar8;
  pdb_140e29980(param_1);
  uVar7 = (uint)*(ushort *)(param_5 + 0xc) *
          (uint)*(ushort *)(param_5 + 10) * (uint)*(ushort *)(param_5 + 8);
  uVar6 = pdb_140e25e40((ulonglong)((uVar7 >> 4) + uVar7) << 4);
  uStack_1d8 = CONCAT62(uStack_1d8._2_6_,1);
  uStack_1d8 = CONCAT44(uVar6,(undefined4)uStack_1d8);
  plStack_1d0 = (longlong *)CONCAT71(plStack_1d0._1_7_,uVar11);
  puStack_1c8 = &UNK_143053015;
  pbStack_1c0 = (byte *)0x13;
  uStack_20c = pdb_140e2b4e0(param_1,&uStack_1d8);
  uStack_214 = 0xffffffff00000000;
  uStack_21c = uVar6;
  uStack_218 = uVar11;
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar8 = *(longlong *)(param_2 + 0x70);
    uVar12 = 0x1d6a82b468dfb8a2;
    lVar13 = 0;
    while( true ) {
      uVar12 = uVar12 & *(ulonglong *)(param_2 + 0x78);
      auVar20 = *(undefined1 (*) [16])(lVar8 + uVar12);
      auVar18[0] = -(auVar20[0] == DAT_142e34ec0);
      auVar18[1] = -(auVar20[1] == DAT_142e34ec0._1_1_);
      auVar18[2] = -(auVar20[2] == DAT_142e34ec0._2_1_);
      auVar18[3] = -(auVar20[3] == DAT_142e34ec0._3_1_);
      auVar18[4] = -(auVar20[4] == DAT_142e34ec0._4_1_);
      auVar18[5] = -(auVar20[5] == DAT_142e34ec0._5_1_);
      auVar18[6] = -(auVar20[6] == DAT_142e34ec0._6_1_);
      auVar18[7] = -(auVar20[7] == DAT_142e34ec0._7_1_);
      auVar18[8] = -(auVar20[8] == DAT_142e34ec0._8_1_);
      auVar18[9] = -(auVar20[9] == DAT_142e34ec0._9_1_);
      auVar18[10] = -(auVar20[10] == DAT_142e34ec0._10_1_);
      auVar18[0xb] = -(auVar20[0xb] == DAT_142e34ec0._11_1_);
      auVar18[0xc] = -(auVar20[0xc] == DAT_142e34ec0._12_1_);
      auVar18[0xd] = -(auVar20[0xd] == DAT_142e34ec0._13_1_);
      auVar18[0xe] = -(auVar20[0xe] == DAT_142e34ec0._14_1_);
      auVar18[0xf] = -(auVar20[0xf] == DAT_142e34ec0._15_1_);
      uVar14 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
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
      uVar7 = (uint)uVar14;
      while (uVar14 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar7; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar15 = uVar3 + uVar12 & *(ulonglong *)(param_2 + 0x78);
        pcVar1 = (char *)(lVar8 + -0x18 + uVar15 * -0x18);
        auVar19[0] = -(*pcVar1 == DAT_142e60e60);
        auVar19[1] = -(pcVar1[1] == DAT_142e60e60._1_1_);
        auVar19[2] = -(pcVar1[2] == DAT_142e60e60._2_1_);
        auVar19[3] = -(pcVar1[3] == DAT_142e60e60._3_1_);
        auVar19[4] = -(pcVar1[4] == DAT_142e60e60._4_1_);
        auVar19[5] = -(pcVar1[5] == DAT_142e60e60._5_1_);
        auVar19[6] = -(pcVar1[6] == DAT_142e60e60._6_1_);
        auVar19[7] = -(pcVar1[7] == DAT_142e60e60._7_1_);
        auVar19[8] = -(pcVar1[8] == DAT_142e60e60._8_1_);
        auVar19[9] = -(pcVar1[9] == DAT_142e60e60._9_1_);
        auVar19[10] = -(pcVar1[10] == DAT_142e60e60._10_1_);
        auVar19[0xb] = -(pcVar1[0xb] == DAT_142e60e60._11_1_);
        auVar19[0xc] = -(pcVar1[0xc] == DAT_142e60e60._12_1_);
        auVar19[0xd] = -(pcVar1[0xd] == DAT_142e60e60._13_1_);
        auVar19[0xe] = -(pcVar1[0xe] == DAT_142e60e60._14_1_);
        auVar19[0xf] = -(pcVar1[0xf] == DAT_142e60e60._15_1_);
        if ((ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar19[0xf] >> 7) << 0xf) == 0xffff) {
          uVar12 = *(ulonglong *)(lVar8 + uVar15 * -0x18 + -8);
          if ((*(ulonglong *)(param_2 + 0x210) <= uVar12) ||
             (uVar12 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar12 * 8), uVar12 == 0))
          goto LAB_140b02947;
          lVar8 = ~uVar12 * 0x40;
          if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar8) == 0) goto LAB_140b02947;
          uVar9 = *(undefined8 *)(*(longlong *)(param_2 + 0x1d8) + lVar8 + 0x10);
          pdb_1415257f0(&puStack_150,uVar9);
          if (*(longlong *)(param_2 + 0x88) == 0) goto LAB_140b02953;
          lVar8 = *(longlong *)(param_2 + 0x70);
          uVar12 = 0x6d79c7fc2d5f98ee;
          lVar13 = 0;
          goto LAB_140b02835;
        }
        uVar14 = (ushort)(uVar7 - 1) & (ushort)uVar7;
        uVar7 = CONCAT22((short)(uVar7 - 1 >> 0x10),uVar14);
      }
      auVar16[0] = -(auVar20[0] == -1);
      auVar16[1] = -(auVar20[1] == -1);
      auVar16[2] = -(auVar20[2] == -1);
      auVar16[3] = -(auVar20[3] == -1);
      auVar16[4] = -(auVar20[4] == -1);
      auVar16[5] = -(auVar20[5] == -1);
      auVar16[6] = -(auVar20[6] == -1);
      auVar16[7] = -(auVar20[7] == -1);
      auVar16[8] = -(auVar20[8] == -1);
      auVar16[9] = -(auVar20[9] == -1);
      auVar16[10] = -(auVar20[10] == -1);
      auVar16[0xb] = -(auVar20[0xb] == -1);
      auVar16[0xc] = -(auVar20[0xc] == -1);
      auVar16[0xd] = -(auVar20[0xd] == -1);
      auVar16[0xe] = -(auVar20[0xe] == -1);
      auVar16[0xf] = -(auVar20[0xf] == -1);
      if ((((((((((((((((SUB161(auVar16 >> 7,0) & 1) != 0 || (SUB161(auVar16 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar16 >> 0x17,0) & 1) != 0) || (SUB161(auVar16 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar16 >> 0x27,0) & 1) != 0) || (SUB161(auVar16 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar16 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar16 >> 0x3f,0) & 1) != 0) || (SUB161(auVar16 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar16 >> 0x4f,0) & 1) != 0) || (SUB161(auVar16 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar16 >> 0x5f,0) & 1) != 0) || (SUB161(auVar16 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar16 >> 0x6f,0) & 1) != 0) || (SUB161(auVar16 >> 0x77,0) & 1) != 0) ||
          auVar16[0xf] < '\0') break;
      uVar12 = uVar12 + lVar13 + 0x10;
      lVar13 = lVar13 + 0x10;
    }
  }
LAB_140b02947:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143053028);
LAB_140b02835:
  uVar12 = uVar12 & *(ulonglong *)(param_2 + 0x78);
  pcVar1 = (char *)(lVar8 + uVar12);
  auVar20[0] = -(*pcVar1 == DAT_142e34500);
  auVar20[1] = -(pcVar1[1] == DAT_142e34500._1_1_);
  auVar20[2] = -(pcVar1[2] == DAT_142e34500._2_1_);
  auVar20[3] = -(pcVar1[3] == DAT_142e34500._3_1_);
  auVar20[4] = -(pcVar1[4] == DAT_142e34500._4_1_);
  auVar20[5] = -(pcVar1[5] == DAT_142e34500._5_1_);
  auVar20[6] = -(pcVar1[6] == DAT_142e34500._6_1_);
  auVar20[7] = -(pcVar1[7] == DAT_142e34500._7_1_);
  auVar20[8] = -(pcVar1[8] == DAT_142e34500._8_1_);
  auVar20[9] = -(pcVar1[9] == DAT_142e34500._9_1_);
  auVar20[10] = -(pcVar1[10] == DAT_142e34500._10_1_);
  auVar20[0xb] = -(pcVar1[0xb] == DAT_142e34500._11_1_);
  auVar20[0xc] = -(pcVar1[0xc] == DAT_142e34500._12_1_);
  auVar20[0xd] = -(pcVar1[0xd] == DAT_142e34500._13_1_);
  auVar20[0xe] = -(pcVar1[0xe] == DAT_142e34500._14_1_);
  auVar20[0xf] = -(pcVar1[0xf] == DAT_142e34500._15_1_);
  uVar14 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe | (ushort)(auVar20[0xf] >> 7) << 0xf;
  uVar7 = (uint)uVar14;
  while (uVar14 != 0) {
    uVar3 = 0;
    for (uVar4 = uVar7; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
      uVar3 = uVar3 + 1;
    }
    uVar15 = uVar3 + uVar12 & *(ulonglong *)(param_2 + 0x78);
    pcVar2 = (char *)(lVar8 + -0x18 + uVar15 * -0x18);
    auVar21[0] = -(*pcVar2 == DAT_142e34510);
    auVar21[1] = -(pcVar2[1] == UNK_142e34511);
    auVar21[2] = -(pcVar2[2] == UNK_142e34512);
    auVar21[3] = -(pcVar2[3] == UNK_142e34513);
    auVar21[4] = -(pcVar2[4] == UNK_142e34514);
    auVar21[5] = -(pcVar2[5] == UNK_142e34515);
    auVar21[6] = -(pcVar2[6] == UNK_142e34516);
    auVar21[7] = -(pcVar2[7] == UNK_142e34517);
    auVar21[8] = -(pcVar2[8] == UNK_142e34518);
    auVar21[9] = -(pcVar2[9] == UNK_142e34519);
    auVar21[10] = -(pcVar2[10] == UNK_142e3451a);
    auVar21[0xb] = -(pcVar2[0xb] == UNK_142e3451b);
    auVar21[0xc] = -(pcVar2[0xc] == UNK_142e3451c);
    auVar21[0xd] = -(pcVar2[0xd] == UNK_142e3451d);
    auVar21[0xe] = -(pcVar2[0xe] == UNK_142e3451e);
    auVar21[0xf] = -(pcVar2[0xf] == UNK_142e3451f);
    if ((ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe | (ushort)(auVar21[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar12 = *(ulonglong *)(lVar8 + uVar15 * -0x18 + -8);
      if ((*(ulonglong *)(param_2 + 0x210) <= uVar12) ||
         (uVar12 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar12 * 8), uVar12 == 0))
      goto LAB_140b02953;
      lVar8 = ~uVar12 * 0x40;
      if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar8) == 0) goto LAB_140b02953;
      lVar13 = *(longlong *)(*(longlong *)(param_2 + 0x1d8) + lVar8 + 0x10);
      lVar8 = 0;
      goto LAB_140b02920;
    }
    uVar14 = (ushort)(uVar7 - 1) & (ushort)uVar7;
    uVar7 = CONCAT22((short)(uVar7 - 1 >> 0x10),uVar14);
  }
  auVar17[0] = -(*pcVar1 == -1);
  auVar17[1] = -(pcVar1[1] == -1);
  auVar17[2] = -(pcVar1[2] == -1);
  auVar17[3] = -(pcVar1[3] == -1);
  auVar17[4] = -(pcVar1[4] == -1);
  auVar17[5] = -(pcVar1[5] == -1);
  auVar17[6] = -(pcVar1[6] == -1);
  auVar17[7] = -(pcVar1[7] == -1);
  auVar17[8] = -(pcVar1[8] == -1);
  auVar17[9] = -(pcVar1[9] == -1);
  auVar17[10] = -(pcVar1[10] == -1);
  auVar17[0xb] = -(pcVar1[0xb] == -1);
  auVar17[0xc] = -(pcVar1[0xc] == -1);
  auVar17[0xd] = -(pcVar1[0xd] == -1);
  auVar17[0xe] = -(pcVar1[0xe] == -1);
  auVar17[0xf] = -(pcVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 || (SUB161(auVar17 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar17 >> 0x17,0) & 1) != 0) || (SUB161(auVar17 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar17 >> 0x27,0) & 1) != 0) || (SUB161(auVar17 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar17 >> 0x37,0) & 1) != 0) || (SUB161(auVar17 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar17 >> 0x47,0) & 1) != 0) || (SUB161(auVar17 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar17 >> 0x57,0) & 1) != 0) || (SUB161(auVar17 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar17 >> 0x67,0) & 1) != 0) || (SUB161(auVar17 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar17 >> 0x77,0) & 1) != 0) || auVar17[0xf] < '\0') {
LAB_140b02953:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143053040);
  }
  uVar12 = uVar12 + lVar13 + 0x10;
  lVar13 = lVar13 + 0x10;
  goto LAB_140b02835;
  while (pcVar1 = (char *)(*(longlong *)(lVar13 + 8) + lVar8), lVar8 = lVar8 + 1,
        uStack_208 = _DAT_143052760, uVar6 = _DAT_142f44720, *pcVar1 != '\0') {
LAB_140b02920:
    uStack_208 = _DAT_143052740;
    uVar6 = _DAT_143052750;
    if (*(longlong *)(lVar13 + 0x10) == lVar8) break;
  }
  uStack_200 = CONCAT44(uStack_200._4_4_,uVar6);
  uStack_e8 = (ulonglong)uStack_e8._4_4_ << 0x20;
  uStack_c8 = 0;
  uStack_b8 = 0;
  uStack_1d8 = param_11;
  plStack_1d0 = &lStack_1e0;
  puStack_1c8 = (undefined *)param_6;
  lStack_1b8 = param_5;
  uStack_1b0 = param_9;
  puStack_1a0 = &uStack_21c;
  uStack_198 = param_8;
  puStack_188 = &uStack_208;
  lStack_180 = param_10;
  lStack_1e0 = param_2;
  pbStack_1c0 = abStack_1e8;
  puStack_1a8 = &uStack_230;
  ppuStack_190 = &puStack_150;
  uStack_e0 = param_3;
  uStack_c0 = param_4;
  pdb_141758710(param_1,&UNK_143053058,0xb,&uStack_e8,&uStack_1d8);
  pdb_141536a40(uVar9,param_1);
  puStack_150 = (undefined4 *)0x0;
  puStack_148 = (undefined4 *)0x8;
  lStack_140 = 0;
  uVar9 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_143330dde,0x2d,&puStack_150);
  pdb_140e291c0(&uStack_e8,&UNK_143330dde,0x2d,uVar9,param_1);
  pdb_141787bc0(&uStack_1d8,&uStack_e8,&uStack_230);
  uStack_e8 = _DAT_142f5c810;
  uStack_e0 = _UNK_142f5c818;
  pdb_140e28810(&uStack_1d8,&uStack_e8);
  bVar5 = abStack_1e8[0];
  uStack_208 = 0;
  uStack_200 = 8;
  uStack_1f8 = 0;
  uVar9 = *(undefined8 *)(param_10 + 0x14);
  uVar10 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_1433316da,0x23,&uStack_208);
  pdb_140e291c0(&uStack_1d8,&UNK_1433316da,0x23,uVar10,param_1);
  puStack_148 = &uStack_21c;
  lStack_140 = param_10 + 0x4c;
  lStack_138 = param_10;
  lStack_110 = param_5;
  uStack_100 = param_6;
  uStack_f8 = param_9;
  uStack_f0 = (uint)bVar5;
  puStack_150 = &uStack_230;
  lStack_130 = param_10 + 100;
  lStack_128 = param_10 + 0x1c;
  lStack_120 = param_10 + 0x34;
  uStack_118 = uVar9;
  uStack_108 = param_3;
  pdb_141787f50(&uStack_e8,&uStack_1d8,&puStack_150);
  pdb_140e29040(&uStack_e8,&uStack_230,0);
  return;
}

