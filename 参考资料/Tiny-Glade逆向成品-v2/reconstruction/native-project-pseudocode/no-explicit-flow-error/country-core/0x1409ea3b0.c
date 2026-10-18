// VA 0x1409ea3b0, PDB extent 1242 bytes
// country_core::systems::render_loop::draw_passes::deferred_raster::deferred_raster
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/deferred_raster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::draw_passes::deferred_raster::deferred_raster
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/deferred_raster.rs
   Extent: 1242 */

void pdb_1409ea3b0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  char *pcVar1;
  char *pcVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  ushort uVar16;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auStack_1a8 [20];
  undefined1 auStack_194 [16];
  undefined4 uStack_184;
  undefined4 auStack_180 [2];
  undefined8 uStack_178;
  undefined8 uStack_160;
  longlong lStack_158;
  undefined4 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  uint uStack_104;
  undefined4 uStack_100;
  uint uStack_fc;
  undefined4 uStack_f8;
  undefined1 uStack_f4;
  undefined4 uStack_f0;
  undefined1 uStack_ec;
  undefined4 uStack_e8;
  undefined1 uStack_e4;
  undefined **ppuStack_e0;
  longlong lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulonglong **ppuStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  ulonglong *puStack_60;
  undefined8 uStack_58;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_70 = param_5;
  auStack_68[0] = param_6;
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar9 = *(longlong *)(param_2 + 0x70);
    uVar3 = *(ulonglong *)(param_2 + 0x78);
    uVar12 = 0x1d6a82b468dfb8a2;
    lVar13 = 0;
    while( true ) {
      uVar12 = uVar12 & uVar3;
      pcVar1 = (char *)(lVar9 + uVar12);
      auVar20[0] = -(*pcVar1 == DAT_142e34ec0);
      auVar20[1] = -(pcVar1[1] == UNK_142e34ec1);
      auVar20[2] = -(pcVar1[2] == UNK_142e34ec2);
      auVar20[3] = -(pcVar1[3] == UNK_142e34ec3);
      auVar20[4] = -(pcVar1[4] == UNK_142e34ec4);
      auVar20[5] = -(pcVar1[5] == UNK_142e34ec5);
      auVar20[6] = -(pcVar1[6] == UNK_142e34ec6);
      auVar20[7] = -(pcVar1[7] == UNK_142e34ec7);
      auVar20[8] = -(pcVar1[8] == UNK_142e34ec8);
      auVar20[9] = -(pcVar1[9] == UNK_142e34ec9);
      auVar20[10] = -(pcVar1[10] == UNK_142e34eca);
      auVar20[0xb] = -(pcVar1[0xb] == UNK_142e34ecb);
      auVar20[0xc] = -(pcVar1[0xc] == UNK_142e34ecc);
      auVar20[0xd] = -(pcVar1[0xd] == UNK_142e34ecd);
      auVar20[0xe] = -(pcVar1[0xe] == UNK_142e34ece);
      auVar20[0xf] = -(pcVar1[0xf] == UNK_142e34ecf);
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
      uVar14 = (uint)uVar16;
      while (uVar16 != 0) {
        uVar6 = 0;
        for (uVar7 = uVar14; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        uVar17 = uVar6 + uVar12 & uVar3;
        pcVar2 = (char *)(lVar9 + -0x18 + uVar17 * -0x18);
        auVar21[0] = -(*pcVar2 == DAT_142e60e60);
        auVar21[1] = -(pcVar2[1] == UNK_142e60e61);
        auVar21[2] = -(pcVar2[2] == UNK_142e60e62);
        auVar21[3] = -(pcVar2[3] == UNK_142e60e63);
        auVar21[4] = -(pcVar2[4] == UNK_142e60e64);
        auVar21[5] = -(pcVar2[5] == UNK_142e60e65);
        auVar21[6] = -(pcVar2[6] == UNK_142e60e66);
        auVar21[7] = -(pcVar2[7] == UNK_142e60e67);
        auVar21[8] = -(pcVar2[8] == UNK_142e60e68);
        auVar21[9] = -(pcVar2[9] == UNK_142e60e69);
        auVar21[10] = -(pcVar2[10] == UNK_142e60e6a);
        auVar21[0xb] = -(pcVar2[0xb] == UNK_142e60e6b);
        auVar21[0xc] = -(pcVar2[0xc] == UNK_142e60e6c);
        auVar21[0xd] = -(pcVar2[0xd] == UNK_142e60e6d);
        auVar21[0xe] = -(pcVar2[0xe] == UNK_142e60e6e);
        auVar21[0xf] = -(pcVar2[0xf] == UNK_142e60e6f);
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
          uVar12 = *(ulonglong *)(lVar9 + uVar17 * -0x18 + -8);
          if (*(ulonglong *)(param_2 + 0x210) <= uVar12) goto LAB_1409ea813;
          uVar12 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar12 * 8);
          if (uVar12 == 0) goto LAB_1409ea813;
          lVar13 = *(longlong *)(param_2 + 0x1d8);
          lVar15 = ~uVar12 * 0x40;
          if (*(longlong *)(lVar13 + 0x20 + lVar15) == 0) goto LAB_1409ea813;
          uVar4 = *(undefined8 *)(lVar15 + lVar13 + 0x10);
          uVar12 = 0x7057b4358e925fdb;
          lVar15 = 0;
          goto LAB_1409ea51d;
        }
        uVar16 = (ushort)(uVar14 - 1) & (ushort)uVar14;
        uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar16);
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
      uVar12 = uVar12 + lVar13 + 0x10;
      lVar13 = lVar13 + 0x10;
    }
  }
LAB_1409ea813:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_1430323c8);
LAB_1409ea51d:
  uVar12 = uVar12 & uVar3;
  auVar20 = *(undefined1 (*) [16])(lVar9 + uVar12);
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
  uVar14 = (uint)uVar16;
  while (uVar16 != 0) {
    uVar6 = 0;
    for (uVar7 = uVar14; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    uVar17 = uVar6 + uVar12 & uVar3;
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
      uVar3 = *(ulonglong *)(lVar9 + uVar17 * -0x18 + -8);
      if (((uVar3 < *(ulonglong *)(param_2 + 0x210)) &&
          (uVar3 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar3 * 8), uVar3 != 0)) &&
         (lVar9 = ~uVar3 * 0x40, *(longlong *)(lVar13 + 0x20 + lVar9) != 0)) {
        uVar5 = *(undefined8 *)(lVar13 + lVar9 + 0x10);
        puVar10 = (undefined8 *)pdb_140bf45b0(uVar4,&UNK_14331c960);
        if ((puVar10 != (undefined8 *)0x0) &&
           (lVar9 = (**(code **)(puVar10[1] + 0x18))(*puVar10), lVar9 != 0)) {
          uStack_4c = (undefined4)*(undefined8 *)(lVar9 + 8);
          pdb_141526cc0(auStack_1a8,uVar4,param_1);
          uVar11 = uVar4;
          pdb_141526380(&uStack_108,uVar4,param_1);
          uStack_184 = uStack_f8;
          uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),0xd);
          puStack_60 = (ulonglong *)pdb_140a2db30(uVar5);
          puStack_148 = &UNK_143032410;
          uStack_140 = 0x29;
          puStack_138 = &UNK_143032439;
          uStack_130 = 0x29;
          puStack_128 = &UNK_143032462;
          uStack_120 = 0x29;
          puStack_118 = &UNK_14303248b;
          auStack_180[0] = 0;
          lStack_158 = param_3 + 0x18;
          uStack_160 = 1;
          uStack_108 = 1;
          uStack_104 = uStack_104 & 0xffffff00;
          uStack_100 = 3;
          uStack_fc = uStack_fc & 0xffffff00;
          uStack_f8 = 0;
          uStack_f4 = 0;
          uStack_f0 = 0;
          uStack_ec = 1;
          uStack_e8 = 2;
          uStack_e4 = 0;
          ppuStack_e0 = &puStack_148;
          uStack_d0 = param_8;
          uStack_c8 = param_5;
          puStack_c0 = auStack_68;
          uStack_b8 = param_12;
          uStack_b0 = param_11;
          uStack_a8 = param_9;
          puStack_a0 = &uStack_4c;
          uStack_98 = param_7;
          uStack_90 = param_10;
          ppuStack_88 = &puStack_60;
          puStack_78 = auStack_194;
          uStack_110 = 0x2a;
          uStack_150 = 0;
          uStack_178 = param_4;
          lStack_d8 = param_3;
          puStack_80 = auStack_1a8;
          uStack_58 = uVar11;
          pdb_14175bb80(param_1,&UNK_1430324b5,0x17,auStack_180,&uStack_108);
          puVar8 = puStack_60;
          pdb_140e9a350(puStack_60);
          pdb_140e9a350((ulonglong)puVar8 | 1);
          LOCK();
          uVar3 = *puVar8;
          *puVar8 = *puVar8 - 0x10;
          UNLOCK();
          if ((uVar3 & 0xfffffffffffffff2) == 0x12) {
            pdb_142dbbf50(puVar8);
          }
          pdb_141534c10(uVar4,param_1);
          pdb_141535000(uVar4,param_1);
          return;
        }
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_1430323f8);
      }
      goto LAB_1409ea81f;
    }
    uVar16 = (ushort)(uVar14 - 1) & (ushort)uVar14;
    uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar16);
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
LAB_1409ea81f:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_1430323e0);
  }
  uVar12 = uVar12 + lVar15 + 0x10;
  lVar15 = lVar15 + 0x10;
  goto LAB_1409ea51d;
}

