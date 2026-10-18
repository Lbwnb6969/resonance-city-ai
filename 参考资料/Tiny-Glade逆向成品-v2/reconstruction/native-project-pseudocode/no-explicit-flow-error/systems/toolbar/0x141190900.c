// VA 0x141190900, PDB extent 903 bytes
// toolbar::mei::config::TemplateView::with_slot<toolbar::menu::report_bug::ui::closure_env$12,ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::config::TemplateView::with_slot<toolbar::menu::report_bug::ui::closure_env$12,ref$<str$>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 903 */

void pdb_141190900(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  ushort uVar10;
  longlong lVar11;
  byte bVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 uStack_e9;
  longlong lStack_e8;
  code *pcStack_e0;
  longlong *plStack_d8;
  code *pcStack_d0;
  longlong lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  longlong *plStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  longlong lStack_58;
  longlong lStack_50;
  
  lVar11 = *(longlong *)(param_1 + 0x18);
  lStack_58 = param_2;
  lStack_50 = param_3;
  lStack_c8 = pdb_140bbbcb0(&lStack_58);
  uVar4 = _UNK_14329c338;
  uVar7 = _DAT_14329c330;
  puStack_c0 = (undefined *)_DAT_14329c330;
  uStack_b8 = _UNK_14329c338;
  puStack_c0 = (undefined *)pdb_1400affa0(&lStack_c8);
  lStack_c8 = lVar11;
  lVar5 = pdb_1400b0130(&lStack_c8);
  lStack_e8 = *(longlong *)(param_1 + 0x10);
  lStack_c8 = lVar5;
  if (*(longlong *)(lStack_e8 + 0x1c8) != 0) {
    uVar6 = pdb_1400af0a0(lStack_e8 + 0x1d0,&lStack_c8);
    bVar12 = (byte)(uVar6 >> 0x39);
    auVar13 = ZEXT216(CONCAT11(bVar12,bVar12));
    auVar13 = pshuflw(auVar13,auVar13,0);
    lVar8 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(lStack_e8 + 0x1b8);
      auVar1 = *(undefined1 (*) [16])(*(longlong *)(lStack_e8 + 0x1b0) + uVar6);
      auVar15[0] = -(auVar1[0] == auVar13[0]);
      auVar15[1] = -(auVar1[1] == auVar13[1]);
      auVar15[2] = -(auVar1[2] == auVar13[2]);
      auVar15[3] = -(auVar1[3] == auVar13[3]);
      auVar15[4] = -(auVar1[4] == auVar13[4]);
      auVar15[5] = -(auVar1[5] == auVar13[5]);
      auVar15[6] = -(auVar1[6] == auVar13[6]);
      auVar15[7] = -(auVar1[7] == auVar13[7]);
      auVar15[8] = -(auVar1[8] == auVar13[0]);
      auVar15[9] = -(auVar1[9] == auVar13[1]);
      auVar15[10] = -(auVar1[10] == auVar13[2]);
      auVar15[0xb] = -(auVar1[0xb] == auVar13[3]);
      auVar15[0xc] = -(auVar1[0xc] == auVar13[4]);
      auVar15[0xd] = -(auVar1[0xd] == auVar13[5]);
      auVar15[0xe] = -(auVar1[0xe] == auVar13[6]);
      auVar15[0xf] = -(auVar1[0xf] == auVar13[7]);
      uVar10 = (ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe | (ushort)(auVar15[0xf] >> 7) << 0xf;
      uVar9 = (uint)uVar10;
      while (uVar10 != 0) {
        uVar2 = 0;
        for (uVar3 = uVar9; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        if (lVar5 == *(longlong *)
                      (*(longlong *)(lStack_e8 + 0x1b0) + -0xd8 +
                      (uVar2 + uVar6 & *(ulonglong *)(lStack_e8 + 0x1b8)) * -0xd8)) {
          plStack_d8 = (longlong *)0x0;
          puStack_68 = &UNK_14329f18f;
          uStack_60 = 10;
          pcStack_e0 = (code *)lVar5;
          lStack_c8 = pdb_140bbbcb0(&puStack_68);
          puStack_c0 = (undefined *)_DAT_14329c260;
          uStack_b8 = _UNK_14329c268;
          puStack_c0 = (undefined *)pdb_1400affa0(&lStack_c8);
          lStack_c8 = lVar5;
          uVar7 = pdb_1400b0130(&lStack_c8);
          pdb_14072caa0(&lStack_c8,&lStack_e8,uVar7);
          goto LAB_141190c54;
        }
        uVar10 = (ushort)(uVar9 - 1) & (ushort)uVar9;
        uVar9 = CONCAT22((short)(uVar9 - 1 >> 0x10),uVar10);
      }
      auVar14[0] = -(auVar1[0] == -1);
      auVar14[1] = -(auVar1[1] == -1);
      auVar14[2] = -(auVar1[2] == -1);
      auVar14[3] = -(auVar1[3] == -1);
      auVar14[4] = -(auVar1[4] == -1);
      auVar14[5] = -(auVar1[5] == -1);
      auVar14[6] = -(auVar1[6] == -1);
      auVar14[7] = -(auVar1[7] == -1);
      auVar14[8] = -(auVar1[8] == -1);
      auVar14[9] = -(auVar1[9] == -1);
      auVar14[10] = -(auVar1[10] == -1);
      auVar14[0xb] = -(auVar1[0xb] == -1);
      auVar14[0xc] = -(auVar1[0xc] == -1);
      auVar14[0xd] = -(auVar1[0xd] == -1);
      auVar14[0xe] = -(auVar1[0xe] == -1);
      auVar14[0xf] = -(auVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar14 >> 7,0) & 1) != 0 || (SUB161(auVar14 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar14 >> 0x17,0) & 1) != 0) || (SUB161(auVar14 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar14 >> 0x27,0) & 1) != 0) || (SUB161(auVar14 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar14 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar14 >> 0x3f,0) & 1) != 0) || (SUB161(auVar14 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar14 >> 0x4f,0) & 1) != 0) || (SUB161(auVar14 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar14 >> 0x5f,0) & 1) != 0) || (SUB161(auVar14 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar14 >> 0x6f,0) & 1) != 0) || (SUB161(auVar14 >> 0x77,0) & 1) != 0) ||
          auVar14[0xf] < '\0') break;
      uVar6 = uVar6 + lVar8 + 0x10;
      lVar8 = lVar8 + 0x10;
    }
  }
  if (*_DAT_143ca8e90 != 0) {
    pcStack_e0 = pdb_1402ed420;
    pcStack_d0 = pdb_1402ed420;
    lStack_c8 = 0;
    puStack_c0 = &UNK_14329e688;
    uStack_b8 = 0x14;
    uStack_b0 = 0;
    puStack_a8 = &UNK_14329e638;
    uStack_a0 = 0x28;
    uStack_98 = 1;
    puStack_90 = &UNK_14329e688;
    uStack_88 = 0x14;
    uStack_80 = 0xf100000001;
    puStack_78 = &UNK_14329f02f;
    plStack_70 = &lStack_e8;
    lStack_e8 = param_1;
    plStack_d8 = &lStack_58;
    pdb_140f332f0(&uStack_e9,&lStack_c8);
    lVar11 = *(longlong *)(param_1 + 0x18);
  }
  lStack_e8 = param_2;
  pcStack_e0 = (code *)param_3;
  lStack_c8 = pdb_140bbbcb0(&lStack_e8);
  puStack_c0 = (undefined *)uVar7;
  uStack_b8 = uVar4;
  puStack_c0 = (undefined *)pdb_1400affa0(&lStack_c8);
  lStack_c8 = lVar11;
  uVar7 = pdb_1400b0130(&lStack_c8);
  pdb_14072caa0(&lStack_e8,param_1 + 0x10,uVar7);
  puStack_68 = &UNK_14329f18f;
  uStack_60 = 10;
  lStack_c8 = pdb_140bbbcb0(&puStack_68);
  puStack_c0 = (undefined *)_DAT_14329c260;
  uStack_b8 = _UNK_14329c268;
  puStack_c0 = (undefined *)pdb_1400affa0(&lStack_c8);
  lStack_c8 = (longlong)pcStack_e0;
  uVar7 = pdb_1400b0130(&lStack_c8);
  pdb_14072caa0(&lStack_c8,&lStack_e8,uVar7);
LAB_141190c54:
  uVar7 = pdb_14116ee90(&lStack_c8,0);
  pdb_14119b6b0(uVar7,&UNK_14329f18f,10);
  return;
}

