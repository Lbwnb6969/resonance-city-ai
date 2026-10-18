// VA 0x140affac0, PDB extent 2679 bytes
// country_core::systems::render_loop::draw_passes::ui_2d_pass::mei_pass
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/ui_2d_pass.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::draw_passes::ui_2d_pass::mei_pass
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/ui_2d_pass.rs
   Extent: 2679 */

void pdb_140affac0(longlong param_1,undefined1 *param_2,undefined4 *param_3,undefined4 *param_4,
                  char param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  byte bVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  char cVar12;
  undefined4 uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined *puVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined4 *puVar21;
  longlong lVar22;
  ushort uVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong *plVar26;
  undefined *puVar27;
  longlong lVar28;
  bool bVar29;
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
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [20];
  undefined8 uStack_15c;
  undefined8 uStack_154;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined4 uStack_128;
  undefined1 auStack_124 [16];
  longlong lStack_110;
  undefined8 *puStack_108;
  longlong lStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  longlong *plStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined4 uStack_a4;
  undefined4 *puStack_a0;
  undefined8 uStack_98;
  longlong *plStack_90;
  undefined2 uStack_88;
  undefined2 uStack_86;
  undefined2 uStack_84;
  undefined2 uStack_82;
  undefined2 uStack_80;
  undefined2 uStack_7e;
  undefined2 uStack_7c;
  undefined1 uStack_7a;
  undefined1 uStack_79;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  undefined4 *puStack_68;
  undefined4 *puStack_60;
  longlong *plStack_58;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puStack_a0 = param_3;
  cVar12 = pdb_140e94b40();
  plStack_90 = (longlong *)CONCAT71(plStack_90._1_7_,cVar12);
  if (cVar12 == '\0') goto LAB_140affc8c;
  plVar26 = (longlong *)&UNK_1430539d3;
  lVar28 = 0x45;
  uVar20 = 0x45;
  lVar14 = pdb_140b05ec0(&UNK_1430539d3);
  if (lVar14 == 1) {
    if (0x45 < uVar20) {
LAB_140b003db:
      pdb_142dc8070(&UNK_1430539d3,0x45,0);
LAB_140b003fb:
      pdb_142dc8070(&UNK_1430539d3,0x45);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    plVar26 = (longlong *)&UNK_1430539d3;
    uVar15 = pdb_140b05ec0(&UNK_1430539d3);
    if ((uVar15 & 1) != 0) {
      if (0x45 < uVar20 + 2) goto LAB_140b003fb;
      lVar28 = 0x43 - uVar20;
      plVar26 = (longlong *)(&UNK_1430539d5 + uVar20);
    }
  }
  puVar16 = &UNK_143052bb3;
  puVar27 = &UNK_143052b6e;
  do {
    pbVar1 = puVar16 + -1;
    uVar19 = (uint)(char)*pbVar1;
    if ((int)uVar19 < 0) {
      bVar5 = puVar16[-2];
      if ((char)bVar5 < -0x40) {
        bVar6 = puVar16[-3];
        if ((char)bVar6 < -0x40) {
          pbVar2 = puVar16 + -4;
          puVar16 = puVar16 + -4;
          uVar19 = bVar6 & 0x3f | (*pbVar2 & 7) << 6;
        }
        else {
          puVar16 = puVar16 + -3;
          uVar19 = bVar6 & 0xf;
        }
        uVar19 = bVar5 & 0x3f | uVar19 << 6;
      }
      else {
        puVar16 = puVar16 + -2;
        uVar19 = bVar5 & 0x1f;
      }
      uVar19 = (uint)(*pbVar1 & 0x3f) | uVar19 << 6;
      if (uVar19 != 0x5c) goto LAB_140affbf9;
LAB_140affc0e:
      if (puVar16 + -0x143052b6d < (undefined *)0x46) {
        puVar21 = (undefined4 *)(0x44 - (longlong)(puVar16 + -0x143052b6e));
        puVar27 = puVar16 + 1;
        goto LAB_140affc31;
      }
      pdb_142dc8070(&UNK_143052b6e,0x45,puVar16 + -0x143052b6d,0x45,&UNK_143053ac8);
      goto LAB_140b003db;
    }
    puVar16 = puVar16 + -1;
    if (uVar19 == 0x5c) goto LAB_140affc0e;
LAB_140affbf9:
    if (uVar19 == 0x2f) goto LAB_140affc0e;
  } while (puVar16 != &UNK_143052b6e);
  puVar21 = (undefined4 *)0x45;
LAB_140affc31:
  plVar17 = (longlong *)pdb_140e97000();
  if ((char)plVar17[0xd] != '\x01') goto LAB_140b00381;
LAB_140affc40:
  if (*plVar17 != 0) goto LAB_140b00375;
  *plVar17 = -1;
  plStack_d0 = plVar17;
  uStack_98 = pdb_140e94f10(plVar17 + 1,plVar26,lVar28,puVar27,puVar21,1,0);
  *plStack_d0 = *plStack_d0 + 1;
LAB_140affc8c:
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar28 = *(longlong *)(param_2 + 0x70);
    uVar20 = 0x1d6a82b468dfb8a2;
    lVar14 = 0;
    while( true ) {
      uVar20 = uVar20 & *(ulonglong *)(param_2 + 0x78);
      auVar36 = *(undefined1 (*) [16])(lVar28 + uVar20);
      auVar34[0] = -(auVar36[0] == DAT_142e34ec0);
      auVar34[1] = -(auVar36[1] == DAT_142e34ec0._1_1_);
      auVar34[2] = -(auVar36[2] == DAT_142e34ec0._2_1_);
      auVar34[3] = -(auVar36[3] == DAT_142e34ec0._3_1_);
      auVar34[4] = -(auVar36[4] == DAT_142e34ec0._4_1_);
      auVar34[5] = -(auVar36[5] == DAT_142e34ec0._5_1_);
      auVar34[6] = -(auVar36[6] == DAT_142e34ec0._6_1_);
      auVar34[7] = -(auVar36[7] == DAT_142e34ec0._7_1_);
      auVar34[8] = -(auVar36[8] == DAT_142e34ec0._8_1_);
      auVar34[9] = -(auVar36[9] == DAT_142e34ec0._9_1_);
      auVar34[10] = -(auVar36[10] == DAT_142e34ec0._10_1_);
      auVar34[0xb] = -(auVar36[0xb] == DAT_142e34ec0._11_1_);
      auVar34[0xc] = -(auVar36[0xc] == DAT_142e34ec0._12_1_);
      auVar34[0xd] = -(auVar36[0xd] == DAT_142e34ec0._13_1_);
      auVar34[0xe] = -(auVar36[0xe] == DAT_142e34ec0._14_1_);
      auVar34[0xf] = -(auVar36[0xf] == DAT_142e34ec0._15_1_);
      uVar23 = (ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
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
      uVar19 = (uint)uVar23;
      while (uVar23 != 0) {
        uVar8 = 0;
        for (uVar9 = uVar19; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar8 = uVar8 + 1;
        }
        uVar15 = uVar8 + uVar20 & *(ulonglong *)(param_2 + 0x78);
        pcVar3 = (char *)(lVar28 + -0x18 + uVar15 * -0x18);
        auVar35[0] = -(*pcVar3 == DAT_142e60e60);
        auVar35[1] = -(pcVar3[1] == DAT_142e60e60._1_1_);
        auVar35[2] = -(pcVar3[2] == DAT_142e60e60._2_1_);
        auVar35[3] = -(pcVar3[3] == DAT_142e60e60._3_1_);
        auVar35[4] = -(pcVar3[4] == DAT_142e60e60._4_1_);
        auVar35[5] = -(pcVar3[5] == DAT_142e60e60._5_1_);
        auVar35[6] = -(pcVar3[6] == DAT_142e60e60._6_1_);
        auVar35[7] = -(pcVar3[7] == DAT_142e60e60._7_1_);
        auVar35[8] = -(pcVar3[8] == DAT_142e60e60._8_1_);
        auVar35[9] = -(pcVar3[9] == DAT_142e60e60._9_1_);
        auVar35[10] = -(pcVar3[10] == DAT_142e60e60._10_1_);
        auVar35[0xb] = -(pcVar3[0xb] == DAT_142e60e60._11_1_);
        auVar35[0xc] = -(pcVar3[0xc] == DAT_142e60e60._12_1_);
        auVar35[0xd] = -(pcVar3[0xd] == DAT_142e60e60._13_1_);
        auVar35[0xe] = -(pcVar3[0xe] == DAT_142e60e60._14_1_);
        auVar35[0xf] = -(pcVar3[0xf] == DAT_142e60e60._15_1_);
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
          uVar20 = *(ulonglong *)(lVar28 + uVar15 * -0x18 + -8);
          if ((*(ulonglong *)(param_2 + 0x210) <= uVar20) ||
             (uVar20 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar20 * 8), uVar20 == 0))
          goto LAB_140afff7a;
          lVar28 = ~uVar20 * 0x40;
          if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar28) == 0)
          goto LAB_140afff7a;
          lVar28 = *(longlong *)(*(longlong *)(param_2 + 0x1d8) + lVar28 + 0x10);
          pdb_141528880(auStack_170,lVar28,param_1);
          pdb_1415255a0(&uStack_88,lVar28);
          uStack_14c = (undefined4)uStack_78;
          uStack_15c = CONCAT26(uStack_82,CONCAT24(uStack_84,CONCAT22(uStack_86,uStack_88)));
          uStack_154 = CONCAT17(uStack_79,
                                CONCAT16(uStack_7a,CONCAT24(uStack_7c,CONCAT22(uStack_7e,uStack_80))
                                        ));
          if (*(longlong *)(param_2 + 0x88) == 0) goto LAB_140b000e7;
          lVar14 = *(longlong *)(param_2 + 0x70);
          uVar20 = *(ulonglong *)(param_2 + 0x78);
          uVar15 = 0x7138c34c528b712f;
          lVar22 = 0;
          goto LAB_140affdf9;
        }
        uVar23 = (ushort)(uVar19 - 1) & (ushort)uVar19;
        uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar23);
      }
      auVar31[0] = -(auVar36[0] == -1);
      auVar31[1] = -(auVar36[1] == -1);
      auVar31[2] = -(auVar36[2] == -1);
      auVar31[3] = -(auVar36[3] == -1);
      auVar31[4] = -(auVar36[4] == -1);
      auVar31[5] = -(auVar36[5] == -1);
      auVar31[6] = -(auVar36[6] == -1);
      auVar31[7] = -(auVar36[7] == -1);
      auVar31[8] = -(auVar36[8] == -1);
      auVar31[9] = -(auVar36[9] == -1);
      auVar31[10] = -(auVar36[10] == -1);
      auVar31[0xb] = -(auVar36[0xb] == -1);
      auVar31[0xc] = -(auVar36[0xc] == -1);
      auVar31[0xd] = -(auVar36[0xd] == -1);
      auVar31[0xe] = -(auVar36[0xe] == -1);
      auVar31[0xf] = -(auVar36[0xf] == -1);
      if ((((((((((((((((SUB161(auVar31 >> 7,0) & 1) != 0 || (SUB161(auVar31 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar31 >> 0x17,0) & 1) != 0) || (SUB161(auVar31 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar31 >> 0x27,0) & 1) != 0) || (SUB161(auVar31 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar31 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar31 >> 0x3f,0) & 1) != 0) || (SUB161(auVar31 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar31 >> 0x4f,0) & 1) != 0) || (SUB161(auVar31 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar31 >> 0x5f,0) & 1) != 0) || (SUB161(auVar31 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar31 >> 0x6f,0) & 1) != 0) || (SUB161(auVar31 >> 0x77,0) & 1) != 0) ||
          auVar31[0xf] < '\0') break;
      uVar20 = uVar20 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
LAB_140afff7a:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143052bf0);
LAB_140affdf9:
  uVar15 = uVar15 & uVar20;
  pcVar3 = (char *)(lVar14 + uVar15);
  auVar36[0] = -(*pcVar3 == DAT_142e33d90);
  auVar36[1] = -(pcVar3[1] == DAT_142e33d90._1_1_);
  auVar36[2] = -(pcVar3[2] == DAT_142e33d90._2_1_);
  auVar36[3] = -(pcVar3[3] == DAT_142e33d90._3_1_);
  auVar36[4] = -(pcVar3[4] == DAT_142e33d90._4_1_);
  auVar36[5] = -(pcVar3[5] == DAT_142e33d90._5_1_);
  auVar36[6] = -(pcVar3[6] == DAT_142e33d90._6_1_);
  auVar36[7] = -(pcVar3[7] == DAT_142e33d90._7_1_);
  auVar36[8] = -(pcVar3[8] == DAT_142e33d90._8_1_);
  auVar36[9] = -(pcVar3[9] == DAT_142e33d90._9_1_);
  auVar36[10] = -(pcVar3[10] == DAT_142e33d90._10_1_);
  auVar36[0xb] = -(pcVar3[0xb] == DAT_142e33d90._11_1_);
  auVar36[0xc] = -(pcVar3[0xc] == DAT_142e33d90._12_1_);
  auVar36[0xd] = -(pcVar3[0xd] == DAT_142e33d90._13_1_);
  auVar36[0xe] = -(pcVar3[0xe] == DAT_142e33d90._14_1_);
  auVar36[0xf] = -(pcVar3[0xf] == DAT_142e33d90._15_1_);
  uVar23 = (ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
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
  uVar19 = (uint)uVar23;
  while (uVar23 != 0) {
    uVar8 = 0;
    for (uVar9 = uVar19; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    uVar24 = uVar8 + uVar15 & uVar20;
    pcVar4 = (char *)(lVar14 + -0x18 + uVar24 * -0x18);
    auVar37[0] = -(*pcVar4 == DAT_142e340c0);
    auVar37[1] = -(pcVar4[1] == UNK_142e340c1);
    auVar37[2] = -(pcVar4[2] == UNK_142e340c2);
    auVar37[3] = -(pcVar4[3] == UNK_142e340c3);
    auVar37[4] = -(pcVar4[4] == UNK_142e340c4);
    auVar37[5] = -(pcVar4[5] == UNK_142e340c5);
    auVar37[6] = -(pcVar4[6] == UNK_142e340c6);
    auVar37[7] = -(pcVar4[7] == UNK_142e340c7);
    auVar37[8] = -(pcVar4[8] == UNK_142e340c8);
    auVar37[9] = -(pcVar4[9] == UNK_142e340c9);
    auVar37[10] = -(pcVar4[10] == UNK_142e340ca);
    auVar37[0xb] = -(pcVar4[0xb] == UNK_142e340cb);
    auVar37[0xc] = -(pcVar4[0xc] == UNK_142e340cc);
    auVar37[0xd] = -(pcVar4[0xd] == UNK_142e340cd);
    auVar37[0xe] = -(pcVar4[0xe] == UNK_142e340ce);
    auVar37[0xf] = -(pcVar4[0xf] == UNK_142e340cf);
    if ((ushort)((ushort)(SUB161(auVar37 >> 7,0) & 1) | (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe | (ushort)(auVar37[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar15 = *(ulonglong *)(lVar14 + uVar24 * -0x18 + -8);
      if (*(ulonglong *)(param_2 + 0x210) <= uVar15) goto LAB_140b000e7;
      uVar15 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar15 * 8);
      if (uVar15 == 0) goto LAB_140b000e7;
      lVar22 = *(longlong *)(param_2 + 0x1d8);
      lVar25 = ~uVar15 * 0x40;
      if (*(longlong *)(lVar22 + 0x20 + lVar25) == 0) goto LAB_140b000e7;
      uVar15 = **(ulonglong **)(lVar25 + lVar22 + 0x10);
      auVar30._0_8_ = uVar15 & 0xffffffff;
      auVar30._8_4_ = (int)(uVar15 >> 0x20);
      auVar30._12_4_ = 0;
      uStack_d8 = CONCAT44((float)(SUB168(auVar30 | _DAT_142e33010,8) - DAT_142e33010._8_8_),
                           (float)(SUB168(auVar30 | _DAT_142e33010,0) - (double)DAT_142e33010));
      uVar15 = 0x997ccb0d3c1cdd8d;
      lVar25 = 0;
      goto LAB_140afff06;
    }
    uVar23 = (ushort)(uVar19 - 1) & (ushort)uVar19;
    uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar23);
  }
  auVar32[0] = -(*pcVar3 == -1);
  auVar32[1] = -(pcVar3[1] == -1);
  auVar32[2] = -(pcVar3[2] == -1);
  auVar32[3] = -(pcVar3[3] == -1);
  auVar32[4] = -(pcVar3[4] == -1);
  auVar32[5] = -(pcVar3[5] == -1);
  auVar32[6] = -(pcVar3[6] == -1);
  auVar32[7] = -(pcVar3[7] == -1);
  auVar32[8] = -(pcVar3[8] == -1);
  auVar32[9] = -(pcVar3[9] == -1);
  auVar32[10] = -(pcVar3[10] == -1);
  auVar32[0xb] = -(pcVar3[0xb] == -1);
  auVar32[0xc] = -(pcVar3[0xc] == -1);
  auVar32[0xd] = -(pcVar3[0xd] == -1);
  auVar32[0xe] = -(pcVar3[0xe] == -1);
  auVar32[0xf] = -(pcVar3[0xf] == -1);
  if ((((((((((((((((SUB161(auVar32 >> 7,0) & 1) != 0 || (SUB161(auVar32 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar32 >> 0x17,0) & 1) != 0) || (SUB161(auVar32 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar32 >> 0x27,0) & 1) != 0) || (SUB161(auVar32 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar32 >> 0x37,0) & 1) != 0) || (SUB161(auVar32 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar32 >> 0x47,0) & 1) != 0) || (SUB161(auVar32 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar32 >> 0x57,0) & 1) != 0) || (SUB161(auVar32 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar32 >> 0x67,0) & 1) != 0) || (SUB161(auVar32 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar32 >> 0x77,0) & 1) != 0) || auVar32[0xf] < '\0') {
LAB_140b000e7:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143052c08);
  }
  uVar15 = uVar15 + lVar22 + 0x10;
  lVar22 = lVar22 + 0x10;
  goto LAB_140affdf9;
LAB_140afff06:
  uVar15 = uVar15 & uVar20;
  auVar36 = *(undefined1 (*) [16])(lVar14 + uVar15);
  auVar38[0] = -(auVar36[0] == DAT_142e33dd0);
  auVar38[1] = -(auVar36[1] == DAT_142e33dd0._1_1_);
  auVar38[2] = -(auVar36[2] == DAT_142e33dd0._2_1_);
  auVar38[3] = -(auVar36[3] == DAT_142e33dd0._3_1_);
  auVar38[4] = -(auVar36[4] == DAT_142e33dd0._4_1_);
  auVar38[5] = -(auVar36[5] == DAT_142e33dd0._5_1_);
  auVar38[6] = -(auVar36[6] == DAT_142e33dd0._6_1_);
  auVar38[7] = -(auVar36[7] == DAT_142e33dd0._7_1_);
  auVar38[8] = -(auVar36[8] == DAT_142e33dd0._8_1_);
  auVar38[9] = -(auVar36[9] == DAT_142e33dd0._9_1_);
  auVar38[10] = -(auVar36[10] == DAT_142e33dd0._10_1_);
  auVar38[0xb] = -(auVar36[0xb] == DAT_142e33dd0._11_1_);
  auVar38[0xc] = -(auVar36[0xc] == DAT_142e33dd0._12_1_);
  auVar38[0xd] = -(auVar36[0xd] == DAT_142e33dd0._13_1_);
  auVar38[0xe] = -(auVar36[0xe] == DAT_142e33dd0._14_1_);
  auVar38[0xf] = -(auVar36[0xf] == DAT_142e33dd0._15_1_);
  uVar23 = (ushort)(SUB161(auVar38 >> 7,0) & 1) | (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
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
  uVar19 = (uint)uVar23;
  while( true ) {
    if (uVar23 == 0) goto LAB_140afff5d;
    uVar8 = 0;
    for (uVar9 = uVar19; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    uVar24 = uVar8 + uVar15 & uVar20;
    pcVar3 = (char *)(lVar14 + -0x18 + uVar24 * -0x18);
    auVar39[0] = -(*pcVar3 == DAT_143052720);
    auVar39[1] = -(pcVar3[1] == DAT_143052720._1_1_);
    auVar39[2] = -(pcVar3[2] == DAT_143052720._2_1_);
    auVar39[3] = -(pcVar3[3] == DAT_143052720._3_1_);
    auVar39[4] = -(pcVar3[4] == DAT_143052720._4_1_);
    auVar39[5] = -(pcVar3[5] == DAT_143052720._5_1_);
    auVar39[6] = -(pcVar3[6] == DAT_143052720._6_1_);
    auVar39[7] = -(pcVar3[7] == DAT_143052720._7_1_);
    auVar39[8] = -(pcVar3[8] == DAT_143052720._8_1_);
    auVar39[9] = -(pcVar3[9] == DAT_143052720._9_1_);
    auVar39[10] = -(pcVar3[10] == DAT_143052720._10_1_);
    auVar39[0xb] = -(pcVar3[0xb] == DAT_143052720._11_1_);
    auVar39[0xc] = -(pcVar3[0xc] == DAT_143052720._12_1_);
    auVar39[0xd] = -(pcVar3[0xd] == DAT_143052720._13_1_);
    auVar39[0xe] = -(pcVar3[0xe] == DAT_143052720._14_1_);
    auVar39[0xf] = -(pcVar3[0xf] == DAT_143052720._15_1_);
    if ((ushort)((ushort)(SUB161(auVar39 >> 7,0) & 1) | (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe | (ushort)(auVar39[0xf] >> 7) << 0xf
                ) == 0xffff) break;
    uVar23 = (ushort)(uVar19 - 1) & (ushort)uVar19;
    uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar23);
  }
  uVar20 = *(ulonglong *)(lVar14 + uVar24 * -0x18 + -8);
  if (((*(ulonglong *)(param_2 + 0x210) <= uVar20) ||
      (uVar20 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar20 * 8), uVar20 == 0)) ||
     (lVar14 = ~uVar20 * 0x40, *(longlong *)(lVar22 + 0x20 + lVar14) == 0)) goto LAB_140b000f6;
  lVar22 = lVar22 + lVar14;
  puVar18 = (undefined8 *)pdb_140cb8380(*(undefined8 *)(lVar22 + 0x10));
  plVar26 = (longlong *)(auStack_124 + 4);
  puStack_108 = puVar18;
  lStack_100 = lVar22;
  if (param_5 == '\0') {
    uStack_b8._0_5_ = CONCAT14(2,(undefined4)uStack_b8);
    uStack_128 = 0;
    puVar27 = (undefined *)0xffff;
    puVar21 = puStack_a0;
  }
  else {
    uStack_88 = 0;
    uStack_86 = (undefined2)puStack_a0[2];
    uVar10 = uStack_86;
    uStack_84 = (undefined2)((uint)puStack_a0[2] >> 0x10);
    uVar11 = uStack_84;
    puVar27 = (undefined *)0x2012b0100010001;
    uStack_82 = 1;
    uStack_80 = 1;
    uStack_7e = 0x2b01;
    uStack_7c = 0x201;
    uStack_7a = 0;
    uStack_78._0_4_ = 0x43052c38;
    uStack_78._4_4_ = 1;
    puStack_70 = (undefined1 *)0x8;
    uVar13 = pdb_140e2b4e0(param_1,&uStack_88);
    uStack_84 = (undefined2)uVar13;
    uStack_82 = (undefined2)((uint)uVar13 >> 0x10);
    uStack_7c = 1;
    uStack_7a = 1;
    uStack_79 = 0;
    uStack_78._0_4_ = 0x2012b01;
    uStack_78._4_4_ = uStack_78._4_4_ & 0xffffff00;
    uStack_88 = 0;
    uStack_86 = 0;
    uStack_80 = uVar10;
    uStack_7e = uVar11;
    if (*(char *)(param_1 + 0x24c) == '\x01') {
      pdb_140e19620(&uStack_88,param_1);
    }
    uStack_c8 = CONCAT22(uStack_86,uStack_88);
    uStack_c4 = CONCAT22(uStack_82,uStack_84);
    uStack_c0 = CONCAT22(uStack_7e,uStack_80);
    uStack_bc = CONCAT13(uStack_79,CONCAT12(uStack_7a,uStack_7c));
    uStack_128 = 0;
    uStack_b8._4_1_ = (char)uStack_78._4_4_;
    bVar29 = uStack_b8._4_1_ != '\x02';
    puVar21 = puStack_a0;
    uStack_b8 = uStack_78;
    if (bVar29) {
      auStack_124 = (undefined1  [16])0x0;
      uStack_128 = 1;
      plVar26 = &lStack_110;
      puVar21 = &uStack_c8;
    }
  }
  *plVar26 = (longlong)puVar21;
  uStack_a4 = 0x40000000;
  param_2 = auStack_188;
  pdb_140e1ea30(param_2,*puVar18,param_1,0x23,&UNK_143330ab0);
  if (param_4 == (undefined4 *)0x0) {
    uStack_88 = 0;
    uStack_86 = 1;
    uStack_84 = 1;
    uStack_82 = 1;
    uStack_80 = 1;
    uStack_7e = 0x7a01;
    uStack_7c = 0x201;
    uStack_7a = 0;
    uStack_78._0_4_ = 0x43052c40;
    uStack_78._4_4_ = 1;
    puStack_70 = (undefined1 *)0x17;
    uVar13 = pdb_140e2b4e0(param_1,&uStack_88);
    uStack_84 = (undefined2)uVar13;
    uStack_82 = (undefined2)((uint)uVar13 >> 0x10);
    uStack_80 = 1;
    uStack_7e = 1;
    uStack_7c = 1;
    uStack_7a = 1;
    uStack_79 = 0;
    uStack_78._0_4_ = 0x2017a01;
    uStack_78._4_4_ = uStack_78._4_4_ & 0xffffff00;
    uStack_88 = 0;
    uStack_86 = 0;
    if (*(char *)(param_1 + 0x24c) == '\x01') {
      pdb_140e19620(&uStack_88,param_1);
    }
    uStack_e8 = CONCAT44(uStack_78._4_4_,(undefined4)uStack_78);
    uStack_f8 = CONCAT22(uStack_86,uStack_88);
    uStack_f4 = CONCAT22(uStack_82,uStack_84);
    uStack_f0 = CONCAT17(uStack_79,
                         CONCAT16(uStack_7a,CONCAT24(uStack_7c,CONCAT22(uStack_7e,uStack_80))));
    uStack_88 = (undefined2)_DAT_142e3c640;
    uStack_86 = (undefined2)((ulonglong)_DAT_142e3c640 >> 0x10);
    uStack_84 = (undefined2)((ulonglong)_DAT_142e3c640 >> 0x20);
    uStack_82 = (undefined2)((ulonglong)_DAT_142e3c640 >> 0x30);
    uStack_80 = (undefined2)_UNK_142e3c648;
    uStack_7e = (undefined2)((ulonglong)_UNK_142e3c648 >> 0x10);
    uStack_7c = (undefined2)((ulonglong)_UNK_142e3c648 >> 0x20);
    uStack_7a = (undefined1)((ulonglong)_UNK_142e3c648 >> 0x30);
    uStack_79 = (undefined1)((ulonglong)_UNK_142e3c648 >> 0x38);
    param_4 = &uStack_f8;
    pdb_140e2b650(param_1,param_4,&uStack_88);
  }
  plStack_58 = &lStack_100;
  uStack_88 = SUB82(auStack_170,0);
  uStack_86 = (undefined2)((ulonglong)auStack_170 >> 0x10);
  uStack_84 = (undefined2)((ulonglong)auStack_170 >> 0x20);
  uStack_82 = (undefined2)((ulonglong)auStack_170 >> 0x30);
  uStack_80 = SUB82(&uStack_15c,0);
  uStack_7e = (undefined2)((ulonglong)&uStack_15c >> 0x10);
  uStack_7c = (undefined2)((ulonglong)&uStack_15c >> 0x20);
  uStack_7a = (undefined1)((ulonglong)&uStack_15c >> 0x30);
  uStack_79 = (undefined1)((ulonglong)&uStack_15c >> 0x38);
  uStack_78 = &uStack_d8;
  puVar21 = &uStack_a4;
  puStack_70 = param_2;
  puStack_68 = param_4;
  puStack_60 = puVar21;
  pdb_1417538f0(param_1,&UNK_143052c57,6,&uStack_128,&uStack_88);
  if (uStack_b8._4_1_ != '\x02') {
    puStack_138 = uStack_b8;
    uStack_148 = CONCAT44(uStack_c4,uStack_c8);
    uStack_140 = CONCAT44(uStack_bc,uStack_c0);
    uStack_88 = 0;
    uStack_86 = 0;
    uStack_80 = SUB82(puStack_a0,0);
    uStack_7e = (undefined2)((ulonglong)puStack_a0 >> 0x10);
    uStack_7c = (undefined2)((ulonglong)puStack_a0 >> 0x20);
    uStack_7a = (undefined1)((ulonglong)puStack_a0 >> 0x30);
    uStack_79 = (undefined1)((ulonglong)puStack_a0 >> 0x38);
    pdb_14175ede0(param_1,&UNK_143052c5d,0x11,&uStack_88,&uStack_148,puVar21);
  }
  pdb_141538100(lVar28,param_1);
  pdb_141535540(lVar28,param_1);
  if ((char)plStack_90 == '\0') {
    return;
  }
  plVar17 = (longlong *)pdb_140e97000();
  if ((char)plVar17[0xd] != '\x01') goto LAB_140b003a0;
  while( true ) {
    if (*plVar17 == 0) {
      *plVar17 = -1;
      plStack_90 = plVar17;
      pdb_140e95370(plVar17 + 1);
      *plStack_90 = *plStack_90 + 1;
      return;
    }
LAB_140b00375:
    plVar17 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140b00381:
    plVar17 = (longlong *)pdb_142d8ec20(plVar17,0);
    if (plVar17 != (longlong *)0x0) break;
    do {
      plVar17 = (longlong *)pdb_142dc7890(&UNK_143326860);
LAB_140b003a0:
      plVar17 = (longlong *)pdb_142d8ec20(plVar17,0);
    } while (plVar17 == (longlong *)0x0);
  }
  goto LAB_140affc40;
LAB_140afff5d:
  auVar33[0] = -(auVar36[0] == -1);
  auVar33[1] = -(auVar36[1] == -1);
  auVar33[2] = -(auVar36[2] == -1);
  auVar33[3] = -(auVar36[3] == -1);
  auVar33[4] = -(auVar36[4] == -1);
  auVar33[5] = -(auVar36[5] == -1);
  auVar33[6] = -(auVar36[6] == -1);
  auVar33[7] = -(auVar36[7] == -1);
  auVar33[8] = -(auVar36[8] == -1);
  auVar33[9] = -(auVar36[9] == -1);
  auVar33[10] = -(auVar36[10] == -1);
  auVar33[0xb] = -(auVar36[0xb] == -1);
  auVar33[0xc] = -(auVar36[0xc] == -1);
  auVar33[0xd] = -(auVar36[0xd] == -1);
  auVar33[0xe] = -(auVar36[0xe] == -1);
  auVar33[0xf] = -(auVar36[0xf] == -1);
  if ((((((((((((((((SUB161(auVar33 >> 7,0) & 1) != 0 || (SUB161(auVar33 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar33 >> 0x17,0) & 1) != 0) || (SUB161(auVar33 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar33 >> 0x27,0) & 1) != 0) || (SUB161(auVar33 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar33 >> 0x37,0) & 1) != 0) || (SUB161(auVar33 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar33 >> 0x47,0) & 1) != 0) || (SUB161(auVar33 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar33 >> 0x57,0) & 1) != 0) || (SUB161(auVar33 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar33 >> 0x67,0) & 1) != 0) || (SUB161(auVar33 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar33 >> 0x77,0) & 1) != 0) || auVar33[0xf] < '\0') {
LAB_140b000f6:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143052c20);
  }
  uVar15 = uVar15 + lVar25 + 0x10;
  lVar25 = lVar25 + 0x10;
  goto LAB_140afff06;
}

