// VA 0x14118ac70, PDB extent 1235 bytes
// toolbar::mei::config::TemplateView::with_slot<toolbar::photomode::lut_gallery::ui::closure_env$0,ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::config::TemplateView::with_slot<toolbar::photomode::lut_gallery::ui::closure_env$0,ref$<str$>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 1235 */

void pdb_14118ac70(longlong param_1,longlong param_2,code *param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
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
  undefined1 uStack_149;
  longlong lStack_148;
  code *pcStack_140;
  undefined8 *puStack_138;
  code *pcStack_130;
  longlong lStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  longlong *plStack_c8;
  longlong lStack_80;
  longlong lStack_78;
  undefined8 uStack_70;
  longlong lStack_68;
  code *pcStack_60;
  
  lVar12 = *(longlong *)(param_1 + 0x18);
  lStack_68 = param_2;
  pcStack_60 = param_3;
  lStack_120 = pdb_140bbbcb0(&lStack_68);
  uVar5 = _UNK_14329c338;
  uVar8 = _DAT_14329c330;
  pcStack_118 = (code *)_DAT_14329c330;
  uStack_110 = _UNK_14329c338;
  pcStack_118 = (code *)pdb_1400affa0(&lStack_120);
  lStack_120 = lVar12;
  lVar6 = pdb_1400b0130(&lStack_120);
  lVar9 = *(longlong *)(param_1 + 0x10);
  lStack_120 = lVar6;
  if (*(longlong *)(lVar9 + 0x1c8) != 0) {
    uVar7 = pdb_1400af0a0(lVar9 + 0x1d0,&lStack_120);
    bVar15 = (byte)(uVar7 >> 0x39);
    auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
    auVar16 = pshuflw(auVar16,auVar16,0);
    lVar11 = 0;
    while( true ) {
      uVar7 = uVar7 & *(ulonglong *)(lVar9 + 0x1b8);
      auVar1 = *(undefined1 (*) [16])(*(longlong *)(lVar9 + 0x1b0) + uVar7);
      auVar20[0] = -(auVar1[0] == auVar16[0]);
      auVar20[1] = -(auVar1[1] == auVar16[1]);
      auVar20[2] = -(auVar1[2] == auVar16[2]);
      auVar20[3] = -(auVar1[3] == auVar16[3]);
      auVar20[4] = -(auVar1[4] == auVar16[4]);
      auVar20[5] = -(auVar1[5] == auVar16[5]);
      auVar20[6] = -(auVar1[6] == auVar16[6]);
      auVar20[7] = -(auVar1[7] == auVar16[7]);
      auVar20[8] = -(auVar1[8] == auVar16[0]);
      auVar20[9] = -(auVar1[9] == auVar16[1]);
      auVar20[10] = -(auVar1[10] == auVar16[2]);
      auVar20[0xb] = -(auVar1[0xb] == auVar16[3]);
      auVar20[0xc] = -(auVar1[0xc] == auVar16[4]);
      auVar20[0xd] = -(auVar1[0xd] == auVar16[5]);
      auVar20[0xe] = -(auVar1[0xe] == auVar16[6]);
      auVar20[0xf] = -(auVar1[0xf] == auVar16[7]);
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
                      (*(longlong *)(lVar9 + 0x1b0) + -0xd8 +
                      (uVar3 + uVar7 & *(ulonglong *)(lVar9 + 0x1b8)) * -0xd8)) {
          uStack_70 = 0;
          lStack_80 = lVar9;
          lStack_78 = lVar6;
          pdb_140725b60(&lStack_120,&lStack_80,&UNK_14329f3d5,9);
          lVar9 = pdb_14116e020(&lStack_120);
          lVar12 = lStack_120;
          *(undefined1 *)(lVar9 + 0x44) = 0x14;
          lStack_148 = lStack_120;
          pcStack_140 = pcStack_118;
          puStack_138 = (undefined8 *)uStack_110;
          if (*(longlong *)(lStack_120 + 0x1c8) == 0) goto LAB_14118b12a;
          uVar10 = pdb_1400af0a0(lStack_120 + 0x1d0,&pcStack_140);
          lVar9 = *(longlong *)(lVar12 + 0x1b0);
          uVar7 = *(ulonglong *)(lVar12 + 0x1b8);
          bVar15 = (byte)(uVar10 >> 0x39);
          auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
          auVar16 = pshuflw(auVar16,auVar16,0);
          lVar12 = 0;
          goto LAB_14118b085;
        }
        uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
        uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
      }
      auVar17[0] = -(auVar1[0] == -1);
      auVar17[1] = -(auVar1[1] == -1);
      auVar17[2] = -(auVar1[2] == -1);
      auVar17[3] = -(auVar1[3] == -1);
      auVar17[4] = -(auVar1[4] == -1);
      auVar17[5] = -(auVar1[5] == -1);
      auVar17[6] = -(auVar1[6] == -1);
      auVar17[7] = -(auVar1[7] == -1);
      auVar17[8] = -(auVar1[8] == -1);
      auVar17[9] = -(auVar1[9] == -1);
      auVar17[10] = -(auVar1[10] == -1);
      auVar17[0xb] = -(auVar1[0xb] == -1);
      auVar17[0xc] = -(auVar1[0xc] == -1);
      auVar17[0xd] = -(auVar1[0xd] == -1);
      auVar17[0xe] = -(auVar1[0xe] == -1);
      auVar17[0xf] = -(auVar1[0xf] == -1);
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
    pcStack_140 = pdb_1402ed420;
    pcStack_130 = pdb_1402ed420;
    lStack_120 = 0;
    pcStack_118 = (code *)&UNK_14329e688;
    uStack_110 = 0x14;
    uStack_108 = 0;
    puStack_100 = &UNK_14329e638;
    uStack_f8 = 0x28;
    uStack_f0 = 1;
    puStack_e8 = &UNK_14329e688;
    uStack_e0 = 0x14;
    uStack_d8 = 0xf100000001;
    puStack_d0 = &UNK_14329f02f;
    plStack_c8 = &lStack_148;
    lStack_148 = param_1;
    puStack_138 = &lStack_68;
    pdb_140f332f0(&uStack_149,&lStack_120);
    lVar12 = *(longlong *)(param_1 + 0x18);
  }
  lStack_148 = param_2;
  pcStack_140 = param_3;
  lStack_120 = pdb_140bbbcb0(&lStack_148);
  pcStack_118 = (code *)uVar8;
  uStack_110 = uVar5;
  pcStack_118 = (code *)pdb_1400affa0(&lStack_120);
  lStack_120 = lVar12;
  uVar8 = pdb_1400b0130(&lStack_120);
  pdb_14072caa0(&lStack_80,param_1 + 0x10,uVar8);
  pdb_140725b60(&lStack_120,&lStack_80,&UNK_14329f3d5,9);
  lVar9 = pdb_14116e020(&lStack_120);
  lVar12 = lStack_120;
  *(undefined1 *)(lVar9 + 0x44) = 0x14;
  lStack_148 = lStack_120;
  pcStack_140 = pcStack_118;
  puStack_138 = (undefined8 *)uStack_110;
  if (*(longlong *)(lStack_120 + 0x1c8) == 0) {
LAB_14118b12a:
    pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar10 = pdb_1400af0a0(lStack_120 + 0x1d0,&pcStack_140);
  lVar9 = *(longlong *)(lVar12 + 0x1b0);
  uVar7 = *(ulonglong *)(lVar12 + 0x1b8);
  bVar15 = (byte)(uVar10 >> 0x39);
  auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
  auVar16 = pshuflw(auVar16,auVar16,0);
  lVar12 = 0;
  do {
    uVar10 = uVar10 & uVar7;
    auVar1 = *(undefined1 (*) [16])(lVar9 + uVar10);
    auVar21[0] = -(auVar1[0] == auVar16[0]);
    auVar21[1] = -(auVar1[1] == auVar16[1]);
    auVar21[2] = -(auVar1[2] == auVar16[2]);
    auVar21[3] = -(auVar1[3] == auVar16[3]);
    auVar21[4] = -(auVar1[4] == auVar16[4]);
    auVar21[5] = -(auVar1[5] == auVar16[5]);
    auVar21[6] = -(auVar1[6] == auVar16[6]);
    auVar21[7] = -(auVar1[7] == auVar16[7]);
    auVar21[8] = -(auVar1[8] == auVar16[0]);
    auVar21[9] = -(auVar1[9] == auVar16[1]);
    auVar21[10] = -(auVar1[10] == auVar16[2]);
    auVar21[0xb] = -(auVar1[0xb] == auVar16[3]);
    auVar21[0xc] = -(auVar1[0xc] == auVar16[4]);
    auVar21[0xd] = -(auVar1[0xd] == auVar16[5]);
    auVar21[0xe] = -(auVar1[0xe] == auVar16[6]);
    auVar21[0xf] = -(auVar1[0xf] == auVar16[7]);
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
      lVar6 = (uVar3 + uVar10 & uVar7) * -0xd8;
      if (pcStack_140 == *(code **)(lVar9 + -0xd8 + lVar6)) {
LAB_14118b0e6:
        if ((*(byte *)(lVar9 + lVar6 + -6) & 0x30) != 0) {
          *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
          lStack_120 = 2;
          pdb_140a003a0(*param_4,&lStack_120);
        }
        return;
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
                  || (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar18 >> 0x37,0) & 1) != 0) || (SUB161(auVar18 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar18 >> 0x47,0) & 1) != 0) || (SUB161(auVar18 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar18 >> 0x57,0) & 1) != 0) || (SUB161(auVar18 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar18 >> 0x67,0) & 1) != 0) || (SUB161(auVar18 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar18 >> 0x77,0) & 1) != 0) || auVar18[0xf] < '\0') goto LAB_14118b12a;
    uVar10 = uVar10 + lVar12 + 0x10;
    lVar12 = lVar12 + 0x10;
  } while( true );
LAB_14118b085:
  uVar10 = uVar10 & uVar7;
  auVar1 = *(undefined1 (*) [16])(lVar9 + uVar10);
  auVar22[0] = -(auVar1[0] == auVar16[0]);
  auVar22[1] = -(auVar1[1] == auVar16[1]);
  auVar22[2] = -(auVar1[2] == auVar16[2]);
  auVar22[3] = -(auVar1[3] == auVar16[3]);
  auVar22[4] = -(auVar1[4] == auVar16[4]);
  auVar22[5] = -(auVar1[5] == auVar16[5]);
  auVar22[6] = -(auVar1[6] == auVar16[6]);
  auVar22[7] = -(auVar1[7] == auVar16[7]);
  auVar22[8] = -(auVar1[8] == auVar16[0]);
  auVar22[9] = -(auVar1[9] == auVar16[1]);
  auVar22[10] = -(auVar1[10] == auVar16[2]);
  auVar22[0xb] = -(auVar1[0xb] == auVar16[3]);
  auVar22[0xc] = -(auVar1[0xc] == auVar16[4]);
  auVar22[0xd] = -(auVar1[0xd] == auVar16[5]);
  auVar22[0xe] = -(auVar1[0xe] == auVar16[6]);
  auVar22[0xf] = -(auVar1[0xf] == auVar16[7]);
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
    lVar6 = (uVar3 + uVar10 & uVar7) * -0xd8;
    if (pcStack_140 == *(code **)(lVar9 + -0xd8 + lVar6)) goto LAB_14118b0e6;
    uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
    uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
  }
  auVar19[0] = -(auVar1[0] == -1);
  auVar19[1] = -(auVar1[1] == -1);
  auVar19[2] = -(auVar1[2] == -1);
  auVar19[3] = -(auVar1[3] == -1);
  auVar19[4] = -(auVar1[4] == -1);
  auVar19[5] = -(auVar1[5] == -1);
  auVar19[6] = -(auVar1[6] == -1);
  auVar19[7] = -(auVar1[7] == -1);
  auVar19[8] = -(auVar1[8] == -1);
  auVar19[9] = -(auVar1[9] == -1);
  auVar19[10] = -(auVar1[10] == -1);
  auVar19[0xb] = -(auVar1[0xb] == -1);
  auVar19[0xc] = -(auVar1[0xc] == -1);
  auVar19[0xd] = -(auVar1[0xd] == -1);
  auVar19[0xe] = -(auVar1[0xe] == -1);
  auVar19[0xf] = -(auVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 || (SUB161(auVar19 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar19 >> 0x17,0) & 1) != 0) || (SUB161(auVar19 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar19 >> 0x27,0) & 1) != 0) || (SUB161(auVar19 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar19 >> 0x37,0) & 1) != 0) || (SUB161(auVar19 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar19 >> 0x47,0) & 1) != 0) || (SUB161(auVar19 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar19 >> 0x57,0) & 1) != 0) || (SUB161(auVar19 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar19 >> 0x67,0) & 1) != 0) || (SUB161(auVar19 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar19 >> 0x77,0) & 1) != 0) || auVar19[0xf] < '\0') goto LAB_14118b12a;
  uVar10 = uVar10 + lVar12 + 0x10;
  lVar12 = lVar12 + 0x10;
  goto LAB_14118b085;
}

