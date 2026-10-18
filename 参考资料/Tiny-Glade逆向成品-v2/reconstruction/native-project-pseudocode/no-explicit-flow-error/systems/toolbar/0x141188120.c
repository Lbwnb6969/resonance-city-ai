// VA 0x141188120, PDB extent 977 bytes
// toolbar::mei::config::TemplateView::with_slot<toolbar::menu::report_bug::ui::closure_env$4,ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::config::TemplateView::with_slot<toolbar::menu::report_bug::ui::closure_env$4,ref$<str$>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 977 */

void pdb_141188120(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  ushort uVar11;
  longlong lVar12;
  byte bVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
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
  longlong lStack_68;
  longlong lStack_60;
  
  lVar12 = *(longlong *)(param_1 + 0x18);
  lStack_68 = param_2;
  lStack_60 = param_3;
  lStack_c8 = pdb_140bbbcb0(&lStack_68);
  uVar6 = _UNK_14329c338;
  uVar8 = _DAT_14329c330;
  puStack_c0 = (undefined *)_DAT_14329c330;
  uStack_b8 = _UNK_14329c338;
  puStack_c0 = (undefined *)pdb_1400affa0(&lStack_c8);
  lStack_c8 = lVar12;
  pcStack_e0 = (code *)pdb_1400b0130(&lStack_c8);
  lStack_e8 = *(longlong *)(param_1 + 0x10);
  lStack_c8 = (longlong)pcStack_e0;
  if (*(longlong *)(lStack_e8 + 0x1c8) != 0) {
    uVar7 = pdb_1400af0a0(lStack_e8 + 0x1d0,&lStack_c8);
    bVar13 = (byte)(uVar7 >> 0x39);
    auVar14 = ZEXT216(CONCAT11(bVar13,bVar13));
    auVar14 = pshuflw(auVar14,auVar14,0);
    lVar9 = 0;
    while( true ) {
      uVar7 = uVar7 & *(ulonglong *)(lStack_e8 + 0x1b8);
      auVar1 = *(undefined1 (*) [16])(*(longlong *)(lStack_e8 + 0x1b0) + uVar7);
      auVar16[0] = -(auVar1[0] == auVar14[0]);
      auVar16[1] = -(auVar1[1] == auVar14[1]);
      auVar16[2] = -(auVar1[2] == auVar14[2]);
      auVar16[3] = -(auVar1[3] == auVar14[3]);
      auVar16[4] = -(auVar1[4] == auVar14[4]);
      auVar16[5] = -(auVar1[5] == auVar14[5]);
      auVar16[6] = -(auVar1[6] == auVar14[6]);
      auVar16[7] = -(auVar1[7] == auVar14[7]);
      auVar16[8] = -(auVar1[8] == auVar14[0]);
      auVar16[9] = -(auVar1[9] == auVar14[1]);
      auVar16[10] = -(auVar1[10] == auVar14[2]);
      auVar16[0xb] = -(auVar1[0xb] == auVar14[3]);
      auVar16[0xc] = -(auVar1[0xc] == auVar14[4]);
      auVar16[0xd] = -(auVar1[0xd] == auVar14[5]);
      auVar16[0xe] = -(auVar1[0xe] == auVar14[6]);
      auVar16[0xf] = -(auVar1[0xf] == auVar14[7]);
      uVar11 = (ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe | (ushort)(auVar16[0xf] >> 7) << 0xf;
      uVar10 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar10; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        if (pcStack_e0 ==
            (code *)*(longlong *)
                     (*(longlong *)(lStack_e8 + 0x1b0) + -0xd8 +
                     (uVar4 + uVar7 & *(ulonglong *)(lStack_e8 + 0x1b8)) * -0xd8)) {
          plStack_d8 = (longlong *)0x0;
          uVar2 = *(undefined4 *)((longlong)param_4 + 0x1c);
          puVar3 = (undefined4 *)param_4[2];
          *puVar3 = uVar2;
          lVar12 = *param_4;
          pdb_140734650(&lStack_c8,&lStack_e8,&UNK_14329f121,0x11,lVar12 + 0x18);
          *puVar3 = uVar2;
          pdb_140734650(&lStack_c8,&lStack_e8,&UNK_14329f132,0x13,lVar12 + 0x19);
          *puVar3 = uVar2;
          pdb_140734650(&lStack_c8,&lStack_e8,&UNK_14329f145,0x13,lVar12 + 0x1a);
          *puVar3 = uVar2;
          goto LAB_1411884d0;
        }
        uVar11 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar11);
      }
      auVar15[0] = -(auVar1[0] == -1);
      auVar15[1] = -(auVar1[1] == -1);
      auVar15[2] = -(auVar1[2] == -1);
      auVar15[3] = -(auVar1[3] == -1);
      auVar15[4] = -(auVar1[4] == -1);
      auVar15[5] = -(auVar1[5] == -1);
      auVar15[6] = -(auVar1[6] == -1);
      auVar15[7] = -(auVar1[7] == -1);
      auVar15[8] = -(auVar1[8] == -1);
      auVar15[9] = -(auVar1[9] == -1);
      auVar15[10] = -(auVar1[10] == -1);
      auVar15[0xb] = -(auVar1[0xb] == -1);
      auVar15[0xc] = -(auVar1[0xc] == -1);
      auVar15[0xd] = -(auVar1[0xd] == -1);
      auVar15[0xe] = -(auVar1[0xe] == -1);
      auVar15[0xf] = -(auVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar15 >> 7,0) & 1) != 0 || (SUB161(auVar15 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar15 >> 0x17,0) & 1) != 0) || (SUB161(auVar15 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar15 >> 0x27,0) & 1) != 0) || (SUB161(auVar15 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar15 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar15 >> 0x3f,0) & 1) != 0) || (SUB161(auVar15 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar15 >> 0x4f,0) & 1) != 0) || (SUB161(auVar15 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar15 >> 0x5f,0) & 1) != 0) || (SUB161(auVar15 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar15 >> 0x6f,0) & 1) != 0) || (SUB161(auVar15 >> 0x77,0) & 1) != 0) ||
          auVar15[0xf] < '\0') break;
      uVar7 = uVar7 + lVar9 + 0x10;
      lVar9 = lVar9 + 0x10;
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
    plStack_d8 = &lStack_68;
    pdb_140f332f0(&uStack_e9,&lStack_c8);
    lVar12 = *(longlong *)(param_1 + 0x18);
  }
  lStack_e8 = param_2;
  pcStack_e0 = (code *)param_3;
  lStack_c8 = pdb_140bbbcb0(&lStack_e8);
  puStack_c0 = (undefined *)uVar8;
  uStack_b8 = uVar6;
  puStack_c0 = (undefined *)pdb_1400affa0(&lStack_c8);
  lStack_c8 = lVar12;
  uVar8 = pdb_1400b0130(&lStack_c8);
  pdb_14072caa0(&lStack_e8,param_1 + 0x10,uVar8);
  uVar2 = *(undefined4 *)((longlong)param_4 + 0x1c);
  puVar3 = (undefined4 *)param_4[2];
  *puVar3 = uVar2;
  lVar12 = *param_4;
  pdb_140734650(&lStack_c8,&lStack_e8,&UNK_14329f121,0x11,lVar12 + 0x18);
  *puVar3 = uVar2;
  pdb_140734650(&lStack_c8,&lStack_e8,&UNK_14329f132,0x13,lVar12 + 0x19);
  *puVar3 = uVar2;
  pdb_140734650(&lStack_c8,&lStack_e8,&UNK_14329f145,0x13,lVar12 + 0x1a);
  *puVar3 = uVar2;
LAB_1411884d0:
  pdb_140734650(&lStack_c8,&lStack_e8,&UNK_14329f158,0x11,lVar12 + 0x1b);
  return;
}

