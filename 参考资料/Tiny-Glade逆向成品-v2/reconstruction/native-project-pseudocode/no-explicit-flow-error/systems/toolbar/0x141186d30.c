// VA 0x141186d30, PDB extent 1218 bytes
// toolbar::mei::config::TemplateView::with_slot<toolbar::menu::report_bug::ui::closure_env$3,ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::config::TemplateView::with_slot<toolbar::menu::report_bug::ui::closure_env$3,ref$<str$>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 1218 */

void pdb_141186d30(ulonglong param_1,ulonglong param_2,byte *param_3,ulonglong *param_4)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ushort uVar11;
  ulonglong *puVar12;
  byte bVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  ulonglong uStack_148;
  byte *pbStack_140;
  ulonglong *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  longlong lStack_118;
  ulonglong *puStack_110;
  undefined8 uStack_108;
  byte *pbStack_100;
  ulonglong *puStack_f8;
  ulonglong uStack_f0;
  code *pcStack_e8;
  ulonglong *puStack_e0;
  code *pcStack_d8;
  ulonglong *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  ulonglong *puStack_78;
  undefined1 uStack_69;
  byte *pbStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  puVar12 = *(ulonglong **)(param_1 + 0x18);
  uStack_148 = param_2;
  pbStack_140 = param_3;
  puStack_d0 = (ulonglong *)pdb_140bbbcb0(&uStack_148);
  uVar4 = _UNK_14329c338;
  uVar7 = _DAT_14329c330;
  pcStack_c8 = (code *)_DAT_14329c330;
  puStack_c0 = (undefined *)_UNK_14329c338;
  pcStack_c8 = (code *)pdb_1400affa0(&puStack_d0);
  puStack_d0 = puVar12;
  puVar5 = (ulonglong *)pdb_1400b0130(&puStack_d0);
  lVar8 = *(longlong *)(param_1 + 0x10);
  puStack_d0 = puVar5;
  if (*(longlong *)(lVar8 + 0x1c8) != 0) {
    uVar6 = pdb_1400af0a0(lVar8 + 0x1d0,&puStack_d0);
    bVar13 = (byte)(uVar6 >> 0x39);
    auVar14 = ZEXT216(CONCAT11(bVar13,bVar13));
    auVar14 = pshuflw(auVar14,auVar14,0);
    lVar9 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(lVar8 + 0x1b8);
      auVar1 = *(undefined1 (*) [16])(*(longlong *)(lVar8 + 0x1b0) + uVar6);
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
        uVar2 = 0;
        for (uVar3 = uVar10; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        if (puVar5 == *(ulonglong **)
                       (*(longlong *)(lVar8 + 0x1b0) + -0xd8 +
                       (uVar2 + uVar6 & *(ulonglong *)(lVar8 + 0x1b8)) * -0xd8)) {
          uStack_108 = 0;
          pcStack_c8 = pdb_140f72a40;
          puStack_c0 = &UNK_14329f180;
          pcStack_b8 = pdb_140f72a40;
          lStack_118 = lVar8;
          puStack_110 = puVar5;
          puStack_d0 = param_4;
          pdb_140f60760(&uStack_f0,&UNK_14329f188,&puStack_d0);
          puVar12 = puStack_e0;
          pbStack_68 = (byte *)pcStack_e8;
          pbStack_100 = (byte *)pcStack_e8;
          puStack_f8 = puStack_e0;
          puStack_d0 = (ulonglong *)pdb_140bbbcb0(&pbStack_100);
          pcStack_c8 = (code *)_DAT_14329c260;
          puStack_c0 = (undefined *)_UNK_14329c268;
          pcStack_c8 = (code *)pdb_1400affa0(&puStack_d0);
          puStack_d0 = puVar5;
          uVar7 = pdb_1400b0130(&puStack_d0);
          pdb_14072caa0(&puStack_d0,&lStack_118,uVar7);
          uVar7 = pdb_14116ee90(&puStack_d0,0);
          pdb_14119b6b0(uVar7,pbStack_68,puVar12);
          goto LAB_1411870d4;
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
      uVar6 = uVar6 + lVar9 + 0x10;
      lVar9 = lVar9 + 0x10;
    }
  }
  if (*_DAT_143ca8e90 != 0) {
    pcStack_e8 = pdb_1402ed420;
    puStack_e0 = &uStack_148;
    pcStack_d8 = pdb_1402ed420;
    puStack_d0 = (ulonglong *)0x0;
    pcStack_c8 = (code *)&UNK_14329e688;
    puStack_c0 = (undefined *)0x14;
    pcStack_b8 = (code *)0x0;
    puStack_b0 = &UNK_14329e638;
    uStack_a8 = 0x28;
    uStack_a0 = 1;
    puStack_98 = &UNK_14329e688;
    uStack_90 = 0x14;
    uStack_88 = 0xf100000001;
    puStack_80 = &UNK_14329f02f;
    puStack_78 = &uStack_f0;
    uStack_f0 = param_1;
    pdb_140f332f0(&uStack_69,&puStack_d0);
    puVar12 = *(ulonglong **)(param_1 + 0x18);
  }
  uStack_f0 = param_2;
  pcStack_e8 = (code *)param_3;
  puStack_d0 = (ulonglong *)pdb_140bbbcb0(&uStack_f0);
  pcStack_c8 = (code *)uVar7;
  puStack_c0 = (undefined *)uVar4;
  pcStack_c8 = (code *)pdb_1400affa0(&puStack_d0);
  puStack_d0 = puVar12;
  uVar7 = pdb_1400b0130(&puStack_d0);
  pdb_14072caa0(&lStack_118,param_1 + 0x10,uVar7);
  pcStack_c8 = pdb_140f72a40;
  puStack_c0 = &UNK_14329f180;
  pcStack_b8 = pdb_140f72a40;
  puStack_d0 = param_4;
  pdb_140f60760(&uStack_f0,&UNK_14329f188,&puStack_d0);
  puVar12 = puStack_e0;
  pbStack_68 = (byte *)pcStack_e8;
  pbStack_100 = (byte *)pcStack_e8;
  puStack_f8 = puStack_e0;
  puStack_d0 = (ulonglong *)pdb_140bbbcb0(&pbStack_100);
  pcStack_c8 = (code *)_DAT_14329c260;
  puStack_c0 = (undefined *)_UNK_14329c268;
  pcStack_c8 = (code *)pdb_1400affa0(&puStack_d0);
  puStack_d0 = puStack_110;
  uVar7 = pdb_1400b0130(&puStack_d0);
  pdb_14072caa0(&puStack_d0,&lStack_118,uVar7);
  uVar7 = pdb_14116ee90(&puStack_d0,0);
  pdb_14119b6b0(uVar7,pbStack_68,puVar12);
LAB_1411870d4:
  uStack_128 = puStack_c0;
  puStack_138 = puStack_d0;
  uStack_130 = pcStack_c8;
  if (uStack_f0 != 0) {
    pub_1406abac0(pbStack_68,uStack_f0,1);
  }
  uVar6 = *param_4;
  lVar8 = pdb_14116e180(&puStack_138);
  *(uint *)(lVar8 + 600) = -(uint)(uVar6 < 0x3e9) | 0xba3259ff;
  return;
}

