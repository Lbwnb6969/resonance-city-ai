// VA 0x1411925a0, PDB extent 1121 bytes
// toolbar::mei::config::TemplateView::with_slot<toolbar::menu::daily_welcome::ui::closure_env$0,ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::config::TemplateView::with_slot<toolbar::menu::daily_welcome::ui::closure_env$0,ref$<str$>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 1121 */

void pdb_1411925a0(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined *puVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined *puVar13;
  longlong lVar14;
  uint uVar15;
  ushort uVar16;
  bool bVar17;
  byte bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
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
  undefined *puStack_90;
  longlong *plStack_88;
  longlong lStack_80;
  longlong lStack_78;
  undefined8 uStack_70;
  longlong lStack_68;
  undefined8 uStack_60;
  
  lVar11 = *(longlong *)(param_1 + 0x18);
  lStack_68 = param_2;
  uStack_60 = param_3;
  lStack_f8 = pdb_140bbbcb0(&lStack_68);
  uVar5 = _UNK_14329c338;
  uVar8 = _DAT_14329c330;
  puStack_f0 = (undefined *)_DAT_14329c330;
  uStack_e8 = _UNK_14329c338;
  puStack_f0 = (undefined *)pdb_1400affa0(&lStack_f8);
  lStack_f8 = lVar11;
  lVar6 = pdb_1400b0130(&lStack_f8);
  lVar2 = *(longlong *)(param_1 + 0x10);
  lStack_f8 = lVar6;
  if (*(longlong *)(lVar2 + 0x1c8) != 0) {
    uVar7 = pdb_1400af0a0(lVar2 + 0x1d0,&lStack_f8);
    bVar18 = (byte)(uVar7 >> 0x39);
    auVar19 = ZEXT216(CONCAT11(bVar18,bVar18));
    auVar19 = pshuflw(auVar19,auVar19,0);
    lVar14 = 0;
    while( true ) {
      uVar7 = uVar7 & *(ulonglong *)(lVar2 + 0x1b8);
      auVar1 = *(undefined1 (*) [16])(*(longlong *)(lVar2 + 0x1b0) + uVar7);
      auVar21[0] = -(auVar1[0] == auVar19[0]);
      auVar21[1] = -(auVar1[1] == auVar19[1]);
      auVar21[2] = -(auVar1[2] == auVar19[2]);
      auVar21[3] = -(auVar1[3] == auVar19[3]);
      auVar21[4] = -(auVar1[4] == auVar19[4]);
      auVar21[5] = -(auVar1[5] == auVar19[5]);
      auVar21[6] = -(auVar1[6] == auVar19[6]);
      auVar21[7] = -(auVar1[7] == auVar19[7]);
      auVar21[8] = -(auVar1[8] == auVar19[0]);
      auVar21[9] = -(auVar1[9] == auVar19[1]);
      auVar21[10] = -(auVar1[10] == auVar19[2]);
      auVar21[0xb] = -(auVar1[0xb] == auVar19[3]);
      auVar21[0xc] = -(auVar1[0xc] == auVar19[4]);
      auVar21[0xd] = -(auVar1[0xd] == auVar19[5]);
      auVar21[0xe] = -(auVar1[0xe] == auVar19[6]);
      auVar21[0xf] = -(auVar1[0xf] == auVar19[7]);
      uVar16 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
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
      uVar15 = (uint)uVar16;
      while (uVar16 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar15; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        if (lVar6 == *(longlong *)
                      (*(longlong *)(lVar2 + 0x1b0) + -0xd8 +
                      (uVar3 + uVar7 & *(ulonglong *)(lVar2 + 0x1b8)) * -0xd8)) {
          uStack_70 = 0;
          bVar17 = SBORROW8(0,*(longlong *)*param_4);
          uVar7 = (ulonglong)bVar17;
          plVar12 = (longlong *)*param_4 + uVar7;
          lStack_80 = lVar2;
          lStack_78 = lVar6;
          if (bVar17) {
            puVar10 = (undefined *)0x0;
            plVar9 = plVar12;
          }
          else {
            plVar9 = (longlong *)pdb_140dc52d0();
            puVar10 = (undefined *)pdb_140a82610(plVar12,plVar9,uVar7);
          }
          plVar12 = (longlong *)0x3;
          if (puVar10 != (undefined *)0x0) {
            plVar12 = plVar9;
          }
          puVar13 = &UNK_14329f4d0;
          if (puVar10 != (undefined *)0x0) {
            puVar13 = puVar10;
          }
          puStack_90 = puVar13;
          plStack_88 = plVar12;
          lStack_f8 = pdb_140bbbcb0(&puStack_90);
          puStack_f0 = (undefined *)_DAT_14329c260;
          uStack_e8 = _UNK_14329c268;
          puStack_f0 = (undefined *)pdb_1400affa0(&lStack_f8);
          lStack_f8 = lVar6;
          goto LAB_141192926;
        }
        uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
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
                      (SUB161(auVar20 >> 0x17,0) & 1) != 0) || (SUB161(auVar20 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar20 >> 0x27,0) & 1) != 0) || (SUB161(auVar20 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar20 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar20 >> 0x3f,0) & 1) != 0) || (SUB161(auVar20 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar20 >> 0x4f,0) & 1) != 0) || (SUB161(auVar20 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar20 >> 0x5f,0) & 1) != 0) || (SUB161(auVar20 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar20 >> 0x6f,0) & 1) != 0) || (SUB161(auVar20 >> 0x77,0) & 1) != 0) ||
          auVar20[0xf] < '\0') break;
      uVar7 = uVar7 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
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
    lVar11 = *(longlong *)(param_1 + 0x18);
  }
  lStack_118 = param_2;
  pcStack_110 = (code *)param_3;
  lStack_f8 = pdb_140bbbcb0(&lStack_118);
  puStack_f0 = (undefined *)uVar8;
  uStack_e8 = uVar5;
  puStack_f0 = (undefined *)pdb_1400affa0(&lStack_f8);
  lStack_f8 = lVar11;
  uVar8 = pdb_1400b0130(&lStack_f8);
  pdb_14072caa0(&lStack_80,param_1 + 0x10,uVar8);
  bVar17 = SBORROW8(0,*(longlong *)*param_4);
  uVar7 = (ulonglong)bVar17;
  plVar12 = (longlong *)*param_4 + uVar7;
  if (bVar17) {
    puVar10 = (undefined *)0x0;
    plVar9 = plVar12;
  }
  else {
    plVar9 = (longlong *)pdb_140dc52d0();
    puVar10 = (undefined *)pdb_140a82610(plVar12,plVar9,uVar7);
  }
  plVar12 = (longlong *)0x3;
  if (puVar10 != (undefined *)0x0) {
    plVar12 = plVar9;
  }
  puVar13 = &UNK_14329f4d0;
  if (puVar10 != (undefined *)0x0) {
    puVar13 = puVar10;
  }
  puStack_90 = puVar13;
  plStack_88 = plVar12;
  lStack_f8 = pdb_140bbbcb0(&puStack_90);
  puStack_f0 = (undefined *)_DAT_14329c260;
  uStack_e8 = _UNK_14329c268;
  puStack_f0 = (undefined *)pdb_1400affa0(&lStack_f8);
  lStack_f8 = lStack_78;
LAB_141192926:
  uVar8 = pdb_1400b0130(&lStack_f8);
  pdb_14072caa0(&lStack_f8,&lStack_80,uVar8);
  uVar8 = pdb_14116ee90(&lStack_f8,0);
  pdb_14119b6b0(uVar8,puVar13,plVar12);
  plStack_108 = (longlong *)uStack_e8;
  lStack_118 = lStack_f8;
  pcStack_110 = (code *)puStack_f0;
  uVar8 = pdb_14116e180(&lStack_118);
  pdb_14119b2b0(uVar8,_DAT_142e37844);
  uStack_e8 = plStack_108;
  lStack_f8 = lStack_118;
  puStack_f0 = pcStack_110;
  uVar8 = pdb_14116e180(&lStack_f8);
  pdb_140cb5c70(uVar8,700);
  plStack_108 = (longlong *)uStack_e8;
  lStack_118 = lStack_f8;
  pcStack_110 = (code *)puStack_f0;
  lVar11 = pdb_14116e180(&lStack_118);
  *(undefined4 *)(lVar11 + 600) = 0x7b5a51ff;
  return;
}

