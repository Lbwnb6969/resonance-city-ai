// VA 0x1409ae7c0, PDB extent 1562 bytes
// country_core::systems::render_loop::compute_passes::compute_garden::garden_rasterize_from_cpu
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/compute_garden.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::compute_garden::garden_rasterize_from_cpu
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/compute_garden.rs
   Extent: 1562 */

void pdb_1409ae7c0(longlong param_1,longlong param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  ushort uVar16;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
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
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  longlong *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lVar8 = *(longlong *)(param_1 + 0x130);
  if (lVar8 == *(longlong *)(param_1 + 0x120)) {
    pdb_142d8afd0(param_1 + 0x120);
  }
  lVar13 = *(longlong *)(param_1 + 0x128);
  *(undefined **)(lVar13 + lVar8 * 0x10) = &UNK_143029690;
  *(undefined8 *)(lVar13 + 8 + lVar8 * 0x10) = 0x19;
  *(longlong *)(param_1 + 0x130) = lVar8 + 1;
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar8 = *(longlong *)(param_2 + 0x70);
    uVar11 = 0x6ec716f94e960313;
    lVar13 = 0;
    while( true ) {
      uVar11 = uVar11 & *(ulonglong *)(param_2 + 0x78);
      pcVar1 = (char *)(lVar8 + uVar11);
      auVar20[0] = -(*pcVar1 == DAT_142e34cf0);
      auVar20[1] = -(pcVar1[1] == DAT_142e34cf0._1_1_);
      auVar20[2] = -(pcVar1[2] == DAT_142e34cf0._2_1_);
      auVar20[3] = -(pcVar1[3] == DAT_142e34cf0._3_1_);
      auVar20[4] = -(pcVar1[4] == DAT_142e34cf0._4_1_);
      auVar20[5] = -(pcVar1[5] == DAT_142e34cf0._5_1_);
      auVar20[6] = -(pcVar1[6] == DAT_142e34cf0._6_1_);
      auVar20[7] = -(pcVar1[7] == DAT_142e34cf0._7_1_);
      auVar20[8] = -(pcVar1[8] == DAT_142e34cf0._8_1_);
      auVar20[9] = -(pcVar1[9] == DAT_142e34cf0._9_1_);
      auVar20[10] = -(pcVar1[10] == DAT_142e34cf0._10_1_);
      auVar20[0xb] = -(pcVar1[0xb] == DAT_142e34cf0._11_1_);
      auVar20[0xc] = -(pcVar1[0xc] == DAT_142e34cf0._12_1_);
      auVar20[0xd] = -(pcVar1[0xd] == DAT_142e34cf0._13_1_);
      auVar20[0xe] = -(pcVar1[0xe] == DAT_142e34cf0._14_1_);
      auVar20[0xf] = -(pcVar1[0xf] == DAT_142e34cf0._15_1_);
      uVar16 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
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
      uVar15 = (uint)uVar16;
      while (uVar16 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar15; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar17 = uVar4 + uVar11 & *(ulonglong *)(param_2 + 0x78);
        pcVar2 = (char *)(lVar8 + -0x18 + uVar17 * -0x18);
        auVar21[0] = -(*pcVar2 == DAT_142e34d00);
        auVar21[1] = -(pcVar2[1] == DAT_142e34d00._1_1_);
        auVar21[2] = -(pcVar2[2] == DAT_142e34d00._2_1_);
        auVar21[3] = -(pcVar2[3] == DAT_142e34d00._3_1_);
        auVar21[4] = -(pcVar2[4] == DAT_142e34d00._4_1_);
        auVar21[5] = -(pcVar2[5] == DAT_142e34d00._5_1_);
        auVar21[6] = -(pcVar2[6] == DAT_142e34d00._6_1_);
        auVar21[7] = -(pcVar2[7] == DAT_142e34d00._7_1_);
        auVar21[8] = -(pcVar2[8] == DAT_142e34d00._8_1_);
        auVar21[9] = -(pcVar2[9] == DAT_142e34d00._9_1_);
        auVar21[10] = -(pcVar2[10] == DAT_142e34d00._10_1_);
        auVar21[0xb] = -(pcVar2[0xb] == DAT_142e34d00._11_1_);
        auVar21[0xc] = -(pcVar2[0xc] == DAT_142e34d00._12_1_);
        auVar21[0xd] = -(pcVar2[0xd] == DAT_142e34d00._13_1_);
        auVar21[0xe] = -(pcVar2[0xe] == DAT_142e34d00._14_1_);
        auVar21[0xf] = -(pcVar2[0xf] == DAT_142e34d00._15_1_);
        if ((ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
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
                     (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar21[0xf] >> 7) << 0xf) == 0xffff) {
          uVar11 = *(ulonglong *)(lVar8 + uVar17 * -0x18 + -8);
          if ((*(ulonglong *)(param_2 + 0x210) <= uVar11) ||
             (uVar11 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar11 * 8), uVar11 == 0))
          goto LAB_1409aed6b;
          lVar8 = ~uVar11 * 0x40;
          if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar8) == 0) goto LAB_1409aed6b;
          lVar8 = *(longlong *)(param_2 + 0x1d8) + lVar8;
          lVar13 = *(longlong *)(lVar8 + 0x10);
          uVar3 = *(undefined4 *)(param_2 + 0x5a8);
          if (*(longlong *)(param_2 + 0x88) == 0) goto LAB_1409aed77;
          lVar9 = *(longlong *)(param_2 + 0x70);
          uVar11 = 0x7057b4358e925fdb;
          lVar14 = 0;
          goto LAB_1409ae967;
        }
        uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
      }
      auVar18[0] = -(*pcVar1 == -1);
      auVar18[1] = -(pcVar1[1] == -1);
      auVar18[2] = -(pcVar1[2] == -1);
      auVar18[3] = -(pcVar1[3] == -1);
      auVar18[4] = -(pcVar1[4] == -1);
      auVar18[5] = -(pcVar1[5] == -1);
      auVar18[6] = -(pcVar1[6] == -1);
      auVar18[7] = -(pcVar1[7] == -1);
      auVar18[8] = -(pcVar1[8] == -1);
      auVar18[9] = -(pcVar1[9] == -1);
      auVar18[10] = -(pcVar1[10] == -1);
      auVar18[0xb] = -(pcVar1[0xb] == -1);
      auVar18[0xc] = -(pcVar1[0xc] == -1);
      auVar18[0xd] = -(pcVar1[0xd] == -1);
      auVar18[0xe] = -(pcVar1[0xe] == -1);
      auVar18[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar18 >> 0x17,0) & 1) != 0) || (SUB161(auVar18 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar18 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar18 >> 0x3f,0) & 1) != 0) || (SUB161(auVar18 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar18 >> 0x4f,0) & 1) != 0) || (SUB161(auVar18 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar18 >> 0x5f,0) & 1) != 0) || (SUB161(auVar18 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar18 >> 0x6f,0) & 1) != 0) || (SUB161(auVar18 >> 0x77,0) & 1) != 0) ||
          auVar18[0xf] < '\0') break;
      uVar11 = uVar11 + lVar13 + 0x10;
      lVar13 = lVar13 + 0x10;
    }
  }
LAB_1409aed6b:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_1430296b0);
LAB_1409ae967:
  uVar11 = uVar11 & *(ulonglong *)(param_2 + 0x78);
  auVar20 = *(undefined1 (*) [16])(lVar9 + uVar11);
  auVar22[0] = -(auVar20[0] == DAT_142e33d90);
  auVar22[1] = -(auVar20[1] == DAT_142e33d90._1_1_);
  auVar22[2] = -(auVar20[2] == DAT_142e33d90._2_1_);
  auVar22[3] = -(auVar20[3] == DAT_142e33d90._3_1_);
  auVar22[4] = -(auVar20[4] == DAT_142e33d90._4_1_);
  auVar22[5] = -(auVar20[5] == DAT_142e33d90._5_1_);
  auVar22[6] = -(auVar20[6] == DAT_142e33d90._6_1_);
  auVar22[7] = -(auVar20[7] == DAT_142e33d90._7_1_);
  auVar22[8] = -(auVar20[8] == DAT_142e33d90._8_1_);
  auVar22[9] = -(auVar20[9] == DAT_142e33d90._9_1_);
  auVar22[10] = -(auVar20[10] == DAT_142e33d90._10_1_);
  auVar22[0xb] = -(auVar20[0xb] == DAT_142e33d90._11_1_);
  auVar22[0xc] = -(auVar20[0xc] == DAT_142e33d90._12_1_);
  auVar22[0xd] = -(auVar20[0xd] == DAT_142e33d90._13_1_);
  auVar22[0xe] = -(auVar20[0xe] == DAT_142e33d90._14_1_);
  auVar22[0xf] = -(auVar20[0xf] == DAT_142e33d90._15_1_);
  uVar16 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
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
  uVar15 = (uint)uVar16;
  while (uVar16 != 0) {
    uVar4 = 0;
    for (uVar5 = uVar15; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    uVar17 = uVar4 + uVar11 & *(ulonglong *)(param_2 + 0x78);
    pcVar1 = (char *)(lVar9 + -0x18 + uVar17 * -0x18);
    auVar23[0] = -(*pcVar1 == DAT_142e34350);
    auVar23[1] = -(pcVar1[1] == DAT_142e34350._1_1_);
    auVar23[2] = -(pcVar1[2] == DAT_142e34350._2_1_);
    auVar23[3] = -(pcVar1[3] == DAT_142e34350._3_1_);
    auVar23[4] = -(pcVar1[4] == DAT_142e34350._4_1_);
    auVar23[5] = -(pcVar1[5] == DAT_142e34350._5_1_);
    auVar23[6] = -(pcVar1[6] == DAT_142e34350._6_1_);
    auVar23[7] = -(pcVar1[7] == DAT_142e34350._7_1_);
    auVar23[8] = -(pcVar1[8] == DAT_142e34350._8_1_);
    auVar23[9] = -(pcVar1[9] == DAT_142e34350._9_1_);
    auVar23[10] = -(pcVar1[10] == DAT_142e34350._10_1_);
    auVar23[0xb] = -(pcVar1[0xb] == DAT_142e34350._11_1_);
    auVar23[0xc] = -(pcVar1[0xc] == DAT_142e34350._12_1_);
    auVar23[0xd] = -(pcVar1[0xd] == DAT_142e34350._13_1_);
    auVar23[0xe] = -(pcVar1[0xe] == DAT_142e34350._14_1_);
    auVar23[0xf] = -(pcVar1[0xf] == DAT_142e34350._15_1_);
    if ((ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar17 = *(ulonglong *)(lVar9 + uVar17 * -0x18 + -8);
      if ((uVar17 < *(ulonglong *)(param_2 + 0x210)) &&
         (uVar17 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar17 * 8), uVar17 != 0)) {
        lVar9 = ~uVar17 * 0x40;
        if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar9) != 0) {
          uVar12 = CONCAT71((int7)(uVar11 >> 8),0x13);
          plStack_70 = (longlong *)
                       pdb_140a2e6e0(*(undefined8 *)(*(longlong *)(param_2 + 0x1d8) + lVar9 + 0x10),
                                     uVar12,&UNK_1430296e0);
          if (*(char *)(lVar13 + 0x29b) != '\0') {
            *(undefined4 *)(lVar8 + 0x3c) = uVar3;
            *(undefined1 *)(lVar13 + 0x29b) = 0;
            pub_142e32780(lVar13 + 0x98,0,0x200);
            uStack_130 = 0;
            uStack_12e = 0x200;
            uStack_12c = 0x10200;
            uStack_128 = 1;
            uStack_126 = 0x2016101;
            uStack_122 = 0;
            puStack_120 = &UNK_1430296f8;
            uStack_118 = 0x10;
            uStack_12c = pdb_140e2b4e0(param_1,&uStack_130);
            uStack_128 = 0x200;
            uStack_126 = 0x10200;
            uStack_122 = 1;
            uStack_121 = 0;
            puStack_120 = (undefined *)CONCAT35(puStack_120._5_3_,0x2016101);
            uStack_130 = 0;
            uStack_12e = 0;
            if (*(char *)(param_1 + 0x24c) == '\x01') {
              pdb_140e19620(&uStack_130,param_1);
            }
            uStack_98 = puStack_120;
            uStack_a8 = CONCAT22(uStack_12e,uStack_130);
            uStack_a4 = uStack_12c;
            uStack_a0 = CONCAT17(uStack_121,CONCAT16(uStack_122,CONCAT42(uStack_126,uStack_128)));
            uStack_88 = 0;
            uStack_80 = 8;
            uStack_78 = 0;
            uVar10 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_14333199f,0x21,&uStack_88);
            pdb_140e291c0(&uStack_130,&UNK_14333199f,0x21,uVar10,param_1);
            uStack_68._0_4_ = (undefined4)uVar12;
            uVar3 = (undefined4)uStack_68;
            uStack_68._4_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
            uVar7 = uStack_68._4_4_;
            uStack_58 = 0x40a0000000000001;
            uStack_50 = 1;
            uStack_60 = &uStack_a8;
            pdb_141784290(auStack_1b8,&uStack_130,&uStack_68);
            pub_142e32760(&uStack_130,auStack_1b8,0x88);
            uStack_68._4_4_ = 0x200;
            uStack_60._0_4_ = 0x200;
            uStack_60._4_4_ = 1;
            uStack_68._0_4_ = 1;
            pdb_140e28810(&uStack_130,&uStack_68);
            uStack_88 = 0;
            uStack_80 = 8;
            uStack_78 = 0;
            uVar10 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_14333199f,0x21,&uStack_88);
            pdb_140e291c0(&uStack_130,&UNK_14333199f,0x21,uVar10,param_1);
            uStack_58 = 0x40a0000000000001;
            uStack_50 = 0;
            uStack_60._0_4_ = uVar3;
            uStack_60._4_4_ = uVar7;
            uStack_68 = &uStack_a8;
            pdb_141784290(auStack_1b8,&uStack_130,&uStack_68);
            pub_142e32760(&uStack_130,auStack_1b8,0x88);
            uStack_68._4_4_ = 0x200;
            uStack_60._0_4_ = 0x200;
            uStack_60._4_4_ = 1;
            uStack_68._0_4_ = 1;
            pdb_140e28810(&uStack_130,&uStack_68);
          }
          pdb_141767280(param_1,&UNK_143029708,10,&UNK_143029712,0x22,uVar12);
          plVar6 = plStack_70;
          pdb_140e9a350(plStack_70);
          pdb_140e9a350();
          LOCK();
          lVar8 = *plVar6;
          if (lVar8 == 8) {
            *plVar6 = 0;
          }
          UNLOCK();
          if (lVar8 == 8) {
            lVar8 = *(longlong *)(param_1 + 0x130);
            if (lVar8 != *(longlong *)(param_1 + 0x120)) goto LAB_1409aed37;
          }
          else {
            pdb_142dbca40(plVar6,0);
            lVar8 = *(longlong *)(param_1 + 0x130);
            if (lVar8 != *(longlong *)(param_1 + 0x120)) goto LAB_1409aed37;
          }
          pdb_142d8afd0(param_1 + 0x120);
LAB_1409aed37:
          *(undefined8 *)(*(longlong *)(param_1 + 0x128) + lVar8 * 0x10) = 0;
          *(longlong *)(param_1 + 0x130) = lVar8 + 1;
          return;
        }
      }
      goto LAB_1409aed77;
    }
    uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
    uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
  }
  auVar19[0] = -(auVar20[0] == -1);
  auVar19[1] = -(auVar20[1] == -1);
  auVar19[2] = -(auVar20[2] == -1);
  auVar19[3] = -(auVar20[3] == -1);
  auVar19[4] = -(auVar20[4] == -1);
  auVar19[5] = -(auVar20[5] == -1);
  auVar19[6] = -(auVar20[6] == -1);
  auVar19[7] = -(auVar20[7] == -1);
  auVar19[8] = -(auVar20[8] == -1);
  auVar19[9] = -(auVar20[9] == -1);
  auVar19[10] = -(auVar20[10] == -1);
  auVar19[0xb] = -(auVar20[0xb] == -1);
  auVar19[0xc] = -(auVar20[0xc] == -1);
  auVar19[0xd] = -(auVar20[0xd] == -1);
  auVar19[0xe] = -(auVar20[0xe] == -1);
  auVar19[0xf] = -(auVar20[0xf] == -1);
  if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 || (SUB161(auVar19 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar19 >> 0x17,0) & 1) != 0) || (SUB161(auVar19 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar19 >> 0x27,0) & 1) != 0) || (SUB161(auVar19 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar19 >> 0x37,0) & 1) != 0) || (SUB161(auVar19 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar19 >> 0x47,0) & 1) != 0) || (SUB161(auVar19 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar19 >> 0x57,0) & 1) != 0) || (SUB161(auVar19 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar19 >> 0x67,0) & 1) != 0) || (SUB161(auVar19 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar19 >> 0x77,0) & 1) != 0) || auVar19[0xf] < '\0') {
LAB_1409aed77:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_1430296c8);
  }
  uVar11 = uVar11 + lVar14 + 0x10;
  lVar14 = lVar14 + 0x10;
  goto LAB_1409ae967;
}

