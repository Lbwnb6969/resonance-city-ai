// VA 0x1409ac8e0, PDB extent 2071 bytes
// country_core::systems::render_loop::draw_passes::main_pass::main_pass
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/main_pass.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::draw_passes::main_pass::main_pass
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/main_pass.rs
   Extent: 2071 */

void pdb_1409ac8e0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined *param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  char *pcVar3;
  undefined1 auVar4 [16];
  byte bVar5;
  byte bVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined *puVar12;
  longlong *plVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined **ppuVar16;
  longlong lVar17;
  ushort uVar18;
  undefined *puVar19;
  undefined *puVar20;
  longlong lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined *puStack_158;
  longlong *plStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_120;
  longlong *plStack_118;
  undefined *puStack_110;
  undefined4 uStack_100;
  undefined1 auStack_fc [16];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  longlong lStack_d8;
  undefined4 uStack_d0;
  undefined4 auStack_c8 [2];
  longlong lStack_c0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  longlong lStack_a0;
  undefined4 uStack_98;
  longlong lStack_90;
  undefined8 uStack_88;
  longlong lStack_80;
  undefined4 uStack_78;
  longlong lStack_70;
  undefined8 uStack_68;
  longlong *plStack_60;
  longlong *plStack_58;
  undefined uStack_4a;
  char cStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_68 = param_4;
  plStack_58 = (longlong *)param_3;
  cStack_49 = pdb_140e94b40();
  if (cStack_49 == '\0') {
    uStack_140 = 0;
    lVar10 = *(longlong *)(param_1 + 0x130);
    if (lVar10 == *(longlong *)(param_1 + 0x120)) goto LAB_1409acaef;
    goto LAB_1409acafc;
  }
  puVar19 = &UNK_14302a4c5;
  lVar21 = 0x45;
  uVar15 = 0x45;
  lVar10 = pdb_1409b4de0(&UNK_14302a4c5);
  if (lVar10 == 1) {
    if (uVar15 < 0x46) {
      puVar19 = &UNK_14302a4c5;
      uVar11 = pdb_1409b4de0(&UNK_14302a4c5);
      if ((uVar11 & 1) != 0) {
        if (0x45 < uVar15 + 2) goto LAB_1409acfed;
        lVar21 = 0x43 - uVar15;
        puVar19 = &UNK_14302a4c7 + uVar15;
      }
      goto LAB_1409ac991;
    }
  }
  else {
LAB_1409ac991:
    puVar12 = &UNK_143029428;
    puVar20 = &UNK_1430293e4;
    do {
      pbVar1 = puVar12 + -1;
      uVar14 = (uint)(char)*pbVar1;
      if ((int)uVar14 < 0) {
        bVar5 = puVar12[-2];
        if ((char)bVar5 < -0x40) {
          bVar6 = puVar12[-3];
          if ((char)bVar6 < -0x40) {
            pbVar2 = puVar12 + -4;
            puVar12 = puVar12 + -4;
            uVar14 = bVar6 & 0x3f | (*pbVar2 & 7) << 6;
          }
          else {
            puVar12 = puVar12 + -3;
            uVar14 = bVar6 & 0xf;
          }
          uVar14 = bVar5 & 0x3f | uVar14 << 6;
        }
        else {
          puVar12 = puVar12 + -2;
          uVar14 = bVar5 & 0x1f;
        }
        uVar14 = (uint)(*pbVar1 & 0x3f) | uVar14 << 6;
        if (uVar14 != 0x5c) goto LAB_1409aca19;
LAB_1409aca4d:
        if ((undefined *)0x44 < puVar12 + -0x1430293e3) goto LAB_1409acfaa;
        ppuVar16 = (undefined **)(0x43 - (longlong)(puVar12 + -0x1430293e4));
        puVar20 = puVar12 + 1;
        goto LAB_1409aca70;
      }
      puVar12 = puVar12 + -1;
      if (uVar14 == 0x5c) goto LAB_1409aca4d;
LAB_1409aca19:
      if (uVar14 == 0x2f) goto LAB_1409aca4d;
    } while (puVar12 != &UNK_1430293e4);
    ppuVar16 = (undefined **)0x44;
LAB_1409aca70:
    plVar13 = (longlong *)pdb_140e97000();
    if ((char)plVar13[0xd] != '\x01') goto LAB_1409acf6f;
    do {
      if (*plVar13 == 0) {
        *plVar13 = -1;
        plStack_60 = plVar13;
        uStack_138 = pdb_140e94f10(plVar13 + 1,puVar19,lVar21,puVar20,ppuVar16,1,0);
        *plStack_60 = *plStack_60 + 1;
        uStack_140 = 1;
        lVar10 = *(longlong *)(param_1 + 0x130);
        plStack_60 = (longlong *)uStack_138;
        if (lVar10 == *(longlong *)(param_1 + 0x120)) {
LAB_1409acaef:
          pdb_142d8afd0(param_1 + 0x120);
        }
LAB_1409acafc:
        lVar21 = (longlong)plStack_58 + 0x18;
        lVar17 = *(longlong *)(param_1 + 0x128);
        *(undefined **)(lVar17 + lVar10 * 0x10) = &UNK_1430294b7;
        *(undefined8 *)(lVar17 + 8 + lVar10 * 0x10) = 9;
        *(longlong *)(param_1 + 0x130) = lVar10 + 1;
        uStack_4a = 0;
        auStack_c8[0] = 2;
        lStack_c0 = (longlong)plStack_58;
        uStack_a8 = 0;
        uStack_a4 = 0;
        uStack_98 = 0;
        puStack_120 = param_5;
        puVar19 = &uStack_4a;
        plStack_118 = &lStack_70;
        puStack_110 = puVar19;
        lStack_a0 = lVar21;
        lStack_70 = param_2;
        pdb_1417555e0(param_1,&UNK_1430294c0,8,auStack_c8,&puStack_120);
        uStack_a4 = 0;
        lStack_a0 = 0;
        uStack_98 = 0;
        auStack_fc = (undefined1  [16])0x0;
        puStack_120 = (undefined *)((ulonglong)puStack_120 & 0xffffffff00000000);
        plStack_118 = plStack_58;
        uStack_100 = 1;
        uStack_e8 = uStack_68;
        uStack_e0 = 0;
        uStack_d0 = 0;
        puStack_158 = param_5;
        ppuVar16 = &puStack_120;
        plStack_150 = &lStack_70;
        puStack_148 = puVar19;
        lStack_d8 = lVar21;
        pdb_141753370(param_1,&UNK_1430294c8,0x11,ppuVar16,&puStack_158);
        auStack_c8[0] = 0;
        lStack_c0 = (longlong)plStack_58;
        lStack_90 = (longlong)plStack_58 + 0x30;
        uStack_a8 = 1;
        uStack_88 = 0;
        uStack_78 = 0;
        puStack_120 = param_5;
        plStack_118 = &lStack_70;
        puStack_110 = puVar19;
        lStack_80 = lVar21;
        plStack_58 = (longlong *)lStack_90;
        pdb_14175e860(param_1,&UNK_1430294d9,0x11,auStack_c8,ppuVar16);
        if (*(longlong *)(param_2 + 0x88) != 0) {
          lVar10 = *(longlong *)(param_2 + 0x70);
          uVar15 = 0x2c288e147d7c07ef;
          lVar17 = 0;
          while( true ) {
            uVar15 = uVar15 & *(ulonglong *)(param_2 + 0x78);
            auVar4 = *(undefined1 (*) [16])(lVar10 + uVar15);
            auVar23[0] = -(auVar4[0] == DAT_142e34c00);
            auVar23[1] = -(auVar4[1] == DAT_142e34c00._1_1_);
            auVar23[2] = -(auVar4[2] == DAT_142e34c00._2_1_);
            auVar23[3] = -(auVar4[3] == DAT_142e34c00._3_1_);
            auVar23[4] = -(auVar4[4] == DAT_142e34c00._4_1_);
            auVar23[5] = -(auVar4[5] == DAT_142e34c00._5_1_);
            auVar23[6] = -(auVar4[6] == DAT_142e34c00._6_1_);
            auVar23[7] = -(auVar4[7] == DAT_142e34c00._7_1_);
            auVar23[8] = -(auVar4[8] == DAT_142e34c00._8_1_);
            auVar23[9] = -(auVar4[9] == DAT_142e34c00._9_1_);
            auVar23[10] = -(auVar4[10] == DAT_142e34c00._10_1_);
            auVar23[0xb] = -(auVar4[0xb] == DAT_142e34c00._11_1_);
            auVar23[0xc] = -(auVar4[0xc] == DAT_142e34c00._12_1_);
            auVar23[0xd] = -(auVar4[0xd] == DAT_142e34c00._13_1_);
            auVar23[0xe] = -(auVar4[0xe] == DAT_142e34c00._14_1_);
            auVar23[0xf] = -(auVar4[0xf] == DAT_142e34c00._15_1_);
            uVar18 = (ushort)(SUB161(auVar23 >> 7,0) & 1) |
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
                     (ushort)(auVar23[0xf] >> 7) << 0xf;
            uVar14 = (uint)uVar18;
            while (uVar18 != 0) {
              uVar8 = 0;
              for (uVar9 = uVar14; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                uVar8 = uVar8 + 1;
              }
              uVar11 = uVar8 + uVar15 & *(ulonglong *)(param_2 + 0x78);
              pcVar3 = (char *)(lVar10 + -0x18 + uVar11 * -0x18);
              auVar24[0] = -(*pcVar3 == DAT_143028d20);
              auVar24[1] = -(pcVar3[1] == DAT_143028d20._1_1_);
              auVar24[2] = -(pcVar3[2] == DAT_143028d20._2_1_);
              auVar24[3] = -(pcVar3[3] == DAT_143028d20._3_1_);
              auVar24[4] = -(pcVar3[4] == DAT_143028d20._4_1_);
              auVar24[5] = -(pcVar3[5] == DAT_143028d20._5_1_);
              auVar24[6] = -(pcVar3[6] == DAT_143028d20._6_1_);
              auVar24[7] = -(pcVar3[7] == DAT_143028d20._7_1_);
              auVar24[8] = -(pcVar3[8] == DAT_143028d20._8_1_);
              auVar24[9] = -(pcVar3[9] == DAT_143028d20._9_1_);
              auVar24[10] = -(pcVar3[10] == DAT_143028d20._10_1_);
              auVar24[0xb] = -(pcVar3[0xb] == DAT_143028d20._11_1_);
              auVar24[0xc] = -(pcVar3[0xc] == DAT_143028d20._12_1_);
              auVar24[0xd] = -(pcVar3[0xd] == DAT_143028d20._13_1_);
              auVar24[0xe] = -(pcVar3[0xe] == DAT_143028d20._14_1_);
              auVar24[0xf] = -(pcVar3[0xf] == DAT_143028d20._15_1_);
              if ((ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
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
                           (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                          (ushort)(auVar24[0xf] >> 7) << 0xf) == 0xffff) {
                uVar15 = *(ulonglong *)(lVar10 + uVar11 * -0x18 + -8);
                if ((*(ulonglong *)(param_2 + 0x210) <= uVar15) ||
                   (uVar15 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar15 * 8),
                   uVar15 == 0)) goto LAB_1409acf54;
                lVar10 = ~uVar15 * 0x40;
                if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar10) == 0)
                goto LAB_1409acf54;
                puVar20 = param_5;
                if (**(int **)(*(longlong *)(param_2 + 0x1d8) + lVar10 + 0x10) == 0) {
                  auStack_c8[0] = 0;
                  lStack_c0 = uStack_68;
                  uStack_a8 = 0;
                  uStack_a4 = 0;
                  uStack_98 = 0;
                  puStack_120 = param_5;
                  plStack_118 = &lStack_70;
                  puStack_110 = puVar19;
                  lStack_a0 = lVar21;
                  pdb_14174e520(param_1,&UNK_143029508,7,auStack_c8,ppuVar16);
                  auStack_c8[0] = 0;
                  lStack_c0 = uStack_68;
                  uStack_a8 = 0;
                  lStack_a0 = (longlong)plStack_58;
                  uStack_88 = 0;
                  uStack_78 = 0;
                  puStack_120 = param_5;
                  plStack_118 = &lStack_70;
                  puStack_110 = puVar19;
                  lStack_80 = lVar21;
                  pdb_14175aa90(param_1,&UNK_14302950f,0xf,auStack_c8,ppuVar16);
                  puVar20 = puVar19;
                }
                auStack_c8[0] = 0;
                lStack_c0 = (longlong)plStack_58;
                uStack_a8 = 1;
                uStack_a4 = 0;
                uStack_98 = 0;
                puStack_120 = param_5;
                plStack_118 = &lStack_70;
                puStack_110 = puVar19;
                lStack_a0 = lVar21;
                pdb_14174cf00(param_1,&UNK_14302951e,8,auStack_c8,ppuVar16);
                param_2 = *(longlong *)(param_1 + 0x130);
                if (param_2 == *(longlong *)(param_1 + 0x120)) {
                  pdb_142d8afd0(param_1 + 0x120);
                }
                *(undefined8 *)(*(longlong *)(param_1 + 0x128) + param_2 * 0x10) = 0;
                param_2 = param_2 + 1;
                *(longlong *)(param_1 + 0x130) = param_2;
                if (cStack_49 != '\0') {
                  plVar13 = (longlong *)pdb_140e97000();
                  if (((char)plVar13[0xd] != '\x01') &&
                     (plVar13 = (longlong *)pdb_142d8ec20(plVar13,0), plVar13 == (longlong *)0x0))
                  goto LAB_1409acf9e;
                  if (*plVar13 != 0) goto LAB_1409acf63;
                  *plVar13 = -1;
                  plStack_58 = plVar13;
                  pdb_140e95370(plVar13 + 1);
                  *plStack_58 = *plStack_58 + 1;
                }
                return;
              }
              uVar18 = (ushort)(uVar14 - 1) & (ushort)uVar14;
              uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar18);
            }
            auVar22[0] = -(auVar4[0] == -1);
            auVar22[1] = -(auVar4[1] == -1);
            auVar22[2] = -(auVar4[2] == -1);
            auVar22[3] = -(auVar4[3] == -1);
            auVar22[4] = -(auVar4[4] == -1);
            auVar22[5] = -(auVar4[5] == -1);
            auVar22[6] = -(auVar4[6] == -1);
            auVar22[7] = -(auVar4[7] == -1);
            auVar22[8] = -(auVar4[8] == -1);
            auVar22[9] = -(auVar4[9] == -1);
            auVar22[10] = -(auVar4[10] == -1);
            auVar22[0xb] = -(auVar4[0xb] == -1);
            auVar22[0xc] = -(auVar4[0xc] == -1);
            auVar22[0xd] = -(auVar4[0xd] == -1);
            auVar22[0xe] = -(auVar4[0xe] == -1);
            auVar22[0xf] = -(auVar4[0xf] == -1);
            if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar22 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar22 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar22 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar22 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar22 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar22 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar22 >> 0x3f,0) & 1) != 0) || (SUB161(auVar22 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar22 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar22 >> 0x57,0) & 1) != 0) || (SUB161(auVar22 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar22 >> 0x67,0) & 1) != 0) || (SUB161(auVar22 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar22 >> 0x77,0) & 1) != 0) || auVar22[0xf] < '\0') break;
            uVar15 = uVar15 + lVar17 + 0x10;
            lVar17 = lVar17 + 0x10;
          }
        }
LAB_1409acf54:
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_1430294f0);
      }
LAB_1409acf63:
      plVar13 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_1409acf6f:
      plVar13 = (longlong *)pdb_142d8ec20(plVar13,0);
    } while (plVar13 != (longlong *)0x0);
LAB_1409acf9e:
    pdb_142dc7890(&UNK_143326860);
LAB_1409acfaa:
    pdb_142dc8070(&UNK_1430293e4,0x44);
  }
  pdb_142dc8070(&UNK_14302a4c5,0x45,0);
LAB_1409acfed:
  pdb_142dc8070(&UNK_14302a4c5,0x45);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

