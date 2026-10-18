// VA 0x141190210, PDB extent 1085 bytes
// toolbar::mei::config::TemplateView::with_slot<toolbar::menu::new_session::ui::closure_env$8,ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::config::TemplateView::with_slot<toolbar::menu::new_session::ui::closure_env$8,ref$<str$>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 1085 */

void pdb_141190210(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  ushort uVar12;
  longlong lVar13;
  byte bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
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
  
  lVar13 = *(longlong *)(param_1 + 0x18);
  lStack_68 = param_2;
  uStack_60 = param_3;
  lStack_f8 = pdb_140bbbcb0(&lStack_68);
  uVar9 = _UNK_14329c338;
  uVar7 = _DAT_14329c330;
  puStack_f0 = (undefined *)_DAT_14329c330;
  uStack_e8 = _UNK_14329c338;
  puStack_f0 = (undefined *)pdb_1400affa0(&lStack_f8);
  lStack_f8 = lVar13;
  lVar5 = pdb_1400b0130(&lStack_f8);
  lVar2 = *(longlong *)(param_1 + 0x10);
  lStack_f8 = lVar5;
  if (*(longlong *)(lVar2 + 0x1c8) != 0) {
    uVar6 = pdb_1400af0a0(lVar2 + 0x1d0,&lStack_f8);
    bVar14 = (byte)(uVar6 >> 0x39);
    auVar15 = ZEXT216(CONCAT11(bVar14,bVar14));
    auVar15 = pshuflw(auVar15,auVar15,0);
    lVar10 = 0;
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
      uVar12 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
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
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar11; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        if (lVar5 == *(longlong *)
                      (*(longlong *)(lVar2 + 0x1b0) + -0xd8 +
                      (uVar3 + uVar6 & *(ulonglong *)(lVar2 + 0x1b8)) * -0xd8)) {
          uStack_70 = 0;
          uVar7 = *(undefined8 *)(param_4 + 8);
          uVar9 = *(undefined8 *)(param_4 + 0x10);
          uStack_90 = uVar7;
          uStack_88 = uVar9;
          lStack_80 = lVar2;
          lStack_78 = lVar5;
          lStack_f8 = pdb_140bbbcb0(&uStack_90);
          puStack_f0 = (undefined *)_DAT_14329c260;
          uStack_e8 = _UNK_14329c268;
          puStack_f0 = (undefined *)pdb_1400affa0(&lStack_f8);
          lStack_f8 = lVar5;
          uVar8 = pdb_1400b0130(&lStack_f8);
          pdb_14072caa0(&lStack_f8,&lStack_80,uVar8);
          goto LAB_141190570;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
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
      uVar6 = uVar6 + lVar10 + 0x10;
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
    lVar13 = *(longlong *)(param_1 + 0x18);
  }
  lStack_118 = param_2;
  pcStack_110 = (code *)param_3;
  lStack_f8 = pdb_140bbbcb0(&lStack_118);
  puStack_f0 = (undefined *)uVar7;
  uStack_e8 = uVar9;
  puStack_f0 = (undefined *)pdb_1400affa0(&lStack_f8);
  lStack_f8 = lVar13;
  uVar7 = pdb_1400b0130(&lStack_f8);
  pdb_14072caa0(&lStack_80,param_1 + 0x10,uVar7);
  uVar7 = *(undefined8 *)(param_4 + 8);
  uVar9 = *(undefined8 *)(param_4 + 0x10);
  uStack_90 = uVar7;
  uStack_88 = uVar9;
  lStack_f8 = pdb_140bbbcb0(&uStack_90);
  puStack_f0 = (undefined *)_DAT_14329c260;
  uStack_e8 = _UNK_14329c268;
  puStack_f0 = (undefined *)pdb_1400affa0(&lStack_f8);
  lStack_f8 = lStack_78;
  uVar8 = pdb_1400b0130(&lStack_f8);
  pdb_14072caa0(&lStack_f8,&lStack_80,uVar8);
LAB_141190570:
  uVar8 = pdb_14116ee90(&lStack_f8,0);
  pdb_14119b6b0(uVar8,uVar7,uVar9);
  plStack_108 = (longlong *)uStack_e8;
  lStack_118 = lStack_f8;
  pcStack_110 = (code *)puStack_f0;
  uVar7 = pdb_14116e180(&lStack_118);
  pdb_140cb68f0(uVar7,2);
  uStack_e8 = plStack_108;
  lStack_f8 = lStack_118;
  puStack_f0 = pcStack_110;
  uVar7 = pdb_14116e180(&lStack_f8);
  pdb_14119b2b0(uVar7,_DAT_142e37994);
  plStack_108 = (longlong *)uStack_e8;
  lStack_118 = lStack_f8;
  pcStack_110 = (code *)puStack_f0;
  uVar7 = pdb_14116e180(&lStack_118);
  pdb_140cb5a70(uVar7,3);
  uStack_e8 = plStack_108;
  lStack_f8 = lStack_118;
  puStack_f0 = pcStack_110;
  uVar7 = pdb_14116e180(&lStack_f8);
  pdb_140cb5df0(uVar7,_DAT_14329e254);
  return;
}

