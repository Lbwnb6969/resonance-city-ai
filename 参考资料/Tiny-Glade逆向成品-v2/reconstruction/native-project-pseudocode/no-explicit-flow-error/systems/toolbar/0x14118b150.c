// VA 0x14118b150, PDB extent 1761 bytes
// toolbar::mei::config::TemplateView::with_slot<toolbar::menu::load::ui::closure_env$11,ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::config::TemplateView::with_slot<toolbar::menu::load::ui::closure_env$11,ref$<str$>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 1761 */

void pdb_14118b150(longlong param_1,longlong param_2,undefined *param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  ushort uVar14;
  byte bVar15;
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
  undefined1 uStack_149;
  longlong lStack_148;
  code *pcStack_140;
  longlong *plStack_138;
  code *pcStack_130;
  longlong lStack_128;
  undefined *puStack_120;
  longlong *plStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  longlong *plStack_d0;
  longlong lStack_80;
  longlong lStack_78;
  undefined8 uStack_70;
  longlong lStack_68;
  undefined *puStack_60;
  
  lVar12 = *(longlong *)(param_1 + 0x18);
  lStack_68 = param_2;
  puStack_60 = param_3;
  lStack_128 = pdb_140bbbcb0(&lStack_68);
  uVar8 = _UNK_14329c338;
  puVar5 = _DAT_14329c330;
  puStack_120 = _DAT_14329c330;
  plStack_118 = (longlong *)_UNK_14329c338;
  puStack_120 = (undefined *)pdb_1400affa0(&lStack_128);
  lStack_128 = lVar12;
  lVar6 = pdb_1400b0130(&lStack_128);
  lVar9 = *(longlong *)(param_1 + 0x10);
  lStack_128 = lVar6;
  if (*(longlong *)(lVar9 + 0x1c8) != 0) {
    uVar7 = pdb_1400af0a0(lVar9 + 0x1d0,&lStack_128);
    bVar15 = (byte)(uVar7 >> 0x39);
    auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
    auVar16 = pshuflw(auVar16,auVar16,0);
    lVar11 = 0;
    while( true ) {
      uVar7 = uVar7 & *(ulonglong *)(lVar9 + 0x1b8);
      auVar1 = *(undefined1 (*) [16])(*(longlong *)(lVar9 + 0x1b0) + uVar7);
      auVar22[0] = -(auVar1[0] == auVar16[0]);
      auVar22[1] = -(auVar1[1] == auVar16[1]);
      auVar22[2] = -(auVar1[2] == auVar16[2]);
      auVar22[3] = -(auVar1[3] == auVar16[3]);
      auVar22[4] = -(auVar1[4] == auVar16[4]);
      auVar22[5] = -(auVar1[5] == auVar16[5]);
      auVar22[6] = -(auVar1[6] == auVar16[6]);
      auVar22[7] = -(auVar1[7] == auVar16[7]);
      auVar22[8] = -(auVar1[8] == auVar16[0]);
      auVar22[9] = -(auVar1[9] == auVar16[1]);
      auVar22[10] = -(auVar1[10] == auVar16[2]);
      auVar22[0xb] = -(auVar1[0xb] == auVar16[3]);
      auVar22[0xc] = -(auVar1[0xc] == auVar16[4]);
      auVar22[0xd] = -(auVar1[0xd] == auVar16[5]);
      auVar22[0xe] = -(auVar1[0xe] == auVar16[6]);
      auVar22[0xf] = -(auVar1[0xf] == auVar16[7]);
      uVar14 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
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
      uVar13 = (uint)uVar14;
      while (uVar14 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar13; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        if (lVar6 == *(longlong *)
                      (*(longlong *)(lVar9 + 0x1b0) + -0xd8 +
                      (uVar3 + uVar7 & *(ulonglong *)(lVar9 + 0x1b8)) * -0xd8)) {
          uStack_70 = 0;
          lStack_80 = lVar9;
          lStack_78 = lVar6;
          pdb_140725b60(&lStack_148,&lStack_80,&UNK_14329f3d5,9);
          lVar9 = pdb_14116e020(&lStack_148);
          lVar12 = lStack_148;
          *(undefined1 *)(lVar9 + 0x44) = 0x14;
          plStack_118 = plStack_138;
          lStack_128 = lStack_148;
          puStack_120 = pcStack_140;
          if (*(longlong *)(lStack_148 + 0x1c8) == 0) goto LAB_14118b6d0;
          uVar10 = pdb_1400af0a0(lStack_148 + 0x1d0,&puStack_120);
          lVar9 = *(longlong *)(lVar12 + 0x1b0);
          uVar7 = *(ulonglong *)(lVar12 + 0x1b8);
          bVar15 = (byte)(uVar10 >> 0x39);
          auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
          auVar16 = pshuflw(auVar16,auVar16,0);
          lVar12 = 0;
          goto LAB_14118b565;
        }
        uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
        uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
      }
      auVar17[0] = -(auVar1[0] == -1);
      auVar17[1] = -(auVar1[1] == -1);
      auVar17[2] = -(auVar1[2] == -1);
      auVar17[3] = -(auVar1[3] == -1);
      auVar17[4] = -(auVar1[4] == -1);
      auVar17[5] = -(auVar1[5] == -1);
      auVar17[6] = -(auVar1[6] == -1);
      auVar17[7] = -(auVar1[7] == -1);
      auVar17[8] = -(auVar1[8] == -1);
      auVar17[9] = -(auVar1[9] == -1);
      auVar17[10] = -(auVar1[10] == -1);
      auVar17[0xb] = -(auVar1[0xb] == -1);
      auVar17[0xc] = -(auVar1[0xc] == -1);
      auVar17[0xd] = -(auVar1[0xd] == -1);
      auVar17[0xe] = -(auVar1[0xe] == -1);
      auVar17[0xf] = -(auVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 || (SUB161(auVar17 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar17 >> 0x17,0) & 1) != 0) || (SUB161(auVar17 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar17 >> 0x27,0) & 1) != 0) || (SUB161(auVar17 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar17 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar17 >> 0x3f,0) & 1) != 0) || (SUB161(auVar17 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar17 >> 0x4f,0) & 1) != 0) || (SUB161(auVar17 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar17 >> 0x5f,0) & 1) != 0) || (SUB161(auVar17 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar17 >> 0x6f,0) & 1) != 0) || (SUB161(auVar17 >> 0x77,0) & 1) != 0) ||
          auVar17[0xf] < '\0') break;
      uVar7 = uVar7 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
  if (*_DAT_143ca8e90 != 0) {
    pcStack_140 = pdb_1402ed420;
    pcStack_130 = pdb_1402ed420;
    lStack_128 = 0;
    puStack_120 = &UNK_14329e688;
    plStack_118 = (longlong *)0x14;
    uStack_110 = 0;
    puStack_108 = &UNK_14329e638;
    uStack_100 = 0x28;
    uStack_f8 = 1;
    puStack_f0 = &UNK_14329e688;
    uStack_e8 = 0x14;
    uStack_e0 = 0xf100000001;
    puStack_d8 = &UNK_14329f02f;
    plStack_d0 = &lStack_148;
    lStack_148 = param_1;
    plStack_138 = &lStack_68;
    pdb_140f332f0(&uStack_149,&lStack_128);
    lVar12 = *(longlong *)(param_1 + 0x18);
  }
  lStack_148 = param_2;
  pcStack_140 = (code *)param_3;
  lStack_128 = pdb_140bbbcb0(&lStack_148);
  puStack_120 = puVar5;
  plStack_118 = (longlong *)uVar8;
  puStack_120 = (undefined *)pdb_1400affa0(&lStack_128);
  lStack_128 = lVar12;
  uVar8 = pdb_1400b0130(&lStack_128);
  pdb_14072caa0(&lStack_80,param_1 + 0x10,uVar8);
  pdb_140725b60(&lStack_148,&lStack_80,&UNK_14329f3d5,9);
  lVar9 = pdb_14116e020(&lStack_148);
  lVar12 = lStack_148;
  *(undefined1 *)(lVar9 + 0x44) = 0x14;
  plStack_118 = plStack_138;
  lStack_128 = lStack_148;
  puStack_120 = pcStack_140;
  if (*(longlong *)(lStack_148 + 0x1c8) != 0) {
    uVar10 = pdb_1400af0a0(lStack_148 + 0x1d0,&puStack_120);
    lVar9 = *(longlong *)(lVar12 + 0x1b0);
    uVar7 = *(ulonglong *)(lVar12 + 0x1b8);
    bVar15 = (byte)(uVar10 >> 0x39);
    auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
    auVar16 = pshuflw(auVar16,auVar16,0);
    lVar12 = 0;
    while( true ) {
      uVar10 = uVar10 & uVar7;
      auVar1 = *(undefined1 (*) [16])(lVar9 + uVar10);
      auVar23[0] = -(auVar1[0] == auVar16[0]);
      auVar23[1] = -(auVar1[1] == auVar16[1]);
      auVar23[2] = -(auVar1[2] == auVar16[2]);
      auVar23[3] = -(auVar1[3] == auVar16[3]);
      auVar23[4] = -(auVar1[4] == auVar16[4]);
      auVar23[5] = -(auVar1[5] == auVar16[5]);
      auVar23[6] = -(auVar1[6] == auVar16[6]);
      auVar23[7] = -(auVar1[7] == auVar16[7]);
      auVar23[8] = -(auVar1[8] == auVar16[0]);
      auVar23[9] = -(auVar1[9] == auVar16[1]);
      auVar23[10] = -(auVar1[10] == auVar16[2]);
      auVar23[0xb] = -(auVar1[0xb] == auVar16[3]);
      auVar23[0xc] = -(auVar1[0xc] == auVar16[4]);
      auVar23[0xd] = -(auVar1[0xd] == auVar16[5]);
      auVar23[0xe] = -(auVar1[0xe] == auVar16[6]);
      auVar23[0xf] = -(auVar1[0xf] == auVar16[7]);
      uVar14 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
      uVar13 = (uint)uVar14;
      while (uVar14 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar13; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        lVar6 = (uVar3 + uVar10 & uVar7) * -0xd8;
        if (puStack_120 == *(undefined **)(lVar9 + -0xd8 + lVar6)) {
          *(undefined2 *)(lVar9 + lVar6 + -8) = 0x900;
          plStack_138 = plStack_118;
          lStack_148 = lStack_128;
          pcStack_140 = (code *)puStack_120;
          lVar9 = pdb_14116e020(&lStack_148);
          lVar12 = lStack_148;
          *(undefined1 *)(lVar9 + 0x44) = 0x14;
          lStack_128 = lStack_148;
          puStack_120 = pcStack_140;
          plStack_118 = plStack_138;
          if (*(longlong *)(lStack_148 + 0x1c8) == 0) goto LAB_14118b818;
          uVar10 = pdb_1400af0a0(lStack_148 + 0x1d0,&puStack_120);
          lVar9 = *(longlong *)(lVar12 + 0x1b0);
          uVar7 = *(ulonglong *)(lVar12 + 0x1b8);
          bVar15 = (byte)(uVar10 >> 0x39);
          auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
          auVar16 = pshuflw(auVar16,auVar16,0);
          lVar12 = 0;
          goto LAB_14118b667;
        }
        uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
        uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
      }
      auVar18[0] = -(auVar1[0] == -1);
      auVar18[1] = -(auVar1[1] == -1);
      auVar18[2] = -(auVar1[2] == -1);
      auVar18[3] = -(auVar1[3] == -1);
      auVar18[4] = -(auVar1[4] == -1);
      auVar18[5] = -(auVar1[5] == -1);
      auVar18[6] = -(auVar1[6] == -1);
      auVar18[7] = -(auVar1[7] == -1);
      auVar18[8] = -(auVar1[8] == -1);
      auVar18[9] = -(auVar1[9] == -1);
      auVar18[10] = -(auVar1[10] == -1);
      auVar18[0xb] = -(auVar1[0xb] == -1);
      auVar18[0xc] = -(auVar1[0xc] == -1);
      auVar18[0xd] = -(auVar1[0xd] == -1);
      auVar18[0xe] = -(auVar1[0xe] == -1);
      auVar18[0xf] = -(auVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar18 >> 0x17,0) & 1) != 0) || (SUB161(auVar18 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar18 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar18 >> 0x3f,0) & 1) != 0) || (SUB161(auVar18 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar18 >> 0x4f,0) & 1) != 0) || (SUB161(auVar18 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar18 >> 0x5f,0) & 1) != 0) || (SUB161(auVar18 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar18 >> 0x6f,0) & 1) != 0) || (SUB161(auVar18 >> 0x77,0) & 1) != 0) ||
          auVar18[0xf] < '\0') break;
      uVar10 = uVar10 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    }
  }
LAB_14118b6d0:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142fa6b48);
LAB_14118b565:
  uVar10 = uVar10 & uVar7;
  auVar1 = *(undefined1 (*) [16])(lVar9 + uVar10);
  auVar24[0] = -(auVar1[0] == auVar16[0]);
  auVar24[1] = -(auVar1[1] == auVar16[1]);
  auVar24[2] = -(auVar1[2] == auVar16[2]);
  auVar24[3] = -(auVar1[3] == auVar16[3]);
  auVar24[4] = -(auVar1[4] == auVar16[4]);
  auVar24[5] = -(auVar1[5] == auVar16[5]);
  auVar24[6] = -(auVar1[6] == auVar16[6]);
  auVar24[7] = -(auVar1[7] == auVar16[7]);
  auVar24[8] = -(auVar1[8] == auVar16[0]);
  auVar24[9] = -(auVar1[9] == auVar16[1]);
  auVar24[10] = -(auVar1[10] == auVar16[2]);
  auVar24[0xb] = -(auVar1[0xb] == auVar16[3]);
  auVar24[0xc] = -(auVar1[0xc] == auVar16[4]);
  auVar24[0xd] = -(auVar1[0xd] == auVar16[5]);
  auVar24[0xe] = -(auVar1[0xe] == auVar16[6]);
  auVar24[0xf] = -(auVar1[0xf] == auVar16[7]);
  uVar14 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe | (ushort)(auVar24[0xf] >> 7) << 0xf;
  uVar13 = (uint)uVar14;
  while (uVar14 != 0) {
    uVar3 = 0;
    for (uVar4 = uVar13; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
      uVar3 = uVar3 + 1;
    }
    lVar6 = (uVar3 + uVar10 & uVar7) * -0xd8;
    if (puStack_120 == *(undefined **)(lVar9 + -0xd8 + lVar6)) {
      *(undefined2 *)(lVar9 + lVar6 + -8) = 0x900;
      plStack_138 = plStack_118;
      lStack_148 = lStack_128;
      pcStack_140 = (code *)puStack_120;
      lVar9 = pdb_14116e020(&lStack_148);
      lVar12 = lStack_148;
      *(undefined1 *)(lVar9 + 0x44) = 0x14;
      lStack_128 = lStack_148;
      puStack_120 = pcStack_140;
      plStack_118 = plStack_138;
      if (*(longlong *)(lStack_148 + 0x1c8) == 0) goto LAB_14118b818;
      uVar10 = pdb_1400af0a0(lStack_148 + 0x1d0,&puStack_120);
      lVar9 = *(longlong *)(lVar12 + 0x1b0);
      uVar7 = *(ulonglong *)(lVar12 + 0x1b8);
      bVar15 = (byte)(uVar10 >> 0x39);
      auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
      auVar16 = pshuflw(auVar16,auVar16,0);
      lVar12 = 0;
      goto LAB_14118b773;
    }
    uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
    uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
  }
  auVar19[0] = -(auVar1[0] == -1);
  auVar19[1] = -(auVar1[1] == -1);
  auVar19[2] = -(auVar1[2] == -1);
  auVar19[3] = -(auVar1[3] == -1);
  auVar19[4] = -(auVar1[4] == -1);
  auVar19[5] = -(auVar1[5] == -1);
  auVar19[6] = -(auVar1[6] == -1);
  auVar19[7] = -(auVar1[7] == -1);
  auVar19[8] = -(auVar1[8] == -1);
  auVar19[9] = -(auVar1[9] == -1);
  auVar19[10] = -(auVar1[10] == -1);
  auVar19[0xb] = -(auVar1[0xb] == -1);
  auVar19[0xc] = -(auVar1[0xc] == -1);
  auVar19[0xd] = -(auVar1[0xd] == -1);
  auVar19[0xe] = -(auVar1[0xe] == -1);
  auVar19[0xf] = -(auVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 || (SUB161(auVar19 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar19 >> 0x17,0) & 1) != 0) || (SUB161(auVar19 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar19 >> 0x27,0) & 1) != 0) || (SUB161(auVar19 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar19 >> 0x37,0) & 1) != 0) || (SUB161(auVar19 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar19 >> 0x47,0) & 1) != 0) || (SUB161(auVar19 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar19 >> 0x57,0) & 1) != 0) || (SUB161(auVar19 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar19 >> 0x67,0) & 1) != 0) || (SUB161(auVar19 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar19 >> 0x77,0) & 1) != 0) || auVar19[0xf] < '\0') goto LAB_14118b6d0;
  uVar10 = uVar10 + lVar12 + 0x10;
  lVar12 = lVar12 + 0x10;
  goto LAB_14118b565;
LAB_14118b773:
  uVar10 = uVar10 & uVar7;
  auVar1 = *(undefined1 (*) [16])(lVar9 + uVar10);
  auVar26[0] = -(auVar1[0] == auVar16[0]);
  auVar26[1] = -(auVar1[1] == auVar16[1]);
  auVar26[2] = -(auVar1[2] == auVar16[2]);
  auVar26[3] = -(auVar1[3] == auVar16[3]);
  auVar26[4] = -(auVar1[4] == auVar16[4]);
  auVar26[5] = -(auVar1[5] == auVar16[5]);
  auVar26[6] = -(auVar1[6] == auVar16[6]);
  auVar26[7] = -(auVar1[7] == auVar16[7]);
  auVar26[8] = -(auVar1[8] == auVar16[0]);
  auVar26[9] = -(auVar1[9] == auVar16[1]);
  auVar26[10] = -(auVar1[10] == auVar16[2]);
  auVar26[0xb] = -(auVar1[0xb] == auVar16[3]);
  auVar26[0xc] = -(auVar1[0xc] == auVar16[4]);
  auVar26[0xd] = -(auVar1[0xd] == auVar16[5]);
  auVar26[0xe] = -(auVar1[0xe] == auVar16[6]);
  auVar26[0xf] = -(auVar1[0xf] == auVar16[7]);
  uVar14 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
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
  uVar13 = (uint)uVar14;
  while (uVar14 != 0) {
    uVar3 = 0;
    for (uVar4 = uVar13; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
      uVar3 = uVar3 + 1;
    }
    lVar6 = (uVar3 + uVar10 & uVar7) * -0xd8;
    if (puStack_120 == *(undefined **)(lVar9 + -0xd8 + lVar6)) goto LAB_14118b7d4;
    uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
    uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
  }
  auVar21[0] = -(auVar1[0] == -1);
  auVar21[1] = -(auVar1[1] == -1);
  auVar21[2] = -(auVar1[2] == -1);
  auVar21[3] = -(auVar1[3] == -1);
  auVar21[4] = -(auVar1[4] == -1);
  auVar21[5] = -(auVar1[5] == -1);
  auVar21[6] = -(auVar1[6] == -1);
  auVar21[7] = -(auVar1[7] == -1);
  auVar21[8] = -(auVar1[8] == -1);
  auVar21[9] = -(auVar1[9] == -1);
  auVar21[10] = -(auVar1[10] == -1);
  auVar21[0xb] = -(auVar1[0xb] == -1);
  auVar21[0xc] = -(auVar1[0xc] == -1);
  auVar21[0xd] = -(auVar1[0xd] == -1);
  auVar21[0xe] = -(auVar1[0xe] == -1);
  auVar21[0xf] = -(auVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 || (SUB161(auVar21 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar21 >> 0x17,0) & 1) != 0) || (SUB161(auVar21 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar21 >> 0x27,0) & 1) != 0) || (SUB161(auVar21 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar21 >> 0x37,0) & 1) != 0) || (SUB161(auVar21 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar21 >> 0x47,0) & 1) != 0) || (SUB161(auVar21 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar21 >> 0x57,0) & 1) != 0) || (SUB161(auVar21 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar21 >> 0x67,0) & 1) != 0) || (SUB161(auVar21 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar21 >> 0x77,0) & 1) != 0) || auVar21[0xf] < '\0') goto LAB_14118b818;
  uVar10 = uVar10 + lVar12 + 0x10;
  lVar12 = lVar12 + 0x10;
  goto LAB_14118b773;
LAB_14118b667:
  uVar10 = uVar10 & uVar7;
  auVar1 = *(undefined1 (*) [16])(lVar9 + uVar10);
  auVar25[0] = -(auVar1[0] == auVar16[0]);
  auVar25[1] = -(auVar1[1] == auVar16[1]);
  auVar25[2] = -(auVar1[2] == auVar16[2]);
  auVar25[3] = -(auVar1[3] == auVar16[3]);
  auVar25[4] = -(auVar1[4] == auVar16[4]);
  auVar25[5] = -(auVar1[5] == auVar16[5]);
  auVar25[6] = -(auVar1[6] == auVar16[6]);
  auVar25[7] = -(auVar1[7] == auVar16[7]);
  auVar25[8] = -(auVar1[8] == auVar16[0]);
  auVar25[9] = -(auVar1[9] == auVar16[1]);
  auVar25[10] = -(auVar1[10] == auVar16[2]);
  auVar25[0xb] = -(auVar1[0xb] == auVar16[3]);
  auVar25[0xc] = -(auVar1[0xc] == auVar16[4]);
  auVar25[0xd] = -(auVar1[0xd] == auVar16[5]);
  auVar25[0xe] = -(auVar1[0xe] == auVar16[6]);
  auVar25[0xf] = -(auVar1[0xf] == auVar16[7]);
  uVar14 = (ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe | (ushort)(auVar25[0xf] >> 7) << 0xf;
  uVar13 = (uint)uVar14;
  while (uVar14 != 0) {
    uVar3 = 0;
    for (uVar4 = uVar13; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
      uVar3 = uVar3 + 1;
    }
    lVar6 = (uVar3 + uVar10 & uVar7) * -0xd8;
    if (puStack_120 == *(undefined **)(lVar9 + -0xd8 + lVar6)) {
LAB_14118b7d4:
      if ((*(byte *)(lVar9 + lVar6 + -6) & 0x30) != 0) {
        *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
        lStack_128 = 3;
        pdb_140a003a0(*param_4,&lStack_128);
      }
      return;
    }
    uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
    uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
  }
  auVar20[0] = -(auVar1[0] == -1);
  auVar20[1] = -(auVar1[1] == -1);
  auVar20[2] = -(auVar1[2] == -1);
  auVar20[3] = -(auVar1[3] == -1);
  auVar20[4] = -(auVar1[4] == -1);
  auVar20[5] = -(auVar1[5] == -1);
  auVar20[6] = -(auVar1[6] == -1);
  auVar20[7] = -(auVar1[7] == -1);
  auVar20[8] = -(auVar1[8] == -1);
  auVar20[9] = -(auVar1[9] == -1);
  auVar20[10] = -(auVar1[10] == -1);
  auVar20[0xb] = -(auVar1[0xb] == -1);
  auVar20[0xc] = -(auVar1[0xc] == -1);
  auVar20[0xd] = -(auVar1[0xd] == -1);
  auVar20[0xe] = -(auVar1[0xe] == -1);
  auVar20[0xf] = -(auVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar20 >> 7,0) & 1) != 0 || (SUB161(auVar20 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar20 >> 0x17,0) & 1) != 0) || (SUB161(auVar20 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar20 >> 0x27,0) & 1) != 0) || (SUB161(auVar20 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar20 >> 0x37,0) & 1) != 0) || (SUB161(auVar20 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar20 >> 0x47,0) & 1) != 0) || (SUB161(auVar20 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar20 >> 0x57,0) & 1) != 0) || (SUB161(auVar20 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar20 >> 0x67,0) & 1) != 0) || (SUB161(auVar20 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar20 >> 0x77,0) & 1) != 0) || auVar20[0xf] < '\0') {
LAB_14118b818:
    pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar10 = uVar10 + lVar12 + 0x10;
  lVar12 = lVar12 + 0x10;
  goto LAB_14118b667;
}

