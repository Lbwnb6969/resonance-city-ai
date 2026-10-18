// VA 0x14118dd80, PDB extent 1003 bytes
// toolbar::mei::config::TemplateView::with_slot<toolbar::menu::load::ui::closure_env$7,ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::config::TemplateView::with_slot<toolbar::menu::load::ui::closure_env$7,ref$<str$> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 1003 */

void pdb_14118dd80(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  uint uVar12;
  ushort uVar13;
  byte bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 uStack_109;
  longlong lStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  longlong *plStack_b0;
  longlong lStack_a8;
  code *pcStack_a0;
  longlong *plStack_98;
  code *pcStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  longlong lStack_70;
  longlong lStack_68;
  undefined8 uStack_60;
  longlong lStack_58;
  undefined8 uStack_50;
  
  lVar9 = *(longlong *)(param_1 + 0x18);
  lStack_58 = param_2;
  uStack_50 = param_3;
  lStack_108 = pdb_140bbbcb0(&lStack_58);
  uVar8 = _UNK_14329c338;
  uVar7 = _DAT_14329c330;
  puStack_100 = (undefined *)_DAT_14329c330;
  uStack_f8 = _UNK_14329c338;
  puStack_100 = (undefined *)pdb_1400affa0(&lStack_108);
  lStack_108 = lVar9;
  lVar5 = pdb_1400b0130(&lStack_108);
  lVar2 = *(longlong *)(param_1 + 0x10);
  lStack_108 = lVar5;
  if (*(longlong *)(lVar2 + 0x1c8) != 0) {
    uVar6 = pdb_1400af0a0(lVar2 + 0x1d0,&lStack_108);
    bVar14 = (byte)(uVar6 >> 0x39);
    auVar15 = ZEXT216(CONCAT11(bVar14,bVar14));
    auVar15 = pshuflw(auVar15,auVar15,0);
    lVar11 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(lVar2 + 0x1b8);
      auVar1 = *(undefined1 (*) [16])(*(longlong *)(lVar2 + 0x1b0) + uVar6);
      auVar17[0] = -(auVar1[0] == auVar15[0]);
      auVar17[1] = -(auVar1[1] == auVar15[1]);
      auVar17[2] = -(auVar1[2] == auVar15[2]);
      auVar17[3] = -(auVar1[3] == auVar15[3]);
      auVar17[4] = -(auVar1[4] == auVar15[4]);
      auVar17[5] = -(auVar1[5] == auVar15[5]);
      auVar17[6] = -(auVar1[6] == auVar15[6]);
      auVar17[7] = -(auVar1[7] == auVar15[7]);
      auVar17[8] = -(auVar1[8] == auVar15[0]);
      auVar17[9] = -(auVar1[9] == auVar15[1]);
      auVar17[10] = -(auVar1[10] == auVar15[2]);
      auVar17[0xb] = -(auVar1[0xb] == auVar15[3]);
      auVar17[0xc] = -(auVar1[0xc] == auVar15[4]);
      auVar17[0xd] = -(auVar1[0xd] == auVar15[5]);
      auVar17[0xe] = -(auVar1[0xe] == auVar15[6]);
      auVar17[0xf] = -(auVar1[0xf] == auVar15[7]);
      uVar13 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe | (ushort)(auVar17[0xf] >> 7) << 0xf;
      uVar12 = (uint)uVar13;
      while (uVar13 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar12; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        if (lVar5 == *(longlong *)
                      (*(longlong *)(lVar2 + 0x1b0) + -0xd8 +
                      (uVar3 + uVar6 & *(ulonglong *)(lVar2 + 0x1b8)) * -0xd8)) {
          uStack_60 = 0;
          uVar10 = 0x13;
          lStack_70 = lVar2;
          lStack_68 = lVar5;
          uVar7 = pdb_140dc6290(&UNK_14329f80e);
          uStack_80 = uVar7;
          uStack_78 = uVar10;
          lStack_108 = pdb_140bbbcb0(&uStack_80);
          puStack_100 = (undefined *)_DAT_14329c260;
          uStack_f8 = _UNK_14329c268;
          puStack_100 = (undefined *)pdb_1400affa0(&lStack_108);
          lStack_108 = lVar5;
          uVar8 = pdb_1400b0130(&lStack_108);
          pdb_14072caa0(&lStack_108,&lStack_70,uVar8);
          goto LAB_14118e10a;
        }
        uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
      }
      auVar16[0] = -(auVar1[0] == -1);
      auVar16[1] = -(auVar1[1] == -1);
      auVar16[2] = -(auVar1[2] == -1);
      auVar16[3] = -(auVar1[3] == -1);
      auVar16[4] = -(auVar1[4] == -1);
      auVar16[5] = -(auVar1[5] == -1);
      auVar16[6] = -(auVar1[6] == -1);
      auVar16[7] = -(auVar1[7] == -1);
      auVar16[8] = -(auVar1[8] == -1);
      auVar16[9] = -(auVar1[9] == -1);
      auVar16[10] = -(auVar1[10] == -1);
      auVar16[0xb] = -(auVar1[0xb] == -1);
      auVar16[0xc] = -(auVar1[0xc] == -1);
      auVar16[0xd] = -(auVar1[0xd] == -1);
      auVar16[0xe] = -(auVar1[0xe] == -1);
      auVar16[0xf] = -(auVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar16 >> 7,0) & 1) != 0 || (SUB161(auVar16 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar16 >> 0x17,0) & 1) != 0) || (SUB161(auVar16 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar16 >> 0x27,0) & 1) != 0) || (SUB161(auVar16 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar16 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar16 >> 0x3f,0) & 1) != 0) || (SUB161(auVar16 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar16 >> 0x4f,0) & 1) != 0) || (SUB161(auVar16 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar16 >> 0x5f,0) & 1) != 0) || (SUB161(auVar16 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar16 >> 0x6f,0) & 1) != 0) || (SUB161(auVar16 >> 0x77,0) & 1) != 0) ||
          auVar16[0xf] < '\0') break;
      uVar6 = uVar6 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
  if (*_DAT_143ca8e90 != 0) {
    pcStack_a0 = pdb_1402ed420;
    pcStack_90 = pdb_1402ed420;
    lStack_108 = 0;
    puStack_100 = &UNK_14329e688;
    uStack_f8 = 0x14;
    uStack_f0 = 0;
    puStack_e8 = &UNK_14329e638;
    uStack_e0 = 0x28;
    uStack_d8 = 1;
    puStack_d0 = &UNK_14329e688;
    uStack_c8 = 0x14;
    uStack_c0 = 0xf100000001;
    puStack_b8 = &UNK_14329f02f;
    plStack_b0 = &lStack_a8;
    lStack_a8 = param_1;
    plStack_98 = &lStack_58;
    pdb_140f332f0(&uStack_109,&lStack_108);
    lVar9 = *(longlong *)(param_1 + 0x18);
  }
  lStack_a8 = param_2;
  pcStack_a0 = (code *)param_3;
  lStack_108 = pdb_140bbbcb0(&lStack_a8);
  puStack_100 = (undefined *)uVar7;
  uStack_f8 = uVar8;
  puStack_100 = (undefined *)pdb_1400affa0(&lStack_108);
  lStack_108 = lVar9;
  uVar7 = pdb_1400b0130(&lStack_108);
  pdb_14072caa0(&lStack_70,param_1 + 0x10,uVar7);
  uVar10 = 0x13;
  uVar7 = pdb_140dc6290(&UNK_14329f80e);
  uStack_80 = uVar7;
  uStack_78 = uVar10;
  lStack_108 = pdb_140bbbcb0(&uStack_80);
  puStack_100 = (undefined *)_DAT_14329c260;
  uStack_f8 = _UNK_14329c268;
  puStack_100 = (undefined *)pdb_1400affa0(&lStack_108);
  lStack_108 = lStack_68;
  uVar8 = pdb_1400b0130(&lStack_108);
  pdb_14072caa0(&lStack_108,&lStack_70,uVar8);
LAB_14118e10a:
  uVar8 = pdb_14116ee90(&lStack_108,0);
  pdb_14119b6b0(uVar8,uVar7,uVar10);
  plStack_98 = (longlong *)uStack_f8;
  lStack_a8 = lStack_108;
  pcStack_a0 = (code *)puStack_100;
  lVar9 = pdb_14116e180(&lStack_a8);
  *(undefined4 *)(lVar9 + 600) = 0x7b5a51a0;
  return;
}

