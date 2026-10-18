// VA 0x14093e7f0, PDB extent 4588 bytes
// country_core::systems::audio::impl$1::add_audio_events
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::audio::impl$1::add_audio_events
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/mod.rs
   Extent: 4588 */

longlong pdb_14093e7f0(longlong param_1)

{
  char *pcVar1;
  char *pcVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ushort uVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
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
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  
  if (*(longlong *)(param_1 + 0x88) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar6 = 0x92cbc73035483f8e;
    lVar7 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(param_1 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar6);
      auVar30[0] = -(*pcVar1 == DAT_142e34260);
      auVar30[1] = -(pcVar1[1] == UNK_142e34261);
      auVar30[2] = -(pcVar1[2] == UNK_142e34262);
      auVar30[3] = -(pcVar1[3] == UNK_142e34263);
      auVar30[4] = -(pcVar1[4] == UNK_142e34264);
      auVar30[5] = -(pcVar1[5] == UNK_142e34265);
      auVar30[6] = -(pcVar1[6] == UNK_142e34266);
      auVar30[7] = -(pcVar1[7] == UNK_142e34267);
      auVar30[8] = -(pcVar1[8] == UNK_142e34268);
      auVar30[9] = -(pcVar1[9] == UNK_142e34269);
      auVar30[10] = -(pcVar1[10] == UNK_142e3426a);
      auVar30[0xb] = -(pcVar1[0xb] == UNK_142e3426b);
      auVar30[0xc] = -(pcVar1[0xc] == UNK_142e3426c);
      auVar30[0xd] = -(pcVar1[0xd] == UNK_142e3426d);
      auVar30[0xe] = -(pcVar1[0xe] == UNK_142e3426e);
      auVar30[0xf] = -(pcVar1[0xf] == UNK_142e3426f);
      uVar9 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
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
      uVar8 = (uint)uVar9;
      while (uVar9 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar10 = uVar4 + uVar6 & *(ulonglong *)(param_1 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar10 * -0x18);
        auVar31[0] = -(*pcVar2 == DAT_143022c10);
        auVar31[1] = -(pcVar2[1] == UNK_143022c11);
        auVar31[2] = -(pcVar2[2] == UNK_143022c12);
        auVar31[3] = -(pcVar2[3] == UNK_143022c13);
        auVar31[4] = -(pcVar2[4] == UNK_143022c14);
        auVar31[5] = -(pcVar2[5] == UNK_143022c15);
        auVar31[6] = -(pcVar2[6] == UNK_143022c16);
        auVar31[7] = -(pcVar2[7] == UNK_143022c17);
        auVar31[8] = -(pcVar2[8] == UNK_143022c18);
        auVar31[9] = -(pcVar2[9] == UNK_143022c19);
        auVar31[10] = -(pcVar2[10] == UNK_143022c1a);
        auVar31[0xb] = -(pcVar2[0xb] == UNK_143022c1b);
        auVar31[0xc] = -(pcVar2[0xc] == UNK_143022c1c);
        auVar31[0xd] = -(pcVar2[0xd] == UNK_143022c1d);
        auVar31[0xe] = -(pcVar2[0xe] == UNK_143022c1e);
        auVar31[0xf] = -(pcVar2[0xf] == UNK_143022c1f);
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
          uVar6 = *(ulonglong *)(lVar3 + uVar10 * -0x18 + -8);
          if (((*(ulonglong *)(param_1 + 0x210) <= uVar6) ||
              (uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar6 * 8), uVar6 == 0)) ||
             (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar6 * 0x40) == 0))
          goto LAB_14093e8e2;
          goto LAB_14093e8f8;
        }
        uVar9 = (ushort)(uVar8 - 1) & (ushort)uVar8;
        uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar9);
      }
      auVar11[0] = -(*pcVar1 == -1);
      auVar11[1] = -(pcVar1[1] == -1);
      auVar11[2] = -(pcVar1[2] == -1);
      auVar11[3] = -(pcVar1[3] == -1);
      auVar11[4] = -(pcVar1[4] == -1);
      auVar11[5] = -(pcVar1[5] == -1);
      auVar11[6] = -(pcVar1[6] == -1);
      auVar11[7] = -(pcVar1[7] == -1);
      auVar11[8] = -(pcVar1[8] == -1);
      auVar11[9] = -(pcVar1[9] == -1);
      auVar11[10] = -(pcVar1[10] == -1);
      auVar11[0xb] = -(pcVar1[0xb] == -1);
      auVar11[0xc] = -(pcVar1[0xc] == -1);
      auVar11[0xd] = -(pcVar1[0xd] == -1);
      auVar11[0xe] = -(pcVar1[0xe] == -1);
      auVar11[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar11 >> 7,0) & 1) != 0 || (SUB161(auVar11 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar11 >> 0x17,0) & 1) != 0) || (SUB161(auVar11 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar11 >> 0x27,0) & 1) != 0) || (SUB161(auVar11 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar11 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar11 >> 0x3f,0) & 1) != 0) || (SUB161(auVar11 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar11 >> 0x4f,0) & 1) != 0) || (SUB161(auVar11 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar11 >> 0x5f,0) & 1) != 0) || (SUB161(auVar11 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar11 >> 0x6f,0) & 1) != 0) || (SUB161(auVar11 >> 0x77,0) & 1) != 0) ||
          auVar11[0xf] < '\0') break;
      uVar6 = uVar6 + lVar7 + 0x10;
      lVar7 = lVar7 + 0x10;
    }
  }
LAB_14093e8e2:
  pdb_1418e19f0(param_1);
  if (*(longlong *)(param_1 + 0x88) != 0) {
LAB_14093e8f8:
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar6 = 0x4fe705c632ba9dce;
    lVar7 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(param_1 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar6);
      auVar32[0] = -(*pcVar1 == DAT_142e3d9d0);
      auVar32[1] = -(pcVar1[1] == DAT_142e3d9d0._1_1_);
      auVar32[2] = -(pcVar1[2] == DAT_142e3d9d0._2_1_);
      auVar32[3] = -(pcVar1[3] == DAT_142e3d9d0._3_1_);
      auVar32[4] = -(pcVar1[4] == DAT_142e3d9d0._4_1_);
      auVar32[5] = -(pcVar1[5] == DAT_142e3d9d0._5_1_);
      auVar32[6] = -(pcVar1[6] == DAT_142e3d9d0._6_1_);
      auVar32[7] = -(pcVar1[7] == DAT_142e3d9d0._7_1_);
      auVar32[8] = -(pcVar1[8] == DAT_142e3d9d0._8_1_);
      auVar32[9] = -(pcVar1[9] == DAT_142e3d9d0._9_1_);
      auVar32[10] = -(pcVar1[10] == DAT_142e3d9d0._10_1_);
      auVar32[0xb] = -(pcVar1[0xb] == DAT_142e3d9d0._11_1_);
      auVar32[0xc] = -(pcVar1[0xc] == DAT_142e3d9d0._12_1_);
      auVar32[0xd] = -(pcVar1[0xd] == DAT_142e3d9d0._13_1_);
      auVar32[0xe] = -(pcVar1[0xe] == DAT_142e3d9d0._14_1_);
      auVar32[0xf] = -(pcVar1[0xf] == DAT_142e3d9d0._15_1_);
      uVar9 = (ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
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
      uVar8 = (uint)uVar9;
      while (uVar9 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar10 = uVar4 + uVar6 & *(ulonglong *)(param_1 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar10 * -0x18);
        auVar33[0] = -(*pcVar2 == DAT_143022c20);
        auVar33[1] = -(pcVar2[1] == UNK_143022c21);
        auVar33[2] = -(pcVar2[2] == UNK_143022c22);
        auVar33[3] = -(pcVar2[3] == UNK_143022c23);
        auVar33[4] = -(pcVar2[4] == UNK_143022c24);
        auVar33[5] = -(pcVar2[5] == UNK_143022c25);
        auVar33[6] = -(pcVar2[6] == UNK_143022c26);
        auVar33[7] = -(pcVar2[7] == UNK_143022c27);
        auVar33[8] = -(pcVar2[8] == UNK_143022c28);
        auVar33[9] = -(pcVar2[9] == UNK_143022c29);
        auVar33[10] = -(pcVar2[10] == UNK_143022c2a);
        auVar33[0xb] = -(pcVar2[0xb] == UNK_143022c2b);
        auVar33[0xc] = -(pcVar2[0xc] == UNK_143022c2c);
        auVar33[0xd] = -(pcVar2[0xd] == UNK_143022c2d);
        auVar33[0xe] = -(pcVar2[0xe] == UNK_143022c2e);
        auVar33[0xf] = -(pcVar2[0xf] == UNK_143022c2f);
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
          uVar6 = *(ulonglong *)(lVar3 + uVar10 * -0x18 + -8);
          if (((*(ulonglong *)(param_1 + 0x210) <= uVar6) ||
              (uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar6 * 8), uVar6 == 0)) ||
             (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar6 * 0x40) == 0))
          goto LAB_14093e9d2;
          goto LAB_14093e9e8;
        }
        uVar9 = (ushort)(uVar8 - 1) & (ushort)uVar8;
        uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar9);
      }
      auVar12[0] = -(*pcVar1 == -1);
      auVar12[1] = -(pcVar1[1] == -1);
      auVar12[2] = -(pcVar1[2] == -1);
      auVar12[3] = -(pcVar1[3] == -1);
      auVar12[4] = -(pcVar1[4] == -1);
      auVar12[5] = -(pcVar1[5] == -1);
      auVar12[6] = -(pcVar1[6] == -1);
      auVar12[7] = -(pcVar1[7] == -1);
      auVar12[8] = -(pcVar1[8] == -1);
      auVar12[9] = -(pcVar1[9] == -1);
      auVar12[10] = -(pcVar1[10] == -1);
      auVar12[0xb] = -(pcVar1[0xb] == -1);
      auVar12[0xc] = -(pcVar1[0xc] == -1);
      auVar12[0xd] = -(pcVar1[0xd] == -1);
      auVar12[0xe] = -(pcVar1[0xe] == -1);
      auVar12[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar12 >> 7,0) & 1) != 0 || (SUB161(auVar12 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar12 >> 0x17,0) & 1) != 0) || (SUB161(auVar12 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar12 >> 0x27,0) & 1) != 0) || (SUB161(auVar12 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar12 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar12 >> 0x3f,0) & 1) != 0) || (SUB161(auVar12 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar12 >> 0x4f,0) & 1) != 0) || (SUB161(auVar12 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar12 >> 0x5f,0) & 1) != 0) || (SUB161(auVar12 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar12 >> 0x6f,0) & 1) != 0) || (SUB161(auVar12 >> 0x77,0) & 1) != 0) ||
          auVar12[0xf] < '\0') break;
      uVar6 = uVar6 + lVar7 + 0x10;
      lVar7 = lVar7 + 0x10;
    }
  }
LAB_14093e9d2:
  pdb_1418e43f0(param_1);
  if (*(longlong *)(param_1 + 0x88) != 0) {
LAB_14093e9e8:
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar6 = 0xb2d0e784c6a35745;
    lVar7 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(param_1 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar6);
      auVar34[0] = -(*pcVar1 == DAT_142e34020);
      auVar34[1] = -(pcVar1[1] == DAT_142e34020._1_1_);
      auVar34[2] = -(pcVar1[2] == DAT_142e34020._2_1_);
      auVar34[3] = -(pcVar1[3] == DAT_142e34020._3_1_);
      auVar34[4] = -(pcVar1[4] == DAT_142e34020._4_1_);
      auVar34[5] = -(pcVar1[5] == DAT_142e34020._5_1_);
      auVar34[6] = -(pcVar1[6] == DAT_142e34020._6_1_);
      auVar34[7] = -(pcVar1[7] == DAT_142e34020._7_1_);
      auVar34[8] = -(pcVar1[8] == DAT_142e34020._8_1_);
      auVar34[9] = -(pcVar1[9] == DAT_142e34020._9_1_);
      auVar34[10] = -(pcVar1[10] == DAT_142e34020._10_1_);
      auVar34[0xb] = -(pcVar1[0xb] == DAT_142e34020._11_1_);
      auVar34[0xc] = -(pcVar1[0xc] == DAT_142e34020._12_1_);
      auVar34[0xd] = -(pcVar1[0xd] == DAT_142e34020._13_1_);
      auVar34[0xe] = -(pcVar1[0xe] == DAT_142e34020._14_1_);
      auVar34[0xf] = -(pcVar1[0xf] == DAT_142e34020._15_1_);
      uVar9 = (ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
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
      uVar8 = (uint)uVar9;
      while (uVar9 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar10 = uVar4 + uVar6 & *(ulonglong *)(param_1 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar10 * -0x18);
        auVar35[0] = -(*pcVar2 == DAT_143022c30);
        auVar35[1] = -(pcVar2[1] == UNK_143022c31);
        auVar35[2] = -(pcVar2[2] == UNK_143022c32);
        auVar35[3] = -(pcVar2[3] == UNK_143022c33);
        auVar35[4] = -(pcVar2[4] == UNK_143022c34);
        auVar35[5] = -(pcVar2[5] == UNK_143022c35);
        auVar35[6] = -(pcVar2[6] == UNK_143022c36);
        auVar35[7] = -(pcVar2[7] == UNK_143022c37);
        auVar35[8] = -(pcVar2[8] == UNK_143022c38);
        auVar35[9] = -(pcVar2[9] == UNK_143022c39);
        auVar35[10] = -(pcVar2[10] == UNK_143022c3a);
        auVar35[0xb] = -(pcVar2[0xb] == UNK_143022c3b);
        auVar35[0xc] = -(pcVar2[0xc] == UNK_143022c3c);
        auVar35[0xd] = -(pcVar2[0xd] == UNK_143022c3d);
        auVar35[0xe] = -(pcVar2[0xe] == UNK_143022c3e);
        auVar35[0xf] = -(pcVar2[0xf] == UNK_143022c3f);
        if ((ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar35[0xf] >> 7) << 0xf) == 0xffff) {
          uVar6 = *(ulonglong *)(lVar3 + uVar10 * -0x18 + -8);
          if (((*(ulonglong *)(param_1 + 0x210) <= uVar6) ||
              (uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar6 * 8), uVar6 == 0)) ||
             (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar6 * 0x40) == 0))
          goto LAB_14093eac2;
          goto LAB_14093ead8;
        }
        uVar9 = (ushort)(uVar8 - 1) & (ushort)uVar8;
        uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar9);
      }
      auVar13[0] = -(*pcVar1 == -1);
      auVar13[1] = -(pcVar1[1] == -1);
      auVar13[2] = -(pcVar1[2] == -1);
      auVar13[3] = -(pcVar1[3] == -1);
      auVar13[4] = -(pcVar1[4] == -1);
      auVar13[5] = -(pcVar1[5] == -1);
      auVar13[6] = -(pcVar1[6] == -1);
      auVar13[7] = -(pcVar1[7] == -1);
      auVar13[8] = -(pcVar1[8] == -1);
      auVar13[9] = -(pcVar1[9] == -1);
      auVar13[10] = -(pcVar1[10] == -1);
      auVar13[0xb] = -(pcVar1[0xb] == -1);
      auVar13[0xc] = -(pcVar1[0xc] == -1);
      auVar13[0xd] = -(pcVar1[0xd] == -1);
      auVar13[0xe] = -(pcVar1[0xe] == -1);
      auVar13[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar13 >> 7,0) & 1) != 0 || (SUB161(auVar13 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar13 >> 0x17,0) & 1) != 0) || (SUB161(auVar13 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar13 >> 0x27,0) & 1) != 0) || (SUB161(auVar13 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar13 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar13 >> 0x3f,0) & 1) != 0) || (SUB161(auVar13 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar13 >> 0x4f,0) & 1) != 0) || (SUB161(auVar13 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar13 >> 0x5f,0) & 1) != 0) || (SUB161(auVar13 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar13 >> 0x6f,0) & 1) != 0) || (SUB161(auVar13 >> 0x77,0) & 1) != 0) ||
          auVar13[0xf] < '\0') break;
      uVar6 = uVar6 + lVar7 + 0x10;
      lVar7 = lVar7 + 0x10;
    }
  }
LAB_14093eac2:
  pdb_1418ea3f0(param_1);
  if (*(longlong *)(param_1 + 0x88) != 0) {
LAB_14093ead8:
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar6 = 0xf7b9e8ebdab18c4f;
    lVar7 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(param_1 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar6);
      auVar36[0] = -(*pcVar1 == DAT_142e34950);
      auVar36[1] = -(pcVar1[1] == DAT_142e34950._1_1_);
      auVar36[2] = -(pcVar1[2] == DAT_142e34950._2_1_);
      auVar36[3] = -(pcVar1[3] == DAT_142e34950._3_1_);
      auVar36[4] = -(pcVar1[4] == DAT_142e34950._4_1_);
      auVar36[5] = -(pcVar1[5] == DAT_142e34950._5_1_);
      auVar36[6] = -(pcVar1[6] == DAT_142e34950._6_1_);
      auVar36[7] = -(pcVar1[7] == DAT_142e34950._7_1_);
      auVar36[8] = -(pcVar1[8] == DAT_142e34950._8_1_);
      auVar36[9] = -(pcVar1[9] == DAT_142e34950._9_1_);
      auVar36[10] = -(pcVar1[10] == DAT_142e34950._10_1_);
      auVar36[0xb] = -(pcVar1[0xb] == DAT_142e34950._11_1_);
      auVar36[0xc] = -(pcVar1[0xc] == DAT_142e34950._12_1_);
      auVar36[0xd] = -(pcVar1[0xd] == DAT_142e34950._13_1_);
      auVar36[0xe] = -(pcVar1[0xe] == DAT_142e34950._14_1_);
      auVar36[0xf] = -(pcVar1[0xf] == DAT_142e34950._15_1_);
      uVar9 = (ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
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
      uVar8 = (uint)uVar9;
      while (uVar9 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar10 = uVar4 + uVar6 & *(ulonglong *)(param_1 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar10 * -0x18);
        auVar37[0] = -(*pcVar2 == DAT_142e34960);
        auVar37[1] = -(pcVar2[1] == UNK_142e34961);
        auVar37[2] = -(pcVar2[2] == UNK_142e34962);
        auVar37[3] = -(pcVar2[3] == UNK_142e34963);
        auVar37[4] = -(pcVar2[4] == UNK_142e34964);
        auVar37[5] = -(pcVar2[5] == UNK_142e34965);
        auVar37[6] = -(pcVar2[6] == UNK_142e34966);
        auVar37[7] = -(pcVar2[7] == UNK_142e34967);
        auVar37[8] = -(pcVar2[8] == UNK_142e34968);
        auVar37[9] = -(pcVar2[9] == UNK_142e34969);
        auVar37[10] = -(pcVar2[10] == UNK_142e3496a);
        auVar37[0xb] = -(pcVar2[0xb] == UNK_142e3496b);
        auVar37[0xc] = -(pcVar2[0xc] == UNK_142e3496c);
        auVar37[0xd] = -(pcVar2[0xd] == UNK_142e3496d);
        auVar37[0xe] = -(pcVar2[0xe] == UNK_142e3496e);
        auVar37[0xf] = -(pcVar2[0xf] == UNK_142e3496f);
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
          uVar6 = *(ulonglong *)(lVar3 + uVar10 * -0x18 + -8);
          if (((*(ulonglong *)(param_1 + 0x210) <= uVar6) ||
              (uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar6 * 8), uVar6 == 0)) ||
             (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar6 * 0x40) == 0))
          goto LAB_14093ebb2;
          goto LAB_14093ebc8;
        }
        uVar9 = (ushort)(uVar8 - 1) & (ushort)uVar8;
        uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar9);
      }
      auVar14[0] = -(*pcVar1 == -1);
      auVar14[1] = -(pcVar1[1] == -1);
      auVar14[2] = -(pcVar1[2] == -1);
      auVar14[3] = -(pcVar1[3] == -1);
      auVar14[4] = -(pcVar1[4] == -1);
      auVar14[5] = -(pcVar1[5] == -1);
      auVar14[6] = -(pcVar1[6] == -1);
      auVar14[7] = -(pcVar1[7] == -1);
      auVar14[8] = -(pcVar1[8] == -1);
      auVar14[9] = -(pcVar1[9] == -1);
      auVar14[10] = -(pcVar1[10] == -1);
      auVar14[0xb] = -(pcVar1[0xb] == -1);
      auVar14[0xc] = -(pcVar1[0xc] == -1);
      auVar14[0xd] = -(pcVar1[0xd] == -1);
      auVar14[0xe] = -(pcVar1[0xe] == -1);
      auVar14[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar14 >> 7,0) & 1) != 0 || (SUB161(auVar14 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar14 >> 0x17,0) & 1) != 0) || (SUB161(auVar14 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar14 >> 0x27,0) & 1) != 0) || (SUB161(auVar14 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar14 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar14 >> 0x3f,0) & 1) != 0) || (SUB161(auVar14 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar14 >> 0x4f,0) & 1) != 0) || (SUB161(auVar14 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar14 >> 0x5f,0) & 1) != 0) || (SUB161(auVar14 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar14 >> 0x6f,0) & 1) != 0) || (SUB161(auVar14 >> 0x77,0) & 1) != 0) ||
          auVar14[0xf] < '\0') break;
      uVar6 = uVar6 + lVar7 + 0x10;
      lVar7 = lVar7 + 0x10;
    }
  }
LAB_14093ebb2:
  pdb_1418de3f0(param_1);
  if (*(longlong *)(param_1 + 0x88) != 0) {
LAB_14093ebc8:
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar6 = 0x100e5f780024b752;
    lVar7 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(param_1 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar6);
      auVar38[0] = -(*pcVar1 == DAT_142e33df0);
      auVar38[1] = -(pcVar1[1] == DAT_142e33df0._1_1_);
      auVar38[2] = -(pcVar1[2] == DAT_142e33df0._2_1_);
      auVar38[3] = -(pcVar1[3] == DAT_142e33df0._3_1_);
      auVar38[4] = -(pcVar1[4] == DAT_142e33df0._4_1_);
      auVar38[5] = -(pcVar1[5] == DAT_142e33df0._5_1_);
      auVar38[6] = -(pcVar1[6] == DAT_142e33df0._6_1_);
      auVar38[7] = -(pcVar1[7] == DAT_142e33df0._7_1_);
      auVar38[8] = -(pcVar1[8] == DAT_142e33df0._8_1_);
      auVar38[9] = -(pcVar1[9] == DAT_142e33df0._9_1_);
      auVar38[10] = -(pcVar1[10] == DAT_142e33df0._10_1_);
      auVar38[0xb] = -(pcVar1[0xb] == DAT_142e33df0._11_1_);
      auVar38[0xc] = -(pcVar1[0xc] == DAT_142e33df0._12_1_);
      auVar38[0xd] = -(pcVar1[0xd] == DAT_142e33df0._13_1_);
      auVar38[0xe] = -(pcVar1[0xe] == DAT_142e33df0._14_1_);
      auVar38[0xf] = -(pcVar1[0xf] == DAT_142e33df0._15_1_);
      uVar9 = (ushort)(SUB161(auVar38 >> 7,0) & 1) | (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
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
      uVar8 = (uint)uVar9;
      while (uVar9 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar10 = uVar4 + uVar6 & *(ulonglong *)(param_1 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar10 * -0x18);
        auVar39[0] = -(*pcVar2 == DAT_142e34fa0);
        auVar39[1] = -(pcVar2[1] == UNK_142e34fa1);
        auVar39[2] = -(pcVar2[2] == UNK_142e34fa2);
        auVar39[3] = -(pcVar2[3] == UNK_142e34fa3);
        auVar39[4] = -(pcVar2[4] == UNK_142e34fa4);
        auVar39[5] = -(pcVar2[5] == UNK_142e34fa5);
        auVar39[6] = -(pcVar2[6] == UNK_142e34fa6);
        auVar39[7] = -(pcVar2[7] == UNK_142e34fa7);
        auVar39[8] = -(pcVar2[8] == UNK_142e34fa8);
        auVar39[9] = -(pcVar2[9] == UNK_142e34fa9);
        auVar39[10] = -(pcVar2[10] == UNK_142e34faa);
        auVar39[0xb] = -(pcVar2[0xb] == UNK_142e34fab);
        auVar39[0xc] = -(pcVar2[0xc] == UNK_142e34fac);
        auVar39[0xd] = -(pcVar2[0xd] == UNK_142e34fad);
        auVar39[0xe] = -(pcVar2[0xe] == UNK_142e34fae);
        auVar39[0xf] = -(pcVar2[0xf] == UNK_142e34faf);
        if ((ushort)((ushort)(SUB161(auVar39 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar39[0xf] >> 7) << 0xf) == 0xffff) {
          uVar6 = *(ulonglong *)(lVar3 + uVar10 * -0x18 + -8);
          if (((*(ulonglong *)(param_1 + 0x210) <= uVar6) ||
              (uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar6 * 8), uVar6 == 0)) ||
             (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar6 * 0x40) == 0))
          goto LAB_14093eca2;
          goto LAB_14093ecb8;
        }
        uVar9 = (ushort)(uVar8 - 1) & (ushort)uVar8;
        uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar9);
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
      uVar6 = uVar6 + lVar7 + 0x10;
      lVar7 = lVar7 + 0x10;
    }
  }
LAB_14093eca2:
  pdb_1418dfbf0(param_1);
  if (*(longlong *)(param_1 + 0x88) != 0) {
LAB_14093ecb8:
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar6 = 0xeea6fafa4cdcc938;
    lVar7 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(param_1 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar6);
      auVar40[0] = -(*pcVar1 == DAT_142e33f70);
      auVar40[1] = -(pcVar1[1] == DAT_142e33f70._1_1_);
      auVar40[2] = -(pcVar1[2] == DAT_142e33f70._2_1_);
      auVar40[3] = -(pcVar1[3] == DAT_142e33f70._3_1_);
      auVar40[4] = -(pcVar1[4] == DAT_142e33f70._4_1_);
      auVar40[5] = -(pcVar1[5] == DAT_142e33f70._5_1_);
      auVar40[6] = -(pcVar1[6] == DAT_142e33f70._6_1_);
      auVar40[7] = -(pcVar1[7] == DAT_142e33f70._7_1_);
      auVar40[8] = -(pcVar1[8] == DAT_142e33f70._8_1_);
      auVar40[9] = -(pcVar1[9] == DAT_142e33f70._9_1_);
      auVar40[10] = -(pcVar1[10] == DAT_142e33f70._10_1_);
      auVar40[0xb] = -(pcVar1[0xb] == DAT_142e33f70._11_1_);
      auVar40[0xc] = -(pcVar1[0xc] == DAT_142e33f70._12_1_);
      auVar40[0xd] = -(pcVar1[0xd] == DAT_142e33f70._13_1_);
      auVar40[0xe] = -(pcVar1[0xe] == DAT_142e33f70._14_1_);
      auVar40[0xf] = -(pcVar1[0xf] == DAT_142e33f70._15_1_);
      uVar9 = (ushort)(SUB161(auVar40 >> 7,0) & 1) | (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
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
      uVar8 = (uint)uVar9;
      while (uVar9 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar10 = uVar4 + uVar6 & *(ulonglong *)(param_1 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar10 * -0x18);
        auVar41[0] = -(*pcVar2 == DAT_142e34ea0);
        auVar41[1] = -(pcVar2[1] == UNK_142e34ea1);
        auVar41[2] = -(pcVar2[2] == UNK_142e34ea2);
        auVar41[3] = -(pcVar2[3] == UNK_142e34ea3);
        auVar41[4] = -(pcVar2[4] == UNK_142e34ea4);
        auVar41[5] = -(pcVar2[5] == UNK_142e34ea5);
        auVar41[6] = -(pcVar2[6] == UNK_142e34ea6);
        auVar41[7] = -(pcVar2[7] == UNK_142e34ea7);
        auVar41[8] = -(pcVar2[8] == UNK_142e34ea8);
        auVar41[9] = -(pcVar2[9] == UNK_142e34ea9);
        auVar41[10] = -(pcVar2[10] == UNK_142e34eaa);
        auVar41[0xb] = -(pcVar2[0xb] == UNK_142e34eab);
        auVar41[0xc] = -(pcVar2[0xc] == UNK_142e34eac);
        auVar41[0xd] = -(pcVar2[0xd] == UNK_142e34ead);
        auVar41[0xe] = -(pcVar2[0xe] == UNK_142e34eae);
        auVar41[0xf] = -(pcVar2[0xf] == UNK_142e34eaf);
        if ((ushort)((ushort)(SUB161(auVar41 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar41[0xf] >> 7) << 0xf) == 0xffff) {
          uVar6 = *(ulonglong *)(lVar3 + uVar10 * -0x18 + -8);
          if (((*(ulonglong *)(param_1 + 0x210) <= uVar6) ||
              (uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar6 * 8), uVar6 == 0)) ||
             (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar6 * 0x40) == 0))
          goto LAB_14093ed92;
          goto LAB_14093eda8;
        }
        uVar9 = (ushort)(uVar8 - 1) & (ushort)uVar8;
        uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar9);
      }
      auVar16[0] = -(*pcVar1 == -1);
      auVar16[1] = -(pcVar1[1] == -1);
      auVar16[2] = -(pcVar1[2] == -1);
      auVar16[3] = -(pcVar1[3] == -1);
      auVar16[4] = -(pcVar1[4] == -1);
      auVar16[5] = -(pcVar1[5] == -1);
      auVar16[6] = -(pcVar1[6] == -1);
      auVar16[7] = -(pcVar1[7] == -1);
      auVar16[8] = -(pcVar1[8] == -1);
      auVar16[9] = -(pcVar1[9] == -1);
      auVar16[10] = -(pcVar1[10] == -1);
      auVar16[0xb] = -(pcVar1[0xb] == -1);
      auVar16[0xc] = -(pcVar1[0xc] == -1);
      auVar16[0xd] = -(pcVar1[0xd] == -1);
      auVar16[0xe] = -(pcVar1[0xe] == -1);
      auVar16[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar16 >> 7,0) & 1) != 0 || (SUB161(auVar16 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar16 >> 0x17,0) & 1) != 0) || (SUB161(auVar16 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar16 >> 0x27,0) & 1) != 0) || (SUB161(auVar16 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar16 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar16 >> 0x3f,0) & 1) != 0) || (SUB161(auVar16 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar16 >> 0x4f,0) & 1) != 0) || (SUB161(auVar16 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar16 >> 0x5f,0) & 1) != 0) || (SUB161(auVar16 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar16 >> 0x6f,0) & 1) != 0) || (SUB161(auVar16 >> 0x77,0) & 1) != 0) ||
          auVar16[0xf] < '\0') break;
      uVar6 = uVar6 + lVar7 + 0x10;
      lVar7 = lVar7 + 0x10;
    }
  }
LAB_14093ed92:
  pdb_1418da800(param_1);
  if (*(longlong *)(param_1 + 0x88) != 0) {
LAB_14093eda8:
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar6 = 0x6baee26782940cb8;
    lVar7 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(param_1 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar6);
      auVar42[0] = -(*pcVar1 == DAT_142e343c0);
      auVar42[1] = -(pcVar1[1] == DAT_142e343c0._1_1_);
      auVar42[2] = -(pcVar1[2] == DAT_142e343c0._2_1_);
      auVar42[3] = -(pcVar1[3] == DAT_142e343c0._3_1_);
      auVar42[4] = -(pcVar1[4] == DAT_142e343c0._4_1_);
      auVar42[5] = -(pcVar1[5] == DAT_142e343c0._5_1_);
      auVar42[6] = -(pcVar1[6] == DAT_142e343c0._6_1_);
      auVar42[7] = -(pcVar1[7] == DAT_142e343c0._7_1_);
      auVar42[8] = -(pcVar1[8] == DAT_142e343c0._8_1_);
      auVar42[9] = -(pcVar1[9] == DAT_142e343c0._9_1_);
      auVar42[10] = -(pcVar1[10] == DAT_142e343c0._10_1_);
      auVar42[0xb] = -(pcVar1[0xb] == DAT_142e343c0._11_1_);
      auVar42[0xc] = -(pcVar1[0xc] == DAT_142e343c0._12_1_);
      auVar42[0xd] = -(pcVar1[0xd] == DAT_142e343c0._13_1_);
      auVar42[0xe] = -(pcVar1[0xe] == DAT_142e343c0._14_1_);
      auVar42[0xf] = -(pcVar1[0xf] == DAT_142e343c0._15_1_);
      uVar9 = (ushort)(SUB161(auVar42 >> 7,0) & 1) | (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
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
      uVar8 = (uint)uVar9;
      while (uVar9 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar10 = uVar4 + uVar6 & *(ulonglong *)(param_1 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar10 * -0x18);
        auVar43[0] = -(*pcVar2 == DAT_142e34690);
        auVar43[1] = -(pcVar2[1] == UNK_142e34691);
        auVar43[2] = -(pcVar2[2] == UNK_142e34692);
        auVar43[3] = -(pcVar2[3] == UNK_142e34693);
        auVar43[4] = -(pcVar2[4] == UNK_142e34694);
        auVar43[5] = -(pcVar2[5] == UNK_142e34695);
        auVar43[6] = -(pcVar2[6] == UNK_142e34696);
        auVar43[7] = -(pcVar2[7] == UNK_142e34697);
        auVar43[8] = -(pcVar2[8] == UNK_142e34698);
        auVar43[9] = -(pcVar2[9] == UNK_142e34699);
        auVar43[10] = -(pcVar2[10] == UNK_142e3469a);
        auVar43[0xb] = -(pcVar2[0xb] == UNK_142e3469b);
        auVar43[0xc] = -(pcVar2[0xc] == UNK_142e3469c);
        auVar43[0xd] = -(pcVar2[0xd] == UNK_142e3469d);
        auVar43[0xe] = -(pcVar2[0xe] == UNK_142e3469e);
        auVar43[0xf] = -(pcVar2[0xf] == UNK_142e3469f);
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
          uVar6 = *(ulonglong *)(lVar3 + uVar10 * -0x18 + -8);
          if (((*(ulonglong *)(param_1 + 0x210) <= uVar6) ||
              (uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar6 * 8), uVar6 == 0)) ||
             (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar6 * 0x40) == 0))
          goto LAB_14093ee82;
          goto LAB_14093ee98;
        }
        uVar9 = (ushort)(uVar8 - 1) & (ushort)uVar8;
        uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar9);
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
                      (SUB161(auVar17 >> 0x17,0) & 1) != 0) || (SUB161(auVar17 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar17 >> 0x27,0) & 1) != 0) || (SUB161(auVar17 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar17 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar17 >> 0x3f,0) & 1) != 0) || (SUB161(auVar17 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar17 >> 0x4f,0) & 1) != 0) || (SUB161(auVar17 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar17 >> 0x5f,0) & 1) != 0) || (SUB161(auVar17 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar17 >> 0x6f,0) & 1) != 0) || (SUB161(auVar17 >> 0x77,0) & 1) != 0) ||
          auVar17[0xf] < '\0') break;
      uVar6 = uVar6 + lVar7 + 0x10;
      lVar7 = lVar7 + 0x10;
    }
  }
LAB_14093ee82:
  pdb_1418ce800(param_1);
  if (*(longlong *)(param_1 + 0x88) != 0) {
LAB_14093ee98:
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar6 = 0x13534cc909e955c5;
    lVar7 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(param_1 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar6);
      auVar44[0] = -(*pcVar1 == DAT_142e347d0);
      auVar44[1] = -(pcVar1[1] == DAT_142e347d0._1_1_);
      auVar44[2] = -(pcVar1[2] == DAT_142e347d0._2_1_);
      auVar44[3] = -(pcVar1[3] == DAT_142e347d0._3_1_);
      auVar44[4] = -(pcVar1[4] == DAT_142e347d0._4_1_);
      auVar44[5] = -(pcVar1[5] == DAT_142e347d0._5_1_);
      auVar44[6] = -(pcVar1[6] == DAT_142e347d0._6_1_);
      auVar44[7] = -(pcVar1[7] == DAT_142e347d0._7_1_);
      auVar44[8] = -(pcVar1[8] == DAT_142e347d0._8_1_);
      auVar44[9] = -(pcVar1[9] == DAT_142e347d0._9_1_);
      auVar44[10] = -(pcVar1[10] == DAT_142e347d0._10_1_);
      auVar44[0xb] = -(pcVar1[0xb] == DAT_142e347d0._11_1_);
      auVar44[0xc] = -(pcVar1[0xc] == DAT_142e347d0._12_1_);
      auVar44[0xd] = -(pcVar1[0xd] == DAT_142e347d0._13_1_);
      auVar44[0xe] = -(pcVar1[0xe] == DAT_142e347d0._14_1_);
      auVar44[0xf] = -(pcVar1[0xf] == DAT_142e347d0._15_1_);
      uVar9 = (ushort)(SUB161(auVar44 >> 7,0) & 1) | (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
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
      uVar8 = (uint)uVar9;
      while (uVar9 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar10 = uVar4 + uVar6 & *(ulonglong *)(param_1 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar10 * -0x18);
        auVar45[0] = -(*pcVar2 == DAT_143022c40);
        auVar45[1] = -(pcVar2[1] == UNK_143022c41);
        auVar45[2] = -(pcVar2[2] == UNK_143022c42);
        auVar45[3] = -(pcVar2[3] == UNK_143022c43);
        auVar45[4] = -(pcVar2[4] == UNK_143022c44);
        auVar45[5] = -(pcVar2[5] == UNK_143022c45);
        auVar45[6] = -(pcVar2[6] == UNK_143022c46);
        auVar45[7] = -(pcVar2[7] == UNK_143022c47);
        auVar45[8] = -(pcVar2[8] == UNK_143022c48);
        auVar45[9] = -(pcVar2[9] == UNK_143022c49);
        auVar45[10] = -(pcVar2[10] == UNK_143022c4a);
        auVar45[0xb] = -(pcVar2[0xb] == UNK_143022c4b);
        auVar45[0xc] = -(pcVar2[0xc] == UNK_143022c4c);
        auVar45[0xd] = -(pcVar2[0xd] == UNK_143022c4d);
        auVar45[0xe] = -(pcVar2[0xe] == UNK_143022c4e);
        auVar45[0xf] = -(pcVar2[0xf] == UNK_143022c4f);
        if ((ushort)((ushort)(SUB161(auVar45 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
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
                     (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar45[0xf] >> 7) << 0xf) == 0xffff) {
          uVar6 = *(ulonglong *)(lVar3 + uVar10 * -0x18 + -8);
          if (((*(ulonglong *)(param_1 + 0x210) <= uVar6) ||
              (uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar6 * 8), uVar6 == 0)) ||
             (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar6 * 0x40) == 0))
          goto LAB_14093ef72;
          goto LAB_14093ef88;
        }
        uVar9 = (ushort)(uVar8 - 1) & (ushort)uVar8;
        uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar9);
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
      uVar6 = uVar6 + lVar7 + 0x10;
      lVar7 = lVar7 + 0x10;
    }
  }
LAB_14093ef72:
  pdb_1418d7800(param_1);
  if (*(longlong *)(param_1 + 0x88) != 0) {
LAB_14093ef88:
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar6 = 0x5f0d6363d522fe65;
    lVar7 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(param_1 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar6);
      auVar46[0] = -(*pcVar1 == DAT_142e34b40);
      auVar46[1] = -(pcVar1[1] == DAT_142e34b40._1_1_);
      auVar46[2] = -(pcVar1[2] == DAT_142e34b40._2_1_);
      auVar46[3] = -(pcVar1[3] == DAT_142e34b40._3_1_);
      auVar46[4] = -(pcVar1[4] == DAT_142e34b40._4_1_);
      auVar46[5] = -(pcVar1[5] == DAT_142e34b40._5_1_);
      auVar46[6] = -(pcVar1[6] == DAT_142e34b40._6_1_);
      auVar46[7] = -(pcVar1[7] == DAT_142e34b40._7_1_);
      auVar46[8] = -(pcVar1[8] == DAT_142e34b40._8_1_);
      auVar46[9] = -(pcVar1[9] == DAT_142e34b40._9_1_);
      auVar46[10] = -(pcVar1[10] == DAT_142e34b40._10_1_);
      auVar46[0xb] = -(pcVar1[0xb] == DAT_142e34b40._11_1_);
      auVar46[0xc] = -(pcVar1[0xc] == DAT_142e34b40._12_1_);
      auVar46[0xd] = -(pcVar1[0xd] == DAT_142e34b40._13_1_);
      auVar46[0xe] = -(pcVar1[0xe] == DAT_142e34b40._14_1_);
      auVar46[0xf] = -(pcVar1[0xf] == DAT_142e34b40._15_1_);
      uVar9 = (ushort)(SUB161(auVar46 >> 7,0) & 1) | (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1 |
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
      uVar8 = (uint)uVar9;
      while (uVar9 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar10 = uVar4 + uVar6 & *(ulonglong *)(param_1 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar10 * -0x18);
        auVar47[0] = -(*pcVar2 == DAT_142e34bf0);
        auVar47[1] = -(pcVar2[1] == UNK_142e34bf1);
        auVar47[2] = -(pcVar2[2] == UNK_142e34bf2);
        auVar47[3] = -(pcVar2[3] == UNK_142e34bf3);
        auVar47[4] = -(pcVar2[4] == UNK_142e34bf4);
        auVar47[5] = -(pcVar2[5] == UNK_142e34bf5);
        auVar47[6] = -(pcVar2[6] == UNK_142e34bf6);
        auVar47[7] = -(pcVar2[7] == UNK_142e34bf7);
        auVar47[8] = -(pcVar2[8] == UNK_142e34bf8);
        auVar47[9] = -(pcVar2[9] == UNK_142e34bf9);
        auVar47[10] = -(pcVar2[10] == UNK_142e34bfa);
        auVar47[0xb] = -(pcVar2[0xb] == UNK_142e34bfb);
        auVar47[0xc] = -(pcVar2[0xc] == UNK_142e34bfc);
        auVar47[0xd] = -(pcVar2[0xd] == UNK_142e34bfd);
        auVar47[0xe] = -(pcVar2[0xe] == UNK_142e34bfe);
        auVar47[0xf] = -(pcVar2[0xf] == UNK_142e34bff);
        if ((ushort)((ushort)(SUB161(auVar47 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
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
                     (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar47[0xf] >> 7) << 0xf) == 0xffff) {
          uVar6 = *(ulonglong *)(lVar3 + uVar10 * -0x18 + -8);
          if (((*(ulonglong *)(param_1 + 0x210) <= uVar6) ||
              (uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar6 * 8), uVar6 == 0)) ||
             (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar6 * 0x40) == 0))
          goto LAB_14093f062;
          goto LAB_14093f078;
        }
        uVar9 = (ushort)(uVar8 - 1) & (ushort)uVar8;
        uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar9);
      }
      auVar19[0] = -(*pcVar1 == -1);
      auVar19[1] = -(pcVar1[1] == -1);
      auVar19[2] = -(pcVar1[2] == -1);
      auVar19[3] = -(pcVar1[3] == -1);
      auVar19[4] = -(pcVar1[4] == -1);
      auVar19[5] = -(pcVar1[5] == -1);
      auVar19[6] = -(pcVar1[6] == -1);
      auVar19[7] = -(pcVar1[7] == -1);
      auVar19[8] = -(pcVar1[8] == -1);
      auVar19[9] = -(pcVar1[9] == -1);
      auVar19[10] = -(pcVar1[10] == -1);
      auVar19[0xb] = -(pcVar1[0xb] == -1);
      auVar19[0xc] = -(pcVar1[0xc] == -1);
      auVar19[0xd] = -(pcVar1[0xd] == -1);
      auVar19[0xe] = -(pcVar1[0xe] == -1);
      auVar19[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 || (SUB161(auVar19 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar19 >> 0x17,0) & 1) != 0) || (SUB161(auVar19 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar19 >> 0x27,0) & 1) != 0) || (SUB161(auVar19 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar19 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar19 >> 0x3f,0) & 1) != 0) || (SUB161(auVar19 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar19 >> 0x4f,0) & 1) != 0) || (SUB161(auVar19 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar19 >> 0x5f,0) & 1) != 0) || (SUB161(auVar19 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar19 >> 0x6f,0) & 1) != 0) || (SUB161(auVar19 >> 0x77,0) & 1) != 0) ||
          auVar19[0xf] < '\0') break;
      uVar6 = uVar6 + lVar7 + 0x10;
      lVar7 = lVar7 + 0x10;
    }
  }
LAB_14093f062:
  pdb_1418cd000(param_1);
  if (*(longlong *)(param_1 + 0x88) != 0) {
LAB_14093f078:
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar6 = 0x12148091d6bbb8c0;
    lVar7 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(param_1 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar6);
      auVar48[0] = -(*pcVar1 == DAT_142e347d0);
      auVar48[1] = -(pcVar1[1] == DAT_142e347d0._1_1_);
      auVar48[2] = -(pcVar1[2] == DAT_142e347d0._2_1_);
      auVar48[3] = -(pcVar1[3] == DAT_142e347d0._3_1_);
      auVar48[4] = -(pcVar1[4] == DAT_142e347d0._4_1_);
      auVar48[5] = -(pcVar1[5] == DAT_142e347d0._5_1_);
      auVar48[6] = -(pcVar1[6] == DAT_142e347d0._6_1_);
      auVar48[7] = -(pcVar1[7] == DAT_142e347d0._7_1_);
      auVar48[8] = -(pcVar1[8] == DAT_142e347d0._8_1_);
      auVar48[9] = -(pcVar1[9] == DAT_142e347d0._9_1_);
      auVar48[10] = -(pcVar1[10] == DAT_142e347d0._10_1_);
      auVar48[0xb] = -(pcVar1[0xb] == DAT_142e347d0._11_1_);
      auVar48[0xc] = -(pcVar1[0xc] == DAT_142e347d0._12_1_);
      auVar48[0xd] = -(pcVar1[0xd] == DAT_142e347d0._13_1_);
      auVar48[0xe] = -(pcVar1[0xe] == DAT_142e347d0._14_1_);
      auVar48[0xf] = -(pcVar1[0xf] == DAT_142e347d0._15_1_);
      uVar9 = (ushort)(SUB161(auVar48 >> 7,0) & 1) | (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe | (ushort)(auVar48[0xf] >> 7) << 0xf;
      uVar8 = (uint)uVar9;
      while (uVar9 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar10 = uVar4 + uVar6 & *(ulonglong *)(param_1 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar10 * -0x18);
        auVar49[0] = -(*pcVar2 == DAT_143022c50);
        auVar49[1] = -(pcVar2[1] == UNK_143022c51);
        auVar49[2] = -(pcVar2[2] == UNK_143022c52);
        auVar49[3] = -(pcVar2[3] == UNK_143022c53);
        auVar49[4] = -(pcVar2[4] == UNK_143022c54);
        auVar49[5] = -(pcVar2[5] == UNK_143022c55);
        auVar49[6] = -(pcVar2[6] == UNK_143022c56);
        auVar49[7] = -(pcVar2[7] == UNK_143022c57);
        auVar49[8] = -(pcVar2[8] == UNK_143022c58);
        auVar49[9] = -(pcVar2[9] == UNK_143022c59);
        auVar49[10] = -(pcVar2[10] == UNK_143022c5a);
        auVar49[0xb] = -(pcVar2[0xb] == UNK_143022c5b);
        auVar49[0xc] = -(pcVar2[0xc] == UNK_143022c5c);
        auVar49[0xd] = -(pcVar2[0xd] == UNK_143022c5d);
        auVar49[0xe] = -(pcVar2[0xe] == UNK_143022c5e);
        auVar49[0xf] = -(pcVar2[0xf] == UNK_143022c5f);
        if ((ushort)((ushort)(SUB161(auVar49 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar49 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar49 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar49 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar49 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar49 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar49 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar49 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar49 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar49 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar49 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar49 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar49[0xf] >> 7) << 0xf) == 0xffff) {
          uVar6 = *(ulonglong *)(lVar3 + uVar10 * -0x18 + -8);
          if (((*(ulonglong *)(param_1 + 0x210) <= uVar6) ||
              (uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar6 * 8), uVar6 == 0)) ||
             (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar6 * 0x40) == 0))
          goto LAB_14093f152;
          goto LAB_14093f168;
        }
        uVar9 = (ushort)(uVar8 - 1) & (ushort)uVar8;
        uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar9);
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
      uVar6 = uVar6 + lVar7 + 0x10;
      lVar7 = lVar7 + 0x10;
    }
  }
LAB_14093f152:
  pdb_1418d8a00(param_1);
  if (*(longlong *)(param_1 + 0x88) != 0) {
LAB_14093f168:
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar6 = 0x54144fd5f861bd0c;
    lVar7 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(param_1 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar6);
      auVar50[0] = -(*pcVar1 == DAT_142e33fd0);
      auVar50[1] = -(pcVar1[1] == DAT_142e33fd0._1_1_);
      auVar50[2] = -(pcVar1[2] == DAT_142e33fd0._2_1_);
      auVar50[3] = -(pcVar1[3] == DAT_142e33fd0._3_1_);
      auVar50[4] = -(pcVar1[4] == DAT_142e33fd0._4_1_);
      auVar50[5] = -(pcVar1[5] == DAT_142e33fd0._5_1_);
      auVar50[6] = -(pcVar1[6] == DAT_142e33fd0._6_1_);
      auVar50[7] = -(pcVar1[7] == DAT_142e33fd0._7_1_);
      auVar50[8] = -(pcVar1[8] == DAT_142e33fd0._8_1_);
      auVar50[9] = -(pcVar1[9] == DAT_142e33fd0._9_1_);
      auVar50[10] = -(pcVar1[10] == DAT_142e33fd0._10_1_);
      auVar50[0xb] = -(pcVar1[0xb] == DAT_142e33fd0._11_1_);
      auVar50[0xc] = -(pcVar1[0xc] == DAT_142e33fd0._12_1_);
      auVar50[0xd] = -(pcVar1[0xd] == DAT_142e33fd0._13_1_);
      auVar50[0xe] = -(pcVar1[0xe] == DAT_142e33fd0._14_1_);
      auVar50[0xf] = -(pcVar1[0xf] == DAT_142e33fd0._15_1_);
      uVar9 = (ushort)(SUB161(auVar50 >> 7,0) & 1) | (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar50 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar50 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar50 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar50 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar50 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar50 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar50 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar50 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar50 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar50 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar50 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe | (ushort)(auVar50[0xf] >> 7) << 0xf;
      uVar8 = (uint)uVar9;
      while (uVar9 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar10 = uVar4 + uVar6 & *(ulonglong *)(param_1 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar10 * -0x18);
        auVar51[0] = -(*pcVar2 == DAT_142e34db0);
        auVar51[1] = -(pcVar2[1] == UNK_142e34db1);
        auVar51[2] = -(pcVar2[2] == UNK_142e34db2);
        auVar51[3] = -(pcVar2[3] == UNK_142e34db3);
        auVar51[4] = -(pcVar2[4] == UNK_142e34db4);
        auVar51[5] = -(pcVar2[5] == UNK_142e34db5);
        auVar51[6] = -(pcVar2[6] == UNK_142e34db6);
        auVar51[7] = -(pcVar2[7] == UNK_142e34db7);
        auVar51[8] = -(pcVar2[8] == UNK_142e34db8);
        auVar51[9] = -(pcVar2[9] == UNK_142e34db9);
        auVar51[10] = -(pcVar2[10] == UNK_142e34dba);
        auVar51[0xb] = -(pcVar2[0xb] == UNK_142e34dbb);
        auVar51[0xc] = -(pcVar2[0xc] == UNK_142e34dbc);
        auVar51[0xd] = -(pcVar2[0xd] == UNK_142e34dbd);
        auVar51[0xe] = -(pcVar2[0xe] == UNK_142e34dbe);
        auVar51[0xf] = -(pcVar2[0xf] == UNK_142e34dbf);
        if ((ushort)((ushort)(SUB161(auVar51 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar51 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar51 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar51 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar51 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar51 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar51 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar51 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar51 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar51 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar51 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar51 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar51 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar51[0xf] >> 7) << 0xf) == 0xffff) {
          uVar6 = *(ulonglong *)(lVar3 + uVar10 * -0x18 + -8);
          if (((*(ulonglong *)(param_1 + 0x210) <= uVar6) ||
              (uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar6 * 8), uVar6 == 0)) ||
             (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar6 * 0x40) == 0))
          goto LAB_14093f242;
          goto LAB_14093f258;
        }
        uVar9 = (ushort)(uVar8 - 1) & (ushort)uVar8;
        uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar9);
      }
      auVar21[0] = -(*pcVar1 == -1);
      auVar21[1] = -(pcVar1[1] == -1);
      auVar21[2] = -(pcVar1[2] == -1);
      auVar21[3] = -(pcVar1[3] == -1);
      auVar21[4] = -(pcVar1[4] == -1);
      auVar21[5] = -(pcVar1[5] == -1);
      auVar21[6] = -(pcVar1[6] == -1);
      auVar21[7] = -(pcVar1[7] == -1);
      auVar21[8] = -(pcVar1[8] == -1);
      auVar21[9] = -(pcVar1[9] == -1);
      auVar21[10] = -(pcVar1[10] == -1);
      auVar21[0xb] = -(pcVar1[0xb] == -1);
      auVar21[0xc] = -(pcVar1[0xc] == -1);
      auVar21[0xd] = -(pcVar1[0xd] == -1);
      auVar21[0xe] = -(pcVar1[0xe] == -1);
      auVar21[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 || (SUB161(auVar21 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar21 >> 0x17,0) & 1) != 0) || (SUB161(auVar21 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar21 >> 0x27,0) & 1) != 0) || (SUB161(auVar21 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar21 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar21 >> 0x3f,0) & 1) != 0) || (SUB161(auVar21 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar21 >> 0x4f,0) & 1) != 0) || (SUB161(auVar21 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar21 >> 0x5f,0) & 1) != 0) || (SUB161(auVar21 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar21 >> 0x6f,0) & 1) != 0) || (SUB161(auVar21 >> 0x77,0) & 1) != 0) ||
          auVar21[0xf] < '\0') break;
      uVar6 = uVar6 + lVar7 + 0x10;
      lVar7 = lVar7 + 0x10;
    }
  }
LAB_14093f242:
  pdb_1418d0c00(param_1);
  if (*(longlong *)(param_1 + 0x88) != 0) {
LAB_14093f258:
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar6 = 0xbae4926765c86da1;
    lVar7 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(param_1 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar6);
      auVar52[0] = -(*pcVar1 == DAT_142e33e10);
      auVar52[1] = -(pcVar1[1] == DAT_142e33e10._1_1_);
      auVar52[2] = -(pcVar1[2] == DAT_142e33e10._2_1_);
      auVar52[3] = -(pcVar1[3] == DAT_142e33e10._3_1_);
      auVar52[4] = -(pcVar1[4] == DAT_142e33e10._4_1_);
      auVar52[5] = -(pcVar1[5] == DAT_142e33e10._5_1_);
      auVar52[6] = -(pcVar1[6] == DAT_142e33e10._6_1_);
      auVar52[7] = -(pcVar1[7] == DAT_142e33e10._7_1_);
      auVar52[8] = -(pcVar1[8] == DAT_142e33e10._8_1_);
      auVar52[9] = -(pcVar1[9] == DAT_142e33e10._9_1_);
      auVar52[10] = -(pcVar1[10] == DAT_142e33e10._10_1_);
      auVar52[0xb] = -(pcVar1[0xb] == DAT_142e33e10._11_1_);
      auVar52[0xc] = -(pcVar1[0xc] == DAT_142e33e10._12_1_);
      auVar52[0xd] = -(pcVar1[0xd] == DAT_142e33e10._13_1_);
      auVar52[0xe] = -(pcVar1[0xe] == DAT_142e33e10._14_1_);
      auVar52[0xf] = -(pcVar1[0xf] == DAT_142e33e10._15_1_);
      uVar9 = (ushort)(SUB161(auVar52 >> 7,0) & 1) | (ushort)(SUB161(auVar52 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar52 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar52 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar52 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar52 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar52 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar52 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar52 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar52 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar52 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar52 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar52 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar52 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar52 >> 0x77,0) & 1) << 0xe | (ushort)(auVar52[0xf] >> 7) << 0xf;
      uVar8 = (uint)uVar9;
      while (uVar9 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar10 = uVar4 + uVar6 & *(ulonglong *)(param_1 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar10 * -0x18);
        auVar53[0] = -(*pcVar2 == DAT_143022c60);
        auVar53[1] = -(pcVar2[1] == UNK_143022c61);
        auVar53[2] = -(pcVar2[2] == UNK_143022c62);
        auVar53[3] = -(pcVar2[3] == UNK_143022c63);
        auVar53[4] = -(pcVar2[4] == UNK_143022c64);
        auVar53[5] = -(pcVar2[5] == UNK_143022c65);
        auVar53[6] = -(pcVar2[6] == UNK_143022c66);
        auVar53[7] = -(pcVar2[7] == UNK_143022c67);
        auVar53[8] = -(pcVar2[8] == UNK_143022c68);
        auVar53[9] = -(pcVar2[9] == UNK_143022c69);
        auVar53[10] = -(pcVar2[10] == UNK_143022c6a);
        auVar53[0xb] = -(pcVar2[0xb] == UNK_143022c6b);
        auVar53[0xc] = -(pcVar2[0xc] == UNK_143022c6c);
        auVar53[0xd] = -(pcVar2[0xd] == UNK_143022c6d);
        auVar53[0xe] = -(pcVar2[0xe] == UNK_143022c6e);
        auVar53[0xf] = -(pcVar2[0xf] == UNK_143022c6f);
        if ((ushort)((ushort)(SUB161(auVar53 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar53 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar53 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar53 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar53 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar53 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar53 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar53 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar53 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar53 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar53 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar53 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar53 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar53 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar53[0xf] >> 7) << 0xf) == 0xffff) {
          uVar6 = *(ulonglong *)(lVar3 + uVar10 * -0x18 + -8);
          if (((*(ulonglong *)(param_1 + 0x210) <= uVar6) ||
              (uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar6 * 8), uVar6 == 0)) ||
             (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar6 * 0x40) == 0))
          goto LAB_14093f332;
          goto LAB_14093f348;
        }
        uVar9 = (ushort)(uVar8 - 1) & (ushort)uVar8;
        uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar9);
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
      uVar6 = uVar6 + lVar7 + 0x10;
      lVar7 = lVar7 + 0x10;
    }
  }
LAB_14093f332:
  pdb_1418cee00(param_1);
  if (*(longlong *)(param_1 + 0x88) != 0) {
LAB_14093f348:
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar6 = 0x5e00cbb3a383fa94;
    lVar7 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(param_1 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar6);
      auVar54[0] = -(*pcVar1 == DAT_142e34b40);
      auVar54[1] = -(pcVar1[1] == DAT_142e34b40._1_1_);
      auVar54[2] = -(pcVar1[2] == DAT_142e34b40._2_1_);
      auVar54[3] = -(pcVar1[3] == DAT_142e34b40._3_1_);
      auVar54[4] = -(pcVar1[4] == DAT_142e34b40._4_1_);
      auVar54[5] = -(pcVar1[5] == DAT_142e34b40._5_1_);
      auVar54[6] = -(pcVar1[6] == DAT_142e34b40._6_1_);
      auVar54[7] = -(pcVar1[7] == DAT_142e34b40._7_1_);
      auVar54[8] = -(pcVar1[8] == DAT_142e34b40._8_1_);
      auVar54[9] = -(pcVar1[9] == DAT_142e34b40._9_1_);
      auVar54[10] = -(pcVar1[10] == DAT_142e34b40._10_1_);
      auVar54[0xb] = -(pcVar1[0xb] == DAT_142e34b40._11_1_);
      auVar54[0xc] = -(pcVar1[0xc] == DAT_142e34b40._12_1_);
      auVar54[0xd] = -(pcVar1[0xd] == DAT_142e34b40._13_1_);
      auVar54[0xe] = -(pcVar1[0xe] == DAT_142e34b40._14_1_);
      auVar54[0xf] = -(pcVar1[0xf] == DAT_142e34b40._15_1_);
      uVar9 = (ushort)(SUB161(auVar54 >> 7,0) & 1) | (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar54 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar54 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar54 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar54 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar54 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar54 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar54 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar54 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar54 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar54 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar54 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar54 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe | (ushort)(auVar54[0xf] >> 7) << 0xf;
      uVar8 = (uint)uVar9;
      while (uVar9 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar10 = uVar4 + uVar6 & *(ulonglong *)(param_1 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar10 * -0x18);
        auVar55[0] = -(*pcVar2 == DAT_142e34b50);
        auVar55[1] = -(pcVar2[1] == UNK_142e34b51);
        auVar55[2] = -(pcVar2[2] == UNK_142e34b52);
        auVar55[3] = -(pcVar2[3] == UNK_142e34b53);
        auVar55[4] = -(pcVar2[4] == UNK_142e34b54);
        auVar55[5] = -(pcVar2[5] == UNK_142e34b55);
        auVar55[6] = -(pcVar2[6] == UNK_142e34b56);
        auVar55[7] = -(pcVar2[7] == UNK_142e34b57);
        auVar55[8] = -(pcVar2[8] == UNK_142e34b58);
        auVar55[9] = -(pcVar2[9] == UNK_142e34b59);
        auVar55[10] = -(pcVar2[10] == UNK_142e34b5a);
        auVar55[0xb] = -(pcVar2[0xb] == UNK_142e34b5b);
        auVar55[0xc] = -(pcVar2[0xc] == UNK_142e34b5c);
        auVar55[0xd] = -(pcVar2[0xd] == UNK_142e34b5d);
        auVar55[0xe] = -(pcVar2[0xe] == UNK_142e34b5e);
        auVar55[0xf] = -(pcVar2[0xf] == UNK_142e34b5f);
        if ((ushort)((ushort)(SUB161(auVar55 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar55 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar55 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar55 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar55 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar55 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar55 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar55 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar55 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar55 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar55 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar55 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar55 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar55 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar55 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar55[0xf] >> 7) << 0xf) == 0xffff) {
          uVar6 = *(ulonglong *)(lVar3 + uVar10 * -0x18 + -8);
          if (((*(ulonglong *)(param_1 + 0x210) <= uVar6) ||
              (uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar6 * 8), uVar6 == 0)) ||
             (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar6 * 0x40) == 0))
          goto LAB_14093f422;
          goto LAB_14093f438;
        }
        uVar9 = (ushort)(uVar8 - 1) & (ushort)uVar8;
        uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar9);
      }
      auVar23[0] = -(*pcVar1 == -1);
      auVar23[1] = -(pcVar1[1] == -1);
      auVar23[2] = -(pcVar1[2] == -1);
      auVar23[3] = -(pcVar1[3] == -1);
      auVar23[4] = -(pcVar1[4] == -1);
      auVar23[5] = -(pcVar1[5] == -1);
      auVar23[6] = -(pcVar1[6] == -1);
      auVar23[7] = -(pcVar1[7] == -1);
      auVar23[8] = -(pcVar1[8] == -1);
      auVar23[9] = -(pcVar1[9] == -1);
      auVar23[10] = -(pcVar1[10] == -1);
      auVar23[0xb] = -(pcVar1[0xb] == -1);
      auVar23[0xc] = -(pcVar1[0xc] == -1);
      auVar23[0xd] = -(pcVar1[0xd] == -1);
      auVar23[0xe] = -(pcVar1[0xe] == -1);
      auVar23[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar23 >> 7,0) & 1) != 0 || (SUB161(auVar23 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar23 >> 0x17,0) & 1) != 0) || (SUB161(auVar23 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar23 >> 0x27,0) & 1) != 0) || (SUB161(auVar23 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar23 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar23 >> 0x3f,0) & 1) != 0) || (SUB161(auVar23 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar23 >> 0x4f,0) & 1) != 0) || (SUB161(auVar23 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar23 >> 0x5f,0) & 1) != 0) || (SUB161(auVar23 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar23 >> 0x6f,0) & 1) != 0) || (SUB161(auVar23 >> 0x77,0) & 1) != 0) ||
          auVar23[0xf] < '\0') break;
      uVar6 = uVar6 + lVar7 + 0x10;
      lVar7 = lVar7 + 0x10;
    }
  }
LAB_14093f422:
  pdb_1418e4ff0(param_1);
  if (*(longlong *)(param_1 + 0x88) != 0) {
LAB_14093f438:
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar6 = 0x40a8156d64075de2;
    lVar7 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(param_1 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar6);
      auVar56[0] = -(*pcVar1 == DAT_142e346d0);
      auVar56[1] = -(pcVar1[1] == DAT_142e346d0._1_1_);
      auVar56[2] = -(pcVar1[2] == DAT_142e346d0._2_1_);
      auVar56[3] = -(pcVar1[3] == DAT_142e346d0._3_1_);
      auVar56[4] = -(pcVar1[4] == DAT_142e346d0._4_1_);
      auVar56[5] = -(pcVar1[5] == DAT_142e346d0._5_1_);
      auVar56[6] = -(pcVar1[6] == DAT_142e346d0._6_1_);
      auVar56[7] = -(pcVar1[7] == DAT_142e346d0._7_1_);
      auVar56[8] = -(pcVar1[8] == DAT_142e346d0._8_1_);
      auVar56[9] = -(pcVar1[9] == DAT_142e346d0._9_1_);
      auVar56[10] = -(pcVar1[10] == DAT_142e346d0._10_1_);
      auVar56[0xb] = -(pcVar1[0xb] == DAT_142e346d0._11_1_);
      auVar56[0xc] = -(pcVar1[0xc] == DAT_142e346d0._12_1_);
      auVar56[0xd] = -(pcVar1[0xd] == DAT_142e346d0._13_1_);
      auVar56[0xe] = -(pcVar1[0xe] == DAT_142e346d0._14_1_);
      auVar56[0xf] = -(pcVar1[0xf] == DAT_142e346d0._15_1_);
      uVar9 = (ushort)(SUB161(auVar56 >> 7,0) & 1) | (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar56 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar56 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar56 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar56 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar56 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar56 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar56 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar56 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar56 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar56 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar56 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe | (ushort)(auVar56[0xf] >> 7) << 0xf;
      uVar8 = (uint)uVar9;
      while (uVar9 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar10 = uVar4 + uVar6 & *(ulonglong *)(param_1 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar10 * -0x18);
        auVar57[0] = -(*pcVar2 == DAT_142e34cc0);
        auVar57[1] = -(pcVar2[1] == UNK_142e34cc1);
        auVar57[2] = -(pcVar2[2] == UNK_142e34cc2);
        auVar57[3] = -(pcVar2[3] == UNK_142e34cc3);
        auVar57[4] = -(pcVar2[4] == UNK_142e34cc4);
        auVar57[5] = -(pcVar2[5] == UNK_142e34cc5);
        auVar57[6] = -(pcVar2[6] == UNK_142e34cc6);
        auVar57[7] = -(pcVar2[7] == UNK_142e34cc7);
        auVar57[8] = -(pcVar2[8] == UNK_142e34cc8);
        auVar57[9] = -(pcVar2[9] == UNK_142e34cc9);
        auVar57[10] = -(pcVar2[10] == UNK_142e34cca);
        auVar57[0xb] = -(pcVar2[0xb] == UNK_142e34ccb);
        auVar57[0xc] = -(pcVar2[0xc] == UNK_142e34ccc);
        auVar57[0xd] = -(pcVar2[0xd] == UNK_142e34ccd);
        auVar57[0xe] = -(pcVar2[0xe] == UNK_142e34cce);
        auVar57[0xf] = -(pcVar2[0xf] == UNK_142e34ccf);
        if ((ushort)((ushort)(SUB161(auVar57 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar57[0xf] >> 7) << 0xf) == 0xffff) {
          uVar6 = *(ulonglong *)(lVar3 + uVar10 * -0x18 + -8);
          if (((*(ulonglong *)(param_1 + 0x210) <= uVar6) ||
              (uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar6 * 8), uVar6 == 0)) ||
             (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar6 * 0x40) == 0))
          goto LAB_14093f512;
          goto LAB_14093f528;
        }
        uVar9 = (ushort)(uVar8 - 1) & (ushort)uVar8;
        uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar9);
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
      uVar6 = uVar6 + lVar7 + 0x10;
      lVar7 = lVar7 + 0x10;
    }
  }
LAB_14093f512:
  pdb_1418df5f0(param_1);
  if (*(longlong *)(param_1 + 0x88) != 0) {
LAB_14093f528:
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar6 = 0x383e17375f734268;
    lVar7 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(param_1 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar6);
      auVar58[0] = -(*pcVar1 == DAT_142e34aa0);
      auVar58[1] = -(pcVar1[1] == DAT_142e34aa0._1_1_);
      auVar58[2] = -(pcVar1[2] == DAT_142e34aa0._2_1_);
      auVar58[3] = -(pcVar1[3] == DAT_142e34aa0._3_1_);
      auVar58[4] = -(pcVar1[4] == DAT_142e34aa0._4_1_);
      auVar58[5] = -(pcVar1[5] == DAT_142e34aa0._5_1_);
      auVar58[6] = -(pcVar1[6] == DAT_142e34aa0._6_1_);
      auVar58[7] = -(pcVar1[7] == DAT_142e34aa0._7_1_);
      auVar58[8] = -(pcVar1[8] == DAT_142e34aa0._8_1_);
      auVar58[9] = -(pcVar1[9] == DAT_142e34aa0._9_1_);
      auVar58[10] = -(pcVar1[10] == DAT_142e34aa0._10_1_);
      auVar58[0xb] = -(pcVar1[0xb] == DAT_142e34aa0._11_1_);
      auVar58[0xc] = -(pcVar1[0xc] == DAT_142e34aa0._12_1_);
      auVar58[0xd] = -(pcVar1[0xd] == DAT_142e34aa0._13_1_);
      auVar58[0xe] = -(pcVar1[0xe] == DAT_142e34aa0._14_1_);
      auVar58[0xf] = -(pcVar1[0xf] == DAT_142e34aa0._15_1_);
      uVar9 = (ushort)(SUB161(auVar58 >> 7,0) & 1) | (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar58 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar58 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar58 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar58 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar58 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar58 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar58 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar58 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar58 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar58 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar58 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar58 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe | (ushort)(auVar58[0xf] >> 7) << 0xf;
      uVar8 = (uint)uVar9;
      while (uVar9 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar10 = uVar4 + uVar6 & *(ulonglong *)(param_1 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar10 * -0x18);
        auVar59[0] = -(*pcVar2 == DAT_142e34ab0);
        auVar59[1] = -(pcVar2[1] == UNK_142e34ab1);
        auVar59[2] = -(pcVar2[2] == UNK_142e34ab2);
        auVar59[3] = -(pcVar2[3] == UNK_142e34ab3);
        auVar59[4] = -(pcVar2[4] == UNK_142e34ab4);
        auVar59[5] = -(pcVar2[5] == UNK_142e34ab5);
        auVar59[6] = -(pcVar2[6] == UNK_142e34ab6);
        auVar59[7] = -(pcVar2[7] == UNK_142e34ab7);
        auVar59[8] = -(pcVar2[8] == UNK_142e34ab8);
        auVar59[9] = -(pcVar2[9] == UNK_142e34ab9);
        auVar59[10] = -(pcVar2[10] == UNK_142e34aba);
        auVar59[0xb] = -(pcVar2[0xb] == UNK_142e34abb);
        auVar59[0xc] = -(pcVar2[0xc] == UNK_142e34abc);
        auVar59[0xd] = -(pcVar2[0xd] == UNK_142e34abd);
        auVar59[0xe] = -(pcVar2[0xe] == UNK_142e34abe);
        auVar59[0xf] = -(pcVar2[0xf] == UNK_142e34abf);
        if ((ushort)((ushort)(SUB161(auVar59 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar59[0xf] >> 7) << 0xf) == 0xffff) {
          uVar6 = *(ulonglong *)(lVar3 + uVar10 * -0x18 + -8);
          if (((*(ulonglong *)(param_1 + 0x210) <= uVar6) ||
              (uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar6 * 8), uVar6 == 0)) ||
             (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar6 * 0x40) == 0))
          goto LAB_14093f602;
          goto LAB_14093f618;
        }
        uVar9 = (ushort)(uVar8 - 1) & (ushort)uVar8;
        uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar9);
      }
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
                      (SUB161(auVar25 >> 0x17,0) & 1) != 0) || (SUB161(auVar25 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar25 >> 0x27,0) & 1) != 0) || (SUB161(auVar25 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar25 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar25 >> 0x3f,0) & 1) != 0) || (SUB161(auVar25 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar25 >> 0x4f,0) & 1) != 0) || (SUB161(auVar25 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar25 >> 0x5f,0) & 1) != 0) || (SUB161(auVar25 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar25 >> 0x6f,0) & 1) != 0) || (SUB161(auVar25 >> 0x77,0) & 1) != 0) ||
          auVar25[0xf] < '\0') break;
      uVar6 = uVar6 + lVar7 + 0x10;
      lVar7 = lVar7 + 0x10;
    }
  }
LAB_14093f602:
  pdb_1418d6c00(param_1);
  if (*(longlong *)(param_1 + 0x88) != 0) {
LAB_14093f618:
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar6 = 0x5c5d0c9e9d7a9cdc;
    lVar7 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(param_1 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar6);
      auVar60[0] = -(*pcVar1 == DAT_142f9ff20);
      auVar60[1] = -(pcVar1[1] == DAT_142f9ff20._1_1_);
      auVar60[2] = -(pcVar1[2] == DAT_142f9ff20._2_1_);
      auVar60[3] = -(pcVar1[3] == DAT_142f9ff20._3_1_);
      auVar60[4] = -(pcVar1[4] == DAT_142f9ff20._4_1_);
      auVar60[5] = -(pcVar1[5] == DAT_142f9ff20._5_1_);
      auVar60[6] = -(pcVar1[6] == DAT_142f9ff20._6_1_);
      auVar60[7] = -(pcVar1[7] == DAT_142f9ff20._7_1_);
      auVar60[8] = -(pcVar1[8] == DAT_142f9ff20._8_1_);
      auVar60[9] = -(pcVar1[9] == DAT_142f9ff20._9_1_);
      auVar60[10] = -(pcVar1[10] == DAT_142f9ff20._10_1_);
      auVar60[0xb] = -(pcVar1[0xb] == DAT_142f9ff20._11_1_);
      auVar60[0xc] = -(pcVar1[0xc] == DAT_142f9ff20._12_1_);
      auVar60[0xd] = -(pcVar1[0xd] == DAT_142f9ff20._13_1_);
      auVar60[0xe] = -(pcVar1[0xe] == DAT_142f9ff20._14_1_);
      auVar60[0xf] = -(pcVar1[0xf] == DAT_142f9ff20._15_1_);
      uVar9 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe | (ushort)(auVar60[0xf] >> 7) << 0xf;
      uVar8 = (uint)uVar9;
      while (uVar9 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar10 = uVar4 + uVar6 & *(ulonglong *)(param_1 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar10 * -0x18);
        auVar61[0] = -(*pcVar2 == DAT_143022c70);
        auVar61[1] = -(pcVar2[1] == UNK_143022c71);
        auVar61[2] = -(pcVar2[2] == UNK_143022c72);
        auVar61[3] = -(pcVar2[3] == UNK_143022c73);
        auVar61[4] = -(pcVar2[4] == UNK_143022c74);
        auVar61[5] = -(pcVar2[5] == UNK_143022c75);
        auVar61[6] = -(pcVar2[6] == UNK_143022c76);
        auVar61[7] = -(pcVar2[7] == UNK_143022c77);
        auVar61[8] = -(pcVar2[8] == UNK_143022c78);
        auVar61[9] = -(pcVar2[9] == UNK_143022c79);
        auVar61[10] = -(pcVar2[10] == UNK_143022c7a);
        auVar61[0xb] = -(pcVar2[0xb] == UNK_143022c7b);
        auVar61[0xc] = -(pcVar2[0xc] == UNK_143022c7c);
        auVar61[0xd] = -(pcVar2[0xd] == UNK_143022c7d);
        auVar61[0xe] = -(pcVar2[0xe] == UNK_143022c7e);
        auVar61[0xf] = -(pcVar2[0xf] == UNK_143022c7f);
        if ((ushort)((ushort)(SUB161(auVar61 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar61 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar61 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar61 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar61 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar61 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar61 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar61 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar61 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar61 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar61 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar61 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar61 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar61 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar61 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar61[0xf] >> 7) << 0xf) == 0xffff) {
          uVar6 = *(ulonglong *)(lVar3 + uVar10 * -0x18 + -8);
          if (((*(ulonglong *)(param_1 + 0x210) <= uVar6) ||
              (uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar6 * 8), uVar6 == 0)) ||
             (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar6 * 0x40) == 0))
          goto LAB_14093f6f2;
          goto LAB_14093f6fa;
        }
        uVar9 = (ushort)(uVar8 - 1) & (ushort)uVar8;
        uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar9);
      }
      auVar26[0] = -(*pcVar1 == -1);
      auVar26[1] = -(pcVar1[1] == -1);
      auVar26[2] = -(pcVar1[2] == -1);
      auVar26[3] = -(pcVar1[3] == -1);
      auVar26[4] = -(pcVar1[4] == -1);
      auVar26[5] = -(pcVar1[5] == -1);
      auVar26[6] = -(pcVar1[6] == -1);
      auVar26[7] = -(pcVar1[7] == -1);
      auVar26[8] = -(pcVar1[8] == -1);
      auVar26[9] = -(pcVar1[9] == -1);
      auVar26[10] = -(pcVar1[10] == -1);
      auVar26[0xb] = -(pcVar1[0xb] == -1);
      auVar26[0xc] = -(pcVar1[0xc] == -1);
      auVar26[0xd] = -(pcVar1[0xd] == -1);
      auVar26[0xe] = -(pcVar1[0xe] == -1);
      auVar26[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar26 >> 7,0) & 1) != 0 || (SUB161(auVar26 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar26 >> 0x17,0) & 1) != 0) || (SUB161(auVar26 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar26 >> 0x27,0) & 1) != 0) || (SUB161(auVar26 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar26 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar26 >> 0x3f,0) & 1) != 0) || (SUB161(auVar26 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar26 >> 0x4f,0) & 1) != 0) || (SUB161(auVar26 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar26 >> 0x5f,0) & 1) != 0) || (SUB161(auVar26 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar26 >> 0x6f,0) & 1) != 0) || (SUB161(auVar26 >> 0x77,0) & 1) != 0) ||
          auVar26[0xf] < '\0') break;
      uVar6 = uVar6 + lVar7 + 0x10;
      lVar7 = lVar7 + 0x10;
    }
  }
LAB_14093f6f2:
  pdb_1418d3c00(param_1);
LAB_14093f6fa:
  if (*(longlong *)(param_1 + 0x88) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar6 = 0x2de23258c146ff6b;
    lVar7 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(param_1 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar6);
      auVar62[0] = -(*pcVar1 == DAT_142e34c00);
      auVar62[1] = -(pcVar1[1] == DAT_142e34c00._1_1_);
      auVar62[2] = -(pcVar1[2] == DAT_142e34c00._2_1_);
      auVar62[3] = -(pcVar1[3] == DAT_142e34c00._3_1_);
      auVar62[4] = -(pcVar1[4] == DAT_142e34c00._4_1_);
      auVar62[5] = -(pcVar1[5] == DAT_142e34c00._5_1_);
      auVar62[6] = -(pcVar1[6] == DAT_142e34c00._6_1_);
      auVar62[7] = -(pcVar1[7] == DAT_142e34c00._7_1_);
      auVar62[8] = -(pcVar1[8] == DAT_142e34c00._8_1_);
      auVar62[9] = -(pcVar1[9] == DAT_142e34c00._9_1_);
      auVar62[10] = -(pcVar1[10] == DAT_142e34c00._10_1_);
      auVar62[0xb] = -(pcVar1[0xb] == DAT_142e34c00._11_1_);
      auVar62[0xc] = -(pcVar1[0xc] == DAT_142e34c00._12_1_);
      auVar62[0xd] = -(pcVar1[0xd] == DAT_142e34c00._13_1_);
      auVar62[0xe] = -(pcVar1[0xe] == DAT_142e34c00._14_1_);
      auVar62[0xf] = -(pcVar1[0xf] == DAT_142e34c00._15_1_);
      uVar9 = (ushort)(SUB161(auVar62 >> 7,0) & 1) | (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar62 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar62 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar62 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar62 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar62 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar62 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar62 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar62 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar62 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar62 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar62 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe | (ushort)(auVar62[0xf] >> 7) << 0xf;
      uVar8 = (uint)uVar9;
      while (uVar9 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar10 = uVar4 + uVar6 & *(ulonglong *)(param_1 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar10 * -0x18);
        auVar63[0] = -(*pcVar2 == DAT_142e34ff0);
        auVar63[1] = -(pcVar2[1] == UNK_142e34ff1);
        auVar63[2] = -(pcVar2[2] == UNK_142e34ff2);
        auVar63[3] = -(pcVar2[3] == UNK_142e34ff3);
        auVar63[4] = -(pcVar2[4] == UNK_142e34ff4);
        auVar63[5] = -(pcVar2[5] == UNK_142e34ff5);
        auVar63[6] = -(pcVar2[6] == UNK_142e34ff6);
        auVar63[7] = -(pcVar2[7] == UNK_142e34ff7);
        auVar63[8] = -(pcVar2[8] == UNK_142e34ff8);
        auVar63[9] = -(pcVar2[9] == UNK_142e34ff9);
        auVar63[10] = -(pcVar2[10] == UNK_142e34ffa);
        auVar63[0xb] = -(pcVar2[0xb] == UNK_142e34ffb);
        auVar63[0xc] = -(pcVar2[0xc] == UNK_142e34ffc);
        auVar63[0xd] = -(pcVar2[0xd] == UNK_142e34ffd);
        auVar63[0xe] = -(pcVar2[0xe] == UNK_142e34ffe);
        auVar63[0xf] = -(pcVar2[0xf] == UNK_142e34fff);
        if ((ushort)((ushort)(SUB161(auVar63 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar63 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar63 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar63 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar63 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar63 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar63 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar63 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar63 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar63 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar63 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar63 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar63 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar63 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar63 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar63[0xf] >> 7) << 0xf) == 0xffff) {
          uVar6 = *(ulonglong *)(lVar3 + uVar10 * -0x18 + -8);
          if (((*(ulonglong *)(param_1 + 0x210) <= uVar6) ||
              (uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar6 * 8), uVar6 == 0)) ||
             (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar6 * 0x40) == 0))
          goto LAB_14093f7e2;
          goto LAB_14093f7f8;
        }
        uVar9 = (ushort)(uVar8 - 1) & (ushort)uVar8;
        uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar9);
      }
      auVar27[0] = -(*pcVar1 == -1);
      auVar27[1] = -(pcVar1[1] == -1);
      auVar27[2] = -(pcVar1[2] == -1);
      auVar27[3] = -(pcVar1[3] == -1);
      auVar27[4] = -(pcVar1[4] == -1);
      auVar27[5] = -(pcVar1[5] == -1);
      auVar27[6] = -(pcVar1[6] == -1);
      auVar27[7] = -(pcVar1[7] == -1);
      auVar27[8] = -(pcVar1[8] == -1);
      auVar27[9] = -(pcVar1[9] == -1);
      auVar27[10] = -(pcVar1[10] == -1);
      auVar27[0xb] = -(pcVar1[0xb] == -1);
      auVar27[0xc] = -(pcVar1[0xc] == -1);
      auVar27[0xd] = -(pcVar1[0xd] == -1);
      auVar27[0xe] = -(pcVar1[0xe] == -1);
      auVar27[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar27 >> 7,0) & 1) != 0 || (SUB161(auVar27 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar27 >> 0x17,0) & 1) != 0) || (SUB161(auVar27 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar27 >> 0x27,0) & 1) != 0) || (SUB161(auVar27 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar27 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar27 >> 0x3f,0) & 1) != 0) || (SUB161(auVar27 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar27 >> 0x4f,0) & 1) != 0) || (SUB161(auVar27 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar27 >> 0x5f,0) & 1) != 0) || (SUB161(auVar27 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar27 >> 0x6f,0) & 1) != 0) || (SUB161(auVar27 >> 0x77,0) & 1) != 0) ||
          auVar27[0xf] < '\0') break;
      uVar6 = uVar6 + lVar7 + 0x10;
      lVar7 = lVar7 + 0x10;
    }
  }
LAB_14093f7e2:
  pdb_1418e6df0(param_1);
  if (*(longlong *)(param_1 + 0x88) != 0) {
LAB_14093f7f8:
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar6 = 0x997c99c1da4f5849;
    lVar7 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(param_1 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar6);
      auVar64[0] = -(*pcVar1 == DAT_142e33dd0);
      auVar64[1] = -(pcVar1[1] == DAT_142e33dd0._1_1_);
      auVar64[2] = -(pcVar1[2] == DAT_142e33dd0._2_1_);
      auVar64[3] = -(pcVar1[3] == DAT_142e33dd0._3_1_);
      auVar64[4] = -(pcVar1[4] == DAT_142e33dd0._4_1_);
      auVar64[5] = -(pcVar1[5] == DAT_142e33dd0._5_1_);
      auVar64[6] = -(pcVar1[6] == DAT_142e33dd0._6_1_);
      auVar64[7] = -(pcVar1[7] == DAT_142e33dd0._7_1_);
      auVar64[8] = -(pcVar1[8] == DAT_142e33dd0._8_1_);
      auVar64[9] = -(pcVar1[9] == DAT_142e33dd0._9_1_);
      auVar64[10] = -(pcVar1[10] == DAT_142e33dd0._10_1_);
      auVar64[0xb] = -(pcVar1[0xb] == DAT_142e33dd0._11_1_);
      auVar64[0xc] = -(pcVar1[0xc] == DAT_142e33dd0._12_1_);
      auVar64[0xd] = -(pcVar1[0xd] == DAT_142e33dd0._13_1_);
      auVar64[0xe] = -(pcVar1[0xe] == DAT_142e33dd0._14_1_);
      auVar64[0xf] = -(pcVar1[0xf] == DAT_142e33dd0._15_1_);
      uVar9 = (ushort)(SUB161(auVar64 >> 7,0) & 1) | (ushort)(SUB161(auVar64 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar64 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar64 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar64 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar64 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar64 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar64 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar64 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar64 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar64 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar64 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar64 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar64 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar64 >> 0x77,0) & 1) << 0xe | (ushort)(auVar64[0xf] >> 7) << 0xf;
      uVar8 = (uint)uVar9;
      while (uVar9 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar10 = uVar4 + uVar6 & *(ulonglong *)(param_1 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar10 * -0x18);
        auVar65[0] = -(*pcVar2 == DAT_142e34ca0);
        auVar65[1] = -(pcVar2[1] == UNK_142e34ca1);
        auVar65[2] = -(pcVar2[2] == UNK_142e34ca2);
        auVar65[3] = -(pcVar2[3] == UNK_142e34ca3);
        auVar65[4] = -(pcVar2[4] == UNK_142e34ca4);
        auVar65[5] = -(pcVar2[5] == UNK_142e34ca5);
        auVar65[6] = -(pcVar2[6] == UNK_142e34ca6);
        auVar65[7] = -(pcVar2[7] == UNK_142e34ca7);
        auVar65[8] = -(pcVar2[8] == UNK_142e34ca8);
        auVar65[9] = -(pcVar2[9] == UNK_142e34ca9);
        auVar65[10] = -(pcVar2[10] == UNK_142e34caa);
        auVar65[0xb] = -(pcVar2[0xb] == UNK_142e34cab);
        auVar65[0xc] = -(pcVar2[0xc] == UNK_142e34cac);
        auVar65[0xd] = -(pcVar2[0xd] == UNK_142e34cad);
        auVar65[0xe] = -(pcVar2[0xe] == UNK_142e34cae);
        auVar65[0xf] = -(pcVar2[0xf] == UNK_142e34caf);
        if ((ushort)((ushort)(SUB161(auVar65 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar65 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar65 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar65 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar65 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar65 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar65 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar65 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar65 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar65 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar65 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar65 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar65 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar65[0xf] >> 7) << 0xf) == 0xffff) {
          uVar6 = *(ulonglong *)(lVar3 + uVar10 * -0x18 + -8);
          if (((*(ulonglong *)(param_1 + 0x210) <= uVar6) ||
              (uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar6 * 8), uVar6 == 0)) ||
             (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar6 * 0x40) == 0))
          goto LAB_14093f8d2;
          goto LAB_14093f8e8;
        }
        uVar9 = (ushort)(uVar8 - 1) & (ushort)uVar8;
        uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar9);
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
      uVar6 = uVar6 + lVar7 + 0x10;
      lVar7 = lVar7 + 0x10;
    }
  }
LAB_14093f8d2:
  pdb_1418dc600(param_1);
  if (*(longlong *)(param_1 + 0x88) != 0) {
LAB_14093f8e8:
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar6 = 0x3aedebfa40d5cce2;
    lVar7 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(param_1 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar6);
      auVar66[0] = -(*pcVar1 == DAT_142e34730);
      auVar66[1] = -(pcVar1[1] == DAT_142e34730._1_1_);
      auVar66[2] = -(pcVar1[2] == DAT_142e34730._2_1_);
      auVar66[3] = -(pcVar1[3] == DAT_142e34730._3_1_);
      auVar66[4] = -(pcVar1[4] == DAT_142e34730._4_1_);
      auVar66[5] = -(pcVar1[5] == DAT_142e34730._5_1_);
      auVar66[6] = -(pcVar1[6] == DAT_142e34730._6_1_);
      auVar66[7] = -(pcVar1[7] == DAT_142e34730._7_1_);
      auVar66[8] = -(pcVar1[8] == DAT_142e34730._8_1_);
      auVar66[9] = -(pcVar1[9] == DAT_142e34730._9_1_);
      auVar66[10] = -(pcVar1[10] == DAT_142e34730._10_1_);
      auVar66[0xb] = -(pcVar1[0xb] == DAT_142e34730._11_1_);
      auVar66[0xc] = -(pcVar1[0xc] == DAT_142e34730._12_1_);
      auVar66[0xd] = -(pcVar1[0xd] == DAT_142e34730._13_1_);
      auVar66[0xe] = -(pcVar1[0xe] == DAT_142e34730._14_1_);
      auVar66[0xf] = -(pcVar1[0xf] == DAT_142e34730._15_1_);
      uVar9 = (ushort)(SUB161(auVar66 >> 7,0) & 1) | (ushort)(SUB161(auVar66 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar66 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar66 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar66 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar66 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar66 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar66 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar66 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar66 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar66 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar66 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar66 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar66 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar66 >> 0x77,0) & 1) << 0xe | (ushort)(auVar66[0xf] >> 7) << 0xf;
      uVar8 = (uint)uVar9;
      while (uVar9 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar10 = uVar4 + uVar6 & *(ulonglong *)(param_1 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar10 * -0x18);
        auVar67[0] = -(*pcVar2 == DAT_143022c80);
        auVar67[1] = -(pcVar2[1] == UNK_143022c81);
        auVar67[2] = -(pcVar2[2] == UNK_143022c82);
        auVar67[3] = -(pcVar2[3] == UNK_143022c83);
        auVar67[4] = -(pcVar2[4] == UNK_143022c84);
        auVar67[5] = -(pcVar2[5] == UNK_143022c85);
        auVar67[6] = -(pcVar2[6] == UNK_143022c86);
        auVar67[7] = -(pcVar2[7] == UNK_143022c87);
        auVar67[8] = -(pcVar2[8] == UNK_143022c88);
        auVar67[9] = -(pcVar2[9] == UNK_143022c89);
        auVar67[10] = -(pcVar2[10] == UNK_143022c8a);
        auVar67[0xb] = -(pcVar2[0xb] == UNK_143022c8b);
        auVar67[0xc] = -(pcVar2[0xc] == UNK_143022c8c);
        auVar67[0xd] = -(pcVar2[0xd] == UNK_143022c8d);
        auVar67[0xe] = -(pcVar2[0xe] == UNK_143022c8e);
        auVar67[0xf] = -(pcVar2[0xf] == UNK_143022c8f);
        if ((ushort)((ushort)(SUB161(auVar67 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar67 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar67 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar67 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar67 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar67 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar67 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar67 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar67 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar67 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar67 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar67 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar67 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar67 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar67 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar67[0xf] >> 7) << 0xf) == 0xffff) {
          uVar6 = *(ulonglong *)(lVar3 + uVar10 * -0x18 + -8);
          if (((uVar6 < *(ulonglong *)(param_1 + 0x210)) &&
              (uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar6 * 8), uVar6 != 0)) &&
             (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar6 * 0x40) != 0)) {
            return param_1;
          }
          goto LAB_14093f9cb;
        }
        uVar9 = (ushort)(uVar8 - 1) & (ushort)uVar8;
        uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar9);
      }
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
                      (SUB161(auVar29 >> 0x17,0) & 1) != 0) || (SUB161(auVar29 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar29 >> 0x27,0) & 1) != 0) || (SUB161(auVar29 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar29 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar29 >> 0x3f,0) & 1) != 0) || (SUB161(auVar29 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar29 >> 0x4f,0) & 1) != 0) || (SUB161(auVar29 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar29 >> 0x5f,0) & 1) != 0) || (SUB161(auVar29 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar29 >> 0x6f,0) & 1) != 0) || (SUB161(auVar29 >> 0x77,0) & 1) != 0) ||
          auVar29[0xf] < '\0') break;
      uVar6 = uVar6 + lVar7 + 0x10;
      lVar7 = lVar7 + 0x10;
    }
  }
LAB_14093f9cb:
  pdb_1418db400(param_1);
  return param_1;
}

