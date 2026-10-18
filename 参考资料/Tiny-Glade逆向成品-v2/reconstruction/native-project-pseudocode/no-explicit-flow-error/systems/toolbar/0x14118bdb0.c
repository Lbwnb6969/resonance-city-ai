// VA 0x14118bdb0, PDB extent 728 bytes
// toolbar::mei::config::TemplateView::with_slot<toolbar::menu::save_error::ui::closure_env$2,ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::config::TemplateView::with_slot<toolbar::menu::save_error::ui::closure_env$2,ref$<str$>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 728 */

void pdb_14118bdb0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong param_5)

{
  char *pcVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined8 uVar13;
  ushort uVar14;
  byte bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
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
  
  lVar9 = *(longlong *)(param_1 + 0x18);
  lStack_68 = param_2;
  uStack_60 = param_3;
  lStack_e8 = pdb_140bbbcb0(&lStack_68);
  uVar8 = _UNK_14329c338;
  uVar7 = _DAT_14329c330;
  puStack_e0 = (undefined *)_DAT_14329c330;
  uStack_d8 = _UNK_14329c338;
  puStack_e0 = (undefined *)pdb_1400affa0(&lStack_e8);
  lStack_e8 = lVar9;
  lVar5 = pdb_1400b0130(&lStack_e8);
  lVar2 = *(longlong *)(param_1 + 0x10);
  lStack_e8 = lVar5;
  if (*(longlong *)(lVar2 + 0x1c8) != 0) {
    uVar6 = pdb_1400af0a0(lVar2 + 0x1d0,&lStack_e8);
    bVar15 = (byte)(uVar6 >> 0x39);
    auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
    auVar16 = pshuflw(auVar16,auVar16,0);
    lVar10 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(lVar2 + 0x1b8);
      pcVar1 = (char *)(*(longlong *)(lVar2 + 0x1b0) + uVar6);
      auVar18[0] = -(*pcVar1 == auVar16[0]);
      auVar18[1] = -(pcVar1[1] == auVar16[1]);
      auVar18[2] = -(pcVar1[2] == auVar16[2]);
      auVar18[3] = -(pcVar1[3] == auVar16[3]);
      auVar18[4] = -(pcVar1[4] == auVar16[4]);
      auVar18[5] = -(pcVar1[5] == auVar16[5]);
      auVar18[6] = -(pcVar1[6] == auVar16[6]);
      auVar18[7] = -(pcVar1[7] == auVar16[7]);
      auVar18[8] = -(pcVar1[8] == auVar16[0]);
      auVar18[9] = -(pcVar1[9] == auVar16[1]);
      auVar18[10] = -(pcVar1[10] == auVar16[2]);
      auVar18[0xb] = -(pcVar1[0xb] == auVar16[3]);
      auVar18[0xc] = -(pcVar1[0xc] == auVar16[4]);
      auVar18[0xd] = -(pcVar1[0xd] == auVar16[5]);
      auVar18[0xe] = -(pcVar1[0xe] == auVar16[6]);
      auVar18[0xf] = -(pcVar1[0xf] == auVar16[7]);
      uVar14 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe | (ushort)(auVar18[0xf] >> 7) << 0xf;
      uVar12 = (uint)uVar14;
      while (uVar14 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar12; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        if (lVar5 == *(longlong *)
                      (*(longlong *)(lVar2 + 0x1b0) + -0xd8 +
                      (uVar3 + uVar6 & *(ulonglong *)(lVar2 + 0x1b8)) * -0xd8)) {
          uStack_d8 = 0;
          uVar7 = *(undefined8 *)(param_4 + 8);
          uVar8 = *(undefined8 *)(param_4 + 0x10);
          uVar11 = *(undefined8 *)(param_5 + 8);
          uVar13 = *(undefined8 *)(param_5 + 0x10);
          lStack_e8 = lVar2;
          puStack_e0 = (undefined *)lVar5;
          goto LAB_14118c067;
        }
        uVar14 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar14);
      }
      auVar17[0] = -(*pcVar1 == -1);
      auVar17[1] = -(pcVar1[1] == -1);
      auVar17[2] = -(pcVar1[2] == -1);
      auVar17[3] = -(pcVar1[3] == -1);
      auVar17[4] = -(pcVar1[4] == -1);
      auVar17[5] = -(pcVar1[5] == -1);
      auVar17[6] = -(pcVar1[6] == -1);
      auVar17[7] = -(pcVar1[7] == -1);
      auVar17[8] = -(pcVar1[8] == -1);
      auVar17[9] = -(pcVar1[9] == -1);
      auVar17[10] = -(pcVar1[10] == -1);
      auVar17[0xb] = -(pcVar1[0xb] == -1);
      auVar17[0xc] = -(pcVar1[0xc] == -1);
      auVar17[0xd] = -(pcVar1[0xd] == -1);
      auVar17[0xe] = -(pcVar1[0xe] == -1);
      auVar17[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 || (SUB161(auVar17 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar17 >> 0x17,0) & 1) != 0) || (SUB161(auVar17 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar17 >> 0x27,0) & 1) != 0) || (SUB161(auVar17 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar17 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar17 >> 0x3f,0) & 1) != 0) || (SUB161(auVar17 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar17 >> 0x4f,0) & 1) != 0) || (SUB161(auVar17 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar17 >> 0x5f,0) & 1) != 0) || (SUB161(auVar17 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar17 >> 0x6f,0) & 1) != 0) || (SUB161(auVar17 >> 0x77,0) & 1) != 0) ||
          auVar17[0xf] < '\0') break;
      uVar6 = uVar6 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
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
    lVar9 = *(longlong *)(param_1 + 0x18);
  }
  lStack_88 = param_2;
  pcStack_80 = (code *)param_3;
  lStack_e8 = pdb_140bbbcb0(&lStack_88);
  puStack_e0 = (undefined *)uVar7;
  uStack_d8 = uVar8;
  puStack_e0 = (undefined *)pdb_1400affa0(&lStack_e8);
  lStack_e8 = lVar9;
  uVar7 = pdb_1400b0130(&lStack_e8);
  pdb_14072caa0(&lStack_e8,param_1 + 0x10,uVar7);
  uVar7 = *(undefined8 *)(param_4 + 8);
  uVar8 = *(undefined8 *)(param_4 + 0x10);
  uVar11 = *(undefined8 *)(param_5 + 8);
  uVar13 = *(undefined8 *)(param_5 + 0x10);
LAB_14118c067:
  pdb_141193dc0(uVar7,uVar8,uVar11,uVar13,&lStack_e8);
  return;
}

