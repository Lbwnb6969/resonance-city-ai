// VA 0x141187200, PDB extent 1471 bytes
// toolbar::mei::config::TemplateView::with_slot<toolbar::menu::report_bug::ui::closure_env$13,ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::config::TemplateView::with_slot<toolbar::menu::report_bug::ui::closure_env$13,ref$<str$>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 1471 */

void pdb_141187200(longlong param_1,longlong param_2,longlong param_3,undefined1 *param_4)

{
  char *pcVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  ushort uVar15;
  byte bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 uStack_f9;
  longlong lStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  longlong *plStack_a0;
  longlong lStack_98;
  code *pcStack_90;
  longlong *plStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  longlong lStack_68;
  longlong lStack_60;
  
  lVar13 = *(longlong *)(param_1 + 0x18);
  lStack_68 = param_2;
  lStack_60 = param_3;
  lStack_f8 = pdb_140bbbcb0(&lStack_68);
  uVar8 = _UNK_14329c338;
  puVar5 = _DAT_14329c330;
  puStack_f0 = _DAT_14329c330;
  uStack_e8 = _UNK_14329c338;
  puStack_f0 = (undefined *)pdb_1400affa0(&lStack_f8);
  lStack_f8 = lVar13;
  lVar6 = pdb_1400b0130(&lStack_f8);
  lStack_98 = *(longlong *)(param_1 + 0x10);
  lStack_f8 = lVar6;
  if (*(longlong *)(lStack_98 + 0x1c8) != 0) {
    uVar7 = pdb_1400af0a0(lStack_98 + 0x1d0,&lStack_f8);
    bVar16 = (byte)(uVar7 >> 0x39);
    auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
    auVar17 = pshuflw(auVar17,auVar17,0);
    lVar12 = 0;
    while( true ) {
      uVar7 = uVar7 & *(ulonglong *)(lStack_98 + 0x1b8);
      auVar23 = *(undefined1 (*) [16])(*(longlong *)(lStack_98 + 0x1b0) + uVar7);
      auVar21[0] = -(auVar23[0] == auVar17[0]);
      auVar21[1] = -(auVar23[1] == auVar17[1]);
      auVar21[2] = -(auVar23[2] == auVar17[2]);
      auVar21[3] = -(auVar23[3] == auVar17[3]);
      auVar21[4] = -(auVar23[4] == auVar17[4]);
      auVar21[5] = -(auVar23[5] == auVar17[5]);
      auVar21[6] = -(auVar23[6] == auVar17[6]);
      auVar21[7] = -(auVar23[7] == auVar17[7]);
      auVar21[8] = -(auVar23[8] == auVar17[0]);
      auVar21[9] = -(auVar23[9] == auVar17[1]);
      auVar21[10] = -(auVar23[10] == auVar17[2]);
      auVar21[0xb] = -(auVar23[0xb] == auVar17[3]);
      auVar21[0xc] = -(auVar23[0xc] == auVar17[4]);
      auVar21[0xd] = -(auVar23[0xd] == auVar17[5]);
      auVar21[0xe] = -(auVar23[0xe] == auVar17[6]);
      auVar21[0xf] = -(auVar23[0xf] == auVar17[7]);
      uVar15 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe | (ushort)(auVar21[0xf] >> 7) << 0xf;
      uVar14 = (uint)uVar15;
      while (uVar15 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar14; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        if (lVar6 == *(longlong *)
                      (*(longlong *)(lStack_98 + 0x1b0) + -0xd8 +
                      (uVar3 + uVar7 & *(ulonglong *)(lStack_98 + 0x1b8)) * -0xd8)) {
          plStack_88 = (longlong *)0x0;
          uVar11 = 0xf;
          pcStack_90 = (code *)lVar6;
          uVar8 = pdb_140dc6290(&UNK_14329f0a5);
          uStack_78 = uVar8;
          uStack_70 = uVar11;
          lStack_f8 = pdb_140bbbcb0(&uStack_78);
          puStack_f0 = _DAT_14329c260;
          uStack_e8 = _UNK_14329c268;
          puStack_f0 = (undefined *)pdb_1400affa0(&lStack_f8);
          lStack_f8 = lVar6;
          uVar9 = pdb_1400b0130(&lStack_f8);
          pdb_14072caa0(&lStack_f8,&lStack_98,uVar9);
          uVar9 = pdb_14116ee90(&lStack_f8,0);
          pdb_14119b6b0(uVar9,uVar8,uVar11);
          uVar9 = 2;
          uVar8 = pdb_140dc6290(&UNK_14329f0b4,2);
          pdb_1407339e0(&lStack_f8,&lStack_98,uVar8,uVar9);
          lVar13 = lStack_f8;
          if (*(longlong *)(lStack_f8 + 0x1c8) == 0) goto LAB_1411877a6;
          uVar10 = pdb_1400af0a0(lStack_f8 + 0x1d0,&puStack_f0);
          lVar6 = *(longlong *)(lVar13 + 0x1b0);
          uVar7 = *(ulonglong *)(lVar13 + 0x1b8);
          bVar16 = (byte)(uVar10 >> 0x39);
          auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
          auVar17 = pshuflw(auVar17,auVar17,0);
          lVar13 = 0;
          goto LAB_14118771d;
        }
        uVar15 = (ushort)(uVar14 - 1) & (ushort)uVar14;
        uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar15);
      }
      auVar18[0] = -(auVar23[0] == -1);
      auVar18[1] = -(auVar23[1] == -1);
      auVar18[2] = -(auVar23[2] == -1);
      auVar18[3] = -(auVar23[3] == -1);
      auVar18[4] = -(auVar23[4] == -1);
      auVar18[5] = -(auVar23[5] == -1);
      auVar18[6] = -(auVar23[6] == -1);
      auVar18[7] = -(auVar23[7] == -1);
      auVar18[8] = -(auVar23[8] == -1);
      auVar18[9] = -(auVar23[9] == -1);
      auVar18[10] = -(auVar23[10] == -1);
      auVar18[0xb] = -(auVar23[0xb] == -1);
      auVar18[0xc] = -(auVar23[0xc] == -1);
      auVar18[0xd] = -(auVar23[0xd] == -1);
      auVar18[0xe] = -(auVar23[0xe] == -1);
      auVar18[0xf] = -(auVar23[0xf] == -1);
      if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar18 >> 0x17,0) & 1) != 0) || (SUB161(auVar18 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar18 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar18 >> 0x3f,0) & 1) != 0) || (SUB161(auVar18 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar18 >> 0x4f,0) & 1) != 0) || (SUB161(auVar18 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar18 >> 0x5f,0) & 1) != 0) || (SUB161(auVar18 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar18 >> 0x6f,0) & 1) != 0) || (SUB161(auVar18 >> 0x77,0) & 1) != 0) ||
          auVar18[0xf] < '\0') break;
      uVar7 = uVar7 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    }
  }
  if (*_DAT_143ca8e90 != 0) {
    pcStack_90 = pdb_1402ed420;
    pcStack_80 = pdb_1402ed420;
    lStack_f8 = 0;
    puStack_f0 = &UNK_14329e688;
    uStack_e8 = 0x14;
    uStack_e0 = 0;
    puStack_d8 = &UNK_14329e638;
    uStack_d0 = 0x28;
    uStack_c8 = 1;
    puStack_c0 = &UNK_14329e688;
    uStack_b8 = 0x14;
    uStack_b0 = 0xf100000001;
    puStack_a8 = &UNK_14329f02f;
    plStack_a0 = &lStack_98;
    lStack_98 = param_1;
    plStack_88 = &lStack_68;
    pdb_140f332f0(&uStack_f9,&lStack_f8);
    lVar13 = *(longlong *)(param_1 + 0x18);
  }
  lStack_98 = param_2;
  pcStack_90 = (code *)param_3;
  lStack_f8 = pdb_140bbbcb0(&lStack_98);
  puStack_f0 = puVar5;
  uStack_e8 = uVar8;
  puStack_f0 = (undefined *)pdb_1400affa0(&lStack_f8);
  lStack_f8 = lVar13;
  uVar8 = pdb_1400b0130(&lStack_f8);
  pdb_14072caa0(&lStack_98,param_1 + 0x10,uVar8);
  uVar11 = 0xf;
  uVar8 = pdb_140dc6290(&UNK_14329f0a5);
  uStack_78 = uVar8;
  uStack_70 = uVar11;
  lStack_f8 = pdb_140bbbcb0(&uStack_78);
  puStack_f0 = _DAT_14329c260;
  uStack_e8 = _UNK_14329c268;
  puStack_f0 = (undefined *)pdb_1400affa0(&lStack_f8);
  lStack_f8 = (longlong)pcStack_90;
  uVar9 = pdb_1400b0130(&lStack_f8);
  pdb_14072caa0(&lStack_f8,&lStack_98,uVar9);
  uVar9 = pdb_14116ee90(&lStack_f8,0);
  pdb_14119b6b0(uVar9,uVar8,uVar11);
  uVar9 = 2;
  uVar8 = pdb_140dc6290(&UNK_14329f0b4,2);
  pdb_1407339e0(&lStack_f8,&lStack_98,uVar8,uVar9);
  lVar13 = lStack_f8;
  if (*(longlong *)(lStack_f8 + 0x1c8) == 0) {
LAB_1411877a6:
    pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar10 = pdb_1400af0a0(lStack_f8 + 0x1d0,&puStack_f0);
  lVar6 = *(longlong *)(lVar13 + 0x1b0);
  uVar7 = *(ulonglong *)(lVar13 + 0x1b8);
  bVar16 = (byte)(uVar10 >> 0x39);
  auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
  auVar17 = pshuflw(auVar17,auVar17,0);
  lVar13 = 0;
  do {
    uVar10 = uVar10 & uVar7;
    pcVar1 = (char *)(lVar6 + uVar10);
    auVar22[0] = -(*pcVar1 == auVar17[0]);
    auVar22[1] = -(pcVar1[1] == auVar17[1]);
    auVar22[2] = -(pcVar1[2] == auVar17[2]);
    auVar22[3] = -(pcVar1[3] == auVar17[3]);
    auVar22[4] = -(pcVar1[4] == auVar17[4]);
    auVar22[5] = -(pcVar1[5] == auVar17[5]);
    auVar22[6] = -(pcVar1[6] == auVar17[6]);
    auVar22[7] = -(pcVar1[7] == auVar17[7]);
    auVar22[8] = -(pcVar1[8] == auVar17[0]);
    auVar22[9] = -(pcVar1[9] == auVar17[1]);
    auVar22[10] = -(pcVar1[10] == auVar17[2]);
    auVar22[0xb] = -(pcVar1[0xb] == auVar17[3]);
    auVar22[0xc] = -(pcVar1[0xc] == auVar17[4]);
    auVar22[0xd] = -(pcVar1[0xd] == auVar17[5]);
    auVar22[0xe] = -(pcVar1[0xe] == auVar17[6]);
    auVar22[0xf] = -(pcVar1[0xf] == auVar17[7]);
    uVar15 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
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
    uVar14 = (uint)uVar15;
    while (uVar15 != 0) {
      uVar3 = 0;
      for (uVar4 = uVar14; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar3 = uVar3 + 1;
      }
      lVar12 = (uVar3 + uVar10 & uVar7) * -0xd8;
      if (puStack_f0 == *(undefined **)(lVar6 + -0xd8 + lVar12)) {
LAB_14118777e:
        if ((*(byte *)(lVar6 + lVar12 + -6) & 0x30) != 0) {
          *param_4 = 1;
        }
        return;
      }
      uVar15 = (ushort)(uVar14 - 1) & (ushort)uVar14;
      uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar15);
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
                  || (SUB161(auVar19 >> 0x27,0) & 1) != 0) || (SUB161(auVar19 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar19 >> 0x37,0) & 1) != 0) || (SUB161(auVar19 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar19 >> 0x47,0) & 1) != 0) || (SUB161(auVar19 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar19 >> 0x57,0) & 1) != 0) || (SUB161(auVar19 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar19 >> 0x67,0) & 1) != 0) || (SUB161(auVar19 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar19 >> 0x77,0) & 1) != 0) || auVar19[0xf] < '\0') goto LAB_1411877a6;
    uVar10 = uVar10 + lVar13 + 0x10;
    lVar13 = lVar13 + 0x10;
  } while( true );
LAB_14118771d:
  uVar10 = uVar10 & uVar7;
  pcVar1 = (char *)(lVar6 + uVar10);
  auVar23[0] = -(*pcVar1 == auVar17[0]);
  auVar23[1] = -(pcVar1[1] == auVar17[1]);
  auVar23[2] = -(pcVar1[2] == auVar17[2]);
  auVar23[3] = -(pcVar1[3] == auVar17[3]);
  auVar23[4] = -(pcVar1[4] == auVar17[4]);
  auVar23[5] = -(pcVar1[5] == auVar17[5]);
  auVar23[6] = -(pcVar1[6] == auVar17[6]);
  auVar23[7] = -(pcVar1[7] == auVar17[7]);
  auVar23[8] = -(pcVar1[8] == auVar17[0]);
  auVar23[9] = -(pcVar1[9] == auVar17[1]);
  auVar23[10] = -(pcVar1[10] == auVar17[2]);
  auVar23[0xb] = -(pcVar1[0xb] == auVar17[3]);
  auVar23[0xc] = -(pcVar1[0xc] == auVar17[4]);
  auVar23[0xd] = -(pcVar1[0xd] == auVar17[5]);
  auVar23[0xe] = -(pcVar1[0xe] == auVar17[6]);
  auVar23[0xf] = -(pcVar1[0xf] == auVar17[7]);
  uVar15 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
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
  uVar14 = (uint)uVar15;
  while (uVar15 != 0) {
    uVar3 = 0;
    for (uVar4 = uVar14; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
      uVar3 = uVar3 + 1;
    }
    lVar12 = (uVar3 + uVar10 & uVar7) * -0xd8;
    if (puStack_f0 == *(undefined **)(lVar6 + -0xd8 + lVar12)) goto LAB_14118777e;
    uVar15 = (ushort)(uVar14 - 1) & (ushort)uVar14;
    uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar15);
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
                  (SUB161(auVar20 >> 0x17,0) & 1) != 0) || (SUB161(auVar20 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar20 >> 0x27,0) & 1) != 0) || (SUB161(auVar20 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar20 >> 0x37,0) & 1) != 0) || (SUB161(auVar20 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar20 >> 0x47,0) & 1) != 0) || (SUB161(auVar20 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar20 >> 0x57,0) & 1) != 0) || (SUB161(auVar20 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar20 >> 0x67,0) & 1) != 0) || (SUB161(auVar20 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar20 >> 0x77,0) & 1) != 0) || auVar20[0xf] < '\0') goto LAB_1411877a6;
  uVar10 = uVar10 + lVar13 + 0x10;
  lVar13 = lVar13 + 0x10;
  goto LAB_14118771d;
}

