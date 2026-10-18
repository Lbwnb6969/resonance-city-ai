// VA 0x141189400, PDB extent 1916 bytes
// toolbar::mei::config::TemplateView::with_slot<toolbar::menu::report_bug::ui::closure_env$14,ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::config::TemplateView::with_slot<toolbar::menu::report_bug::ui::closure_env$14,ref$<str$>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 1916 */

void pdb_141189400(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  ushort uVar18;
  byte bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 uStack_119;
  longlong lStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  longlong *plStack_c0;
  longlong lStack_b8;
  code *pcStack_b0;
  longlong *plStack_a8;
  code *pcStack_a0;
  longlong lStack_90;
  longlong lStack_88;
  undefined8 uStack_80;
  longlong lStack_78;
  undefined8 uStack_70;
  
  lVar9 = *(longlong *)(param_1 + 0x18);
  lStack_78 = param_2;
  uStack_70 = param_3;
  lStack_118 = pdb_140bbbcb0(&lStack_78);
  uVar11 = _UNK_14329c338;
  puVar5 = _DAT_14329c330;
  puStack_110 = _DAT_14329c330;
  uStack_108 = _UNK_14329c338;
  puStack_110 = (undefined *)pdb_1400affa0(&lStack_118);
  lStack_118 = lVar9;
  lVar6 = pdb_1400b0130(&lStack_118);
  lVar13 = *(longlong *)(param_1 + 0x10);
  lStack_118 = lVar6;
  if (*(longlong *)(lVar13 + 0x1c8) != 0) {
    uVar7 = pdb_1400af0a0(lVar13 + 0x1d0,&lStack_118);
    bVar19 = (byte)(uVar7 >> 0x39);
    auVar20 = ZEXT216(CONCAT11(bVar19,bVar19));
    auVar20 = pshuflw(auVar20,auVar20,0);
    lVar16 = 0;
    while( true ) {
      uVar7 = uVar7 & *(ulonglong *)(lVar13 + 0x1b8);
      auVar1 = *(undefined1 (*) [16])(*(longlong *)(lVar13 + 0x1b0) + uVar7);
      auVar24[0] = -(auVar1[0] == auVar20[0]);
      auVar24[1] = -(auVar1[1] == auVar20[1]);
      auVar24[2] = -(auVar1[2] == auVar20[2]);
      auVar24[3] = -(auVar1[3] == auVar20[3]);
      auVar24[4] = -(auVar1[4] == auVar20[4]);
      auVar24[5] = -(auVar1[5] == auVar20[5]);
      auVar24[6] = -(auVar1[6] == auVar20[6]);
      auVar24[7] = -(auVar1[7] == auVar20[7]);
      auVar24[8] = -(auVar1[8] == auVar20[0]);
      auVar24[9] = -(auVar1[9] == auVar20[1]);
      auVar24[10] = -(auVar1[10] == auVar20[2]);
      auVar24[0xb] = -(auVar1[0xb] == auVar20[3]);
      auVar24[0xc] = -(auVar1[0xc] == auVar20[4]);
      auVar24[0xd] = -(auVar1[0xd] == auVar20[5]);
      auVar24[0xe] = -(auVar1[0xe] == auVar20[6]);
      auVar24[0xf] = -(auVar1[0xf] == auVar20[7]);
      uVar18 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
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
      uVar17 = (uint)uVar18;
      while (uVar18 != 0) {
        uVar2 = 0;
        for (uVar3 = uVar17; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        if (lVar6 == *(longlong *)
                      (*(longlong *)(lVar13 + 0x1b0) + -0xd8 +
                      (uVar2 + uVar7 & *(ulonglong *)(lVar13 + 0x1b8)) * -0xd8)) {
          lVar9 = *param_4;
          lVar16 = param_4[1];
          lVar15 = param_4[2];
          uStack_80 = 0;
          uVar14 = 0x12;
          lStack_90 = lVar13;
          lStack_88 = lVar6;
          lVar13 = pdb_140dc6290(&UNK_14329f100);
          lStack_b8 = lVar13;
          pcStack_b0 = (code *)uVar14;
          lStack_118 = pdb_140bbbcb0(&lStack_b8);
          uVar10 = _UNK_14329c268;
          puVar4 = _DAT_14329c260;
          puStack_110 = _DAT_14329c260;
          uStack_108 = _UNK_14329c268;
          puStack_110 = (undefined *)pdb_1400affa0(&lStack_118);
          lStack_118 = lVar6;
          uVar8 = pdb_1400b0130(&lStack_118);
          pdb_14072caa0(&lStack_118,&lStack_90,uVar8);
          uVar8 = pdb_14116ee90(&lStack_118,0);
          pdb_14119b6b0(uVar8,lVar13,uVar14);
          lVar13 = *(longlong *)(lVar9 + 8);
          uVar8 = *(undefined8 *)(lVar9 + 0x10);
          lStack_b8 = lVar13;
          pcStack_b0 = (code *)uVar8;
          lStack_118 = pdb_140bbbcb0(&lStack_b8);
          puStack_110 = puVar4;
          uStack_108 = uVar10;
          puStack_110 = (undefined *)pdb_1400affa0(&lStack_118);
          lStack_118 = lStack_88;
          uVar10 = pdb_1400b0130(&lStack_118);
          pdb_14072caa0(&lStack_118,&lStack_90,uVar10);
          uVar10 = pdb_14116ee90(&lStack_118,0);
          pdb_14119b6b0(uVar10,lVar13,uVar8);
          lVar9 = lStack_88;
          lStack_118 = 0;
          puStack_110 = puVar5;
          uStack_108 = uVar11;
          puStack_110 = (undefined *)pdb_1400affa0(&lStack_118);
          lStack_118 = lVar9;
          uVar11 = pdb_1400b0130(&lStack_118);
          pdb_14072caa0(&lStack_118,&lStack_90,uVar11);
          lVar9 = lStack_118;
          if (*(longlong *)(lStack_118 + 0x1c8) == 0) goto LAB_141189b6f;
          uVar12 = pdb_1400af0a0(lStack_118 + 0x1d0,&puStack_110);
          lVar13 = *(longlong *)(lVar9 + 0x1b0);
          uVar7 = *(ulonglong *)(lVar9 + 0x1b8);
          bVar19 = (byte)(uVar12 >> 0x39);
          auVar20 = ZEXT216(CONCAT11(bVar19,bVar19));
          auVar20 = pshuflw(auVar20,auVar20,0);
          lVar9 = 0;
          goto LAB_141189a78;
        }
        uVar18 = (ushort)(uVar17 - 1) & (ushort)uVar17;
        uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar18);
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
                      (SUB161(auVar21 >> 0x17,0) & 1) != 0) || (SUB161(auVar21 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar21 >> 0x27,0) & 1) != 0) || (SUB161(auVar21 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar21 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar21 >> 0x3f,0) & 1) != 0) || (SUB161(auVar21 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar21 >> 0x4f,0) & 1) != 0) || (SUB161(auVar21 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar21 >> 0x5f,0) & 1) != 0) || (SUB161(auVar21 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar21 >> 0x6f,0) & 1) != 0) || (SUB161(auVar21 >> 0x77,0) & 1) != 0) ||
          auVar21[0xf] < '\0') break;
      uVar7 = uVar7 + lVar16 + 0x10;
      lVar16 = lVar16 + 0x10;
    }
  }
  if (*_DAT_143ca8e90 != 0) {
    pcStack_b0 = pdb_1402ed420;
    pcStack_a0 = pdb_1402ed420;
    lStack_118 = 0;
    puStack_110 = &UNK_14329e688;
    uStack_108 = 0x14;
    uStack_100 = 0;
    puStack_f8 = &UNK_14329e638;
    uStack_f0 = 0x28;
    uStack_e8 = 1;
    puStack_e0 = &UNK_14329e688;
    uStack_d8 = 0x14;
    uStack_d0 = 0xf100000001;
    puStack_c8 = &UNK_14329f02f;
    plStack_c0 = &lStack_b8;
    lStack_b8 = param_1;
    plStack_a8 = &lStack_78;
    pdb_140f332f0(&uStack_119,&lStack_118);
    lVar9 = *(longlong *)(param_1 + 0x18);
  }
  lVar13 = *param_4;
  lVar16 = param_4[1];
  lVar15 = param_4[2];
  lStack_b8 = param_2;
  pcStack_b0 = (code *)param_3;
  lStack_118 = pdb_140bbbcb0(&lStack_b8);
  puStack_110 = puVar5;
  uStack_108 = uVar11;
  puStack_110 = (undefined *)pdb_1400affa0(&lStack_118);
  lStack_118 = lVar9;
  uVar8 = pdb_1400b0130(&lStack_118);
  pdb_14072caa0(&lStack_90,param_1 + 0x10,uVar8);
  uVar14 = 0x12;
  lVar9 = pdb_140dc6290(&UNK_14329f100);
  lStack_b8 = lVar9;
  pcStack_b0 = (code *)uVar14;
  lStack_118 = pdb_140bbbcb0(&lStack_b8);
  uVar10 = _UNK_14329c268;
  puVar4 = _DAT_14329c260;
  puStack_110 = _DAT_14329c260;
  uStack_108 = _UNK_14329c268;
  puStack_110 = (undefined *)pdb_1400affa0(&lStack_118);
  lStack_118 = lStack_88;
  uVar8 = pdb_1400b0130(&lStack_118);
  pdb_14072caa0(&lStack_118,&lStack_90,uVar8);
  uVar8 = pdb_14116ee90(&lStack_118,0);
  pdb_14119b6b0(uVar8,lVar9,uVar14);
  lVar9 = *(longlong *)(lVar13 + 8);
  uVar8 = *(undefined8 *)(lVar13 + 0x10);
  lStack_b8 = lVar9;
  pcStack_b0 = (code *)uVar8;
  lStack_118 = pdb_140bbbcb0(&lStack_b8);
  puStack_110 = puVar4;
  uStack_108 = uVar10;
  puStack_110 = (undefined *)pdb_1400affa0(&lStack_118);
  lStack_118 = lStack_88;
  uVar10 = pdb_1400b0130(&lStack_118);
  pdb_14072caa0(&lStack_118,&lStack_90,uVar10);
  uVar10 = pdb_14116ee90(&lStack_118,0);
  pdb_14119b6b0(uVar10,lVar9,uVar8);
  lVar9 = lStack_88;
  lStack_118 = 0;
  puStack_110 = puVar5;
  uStack_108 = uVar11;
  puStack_110 = (undefined *)pdb_1400affa0(&lStack_118);
  lStack_118 = lVar9;
  uVar11 = pdb_1400b0130(&lStack_118);
  pdb_14072caa0(&lStack_118,&lStack_90,uVar11);
  lVar9 = lStack_118;
  if (*(longlong *)(lStack_118 + 0x1c8) == 0) {
LAB_141189b6f:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6b30);
  }
  uVar12 = pdb_1400af0a0(lStack_118 + 0x1d0,&puStack_110);
  lVar13 = *(longlong *)(lVar9 + 0x1b0);
  uVar7 = *(ulonglong *)(lVar9 + 0x1b8);
  bVar19 = (byte)(uVar12 >> 0x39);
  auVar20 = ZEXT216(CONCAT11(bVar19,bVar19));
  auVar20 = pshuflw(auVar20,auVar20,0);
  lVar9 = 0;
  do {
    uVar12 = uVar12 & uVar7;
    auVar1 = *(undefined1 (*) [16])(lVar13 + uVar12);
    auVar25[0] = -(auVar1[0] == auVar20[0]);
    auVar25[1] = -(auVar1[1] == auVar20[1]);
    auVar25[2] = -(auVar1[2] == auVar20[2]);
    auVar25[3] = -(auVar1[3] == auVar20[3]);
    auVar25[4] = -(auVar1[4] == auVar20[4]);
    auVar25[5] = -(auVar1[5] == auVar20[5]);
    auVar25[6] = -(auVar1[6] == auVar20[6]);
    auVar25[7] = -(auVar1[7] == auVar20[7]);
    auVar25[8] = -(auVar1[8] == auVar20[0]);
    auVar25[9] = -(auVar1[9] == auVar20[1]);
    auVar25[10] = -(auVar1[10] == auVar20[2]);
    auVar25[0xb] = -(auVar1[0xb] == auVar20[3]);
    auVar25[0xc] = -(auVar1[0xc] == auVar20[4]);
    auVar25[0xd] = -(auVar1[0xd] == auVar20[5]);
    auVar25[0xe] = -(auVar1[0xe] == auVar20[6]);
    auVar25[0xf] = -(auVar1[0xf] == auVar20[7]);
    uVar18 = (ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
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
    uVar17 = (uint)uVar18;
    while (uVar18 != 0) {
      uVar2 = 0;
      for (uVar3 = uVar17; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        uVar2 = uVar2 + 1;
      }
      lVar6 = (uVar2 + uVar12 & uVar7) * -0xd8;
      if (puStack_110 == *(undefined **)(lVar13 + -0xd8 + lVar6)) {
LAB_141189add:
        lVar13 = lVar13 + lVar6;
        *(undefined1 (*) [16])(lVar13 + -0xa8) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(lVar13 + -0xb8) = (undefined1  [16])0x0;
        *(undefined8 *)(lVar13 + -0x98) = 0x41f0000000000000;
        *(undefined1 (*) [16])(lVar13 + -0x90) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(lVar13 + -0x81) = (undefined1  [16])0x0;
        *(undefined1 *)(lVar13 + -0x71) = 4;
        plStack_a8 = (longlong *)uStack_108;
        lStack_b8 = lStack_118;
        pcStack_b0 = (code *)puStack_110;
        pdb_1411720c0(&lStack_118,&lStack_b8,lVar16,lVar15);
        return;
      }
      uVar18 = (ushort)(uVar17 - 1) & (ushort)uVar17;
      uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar18);
    }
    auVar22[0] = -(auVar1[0] == -1);
    auVar22[1] = -(auVar1[1] == -1);
    auVar22[2] = -(auVar1[2] == -1);
    auVar22[3] = -(auVar1[3] == -1);
    auVar22[4] = -(auVar1[4] == -1);
    auVar22[5] = -(auVar1[5] == -1);
    auVar22[6] = -(auVar1[6] == -1);
    auVar22[7] = -(auVar1[7] == -1);
    auVar22[8] = -(auVar1[8] == -1);
    auVar22[9] = -(auVar1[9] == -1);
    auVar22[10] = -(auVar1[10] == -1);
    auVar22[0xb] = -(auVar1[0xb] == -1);
    auVar22[0xc] = -(auVar1[0xc] == -1);
    auVar22[0xd] = -(auVar1[0xd] == -1);
    auVar22[0xe] = -(auVar1[0xe] == -1);
    auVar22[0xf] = -(auVar1[0xf] == -1);
    if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) != 0 || (SUB161(auVar22 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar22 >> 0x17,0) & 1) != 0) || (SUB161(auVar22 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar22 >> 0x27,0) & 1) != 0) || (SUB161(auVar22 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar22 >> 0x37,0) & 1) != 0) || (SUB161(auVar22 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar22 >> 0x47,0) & 1) != 0) || (SUB161(auVar22 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar22 >> 0x57,0) & 1) != 0) || (SUB161(auVar22 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar22 >> 0x67,0) & 1) != 0) || (SUB161(auVar22 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar22 >> 0x77,0) & 1) != 0) || auVar22[0xf] < '\0') goto LAB_141189b6f;
    uVar12 = uVar12 + lVar9 + 0x10;
    lVar9 = lVar9 + 0x10;
  } while( true );
LAB_141189a78:
  uVar12 = uVar12 & uVar7;
  auVar1 = *(undefined1 (*) [16])(lVar13 + uVar12);
  auVar26[0] = -(auVar1[0] == auVar20[0]);
  auVar26[1] = -(auVar1[1] == auVar20[1]);
  auVar26[2] = -(auVar1[2] == auVar20[2]);
  auVar26[3] = -(auVar1[3] == auVar20[3]);
  auVar26[4] = -(auVar1[4] == auVar20[4]);
  auVar26[5] = -(auVar1[5] == auVar20[5]);
  auVar26[6] = -(auVar1[6] == auVar20[6]);
  auVar26[7] = -(auVar1[7] == auVar20[7]);
  auVar26[8] = -(auVar1[8] == auVar20[0]);
  auVar26[9] = -(auVar1[9] == auVar20[1]);
  auVar26[10] = -(auVar1[10] == auVar20[2]);
  auVar26[0xb] = -(auVar1[0xb] == auVar20[3]);
  auVar26[0xc] = -(auVar1[0xc] == auVar20[4]);
  auVar26[0xd] = -(auVar1[0xd] == auVar20[5]);
  auVar26[0xe] = -(auVar1[0xe] == auVar20[6]);
  auVar26[0xf] = -(auVar1[0xf] == auVar20[7]);
  uVar18 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
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
  uVar17 = (uint)uVar18;
  while (uVar18 != 0) {
    uVar2 = 0;
    for (uVar3 = uVar17; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
      uVar2 = uVar2 + 1;
    }
    lVar6 = (uVar2 + uVar12 & uVar7) * -0xd8;
    if (puStack_110 == *(undefined **)(lVar13 + -0xd8 + lVar6)) goto LAB_141189add;
    uVar18 = (ushort)(uVar17 - 1) & (ushort)uVar17;
    uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar18);
  }
  auVar23[0] = -(auVar1[0] == -1);
  auVar23[1] = -(auVar1[1] == -1);
  auVar23[2] = -(auVar1[2] == -1);
  auVar23[3] = -(auVar1[3] == -1);
  auVar23[4] = -(auVar1[4] == -1);
  auVar23[5] = -(auVar1[5] == -1);
  auVar23[6] = -(auVar1[6] == -1);
  auVar23[7] = -(auVar1[7] == -1);
  auVar23[8] = -(auVar1[8] == -1);
  auVar23[9] = -(auVar1[9] == -1);
  auVar23[10] = -(auVar1[10] == -1);
  auVar23[0xb] = -(auVar1[0xb] == -1);
  auVar23[0xc] = -(auVar1[0xc] == -1);
  auVar23[0xd] = -(auVar1[0xd] == -1);
  auVar23[0xe] = -(auVar1[0xe] == -1);
  auVar23[0xf] = -(auVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar23 >> 7,0) & 1) != 0 || (SUB161(auVar23 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar23 >> 0x17,0) & 1) != 0) || (SUB161(auVar23 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar23 >> 0x27,0) & 1) != 0) || (SUB161(auVar23 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar23 >> 0x37,0) & 1) != 0) || (SUB161(auVar23 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar23 >> 0x47,0) & 1) != 0) || (SUB161(auVar23 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar23 >> 0x57,0) & 1) != 0) || (SUB161(auVar23 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar23 >> 0x67,0) & 1) != 0) || (SUB161(auVar23 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar23 >> 0x77,0) & 1) != 0) || auVar23[0xf] < '\0') goto LAB_141189b6f;
  uVar12 = uVar12 + lVar9 + 0x10;
  lVar9 = lVar9 + 0x10;
  goto LAB_141189a78;
}

