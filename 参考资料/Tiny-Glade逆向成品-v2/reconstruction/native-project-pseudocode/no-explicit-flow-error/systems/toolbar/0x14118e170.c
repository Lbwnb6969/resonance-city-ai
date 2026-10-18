// VA 0x14118e170, PDB extent 1039 bytes
// toolbar::mei::config::TemplateView::with_slot<toolbar::menu::new_session::ui::closure_env$6,ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::config::TemplateView::with_slot<toolbar::menu::new_session::ui::closure_env$6,ref$<str$>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 1039 */

void pdb_14118e170(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  ushort uVar12;
  byte bVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 uStack_119;
  longlong lStack_118;
  code *pcStack_110;
  longlong *plStack_108;
  code *pcStack_100;
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
  undefined8 uStack_90;
  undefined8 uStack_88;
  longlong lStack_80;
  longlong lStack_78;
  undefined8 uStack_70;
  longlong lStack_68;
  undefined8 uStack_60;
  
  lVar9 = *(longlong *)(param_1 + 0x18);
  lStack_68 = param_2;
  uStack_60 = param_3;
  lStack_f8 = pdb_140bbbcb0(&lStack_68);
  uVar5 = _UNK_14329c338;
  uVar8 = _DAT_14329c330;
  puStack_f0 = (undefined *)_DAT_14329c330;
  uStack_e8 = _UNK_14329c338;
  puStack_f0 = (undefined *)pdb_1400affa0(&lStack_f8);
  lStack_f8 = lVar9;
  lVar6 = pdb_1400b0130(&lStack_f8);
  lVar2 = *(longlong *)(param_1 + 0x10);
  lStack_f8 = lVar6;
  uStack_90 = param_4;
  if (*(longlong *)(lVar2 + 0x1c8) != 0) {
    uVar7 = pdb_1400af0a0(lVar2 + 0x1d0,&lStack_f8);
    bVar13 = (byte)(uVar7 >> 0x39);
    auVar14 = ZEXT216(CONCAT11(bVar13,bVar13));
    auVar14 = pshuflw(auVar14,auVar14,0);
    lVar10 = 0;
    while( true ) {
      uVar7 = uVar7 & *(ulonglong *)(lVar2 + 0x1b8);
      auVar1 = *(undefined1 (*) [16])(*(longlong *)(lVar2 + 0x1b0) + uVar7);
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
      uVar12 = (ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
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
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar11; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        if (lVar6 == *(longlong *)
                      (*(longlong *)(lVar2 + 0x1b0) + -0xd8 +
                      (uVar3 + uVar7 & *(ulonglong *)(lVar2 + 0x1b8)) * -0xd8)) {
          uStack_70 = 0;
          uStack_88 = param_5;
          lStack_80 = lVar2;
          lStack_78 = lVar6;
          lStack_f8 = pdb_140bbbcb0(&uStack_90);
          puStack_f0 = (undefined *)_DAT_14329c260;
          uStack_e8 = _UNK_14329c268;
          puStack_f0 = (undefined *)pdb_1400affa0(&lStack_f8);
          lStack_f8 = lVar6;
          uVar8 = pdb_1400b0130(&lStack_f8);
          pdb_14072caa0(&lStack_f8,&lStack_80,uVar8);
          goto LAB_14118e4d0;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
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
      uVar7 = uVar7 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
  if (*_DAT_143ca8e90 != 0) {
    pcStack_110 = pdb_1402ed420;
    pcStack_100 = pdb_1402ed420;
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
    plStack_a0 = &lStack_118;
    lStack_118 = param_1;
    plStack_108 = &lStack_68;
    pdb_140f332f0(&uStack_119,&lStack_f8);
    lVar9 = *(longlong *)(param_1 + 0x18);
  }
  lStack_118 = param_2;
  pcStack_110 = (code *)param_3;
  lStack_f8 = pdb_140bbbcb0(&lStack_118);
  puStack_f0 = (undefined *)uVar8;
  uStack_e8 = uVar5;
  puStack_f0 = (undefined *)pdb_1400affa0(&lStack_f8);
  lStack_f8 = lVar9;
  uVar8 = pdb_1400b0130(&lStack_f8);
  pdb_14072caa0(&lStack_80,param_1 + 0x10,uVar8);
  uStack_88 = param_5;
  lStack_f8 = pdb_140bbbcb0(&uStack_90);
  puStack_f0 = (undefined *)_DAT_14329c260;
  uStack_e8 = _UNK_14329c268;
  puStack_f0 = (undefined *)pdb_1400affa0(&lStack_f8);
  lStack_f8 = lStack_78;
  uVar8 = pdb_1400b0130(&lStack_f8);
  pdb_14072caa0(&lStack_f8,&lStack_80,uVar8);
LAB_14118e4d0:
  uVar8 = pdb_14116ee90(&lStack_f8,0);
  pdb_14119b6b0(uVar8,param_4,param_5);
  plStack_108 = (longlong *)uStack_e8;
  lStack_118 = lStack_f8;
  pcStack_110 = (code *)puStack_f0;
  uVar8 = pdb_14116e180(&lStack_118);
  pdb_140cb68f0(uVar8,2);
  uStack_e8 = plStack_108;
  lStack_f8 = lStack_118;
  puStack_f0 = pcStack_110;
  uVar8 = pdb_14116e180(&lStack_f8);
  pdb_14119b2b0(uVar8,_DAT_14329e24c);
  plStack_108 = (longlong *)uStack_e8;
  lStack_118 = lStack_f8;
  pcStack_110 = (code *)puStack_f0;
  uVar8 = pdb_14116e180(&lStack_118);
  pdb_140cb5a70(uVar8,3);
  return;
}

