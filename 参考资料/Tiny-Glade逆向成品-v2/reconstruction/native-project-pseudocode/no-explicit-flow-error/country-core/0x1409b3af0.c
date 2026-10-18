// VA 0x1409b3af0, PDB extent 3995 bytes
// country_core::systems::render_loop::painterly::painterly_pass
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/painterly/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::render_loop::painterly::painterly_pass
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/painterly/mod.rs
   Extent: 3995 */

void pdb_1409b3af0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,char param_6)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  double dVar4;
  int *piVar5;
  short *psVar6;
  uint uVar7;
  uint uVar8;
  double dVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  byte bVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  uint uVar19;
  ushort uVar20;
  ulonglong uVar21;
  longlong lVar22;
  char cVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
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
  undefined1 auStack_238 [24];
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined6 uStack_218;
  undefined2 uStack_212;
  undefined1 uStack_210;
  undefined1 auStack_198 [8];
  undefined4 uStack_190;
  undefined2 uStack_18c;
  undefined2 uStack_18a;
  undefined6 uStack_188;
  undefined2 uStack_182;
  longlong lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined2 uStack_160;
  undefined2 uStack_15e;
  undefined4 uStack_15c;
  undefined2 uStack_158;
  undefined2 uStack_156;
  undefined2 uStack_154;
  undefined2 uStack_152;
  undefined4 uStack_150;
  byte bStack_14c;
  undefined1 uStack_14b;
  undefined2 uStack_14a;
  undefined8 uStack_148;
  ulonglong *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  ulonglong auStack_d8 [3];
  undefined4 uStack_bc;
  longlong lStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined8 *puStack_80;
  undefined1 uStack_72;
  char cStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar14 = *(longlong *)(param_2 + 0x70);
    uVar16 = *(ulonglong *)(param_2 + 0x78);
    uVar17 = 0xf1335775cdf5bf9c;
    lVar15 = 0;
    while( true ) {
      uVar17 = uVar17 & uVar16;
      pcVar1 = (char *)(lVar14 + uVar17);
      auVar31[0] = -(*pcVar1 == DAT_142e34070);
      auVar31[1] = -(pcVar1[1] == UNK_142e34071);
      auVar31[2] = -(pcVar1[2] == UNK_142e34072);
      auVar31[3] = -(pcVar1[3] == UNK_142e34073);
      auVar31[4] = -(pcVar1[4] == UNK_142e34074);
      auVar31[5] = -(pcVar1[5] == UNK_142e34075);
      auVar31[6] = -(pcVar1[6] == UNK_142e34076);
      auVar31[7] = -(pcVar1[7] == UNK_142e34077);
      auVar31[8] = -(pcVar1[8] == UNK_142e34078);
      auVar31[9] = -(pcVar1[9] == UNK_142e34079);
      auVar31[10] = -(pcVar1[10] == UNK_142e3407a);
      auVar31[0xb] = -(pcVar1[0xb] == UNK_142e3407b);
      auVar31[0xc] = -(pcVar1[0xc] == UNK_142e3407c);
      auVar31[0xd] = -(pcVar1[0xd] == UNK_142e3407d);
      auVar31[0xe] = -(pcVar1[0xe] == UNK_142e3407e);
      auVar31[0xf] = -(pcVar1[0xf] == UNK_142e3407f);
      uVar20 = (ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe | (ushort)(auVar31[0xf] >> 7) << 0xf;
      uVar19 = (uint)uVar20;
      while (uVar20 != 0) {
        uVar7 = 0;
        for (uVar8 = uVar19; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        uVar21 = uVar7 + uVar17 & uVar16;
        pcVar2 = (char *)(lVar14 + -0x18 + uVar21 * -0x18);
        auVar32[0] = -(*pcVar2 == DAT_142e34080);
        auVar32[1] = -(pcVar2[1] == UNK_142e34081);
        auVar32[2] = -(pcVar2[2] == UNK_142e34082);
        auVar32[3] = -(pcVar2[3] == UNK_142e34083);
        auVar32[4] = -(pcVar2[4] == UNK_142e34084);
        auVar32[5] = -(pcVar2[5] == UNK_142e34085);
        auVar32[6] = -(pcVar2[6] == UNK_142e34086);
        auVar32[7] = -(pcVar2[7] == UNK_142e34087);
        auVar32[8] = -(pcVar2[8] == UNK_142e34088);
        auVar32[9] = -(pcVar2[9] == UNK_142e34089);
        auVar32[10] = -(pcVar2[10] == UNK_142e3408a);
        auVar32[0xb] = -(pcVar2[0xb] == UNK_142e3408b);
        auVar32[0xc] = -(pcVar2[0xc] == UNK_142e3408c);
        auVar32[0xd] = -(pcVar2[0xd] == UNK_142e3408d);
        auVar32[0xe] = -(pcVar2[0xe] == UNK_142e3408e);
        auVar32[0xf] = -(pcVar2[0xf] == UNK_142e3408f);
        if ((ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar32[0xf] >> 7) << 0xf) == 0xffff) {
          uVar17 = *(ulonglong *)(lVar14 + uVar21 * -0x18 + -8);
          if (*(ulonglong *)(param_2 + 0x210) <= uVar17) goto LAB_1409b3cc1;
          uVar17 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar17 * 8);
          if (uVar17 == 0) goto LAB_1409b3cc1;
          lVar15 = *(longlong *)(param_2 + 0x1d8);
          lVar22 = ~uVar17 * 0x40;
          if (*(longlong *)(lVar15 + 0x20 + lVar22) == 0) goto LAB_1409b3cc1;
          piVar5 = *(int **)(lVar22 + lVar15 + 0x10);
          if ((*piVar5 == 7) && ((char)piVar5[2] == '\x01')) {
            return;
          }
          uVar17 = 0x8e228bced58488ea;
          lVar22 = 0;
          goto LAB_1409b3c53;
        }
        uVar20 = (ushort)(uVar19 - 1) & (ushort)uVar19;
        uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar20);
      }
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
                      (SUB161(auVar24 >> 0x17,0) & 1) != 0) || (SUB161(auVar24 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar24 >> 0x27,0) & 1) != 0) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar24 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar24 >> 0x3f,0) & 1) != 0) || (SUB161(auVar24 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar24 >> 0x4f,0) & 1) != 0) || (SUB161(auVar24 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar24 >> 0x5f,0) & 1) != 0) || (SUB161(auVar24 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar24 >> 0x6f,0) & 1) != 0) || (SUB161(auVar24 >> 0x77,0) & 1) != 0) ||
          auVar24[0xf] < '\0') break;
      uVar17 = uVar17 + lVar15 + 0x10;
      lVar15 = lVar15 + 0x10;
    }
  }
LAB_1409b3cc1:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143029fe0);
LAB_1409b3c53:
  uVar17 = uVar17 & uVar16;
  pcVar1 = (char *)(lVar14 + uVar17);
  auVar33[0] = -(*pcVar1 == DAT_142e340d0);
  auVar33[1] = -(pcVar1[1] == DAT_142e340d0._1_1_);
  auVar33[2] = -(pcVar1[2] == DAT_142e340d0._2_1_);
  auVar33[3] = -(pcVar1[3] == DAT_142e340d0._3_1_);
  auVar33[4] = -(pcVar1[4] == DAT_142e340d0._4_1_);
  auVar33[5] = -(pcVar1[5] == DAT_142e340d0._5_1_);
  auVar33[6] = -(pcVar1[6] == DAT_142e340d0._6_1_);
  auVar33[7] = -(pcVar1[7] == DAT_142e340d0._7_1_);
  auVar33[8] = -(pcVar1[8] == DAT_142e340d0._8_1_);
  auVar33[9] = -(pcVar1[9] == DAT_142e340d0._9_1_);
  auVar33[10] = -(pcVar1[10] == DAT_142e340d0._10_1_);
  auVar33[0xb] = -(pcVar1[0xb] == DAT_142e340d0._11_1_);
  auVar33[0xc] = -(pcVar1[0xc] == DAT_142e340d0._12_1_);
  auVar33[0xd] = -(pcVar1[0xd] == DAT_142e340d0._13_1_);
  auVar33[0xe] = -(pcVar1[0xe] == DAT_142e340d0._14_1_);
  auVar33[0xf] = -(pcVar1[0xf] == DAT_142e340d0._15_1_);
  uVar20 = (ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
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
  uVar19 = (uint)uVar20;
  while (lStack_a8 = param_1, uVar20 != 0) {
    uVar7 = 0;
    for (uVar8 = uVar19; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    uVar21 = uVar7 + uVar17 & uVar16;
    pcVar2 = (char *)(lVar14 + -0x18 + uVar21 * -0x18);
    auVar34[0] = -(*pcVar2 == DAT_142e60e90);
    auVar34[1] = -(pcVar2[1] == DAT_142e60e90._1_1_);
    auVar34[2] = -(pcVar2[2] == DAT_142e60e90._2_1_);
    auVar34[3] = -(pcVar2[3] == DAT_142e60e90._3_1_);
    auVar34[4] = -(pcVar2[4] == DAT_142e60e90._4_1_);
    auVar34[5] = -(pcVar2[5] == DAT_142e60e90._5_1_);
    auVar34[6] = -(pcVar2[6] == DAT_142e60e90._6_1_);
    auVar34[7] = -(pcVar2[7] == DAT_142e60e90._7_1_);
    auVar34[8] = -(pcVar2[8] == DAT_142e60e90._8_1_);
    auVar34[9] = -(pcVar2[9] == DAT_142e60e90._9_1_);
    auVar34[10] = -(pcVar2[10] == DAT_142e60e90._10_1_);
    auVar34[0xb] = -(pcVar2[0xb] == DAT_142e60e90._11_1_);
    auVar34[0xc] = -(pcVar2[0xc] == DAT_142e60e90._12_1_);
    auVar34[0xd] = -(pcVar2[0xd] == DAT_142e60e90._13_1_);
    auVar34[0xe] = -(pcVar2[0xe] == DAT_142e60e90._14_1_);
    auVar34[0xf] = -(pcVar2[0xf] == DAT_142e60e90._15_1_);
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
      uVar16 = *(ulonglong *)(lVar14 + uVar21 * -0x18 + -8);
      if (((*(ulonglong *)(param_2 + 0x210) <= uVar16) ||
          (uVar16 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar16 * 8), uVar16 == 0)) ||
         (lVar14 = ~uVar16 * 0x40, *(longlong *)(lVar15 + 0x20 + lVar14) == 0)) goto LAB_1409b3e9f;
      lVar15 = lVar15 + lVar14;
      psVar6 = *(short **)(lVar15 + 0x10);
      *(undefined4 *)(lVar15 + 0x3c) = *(undefined4 *)(param_2 + 0x5a8);
      if (*(longlong *)(param_2 + 0x88) == 0) goto LAB_1409b3eab;
      lVar14 = *(longlong *)(param_2 + 0x70);
      uVar16 = *(ulonglong *)(param_2 + 0x78);
      uVar17 = 0x9f886726fda3974;
      lVar15 = 0;
      goto LAB_1409b3d45;
    }
    uVar20 = (ushort)(uVar19 - 1) & (ushort)uVar19;
    uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar20);
  }
  goto LAB_1409b3ca4;
LAB_1409b3d45:
  uVar17 = uVar17 & uVar16;
  auVar31 = *(undefined1 (*) [16])(lVar14 + uVar17);
  auVar35[0] = -(auVar31[0] == DAT_142e645e0);
  auVar35[1] = -(auVar31[1] == DAT_142e645e0._1_1_);
  auVar35[2] = -(auVar31[2] == DAT_142e645e0._2_1_);
  auVar35[3] = -(auVar31[3] == DAT_142e645e0._3_1_);
  auVar35[4] = -(auVar31[4] == DAT_142e645e0._4_1_);
  auVar35[5] = -(auVar31[5] == DAT_142e645e0._5_1_);
  auVar35[6] = -(auVar31[6] == DAT_142e645e0._6_1_);
  auVar35[7] = -(auVar31[7] == DAT_142e645e0._7_1_);
  auVar35[8] = -(auVar31[8] == DAT_142e645e0._8_1_);
  auVar35[9] = -(auVar31[9] == DAT_142e645e0._9_1_);
  auVar35[10] = -(auVar31[10] == DAT_142e645e0._10_1_);
  auVar35[0xb] = -(auVar31[0xb] == DAT_142e645e0._11_1_);
  auVar35[0xc] = -(auVar31[0xc] == DAT_142e645e0._12_1_);
  auVar35[0xd] = -(auVar31[0xd] == DAT_142e645e0._13_1_);
  auVar35[0xe] = -(auVar31[0xe] == DAT_142e645e0._14_1_);
  auVar35[0xf] = -(auVar31[0xf] == DAT_142e645e0._15_1_);
  uVar20 = (ushort)(SUB161(auVar35 >> 7,0) & 1) | (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
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
           (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe | (ushort)(auVar35[0xf] >> 7) << 0xf;
  uVar19 = (uint)uVar20;
  while (uVar20 != 0) {
    uVar7 = 0;
    for (uVar8 = uVar19; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    uVar21 = uVar7 + uVar17 & uVar16;
    pcVar1 = (char *)(lVar14 + -0x18 + uVar21 * -0x18);
    auVar36[0] = -(*pcVar1 == DAT_142e645f0);
    auVar36[1] = -(pcVar1[1] == DAT_142e645f0._1_1_);
    auVar36[2] = -(pcVar1[2] == DAT_142e645f0._2_1_);
    auVar36[3] = -(pcVar1[3] == DAT_142e645f0._3_1_);
    auVar36[4] = -(pcVar1[4] == DAT_142e645f0._4_1_);
    auVar36[5] = -(pcVar1[5] == DAT_142e645f0._5_1_);
    auVar36[6] = -(pcVar1[6] == DAT_142e645f0._6_1_);
    auVar36[7] = -(pcVar1[7] == DAT_142e645f0._7_1_);
    auVar36[8] = -(pcVar1[8] == DAT_142e645f0._8_1_);
    auVar36[9] = -(pcVar1[9] == DAT_142e645f0._9_1_);
    auVar36[10] = -(pcVar1[10] == DAT_142e645f0._10_1_);
    auVar36[0xb] = -(pcVar1[0xb] == DAT_142e645f0._11_1_);
    auVar36[0xc] = -(pcVar1[0xc] == DAT_142e645f0._12_1_);
    auVar36[0xd] = -(pcVar1[0xd] == DAT_142e645f0._13_1_);
    auVar36[0xe] = -(pcVar1[0xe] == DAT_142e645f0._14_1_);
    auVar36[0xf] = -(pcVar1[0xf] == DAT_142e645f0._15_1_);
    if ((ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe | (ushort)(auVar36[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar17 = *(ulonglong *)(lVar14 + uVar21 * -0x18 + -8);
      if (*(ulonglong *)(param_2 + 0x210) <= uVar17) goto LAB_1409b3eab;
      uVar17 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar17 * 8);
      if (uVar17 == 0) goto LAB_1409b3eab;
      lVar15 = *(longlong *)(param_2 + 0x1d8);
      lVar22 = ~uVar17 * 0x40;
      if (*(longlong *)(lVar15 + 0x20 + lVar22) == 0) goto LAB_1409b3eab;
      cVar23 = true;
      if (*(char *)(*(longlong *)(lVar22 + lVar15 + 0x10) + 0xcf) != '\0') goto LAB_1409b3f01;
      uVar17 = 0xf331377d6045d120;
      lVar22 = 0;
      goto LAB_1409b3e31;
    }
    uVar20 = (ushort)(uVar19 - 1) & (ushort)uVar19;
    uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar20);
  }
  goto LAB_1409b3d90;
LAB_1409b3e82:
  auVar27[0] = -(auVar31[0] == -1);
  auVar27[1] = -(auVar31[1] == -1);
  auVar27[2] = -(auVar31[2] == -1);
  auVar27[3] = -(auVar31[3] == -1);
  auVar27[4] = -(auVar31[4] == -1);
  auVar27[5] = -(auVar31[5] == -1);
  auVar27[6] = -(auVar31[6] == -1);
  auVar27[7] = -(auVar31[7] == -1);
  auVar27[8] = -(auVar31[8] == -1);
  auVar27[9] = -(auVar31[9] == -1);
  auVar27[10] = -(auVar31[10] == -1);
  auVar27[0xb] = -(auVar31[0xb] == -1);
  auVar27[0xc] = -(auVar31[0xc] == -1);
  auVar27[0xd] = -(auVar31[0xd] == -1);
  auVar27[0xe] = -(auVar31[0xe] == -1);
  auVar27[0xf] = -(auVar31[0xf] == -1);
  if ((((((((((((((((SUB161(auVar27 >> 7,0) & 1) != 0 || (SUB161(auVar27 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar27 >> 0x17,0) & 1) != 0) || (SUB161(auVar27 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar27 >> 0x27,0) & 1) != 0) || (SUB161(auVar27 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar27 >> 0x37,0) & 1) != 0) || (SUB161(auVar27 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar27 >> 0x47,0) & 1) != 0) || (SUB161(auVar27 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar27 >> 0x57,0) & 1) != 0) || (SUB161(auVar27 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar27 >> 0x67,0) & 1) != 0) || (SUB161(auVar27 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar27 >> 0x77,0) & 1) != 0) || auVar27[0xf] < '\0') {
LAB_1409b4714:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14302a028);
  }
  uVar17 = uVar17 + lVar22 + 0x10;
  lVar22 = lVar22 + 0x10;
  goto LAB_1409b3e31;
LAB_1409b478d:
  uVar16 = uVar16 & *(ulonglong *)(lStack_180 + 0x78);
  auVar31 = *(undefined1 (*) [16])(lVar14 + uVar16);
  auVar41[0] = -(auVar31[0] == DAT_142e33d90);
  auVar41[1] = -(auVar31[1] == DAT_142e33d90._1_1_);
  auVar41[2] = -(auVar31[2] == DAT_142e33d90._2_1_);
  auVar41[3] = -(auVar31[3] == DAT_142e33d90._3_1_);
  auVar41[4] = -(auVar31[4] == DAT_142e33d90._4_1_);
  auVar41[5] = -(auVar31[5] == DAT_142e33d90._5_1_);
  auVar41[6] = -(auVar31[6] == DAT_142e33d90._6_1_);
  auVar41[7] = -(auVar31[7] == DAT_142e33d90._7_1_);
  auVar41[8] = -(auVar31[8] == DAT_142e33d90._8_1_);
  auVar41[9] = -(auVar31[9] == DAT_142e33d90._9_1_);
  auVar41[10] = -(auVar31[10] == DAT_142e33d90._10_1_);
  auVar41[0xb] = -(auVar31[0xb] == DAT_142e33d90._11_1_);
  auVar41[0xc] = -(auVar31[0xc] == DAT_142e33d90._12_1_);
  auVar41[0xd] = -(auVar31[0xd] == DAT_142e33d90._13_1_);
  auVar41[0xe] = -(auVar31[0xe] == DAT_142e33d90._14_1_);
  auVar41[0xf] = -(auVar31[0xf] == DAT_142e33d90._15_1_);
  uVar20 = (ushort)(SUB161(auVar41 >> 7,0) & 1) | (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
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
           (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe | (ushort)(auVar41[0xf] >> 7) << 0xf;
  uVar19 = (uint)uVar20;
  while (uVar20 != 0) {
    uVar7 = 0;
    for (uVar8 = uVar19; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    uVar17 = uVar7 + uVar16 & *(ulonglong *)(lStack_180 + 0x78);
    pcVar1 = (char *)(lVar14 + -0x18 + uVar17 * -0x18);
    auVar42[0] = -(*pcVar1 == DAT_142e34350);
    auVar42[1] = -(pcVar1[1] == DAT_142e34350._1_1_);
    auVar42[2] = -(pcVar1[2] == DAT_142e34350._2_1_);
    auVar42[3] = -(pcVar1[3] == DAT_142e34350._3_1_);
    auVar42[4] = -(pcVar1[4] == DAT_142e34350._4_1_);
    auVar42[5] = -(pcVar1[5] == DAT_142e34350._5_1_);
    auVar42[6] = -(pcVar1[6] == DAT_142e34350._6_1_);
    auVar42[7] = -(pcVar1[7] == DAT_142e34350._7_1_);
    auVar42[8] = -(pcVar1[8] == DAT_142e34350._8_1_);
    auVar42[9] = -(pcVar1[9] == DAT_142e34350._9_1_);
    auVar42[10] = -(pcVar1[10] == DAT_142e34350._10_1_);
    auVar42[0xb] = -(pcVar1[0xb] == DAT_142e34350._11_1_);
    auVar42[0xc] = -(pcVar1[0xc] == DAT_142e34350._12_1_);
    auVar42[0xd] = -(pcVar1[0xd] == DAT_142e34350._13_1_);
    auVar42[0xe] = -(pcVar1[0xe] == DAT_142e34350._14_1_);
    auVar42[0xf] = -(pcVar1[0xf] == DAT_142e34350._15_1_);
    if ((ushort)((ushort)(SUB161(auVar42 >> 7,0) & 1) | (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe | (ushort)(auVar42[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar16 = *(ulonglong *)(lVar14 + uVar17 * -0x18 + -8);
      if ((uVar16 < *(ulonglong *)(lStack_180 + 0x210)) &&
         (uVar16 = *(ulonglong *)(*(longlong *)(lStack_180 + 0x208) + uVar16 * 8), uVar16 != 0)) {
        lVar14 = ~uVar16 * 0x40;
        if (*(longlong *)(*(longlong *)(lStack_180 + 0x1d8) + 0x20 + lVar14) != 0) {
          uVar13 = *(undefined8 *)(*(longlong *)(lStack_180 + 0x1d8) + lVar14 + 0x10);
          uStack_220 = 0;
          uStack_218 = (undefined6)lStack_b8;
          uStack_212 = (undefined2)((ulonglong)lStack_b8 >> 0x30);
          uStack_160 = SUB82(&uStack_bc,0);
          uStack_15e = (undefined2)((ulonglong)&uStack_bc >> 0x10);
          uStack_15c = (undefined4)((ulonglong)&uStack_bc >> 0x20);
          uStack_158 = (undefined2)uVar13;
          uStack_156 = (undefined2)((ulonglong)uVar13 >> 0x10);
          uStack_154 = (undefined2)((ulonglong)uVar13 >> 0x20);
          uStack_152 = (undefined2)((ulonglong)uVar13 >> 0x30);
          uStack_150 = SUB84(&uStack_178,0);
          bStack_14c = (byte)((ulonglong)&uStack_178 >> 0x20);
          uStack_14b = (undefined1)((ulonglong)&uStack_178 >> 0x28);
          uStack_14a = (undefined2)((ulonglong)&uStack_178 >> 0x30);
          uStack_148 = &uStack_a0;
          puStack_140 = auStack_d8;
          pdb_14175c860(lStack_a8,&UNK_14302a160,0x18,&uStack_220,&uStack_160);
          *(float *)(psVar6 + 4) = *(float *)(lVar15 + 0x58) + *(float *)(psVar6 + 4);
          return;
        }
      }
      goto LAB_1409b48e4;
    }
    uVar20 = (ushort)(uVar19 - 1) & (ushort)uVar19;
    uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar20);
  }
  auVar29[0] = -(auVar31[0] == -1);
  auVar29[1] = -(auVar31[1] == -1);
  auVar29[2] = -(auVar31[2] == -1);
  auVar29[3] = -(auVar31[3] == -1);
  auVar29[4] = -(auVar31[4] == -1);
  auVar29[5] = -(auVar31[5] == -1);
  auVar29[6] = -(auVar31[6] == -1);
  auVar29[7] = -(auVar31[7] == -1);
  auVar29[8] = -(auVar31[8] == -1);
  auVar29[9] = -(auVar31[9] == -1);
  auVar29[10] = -(auVar31[10] == -1);
  auVar29[0xb] = -(auVar31[0xb] == -1);
  auVar29[0xc] = -(auVar31[0xc] == -1);
  auVar29[0xd] = -(auVar31[0xd] == -1);
  auVar29[0xe] = -(auVar31[0xe] == -1);
  auVar29[0xf] = -(auVar31[0xf] == -1);
  if ((((((((((((((((SUB161(auVar29 >> 7,0) & 1) != 0 || (SUB161(auVar29 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar29 >> 0x17,0) & 1) != 0) || (SUB161(auVar29 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar29 >> 0x27,0) & 1) != 0) || (SUB161(auVar29 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar29 >> 0x37,0) & 1) != 0) || (SUB161(auVar29 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar29 >> 0x47,0) & 1) != 0) || (SUB161(auVar29 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar29 >> 0x57,0) & 1) != 0) || (SUB161(auVar29 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar29 >> 0x67,0) & 1) != 0) || (SUB161(auVar29 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar29 >> 0x77,0) & 1) != 0) || auVar29[0xf] < '\0') {
LAB_1409b48e4:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14302a148);
  }
  uVar16 = uVar16 + lVar22 + 0x10;
  lVar22 = lVar22 + 0x10;
  goto LAB_1409b478d;
LAB_1409b3d90:
  auVar26[0] = -(auVar31[0] == -1);
  auVar26[1] = -(auVar31[1] == -1);
  auVar26[2] = -(auVar31[2] == -1);
  auVar26[3] = -(auVar31[3] == -1);
  auVar26[4] = -(auVar31[4] == -1);
  auVar26[5] = -(auVar31[5] == -1);
  auVar26[6] = -(auVar31[6] == -1);
  auVar26[7] = -(auVar31[7] == -1);
  auVar26[8] = -(auVar31[8] == -1);
  auVar26[9] = -(auVar31[9] == -1);
  auVar26[10] = -(auVar31[10] == -1);
  auVar26[0xb] = -(auVar31[0xb] == -1);
  auVar26[0xc] = -(auVar31[0xc] == -1);
  auVar26[0xd] = -(auVar31[0xd] == -1);
  auVar26[0xe] = -(auVar31[0xe] == -1);
  auVar26[0xf] = -(auVar31[0xf] == -1);
  if ((((((((((((((((SUB161(auVar26 >> 7,0) & 1) != 0 || (SUB161(auVar26 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar26 >> 0x17,0) & 1) != 0) || (SUB161(auVar26 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar26 >> 0x27,0) & 1) != 0) || (SUB161(auVar26 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar26 >> 0x37,0) & 1) != 0) || (SUB161(auVar26 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar26 >> 0x47,0) & 1) != 0) || (SUB161(auVar26 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar26 >> 0x57,0) & 1) != 0) || (SUB161(auVar26 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar26 >> 0x67,0) & 1) != 0) || (SUB161(auVar26 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar26 >> 0x77,0) & 1) != 0) || auVar26[0xf] < '\0') {
LAB_1409b3eab:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14302a010);
  }
  uVar17 = uVar17 + lVar15 + 0x10;
  lVar15 = lVar15 + 0x10;
  goto LAB_1409b3d45;
LAB_1409b3ca4:
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
LAB_1409b3e9f:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143029ff8);
  }
  uVar17 = uVar17 + lVar22 + 0x10;
  lVar22 = lVar22 + 0x10;
  goto LAB_1409b3c53;
LAB_1409b3e31:
  uVar17 = uVar17 & uVar16;
  auVar31 = *(undefined1 (*) [16])(lVar14 + uVar17);
  auVar37[0] = -(auVar31[0] == DAT_142e33cf0);
  auVar37[1] = -(auVar31[1] == DAT_142e33cf0._1_1_);
  auVar37[2] = -(auVar31[2] == DAT_142e33cf0._2_1_);
  auVar37[3] = -(auVar31[3] == DAT_142e33cf0._3_1_);
  auVar37[4] = -(auVar31[4] == DAT_142e33cf0._4_1_);
  auVar37[5] = -(auVar31[5] == DAT_142e33cf0._5_1_);
  auVar37[6] = -(auVar31[6] == DAT_142e33cf0._6_1_);
  auVar37[7] = -(auVar31[7] == DAT_142e33cf0._7_1_);
  auVar37[8] = -(auVar31[8] == DAT_142e33cf0._8_1_);
  auVar37[9] = -(auVar31[9] == DAT_142e33cf0._9_1_);
  auVar37[10] = -(auVar31[10] == DAT_142e33cf0._10_1_);
  auVar37[0xb] = -(auVar31[0xb] == DAT_142e33cf0._11_1_);
  auVar37[0xc] = -(auVar31[0xc] == DAT_142e33cf0._12_1_);
  auVar37[0xd] = -(auVar31[0xd] == DAT_142e33cf0._13_1_);
  auVar37[0xe] = -(auVar31[0xe] == DAT_142e33cf0._14_1_);
  auVar37[0xf] = -(auVar31[0xf] == DAT_142e33cf0._15_1_);
  uVar20 = (ushort)(SUB161(auVar37 >> 7,0) & 1) | (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe | (ushort)(auVar37[0xf] >> 7) << 0xf;
  uVar19 = (uint)uVar20;
  while( true ) {
    if (uVar20 == 0) goto LAB_1409b3e82;
    uVar7 = 0;
    for (uVar8 = uVar19; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    uVar21 = uVar7 + uVar17 & uVar16;
    pcVar1 = (char *)(lVar14 + -0x18 + uVar21 * -0x18);
    auVar38[0] = -(*pcVar1 == DAT_142e34940);
    auVar38[1] = -(pcVar1[1] == DAT_142e34940._1_1_);
    auVar38[2] = -(pcVar1[2] == DAT_142e34940._2_1_);
    auVar38[3] = -(pcVar1[3] == DAT_142e34940._3_1_);
    auVar38[4] = -(pcVar1[4] == DAT_142e34940._4_1_);
    auVar38[5] = -(pcVar1[5] == DAT_142e34940._5_1_);
    auVar38[6] = -(pcVar1[6] == DAT_142e34940._6_1_);
    auVar38[7] = -(pcVar1[7] == DAT_142e34940._7_1_);
    auVar38[8] = -(pcVar1[8] == DAT_142e34940._8_1_);
    auVar38[9] = -(pcVar1[9] == DAT_142e34940._9_1_);
    auVar38[10] = -(pcVar1[10] == DAT_142e34940._10_1_);
    auVar38[0xb] = -(pcVar1[0xb] == DAT_142e34940._11_1_);
    auVar38[0xc] = -(pcVar1[0xc] == DAT_142e34940._12_1_);
    auVar38[0xd] = -(pcVar1[0xd] == DAT_142e34940._13_1_);
    auVar38[0xe] = -(pcVar1[0xe] == DAT_142e34940._14_1_);
    auVar38[0xf] = -(pcVar1[0xf] == DAT_142e34940._15_1_);
    if ((ushort)((ushort)(SUB161(auVar38 >> 7,0) & 1) | (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe | (ushort)(auVar38[0xf] >> 7) << 0xf
                ) == 0xffff) break;
    uVar20 = (ushort)(uVar19 - 1) & (ushort)uVar19;
    uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar20);
  }
  uVar16 = *(ulonglong *)(lVar14 + uVar21 * -0x18 + -8);
  if (((*(ulonglong *)(param_2 + 0x210) <= uVar16) ||
      (uVar16 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar16 * 8), uVar16 == 0)) ||
     (lVar14 = ~uVar16 * 0x40, *(longlong *)(lVar15 + 0x20 + lVar14) == 0)) goto LAB_1409b4714;
  cVar23 = *(int *)(*(longlong *)(lVar15 + lVar14 + 0x10) + 0x108) == 0;
LAB_1409b3f01:
  if (param_6 == '\0') {
    *psVar6 = 1;
    return;
  }
  if (*psVar6 != 0) {
    psVar6[0] = 0;
    psVar6[1] = 0;
    psVar6[4] = 0;
    psVar6[5] = 0;
    psVar6[8] = 0;
    psVar6[9] = 0;
    psVar6[10] = 0;
    psVar6[0xb] = 0;
  }
  if ((bool)cVar23 != false) {
    psVar6[1] = 0;
    psVar6[8] = 0;
    psVar6[9] = 0;
    psVar6[10] = 0;
    psVar6[0xb] = 0;
    psVar6[4] = 0;
    psVar6[5] = 0;
  }
  lStack_180 = param_2;
  lStack_b8 = param_3;
  lStack_b0 = param_4;
  if ((*(uint *)(psVar6 + 1) & 1) == 0) {
    if (*(ushort *)(param_3 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc84f0(&UNK_14302a130);
    }
    uVar19 = (uint)(((ulonglong)*(ushort *)(param_3 + 8) << 8) /
                   (ulonglong)*(ushort *)(param_3 + 10)) & 0xffff | 0x1000000;
  }
  else {
    uVar19 = (uint)(CONCAT24(psVar6[3],*(uint *)(psVar6 + 1)) >> 0x10);
  }
  uStack_220 = 0;
  uStack_21c._0_2_ = (undefined2)uVar19;
  uVar10 = (undefined2)uStack_21c;
  uStack_21c._2_2_ = (undefined2)(uVar19 >> 0x10);
  uVar11 = uStack_21c._2_2_;
  uStack_218 = 0x11800010001;
  uStack_212 = 0x125;
  uStack_210 = 2;
  pdb_141749b70(&uStack_160,param_1,&UNK_14302a040,0x10,&uStack_220);
  if (CONCAT22(uStack_15e,uStack_160) == 1) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14302a418,0x2b,&uStack_220,&UNK_14302a3f8,&UNK_14302a050);
  }
  uStack_188 = (undefined6)
               CONCAT44((undefined4)uStack_148,CONCAT22(uStack_14a,CONCAT11(uStack_14b,bStack_14c)))
  ;
  uStack_182 = (undefined2)((uint)(undefined4)uStack_148 >> 0x10);
  uStack_190 = CONCAT22(uStack_152,uStack_154);
  uStack_18c = (undefined2)uStack_150;
  uStack_18a = (undefined2)((uint)uStack_150 >> 0x10);
  bVar12 = uStack_148._4_1_;
  uStack_220 = 0;
  uStack_218 = 0x11800010001;
  uStack_212 = 0x14c;
  uStack_210 = 2;
  uStack_21c._0_2_ = uVar10;
  uStack_21c._2_2_ = uVar11;
  pdb_141749b70(&uStack_160,param_1,&UNK_14302a068,0x16,&uStack_220);
  if (CONCAT22(uStack_15e,uStack_160) == 1) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14302a418,0x2b,&uStack_220,&UNK_14302a3f8,&UNK_14302a080);
  }
  if ((psVar6[1] == 0) || ((bVar12 & uStack_148._4_1_ & 1) == 0)) {
    uStack_218 = uStack_188;
    uStack_220 = uStack_190;
    uStack_21c._0_2_ = uStack_18c;
    uStack_21c._2_2_ = uStack_18a;
    uStack_160 = 0;
    uStack_15e = (undefined2)uStack_190;
    uStack_15c = (undefined4)(CONCAT24(uStack_18c,uStack_190) >> 0x10);
    uStack_158 = uStack_18a;
    uStack_156 = (undefined2)uStack_188;
    uStack_154 = (undefined2)((uint6)uStack_188 >> 0x10);
    uStack_152 = (undefined2)((uint6)uStack_188 >> 0x20);
    uStack_150 = 0x4302a098;
    bStack_14c = 1;
    uStack_14b = 0;
    uStack_14a = 0;
    uStack_148._0_4_ = 0xd;
    uStack_148._4_4_ = 0;
    uStack_15c = pdb_140e2b4e0(param_1,&uStack_160);
    uStack_150 = (undefined4)uStack_218;
    bStack_14c = (byte)((uint6)uStack_218 >> 0x20);
    uStack_14b = (undefined1)((uint6)uStack_218 >> 0x28);
    uStack_158 = (undefined2)uStack_220;
    uStack_156 = (undefined2)((uint)uStack_220 >> 0x10);
    uStack_154 = (undefined2)uStack_21c;
    uStack_152 = uStack_21c._2_2_;
    uStack_160 = 0;
    uStack_15e = 0;
    if (*(char *)(param_1 + 0x24c) == '\x01') {
      pdb_140e19620(&uStack_160,param_1);
    }
    uStack_168 = CONCAT26(uStack_14a,CONCAT15(uStack_14b,CONCAT14(bStack_14c,uStack_150)));
    uStack_178 = CONCAT44(uStack_15c,CONCAT22(uStack_15e,uStack_160));
    uStack_170 = CONCAT26(uStack_152,CONCAT24(uStack_154,CONCAT22(uStack_156,uStack_158)));
    cStack_71 = cVar23;
    if (4 < *_DAT_143ca8e90) {
      uStack_160 = 0;
      uStack_15e = 0;
      uStack_15c = 0;
      uStack_158 = 0xa0bf;
      uStack_156 = 0x4302;
      uStack_154 = 1;
      uStack_152 = 0;
      uStack_150 = 0x2d;
      bStack_14c = 0;
      uStack_14b = 0;
      uStack_14a = 0;
      uStack_148._0_4_ = 0;
      uStack_148._4_4_ = 0;
      puStack_140 = (ulonglong *)&UNK_143029fa2;
      uStack_138 = 0x3c;
      uStack_130 = 5;
      puStack_128 = &UNK_14302a0bf;
      uStack_120 = 0x2d;
      uStack_118 = 0x8d00000001;
      puStack_110 = &UNK_14302a0a5;
      uStack_108 = 0x35;
      pdb_140f332f0(&uStack_72,&uStack_160);
    }
    auStack_d8[0] = 0;
    auStack_d8[1] = 8;
    auStack_d8[2] = 0;
    uVar13 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_143330ecf,0x2a,auStack_d8);
    pdb_140e291c0(&uStack_160,&UNK_143330ecf,0x2a,uVar13,param_1);
    uStack_a0 = (undefined8 *)param_5;
    uStack_98 = (undefined1 *)lStack_b8;
    puStack_90 = (undefined1 *)lStack_b0;
    puStack_88 = auStack_238;
    puStack_80 = &uStack_178;
    pdb_1417a3840(&uStack_220,&uStack_160,&uStack_a0);
    pub_142e32760(&uStack_160,&uStack_220,0x88);
    uStack_98 = (undefined1 *)CONCAT44(1,uVar19 >> 0x10);
    uStack_a0 = (undefined8 *)CONCAT44(uVar19 & 0xffff,1);
    pdb_140e28810(&uStack_160,&uStack_a0);
    uStack_a0 = (undefined8 *)0x0;
    uStack_98 = (undefined1 *)0x8;
    puStack_90 = (undefined1 *)0x0;
    uVar13 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_143330d1f,0x2b,&uStack_a0);
    pdb_140e291c0(&uStack_160,&UNK_143330d1f,0x2b,uVar13,param_1);
    pdb_14179c000(&uStack_220,&uStack_160,&uStack_178,auStack_198);
    pub_142e32760(&uStack_160,&uStack_220,0x88);
    uStack_98 = (undefined1 *)CONCAT44(1,uVar19 >> 0x10);
    uStack_a0 = (undefined8 *)CONCAT44(uVar19 & 0xffff,1);
    pdb_140e28810(&uStack_160,&uStack_a0);
    psVar6[1] = 1;
    *(undefined4 *)(psVar6 + 2) = uStack_190;
    cVar23 = cStack_71;
  }
  uVar13 = pdb_140e1d1f0(0x4000,0x30,1);
  pdb_141748d40(&uStack_160,param_1,&UNK_14302a0ec,0x11,uVar13);
  lVar14 = lStack_a8;
  if (bStack_14c == 2) {
    uStack_220 = CONCAT22(uStack_15e,uStack_160);
    uStack_21c._0_2_ = (undefined2)uStack_15c;
    uStack_21c._2_2_ = (undefined2)((uint)uStack_15c >> 0x10);
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14302a418,0x2b,&uStack_220,&UNK_14302a3f8,&UNK_14302a100);
  }
  uStack_168 = CONCAT44(uStack_168._4_4_,uStack_150);
  uStack_178 = CONCAT44(uStack_15c,CONCAT22(uStack_15e,uStack_160));
  uStack_170 = CONCAT26(uStack_152,CONCAT24(uStack_154,CONCAT22(uStack_156,uStack_158)));
  if ((bStack_14c & 1) == 0) {
    psVar6[8] = 0;
    psVar6[9] = 0;
    psVar6[10] = 0;
    psVar6[0xb] = 0;
  }
  if (*(longlong *)(lStack_180 + 0x88) != 0) {
    lVar15 = *(longlong *)(lStack_180 + 0x70);
    uVar16 = 0x48f17fe91d0a91c1;
    lVar22 = 0;
    while( true ) {
      uVar16 = uVar16 & *(ulonglong *)(lStack_180 + 0x78);
      pcVar1 = (char *)(lVar15 + uVar16);
      auVar39[0] = -(*pcVar1 == DAT_142e342d0);
      auVar39[1] = -(pcVar1[1] == DAT_142e342d0._1_1_);
      auVar39[2] = -(pcVar1[2] == DAT_142e342d0._2_1_);
      auVar39[3] = -(pcVar1[3] == DAT_142e342d0._3_1_);
      auVar39[4] = -(pcVar1[4] == DAT_142e342d0._4_1_);
      auVar39[5] = -(pcVar1[5] == DAT_142e342d0._5_1_);
      auVar39[6] = -(pcVar1[6] == DAT_142e342d0._6_1_);
      auVar39[7] = -(pcVar1[7] == DAT_142e342d0._7_1_);
      auVar39[8] = -(pcVar1[8] == DAT_142e342d0._8_1_);
      auVar39[9] = -(pcVar1[9] == DAT_142e342d0._9_1_);
      auVar39[10] = -(pcVar1[10] == DAT_142e342d0._10_1_);
      auVar39[0xb] = -(pcVar1[0xb] == DAT_142e342d0._11_1_);
      auVar39[0xc] = -(pcVar1[0xc] == DAT_142e342d0._12_1_);
      auVar39[0xd] = -(pcVar1[0xd] == DAT_142e342d0._13_1_);
      auVar39[0xe] = -(pcVar1[0xe] == DAT_142e342d0._14_1_);
      auVar39[0xf] = -(pcVar1[0xf] == DAT_142e342d0._15_1_);
      uVar20 = (ushort)(SUB161(auVar39 >> 7,0) & 1) | (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
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
               (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe | (ushort)(auVar39[0xf] >> 7) << 0xf;
      uVar19 = (uint)uVar20;
      while (uVar20 != 0) {
        uVar7 = 0;
        for (uVar8 = uVar19; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        uVar17 = uVar7 + uVar16 & *(ulonglong *)(lStack_180 + 0x78);
        pcVar2 = (char *)(lVar15 + -0x18 + uVar17 * -0x18);
        auVar40[0] = -(*pcVar2 == DAT_142e34370);
        auVar40[1] = -(pcVar2[1] == UNK_142e34371);
        auVar40[2] = -(pcVar2[2] == UNK_142e34372);
        auVar40[3] = -(pcVar2[3] == UNK_142e34373);
        auVar40[4] = -(pcVar2[4] == UNK_142e34374);
        auVar40[5] = -(pcVar2[5] == UNK_142e34375);
        auVar40[6] = -(pcVar2[6] == UNK_142e34376);
        auVar40[7] = -(pcVar2[7] == UNK_142e34377);
        auVar40[8] = -(pcVar2[8] == UNK_142e34378);
        auVar40[9] = -(pcVar2[9] == UNK_142e34379);
        auVar40[10] = -(pcVar2[10] == UNK_142e3437a);
        auVar40[0xb] = -(pcVar2[0xb] == UNK_142e3437b);
        auVar40[0xc] = -(pcVar2[0xc] == UNK_142e3437c);
        auVar40[0xd] = -(pcVar2[0xd] == UNK_142e3437d);
        auVar40[0xe] = -(pcVar2[0xe] == UNK_142e3437e);
        auVar40[0xf] = -(pcVar2[0xf] == UNK_142e3437f);
        if ((ushort)((ushort)(SUB161(auVar40 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar40[0xf] >> 7) << 0xf) == 0xffff) {
          uVar16 = *(ulonglong *)(lVar15 + uVar17 * -0x18 + -8);
          if ((*(ulonglong *)(lStack_180 + 0x210) <= uVar16) ||
             (uVar16 = *(ulonglong *)(*(longlong *)(lStack_180 + 0x208) + uVar16 * 8), uVar16 == 0))
          goto LAB_1409b4720;
          lVar15 = ~uVar16 * 0x40;
          if (*(longlong *)(*(longlong *)(lStack_180 + 0x1d8) + 0x20 + lVar15) == 0)
          goto LAB_1409b4720;
          dVar4 = *(double *)(psVar6 + 8);
          uVar16 = (longlong)dVar4 >> 0x3f & (longlong)(dVar4 - _DAT_142f3e5d0) | (longlong)dVar4;
          if (dVar4 < 0.0) {
            uVar16 = 0;
          }
          if (_DAT_142f3e5d8 < dVar4) {
            uVar16 = 0xffffffffffffffff;
          }
          lVar15 = *(longlong *)(*(longlong *)(lStack_180 + 0x1d8) + lVar15 + 0x10);
          dVar30 = _DAT_143028e28;
          if (cVar23 == '\0') {
            dVar30 = *(double *)(lVar15 + 0x40) * _DAT_143028e20;
          }
          dVar9 = dVar4 + dVar30;
          if (_DAT_143028e28 <= dVar4 + dVar30) {
            dVar9 = _DAT_143028e28;
          }
          uVar17 = (longlong)(dVar9 - _DAT_142f3e5d0) & (longlong)dVar9 >> 0x3f | (longlong)dVar9;
          if (dVar9 < 0.0) {
            uVar17 = 0;
          }
          if (_DAT_142f3e5d8 < dVar9) {
            uVar17 = 0xffffffffffffffff;
          }
          if (uVar17 != uVar16) {
            iVar18 = (int)uVar17 - (int)uVar16;
            uVar3 = *(undefined4 *)(psVar6 + 4);
            auStack_d8[0] = 0;
            auStack_d8[1] = 8;
            auStack_d8[2] = 0;
            lStack_b0 = lVar15;
            uVar13 = pdb_14177be60(*(undefined8 *)(lStack_a8 + 0x208),&UNK_1433310d3,0x2c,auStack_d8
                                  );
            pdb_140e291c0(&uStack_220,&UNK_1433310d3,0x2c,uVar13,lVar14);
            uStack_a0 = &uStack_178;
            uStack_98 = auStack_198;
            puStack_90 = auStack_238;
            puStack_88 = (undefined1 *)CONCAT44(iVar18,(int)uVar16);
            puStack_80 = (undefined8 *)CONCAT44(puStack_80._4_4_,uVar3);
            pdb_1417a0210(&uStack_160,&uStack_220,&uStack_a0);
            lVar15 = lStack_b0;
            uStack_218 = 0x100000001;
            uStack_212 = 0;
            uStack_220 = 1;
            uStack_21c = iVar18;
            pdb_140e28810(&uStack_160,&uStack_220);
          }
          *(double *)(psVar6 + 8) = dVar9;
          uStack_bc = _DAT_142f6e380;
          if (cVar23 == '\0') {
            uStack_bc = *(undefined4 *)(psVar6 + 4);
          }
          uStack_a0 = (undefined8 *)
                      (ulonglong)
                      (CONCAT24((short)((uint)*(undefined4 *)(lStack_b8 + 8) >> 0x10),
                                *(undefined4 *)(lStack_b8 + 8)) & 0xffff0000ffff);
          auStack_d8[0] = uVar17;
          if (*(longlong *)(lStack_180 + 0x88) == 0) goto LAB_1409b48e4;
          lVar14 = *(longlong *)(lStack_180 + 0x70);
          uVar16 = 0x7057b4358e925fdb;
          lVar22 = 0;
          goto LAB_1409b478d;
        }
        uVar20 = (ushort)(uVar19 - 1) & (ushort)uVar19;
        uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar20);
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
      uVar16 = uVar16 + lVar22 + 0x10;
      lVar22 = lVar22 + 0x10;
    }
  }
LAB_1409b4720:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14302a118);
}

