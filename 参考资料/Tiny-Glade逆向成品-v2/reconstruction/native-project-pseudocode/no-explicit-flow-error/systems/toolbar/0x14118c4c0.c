// VA 0x14118c4c0, PDB extent 1277 bytes
// toolbar::mei::config::TemplateView::with_slot<toolbar::menu::corrupted_save_file::ui::closure_env$1,ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::config::TemplateView::with_slot<toolbar::menu::corrupted_save_file::ui::closure_env$1,ref$<str$>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 1277 */

void pdb_14118c4c0(longlong param_1,longlong param_2,code *param_3,undefined8 *param_4)

{
  char *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  ushort uVar16;
  ulonglong in_R11;
  byte bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 uStack_109;
  longlong lStack_108;
  code *pcStack_100;
  longlong *plStack_f8;
  code *pcStack_f0;
  longlong lStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  longlong *plStack_88;
  longlong lStack_80;
  longlong lStack_78;
  undefined8 uStack_70;
  longlong lStack_68;
  code *pcStack_60;
  
  lVar14 = *(longlong *)(param_1 + 0x18);
  lStack_68 = param_2;
  pcStack_60 = param_3;
  lStack_e0 = pdb_140bbbcb0(&lStack_68);
  uVar11 = _UNK_14329c338;
  uVar8 = _DAT_14329c330;
  pcStack_d8 = (code *)_DAT_14329c330;
  uStack_d0 = _UNK_14329c338;
  pcStack_d8 = (code *)pdb_1400affa0(&lStack_e0);
  lStack_e0 = lVar14;
  lVar6 = pdb_1400b0130(&lStack_e0);
  lVar2 = *(longlong *)(param_1 + 0x10);
  lStack_e0 = lVar6;
  if (*(longlong *)(lVar2 + 0x1c8) != 0) {
    uVar7 = pdb_1400af0a0(lVar2 + 0x1d0,&lStack_e0);
    bVar17 = (byte)(uVar7 >> 0x39);
    auVar18 = ZEXT216(CONCAT11(bVar17,bVar17));
    auVar18 = pshuflw(auVar18,auVar18,0);
    lVar13 = 0;
    while( true ) {
      uVar7 = uVar7 & *(ulonglong *)(lVar2 + 0x1b8);
      auVar24 = *(undefined1 (*) [16])(*(longlong *)(lVar2 + 0x1b0) + uVar7);
      auVar22[0] = -(auVar24[0] == auVar18[0]);
      auVar22[1] = -(auVar24[1] == auVar18[1]);
      auVar22[2] = -(auVar24[2] == auVar18[2]);
      auVar22[3] = -(auVar24[3] == auVar18[3]);
      auVar22[4] = -(auVar24[4] == auVar18[4]);
      auVar22[5] = -(auVar24[5] == auVar18[5]);
      auVar22[6] = -(auVar24[6] == auVar18[6]);
      auVar22[7] = -(auVar24[7] == auVar18[7]);
      auVar22[8] = -(auVar24[8] == auVar18[0]);
      auVar22[9] = -(auVar24[9] == auVar18[1]);
      auVar22[10] = -(auVar24[10] == auVar18[2]);
      auVar22[0xb] = -(auVar24[0xb] == auVar18[3]);
      auVar22[0xc] = -(auVar24[0xc] == auVar18[4]);
      auVar22[0xd] = -(auVar24[0xd] == auVar18[5]);
      auVar22[0xe] = -(auVar24[0xe] == auVar18[6]);
      auVar22[0xf] = -(auVar24[0xf] == auVar18[7]);
      uVar16 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(auVar22[0xf] >> 7) << 0xf;
      uVar15 = (uint)uVar16;
      while (uVar16 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar15; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        if (lVar6 == *(longlong *)
                      (*(longlong *)(lVar2 + 0x1b0) + -0xd8 +
                      (uVar4 + uVar7 & *(ulonglong *)(lVar2 + 0x1b8)) * -0xd8)) {
          uStack_70 = 0;
          plVar12 = (longlong *)*param_4;
          uVar11 = 2;
          lStack_80 = lVar2;
          lStack_78 = lVar6;
          uVar8 = pdb_140dc6290(&UNK_14329f0b4,2);
          pdb_1407339e0(&lStack_e0,&lStack_80,uVar8,uVar11);
          uVar8 = pdb_14116dd60(&lStack_e0);
          pdb_14119b2b0(uVar8);
          lVar14 = lStack_e0;
          lStack_108 = lStack_e0;
          pcStack_100 = pcStack_d8;
          plStack_f8 = (longlong *)uStack_d0;
          if (*(longlong *)(lStack_e0 + 0x1c8) == 0) goto LAB_14118c97d;
          uVar9 = pdb_1400af0a0(lStack_e0 + 0x1d0,&pcStack_100);
          puVar10 = *(undefined **)(lVar14 + 0x1b0);
          uVar7 = *(ulonglong *)(lVar14 + 0x1b8);
          bVar17 = (byte)(uVar9 >> 0x39);
          auVar18 = ZEXT216(CONCAT11(bVar17,bVar17));
          auVar18 = pshuflw(auVar18,auVar18,0);
          lVar14 = 0;
          goto LAB_14118c90e;
        }
        uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
      }
      auVar19[0] = -(auVar24[0] == -1);
      auVar19[1] = -(auVar24[1] == -1);
      auVar19[2] = -(auVar24[2] == -1);
      auVar19[3] = -(auVar24[3] == -1);
      auVar19[4] = -(auVar24[4] == -1);
      auVar19[5] = -(auVar24[5] == -1);
      auVar19[6] = -(auVar24[6] == -1);
      auVar19[7] = -(auVar24[7] == -1);
      auVar19[8] = -(auVar24[8] == -1);
      auVar19[9] = -(auVar24[9] == -1);
      auVar19[10] = -(auVar24[10] == -1);
      auVar19[0xb] = -(auVar24[0xb] == -1);
      auVar19[0xc] = -(auVar24[0xc] == -1);
      auVar19[0xd] = -(auVar24[0xd] == -1);
      auVar19[0xe] = -(auVar24[0xe] == -1);
      auVar19[0xf] = -(auVar24[0xf] == -1);
      if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 || (SUB161(auVar19 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar19 >> 0x17,0) & 1) != 0) || (SUB161(auVar19 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar19 >> 0x27,0) & 1) != 0) || (SUB161(auVar19 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar19 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar19 >> 0x3f,0) & 1) != 0) || (SUB161(auVar19 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar19 >> 0x4f,0) & 1) != 0) || (SUB161(auVar19 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar19 >> 0x5f,0) & 1) != 0) || (SUB161(auVar19 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar19 >> 0x6f,0) & 1) != 0) || (SUB161(auVar19 >> 0x77,0) & 1) != 0) ||
          auVar19[0xf] < '\0') break;
      uVar7 = uVar7 + lVar13 + 0x10;
      lVar13 = lVar13 + 0x10;
    }
  }
  if (*_DAT_143ca8e90 != 0) {
    pcStack_100 = pdb_1402ed420;
    pcStack_f0 = pdb_1402ed420;
    lStack_e0 = 0;
    pcStack_d8 = (code *)&UNK_14329e688;
    uStack_d0 = 0x14;
    uStack_c8 = 0;
    puStack_c0 = &UNK_14329e638;
    uStack_b8 = 0x28;
    uStack_b0 = 1;
    puStack_a8 = &UNK_14329e688;
    uStack_a0 = 0x14;
    uStack_98 = 0xf100000001;
    puStack_90 = &UNK_14329f02f;
    plStack_88 = &lStack_108;
    lStack_108 = param_1;
    plStack_f8 = &lStack_68;
    pdb_140f332f0(&uStack_109,&lStack_e0);
    lVar14 = *(longlong *)(param_1 + 0x18);
  }
  lStack_108 = param_2;
  pcStack_100 = param_3;
  lStack_e0 = pdb_140bbbcb0(&lStack_108);
  pcStack_d8 = (code *)uVar8;
  uStack_d0 = uVar11;
  pcStack_d8 = (code *)pdb_1400affa0(&lStack_e0);
  lStack_e0 = lVar14;
  uVar8 = pdb_1400b0130(&lStack_e0);
  plVar12 = &lStack_80;
  pdb_14072caa0(plVar12,param_1 + 0x10,uVar8);
  puVar3 = (undefined1 *)*param_4;
  uVar11 = 2;
  uVar8 = pdb_140dc6290(&UNK_14329f0b4,2);
  pdb_1407339e0(&lStack_e0,plVar12,uVar8,uVar11);
  uVar8 = pdb_14116dd60(&lStack_e0);
  pdb_14119b2b0(uVar8);
  lVar14 = lStack_e0;
  lStack_108 = lStack_e0;
  pcStack_100 = pcStack_d8;
  plStack_f8 = (longlong *)uStack_d0;
  if (*(longlong *)(lStack_e0 + 0x1c8) != 0) {
    uVar9 = pdb_1400af0a0(lStack_e0 + 0x1d0,&pcStack_100);
    lVar2 = *(longlong *)(lVar14 + 0x1b0);
    uVar7 = *(ulonglong *)(lVar14 + 0x1b8);
    bVar17 = (byte)(uVar9 >> 0x39);
    auVar18 = ZEXT216(CONCAT11(bVar17,bVar17));
    auVar18 = pshuflw(auVar18,auVar18,0);
    lVar14 = 0;
    while( true ) {
      uVar9 = uVar9 & uVar7;
      pcVar1 = (char *)(lVar2 + uVar9);
      auVar23[0] = -(*pcVar1 == auVar18[0]);
      auVar23[1] = -(pcVar1[1] == auVar18[1]);
      auVar23[2] = -(pcVar1[2] == auVar18[2]);
      auVar23[3] = -(pcVar1[3] == auVar18[3]);
      auVar23[4] = -(pcVar1[4] == auVar18[4]);
      auVar23[5] = -(pcVar1[5] == auVar18[5]);
      auVar23[6] = -(pcVar1[6] == auVar18[6]);
      auVar23[7] = -(pcVar1[7] == auVar18[7]);
      auVar23[8] = -(pcVar1[8] == auVar18[0]);
      auVar23[9] = -(pcVar1[9] == auVar18[1]);
      auVar23[10] = -(pcVar1[10] == auVar18[2]);
      auVar23[0xb] = -(pcVar1[0xb] == auVar18[3]);
      auVar23[0xc] = -(pcVar1[0xc] == auVar18[4]);
      auVar23[0xd] = -(pcVar1[0xd] == auVar18[5]);
      auVar23[0xe] = -(pcVar1[0xe] == auVar18[6]);
      auVar23[0xf] = -(pcVar1[0xf] == auVar18[7]);
      uVar16 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
      uVar15 = (uint)uVar16;
      while (uVar16 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar15; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        lVar6 = (uVar4 + uVar9 & uVar7) * -0xd8;
        if (pcStack_100 == *(code **)(lVar2 + -0xd8 + lVar6)) {
          if ((*(byte *)(lVar2 + lVar6 + -6) & 0x30) == 0) {
            return;
          }
          *puVar3 = 1;
          return;
        }
        uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
        in_R11 = (ulonglong)uVar15;
      }
      auVar20[0] = -(*pcVar1 == -1);
      auVar20[1] = -(pcVar1[1] == -1);
      auVar20[2] = -(pcVar1[2] == -1);
      auVar20[3] = -(pcVar1[3] == -1);
      auVar20[4] = -(pcVar1[4] == -1);
      auVar20[5] = -(pcVar1[5] == -1);
      auVar20[6] = -(pcVar1[6] == -1);
      auVar20[7] = -(pcVar1[7] == -1);
      auVar20[8] = -(pcVar1[8] == -1);
      auVar20[9] = -(pcVar1[9] == -1);
      auVar20[10] = -(pcVar1[10] == -1);
      auVar20[0xb] = -(pcVar1[0xb] == -1);
      auVar20[0xc] = -(pcVar1[0xc] == -1);
      auVar20[0xd] = -(pcVar1[0xd] == -1);
      auVar20[0xe] = -(pcVar1[0xe] == -1);
      auVar20[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar20 >> 7,0) & 1) != 0 || (SUB161(auVar20 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar20 >> 0x17,0) & 1) != 0) || (SUB161(auVar20 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar20 >> 0x27,0) & 1) != 0) || (SUB161(auVar20 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar20 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar20 >> 0x3f,0) & 1) != 0) || (SUB161(auVar20 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar20 >> 0x4f,0) & 1) != 0) || (SUB161(auVar20 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar20 >> 0x5f,0) & 1) != 0) || (SUB161(auVar20 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar20 >> 0x6f,0) & 1) != 0) || (SUB161(auVar20 >> 0x77,0) & 1) != 0) ||
          auVar20[0xf] < '\0') break;
      uVar9 = uVar9 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
LAB_14118c97d:
  puVar10 = &UNK_142fa60f8;
  pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
LAB_14118c995:
  if ((puVar10[in_R11 - 6] & 0x30) != 0) {
    *(undefined1 *)plVar12 = 1;
  }
  return;
LAB_14118c90e:
  uVar9 = uVar9 & uVar7;
  pcVar1 = puVar10 + uVar9;
  auVar24[0] = -(*pcVar1 == auVar18[0]);
  auVar24[1] = -(pcVar1[1] == auVar18[1]);
  auVar24[2] = -(pcVar1[2] == auVar18[2]);
  auVar24[3] = -(pcVar1[3] == auVar18[3]);
  auVar24[4] = -(pcVar1[4] == auVar18[4]);
  auVar24[5] = -(pcVar1[5] == auVar18[5]);
  auVar24[6] = -(pcVar1[6] == auVar18[6]);
  auVar24[7] = -(pcVar1[7] == auVar18[7]);
  auVar24[8] = -(pcVar1[8] == auVar18[0]);
  auVar24[9] = -(pcVar1[9] == auVar18[1]);
  auVar24[10] = -(pcVar1[10] == auVar18[2]);
  auVar24[0xb] = -(pcVar1[0xb] == auVar18[3]);
  auVar24[0xc] = -(pcVar1[0xc] == auVar18[4]);
  auVar24[0xd] = -(pcVar1[0xd] == auVar18[5]);
  auVar24[0xe] = -(pcVar1[0xe] == auVar18[6]);
  auVar24[0xf] = -(pcVar1[0xf] == auVar18[7]);
  uVar16 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe | (ushort)(auVar24[0xf] >> 7) << 0xf;
  uVar15 = (uint)uVar16;
  while (uVar16 != 0) {
    uVar4 = 0;
    for (uVar5 = uVar15; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    in_R11 = (uVar4 + uVar9 & uVar7) * -0xd8;
    if (pcStack_100 == *(code **)(puVar10 + (in_R11 - 0xd8))) goto LAB_14118c995;
    uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
    uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
    in_R11 = (ulonglong)uVar15;
  }
  auVar21[0] = -(*pcVar1 == -1);
  auVar21[1] = -(pcVar1[1] == -1);
  auVar21[2] = -(pcVar1[2] == -1);
  auVar21[3] = -(pcVar1[3] == -1);
  auVar21[4] = -(pcVar1[4] == -1);
  auVar21[5] = -(pcVar1[5] == -1);
  auVar21[6] = -(pcVar1[6] == -1);
  auVar21[7] = -(pcVar1[7] == -1);
  auVar21[8] = -(pcVar1[8] == -1);
  auVar21[9] = -(pcVar1[9] == -1);
  auVar21[10] = -(pcVar1[10] == -1);
  auVar21[0xb] = -(pcVar1[0xb] == -1);
  auVar21[0xc] = -(pcVar1[0xc] == -1);
  auVar21[0xd] = -(pcVar1[0xd] == -1);
  auVar21[0xe] = -(pcVar1[0xe] == -1);
  auVar21[0xf] = -(pcVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 || (SUB161(auVar21 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar21 >> 0x17,0) & 1) != 0) || (SUB161(auVar21 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar21 >> 0x27,0) & 1) != 0) || (SUB161(auVar21 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar21 >> 0x37,0) & 1) != 0) || (SUB161(auVar21 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar21 >> 0x47,0) & 1) != 0) || (SUB161(auVar21 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar21 >> 0x57,0) & 1) != 0) || (SUB161(auVar21 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar21 >> 0x67,0) & 1) != 0) || (SUB161(auVar21 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar21 >> 0x77,0) & 1) != 0) || auVar21[0xf] < '\0') goto LAB_14118c97d;
  uVar9 = uVar9 + lVar14 + 0x10;
  lVar14 = lVar14 + 0x10;
  goto LAB_14118c90e;
}

