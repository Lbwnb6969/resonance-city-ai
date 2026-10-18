// VA 0x141186520, PDB extent 677 bytes
// toolbar::mei::config::TemplateView::into_slot<ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::mei::config::TemplateView::into_slot<ref$<str$> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 677 */

longlong * pdb_141186520(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  ushort uVar11;
  byte bVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 uStack_e9;
  longlong lStack_e8;
  code *pcStack_e0;
  undefined8 *puStack_d8;
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar2 = *(longlong *)(param_2 + 0x18);
  uStack_68 = param_3;
  uStack_60 = param_4;
  lStack_c8 = pdb_140bbbcb0(&uStack_68);
  uVar5 = _UNK_14329c338;
  uVar8 = _DAT_14329c330;
  puStack_c0 = (undefined *)_DAT_14329c330;
  uStack_b8 = _UNK_14329c338;
  puStack_c0 = (undefined *)pdb_1400affa0(&lStack_c8);
  lStack_c8 = lVar2;
  lVar6 = pdb_1400b0130(&lStack_c8);
  lVar2 = *(longlong *)(param_2 + 0x10);
  lStack_c8 = lVar6;
  if (*(longlong *)(lVar2 + 0x1c8) != 0) {
    uVar7 = pdb_1400af0a0(lVar2 + 0x1d0,&lStack_c8);
    bVar12 = (byte)(uVar7 >> 0x39);
    auVar13 = ZEXT216(CONCAT11(bVar12,bVar12));
    auVar13 = pshuflw(auVar13,auVar13,0);
    lVar9 = 0;
    while( true ) {
      uVar7 = uVar7 & *(ulonglong *)(lVar2 + 0x1b8);
      pcVar1 = (char *)(*(longlong *)(lVar2 + 0x1b0) + uVar7);
      auVar15[0] = -(*pcVar1 == auVar13[0]);
      auVar15[1] = -(pcVar1[1] == auVar13[1]);
      auVar15[2] = -(pcVar1[2] == auVar13[2]);
      auVar15[3] = -(pcVar1[3] == auVar13[3]);
      auVar15[4] = -(pcVar1[4] == auVar13[4]);
      auVar15[5] = -(pcVar1[5] == auVar13[5]);
      auVar15[6] = -(pcVar1[6] == auVar13[6]);
      auVar15[7] = -(pcVar1[7] == auVar13[7]);
      auVar15[8] = -(pcVar1[8] == auVar13[0]);
      auVar15[9] = -(pcVar1[9] == auVar13[1]);
      auVar15[10] = -(pcVar1[10] == auVar13[2]);
      auVar15[0xb] = -(pcVar1[0xb] == auVar13[3]);
      auVar15[0xc] = -(pcVar1[0xc] == auVar13[4]);
      auVar15[0xd] = -(pcVar1[0xd] == auVar13[5]);
      auVar15[0xe] = -(pcVar1[0xe] == auVar13[6]);
      auVar15[0xf] = -(pcVar1[0xf] == auVar13[7]);
      uVar11 = (ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe | (ushort)(auVar15[0xf] >> 7) << 0xf;
      uVar10 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar10; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        if (lVar6 == *(longlong *)
                      (*(longlong *)(lVar2 + 0x1b0) + -0xd8 +
                      (uVar3 + uVar7 & *(ulonglong *)(lVar2 + 0x1b8)) * -0xd8)) {
          *param_1 = lVar2;
          param_1[1] = lVar6;
          param_1[2] = 0;
          return param_1;
        }
        uVar11 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar11);
      }
      auVar14[0] = -(*pcVar1 == -1);
      auVar14[1] = -(pcVar1[1] == -1);
      auVar14[2] = -(pcVar1[2] == -1);
      auVar14[3] = -(pcVar1[3] == -1);
      auVar14[4] = -(pcVar1[4] == -1);
      auVar14[5] = -(pcVar1[5] == -1);
      auVar14[6] = -(pcVar1[6] == -1);
      auVar14[7] = -(pcVar1[7] == -1);
      auVar14[8] = -(pcVar1[8] == -1);
      auVar14[9] = -(pcVar1[9] == -1);
      auVar14[10] = -(pcVar1[10] == -1);
      auVar14[0xb] = -(pcVar1[0xb] == -1);
      auVar14[0xc] = -(pcVar1[0xc] == -1);
      auVar14[0xd] = -(pcVar1[0xd] == -1);
      auVar14[0xe] = -(pcVar1[0xe] == -1);
      auVar14[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar14 >> 7,0) & 1) != 0 || (SUB161(auVar14 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar14 >> 0x17,0) & 1) != 0) || (SUB161(auVar14 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar14 >> 0x27,0) & 1) != 0) || (SUB161(auVar14 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar14 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar14 >> 0x3f,0) & 1) != 0) || (SUB161(auVar14 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar14 >> 0x4f,0) & 1) != 0) || (SUB161(auVar14 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar14 >> 0x5f,0) & 1) != 0) || (SUB161(auVar14 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar14 >> 0x6f,0) & 1) != 0) || (SUB161(auVar14 >> 0x77,0) & 1) != 0) ||
          auVar14[0xf] < '\0') break;
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
    uStack_80 = 0xd400000001;
    puStack_78 = &UNK_14329f02f;
    plStack_70 = &lStack_e8;
    lStack_e8 = param_2;
    puStack_d8 = &uStack_68;
    pdb_140f332f0(&uStack_e9,&lStack_c8);
  }
  lStack_e8 = *(longlong *)(param_2 + 0x10);
  lVar2 = *(longlong *)(param_2 + 0x18);
  puStack_d8 = *(undefined8 **)(param_2 + 0x20);
  pcStack_e0 = (code *)lVar2;
  uStack_58 = param_3;
  uStack_50 = param_4;
  lStack_c8 = pdb_140bbbcb0(&uStack_58);
  puStack_c0 = (undefined *)uVar8;
  uStack_b8 = uVar5;
  puStack_c0 = (undefined *)pdb_1400affa0(&lStack_c8);
  lStack_c8 = lVar2;
  uVar8 = pdb_1400b0130(&lStack_c8);
  pdb_14072cbe0(param_1,&lStack_e8,uVar8);
  return param_1;
}

