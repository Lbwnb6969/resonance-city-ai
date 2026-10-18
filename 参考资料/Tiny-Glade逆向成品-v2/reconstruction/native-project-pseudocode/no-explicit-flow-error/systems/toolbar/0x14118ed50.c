// VA 0x14118ed50, PDB extent 930 bytes
// toolbar::mei::config::TemplateView::with_slot<toolbar::menu::missing_mods::ui::closure_env$3,ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::config::TemplateView::with_slot<toolbar::menu::missing_mods::ui::closure_env$3,ref$<str$>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 930 */

void pdb_14118ed50(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  ushort uVar14;
  longlong lVar15;
  byte bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 uStack_111;
  longlong lStack_110;
  undefined *puStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  longlong *plStack_b8;
  longlong lStack_b0;
  code *pcStack_a8;
  longlong *plStack_a0;
  code *pcStack_98;
  longlong lStack_90;
  longlong lStack_88;
  undefined8 uStack_80;
  longlong lStack_78;
  undefined8 uStack_70;
  
  lVar15 = *(longlong *)(param_1 + 0x18);
  lStack_78 = param_2;
  uStack_70 = param_3;
  lStack_110 = pdb_140bbbcb0(&lStack_78);
  uVar7 = _UNK_14329c338;
  uVar10 = _DAT_14329c330;
  puStack_108 = (undefined *)_DAT_14329c330;
  lStack_100 = _UNK_14329c338;
  puStack_108 = (undefined *)pdb_1400affa0(&lStack_110);
  lStack_110 = lVar15;
  lVar8 = pdb_1400b0130(&lStack_110);
  lVar2 = *(longlong *)(param_1 + 0x10);
  lStack_110 = lVar8;
  if (*(longlong *)(lVar2 + 0x1c8) != 0) {
    uVar9 = pdb_1400af0a0(lVar2 + 0x1d0,&lStack_110);
    bVar16 = (byte)(uVar9 >> 0x39);
    auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
    auVar17 = pshuflw(auVar17,auVar17,0);
    lVar12 = 0;
    while( true ) {
      uVar9 = uVar9 & *(ulonglong *)(lVar2 + 0x1b8);
      auVar1 = *(undefined1 (*) [16])(*(longlong *)(lVar2 + 0x1b0) + uVar9);
      auVar19[0] = -(auVar1[0] == auVar17[0]);
      auVar19[1] = -(auVar1[1] == auVar17[1]);
      auVar19[2] = -(auVar1[2] == auVar17[2]);
      auVar19[3] = -(auVar1[3] == auVar17[3]);
      auVar19[4] = -(auVar1[4] == auVar17[4]);
      auVar19[5] = -(auVar1[5] == auVar17[5]);
      auVar19[6] = -(auVar1[6] == auVar17[6]);
      auVar19[7] = -(auVar1[7] == auVar17[7]);
      auVar19[8] = -(auVar1[8] == auVar17[0]);
      auVar19[9] = -(auVar1[9] == auVar17[1]);
      auVar19[10] = -(auVar1[10] == auVar17[2]);
      auVar19[0xb] = -(auVar1[0xb] == auVar17[3]);
      auVar19[0xc] = -(auVar1[0xc] == auVar17[4]);
      auVar19[0xd] = -(auVar1[0xd] == auVar17[5]);
      auVar19[0xe] = -(auVar1[0xe] == auVar17[6]);
      auVar19[0xf] = -(auVar1[0xf] == auVar17[7]);
      uVar14 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe | (ushort)(auVar19[0xf] >> 7) << 0xf;
      uVar13 = (uint)uVar14;
      while (uVar14 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar13; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        if (lVar8 == *(longlong *)
                      (*(longlong *)(lVar2 + 0x1b0) + -0xd8 +
                      (uVar3 + uVar9 & *(ulonglong *)(lVar2 + 0x1b8)) * -0xd8)) {
          lVar15 = *param_4;
          lVar5 = param_4[1];
          lVar6 = param_4[2];
          lVar12 = param_4[3];
          uStack_80 = 0;
          uVar9 = *(ulonglong *)(lVar15 + 0x10);
          if (uVar9 == 0) {
            return;
          }
          uVar11 = 7;
          if (uVar9 < 7) {
            uVar11 = uVar9;
          }
          lStack_90 = lVar2;
          lStack_88 = lVar8;
          pdb_1411739b0(&lStack_b0,&lStack_90,&UNK_14329f401,4,uVar11,uVar9,0x42700000);
          lStack_110 = lVar15;
          puStack_108 = (undefined *)lVar5;
          lStack_100 = lVar6;
          lStack_f8 = lVar12;
          goto LAB_14118f0c1;
        }
        uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
        uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
      }
      auVar18[0] = -(auVar1[0] == -1);
      auVar18[1] = -(auVar1[1] == -1);
      auVar18[2] = -(auVar1[2] == -1);
      auVar18[3] = -(auVar1[3] == -1);
      auVar18[4] = -(auVar1[4] == -1);
      auVar18[5] = -(auVar1[5] == -1);
      auVar18[6] = -(auVar1[6] == -1);
      auVar18[7] = -(auVar1[7] == -1);
      auVar18[8] = -(auVar1[8] == -1);
      auVar18[9] = -(auVar1[9] == -1);
      auVar18[10] = -(auVar1[10] == -1);
      auVar18[0xb] = -(auVar1[0xb] == -1);
      auVar18[0xc] = -(auVar1[0xc] == -1);
      auVar18[0xd] = -(auVar1[0xd] == -1);
      auVar18[0xe] = -(auVar1[0xe] == -1);
      auVar18[0xf] = -(auVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar18 >> 0x17,0) & 1) != 0) || (SUB161(auVar18 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar18 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar18 >> 0x3f,0) & 1) != 0) || (SUB161(auVar18 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar18 >> 0x4f,0) & 1) != 0) || (SUB161(auVar18 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar18 >> 0x5f,0) & 1) != 0) || (SUB161(auVar18 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar18 >> 0x6f,0) & 1) != 0) || (SUB161(auVar18 >> 0x77,0) & 1) != 0) ||
          auVar18[0xf] < '\0') break;
      uVar9 = uVar9 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    }
  }
  if (*_DAT_143ca8e90 != 0) {
    pcStack_a8 = pdb_1402ed420;
    pcStack_98 = pdb_1402ed420;
    lStack_110 = 0;
    puStack_108 = &UNK_14329e688;
    lStack_100 = 0x14;
    lStack_f8 = 0;
    puStack_f0 = &UNK_14329e638;
    uStack_e8 = 0x28;
    uStack_e0 = 1;
    puStack_d8 = &UNK_14329e688;
    uStack_d0 = 0x14;
    uStack_c8 = 0xf100000001;
    puStack_c0 = &UNK_14329f02f;
    plStack_b8 = &lStack_b0;
    lStack_b0 = param_1;
    plStack_a0 = &lStack_78;
    pdb_140f332f0(&uStack_111,&lStack_110);
    lVar15 = *(longlong *)(param_1 + 0x18);
  }
  lVar2 = *param_4;
  lVar12 = param_4[1];
  lVar5 = param_4[2];
  lVar8 = param_4[3];
  lStack_b0 = param_2;
  pcStack_a8 = (code *)param_3;
  lStack_110 = pdb_140bbbcb0(&lStack_b0);
  puStack_108 = (undefined *)uVar10;
  lStack_100 = uVar7;
  puStack_108 = (undefined *)pdb_1400affa0(&lStack_110);
  lStack_110 = lVar15;
  uVar10 = pdb_1400b0130(&lStack_110);
  pdb_14072caa0(&lStack_90,param_1 + 0x10,uVar10);
  uVar9 = *(ulonglong *)(lVar2 + 0x10);
  if (uVar9 != 0) {
    uVar11 = 7;
    if (uVar9 < 7) {
      uVar11 = uVar9;
    }
    pdb_1411739b0(&lStack_b0,&lStack_90,&UNK_14329f401,4,uVar11,uVar9,0x42700000);
    lStack_110 = lVar2;
    puStack_108 = (undefined *)lVar12;
    lStack_100 = lVar5;
    lStack_f8 = lVar8;
LAB_14118f0c1:
    pdb_1422f94a0(&lStack_b0,&lStack_110);
  }
  return;
}

