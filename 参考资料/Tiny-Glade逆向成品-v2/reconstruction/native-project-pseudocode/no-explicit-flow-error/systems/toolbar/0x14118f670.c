// VA 0x14118f670, PDB extent 1151 bytes
// toolbar::mei::config::TemplateView::with_slot<toolbar::menu::load::display_save_file_load_error::closure_env$0,ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::config::TemplateView::with_slot<toolbar::menu::load::display_save_file_load_error::closure_env$0,ref$<str$>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 1151 */

void pdb_14118f670(ulonglong param_1,ulonglong param_2,byte *param_3)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  byte **ppbVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  ushort uVar12;
  byte **ppbVar13;
  byte bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  ulonglong uStack_128;
  byte *pbStack_120;
  longlong lStack_118;
  byte **ppbStack_110;
  undefined8 uStack_108;
  byte **ppbStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  ulonglong *puStack_a8;
  ulonglong uStack_a0;
  code *pcStack_98;
  ulonglong *puStack_90;
  code *pcStack_88;
  byte *pbStack_80;
  ulonglong *puStack_78;
  undefined1 uStack_69;
  byte *pbStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  ppbVar13 = *(byte ***)(param_1 + 0x18);
  uStack_128 = param_2;
  pbStack_120 = param_3;
  ppbStack_100 = (byte **)pdb_140bbbcb0(&uStack_128);
  uVar5 = _UNK_14329c338;
  uVar9 = _DAT_14329c330;
  pcStack_f8 = (code *)_DAT_14329c330;
  uStack_f0 = _UNK_14329c338;
  pcStack_f8 = (code *)pdb_1400affa0(&ppbStack_100);
  ppbStack_100 = ppbVar13;
  ppbVar7 = (byte **)pdb_1400b0130(&ppbStack_100);
  lVar2 = *(longlong *)(param_1 + 0x10);
  ppbStack_100 = ppbVar7;
  if (*(longlong *)(lVar2 + 0x1c8) != 0) {
    uVar8 = pdb_1400af0a0(lVar2 + 0x1d0,&ppbStack_100);
    bVar14 = (byte)(uVar8 >> 0x39);
    auVar15 = ZEXT216(CONCAT11(bVar14,bVar14));
    auVar15 = pshuflw(auVar15,auVar15,0);
    lVar10 = 0;
    while( true ) {
      uVar8 = uVar8 & *(ulonglong *)(lVar2 + 0x1b8);
      auVar1 = *(undefined1 (*) [16])(*(longlong *)(lVar2 + 0x1b0) + uVar8);
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
        if (ppbVar7 ==
            *(byte ***)
             (*(longlong *)(lVar2 + 0x1b0) + -0xd8 +
             (uVar3 + uVar8 & *(ulonglong *)(lVar2 + 0x1b8)) * -0xd8)) {
          uStack_108 = 0;
          uVar9 = 0x14;
          lStack_118 = lVar2;
          ppbStack_110 = ppbVar7;
          pbStack_80 = (byte *)pdb_140dc6290(&UNK_14329f5f0);
          ppbStack_100 = &pbStack_80;
          pcStack_f8 = pdb_1402ed400;
          puStack_78 = (ulonglong *)uVar9;
          pdb_140f60760(&uStack_a0,&UNK_14329f604,&ppbStack_100);
          puVar6 = puStack_90;
          pbStack_68 = (byte *)pcStack_98;
          pbStack_80 = (byte *)pcStack_98;
          puStack_78 = puStack_90;
          ppbStack_100 = (byte **)pdb_140bbbcb0(&pbStack_80);
          pcStack_f8 = (code *)_DAT_14329c260;
          uStack_f0 = _UNK_14329c268;
          pcStack_f8 = (code *)pdb_1400affa0(&ppbStack_100);
          ppbStack_100 = ppbVar7;
          uVar9 = pdb_1400b0130(&ppbStack_100);
          pdb_14072caa0(&ppbStack_100,&lStack_118,uVar9);
          uVar9 = pdb_14116ee90(&ppbStack_100,0);
          pdb_14119b6b0(uVar9,pbStack_68,puVar6);
          goto LAB_14118fa20;
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
      uVar8 = uVar8 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
  if (*_DAT_143ca8e90 != 0) {
    pcStack_98 = pdb_1402ed420;
    pcStack_88 = pdb_1402ed420;
    ppbStack_100 = (byte **)0x0;
    pcStack_f8 = (code *)&UNK_14329e688;
    uStack_f0 = 0x14;
    uStack_e8 = 0;
    puStack_e0 = &UNK_14329e638;
    uStack_d8 = 0x28;
    uStack_d0 = 1;
    puStack_c8 = &UNK_14329e688;
    uStack_c0 = 0x14;
    uStack_b8 = 0xf100000001;
    puStack_b0 = &UNK_14329f02f;
    puStack_a8 = &uStack_a0;
    uStack_a0 = param_1;
    puStack_90 = &uStack_128;
    pdb_140f332f0(&uStack_69,&ppbStack_100);
    ppbVar13 = *(byte ***)(param_1 + 0x18);
  }
  uStack_a0 = param_2;
  pcStack_98 = (code *)param_3;
  ppbStack_100 = (byte **)pdb_140bbbcb0(&uStack_a0);
  pcStack_f8 = (code *)uVar9;
  uStack_f0 = uVar5;
  pcStack_f8 = (code *)pdb_1400affa0(&ppbStack_100);
  ppbStack_100 = ppbVar13;
  uVar9 = pdb_1400b0130(&ppbStack_100);
  pdb_14072caa0(&lStack_118,param_1 + 0x10,uVar9);
  uVar9 = 0x14;
  pbStack_80 = (byte *)pdb_140dc6290(&UNK_14329f5f0);
  ppbStack_100 = &pbStack_80;
  pcStack_f8 = pdb_1402ed400;
  puStack_78 = (ulonglong *)uVar9;
  pdb_140f60760(&uStack_a0,&UNK_14329f604,&ppbStack_100);
  puVar6 = puStack_90;
  pbStack_68 = (byte *)pcStack_98;
  pbStack_80 = (byte *)pcStack_98;
  puStack_78 = puStack_90;
  ppbStack_100 = (byte **)pdb_140bbbcb0(&pbStack_80);
  pcStack_f8 = (code *)_DAT_14329c260;
  uStack_f0 = _UNK_14329c268;
  pcStack_f8 = (code *)pdb_1400affa0(&ppbStack_100);
  ppbStack_100 = ppbStack_110;
  uVar9 = pdb_1400b0130(&ppbStack_100);
  pdb_14072caa0(&ppbStack_100,&lStack_118,uVar9);
  uVar9 = pdb_14116ee90(&ppbStack_100,0);
  pdb_14119b6b0(uVar9,pbStack_68,puVar6);
LAB_14118fa20:
  if (uStack_a0 != 0) {
    pub_1406abac0(pbStack_68,uStack_a0,1);
  }
  return;
}

