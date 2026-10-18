// VA 0x140b32850, PDB extent 1090 bytes
// country_core::systems::render_loop::compute_passes::spawn_vegetation_around_buildings::spawn_vegetation_around_buildings
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/spawn_vegetation_around_buildings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::spawn_vegetation_around_buildings::spawn_vegetation_around_buildings
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/spawn_vegetation_around_buildings.rs
   Extent: 1090 */

void pdb_140b32850(longlong param_1,longlong param_2)

{
  char *pcVar1;
  char *pcVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  ushort uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined1 auStack_18c [20];
  undefined1 auStack_178 [16];
  undefined4 uStack_168;
  undefined8 uStack_164;
  undefined8 uStack_15c;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar7 = *(longlong *)(param_2 + 0x70);
    uVar3 = *(ulonglong *)(param_2 + 0x78);
    uVar13 = 0x8478cda68354bc3c;
    lVar14 = 0;
    while( true ) {
      uVar13 = uVar13 & uVar3;
      pcVar1 = (char *)(lVar7 + uVar13);
      auVar17[0] = -(*pcVar1 == DAT_142e33ea0);
      auVar17[1] = -(pcVar1[1] == UNK_142e33ea1);
      auVar17[2] = -(pcVar1[2] == UNK_142e33ea2);
      auVar17[3] = -(pcVar1[3] == UNK_142e33ea3);
      auVar17[4] = -(pcVar1[4] == UNK_142e33ea4);
      auVar17[5] = -(pcVar1[5] == UNK_142e33ea5);
      auVar17[6] = -(pcVar1[6] == UNK_142e33ea6);
      auVar17[7] = -(pcVar1[7] == UNK_142e33ea7);
      auVar17[8] = -(pcVar1[8] == UNK_142e33ea8);
      auVar17[9] = -(pcVar1[9] == UNK_142e33ea9);
      auVar17[10] = -(pcVar1[10] == UNK_142e33eaa);
      auVar17[0xb] = -(pcVar1[0xb] == UNK_142e33eab);
      auVar17[0xc] = -(pcVar1[0xc] == UNK_142e33eac);
      auVar17[0xd] = -(pcVar1[0xd] == UNK_142e33ead);
      auVar17[0xe] = -(pcVar1[0xe] == UNK_142e33eae);
      auVar17[0xf] = -(pcVar1[0xf] == UNK_142e33eaf);
      uVar10 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe | (ushort)(auVar17[0xf] >> 7) << 0xf;
      uVar9 = (uint)uVar10;
      while (uVar10 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar9; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar11 = uVar5 + uVar13 & uVar3;
        pcVar2 = (char *)(lVar7 + -0x18 + uVar11 * -0x18);
        auVar18[0] = -(*pcVar2 == DAT_142e33eb0);
        auVar18[1] = -(pcVar2[1] == UNK_142e33eb1);
        auVar18[2] = -(pcVar2[2] == UNK_142e33eb2);
        auVar18[3] = -(pcVar2[3] == UNK_142e33eb3);
        auVar18[4] = -(pcVar2[4] == UNK_142e33eb4);
        auVar18[5] = -(pcVar2[5] == UNK_142e33eb5);
        auVar18[6] = -(pcVar2[6] == UNK_142e33eb6);
        auVar18[7] = -(pcVar2[7] == UNK_142e33eb7);
        auVar18[8] = -(pcVar2[8] == UNK_142e33eb8);
        auVar18[9] = -(pcVar2[9] == UNK_142e33eb9);
        auVar18[10] = -(pcVar2[10] == UNK_142e33eba);
        auVar18[0xb] = -(pcVar2[0xb] == UNK_142e33ebb);
        auVar18[0xc] = -(pcVar2[0xc] == UNK_142e33ebc);
        auVar18[0xd] = -(pcVar2[0xd] == UNK_142e33ebd);
        auVar18[0xe] = -(pcVar2[0xe] == UNK_142e33ebe);
        auVar18[0xf] = -(pcVar2[0xf] == UNK_142e33ebf);
        if ((ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar18[0xf] >> 7) << 0xf) == 0xffff) {
          uVar13 = *(ulonglong *)(lVar7 + uVar11 * -0x18 + -8);
          if (*(ulonglong *)(param_2 + 0x210) <= uVar13) goto LAB_140b329ee;
          uVar13 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar13 * 8);
          if (uVar13 == 0) goto LAB_140b329ee;
          lVar14 = *(longlong *)(param_2 + 0x1d8);
          lVar12 = ~uVar13 * 0x40;
          if (*(longlong *)(lVar14 + 0x20 + lVar12) == 0) goto LAB_140b329ee;
          if (*(char *)(*(longlong *)(lVar12 + lVar14 + 0x10) + 0x24) != '\x01') {
            return;
          }
          uVar13 = 0x1d6a82b468dfb8a2;
          lVar12 = 0;
          goto LAB_140b32986;
        }
        uVar10 = (ushort)(uVar9 - 1) & (ushort)uVar9;
        uVar9 = CONCAT22((short)(uVar9 - 1 >> 0x10),uVar10);
      }
      auVar15[0] = -(*pcVar1 == -1);
      auVar15[1] = -(pcVar1[1] == -1);
      auVar15[2] = -(pcVar1[2] == -1);
      auVar15[3] = -(pcVar1[3] == -1);
      auVar15[4] = -(pcVar1[4] == -1);
      auVar15[5] = -(pcVar1[5] == -1);
      auVar15[6] = -(pcVar1[6] == -1);
      auVar15[7] = -(pcVar1[7] == -1);
      auVar15[8] = -(pcVar1[8] == -1);
      auVar15[9] = -(pcVar1[9] == -1);
      auVar15[10] = -(pcVar1[10] == -1);
      auVar15[0xb] = -(pcVar1[0xb] == -1);
      auVar15[0xc] = -(pcVar1[0xc] == -1);
      auVar15[0xd] = -(pcVar1[0xd] == -1);
      auVar15[0xe] = -(pcVar1[0xe] == -1);
      auVar15[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar15 >> 7,0) & 1) != 0 || (SUB161(auVar15 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar15 >> 0x17,0) & 1) != 0) || (SUB161(auVar15 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar15 >> 0x27,0) & 1) != 0) || (SUB161(auVar15 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar15 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar15 >> 0x3f,0) & 1) != 0) || (SUB161(auVar15 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar15 >> 0x4f,0) & 1) != 0) || (SUB161(auVar15 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar15 >> 0x5f,0) & 1) != 0) || (SUB161(auVar15 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar15 >> 0x6f,0) & 1) != 0) || (SUB161(auVar15 >> 0x77,0) & 1) != 0) ||
          auVar15[0xf] < '\0') break;
      uVar13 = uVar13 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
LAB_140b329ee:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143057c58);
LAB_140b32986:
  uVar13 = uVar13 & uVar3;
  auVar17 = *(undefined1 (*) [16])(lVar7 + uVar13);
  auVar19[0] = -(auVar17[0] == DAT_142e34ec0);
  auVar19[1] = -(auVar17[1] == DAT_142e34ec0._1_1_);
  auVar19[2] = -(auVar17[2] == DAT_142e34ec0._2_1_);
  auVar19[3] = -(auVar17[3] == DAT_142e34ec0._3_1_);
  auVar19[4] = -(auVar17[4] == DAT_142e34ec0._4_1_);
  auVar19[5] = -(auVar17[5] == DAT_142e34ec0._5_1_);
  auVar19[6] = -(auVar17[6] == DAT_142e34ec0._6_1_);
  auVar19[7] = -(auVar17[7] == DAT_142e34ec0._7_1_);
  auVar19[8] = -(auVar17[8] == DAT_142e34ec0._8_1_);
  auVar19[9] = -(auVar17[9] == DAT_142e34ec0._9_1_);
  auVar19[10] = -(auVar17[10] == DAT_142e34ec0._10_1_);
  auVar19[0xb] = -(auVar17[0xb] == DAT_142e34ec0._11_1_);
  auVar19[0xc] = -(auVar17[0xc] == DAT_142e34ec0._12_1_);
  auVar19[0xd] = -(auVar17[0xd] == DAT_142e34ec0._13_1_);
  auVar19[0xe] = -(auVar17[0xe] == DAT_142e34ec0._14_1_);
  auVar19[0xf] = -(auVar17[0xf] == DAT_142e34ec0._15_1_);
  uVar10 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe | (ushort)(auVar19[0xf] >> 7) << 0xf;
  uVar9 = (uint)uVar10;
  while (uVar10 != 0) {
    uVar5 = 0;
    for (uVar6 = uVar9; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    uVar11 = uVar5 + uVar13 & uVar3;
    pcVar1 = (char *)(lVar7 + -0x18 + uVar11 * -0x18);
    auVar20[0] = -(*pcVar1 == DAT_142e60e60);
    auVar20[1] = -(pcVar1[1] == DAT_142e60e60._1_1_);
    auVar20[2] = -(pcVar1[2] == DAT_142e60e60._2_1_);
    auVar20[3] = -(pcVar1[3] == DAT_142e60e60._3_1_);
    auVar20[4] = -(pcVar1[4] == DAT_142e60e60._4_1_);
    auVar20[5] = -(pcVar1[5] == DAT_142e60e60._5_1_);
    auVar20[6] = -(pcVar1[6] == DAT_142e60e60._6_1_);
    auVar20[7] = -(pcVar1[7] == DAT_142e60e60._7_1_);
    auVar20[8] = -(pcVar1[8] == DAT_142e60e60._8_1_);
    auVar20[9] = -(pcVar1[9] == DAT_142e60e60._9_1_);
    auVar20[10] = -(pcVar1[10] == DAT_142e60e60._10_1_);
    auVar20[0xb] = -(pcVar1[0xb] == DAT_142e60e60._11_1_);
    auVar20[0xc] = -(pcVar1[0xc] == DAT_142e60e60._12_1_);
    auVar20[0xd] = -(pcVar1[0xd] == DAT_142e60e60._13_1_);
    auVar20[0xe] = -(pcVar1[0xe] == DAT_142e60e60._14_1_);
    auVar20[0xf] = -(pcVar1[0xf] == DAT_142e60e60._15_1_);
    if ((ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe | (ushort)(auVar20[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar3 = *(ulonglong *)(lVar7 + uVar11 * -0x18 + -8);
      if (((uVar3 < *(ulonglong *)(param_2 + 0x210)) &&
          (uVar3 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar3 * 8), uVar3 != 0)) &&
         (lVar7 = ~uVar3 * 0x40, *(longlong *)(lVar14 + 0x20 + lVar7) != 0)) {
        uVar4 = *(undefined8 *)(lVar14 + lVar7 + 0x10);
        pdb_14152dbc0(auStack_18c,uVar4,param_1);
        pdb_14152a1f0(&uStack_150,uVar4,param_1);
        pdb_14152b6c0(&uStack_c8,uVar4,param_1);
        uStack_168 = uStack_140;
        uStack_164 = uStack_c8;
        uStack_15c = uStack_c0;
        uStack_154 = uStack_b8;
        uStack_1d0 = 0;
        uStack_1c8 = 8;
        uStack_1c0 = 0;
        uVar8 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_143331d33,0x2f,&uStack_1d0);
        pdb_140e291c0(&uStack_150,&UNK_143331d33,0x2f,uVar8,param_1);
        uStack_1a0 = 0x5a0000005a;
        uStack_198 = 9;
        puStack_1b8 = &uStack_164;
        puStack_1b0 = auStack_18c;
        puStack_1a8 = auStack_178;
        pdb_141786fc0(&uStack_c8,&uStack_150,&puStack_1b8);
        uStack_14c = 0x5a;
        uStack_148 = 0x5a;
        uStack_144 = 1;
        uStack_150 = 1;
        pdb_140e28810(&uStack_c8,&uStack_150);
        uStack_1d0 = 0;
        uStack_1c8 = 8;
        uStack_1c0 = 0;
        uVar8 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_143331b42,0x30,&uStack_1d0);
        pdb_140e291c0(&uStack_150,&UNK_143331b42,0x30,uVar8,param_1);
        puStack_1a8 = (undefined1 *)0x9600000096;
        uStack_1a0 = CONCAT44(uStack_1a0._4_4_,10);
        puStack_1b8 = &uStack_164;
        puStack_1b0 = auStack_178;
        pdb_1417869d0(&uStack_c8,&uStack_150,&puStack_1b8);
        uStack_14c = 0x96;
        uStack_148 = 0x96;
        uStack_144 = 1;
        uStack_150 = 1;
        pdb_140e28810(&uStack_c8,&uStack_150);
        pdb_14153a400(uVar4,param_1);
        pdb_141538600(uVar4,param_1);
        pdb_141539c80(uVar4,param_1);
        return;
      }
      goto LAB_140b32c85;
    }
    uVar10 = (ushort)(uVar9 - 1) & (ushort)uVar9;
    uVar9 = CONCAT22((short)(uVar9 - 1 >> 0x10),uVar10);
  }
  auVar16[0] = -(auVar17[0] == -1);
  auVar16[1] = -(auVar17[1] == -1);
  auVar16[2] = -(auVar17[2] == -1);
  auVar16[3] = -(auVar17[3] == -1);
  auVar16[4] = -(auVar17[4] == -1);
  auVar16[5] = -(auVar17[5] == -1);
  auVar16[6] = -(auVar17[6] == -1);
  auVar16[7] = -(auVar17[7] == -1);
  auVar16[8] = -(auVar17[8] == -1);
  auVar16[9] = -(auVar17[9] == -1);
  auVar16[10] = -(auVar17[10] == -1);
  auVar16[0xb] = -(auVar17[0xb] == -1);
  auVar16[0xc] = -(auVar17[0xc] == -1);
  auVar16[0xd] = -(auVar17[0xd] == -1);
  auVar16[0xe] = -(auVar17[0xe] == -1);
  auVar16[0xf] = -(auVar17[0xf] == -1);
  if ((((((((((((((((SUB161(auVar16 >> 7,0) & 1) != 0 || (SUB161(auVar16 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar16 >> 0x17,0) & 1) != 0) || (SUB161(auVar16 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar16 >> 0x27,0) & 1) != 0) || (SUB161(auVar16 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar16 >> 0x37,0) & 1) != 0) || (SUB161(auVar16 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar16 >> 0x47,0) & 1) != 0) || (SUB161(auVar16 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar16 >> 0x57,0) & 1) != 0) || (SUB161(auVar16 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar16 >> 0x67,0) & 1) != 0) || (SUB161(auVar16 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar16 >> 0x77,0) & 1) != 0) || auVar16[0xf] < '\0') {
LAB_140b32c85:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143057c70);
  }
  uVar13 = uVar13 + lVar12 + 0x10;
  lVar12 = lVar12 + 0x10;
  goto LAB_140b32986;
}

