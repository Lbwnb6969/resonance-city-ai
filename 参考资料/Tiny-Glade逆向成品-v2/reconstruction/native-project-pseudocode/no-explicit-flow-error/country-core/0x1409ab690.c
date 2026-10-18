// VA 0x1409ab690, PDB extent 1831 bytes
// country_core::systems::render_loop::draw_passes::foliage_exclusion_mask::rasterize_foliage_exclusion_mask
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/foliage_exclusion_mask.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::draw_passes::foliage_exclusion_mask::rasterize_foliage_exclusion_mask
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/foliage_exclusion_mask.rs
   Extent: 1831 */

longlong pdb_1409ab690(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  char *pcVar3;
  undefined1 auVar4 [16];
  byte bVar5;
  byte bVar6;
  undefined8 *puVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  char cVar11;
  longlong lVar12;
  undefined *puVar13;
  longlong *plVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  longlong lVar18;
  ushort uVar19;
  ulonglong uVar20;
  undefined *puVar21;
  undefined *puVar22;
  bool bVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auStack_b4 [20];
  undefined4 uStack_a0;
  undefined1 auStack_9c [16];
  undefined8 uStack_88;
  undefined8 uStack_70;
  undefined8 uStack_68;
  longlong *plStack_60;
  longlong *plStack_58;
  longlong *plStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar12 = *(longlong *)(param_2 + 0x70);
    uVar16 = 0x7057b4358e925fdb;
    lVar18 = 0;
    while( true ) {
      uVar16 = uVar16 & *(ulonglong *)(param_2 + 0x78);
      auVar4 = *(undefined1 (*) [16])(lVar12 + uVar16);
      auVar26[0] = -(auVar4[0] == DAT_142e33d90);
      auVar26[1] = -(auVar4[1] == DAT_142e33d90._1_1_);
      auVar26[2] = -(auVar4[2] == DAT_142e33d90._2_1_);
      auVar26[3] = -(auVar4[3] == DAT_142e33d90._3_1_);
      auVar26[4] = -(auVar4[4] == DAT_142e33d90._4_1_);
      auVar26[5] = -(auVar4[5] == DAT_142e33d90._5_1_);
      auVar26[6] = -(auVar4[6] == DAT_142e33d90._6_1_);
      auVar26[7] = -(auVar4[7] == DAT_142e33d90._7_1_);
      auVar26[8] = -(auVar4[8] == DAT_142e33d90._8_1_);
      auVar26[9] = -(auVar4[9] == DAT_142e33d90._9_1_);
      auVar26[10] = -(auVar4[10] == DAT_142e33d90._10_1_);
      auVar26[0xb] = -(auVar4[0xb] == DAT_142e33d90._11_1_);
      auVar26[0xc] = -(auVar4[0xc] == DAT_142e33d90._12_1_);
      auVar26[0xd] = -(auVar4[0xd] == DAT_142e33d90._13_1_);
      auVar26[0xe] = -(auVar4[0xe] == DAT_142e33d90._14_1_);
      auVar26[0xf] = -(auVar4[0xf] == DAT_142e33d90._15_1_);
      uVar19 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe | (ushort)(auVar26[0xf] >> 7) << 0xf;
      uVar15 = (uint)uVar19;
      while (uVar19 != 0) {
        uVar9 = 0;
        for (uVar10 = uVar15; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
          uVar9 = uVar9 + 1;
        }
        uVar20 = uVar9 + uVar16 & *(ulonglong *)(param_2 + 0x78);
        pcVar3 = (char *)(lVar12 + -0x18 + uVar20 * -0x18);
        auVar27[0] = -(*pcVar3 == DAT_142e34350);
        auVar27[1] = -(pcVar3[1] == DAT_142e34350._1_1_);
        auVar27[2] = -(pcVar3[2] == DAT_142e34350._2_1_);
        auVar27[3] = -(pcVar3[3] == DAT_142e34350._3_1_);
        auVar27[4] = -(pcVar3[4] == DAT_142e34350._4_1_);
        auVar27[5] = -(pcVar3[5] == DAT_142e34350._5_1_);
        auVar27[6] = -(pcVar3[6] == DAT_142e34350._6_1_);
        auVar27[7] = -(pcVar3[7] == DAT_142e34350._7_1_);
        auVar27[8] = -(pcVar3[8] == DAT_142e34350._8_1_);
        auVar27[9] = -(pcVar3[9] == DAT_142e34350._9_1_);
        auVar27[10] = -(pcVar3[10] == DAT_142e34350._10_1_);
        auVar27[0xb] = -(pcVar3[0xb] == DAT_142e34350._11_1_);
        auVar27[0xc] = -(pcVar3[0xc] == DAT_142e34350._12_1_);
        auVar27[0xd] = -(pcVar3[0xd] == DAT_142e34350._13_1_);
        auVar27[0xe] = -(pcVar3[0xe] == DAT_142e34350._14_1_);
        auVar27[0xf] = -(pcVar3[0xf] == DAT_142e34350._15_1_);
        if ((ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar27[0xf] >> 7) << 0xf) == 0xffff) {
          uVar20 = *(ulonglong *)(lVar12 + uVar20 * -0x18 + -8);
          if ((*(ulonglong *)(param_2 + 0x210) <= uVar20) ||
             (uVar20 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar20 * 8), uVar20 == 0))
          goto LAB_1409ab87c;
          lVar12 = ~uVar20 * 0x40;
          if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar12) == 0)
          goto LAB_1409ab87c;
          uVar17 = CONCAT71((int7)(uVar16 >> 8),0x11);
          plStack_60 = (longlong *)
                       pdb_140a2e6e0(*(undefined8 *)(*(longlong *)(param_2 + 0x1d8) + lVar12 + 0x10)
                                    );
          if (*(longlong *)(param_2 + 0x88) == 0) goto LAB_1409ab9eb;
          lVar12 = *(longlong *)(param_2 + 0x70);
          uVar16 = 0xd5ebee5f20e6d1b0;
          lVar18 = 0;
          goto LAB_1409ab80b;
        }
        uVar19 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar19);
      }
      auVar24[0] = -(auVar4[0] == -1);
      auVar24[1] = -(auVar4[1] == -1);
      auVar24[2] = -(auVar4[2] == -1);
      auVar24[3] = -(auVar4[3] == -1);
      auVar24[4] = -(auVar4[4] == -1);
      auVar24[5] = -(auVar4[5] == -1);
      auVar24[6] = -(auVar4[6] == -1);
      auVar24[7] = -(auVar4[7] == -1);
      auVar24[8] = -(auVar4[8] == -1);
      auVar24[9] = -(auVar4[9] == -1);
      auVar24[10] = -(auVar4[10] == -1);
      auVar24[0xb] = -(auVar4[0xb] == -1);
      auVar24[0xc] = -(auVar4[0xc] == -1);
      auVar24[0xd] = -(auVar4[0xd] == -1);
      auVar24[0xe] = -(auVar4[0xe] == -1);
      auVar24[0xf] = -(auVar4[0xf] == -1);
      if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar24 >> 0x17,0) & 1) != 0) || (SUB161(auVar24 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar24 >> 0x27,0) & 1) != 0) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar24 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar24 >> 0x3f,0) & 1) != 0) || (SUB161(auVar24 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar24 >> 0x4f,0) & 1) != 0) || (SUB161(auVar24 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar24 >> 0x5f,0) & 1) != 0) || (SUB161(auVar24 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar24 >> 0x6f,0) & 1) != 0) || (SUB161(auVar24 >> 0x77,0) & 1) != 0) ||
          auVar24[0xf] < '\0') break;
      uVar16 = uVar16 + lVar18 + 0x10;
      lVar18 = lVar18 + 0x10;
    }
  }
LAB_1409ab87c:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_1430292b0);
LAB_1409ab80b:
  uVar16 = uVar16 & *(ulonglong *)(param_2 + 0x78);
  auVar4 = *(undefined1 (*) [16])(lVar12 + uVar16);
  auVar28[0] = -(auVar4[0] == DAT_142f4f230);
  auVar28[1] = -(auVar4[1] == DAT_142f4f230._1_1_);
  auVar28[2] = -(auVar4[2] == DAT_142f4f230._2_1_);
  auVar28[3] = -(auVar4[3] == DAT_142f4f230._3_1_);
  auVar28[4] = -(auVar4[4] == DAT_142f4f230._4_1_);
  auVar28[5] = -(auVar4[5] == DAT_142f4f230._5_1_);
  auVar28[6] = -(auVar4[6] == DAT_142f4f230._6_1_);
  auVar28[7] = -(auVar4[7] == DAT_142f4f230._7_1_);
  auVar28[8] = -(auVar4[8] == DAT_142f4f230._8_1_);
  auVar28[9] = -(auVar4[9] == DAT_142f4f230._9_1_);
  auVar28[10] = -(auVar4[10] == DAT_142f4f230._10_1_);
  auVar28[0xb] = -(auVar4[0xb] == DAT_142f4f230._11_1_);
  auVar28[0xc] = -(auVar4[0xc] == DAT_142f4f230._12_1_);
  auVar28[0xd] = -(auVar4[0xd] == DAT_142f4f230._13_1_);
  auVar28[0xe] = -(auVar4[0xe] == DAT_142f4f230._14_1_);
  auVar28[0xf] = -(auVar4[0xf] == DAT_142f4f230._15_1_);
  uVar19 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe | (ushort)(auVar28[0xf] >> 7) << 0xf;
  uVar15 = (uint)uVar19;
  while (uVar19 != 0) {
    uVar9 = 0;
    for (uVar10 = uVar15; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
      uVar9 = uVar9 + 1;
    }
    uVar20 = uVar9 + uVar16 & *(ulonglong *)(param_2 + 0x78);
    pcVar3 = (char *)(lVar12 + -0x18 + uVar20 * -0x18);
    auVar29[0] = -(*pcVar3 == DAT_142f4f240);
    auVar29[1] = -(pcVar3[1] == DAT_142f4f240._1_1_);
    auVar29[2] = -(pcVar3[2] == DAT_142f4f240._2_1_);
    auVar29[3] = -(pcVar3[3] == DAT_142f4f240._3_1_);
    auVar29[4] = -(pcVar3[4] == DAT_142f4f240._4_1_);
    auVar29[5] = -(pcVar3[5] == DAT_142f4f240._5_1_);
    auVar29[6] = -(pcVar3[6] == DAT_142f4f240._6_1_);
    auVar29[7] = -(pcVar3[7] == DAT_142f4f240._7_1_);
    auVar29[8] = -(pcVar3[8] == DAT_142f4f240._8_1_);
    auVar29[9] = -(pcVar3[9] == DAT_142f4f240._9_1_);
    auVar29[10] = -(pcVar3[10] == DAT_142f4f240._10_1_);
    auVar29[0xb] = -(pcVar3[0xb] == DAT_142f4f240._11_1_);
    auVar29[0xc] = -(pcVar3[0xc] == DAT_142f4f240._12_1_);
    auVar29[0xd] = -(pcVar3[0xd] == DAT_142f4f240._13_1_);
    auVar29[0xe] = -(pcVar3[0xe] == DAT_142f4f240._14_1_);
    auVar29[0xf] = -(pcVar3[0xf] == DAT_142f4f240._15_1_);
    if ((ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe | (ushort)(auVar29[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar16 = *(ulonglong *)(lVar12 + uVar20 * -0x18 + -8);
      if ((*(ulonglong *)(param_2 + 0x210) <= uVar16) ||
         (uVar16 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar16 * 8), uVar16 == 0))
      goto LAB_1409ab9eb;
      lVar12 = ~uVar16 * 0x40;
      if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar12) == 0) goto LAB_1409ab9eb;
      puVar7 = *(undefined8 **)(*(longlong *)(param_2 + 0x1d8) + lVar12 + 0x10);
      cVar11 = pdb_140e94b40();
      plStack_50 = (longlong *)CONCAT71(plStack_50._1_7_,cVar11);
      if (cVar11 == '\0') {
        uStack_70 = 0;
        goto LAB_1409abafa;
      }
      puVar21 = &UNK_14302a559;
      lVar18 = 0x69;
      uVar16 = 0x69;
      lVar12 = pdb_1409b4de0(&UNK_14302a559);
      if (lVar12 == 1) {
        if (0x69 < uVar16) {
          pdb_142dc8070(&UNK_14302a559,0x69,0,uVar16,&UNK_14302a648);
          goto LAB_1409abc8f;
        }
        puVar21 = &UNK_14302a559;
        uVar20 = pdb_1409b4de0(&UNK_14302a559);
        if ((uVar20 & 1) != 0) {
          if (0x69 < uVar16 + 2) {
            pdb_142dc8070(&UNK_14302a559,0x69,uVar16 + 2,0x69,&UNK_14302a660);
            goto LAB_1409abc8f;
          }
          lVar18 = 0x67 - uVar16;
          puVar21 = &UNK_14302a55b + uVar16;
        }
      }
      puVar13 = &UNK_143029331;
      puVar22 = &UNK_1430292e0;
      goto LAB_1409ab960;
    }
    uVar19 = (ushort)(uVar15 - 1) & (ushort)uVar15;
    uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar19);
  }
  auVar25[0] = -(auVar4[0] == -1);
  auVar25[1] = -(auVar4[1] == -1);
  auVar25[2] = -(auVar4[2] == -1);
  auVar25[3] = -(auVar4[3] == -1);
  auVar25[4] = -(auVar4[4] == -1);
  auVar25[5] = -(auVar4[5] == -1);
  auVar25[6] = -(auVar4[6] == -1);
  auVar25[7] = -(auVar4[7] == -1);
  auVar25[8] = -(auVar4[8] == -1);
  auVar25[9] = -(auVar4[9] == -1);
  auVar25[10] = -(auVar4[10] == -1);
  auVar25[0xb] = -(auVar4[0xb] == -1);
  auVar25[0xc] = -(auVar4[0xc] == -1);
  auVar25[0xd] = -(auVar4[0xd] == -1);
  auVar25[0xe] = -(auVar4[0xe] == -1);
  auVar25[0xf] = -(auVar4[0xf] == -1);
  if ((((((((((((((((SUB161(auVar25 >> 7,0) & 1) != 0 || (SUB161(auVar25 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar25 >> 0x17,0) & 1) != 0) || (SUB161(auVar25 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar25 >> 0x27,0) & 1) != 0) || (SUB161(auVar25 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar25 >> 0x37,0) & 1) != 0) || (SUB161(auVar25 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar25 >> 0x47,0) & 1) != 0) || (SUB161(auVar25 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar25 >> 0x57,0) & 1) != 0) || (SUB161(auVar25 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar25 >> 0x67,0) & 1) != 0) || (SUB161(auVar25 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar25 >> 0x77,0) & 1) != 0) || auVar25[0xf] < '\0') goto LAB_1409ab9eb;
  uVar16 = uVar16 + lVar18 + 0x10;
  lVar18 = lVar18 + 0x10;
  goto LAB_1409ab80b;
LAB_1409ab9eb:
  if (DAT_143cb2c70 != '\0') {
    pdb_140e2b390(param_1,uVar17);
    DAT_143cb2c70 = '\0';
  }
  goto LAB_1409aba07;
LAB_1409ab960:
  do {
    pbVar1 = puVar13 + -1;
    uVar15 = (uint)(char)*pbVar1;
    if ((int)uVar15 < 0) {
      bVar5 = puVar13[-2];
      if ((char)bVar5 < -0x40) {
        bVar6 = puVar13[-3];
        if ((char)bVar6 < -0x40) {
          pbVar2 = puVar13 + -4;
          puVar13 = puVar13 + -4;
          uVar15 = bVar6 & 0x3f | (*pbVar2 & 7) << 6;
        }
        else {
          puVar13 = puVar13 + -3;
          uVar15 = bVar6 & 0xf;
        }
        uVar15 = bVar5 & 0x3f | uVar15 << 6;
      }
      else {
        puVar13 = puVar13 + -2;
        uVar15 = bVar5 & 0x1f;
      }
      uVar15 = (uint)(*pbVar1 & 0x3f) | uVar15 << 6;
      if (uVar15 != 0x5c) goto LAB_1409ab9d2;
LAB_1409aba77:
      if ((undefined *)0x51 < puVar13 + -0x1430292df) {
        pdb_142dc8070(&UNK_1430292e0,0x51,puVar13 + -0x1430292df,0x51,&UNK_14302a628);
        goto LAB_1409abc8f;
      }
      lVar12 = 0x50 - (longlong)(puVar13 + -0x1430292e0);
      puVar22 = puVar13 + 1;
      goto LAB_1409aba9b;
    }
    puVar13 = puVar13 + -1;
    if (uVar15 == 0x5c) goto LAB_1409aba77;
LAB_1409ab9d2:
    if (uVar15 == 0x2f) goto LAB_1409aba77;
  } while (puVar13 != &UNK_1430292e0);
  lVar12 = 0x51;
LAB_1409aba9b:
  plVar14 = (longlong *)pdb_140e97000();
  if (((char)plVar14[0xd] == '\x01') ||
     (plVar14 = (longlong *)pdb_142d8ec20(plVar14,0), plVar14 != (longlong *)0x0)) {
    if (*plVar14 == 0) {
      *plVar14 = -1;
      plStack_58 = plVar14;
      uStack_68 = pdb_140e94f10(plVar14 + 1,puVar21,lVar18,puVar22,lVar12,1,0);
      *plStack_58 = *plStack_58 + 1;
      uStack_70 = 1;
LAB_1409abafa:
      pdb_140e1e500(auStack_b4,*puVar7,param_1,0x36,&UNK_143330ab0);
      auStack_9c = (undefined1  [16])0x0;
      uStack_a0 = 1;
      uStack_88 = uVar17;
      pdb_14174da00(param_1,&UNK_143029331,0x11,&uStack_a0,auStack_b4,puVar7 + 1);
      DAT_143cb2c70 = '\x01';
      if ((char)plStack_50 == '\0') {
LAB_1409aba07:
        pdb_141764a70(param_1,&UNK_143029342,0x16,&UNK_143029358,0x2d,uVar17);
        plVar14 = plStack_60;
        pdb_140e9a350(plStack_60);
        pdb_140e9a350();
        LOCK();
        lVar12 = *plVar14;
        bVar23 = lVar12 == 8;
        if (bVar23) {
          *plVar14 = 0;
          lVar12 = 8;
        }
        UNLOCK();
        if (!bVar23) {
          lVar12 = pdb_142dbca40(plVar14,0);
        }
        return lVar12;
      }
      plVar14 = (longlong *)pdb_140e97000();
      if (((char)plVar14[0xd] == '\x01') ||
         (plVar14 = (longlong *)pdb_142d8ec20(plVar14,0), plVar14 != (longlong *)0x0)) {
        if (*plVar14 == 0) {
          *plVar14 = -1;
          plStack_50 = plVar14;
          pdb_140e95370(plVar14 + 1,uStack_68);
          *plStack_50 = *plStack_50 + 1;
          goto LAB_1409aba07;
        }
        pdb_142dc8090(&UNK_143326a50);
      }
      else {
        pdb_142dc7890(&UNK_143326860);
      }
    }
    else {
      pdb_142dc8090(&UNK_143326a50);
    }
  }
  else {
    pdb_142dc7890(&UNK_143326860);
  }
LAB_1409abc8f:
                    /* WARNING: Does not return */
  pcVar8 = (code *)invalidInstructionException();
  (*pcVar8)();
}

