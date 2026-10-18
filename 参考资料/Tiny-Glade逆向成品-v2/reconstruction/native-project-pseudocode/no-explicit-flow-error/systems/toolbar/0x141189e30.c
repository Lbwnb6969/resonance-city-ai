// VA 0x141189e30, PDB extent 2957 bytes
// toolbar::mei::config::TemplateView::with_slot<toolbar::menu::import::ui::closure_env$4,ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::config::TemplateView::with_slot<toolbar::menu::import::ui::closure_env$4,ref$<str$>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 2957 */

void pdb_141189e30(longlong param_1,longlong param_2,code *param_3,undefined8 param_4,char *param_5)

{
  byte *pbVar1;
  char *pcVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  ushort uVar13;
  longlong lVar14;
  byte bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  longlong lStack_138;
  code *pcStack_130;
  longlong *plStack_128;
  code *pcStack_120;
  undefined1 uStack_109;
  longlong lStack_108;
  code *pcStack_100;
  longlong *plStack_f8;
  longlong lStack_e8;
  code *pcStack_e0;
  longlong *plStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  longlong *plStack_90;
  undefined8 uStack_80;
  longlong lStack_78;
  undefined8 uStack_70;
  longlong lStack_68;
  code *pcStack_60;
  
  lVar11 = *(longlong *)(param_1 + 0x18);
  lStack_68 = param_2;
  pcStack_60 = param_3;
  lStack_e8 = pdb_140bbbcb0(&lStack_68);
  uVar8 = _UNK_14329c338;
  pcVar3 = _DAT_14329c330;
  pcStack_e0 = _DAT_14329c330;
  plStack_d8 = (longlong *)_UNK_14329c338;
  pcStack_e0 = (code *)pdb_1400affa0(&lStack_e8);
  lStack_e8 = lVar11;
  lVar6 = pdb_1400b0130(&lStack_e8);
  lVar11 = *(longlong *)(param_1 + 0x10);
  lStack_e8 = lVar6;
  if (*(longlong *)(lVar11 + 0x1c8) != 0) {
    uVar7 = pdb_1400af0a0(lVar11 + 0x1d0,&lStack_e8);
    bVar15 = (byte)(uVar7 >> 0x39);
    auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
    auVar16 = pshuflw(auVar16,auVar16,0);
    lVar10 = 0;
    while( true ) {
      uVar7 = uVar7 & *(ulonglong *)(lVar11 + 0x1b8);
      auVar34 = *(undefined1 (*) [16])(*(longlong *)(lVar11 + 0x1b0) + uVar7);
      auVar26[0] = -(auVar34[0] == auVar16[0]);
      auVar26[1] = -(auVar34[1] == auVar16[1]);
      auVar26[2] = -(auVar34[2] == auVar16[2]);
      auVar26[3] = -(auVar34[3] == auVar16[3]);
      auVar26[4] = -(auVar34[4] == auVar16[4]);
      auVar26[5] = -(auVar34[5] == auVar16[5]);
      auVar26[6] = -(auVar34[6] == auVar16[6]);
      auVar26[7] = -(auVar34[7] == auVar16[7]);
      auVar26[8] = -(auVar34[8] == auVar16[0]);
      auVar26[9] = -(auVar34[9] == auVar16[1]);
      auVar26[10] = -(auVar34[10] == auVar16[2]);
      auVar26[0xb] = -(auVar34[0xb] == auVar16[3]);
      auVar26[0xc] = -(auVar34[0xc] == auVar16[4]);
      auVar26[0xd] = -(auVar34[0xd] == auVar16[5]);
      auVar26[0xe] = -(auVar34[0xe] == auVar16[6]);
      auVar26[0xf] = -(auVar34[0xf] == auVar16[7]);
      uVar13 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe | (ushort)(auVar26[0xf] >> 7) << 0xf;
      uVar12 = (uint)uVar13;
      while (uVar13 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar12; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        if (lVar6 == *(longlong *)
                      (*(longlong *)(lVar11 + 0x1b0) + -0xd8 +
                      (uVar4 + uVar7 & *(ulonglong *)(lVar11 + 0x1b8)) * -0xd8)) {
          uStack_80 = *(undefined8 *)(param_1 + 0x10);
          uStack_70 = 0;
          lStack_78 = lVar6;
          pdb_1411743c0(&lStack_138,&uStack_80,&UNK_14329f920,4,&UNK_14329f3d5,9);
          lVar11 = lStack_138;
          lStack_e8 = lStack_138;
          pcStack_e0 = pcStack_130;
          plStack_d8 = plStack_128;
          if (*(longlong *)(lStack_138 + 0x1c8) == 0) goto LAB_14118a44d;
          uVar9 = pdb_1400af0a0(lStack_138 + 0x1d0,&pcStack_e0);
          lVar10 = lStack_e8;
          lVar6 = *(longlong *)(lVar11 + 0x1b0);
          uVar7 = *(ulonglong *)(lVar11 + 0x1b8);
          bVar15 = (byte)(uVar9 >> 0x39);
          auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
          auVar16 = pshuflw(auVar16,auVar16,0);
          lVar11 = 0;
          goto LAB_14118a2bd;
        }
        uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
      }
      auVar17[0] = -(auVar34[0] == -1);
      auVar17[1] = -(auVar34[1] == -1);
      auVar17[2] = -(auVar34[2] == -1);
      auVar17[3] = -(auVar34[3] == -1);
      auVar17[4] = -(auVar34[4] == -1);
      auVar17[5] = -(auVar34[5] == -1);
      auVar17[6] = -(auVar34[6] == -1);
      auVar17[7] = -(auVar34[7] == -1);
      auVar17[8] = -(auVar34[8] == -1);
      auVar17[9] = -(auVar34[9] == -1);
      auVar17[10] = -(auVar34[10] == -1);
      auVar17[0xb] = -(auVar34[0xb] == -1);
      auVar17[0xc] = -(auVar34[0xc] == -1);
      auVar17[0xd] = -(auVar34[0xd] == -1);
      auVar17[0xe] = -(auVar34[0xe] == -1);
      auVar17[0xf] = -(auVar34[0xf] == -1);
      if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 || (SUB161(auVar17 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar17 >> 0x17,0) & 1) != 0) || (SUB161(auVar17 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar17 >> 0x27,0) & 1) != 0) || (SUB161(auVar17 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar17 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar17 >> 0x3f,0) & 1) != 0) || (SUB161(auVar17 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar17 >> 0x4f,0) & 1) != 0) || (SUB161(auVar17 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar17 >> 0x5f,0) & 1) != 0) || (SUB161(auVar17 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar17 >> 0x6f,0) & 1) != 0) || (SUB161(auVar17 >> 0x77,0) & 1) != 0) ||
          auVar17[0xf] < '\0') break;
      uVar7 = uVar7 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
  if (*_DAT_143ca8e90 != 0) {
    pcStack_130 = pdb_1402ed420;
    pcStack_120 = pdb_1402ed420;
    lStack_e8 = 0;
    pcStack_e0 = (code *)&UNK_14329e688;
    plStack_d8 = (longlong *)0x14;
    uStack_d0 = 0;
    puStack_c8 = &UNK_14329e638;
    uStack_c0 = 0x28;
    uStack_b8 = 1;
    puStack_b0 = &UNK_14329e688;
    uStack_a8 = 0x14;
    uStack_a0 = 0xf100000001;
    puStack_98 = &UNK_14329f02f;
    plStack_90 = &lStack_138;
    lStack_138 = param_1;
    plStack_128 = &lStack_68;
    pdb_140f332f0(&uStack_109,&lStack_e8);
  }
  lVar11 = *(longlong *)(param_1 + 0x18);
  lStack_138 = param_2;
  pcStack_130 = param_3;
  lStack_e8 = pdb_140bbbcb0(&lStack_138);
  pcStack_e0 = pcVar3;
  plStack_d8 = (longlong *)uVar8;
  pcStack_e0 = (code *)pdb_1400affa0(&lStack_e8);
  lStack_e8 = lVar11;
  uVar8 = pdb_1400b0130(&lStack_e8);
  pdb_14072caa0(&uStack_80,(undefined8 *)(param_1 + 0x10),uVar8);
  pdb_1411743c0(&lStack_138,&uStack_80,&UNK_14329f920,4,&UNK_14329f3d5,9);
  lVar11 = lStack_138;
  lStack_e8 = lStack_138;
  pcStack_e0 = pcStack_130;
  plStack_d8 = plStack_128;
  if (*(longlong *)(lStack_138 + 0x1c8) != 0) {
    uVar9 = pdb_1400af0a0(lStack_138 + 0x1d0,&pcStack_e0);
    lVar10 = lStack_e8;
    lVar6 = *(longlong *)(lVar11 + 0x1b0);
    uVar7 = *(ulonglong *)(lVar11 + 0x1b8);
    bVar15 = (byte)(uVar9 >> 0x39);
    auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
    auVar16 = pshuflw(auVar16,auVar16,0);
    lVar11 = 0;
    while( true ) {
      uVar9 = uVar9 & uVar7;
      auVar34 = *(undefined1 (*) [16])(lVar6 + uVar9);
      auVar27[0] = -(auVar34[0] == auVar16[0]);
      auVar27[1] = -(auVar34[1] == auVar16[1]);
      auVar27[2] = -(auVar34[2] == auVar16[2]);
      auVar27[3] = -(auVar34[3] == auVar16[3]);
      auVar27[4] = -(auVar34[4] == auVar16[4]);
      auVar27[5] = -(auVar34[5] == auVar16[5]);
      auVar27[6] = -(auVar34[6] == auVar16[6]);
      auVar27[7] = -(auVar34[7] == auVar16[7]);
      auVar27[8] = -(auVar34[8] == auVar16[0]);
      auVar27[9] = -(auVar34[9] == auVar16[1]);
      auVar27[10] = -(auVar34[10] == auVar16[2]);
      auVar27[0xb] = -(auVar34[0xb] == auVar16[3]);
      auVar27[0xc] = -(auVar34[0xc] == auVar16[4]);
      auVar27[0xd] = -(auVar34[0xd] == auVar16[5]);
      auVar27[0xe] = -(auVar34[0xe] == auVar16[6]);
      auVar27[0xf] = -(auVar34[0xf] == auVar16[7]);
      uVar13 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe | (ushort)(auVar27[0xf] >> 7) << 0xf;
      uVar12 = (uint)uVar13;
      while (uVar13 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar12; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        lVar14 = (uVar4 + uVar9 & uVar7) * -0xd8;
        if (pcStack_e0 == *(code **)(lVar6 + -0xd8 + lVar14)) {
          lVar6 = lVar6 + lVar14;
          *(undefined1 (*) [16])(lVar6 + -0x9c) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(lVar6 + -0xa8) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(lVar6 + -0xb8) = (undefined1  [16])0x0;
          *(undefined8 *)(lVar6 + -0x8c) = 0x42480000;
          *(undefined4 *)(lVar6 + -0x84) = 0x42480000;
          *(undefined8 *)(lVar6 + -0x80) = 0;
          *(undefined8 *)(lVar6 + -0x7a) = 0;
          *(undefined2 *)(lVar6 + -0x72) = 0x102;
          plStack_f8 = plStack_d8;
          lStack_108 = lStack_e8;
          pcStack_100 = pcStack_e0;
          if (*(longlong *)(lStack_e8 + 0x1c8) == 0) goto LAB_14118a7b0;
          uVar9 = pdb_1400af0a0(lStack_e8 + 0x1d0,&pcStack_100);
          lVar11 = *(longlong *)(lVar10 + 0x1b0);
          uVar7 = *(ulonglong *)(lVar10 + 0x1b8);
          bVar15 = (byte)(uVar9 >> 0x39);
          auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
          auVar16 = pshuflw(auVar16,auVar16,0);
          lVar6 = 0;
          goto LAB_14118a3e4;
        }
        uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
      }
      auVar18[0] = -(auVar34[0] == -1);
      auVar18[1] = -(auVar34[1] == -1);
      auVar18[2] = -(auVar34[2] == -1);
      auVar18[3] = -(auVar34[3] == -1);
      auVar18[4] = -(auVar34[4] == -1);
      auVar18[5] = -(auVar34[5] == -1);
      auVar18[6] = -(auVar34[6] == -1);
      auVar18[7] = -(auVar34[7] == -1);
      auVar18[8] = -(auVar34[8] == -1);
      auVar18[9] = -(auVar34[9] == -1);
      auVar18[10] = -(auVar34[10] == -1);
      auVar18[0xb] = -(auVar34[0xb] == -1);
      auVar18[0xc] = -(auVar34[0xc] == -1);
      auVar18[0xd] = -(auVar34[0xd] == -1);
      auVar18[0xe] = -(auVar34[0xe] == -1);
      auVar18[0xf] = -(auVar34[0xf] == -1);
      if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar18 >> 0x17,0) & 1) != 0) || (SUB161(auVar18 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar18 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar18 >> 0x3f,0) & 1) != 0) || (SUB161(auVar18 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar18 >> 0x4f,0) & 1) != 0) || (SUB161(auVar18 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar18 >> 0x5f,0) & 1) != 0) || (SUB161(auVar18 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar18 >> 0x6f,0) & 1) != 0) || (SUB161(auVar18 >> 0x77,0) & 1) != 0) ||
          auVar18[0xf] < '\0') break;
      uVar9 = uVar9 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
LAB_14118a44d:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142fa6b30);
LAB_14118a2bd:
  uVar9 = uVar9 & uVar7;
  auVar34 = *(undefined1 (*) [16])(lVar6 + uVar9);
  auVar28[0] = -(auVar34[0] == auVar16[0]);
  auVar28[1] = -(auVar34[1] == auVar16[1]);
  auVar28[2] = -(auVar34[2] == auVar16[2]);
  auVar28[3] = -(auVar34[3] == auVar16[3]);
  auVar28[4] = -(auVar34[4] == auVar16[4]);
  auVar28[5] = -(auVar34[5] == auVar16[5]);
  auVar28[6] = -(auVar34[6] == auVar16[6]);
  auVar28[7] = -(auVar34[7] == auVar16[7]);
  auVar28[8] = -(auVar34[8] == auVar16[0]);
  auVar28[9] = -(auVar34[9] == auVar16[1]);
  auVar28[10] = -(auVar34[10] == auVar16[2]);
  auVar28[0xb] = -(auVar34[0xb] == auVar16[3]);
  auVar28[0xc] = -(auVar34[0xc] == auVar16[4]);
  auVar28[0xd] = -(auVar34[0xd] == auVar16[5]);
  auVar28[0xe] = -(auVar34[0xe] == auVar16[6]);
  auVar28[0xf] = -(auVar34[0xf] == auVar16[7]);
  uVar13 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe | (ushort)(auVar28[0xf] >> 7) << 0xf;
  uVar12 = (uint)uVar13;
  while (uVar13 != 0) {
    uVar4 = 0;
    for (uVar5 = uVar12; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    lVar14 = (uVar4 + uVar9 & uVar7) * -0xd8;
    if (pcStack_e0 == *(code **)(lVar6 + -0xd8 + lVar14)) {
      lVar6 = lVar6 + lVar14;
      *(undefined1 (*) [16])(lVar6 + -0x9c) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(lVar6 + -0xa8) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(lVar6 + -0xb8) = (undefined1  [16])0x0;
      *(undefined8 *)(lVar6 + -0x8c) = 0x42480000;
      *(undefined4 *)(lVar6 + -0x84) = 0x42480000;
      *(undefined8 *)(lVar6 + -0x80) = 0;
      *(undefined8 *)(lVar6 + -0x7a) = 0;
      *(undefined2 *)(lVar6 + -0x72) = 0x102;
      plStack_f8 = plStack_d8;
      lStack_108 = lStack_e8;
      pcStack_100 = pcStack_e0;
      if (*(longlong *)(lStack_e8 + 0x1c8) == 0) goto LAB_14118a7b0;
      uVar9 = pdb_1400af0a0(lStack_e8 + 0x1d0,&pcStack_100);
      lVar11 = *(longlong *)(lVar10 + 0x1b0);
      uVar7 = *(ulonglong *)(lVar10 + 0x1b8);
      bVar15 = (byte)(uVar9 >> 0x39);
      auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
      auVar16 = pshuflw(auVar16,auVar16,0);
      lVar6 = 0;
      goto LAB_14118a515;
    }
    uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
    uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
  }
  auVar19[0] = -(auVar34[0] == -1);
  auVar19[1] = -(auVar34[1] == -1);
  auVar19[2] = -(auVar34[2] == -1);
  auVar19[3] = -(auVar34[3] == -1);
  auVar19[4] = -(auVar34[4] == -1);
  auVar19[5] = -(auVar34[5] == -1);
  auVar19[6] = -(auVar34[6] == -1);
  auVar19[7] = -(auVar34[7] == -1);
  auVar19[8] = -(auVar34[8] == -1);
  auVar19[9] = -(auVar34[9] == -1);
  auVar19[10] = -(auVar34[10] == -1);
  auVar19[0xb] = -(auVar34[0xb] == -1);
  auVar19[0xc] = -(auVar34[0xc] == -1);
  auVar19[0xd] = -(auVar34[0xd] == -1);
  auVar19[0xe] = -(auVar34[0xe] == -1);
  auVar19[0xf] = -(auVar34[0xf] == -1);
  if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 || (SUB161(auVar19 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar19 >> 0x17,0) & 1) != 0) || (SUB161(auVar19 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar19 >> 0x27,0) & 1) != 0) || (SUB161(auVar19 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar19 >> 0x37,0) & 1) != 0) || (SUB161(auVar19 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar19 >> 0x47,0) & 1) != 0) || (SUB161(auVar19 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar19 >> 0x57,0) & 1) != 0) || (SUB161(auVar19 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar19 >> 0x67,0) & 1) != 0) || (SUB161(auVar19 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar19 >> 0x77,0) & 1) != 0) || auVar19[0xf] < '\0') goto LAB_14118a44d;
  uVar9 = uVar9 + lVar11 + 0x10;
  lVar11 = lVar11 + 0x10;
  goto LAB_14118a2bd;
LAB_14118a515:
  uVar9 = uVar9 & uVar7;
  auVar34 = *(undefined1 (*) [16])(lVar11 + uVar9);
  auVar30[0] = -(auVar34[0] == auVar16[0]);
  auVar30[1] = -(auVar34[1] == auVar16[1]);
  auVar30[2] = -(auVar34[2] == auVar16[2]);
  auVar30[3] = -(auVar34[3] == auVar16[3]);
  auVar30[4] = -(auVar34[4] == auVar16[4]);
  auVar30[5] = -(auVar34[5] == auVar16[5]);
  auVar30[6] = -(auVar34[6] == auVar16[6]);
  auVar30[7] = -(auVar34[7] == auVar16[7]);
  auVar30[8] = -(auVar34[8] == auVar16[0]);
  auVar30[9] = -(auVar34[9] == auVar16[1]);
  auVar30[10] = -(auVar34[10] == auVar16[2]);
  auVar30[0xb] = -(auVar34[0xb] == auVar16[3]);
  auVar30[0xc] = -(auVar34[0xc] == auVar16[4]);
  auVar30[0xd] = -(auVar34[0xd] == auVar16[5]);
  auVar30[0xe] = -(auVar34[0xe] == auVar16[6]);
  auVar30[0xf] = -(auVar34[0xf] == auVar16[7]);
  uVar13 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe | (ushort)(auVar30[0xf] >> 7) << 0xf;
  uVar12 = (uint)uVar13;
  while (uVar13 != 0) {
    uVar4 = 0;
    for (uVar5 = uVar12; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    lVar10 = (uVar4 + uVar9 & uVar7) * -0xd8;
    if (pcStack_100 == *(code **)(lVar11 + -0xd8 + lVar10)) {
      if (*param_5 == '\x01') {
        pbVar1 = (byte *)(lVar11 + lVar10 + -5);
        *pbVar1 = *pbVar1 | 8;
      }
      plStack_128 = plStack_f8;
      lStack_138 = lStack_108;
      pcStack_130 = pcStack_100;
      lVar6 = pdb_14116e020(&lStack_138);
      lVar11 = lStack_138;
      *(undefined1 *)(lVar6 + 0x44) = 0x14;
      plStack_d8 = plStack_128;
      lStack_e8 = lStack_138;
      pcStack_e0 = pcStack_130;
      if (*(longlong *)(lStack_138 + 0x1c8) == 0) goto LAB_14118a7b0;
      uVar9 = pdb_1400af0a0(lStack_138 + 0x1d0,&pcStack_e0);
      lVar10 = lStack_e8;
      lVar6 = *(longlong *)(lVar11 + 0x1b0);
      uVar7 = *(ulonglong *)(lVar11 + 0x1b8);
      bVar15 = (byte)(uVar9 >> 0x39);
      auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
      auVar16 = pshuflw(auVar16,auVar16,0);
      lVar11 = 0;
      goto LAB_14118a74b;
    }
    uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
    uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
  }
  auVar21[0] = -(auVar34[0] == -1);
  auVar21[1] = -(auVar34[1] == -1);
  auVar21[2] = -(auVar34[2] == -1);
  auVar21[3] = -(auVar34[3] == -1);
  auVar21[4] = -(auVar34[4] == -1);
  auVar21[5] = -(auVar34[5] == -1);
  auVar21[6] = -(auVar34[6] == -1);
  auVar21[7] = -(auVar34[7] == -1);
  auVar21[8] = -(auVar34[8] == -1);
  auVar21[9] = -(auVar34[9] == -1);
  auVar21[10] = -(auVar34[10] == -1);
  auVar21[0xb] = -(auVar34[0xb] == -1);
  auVar21[0xc] = -(auVar34[0xc] == -1);
  auVar21[0xd] = -(auVar34[0xd] == -1);
  auVar21[0xe] = -(auVar34[0xe] == -1);
  auVar21[0xf] = -(auVar34[0xf] == -1);
  if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 || (SUB161(auVar21 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar21 >> 0x17,0) & 1) != 0) || (SUB161(auVar21 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar21 >> 0x27,0) & 1) != 0) || (SUB161(auVar21 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar21 >> 0x37,0) & 1) != 0) || (SUB161(auVar21 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar21 >> 0x47,0) & 1) != 0) || (SUB161(auVar21 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar21 >> 0x57,0) & 1) != 0) || (SUB161(auVar21 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar21 >> 0x67,0) & 1) != 0) || (SUB161(auVar21 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar21 >> 0x77,0) & 1) != 0) || auVar21[0xf] < '\0') goto LAB_14118a7b0;
  uVar9 = uVar9 + lVar6 + 0x10;
  lVar6 = lVar6 + 0x10;
  goto LAB_14118a515;
LAB_14118a74b:
  uVar9 = uVar9 & uVar7;
  auVar34 = *(undefined1 (*) [16])(lVar6 + uVar9);
  auVar32[0] = -(auVar34[0] == auVar16[0]);
  auVar32[1] = -(auVar34[1] == auVar16[1]);
  auVar32[2] = -(auVar34[2] == auVar16[2]);
  auVar32[3] = -(auVar34[3] == auVar16[3]);
  auVar32[4] = -(auVar34[4] == auVar16[4]);
  auVar32[5] = -(auVar34[5] == auVar16[5]);
  auVar32[6] = -(auVar34[6] == auVar16[6]);
  auVar32[7] = -(auVar34[7] == auVar16[7]);
  auVar32[8] = -(auVar34[8] == auVar16[0]);
  auVar32[9] = -(auVar34[9] == auVar16[1]);
  auVar32[10] = -(auVar34[10] == auVar16[2]);
  auVar32[0xb] = -(auVar34[0xb] == auVar16[3]);
  auVar32[0xc] = -(auVar34[0xc] == auVar16[4]);
  auVar32[0xd] = -(auVar34[0xd] == auVar16[5]);
  auVar32[0xe] = -(auVar34[0xe] == auVar16[6]);
  auVar32[0xf] = -(auVar34[0xf] == auVar16[7]);
  uVar13 = (ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe | (ushort)(auVar32[0xf] >> 7) << 0xf;
  uVar12 = (uint)uVar13;
  while (uVar13 != 0) {
    uVar4 = 0;
    for (uVar5 = uVar12; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    lVar14 = (uVar4 + uVar9 & uVar7) * -0xd8;
    if (pcStack_e0 == *(code **)(lVar6 + -0xd8 + lVar14)) {
      *(undefined2 *)(lVar6 + lVar14 + -8) = 0x900;
      plStack_128 = plStack_d8;
      lStack_138 = lStack_e8;
      pcStack_130 = pcStack_e0;
      if (*(longlong *)(lStack_e8 + 0x1c8) == 0) goto LAB_14118a9a4;
      uVar9 = pdb_1400af0a0(lStack_e8 + 0x1d0,&pcStack_130);
      lVar11 = *(longlong *)(lVar10 + 0x1b0);
      uVar7 = *(ulonglong *)(lVar10 + 0x1b8);
      bVar15 = (byte)(uVar9 >> 0x39);
      auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
      auVar16 = pshuflw(auVar16,auVar16,0);
      lVar6 = 0;
      goto LAB_14118a91d;
    }
    uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
    uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
  }
  auVar23[0] = -(auVar34[0] == -1);
  auVar23[1] = -(auVar34[1] == -1);
  auVar23[2] = -(auVar34[2] == -1);
  auVar23[3] = -(auVar34[3] == -1);
  auVar23[4] = -(auVar34[4] == -1);
  auVar23[5] = -(auVar34[5] == -1);
  auVar23[6] = -(auVar34[6] == -1);
  auVar23[7] = -(auVar34[7] == -1);
  auVar23[8] = -(auVar34[8] == -1);
  auVar23[9] = -(auVar34[9] == -1);
  auVar23[10] = -(auVar34[10] == -1);
  auVar23[0xb] = -(auVar34[0xb] == -1);
  auVar23[0xc] = -(auVar34[0xc] == -1);
  auVar23[0xd] = -(auVar34[0xd] == -1);
  auVar23[0xe] = -(auVar34[0xe] == -1);
  auVar23[0xf] = -(auVar34[0xf] == -1);
  if ((((((((((((((((SUB161(auVar23 >> 7,0) & 1) != 0 || (SUB161(auVar23 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar23 >> 0x17,0) & 1) != 0) || (SUB161(auVar23 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar23 >> 0x27,0) & 1) != 0) || (SUB161(auVar23 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar23 >> 0x37,0) & 1) != 0) || (SUB161(auVar23 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar23 >> 0x47,0) & 1) != 0) || (SUB161(auVar23 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar23 >> 0x57,0) & 1) != 0) || (SUB161(auVar23 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar23 >> 0x67,0) & 1) != 0) || (SUB161(auVar23 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar23 >> 0x77,0) & 1) != 0) || auVar23[0xf] < '\0') goto LAB_14118a7b0;
  uVar9 = uVar9 + lVar11 + 0x10;
  lVar11 = lVar11 + 0x10;
  goto LAB_14118a74b;
LAB_14118a91d:
  uVar9 = uVar9 & uVar7;
  pcVar2 = (char *)(lVar11 + uVar9);
  auVar34[0] = -(*pcVar2 == auVar16[0]);
  auVar34[1] = -(pcVar2[1] == auVar16[1]);
  auVar34[2] = -(pcVar2[2] == auVar16[2]);
  auVar34[3] = -(pcVar2[3] == auVar16[3]);
  auVar34[4] = -(pcVar2[4] == auVar16[4]);
  auVar34[5] = -(pcVar2[5] == auVar16[5]);
  auVar34[6] = -(pcVar2[6] == auVar16[6]);
  auVar34[7] = -(pcVar2[7] == auVar16[7]);
  auVar34[8] = -(pcVar2[8] == auVar16[0]);
  auVar34[9] = -(pcVar2[9] == auVar16[1]);
  auVar34[10] = -(pcVar2[10] == auVar16[2]);
  auVar34[0xb] = -(pcVar2[0xb] == auVar16[3]);
  auVar34[0xc] = -(pcVar2[0xc] == auVar16[4]);
  auVar34[0xd] = -(pcVar2[0xd] == auVar16[5]);
  auVar34[0xe] = -(pcVar2[0xe] == auVar16[6]);
  auVar34[0xf] = -(pcVar2[0xf] == auVar16[7]);
  uVar13 = (ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe | (ushort)(auVar34[0xf] >> 7) << 0xf;
  uVar12 = (uint)uVar13;
  while (uVar13 != 0) {
    uVar4 = 0;
    for (uVar5 = uVar12; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    lVar10 = (uVar4 + uVar9 & uVar7) * -0xd8;
    if (pcStack_130 == *(code **)(lVar11 + -0xd8 + lVar10)) goto LAB_14118a97e;
    uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
    uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
  }
  auVar25[0] = -(*pcVar2 == -1);
  auVar25[1] = -(pcVar2[1] == -1);
  auVar25[2] = -(pcVar2[2] == -1);
  auVar25[3] = -(pcVar2[3] == -1);
  auVar25[4] = -(pcVar2[4] == -1);
  auVar25[5] = -(pcVar2[5] == -1);
  auVar25[6] = -(pcVar2[6] == -1);
  auVar25[7] = -(pcVar2[7] == -1);
  auVar25[8] = -(pcVar2[8] == -1);
  auVar25[9] = -(pcVar2[9] == -1);
  auVar25[10] = -(pcVar2[10] == -1);
  auVar25[0xb] = -(pcVar2[0xb] == -1);
  auVar25[0xc] = -(pcVar2[0xc] == -1);
  auVar25[0xd] = -(pcVar2[0xd] == -1);
  auVar25[0xe] = -(pcVar2[0xe] == -1);
  auVar25[0xf] = -(pcVar2[0xf] == -1);
  if ((((((((((((((((SUB161(auVar25 >> 7,0) & 1) != 0 || (SUB161(auVar25 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar25 >> 0x17,0) & 1) != 0) || (SUB161(auVar25 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar25 >> 0x27,0) & 1) != 0) || (SUB161(auVar25 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar25 >> 0x37,0) & 1) != 0) || (SUB161(auVar25 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar25 >> 0x47,0) & 1) != 0) || (SUB161(auVar25 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar25 >> 0x57,0) & 1) != 0) || (SUB161(auVar25 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar25 >> 0x67,0) & 1) != 0) || (SUB161(auVar25 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar25 >> 0x77,0) & 1) != 0) || auVar25[0xf] < '\0') goto LAB_14118a9a4;
  uVar9 = uVar9 + lVar6 + 0x10;
  lVar6 = lVar6 + 0x10;
  goto LAB_14118a91d;
LAB_14118a3e4:
  uVar9 = uVar9 & uVar7;
  auVar34 = *(undefined1 (*) [16])(lVar11 + uVar9);
  auVar29[0] = -(auVar34[0] == auVar16[0]);
  auVar29[1] = -(auVar34[1] == auVar16[1]);
  auVar29[2] = -(auVar34[2] == auVar16[2]);
  auVar29[3] = -(auVar34[3] == auVar16[3]);
  auVar29[4] = -(auVar34[4] == auVar16[4]);
  auVar29[5] = -(auVar34[5] == auVar16[5]);
  auVar29[6] = -(auVar34[6] == auVar16[6]);
  auVar29[7] = -(auVar34[7] == auVar16[7]);
  auVar29[8] = -(auVar34[8] == auVar16[0]);
  auVar29[9] = -(auVar34[9] == auVar16[1]);
  auVar29[10] = -(auVar34[10] == auVar16[2]);
  auVar29[0xb] = -(auVar34[0xb] == auVar16[3]);
  auVar29[0xc] = -(auVar34[0xc] == auVar16[4]);
  auVar29[0xd] = -(auVar34[0xd] == auVar16[5]);
  auVar29[0xe] = -(auVar34[0xe] == auVar16[6]);
  auVar29[0xf] = -(auVar34[0xf] == auVar16[7]);
  uVar13 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe | (ushort)(auVar29[0xf] >> 7) << 0xf;
  uVar12 = (uint)uVar13;
  while (uVar13 != 0) {
    uVar4 = 0;
    for (uVar5 = uVar12; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    lVar10 = (uVar4 + uVar9 & uVar7) * -0xd8;
    if (pcStack_100 == *(code **)(lVar11 + -0xd8 + lVar10)) {
      if (*param_5 == '\x01') {
        pbVar1 = (byte *)(lVar11 + lVar10 + -5);
        *pbVar1 = *pbVar1 | 8;
      }
      plStack_128 = plStack_f8;
      lStack_138 = lStack_108;
      pcStack_130 = pcStack_100;
      lVar6 = pdb_14116e020(&lStack_138);
      lVar11 = lStack_138;
      *(undefined1 *)(lVar6 + 0x44) = 0x14;
      plStack_d8 = plStack_128;
      lStack_e8 = lStack_138;
      pcStack_e0 = pcStack_130;
      if (*(longlong *)(lStack_138 + 0x1c8) == 0) goto LAB_14118a7b0;
      uVar9 = pdb_1400af0a0(lStack_138 + 0x1d0,&pcStack_e0);
      lVar10 = lStack_e8;
      lVar6 = *(longlong *)(lVar11 + 0x1b0);
      uVar7 = *(ulonglong *)(lVar11 + 0x1b8);
      bVar15 = (byte)(uVar9 >> 0x39);
      auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
      auVar16 = pshuflw(auVar16,auVar16,0);
      lVar11 = 0;
      goto LAB_14118a631;
    }
    uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
    uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
  }
  auVar20[0] = -(auVar34[0] == -1);
  auVar20[1] = -(auVar34[1] == -1);
  auVar20[2] = -(auVar34[2] == -1);
  auVar20[3] = -(auVar34[3] == -1);
  auVar20[4] = -(auVar34[4] == -1);
  auVar20[5] = -(auVar34[5] == -1);
  auVar20[6] = -(auVar34[6] == -1);
  auVar20[7] = -(auVar34[7] == -1);
  auVar20[8] = -(auVar34[8] == -1);
  auVar20[9] = -(auVar34[9] == -1);
  auVar20[10] = -(auVar34[10] == -1);
  auVar20[0xb] = -(auVar34[0xb] == -1);
  auVar20[0xc] = -(auVar34[0xc] == -1);
  auVar20[0xd] = -(auVar34[0xd] == -1);
  auVar20[0xe] = -(auVar34[0xe] == -1);
  auVar20[0xf] = -(auVar34[0xf] == -1);
  if ((((((((((((((((SUB161(auVar20 >> 7,0) & 1) != 0 || (SUB161(auVar20 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar20 >> 0x17,0) & 1) != 0) || (SUB161(auVar20 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar20 >> 0x27,0) & 1) != 0) || (SUB161(auVar20 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar20 >> 0x37,0) & 1) != 0) || (SUB161(auVar20 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar20 >> 0x47,0) & 1) != 0) || (SUB161(auVar20 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar20 >> 0x57,0) & 1) != 0) || (SUB161(auVar20 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar20 >> 0x67,0) & 1) != 0) || (SUB161(auVar20 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar20 >> 0x77,0) & 1) != 0) || auVar20[0xf] < '\0') goto LAB_14118a7b0;
  uVar9 = uVar9 + lVar6 + 0x10;
  lVar6 = lVar6 + 0x10;
  goto LAB_14118a3e4;
LAB_14118a631:
  uVar9 = uVar9 & uVar7;
  auVar34 = *(undefined1 (*) [16])(lVar6 + uVar9);
  auVar31[0] = -(auVar34[0] == auVar16[0]);
  auVar31[1] = -(auVar34[1] == auVar16[1]);
  auVar31[2] = -(auVar34[2] == auVar16[2]);
  auVar31[3] = -(auVar34[3] == auVar16[3]);
  auVar31[4] = -(auVar34[4] == auVar16[4]);
  auVar31[5] = -(auVar34[5] == auVar16[5]);
  auVar31[6] = -(auVar34[6] == auVar16[6]);
  auVar31[7] = -(auVar34[7] == auVar16[7]);
  auVar31[8] = -(auVar34[8] == auVar16[0]);
  auVar31[9] = -(auVar34[9] == auVar16[1]);
  auVar31[10] = -(auVar34[10] == auVar16[2]);
  auVar31[0xb] = -(auVar34[0xb] == auVar16[3]);
  auVar31[0xc] = -(auVar34[0xc] == auVar16[4]);
  auVar31[0xd] = -(auVar34[0xd] == auVar16[5]);
  auVar31[0xe] = -(auVar34[0xe] == auVar16[6]);
  auVar31[0xf] = -(auVar34[0xf] == auVar16[7]);
  uVar13 = (ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe | (ushort)(auVar31[0xf] >> 7) << 0xf;
  uVar12 = (uint)uVar13;
  while (uVar13 != 0) {
    uVar4 = 0;
    for (uVar5 = uVar12; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    lVar14 = (uVar4 + uVar9 & uVar7) * -0xd8;
    if (pcStack_e0 == *(code **)(lVar6 + -0xd8 + lVar14)) {
      *(undefined2 *)(lVar6 + lVar14 + -8) = 0x900;
      plStack_128 = plStack_d8;
      lStack_138 = lStack_e8;
      pcStack_130 = pcStack_e0;
      if (*(longlong *)(lStack_e8 + 0x1c8) == 0) goto LAB_14118a9a4;
      uVar9 = pdb_1400af0a0(lStack_e8 + 0x1d0,&pcStack_130);
      lVar11 = *(longlong *)(lVar10 + 0x1b0);
      uVar7 = *(ulonglong *)(lVar10 + 0x1b8);
      bVar15 = (byte)(uVar9 >> 0x39);
      auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
      auVar16 = pshuflw(auVar16,auVar16,0);
      lVar6 = 0;
      goto LAB_14118a839;
    }
    uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
    uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
  }
  auVar22[0] = -(auVar34[0] == -1);
  auVar22[1] = -(auVar34[1] == -1);
  auVar22[2] = -(auVar34[2] == -1);
  auVar22[3] = -(auVar34[3] == -1);
  auVar22[4] = -(auVar34[4] == -1);
  auVar22[5] = -(auVar34[5] == -1);
  auVar22[6] = -(auVar34[6] == -1);
  auVar22[7] = -(auVar34[7] == -1);
  auVar22[8] = -(auVar34[8] == -1);
  auVar22[9] = -(auVar34[9] == -1);
  auVar22[10] = -(auVar34[10] == -1);
  auVar22[0xb] = -(auVar34[0xb] == -1);
  auVar22[0xc] = -(auVar34[0xc] == -1);
  auVar22[0xd] = -(auVar34[0xd] == -1);
  auVar22[0xe] = -(auVar34[0xe] == -1);
  auVar22[0xf] = -(auVar34[0xf] == -1);
  if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) != 0 || (SUB161(auVar22 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar22 >> 0x17,0) & 1) != 0) || (SUB161(auVar22 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar22 >> 0x27,0) & 1) != 0) || (SUB161(auVar22 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar22 >> 0x37,0) & 1) != 0) || (SUB161(auVar22 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar22 >> 0x47,0) & 1) != 0) || (SUB161(auVar22 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar22 >> 0x57,0) & 1) != 0) || (SUB161(auVar22 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar22 >> 0x67,0) & 1) != 0) || (SUB161(auVar22 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar22 >> 0x77,0) & 1) != 0) || auVar22[0xf] < '\0') {
LAB_14118a7b0:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6b48);
  }
  uVar9 = uVar9 + lVar11 + 0x10;
  lVar11 = lVar11 + 0x10;
  goto LAB_14118a631;
LAB_14118a839:
  uVar9 = uVar9 & uVar7;
  pcVar2 = (char *)(lVar11 + uVar9);
  auVar33[0] = -(*pcVar2 == auVar16[0]);
  auVar33[1] = -(pcVar2[1] == auVar16[1]);
  auVar33[2] = -(pcVar2[2] == auVar16[2]);
  auVar33[3] = -(pcVar2[3] == auVar16[3]);
  auVar33[4] = -(pcVar2[4] == auVar16[4]);
  auVar33[5] = -(pcVar2[5] == auVar16[5]);
  auVar33[6] = -(pcVar2[6] == auVar16[6]);
  auVar33[7] = -(pcVar2[7] == auVar16[7]);
  auVar33[8] = -(pcVar2[8] == auVar16[0]);
  auVar33[9] = -(pcVar2[9] == auVar16[1]);
  auVar33[10] = -(pcVar2[10] == auVar16[2]);
  auVar33[0xb] = -(pcVar2[0xb] == auVar16[3]);
  auVar33[0xc] = -(pcVar2[0xc] == auVar16[4]);
  auVar33[0xd] = -(pcVar2[0xd] == auVar16[5]);
  auVar33[0xe] = -(pcVar2[0xe] == auVar16[6]);
  auVar33[0xf] = -(pcVar2[0xf] == auVar16[7]);
  uVar13 = (ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe | (ushort)(auVar33[0xf] >> 7) << 0xf;
  uVar12 = (uint)uVar13;
  while (uVar13 != 0) {
    uVar4 = 0;
    for (uVar5 = uVar12; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    lVar10 = (uVar4 + uVar9 & uVar7) * -0xd8;
    if (pcStack_130 == *(code **)(lVar11 + -0xd8 + lVar10)) {
LAB_14118a97e:
      *(bool *)param_4 = (*(byte *)(lVar11 + lVar10 + -6) & 0x30) != 0;
      return;
    }
    uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
    uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
  }
  auVar24[0] = -(*pcVar2 == -1);
  auVar24[1] = -(pcVar2[1] == -1);
  auVar24[2] = -(pcVar2[2] == -1);
  auVar24[3] = -(pcVar2[3] == -1);
  auVar24[4] = -(pcVar2[4] == -1);
  auVar24[5] = -(pcVar2[5] == -1);
  auVar24[6] = -(pcVar2[6] == -1);
  auVar24[7] = -(pcVar2[7] == -1);
  auVar24[8] = -(pcVar2[8] == -1);
  auVar24[9] = -(pcVar2[9] == -1);
  auVar24[10] = -(pcVar2[10] == -1);
  auVar24[0xb] = -(pcVar2[0xb] == -1);
  auVar24[0xc] = -(pcVar2[0xc] == -1);
  auVar24[0xd] = -(pcVar2[0xd] == -1);
  auVar24[0xe] = -(pcVar2[0xe] == -1);
  auVar24[0xf] = -(pcVar2[0xf] == -1);
  if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar24 >> 0x17,0) & 1) != 0) || (SUB161(auVar24 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar24 >> 0x27,0) & 1) != 0) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar24 >> 0x37,0) & 1) != 0) || (SUB161(auVar24 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar24 >> 0x47,0) & 1) != 0) || (SUB161(auVar24 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar24 >> 0x57,0) & 1) != 0) || (SUB161(auVar24 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar24 >> 0x67,0) & 1) != 0) || (SUB161(auVar24 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar24 >> 0x77,0) & 1) != 0) || auVar24[0xf] < '\0') {
LAB_14118a9a4:
    pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar9 = uVar9 + lVar6 + 0x10;
  lVar6 = lVar6 + 0x10;
  goto LAB_14118a839;
}

