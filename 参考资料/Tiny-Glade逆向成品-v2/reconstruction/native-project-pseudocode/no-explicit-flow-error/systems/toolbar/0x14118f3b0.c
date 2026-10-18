// VA 0x14118f3b0, PDB extent 697 bytes
// toolbar::mei::config::TemplateView::with_slot<toolbar::menu::new_session::ui::closure_env$0,ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::config::TemplateView::with_slot<toolbar::menu::new_session::ui::closure_env$0,ref$<str$>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 697 */

void pdb_14118f3b0(longlong param_1,longlong param_2,undefined8 param_3,undefined1 *param_4,
                  undefined8 param_5)

{
  char *pcVar1;
  undefined1 uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  ushort uVar13;
  byte bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 uStack_e9;
  longlong lStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  longlong *plStack_90;
  longlong lStack_88;
  code *pcStack_80;
  undefined8 *puStack_78;
  code *pcStack_70;
  longlong lStack_68;
  undefined8 uStack_60;
  
  lVar10 = *(longlong *)(param_1 + 0x18);
  lStack_68 = param_2;
  uStack_60 = param_3;
  lStack_e8 = pdb_140bbbcb0(&lStack_68);
  uVar6 = _UNK_14329c338;
  uVar9 = _DAT_14329c330;
  puStack_e0 = (undefined *)_DAT_14329c330;
  uStack_d8 = _UNK_14329c338;
  puStack_e0 = (undefined *)pdb_1400affa0(&lStack_e8);
  lStack_e8 = lVar10;
  lVar7 = pdb_1400b0130(&lStack_e8);
  lVar3 = *(longlong *)(param_1 + 0x10);
  lStack_e8 = lVar7;
  if (*(longlong *)(lVar3 + 0x1c8) != 0) {
    uVar8 = pdb_1400af0a0(lVar3 + 0x1d0,&lStack_e8);
    bVar14 = (byte)(uVar8 >> 0x39);
    auVar15 = ZEXT216(CONCAT11(bVar14,bVar14));
    auVar15 = pshuflw(auVar15,auVar15,0);
    lVar11 = 0;
    while( true ) {
      uVar8 = uVar8 & *(ulonglong *)(lVar3 + 0x1b8);
      pcVar1 = (char *)(*(longlong *)(lVar3 + 0x1b0) + uVar8);
      auVar17[0] = -(*pcVar1 == auVar15[0]);
      auVar17[1] = -(pcVar1[1] == auVar15[1]);
      auVar17[2] = -(pcVar1[2] == auVar15[2]);
      auVar17[3] = -(pcVar1[3] == auVar15[3]);
      auVar17[4] = -(pcVar1[4] == auVar15[4]);
      auVar17[5] = -(pcVar1[5] == auVar15[5]);
      auVar17[6] = -(pcVar1[6] == auVar15[6]);
      auVar17[7] = -(pcVar1[7] == auVar15[7]);
      auVar17[8] = -(pcVar1[8] == auVar15[0]);
      auVar17[9] = -(pcVar1[9] == auVar15[1]);
      auVar17[10] = -(pcVar1[10] == auVar15[2]);
      auVar17[0xb] = -(pcVar1[0xb] == auVar15[3]);
      auVar17[0xc] = -(pcVar1[0xc] == auVar15[4]);
      auVar17[0xd] = -(pcVar1[0xd] == auVar15[5]);
      auVar17[0xe] = -(pcVar1[0xe] == auVar15[6]);
      auVar17[0xf] = -(pcVar1[0xf] == auVar15[7]);
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
        uVar4 = 0;
        for (uVar5 = uVar12; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        if (lVar7 == *(longlong *)
                      (*(longlong *)(lVar3 + 0x1b0) + -0xd8 +
                      (uVar4 + uVar8 & *(ulonglong *)(lVar3 + 0x1b8)) * -0xd8)) {
          uStack_d8 = 0;
          uVar2 = *param_4;
          lStack_e8 = lVar3;
          puStack_e0 = (undefined *)lVar7;
          goto LAB_14118f648;
        }
        uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
      }
      auVar16[0] = -(*pcVar1 == -1);
      auVar16[1] = -(pcVar1[1] == -1);
      auVar16[2] = -(pcVar1[2] == -1);
      auVar16[3] = -(pcVar1[3] == -1);
      auVar16[4] = -(pcVar1[4] == -1);
      auVar16[5] = -(pcVar1[5] == -1);
      auVar16[6] = -(pcVar1[6] == -1);
      auVar16[7] = -(pcVar1[7] == -1);
      auVar16[8] = -(pcVar1[8] == -1);
      auVar16[9] = -(pcVar1[9] == -1);
      auVar16[10] = -(pcVar1[10] == -1);
      auVar16[0xb] = -(pcVar1[0xb] == -1);
      auVar16[0xc] = -(pcVar1[0xc] == -1);
      auVar16[0xd] = -(pcVar1[0xd] == -1);
      auVar16[0xe] = -(pcVar1[0xe] == -1);
      auVar16[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar16 >> 7,0) & 1) != 0 || (SUB161(auVar16 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar16 >> 0x17,0) & 1) != 0) || (SUB161(auVar16 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar16 >> 0x27,0) & 1) != 0) || (SUB161(auVar16 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar16 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar16 >> 0x3f,0) & 1) != 0) || (SUB161(auVar16 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar16 >> 0x4f,0) & 1) != 0) || (SUB161(auVar16 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar16 >> 0x5f,0) & 1) != 0) || (SUB161(auVar16 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar16 >> 0x6f,0) & 1) != 0) || (SUB161(auVar16 >> 0x77,0) & 1) != 0) ||
          auVar16[0xf] < '\0') break;
      uVar8 = uVar8 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
  if (*_DAT_143ca8e90 != 0) {
    pcStack_80 = pdb_1402ed420;
    pcStack_70 = pdb_1402ed420;
    lStack_e8 = 0;
    puStack_e0 = &UNK_14329e688;
    uStack_d8 = 0x14;
    uStack_d0 = 0;
    puStack_c8 = &UNK_14329e638;
    uStack_c0 = 0x28;
    uStack_b8 = 1;
    puStack_b0 = &UNK_14329e688;
    uStack_a8 = 0x14;
    uStack_a0 = 0xf100000001;
    puStack_98 = &UNK_14329f02f;
    plStack_90 = &lStack_88;
    lStack_88 = param_1;
    puStack_78 = &lStack_68;
    pdb_140f332f0(&uStack_e9,&lStack_e8);
    lVar10 = *(longlong *)(param_1 + 0x18);
  }
  lStack_88 = param_2;
  pcStack_80 = (code *)param_3;
  lStack_e8 = pdb_140bbbcb0(&lStack_88);
  puStack_e0 = (undefined *)uVar9;
  uStack_d8 = uVar6;
  puStack_e0 = (undefined *)pdb_1400affa0(&lStack_e8);
  lStack_e8 = lVar10;
  uVar9 = pdb_1400b0130(&lStack_e8);
  pdb_14072caa0(&lStack_e8,param_1 + 0x10,uVar9);
  uVar2 = *param_4;
LAB_14118f648:
  pdb_1411943f0(uVar2,param_5,&lStack_e8);
  return;
}

