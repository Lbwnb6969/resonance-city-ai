// VA 0x1401211c0, PDB extent 2649 bytes
// tiny_glade::tgsr_capture::capture_tgsr_frame
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/tgsr_capture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::tgsr_capture::capture_tgsr_frame
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/tgsr_capture.rs
   Extent: 2649 */

void pdb_1401211c0(longlong param_1,longlong param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  uint uVar26;
  longlong lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  ushort uVar30;
  ulonglong uVar31;
  longlong lVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  longlong lVar35;
  undefined *puVar36;
  undefined8 uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined *puVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined8 uVar48;
  undefined1 uStack_2a1;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  uint uStack_288;
  uint uStack_284;
  undefined *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  undefined8 uStack_268;
  uint uStack_260;
  undefined8 uStack_25c;
  undefined8 uStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_22c;
  undefined8 uStack_224;
  undefined4 uStack_21c;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  uint uStack_1f8;
  undefined4 uStack_1f4;
  uint *puStack_1f0;
  code *pcStack_1e8;
  undefined **ppuStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 *puStack_120;
  
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar27 = *(longlong *)(param_2 + 0x70);
    uVar33 = 0xe2158ef04a125bf5;
    lVar32 = 0;
    while( true ) {
      uVar33 = uVar33 & *(ulonglong *)(param_2 + 0x78);
      pcVar1 = (char *)(lVar27 + uVar33);
      auVar42[0] = -(*pcVar1 == DAT_142e344d0);
      auVar42[1] = -(pcVar1[1] == DAT_142e344d0._1_1_);
      auVar42[2] = -(pcVar1[2] == DAT_142e344d0._2_1_);
      auVar42[3] = -(pcVar1[3] == DAT_142e344d0._3_1_);
      auVar42[4] = -(pcVar1[4] == DAT_142e344d0._4_1_);
      auVar42[5] = -(pcVar1[5] == DAT_142e344d0._5_1_);
      auVar42[6] = -(pcVar1[6] == DAT_142e344d0._6_1_);
      auVar42[7] = -(pcVar1[7] == DAT_142e344d0._7_1_);
      auVar42[8] = -(pcVar1[8] == DAT_142e344d0._8_1_);
      auVar42[9] = -(pcVar1[9] == DAT_142e344d0._9_1_);
      auVar42[10] = -(pcVar1[10] == DAT_142e344d0._10_1_);
      auVar42[0xb] = -(pcVar1[0xb] == DAT_142e344d0._11_1_);
      auVar42[0xc] = -(pcVar1[0xc] == DAT_142e344d0._12_1_);
      auVar42[0xd] = -(pcVar1[0xd] == DAT_142e344d0._13_1_);
      auVar42[0xe] = -(pcVar1[0xe] == DAT_142e344d0._14_1_);
      auVar42[0xf] = -(pcVar1[0xf] == DAT_142e344d0._15_1_);
      uVar30 = (ushort)(SUB161(auVar42 >> 7,0) & 1) | (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
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
      uVar26 = (uint)uVar30;
      while (uVar30 != 0) {
        uVar7 = 0;
        for (uVar8 = uVar26; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        uVar31 = uVar7 + uVar33 & *(ulonglong *)(param_2 + 0x78);
        pcVar2 = (char *)(lVar27 + -0x18 + uVar31 * -0x18);
        auVar43[0] = -(*pcVar2 == DAT_142e34b60);
        auVar43[1] = -(pcVar2[1] == DAT_142e34b60._1_1_);
        auVar43[2] = -(pcVar2[2] == DAT_142e34b60._2_1_);
        auVar43[3] = -(pcVar2[3] == DAT_142e34b60._3_1_);
        auVar43[4] = -(pcVar2[4] == DAT_142e34b60._4_1_);
        auVar43[5] = -(pcVar2[5] == DAT_142e34b60._5_1_);
        auVar43[6] = -(pcVar2[6] == DAT_142e34b60._6_1_);
        auVar43[7] = -(pcVar2[7] == DAT_142e34b60._7_1_);
        auVar43[8] = -(pcVar2[8] == DAT_142e34b60._8_1_);
        auVar43[9] = -(pcVar2[9] == DAT_142e34b60._9_1_);
        auVar43[10] = -(pcVar2[10] == DAT_142e34b60._10_1_);
        auVar43[0xb] = -(pcVar2[0xb] == DAT_142e34b60._11_1_);
        auVar43[0xc] = -(pcVar2[0xc] == DAT_142e34b60._12_1_);
        auVar43[0xd] = -(pcVar2[0xd] == DAT_142e34b60._13_1_);
        auVar43[0xe] = -(pcVar2[0xe] == DAT_142e34b60._14_1_);
        auVar43[0xf] = -(pcVar2[0xf] == DAT_142e34b60._15_1_);
        if ((ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
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
                     (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar43[0xf] >> 7) << 0xf) == 0xffff) {
          uVar33 = *(ulonglong *)(lVar27 + uVar31 * -0x18 + -8);
          if ((*(ulonglong *)(param_2 + 0x210) <= uVar33) ||
             (uVar33 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar33 * 8), uVar33 == 0))
          goto LAB_1401213f0;
          lVar27 = ~uVar33 * 0x40;
          if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar27) == 0)
          goto LAB_1401213f0;
          lVar27 = *(longlong *)(param_2 + 0x1d8) + lVar27;
          puVar6 = *(uint **)(lVar27 + 0x10);
          *(undefined4 *)(lVar27 + 0x3c) = *(undefined4 *)(param_2 + 0x5a8);
          if (2 < *puVar6) {
            return;
          }
          if (puVar6[0x2d] <= puVar6[0x2e]) {
            return;
          }
          if (*(longlong *)(param_2 + 0x88) == 0) goto LAB_1401216cf;
          lVar27 = *(longlong *)(param_2 + 0x70);
          uVar33 = *(ulonglong *)(param_2 + 0x78);
          uVar31 = 0xcda1f14a4c73f628;
          lVar32 = 0;
          goto LAB_140121382;
        }
        uVar30 = (ushort)(uVar26 - 1) & (ushort)uVar26;
        uVar26 = CONCAT22((short)(uVar26 - 1 >> 0x10),uVar30);
      }
      auVar38[0] = -(*pcVar1 == -1);
      auVar38[1] = -(pcVar1[1] == -1);
      auVar38[2] = -(pcVar1[2] == -1);
      auVar38[3] = -(pcVar1[3] == -1);
      auVar38[4] = -(pcVar1[4] == -1);
      auVar38[5] = -(pcVar1[5] == -1);
      auVar38[6] = -(pcVar1[6] == -1);
      auVar38[7] = -(pcVar1[7] == -1);
      auVar38[8] = -(pcVar1[8] == -1);
      auVar38[9] = -(pcVar1[9] == -1);
      auVar38[10] = -(pcVar1[10] == -1);
      auVar38[0xb] = -(pcVar1[0xb] == -1);
      auVar38[0xc] = -(pcVar1[0xc] == -1);
      auVar38[0xd] = -(pcVar1[0xd] == -1);
      auVar38[0xe] = -(pcVar1[0xe] == -1);
      auVar38[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar38 >> 7,0) & 1) != 0 || (SUB161(auVar38 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar38 >> 0x17,0) & 1) != 0) || (SUB161(auVar38 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar38 >> 0x27,0) & 1) != 0) || (SUB161(auVar38 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar38 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar38 >> 0x3f,0) & 1) != 0) || (SUB161(auVar38 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar38 >> 0x4f,0) & 1) != 0) || (SUB161(auVar38 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar38 >> 0x5f,0) & 1) != 0) || (SUB161(auVar38 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar38 >> 0x6f,0) & 1) != 0) || (SUB161(auVar38 >> 0x77,0) & 1) != 0) ||
          auVar38[0xf] < '\0') break;
      uVar33 = uVar33 + lVar32 + 0x10;
      lVar32 = lVar32 + 0x10;
    }
  }
LAB_1401213f0:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142e46e00);
LAB_140121382:
  uVar31 = uVar31 & uVar33;
  auVar42 = *(undefined1 (*) [16])(lVar27 + uVar31);
  auVar44[0] = -(auVar42[0] == DAT_142e35050);
  auVar44[1] = -(auVar42[1] == DAT_142e35050._1_1_);
  auVar44[2] = -(auVar42[2] == DAT_142e35050._2_1_);
  auVar44[3] = -(auVar42[3] == DAT_142e35050._3_1_);
  auVar44[4] = -(auVar42[4] == DAT_142e35050._4_1_);
  auVar44[5] = -(auVar42[5] == DAT_142e35050._5_1_);
  auVar44[6] = -(auVar42[6] == DAT_142e35050._6_1_);
  auVar44[7] = -(auVar42[7] == DAT_142e35050._7_1_);
  auVar44[8] = -(auVar42[8] == DAT_142e35050._8_1_);
  auVar44[9] = -(auVar42[9] == DAT_142e35050._9_1_);
  auVar44[10] = -(auVar42[10] == DAT_142e35050._10_1_);
  auVar44[0xb] = -(auVar42[0xb] == DAT_142e35050._11_1_);
  auVar44[0xc] = -(auVar42[0xc] == DAT_142e35050._12_1_);
  auVar44[0xd] = -(auVar42[0xd] == DAT_142e35050._13_1_);
  auVar44[0xe] = -(auVar42[0xe] == DAT_142e35050._14_1_);
  auVar44[0xf] = -(auVar42[0xf] == DAT_142e35050._15_1_);
  uVar30 = (ushort)(SUB161(auVar44 >> 7,0) & 1) | (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe | (ushort)(auVar44[0xf] >> 7) << 0xf;
  uVar26 = (uint)uVar30;
  while (uVar30 != 0) {
    uVar7 = 0;
    for (uVar8 = uVar26; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    uVar34 = uVar7 + uVar31 & uVar33;
    pcVar1 = (char *)(lVar27 + -0x18 + uVar34 * -0x18);
    auVar45[0] = -(*pcVar1 == DAT_142e42300);
    auVar45[1] = -(pcVar1[1] == DAT_142e42300._1_1_);
    auVar45[2] = -(pcVar1[2] == DAT_142e42300._2_1_);
    auVar45[3] = -(pcVar1[3] == DAT_142e42300._3_1_);
    auVar45[4] = -(pcVar1[4] == DAT_142e42300._4_1_);
    auVar45[5] = -(pcVar1[5] == DAT_142e42300._5_1_);
    auVar45[6] = -(pcVar1[6] == DAT_142e42300._6_1_);
    auVar45[7] = -(pcVar1[7] == DAT_142e42300._7_1_);
    auVar45[8] = -(pcVar1[8] == DAT_142e42300._8_1_);
    auVar45[9] = -(pcVar1[9] == DAT_142e42300._9_1_);
    auVar45[10] = -(pcVar1[10] == DAT_142e42300._10_1_);
    auVar45[0xb] = -(pcVar1[0xb] == DAT_142e42300._11_1_);
    auVar45[0xc] = -(pcVar1[0xc] == DAT_142e42300._12_1_);
    auVar45[0xd] = -(pcVar1[0xd] == DAT_142e42300._13_1_);
    auVar45[0xe] = -(pcVar1[0xe] == DAT_142e42300._14_1_);
    auVar45[0xf] = -(pcVar1[0xf] == DAT_142e42300._15_1_);
    if ((ushort)((ushort)(SUB161(auVar45 >> 7,0) & 1) | (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe | (ushort)(auVar45[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar31 = *(ulonglong *)(lVar27 + uVar34 * -0x18 + -8);
      if (*(ulonglong *)(param_2 + 0x210) <= uVar31) goto LAB_1401216cf;
      uVar31 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar31 * 8);
      if (uVar31 == 0) goto LAB_1401216cf;
      lVar32 = *(longlong *)(param_2 + 0x1d8);
      lVar35 = ~uVar31 * 0x40;
      if (*(longlong *)(lVar32 + 0x20 + lVar35) == 0) goto LAB_1401216cf;
      lVar35 = *(longlong *)(lVar35 + lVar32 + 0x10);
      if ((((ulonglong)*(ushort *)(lVar35 + 10) << 0x20 | (ulonglong)*(ushort *)(lVar35 + 8)) !=
           *(ulonglong *)(puVar6 + 0x24)) || (*(int *)(lVar35 + 8) != *(int *)(lVar35 + 4))) {
        puStack_280 = &UNK_142e46e48;
        puStack_278 = (undefined8 *)0x22;
        if (*_DAT_143ca8e90 != 0) {
          uStack_200 = puVar6 + 4;
          puStack_1f0 = puVar6 + 0x2f;
          uStack_1f8 = 0x40f58250;
          uStack_1f4 = 1;
          pcStack_1e8 = pdb_140f71a50;
          ppuStack_1e0 = &puStack_280;
          pcStack_1d8 = pdb_1402ed400;
          uStack_178 = 0;
          puStack_170 = &UNK_142e46cf0;
          uStack_168 = 0x18;
          uStack_160 = 0;
          puStack_158 = &UNK_142e46c5b;
          uStack_150 = 0x25;
          uStack_148 = 1;
          puStack_140 = &UNK_142e46cf0;
          uStack_138 = 0x18;
          uStack_130 = 0x22600000001;
          puStack_128 = &UNK_142e46d82;
          puStack_120 = &uStack_200;
          pdb_140f332f0(&uStack_2a1,&uStack_178);
        }
        uStack_178 = 0x8000000000000002;
        pdb_140120fa0(puVar6,&uStack_178);
        return;
      }
      uVar31 = 0xf005b54a1c526f96;
      lVar35 = 0;
      goto LAB_140121494;
    }
    uVar30 = (ushort)(uVar26 - 1) & (ushort)uVar26;
    uVar26 = CONCAT22((short)(uVar26 - 1 >> 0x10),uVar30);
  }
  goto LAB_1401213d3;
LAB_140121494:
  uVar31 = uVar31 & uVar33;
  auVar42 = *(undefined1 (*) [16])(lVar27 + uVar31);
  auVar46[0] = -(auVar42[0] == DAT_142e34070);
  auVar46[1] = -(auVar42[1] == DAT_142e34070._1_1_);
  auVar46[2] = -(auVar42[2] == DAT_142e34070._2_1_);
  auVar46[3] = -(auVar42[3] == DAT_142e34070._3_1_);
  auVar46[4] = -(auVar42[4] == DAT_142e34070._4_1_);
  auVar46[5] = -(auVar42[5] == DAT_142e34070._5_1_);
  auVar46[6] = -(auVar42[6] == DAT_142e34070._6_1_);
  auVar46[7] = -(auVar42[7] == DAT_142e34070._7_1_);
  auVar46[8] = -(auVar42[8] == DAT_142e34070._8_1_);
  auVar46[9] = -(auVar42[9] == DAT_142e34070._9_1_);
  auVar46[10] = -(auVar42[10] == DAT_142e34070._10_1_);
  auVar46[0xb] = -(auVar42[0xb] == DAT_142e34070._11_1_);
  auVar46[0xc] = -(auVar42[0xc] == DAT_142e34070._12_1_);
  auVar46[0xd] = -(auVar42[0xd] == DAT_142e34070._13_1_);
  auVar46[0xe] = -(auVar42[0xe] == DAT_142e34070._14_1_);
  auVar46[0xf] = -(auVar42[0xf] == DAT_142e34070._15_1_);
  uVar30 = (ushort)(SUB161(auVar46 >> 7,0) & 1) | (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar46 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar46 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar46 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar46 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar46 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar46 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar46 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar46 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar46 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar46 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar46 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar46 >> 0x77,0) & 1) << 0xe | (ushort)(auVar46[0xf] >> 7) << 0xf;
  uVar26 = (uint)uVar30;
  while (uVar30 != 0) {
    uVar7 = 0;
    for (uVar8 = uVar26; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    uVar34 = uVar7 + uVar31 & uVar33;
    pcVar1 = (char *)(lVar27 + -0x18 + uVar34 * -0x18);
    auVar47[0] = -(*pcVar1 == DAT_142e34cd0);
    auVar47[1] = -(pcVar1[1] == DAT_142e34cd0._1_1_);
    auVar47[2] = -(pcVar1[2] == DAT_142e34cd0._2_1_);
    auVar47[3] = -(pcVar1[3] == DAT_142e34cd0._3_1_);
    auVar47[4] = -(pcVar1[4] == DAT_142e34cd0._4_1_);
    auVar47[5] = -(pcVar1[5] == DAT_142e34cd0._5_1_);
    auVar47[6] = -(pcVar1[6] == DAT_142e34cd0._6_1_);
    auVar47[7] = -(pcVar1[7] == DAT_142e34cd0._7_1_);
    auVar47[8] = -(pcVar1[8] == DAT_142e34cd0._8_1_);
    auVar47[9] = -(pcVar1[9] == DAT_142e34cd0._9_1_);
    auVar47[10] = -(pcVar1[10] == DAT_142e34cd0._10_1_);
    auVar47[0xb] = -(pcVar1[0xb] == DAT_142e34cd0._11_1_);
    auVar47[0xc] = -(pcVar1[0xc] == DAT_142e34cd0._12_1_);
    auVar47[0xd] = -(pcVar1[0xd] == DAT_142e34cd0._13_1_);
    auVar47[0xe] = -(pcVar1[0xe] == DAT_142e34cd0._14_1_);
    auVar47[0xf] = -(pcVar1[0xf] == DAT_142e34cd0._15_1_);
    if ((ushort)((ushort)(SUB161(auVar47 >> 7,0) & 1) | (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe | (ushort)(auVar47[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar33 = *(ulonglong *)(lVar27 + uVar34 * -0x18 + -8);
      if (((uVar33 < *(ulonglong *)(param_2 + 0x210)) &&
          (uVar33 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar33 * 8), uVar33 != 0)) &&
         (lVar27 = ~uVar33 * 0x40, *(longlong *)(lVar32 + 0x20 + lVar27) != 0)) {
        uVar26 = puVar6[0x2e] & 3;
        puStack_248 = param_3;
        puStack_218 = param_4;
        if (*(ulonglong *)(puVar6 + 0x10) <= (ulonglong)uVar26) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2((ulonglong)uVar26,*(ulonglong *)(puVar6 + 0x10),&UNK_142e46f88);
        }
        lVar27 = *(longlong *)(lVar32 + lVar27 + 0x10);
        uVar7 = puVar6[0x2a];
        uStack_288 = puVar6[0x19];
        uVar4 = *(undefined8 *)(puVar6 + 0x1a);
        uStack_208 = *(undefined8 *)(lVar27 + 0x340);
        uVar29 = *(undefined8 *)(puVar6 + 0x22);
        uStack_284 = puVar6[0x18];
        uVar8 = puVar6[0x28];
        pdb_140e1e250(&uStack_22c,
                      *(undefined8 *)(*(longlong *)(puVar6 + 0xe) + 8 + (ulonglong)(uVar26 << 5)),
                      param_1,0,&UNK_142f70d08);
        uStack_2a0 = 0;
        uStack_298 = 8;
        uStack_290 = 0;
        uVar28 = pdb_140220f90(*(undefined8 *)(param_1 + 0x208),&UNK_142f71663,0x2d,&uStack_2a0);
        pdb_140e291c0(&uStack_200,&UNK_142f71663,0x2d,uVar28,param_1);
        puStack_280 = puStack_248;
        puStack_278 = &uStack_22c;
        uStack_268 = CONCAT44(uVar8,4);
        uStack_260 = uStack_284;
        puStack_270 = (undefined8 *)uVar29;
        uStack_250 = uVar29;
        pdb_1400baa20(&uStack_178,&uStack_200,&puStack_280);
        uStack_1f4 = 1;
        uStack_200._0_4_ = 1;
        uStack_200._4_4_ = uVar8;
        uStack_1f8 = uVar8;
        pdb_140e28810(&uStack_178,&uStack_200);
        uVar29 = uStack_250;
        if ((char)puVar6[0x30] != '\0') {
          uStack_2a0 = 0;
          uStack_298 = 8;
          uStack_290 = 0;
          uVar29 = pdb_140220f90(*(undefined8 *)(param_1 + 0x208),&UNK_142f71704,0x2f,&uStack_2a0);
          pdb_140e291c0(&uStack_200,&UNK_142f71704,0x2f,uVar29,param_1);
          uVar29 = uStack_250;
          puStack_280 = puStack_248;
          puStack_278 = &uStack_22c;
          puStack_270 = (undefined8 *)uStack_250;
          uStack_268 = CONCAT44(uStack_288,uVar7);
          pdb_1400bb010(&uStack_178,&uStack_200,&puStack_280);
          uStack_1f4 = 1;
          uStack_200._0_4_ = 1;
          uStack_200._4_4_ = uVar7;
          uStack_1f8 = uVar7;
          pdb_140e28810(&uStack_178,&uStack_200);
        }
        uStack_2a0 = 0;
        uStack_298 = 8;
        uStack_290 = 0;
        uVar28 = pdb_140220f90(*(undefined8 *)(param_1 + 0x208),&UNK_142f71733,0x30,&uStack_2a0);
        pdb_140e291c0(&uStack_200,&UNK_142f71733,0x30,uVar28,param_1);
        puStack_280 = puStack_218;
        puStack_278 = (undefined8 *)param_5;
        puStack_270 = &uStack_22c;
        uStack_268 = uVar29;
        uStack_260 = uVar7;
        uStack_25c = uVar4;
        pdb_1400b9e40(&uStack_178,&uStack_200,&puStack_280);
        uStack_200._4_4_ = uVar7 >> 1;
        uStack_1f4 = 1;
        uStack_200._0_4_ = 1;
        uStack_1f8 = uVar7;
        pdb_140e28810(&uStack_178,&uStack_200);
        uStack_168 = CONCAT44(uStack_168._4_4_,uStack_21c);
        uStack_178 = uStack_22c;
        puStack_170 = (undefined *)uStack_224;
        pdb_140e1e2e0(&uStack_178,param_1,0x23);
        uVar4 = *(undefined8 *)(lVar27 + 0x110);
        uVar29 = *(undefined8 *)(lVar27 + 0x118);
        uVar28 = *(undefined8 *)(lVar27 + 0x120);
        uVar9 = *(undefined8 *)(lVar27 + 0x128);
        uVar10 = *(undefined8 *)(lVar27 + 0x130);
        uVar11 = *(undefined8 *)(lVar27 + 0x138);
        uVar12 = *(undefined8 *)(lVar27 + 0x400);
        uVar13 = *(undefined8 *)(lVar27 + 0x408);
        uVar14 = *(undefined8 *)(lVar27 + 0x410);
        uVar15 = *(undefined8 *)(lVar27 + 0x418);
        uVar16 = *(undefined8 *)(lVar27 + 0x420);
        uVar17 = *(undefined8 *)(lVar27 + 0x428);
        uVar18 = *(undefined8 *)(lVar27 + 0x430);
        uVar19 = *(undefined8 *)(lVar27 + 0x438);
        uVar20 = *(undefined8 *)(lVar27 + 0x1c0);
        uVar21 = *(undefined8 *)(lVar27 + 0x1c8);
        uVar22 = *(undefined8 *)(lVar27 + 0x1e0);
        uVar23 = *(undefined8 *)(lVar27 + 0x1e8);
        uVar24 = *(undefined8 *)(lVar27 + 0x1f0);
        uVar25 = *(undefined8 *)(lVar27 + 0x1f8);
        uVar5 = *(undefined4 *)(lVar27 + 0x3fc);
        lVar32 = *(longlong *)(puVar6 + 0x16);
        puVar36 = *(undefined **)(lVar27 + 0x1d0);
        uVar37 = *(undefined8 *)(lVar27 + 0x1d8);
        puVar41 = *(undefined **)(lVar27 + 0x100);
        uVar48 = *(undefined8 *)(lVar27 + 0x108);
        if (lVar32 == *(longlong *)(puVar6 + 0x12)) {
          puStack_248 = *(undefined **)(lVar27 + 0x1d0);
          uStack_240 = *(undefined8 *)(lVar27 + 0x1d8);
          puStack_218 = *(undefined **)(lVar27 + 0x100);
          uStack_210 = *(undefined8 *)(lVar27 + 0x108);
          pdb_142d7e750(puVar6 + 0x12);
          puVar36 = puStack_248;
          uVar37 = uStack_240;
          puVar41 = puStack_218;
          uVar48 = uStack_210;
        }
        lVar27 = *(longlong *)(puVar6 + 0x14);
        lVar35 = lVar32 * 0xcc;
        *(undefined8 *)(lVar27 + lVar35) = puVar41;
        ((undefined8 *)(lVar27 + lVar35))[1] = uVar48;
        puVar3 = (undefined8 *)(lVar27 + 0x10 + lVar35);
        *puVar3 = uVar4;
        puVar3[1] = uVar29;
        puVar3 = (undefined8 *)(lVar27 + 0x20 + lVar35);
        *puVar3 = uVar28;
        puVar3[1] = uVar9;
        puVar3 = (undefined8 *)(lVar27 + 0x30 + lVar35);
        *puVar3 = uVar10;
        puVar3[1] = uVar11;
        puVar3 = (undefined8 *)(lVar27 + 0x40 + lVar35);
        *puVar3 = uVar12;
        puVar3[1] = uVar13;
        puVar3 = (undefined8 *)(lVar27 + 0x50 + lVar35);
        *puVar3 = uVar14;
        puVar3[1] = uVar15;
        puVar3 = (undefined8 *)(lVar27 + 0x60 + lVar35);
        *puVar3 = uVar16;
        puVar3[1] = uVar17;
        puVar3 = (undefined8 *)(lVar27 + 0x70 + lVar35);
        *puVar3 = uVar18;
        puVar3[1] = uVar19;
        puVar3 = (undefined8 *)(lVar27 + 0x80 + lVar35);
        *puVar3 = uVar20;
        puVar3[1] = uVar21;
        puVar3 = (undefined8 *)(lVar27 + 0x90 + lVar35);
        *puVar3 = puVar36;
        puVar3[1] = uVar37;
        puVar3 = (undefined8 *)(lVar27 + 0xa0 + lVar35);
        *puVar3 = uVar22;
        puVar3[1] = uVar23;
        puVar3 = (undefined8 *)(lVar27 + 0xb0 + lVar35);
        *puVar3 = uVar24;
        puVar3[1] = uVar25;
        *(undefined8 *)(lVar27 + 0xc0 + lVar35) = uStack_208;
        *(undefined4 *)(lVar27 + 200 + lVar35) = uVar5;
        *(longlong *)(puVar6 + 0x16) = lVar32 + 1;
        uVar26 = puVar6[0x2e] & 3;
        if ((ulonglong)uVar26 < *(ulonglong *)(puVar6 + 0x10)) {
          *(undefined8 *)(*(longlong *)(puVar6 + 0xe) + (ulonglong)(uVar26 << 5)) = 0x400000001;
          puVar6[0x2e] = puVar6[0x2e] + 1;
          return;
        }
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2((ulonglong)uVar26,*(ulonglong *)(puVar6 + 0x10),&UNK_142e46fa0);
      }
      goto LAB_14012197c;
    }
    uVar30 = (ushort)(uVar26 - 1) & (ushort)uVar26;
    uVar26 = CONCAT22((short)(uVar26 - 1 >> 0x10),uVar30);
  }
  auVar40[0] = -(auVar42[0] == -1);
  auVar40[1] = -(auVar42[1] == -1);
  auVar40[2] = -(auVar42[2] == -1);
  auVar40[3] = -(auVar42[3] == -1);
  auVar40[4] = -(auVar42[4] == -1);
  auVar40[5] = -(auVar42[5] == -1);
  auVar40[6] = -(auVar42[6] == -1);
  auVar40[7] = -(auVar42[7] == -1);
  auVar40[8] = -(auVar42[8] == -1);
  auVar40[9] = -(auVar42[9] == -1);
  auVar40[10] = -(auVar42[10] == -1);
  auVar40[0xb] = -(auVar42[0xb] == -1);
  auVar40[0xc] = -(auVar42[0xc] == -1);
  auVar40[0xd] = -(auVar42[0xd] == -1);
  auVar40[0xe] = -(auVar42[0xe] == -1);
  auVar40[0xf] = -(auVar42[0xf] == -1);
  if ((((((((((((((((SUB161(auVar40 >> 7,0) & 1) != 0 || (SUB161(auVar40 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar40 >> 0x17,0) & 1) != 0) || (SUB161(auVar40 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar40 >> 0x27,0) & 1) != 0) || (SUB161(auVar40 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar40 >> 0x37,0) & 1) != 0) || (SUB161(auVar40 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar40 >> 0x47,0) & 1) != 0) || (SUB161(auVar40 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar40 >> 0x57,0) & 1) != 0) || (SUB161(auVar40 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar40 >> 0x67,0) & 1) != 0) || (SUB161(auVar40 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar40 >> 0x77,0) & 1) != 0) || auVar40[0xf] < '\0') {
LAB_14012197c:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142e46e30);
  }
  uVar31 = uVar31 + lVar35 + 0x10;
  lVar35 = lVar35 + 0x10;
  goto LAB_140121494;
LAB_1401213d3:
  auVar39[0] = -(auVar42[0] == -1);
  auVar39[1] = -(auVar42[1] == -1);
  auVar39[2] = -(auVar42[2] == -1);
  auVar39[3] = -(auVar42[3] == -1);
  auVar39[4] = -(auVar42[4] == -1);
  auVar39[5] = -(auVar42[5] == -1);
  auVar39[6] = -(auVar42[6] == -1);
  auVar39[7] = -(auVar42[7] == -1);
  auVar39[8] = -(auVar42[8] == -1);
  auVar39[9] = -(auVar42[9] == -1);
  auVar39[10] = -(auVar42[10] == -1);
  auVar39[0xb] = -(auVar42[0xb] == -1);
  auVar39[0xc] = -(auVar42[0xc] == -1);
  auVar39[0xd] = -(auVar42[0xd] == -1);
  auVar39[0xe] = -(auVar42[0xe] == -1);
  auVar39[0xf] = -(auVar42[0xf] == -1);
  if ((((((((((((((((SUB161(auVar39 >> 7,0) & 1) != 0 || (SUB161(auVar39 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar39 >> 0x17,0) & 1) != 0) || (SUB161(auVar39 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar39 >> 0x27,0) & 1) != 0) || (SUB161(auVar39 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar39 >> 0x37,0) & 1) != 0) || (SUB161(auVar39 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar39 >> 0x47,0) & 1) != 0) || (SUB161(auVar39 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar39 >> 0x57,0) & 1) != 0) || (SUB161(auVar39 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar39 >> 0x67,0) & 1) != 0) || (SUB161(auVar39 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar39 >> 0x77,0) & 1) != 0) || auVar39[0xf] < '\0') {
LAB_1401216cf:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142e46e18);
  }
  uVar31 = uVar31 + lVar32 + 0x10;
  lVar32 = lVar32 + 0x10;
  goto LAB_140121382;
}

