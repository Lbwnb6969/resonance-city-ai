// VA 0x141191ec0, PDB extent 1057 bytes
// toolbar::mei::config::TemplateView::with_slot<toolbar::decoclutter_picker::decoclutter_picker_menu::closure_env$2,ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::config::TemplateView::with_slot<toolbar::decoclutter_picker::decoclutter_picker_menu::closure_env$2,ref$<str$>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 1057 */

void pdb_141191ec0(longlong param_1,longlong param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  ushort uVar13;
  longlong lVar14;
  undefined *puVar15;
  byte bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 uStack_e9;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  longlong *plStack_90;
  longlong lStack_88;
  code *pcStack_80;
  longlong *plStack_78;
  code *pcStack_70;
  longlong lStack_68;
  undefined8 uStack_60;
  
  puVar15 = *(undefined **)(param_1 + 0x18);
  lStack_68 = param_2;
  uStack_60 = param_3;
  puStack_e8 = (undefined *)pdb_140bbbcb0(&lStack_68);
  uVar8 = _UNK_14329c338;
  puVar5 = _DAT_14329c330;
  puStack_e0 = _DAT_14329c330;
  uStack_d8 = _UNK_14329c338;
  puStack_e0 = (undefined *)pdb_1400affa0(&puStack_e8);
  puStack_e8 = puVar15;
  puVar6 = (undefined *)pdb_1400b0130(&puStack_e8);
  puVar2 = *(undefined **)(param_1 + 0x10);
  puStack_e8 = puVar6;
  if (*(longlong *)(puVar2 + 0x1c8) != 0) {
    uVar7 = pdb_1400af0a0(puVar2 + 0x1d0,&puStack_e8);
    bVar16 = (byte)(uVar7 >> 0x39);
    auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
    auVar17 = pshuflw(auVar17,auVar17,0);
    lVar10 = 0;
    while( true ) {
      uVar7 = uVar7 & *(ulonglong *)(puVar2 + 0x1b8);
      auVar23 = *(undefined1 (*) [16])(*(longlong *)(puVar2 + 0x1b0) + uVar7);
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
      uVar13 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
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
      uVar12 = (uint)uVar13;
      while (uVar13 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar12; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        if (puVar6 == *(undefined **)
                       (*(longlong *)(puVar2 + 0x1b0) + -0xd8 +
                       (uVar3 + uVar7 & *(ulonglong *)(puVar2 + 0x1b8)) * -0xd8)) {
          uStack_d8 = 0;
          puStack_e8 = puVar2;
          puStack_e0 = puVar6;
          if (*(longlong *)(puVar2 + 0x1c8) == 0) goto LAB_1411922b2;
          uVar7 = pdb_1400af0a0(puVar2 + 0x1d0,&puStack_e0);
          lVar10 = *(longlong *)(puVar2 + 0x1b0);
          bVar16 = (byte)(uVar7 >> 0x39);
          auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
          auVar17 = pshuflw(auVar17,auVar17,0);
          lVar11 = 0;
          goto LAB_14119224c;
        }
        uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
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
      uVar7 = uVar7 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
  if (*_DAT_143ca8e90 != 0) {
    pcStack_80 = pdb_1402ed420;
    pcStack_70 = pdb_1402ed420;
    puStack_e8 = (undefined *)0x0;
    puStack_e0 = &UNK_14329e688;
    uStack_d8 = 0x14;
    uStack_d0 = 0;
    puStack_c8 = &UNK_14329e638;
    uStack_c0 = 0x28;
    uStack_b8 = 1;
    puStack_b0 = &UNK_14329e688;
    uStack_a8 = 0x14;
    uStack_a0 = 0xf100000001;
    puStack_98 = &UNK_14329f02f;
    plStack_90 = &lStack_88;
    lStack_88 = param_1;
    plStack_78 = &lStack_68;
    pdb_140f332f0(&uStack_e9,&puStack_e8);
    puVar15 = *(undefined **)(param_1 + 0x18);
  }
  lStack_88 = param_2;
  pcStack_80 = (code *)param_3;
  puStack_e8 = (undefined *)pdb_140bbbcb0(&lStack_88);
  puStack_e0 = puVar5;
  uStack_d8 = uVar8;
  puStack_e0 = (undefined *)pdb_1400affa0(&puStack_e8);
  puStack_e8 = puVar15;
  uVar8 = pdb_1400b0130(&puStack_e8);
  pdb_14072caa0(&puStack_e8,param_1 + 0x10,uVar8);
  puVar15 = puStack_e8;
  if (*(longlong *)(puStack_e8 + 0x1c8) == 0) {
LAB_1411922b2:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6b48);
  }
  uVar9 = pdb_1400af0a0(puStack_e8 + 0x1d0,&puStack_e0);
  lVar10 = *(longlong *)(puVar15 + 0x1b0);
  uVar7 = *(ulonglong *)(puVar15 + 0x1b8);
  bVar16 = (byte)(uVar9 >> 0x39);
  auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
  auVar17 = pshuflw(auVar17,auVar17,0);
  lVar11 = 0;
  do {
    uVar9 = uVar9 & uVar7;
    pcVar1 = (char *)(lVar10 + uVar9);
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
    uVar13 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
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
    uVar12 = (uint)uVar13;
    while (uVar13 != 0) {
      uVar3 = 0;
      for (uVar4 = uVar12; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar3 = uVar3 + 1;
      }
      lVar14 = (uVar3 + uVar9 & uVar7) * -0xd8;
      if (puStack_e0 == *(undefined **)(lVar10 + -0xd8 + lVar14)) {
        lVar10 = lVar10 + lVar14;
LAB_1411922c1:
        *(byte *)(lVar10 + -5) = *(byte *)(lVar10 + -5) | 1;
        return;
      }
      uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
      uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
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
        (SUB161(auVar19 >> 0x77,0) & 1) != 0) || auVar19[0xf] < '\0') goto LAB_1411922b2;
    uVar9 = uVar9 + lVar11 + 0x10;
    lVar11 = lVar11 + 0x10;
  } while( true );
LAB_14119224c:
  uVar7 = uVar7 & *(ulonglong *)(puVar2 + 0x1b8);
  pcVar1 = (char *)(lVar10 + uVar7);
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
  uVar13 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
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
  uVar12 = (uint)uVar13;
  while (uVar13 != 0) {
    uVar3 = 0;
    for (uVar4 = uVar12; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
      uVar3 = uVar3 + 1;
    }
    lVar14 = (uVar3 + uVar7 & *(ulonglong *)(puVar2 + 0x1b8)) * -0xd8;
    if (puVar6 == *(undefined **)(lVar10 + -0xd8 + lVar14)) {
      lVar10 = lVar10 + lVar14;
      goto LAB_1411922c1;
    }
    uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
    uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
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
      (SUB161(auVar20 >> 0x77,0) & 1) != 0) || auVar20[0xf] < '\0') goto LAB_1411922b2;
  uVar7 = uVar7 + lVar11 + 0x10;
  lVar11 = lVar11 + 0x10;
  goto LAB_14119224c;
}

