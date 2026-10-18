// VA 0x141188ee0, PDB extent 1298 bytes
// toolbar::mei::config::TemplateView::with_slot<toolbar::menu::report_bug::ui::closure_env$1,ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::config::TemplateView::with_slot<toolbar::menu::report_bug::ui::closure_env$1,ref$<str$>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 1298 */

void pdb_141188ee0(ulonglong param_1,ulonglong param_2,byte *param_3)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  ulonglong uVar7;
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
  ulonglong uStack_150;
  byte *pbStack_148;
  longlong lStack_140;
  longlong lStack_138;
  undefined8 uStack_130;
  byte *pbStack_128;
  ulonglong *puStack_120;
  longlong lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
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
  ulonglong *puStack_a0;
  ulonglong uStack_90;
  code *pcStack_88;
  ulonglong *puStack_80;
  code *pcStack_78;
  undefined1 uStack_69;
  byte *pbStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  lVar13 = *(longlong *)(param_1 + 0x18);
  uStack_150 = param_2;
  pbStack_148 = param_3;
  lStack_f8 = pdb_140bbbcb0(&uStack_150);
  uVar9 = _UNK_14329c338;
  uVar8 = _DAT_14329c330;
  puStack_f0 = (undefined *)_DAT_14329c330;
  uStack_e8 = _UNK_14329c338;
  puStack_f0 = (undefined *)pdb_1400affa0(&lStack_f8);
  lStack_f8 = lVar13;
  lVar6 = pdb_1400b0130(&lStack_f8);
  lVar2 = *(longlong *)(param_1 + 0x10);
  lStack_f8 = lVar6;
  if (*(longlong *)(lVar2 + 0x1c8) != 0) {
    uVar7 = pdb_1400af0a0(lVar2 + 0x1d0,&lStack_f8);
    bVar14 = (byte)(uVar7 >> 0x39);
    auVar15 = ZEXT216(CONCAT11(bVar14,bVar14));
    auVar15 = pshuflw(auVar15,auVar15,0);
    lVar10 = 0;
    while( true ) {
      uVar7 = uVar7 & *(ulonglong *)(lVar2 + 0x1b8);
      auVar1 = *(undefined1 (*) [16])(*(longlong *)(lVar2 + 0x1b0) + uVar7);
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
        if (lVar6 == *(longlong *)
                      (*(longlong *)(lVar2 + 0x1b0) + -0xd8 +
                      (uVar3 + uVar7 & *(ulonglong *)(lVar2 + 0x1b8)) * -0xd8)) {
          uStack_130 = 0;
          uVar9 = 0xf;
          lStack_140 = lVar2;
          lStack_138 = lVar6;
          uVar8 = pdb_140dc6290(&UNK_14329f112,0xf);
          pdb_140f5f4f0(&uStack_90,uVar8,uVar9);
          puVar5 = puStack_80;
          pbStack_68 = (byte *)pcStack_88;
          pbStack_128 = (byte *)pcStack_88;
          puStack_120 = puStack_80;
          lStack_f8 = pdb_140bbbcb0(&pbStack_128);
          puStack_f0 = (undefined *)_DAT_14329c260;
          uStack_e8 = _UNK_14329c268;
          puStack_f0 = (undefined *)pdb_1400affa0(&lStack_f8);
          lStack_f8 = lVar6;
          uVar8 = pdb_1400b0130(&lStack_f8);
          pdb_14072caa0(&lStack_f8,&lStack_140,uVar8);
          uVar8 = pdb_14116ee90(&lStack_f8,0);
          pdb_14119b6b0(uVar8,pbStack_68,puVar5);
          uStack_108 = uStack_e8;
          lStack_118 = lStack_f8;
          uStack_110 = puStack_f0;
          uVar8 = pdb_14116e180(&lStack_118);
          pdb_14119b2b0(uVar8,_DAT_142f95198);
          uStack_e8 = uStack_108;
          lStack_f8 = lStack_118;
          puStack_f0 = (undefined *)uStack_110;
          uVar8 = pdb_14116e180(&lStack_f8);
          pdb_140cb5c70(uVar8,800);
          goto LAB_141189301;
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
      uVar7 = uVar7 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
  if (*_DAT_143ca8e90 != 0) {
    pcStack_88 = pdb_1402ed420;
    pcStack_78 = pdb_1402ed420;
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
    puStack_a0 = &uStack_90;
    uStack_90 = param_1;
    puStack_80 = &uStack_150;
    pdb_140f332f0(&uStack_69,&lStack_f8);
    lVar13 = *(longlong *)(param_1 + 0x18);
  }
  uStack_90 = param_2;
  pcStack_88 = (code *)param_3;
  lStack_f8 = pdb_140bbbcb0(&uStack_90);
  puStack_f0 = (undefined *)uVar8;
  uStack_e8 = uVar9;
  puStack_f0 = (undefined *)pdb_1400affa0(&lStack_f8);
  lStack_f8 = lVar13;
  uVar8 = pdb_1400b0130(&lStack_f8);
  pdb_14072caa0(&lStack_140,param_1 + 0x10,uVar8);
  uVar9 = 0xf;
  uVar8 = pdb_140dc6290(&UNK_14329f112,0xf);
  pdb_140f5f4f0(&uStack_90,uVar8,uVar9);
  puVar5 = puStack_80;
  pbStack_68 = (byte *)pcStack_88;
  pbStack_128 = (byte *)pcStack_88;
  puStack_120 = puStack_80;
  lStack_f8 = pdb_140bbbcb0(&pbStack_128);
  puStack_f0 = (undefined *)_DAT_14329c260;
  uStack_e8 = _UNK_14329c268;
  puStack_f0 = (undefined *)pdb_1400affa0(&lStack_f8);
  lStack_f8 = lStack_138;
  uVar8 = pdb_1400b0130(&lStack_f8);
  pdb_14072caa0(&lStack_f8,&lStack_140,uVar8);
  uVar8 = pdb_14116ee90(&lStack_f8,0);
  pdb_14119b6b0(uVar8,pbStack_68,puVar5);
  uStack_108 = uStack_e8;
  lStack_118 = lStack_f8;
  uStack_110 = puStack_f0;
  uVar8 = pdb_14116e180(&lStack_118);
  pdb_14119b2b0(uVar8,_DAT_142f95198);
  uStack_e8 = uStack_108;
  lStack_f8 = lStack_118;
  puStack_f0 = (undefined *)uStack_110;
  uVar8 = pdb_14116e180(&lStack_f8);
  pdb_140cb5c70(uVar8,800);
LAB_141189301:
  if (uStack_90 != 0) {
    pub_1406abac0(pbStack_68,uStack_90,1);
  }
  return;
}

