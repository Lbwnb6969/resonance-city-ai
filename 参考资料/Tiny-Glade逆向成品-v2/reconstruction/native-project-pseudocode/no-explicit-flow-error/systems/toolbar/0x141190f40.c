// VA 0x141190f40, PDB extent 1561 bytes
// toolbar::mei::config::TemplateView::with_slot<toolbar::menu::load::ui::closure_env$5,ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::config::TemplateView::with_slot<toolbar::menu::load::ui::closure_env$5,ref$<str$> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 1561 */

void pdb_141190f40(longlong param_1,longlong param_2,code *param_3)

{
  byte *pbVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  ushort uVar14;
  byte bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 uStack_109;
  longlong lStack_108;
  code *pcStack_100;
  longlong *plStack_f8;
  code *pcStack_f0;
  longlong lStack_e8;
  code *pcStack_e0;
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
  undefined *puStack_80;
  undefined8 uStack_78;
  longlong lStack_70;
  longlong lStack_68;
  undefined8 uStack_60;
  longlong lStack_58;
  code *pcStack_50;
  
  lVar12 = *(longlong *)(param_1 + 0x18);
  lStack_58 = param_2;
  pcStack_50 = param_3;
  lStack_e8 = pdb_140bbbcb0(&lStack_58);
  uVar5 = _UNK_14329c338;
  uVar8 = _DAT_14329c330;
  pcStack_e0 = (code *)_DAT_14329c330;
  uStack_d8 = _UNK_14329c338;
  pcStack_e0 = (code *)pdb_1400affa0(&lStack_e8);
  lStack_e8 = lVar12;
  lVar6 = pdb_1400b0130(&lStack_e8);
  lVar10 = *(longlong *)(param_1 + 0x10);
  lStack_e8 = lVar6;
  if (*(longlong *)(lVar10 + 0x1c8) != 0) {
    uVar7 = pdb_1400af0a0(lVar10 + 0x1d0,&lStack_e8);
    bVar15 = (byte)(uVar7 >> 0x39);
    auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
    auVar16 = pshuflw(auVar16,auVar16,0);
    lVar11 = 0;
    while( true ) {
      uVar7 = uVar7 & *(ulonglong *)(lVar10 + 0x1b8);
      auVar22 = *(undefined1 (*) [16])(*(longlong *)(lVar10 + 0x1b0) + uVar7);
      auVar20[0] = -(auVar22[0] == auVar16[0]);
      auVar20[1] = -(auVar22[1] == auVar16[1]);
      auVar20[2] = -(auVar22[2] == auVar16[2]);
      auVar20[3] = -(auVar22[3] == auVar16[3]);
      auVar20[4] = -(auVar22[4] == auVar16[4]);
      auVar20[5] = -(auVar22[5] == auVar16[5]);
      auVar20[6] = -(auVar22[6] == auVar16[6]);
      auVar20[7] = -(auVar22[7] == auVar16[7]);
      auVar20[8] = -(auVar22[8] == auVar16[0]);
      auVar20[9] = -(auVar22[9] == auVar16[1]);
      auVar20[10] = -(auVar22[10] == auVar16[2]);
      auVar20[0xb] = -(auVar22[0xb] == auVar16[3]);
      auVar20[0xc] = -(auVar22[0xc] == auVar16[4]);
      auVar20[0xd] = -(auVar22[0xd] == auVar16[5]);
      auVar20[0xe] = -(auVar22[0xe] == auVar16[6]);
      auVar20[0xf] = -(auVar22[0xf] == auVar16[7]);
      uVar14 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe | (ushort)(auVar20[0xf] >> 7) << 0xf;
      uVar13 = (uint)uVar14;
      while (uVar14 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar13; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        if (lVar6 == *(longlong *)
                      (*(longlong *)(lVar10 + 0x1b0) + -0xd8 +
                      (uVar3 + uVar7 & *(ulonglong *)(lVar10 + 0x1b8)) * -0xd8)) {
          uStack_60 = 0;
          puStack_80 = &UNK_14329f837;
          uStack_78 = 3;
          lStack_70 = lVar10;
          lStack_68 = lVar6;
          lStack_e8 = pdb_140bbbcb0(&puStack_80);
          pcStack_e0 = (code *)_DAT_14329c260;
          uStack_d8 = _UNK_14329c268;
          pcStack_e0 = (code *)pdb_1400affa0(&lStack_e8);
          lStack_e8 = lVar6;
          uVar8 = pdb_1400b0130(&lStack_e8);
          pdb_14072caa0(&lStack_e8,&lStack_70,uVar8);
          uVar8 = pdb_14116ee90(&lStack_e8,0);
          pdb_14119b6b0(uVar8,&UNK_14329f837,3);
          plStack_f8 = (longlong *)uStack_d8;
          lStack_108 = lStack_e8;
          pcStack_100 = pcStack_e0;
          uVar8 = pdb_14116e180(&lStack_108);
          pdb_14119b2b0(uVar8);
          uStack_d8 = plStack_f8;
          lStack_e8 = lStack_108;
          pcStack_e0 = pcStack_100;
          uVar8 = pdb_14116e180(&lStack_e8);
          pdb_140cb5c70(uVar8,800);
          lVar12 = lStack_e8;
          lStack_108 = lStack_e8;
          pcStack_100 = pcStack_e0;
          plStack_f8 = (longlong *)uStack_d8;
          if (*(longlong *)(lStack_e8 + 0x1c8) == 0) goto LAB_14119154c;
          uVar9 = pdb_1400af0a0(lStack_e8 + 0x1d0,&pcStack_100);
          lVar10 = *(longlong *)(lVar12 + 0x1b0);
          uVar7 = *(ulonglong *)(lVar12 + 0x1b8);
          bVar15 = (byte)(uVar9 >> 0x39);
          auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
          auVar16 = pshuflw(auVar16,auVar16,0);
          lVar12 = 0;
          goto LAB_1411914c9;
        }
        uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
        uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
      }
      auVar17[0] = -(auVar22[0] == -1);
      auVar17[1] = -(auVar22[1] == -1);
      auVar17[2] = -(auVar22[2] == -1);
      auVar17[3] = -(auVar22[3] == -1);
      auVar17[4] = -(auVar22[4] == -1);
      auVar17[5] = -(auVar22[5] == -1);
      auVar17[6] = -(auVar22[6] == -1);
      auVar17[7] = -(auVar22[7] == -1);
      auVar17[8] = -(auVar22[8] == -1);
      auVar17[9] = -(auVar22[9] == -1);
      auVar17[10] = -(auVar22[10] == -1);
      auVar17[0xb] = -(auVar22[0xb] == -1);
      auVar17[0xc] = -(auVar22[0xc] == -1);
      auVar17[0xd] = -(auVar22[0xd] == -1);
      auVar17[0xe] = -(auVar22[0xe] == -1);
      auVar17[0xf] = -(auVar22[0xf] == -1);
      if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 || (SUB161(auVar17 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar17 >> 0x17,0) & 1) != 0) || (SUB161(auVar17 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar17 >> 0x27,0) & 1) != 0) || (SUB161(auVar17 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar17 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar17 >> 0x3f,0) & 1) != 0) || (SUB161(auVar17 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar17 >> 0x4f,0) & 1) != 0) || (SUB161(auVar17 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar17 >> 0x5f,0) & 1) != 0) || (SUB161(auVar17 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar17 >> 0x6f,0) & 1) != 0) || (SUB161(auVar17 >> 0x77,0) & 1) != 0) ||
          auVar17[0xf] < '\0') break;
      uVar7 = uVar7 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
  if (*_DAT_143ca8e90 != 0) {
    pcStack_100 = pdb_1402ed420;
    pcStack_f0 = pdb_1402ed420;
    lStack_e8 = 0;
    pcStack_e0 = (code *)&UNK_14329e688;
    uStack_d8 = 0x14;
    uStack_d0 = 0;
    puStack_c8 = &UNK_14329e638;
    uStack_c0 = 0x28;
    uStack_b8 = 1;
    puStack_b0 = &UNK_14329e688;
    uStack_a8 = 0x14;
    uStack_a0 = 0xf100000001;
    puStack_98 = &UNK_14329f02f;
    plStack_90 = &lStack_108;
    lStack_108 = param_1;
    plStack_f8 = &lStack_58;
    pdb_140f332f0(&uStack_109,&lStack_e8);
    lVar12 = *(longlong *)(param_1 + 0x18);
  }
  lStack_108 = param_2;
  pcStack_100 = param_3;
  lStack_e8 = pdb_140bbbcb0(&lStack_108);
  pcStack_e0 = (code *)uVar8;
  uStack_d8 = uVar5;
  pcStack_e0 = (code *)pdb_1400affa0(&lStack_e8);
  lStack_e8 = lVar12;
  uVar8 = pdb_1400b0130(&lStack_e8);
  pdb_14072caa0(&lStack_70,param_1 + 0x10,uVar8);
  puStack_80 = &UNK_14329f837;
  uStack_78 = 3;
  lStack_e8 = pdb_140bbbcb0(&puStack_80);
  pcStack_e0 = (code *)_DAT_14329c260;
  uStack_d8 = _UNK_14329c268;
  pcStack_e0 = (code *)pdb_1400affa0(&lStack_e8);
  lStack_e8 = lStack_68;
  uVar8 = pdb_1400b0130(&lStack_e8);
  pdb_14072caa0(&lStack_e8,&lStack_70,uVar8);
  uVar8 = pdb_14116ee90(&lStack_e8,0);
  pdb_14119b6b0(uVar8,&UNK_14329f837,3);
  plStack_f8 = (longlong *)uStack_d8;
  lStack_108 = lStack_e8;
  pcStack_100 = pcStack_e0;
  uVar8 = pdb_14116e180(&lStack_108);
  pdb_14119b2b0(uVar8);
  uStack_d8 = plStack_f8;
  lStack_e8 = lStack_108;
  pcStack_e0 = pcStack_100;
  uVar8 = pdb_14116e180(&lStack_e8);
  pdb_140cb5c70(uVar8,800);
  lVar12 = lStack_e8;
  lStack_108 = lStack_e8;
  pcStack_100 = pcStack_e0;
  plStack_f8 = (longlong *)uStack_d8;
  if (*(longlong *)(lStack_e8 + 0x1c8) == 0) {
LAB_14119154c:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6b48);
  }
  uVar9 = pdb_1400af0a0(lStack_e8 + 0x1d0,&pcStack_100);
  lVar10 = *(longlong *)(lVar12 + 0x1b0);
  uVar7 = *(ulonglong *)(lVar12 + 0x1b8);
  bVar15 = (byte)(uVar9 >> 0x39);
  auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
  auVar16 = pshuflw(auVar16,auVar16,0);
  lVar12 = 0;
  do {
    uVar9 = uVar9 & uVar7;
    pcVar2 = (char *)(lVar10 + uVar9);
    auVar21[0] = -(*pcVar2 == auVar16[0]);
    auVar21[1] = -(pcVar2[1] == auVar16[1]);
    auVar21[2] = -(pcVar2[2] == auVar16[2]);
    auVar21[3] = -(pcVar2[3] == auVar16[3]);
    auVar21[4] = -(pcVar2[4] == auVar16[4]);
    auVar21[5] = -(pcVar2[5] == auVar16[5]);
    auVar21[6] = -(pcVar2[6] == auVar16[6]);
    auVar21[7] = -(pcVar2[7] == auVar16[7]);
    auVar21[8] = -(pcVar2[8] == auVar16[0]);
    auVar21[9] = -(pcVar2[9] == auVar16[1]);
    auVar21[10] = -(pcVar2[10] == auVar16[2]);
    auVar21[0xb] = -(pcVar2[0xb] == auVar16[3]);
    auVar21[0xc] = -(pcVar2[0xc] == auVar16[4]);
    auVar21[0xd] = -(pcVar2[0xd] == auVar16[5]);
    auVar21[0xe] = -(pcVar2[0xe] == auVar16[6]);
    auVar21[0xf] = -(pcVar2[0xf] == auVar16[7]);
    uVar14 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
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
    uVar13 = (uint)uVar14;
    while (uVar14 != 0) {
      uVar3 = 0;
      for (uVar4 = uVar13; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar3 = uVar3 + 1;
      }
      lVar6 = (uVar3 + uVar9 & uVar7) * -0xd8;
      if (pcStack_100 == *(code **)(lVar10 + -0xd8 + lVar6)) {
LAB_14119152a:
        pbVar1 = (byte *)(lVar10 + lVar6 + -5);
        *pbVar1 = *pbVar1 | 2;
        return;
      }
      uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
      uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
    }
    auVar18[0] = -(*pcVar2 == -1);
    auVar18[1] = -(pcVar2[1] == -1);
    auVar18[2] = -(pcVar2[2] == -1);
    auVar18[3] = -(pcVar2[3] == -1);
    auVar18[4] = -(pcVar2[4] == -1);
    auVar18[5] = -(pcVar2[5] == -1);
    auVar18[6] = -(pcVar2[6] == -1);
    auVar18[7] = -(pcVar2[7] == -1);
    auVar18[8] = -(pcVar2[8] == -1);
    auVar18[9] = -(pcVar2[9] == -1);
    auVar18[10] = -(pcVar2[10] == -1);
    auVar18[0xb] = -(pcVar2[0xb] == -1);
    auVar18[0xc] = -(pcVar2[0xc] == -1);
    auVar18[0xd] = -(pcVar2[0xd] == -1);
    auVar18[0xe] = -(pcVar2[0xe] == -1);
    auVar18[0xf] = -(pcVar2[0xf] == -1);
    if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar18 >> 0x17,0) & 1) != 0) || (SUB161(auVar18 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar18 >> 0x37,0) & 1) != 0) || (SUB161(auVar18 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar18 >> 0x47,0) & 1) != 0) || (SUB161(auVar18 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar18 >> 0x57,0) & 1) != 0) || (SUB161(auVar18 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar18 >> 0x67,0) & 1) != 0) || (SUB161(auVar18 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar18 >> 0x77,0) & 1) != 0) || auVar18[0xf] < '\0') goto LAB_14119154c;
    uVar9 = uVar9 + lVar12 + 0x10;
    lVar12 = lVar12 + 0x10;
  } while( true );
LAB_1411914c9:
  uVar9 = uVar9 & uVar7;
  pcVar2 = (char *)(lVar10 + uVar9);
  auVar22[0] = -(*pcVar2 == auVar16[0]);
  auVar22[1] = -(pcVar2[1] == auVar16[1]);
  auVar22[2] = -(pcVar2[2] == auVar16[2]);
  auVar22[3] = -(pcVar2[3] == auVar16[3]);
  auVar22[4] = -(pcVar2[4] == auVar16[4]);
  auVar22[5] = -(pcVar2[5] == auVar16[5]);
  auVar22[6] = -(pcVar2[6] == auVar16[6]);
  auVar22[7] = -(pcVar2[7] == auVar16[7]);
  auVar22[8] = -(pcVar2[8] == auVar16[0]);
  auVar22[9] = -(pcVar2[9] == auVar16[1]);
  auVar22[10] = -(pcVar2[10] == auVar16[2]);
  auVar22[0xb] = -(pcVar2[0xb] == auVar16[3]);
  auVar22[0xc] = -(pcVar2[0xc] == auVar16[4]);
  auVar22[0xd] = -(pcVar2[0xd] == auVar16[5]);
  auVar22[0xe] = -(pcVar2[0xe] == auVar16[6]);
  auVar22[0xf] = -(pcVar2[0xf] == auVar16[7]);
  uVar14 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
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
  uVar13 = (uint)uVar14;
  while (uVar14 != 0) {
    uVar3 = 0;
    for (uVar4 = uVar13; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
      uVar3 = uVar3 + 1;
    }
    lVar6 = (uVar3 + uVar9 & uVar7) * -0xd8;
    if (pcStack_100 == *(code **)(lVar10 + -0xd8 + lVar6)) goto LAB_14119152a;
    uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
    uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
  }
  auVar19[0] = -(*pcVar2 == -1);
  auVar19[1] = -(pcVar2[1] == -1);
  auVar19[2] = -(pcVar2[2] == -1);
  auVar19[3] = -(pcVar2[3] == -1);
  auVar19[4] = -(pcVar2[4] == -1);
  auVar19[5] = -(pcVar2[5] == -1);
  auVar19[6] = -(pcVar2[6] == -1);
  auVar19[7] = -(pcVar2[7] == -1);
  auVar19[8] = -(pcVar2[8] == -1);
  auVar19[9] = -(pcVar2[9] == -1);
  auVar19[10] = -(pcVar2[10] == -1);
  auVar19[0xb] = -(pcVar2[0xb] == -1);
  auVar19[0xc] = -(pcVar2[0xc] == -1);
  auVar19[0xd] = -(pcVar2[0xd] == -1);
  auVar19[0xe] = -(pcVar2[0xe] == -1);
  auVar19[0xf] = -(pcVar2[0xf] == -1);
  if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 || (SUB161(auVar19 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar19 >> 0x17,0) & 1) != 0) || (SUB161(auVar19 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar19 >> 0x27,0) & 1) != 0) || (SUB161(auVar19 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar19 >> 0x37,0) & 1) != 0) || (SUB161(auVar19 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar19 >> 0x47,0) & 1) != 0) || (SUB161(auVar19 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar19 >> 0x57,0) & 1) != 0) || (SUB161(auVar19 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar19 >> 0x67,0) & 1) != 0) || (SUB161(auVar19 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar19 >> 0x77,0) & 1) != 0) || auVar19[0xf] < '\0') goto LAB_14119154c;
  uVar9 = uVar9 + lVar12 + 0x10;
  lVar12 = lVar12 + 0x10;
  goto LAB_1411914c9;
}

