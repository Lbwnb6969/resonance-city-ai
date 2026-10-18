// VA 0x141170a10, PDB extent 1779 bytes
// toolbar::mei::core::NodeContext::with<toolbar::menu::credits::ui::closure_env$1>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::core::NodeContext::with<toolbar::menu::credits::ui::closure_env$1>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
   Extent: 1779 */

undefined8 * pdb_141170a10(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  char *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong ****pppplVar5;
  longlong ****pppplVar6;
  undefined8 *puVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  longlong *****ppppplVar11;
  longlong *****ppppplVar12;
  char cVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  longlong lVar18;
  uint uVar19;
  ushort uVar20;
  longlong lVar21;
  byte bVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  ulonglong uStack_158;
  byte *pbStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  longlong ****pppplStack_100;
  longlong lStack_b8;
  longlong ****pppplStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong ****pppplStack_88;
  longlong **pplStack_80;
  undefined8 uStack_78;
  longlong ****pppplStack_68;
  longlong **pplStack_60;
  undefined8 uStack_58;
  undefined1 uStack_41;
  byte *pbStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  uVar17 = 0x15;
  uVar14 = pdb_140dc6290(&UNK_14329ce0f,0x15);
  pdb_140f5f4f0(&uStack_158,uVar14,uVar17);
  pbStack_40 = pbStack_150;
  pdb_1407339e0(&lStack_b8,param_2,pbStack_150,uStack_148);
  lVar18 = lStack_b8;
  if (*(longlong *)(lStack_b8 + 0x1c8) == 0) {
LAB_141170c8a:
    pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
LAB_141170fe3:
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
  uVar15 = pdb_1400af0a0(lStack_b8 + 0x1d0,&pppplStack_b0);
  lVar3 = *(longlong *)(lVar18 + 0x1b0);
  uVar16 = *(ulonglong *)(lVar18 + 0x1b8);
  bVar22 = (byte)(uVar15 >> 0x39);
  auVar23 = ZEXT216(CONCAT11(bVar22,bVar22));
  auVar23 = pshuflw(auVar23,auVar23,0);
  lVar18 = 0;
  do {
    uVar15 = uVar15 & uVar16;
    pcVar2 = (char *)(lVar3 + uVar15);
    auVar27[0] = -(*pcVar2 == auVar23[0]);
    auVar27[1] = -(pcVar2[1] == auVar23[1]);
    auVar27[2] = -(pcVar2[2] == auVar23[2]);
    auVar27[3] = -(pcVar2[3] == auVar23[3]);
    auVar27[4] = -(pcVar2[4] == auVar23[4]);
    auVar27[5] = -(pcVar2[5] == auVar23[5]);
    auVar27[6] = -(pcVar2[6] == auVar23[6]);
    auVar27[7] = -(pcVar2[7] == auVar23[7]);
    auVar27[8] = -(pcVar2[8] == auVar23[0]);
    auVar27[9] = -(pcVar2[9] == auVar23[1]);
    auVar27[10] = -(pcVar2[10] == auVar23[2]);
    auVar27[0xb] = -(pcVar2[0xb] == auVar23[3]);
    auVar27[0xc] = -(pcVar2[0xc] == auVar23[4]);
    auVar27[0xd] = -(pcVar2[0xd] == auVar23[5]);
    auVar27[0xe] = -(pcVar2[0xe] == auVar23[6]);
    auVar27[0xf] = -(pcVar2[0xf] == auVar23[7]);
    uVar20 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
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
    uVar19 = (uint)uVar20;
    while (uVar20 != 0) {
      uVar9 = 0;
      for (uVar10 = uVar19; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
        uVar9 = uVar9 + 1;
      }
      lVar21 = (uVar9 + uVar15 & uVar16) * -0xd8;
      if ((longlong *****)pppplStack_b0 == *(longlong ******)(lVar3 + -0xd8 + lVar21)) {
        bVar22 = *(byte *)(lVar3 + lVar21 + -6);
        if (uStack_158 != 0) {
          pub_1406abac0(pbStack_40,uStack_158,1);
        }
        if ((bVar22 & 0x30) != 0) {
          uVar14 = *param_3;
          cVar13 = pdb_140a430e0();
          plVar4 = (longlong *)param_3[1];
          if ((cVar13 == '\0') || (!SBORROW8(0,*(longlong *)*plVar4))) {
LAB_141170c62:
            pppplVar5 = *(longlong *****)*plVar4;
            ppppplVar12 = (longlong *****)*plVar4;
            ppppplVar11 = (longlong *****)pppplStack_68;
          }
          else {
            pdb_1422d1370(&lStack_b8);
            if (SBORROW8(0,lStack_b8)) {
              pppplStack_88 = pppplStack_b0;
              if (*_DAT_143ca8e90 != 0) {
                pppplStack_68 = (longlong ****)&pppplStack_88;
                pplStack_60 = (longlong **)pdb_140f36c20;
                uStack_158 = 0;
                pbStack_150 = &UNK_14329ce82;
                uStack_148 = 0x16;
                uStack_140 = 0;
                puStack_138 = &UNK_14329ce57;
                uStack_130 = 0x2a;
                uStack_128 = 1;
                puStack_120 = &UNK_14329ce82;
                uStack_118 = 0x16;
                uStack_110 = 0xcc00000001;
                puStack_108 = &UNK_14329ce24;
                pppplStack_100 = (longlong ****)&pppplStack_68;
                pdb_140f332f0(&uStack_41,&uStack_158);
              }
              pdb_140f36c40();
              goto LAB_141170c62;
            }
            pbStack_40 = (byte *)*plVar4;
            if (!SBORROW8(0,*(longlong *)pbStack_40)) {
              pdb_141180540();
            }
            *(longlong *)(pbStack_40 + 0x20) = lStack_98;
            *(longlong *)(pbStack_40 + 0x28) = lStack_90;
            *(longlong *)(pbStack_40 + 0x10) = lStack_a8;
            *(longlong *)(pbStack_40 + 0x18) = lStack_a0;
            *(longlong *)pbStack_40 = lStack_b8;
            *(longlong *****)(pbStack_40 + 8) = pppplStack_b0;
            pppplVar5 = *(longlong *****)*plVar4;
            ppppplVar12 = (longlong *****)*plVar4;
            ppppplVar11 = (longlong *****)pppplStack_68;
          }
          pppplStack_68 = (longlong ****)ppppplVar12;
          if (SBORROW8(0,(longlong)pppplVar5)) {
            pppplStack_68 = (longlong ****)ppppplVar11;
            pdb_1422d1880(uVar14,&UNK_14329cea2,0x19);
          }
          else {
            pplStack_60 = (longlong **)pdb_140001020;
            pdb_140f60760(&uStack_158,&UNK_14329ce98,&pppplStack_68);
            pdb_1422d1a80(uVar14,&uStack_158);
          }
        }
        uVar17 = 9;
        uVar14 = pdb_140dc6290(&UNK_14329cd96,9);
        pdb_140f5f4f0(&uStack_158,uVar14,uVar17);
        pbStack_40 = pbStack_150;
        pdb_1407339e0(&pppplStack_68,param_2,pbStack_150,uStack_148);
        pppplVar5 = pppplStack_68;
        if ((longlong ****)pppplStack_68[0x39] == (longlong ****)0x0) goto LAB_141170fbb;
        uVar16 = pdb_1400af0a0(pppplStack_68 + 0x3a,&pplStack_60);
        pppplVar6 = (longlong ****)pppplVar5[0x36];
        pppplVar5 = (longlong ****)pppplVar5[0x37];
        bVar22 = (byte)(uVar16 >> 0x39);
        auVar23 = ZEXT216(CONCAT11(bVar22,bVar22));
        auVar23 = pshuflw(auVar23,auVar23,0);
        lVar18 = 0;
        goto LAB_141170dcf;
      }
      uVar20 = (ushort)(uVar19 - 1) & (ushort)uVar19;
      uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar20);
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
                    (SUB161(auVar24 >> 0x17,0) & 1) != 0) || (SUB161(auVar24 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar24 >> 0x27,0) & 1) != 0) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar24 >> 0x37,0) & 1) != 0) || (SUB161(auVar24 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar24 >> 0x47,0) & 1) != 0) || (SUB161(auVar24 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar24 >> 0x57,0) & 1) != 0) || (SUB161(auVar24 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar24 >> 0x67,0) & 1) != 0) || (SUB161(auVar24 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar24 >> 0x77,0) & 1) != 0) || auVar24[0xf] < '\0') goto LAB_141170c8a;
    uVar15 = uVar15 + lVar18 + 0x10;
    lVar18 = lVar18 + 0x10;
  } while( true );
LAB_141170dcf:
  uVar16 = uVar16 & (ulonglong)pppplVar5;
  auVar27 = *(undefined1 (*) [16])((longlong)pppplVar6 + uVar16);
  auVar28[0] = -(auVar27[0] == auVar23[0]);
  auVar28[1] = -(auVar27[1] == auVar23[1]);
  auVar28[2] = -(auVar27[2] == auVar23[2]);
  auVar28[3] = -(auVar27[3] == auVar23[3]);
  auVar28[4] = -(auVar27[4] == auVar23[4]);
  auVar28[5] = -(auVar27[5] == auVar23[5]);
  auVar28[6] = -(auVar27[6] == auVar23[6]);
  auVar28[7] = -(auVar27[7] == auVar23[7]);
  auVar28[8] = -(auVar27[8] == auVar23[0]);
  auVar28[9] = -(auVar27[9] == auVar23[1]);
  auVar28[10] = -(auVar27[10] == auVar23[2]);
  auVar28[0xb] = -(auVar27[0xb] == auVar23[3]);
  auVar28[0xc] = -(auVar27[0xc] == auVar23[4]);
  auVar28[0xd] = -(auVar27[0xd] == auVar23[5]);
  auVar28[0xe] = -(auVar27[0xe] == auVar23[6]);
  auVar28[0xf] = -(auVar27[0xf] == auVar23[7]);
  uVar20 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
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
  uVar19 = (uint)uVar20;
  while (uVar20 != 0) {
    uVar9 = 0;
    for (uVar10 = uVar19; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
      uVar9 = uVar9 + 1;
    }
    uVar15 = uVar9 + uVar16 & (ulonglong)pppplVar5;
    if ((longlong ***)pplStack_60 == pppplVar6[uVar15 * -0x1b + -0x1b]) {
      pbVar1 = (byte *)((longlong)pppplVar6 + uVar15 * -0xd8 + -5);
      *pbVar1 = *pbVar1 | 4;
      uStack_78 = uStack_58;
      pppplStack_88 = pppplStack_68;
      pplStack_80 = pplStack_60;
      lVar18 = pdb_14116dd60(&pppplStack_88);
      pppplVar5 = pppplStack_88;
      *(undefined1 *)(lVar18 + 0x25d) = 0x14;
      pppplStack_68 = pppplStack_88;
      pplStack_60 = pplStack_80;
      uStack_58 = uStack_78;
      if ((longlong ****)pppplStack_88[0x39] != (longlong ****)0x0) {
        uVar16 = pdb_1400af0a0(pppplStack_88 + 0x3a,&pplStack_60);
        pppplVar6 = (longlong ****)pppplVar5[0x36];
        pppplVar5 = (longlong ****)pppplVar5[0x37];
        bVar22 = (byte)(uVar16 >> 0x39);
        auVar23 = ZEXT216(CONCAT11(bVar22,bVar22));
        auVar23 = pshuflw(auVar23,auVar23,0);
        lVar18 = 0;
        while( true ) {
          uVar16 = uVar16 & (ulonglong)pppplVar5;
          pcVar2 = (char *)((longlong)pppplVar6 + uVar16);
          auVar29[0] = -(*pcVar2 == auVar23[0]);
          auVar29[1] = -(pcVar2[1] == auVar23[1]);
          auVar29[2] = -(pcVar2[2] == auVar23[2]);
          auVar29[3] = -(pcVar2[3] == auVar23[3]);
          auVar29[4] = -(pcVar2[4] == auVar23[4]);
          auVar29[5] = -(pcVar2[5] == auVar23[5]);
          auVar29[6] = -(pcVar2[6] == auVar23[6]);
          auVar29[7] = -(pcVar2[7] == auVar23[7]);
          auVar29[8] = -(pcVar2[8] == auVar23[0]);
          auVar29[9] = -(pcVar2[9] == auVar23[1]);
          auVar29[10] = -(pcVar2[10] == auVar23[2]);
          auVar29[0xb] = -(pcVar2[0xb] == auVar23[3]);
          auVar29[0xc] = -(pcVar2[0xc] == auVar23[4]);
          auVar29[0xd] = -(pcVar2[0xd] == auVar23[5]);
          auVar29[0xe] = -(pcVar2[0xe] == auVar23[6]);
          auVar29[0xf] = -(pcVar2[0xf] == auVar23[7]);
          uVar20 = (ushort)(SUB161(auVar29 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
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
                   (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar29[0xf] >> 7) << 0xf;
          uVar19 = (uint)uVar20;
          while (uVar20 != 0) {
            uVar9 = 0;
            for (uVar10 = uVar19; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
              uVar9 = uVar9 + 1;
            }
            uVar15 = uVar9 + uVar16 & (ulonglong)pppplVar5;
            if ((longlong ***)pplStack_60 == pppplVar6[uVar15 * -0x1b + -0x1b]) {
              bVar22 = *(byte *)((longlong)pppplVar6 + uVar15 * -0xd8 + -6);
              if (uStack_158 != 0) {
                pub_1406abac0(pbStack_40,uStack_158,1);
              }
              if ((bVar22 & 0x30) != 0) {
                puVar7 = (undefined8 *)param_3[2];
                *(undefined4 *)puVar7[2] = *(undefined4 *)((longlong)puVar7 + 0x1c);
                uStack_158 = 3;
                pdb_140a003a0(*puVar7,&uStack_158);
              }
              param_1[2] = param_2[2];
              uVar14 = param_2[1];
              *param_1 = *param_2;
              param_1[1] = uVar14;
              return param_1;
            }
            uVar20 = (ushort)(uVar19 - 1) & (ushort)uVar19;
            uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar20);
          }
          auVar26[0] = -(*pcVar2 == -1);
          auVar26[1] = -(pcVar2[1] == -1);
          auVar26[2] = -(pcVar2[2] == -1);
          auVar26[3] = -(pcVar2[3] == -1);
          auVar26[4] = -(pcVar2[4] == -1);
          auVar26[5] = -(pcVar2[5] == -1);
          auVar26[6] = -(pcVar2[6] == -1);
          auVar26[7] = -(pcVar2[7] == -1);
          auVar26[8] = -(pcVar2[8] == -1);
          auVar26[9] = -(pcVar2[9] == -1);
          auVar26[10] = -(pcVar2[10] == -1);
          auVar26[0xb] = -(pcVar2[0xb] == -1);
          auVar26[0xc] = -(pcVar2[0xc] == -1);
          auVar26[0xd] = -(pcVar2[0xd] == -1);
          auVar26[0xe] = -(pcVar2[0xe] == -1);
          auVar26[0xf] = -(pcVar2[0xf] == -1);
          if ((((((((((((((((SUB161(auVar26 >> 7,0) & 1) != 0 || (SUB161(auVar26 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar26 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar26 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar26 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar26 >> 0x2f,0) & 1) != 0) || (SUB161(auVar26 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar26 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar26 >> 0x47,0) & 1) != 0) || (SUB161(auVar26 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar26 >> 0x57,0) & 1) != 0) || (SUB161(auVar26 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar26 >> 0x67,0) & 1) != 0) || (SUB161(auVar26 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar26 >> 0x77,0) & 1) != 0) || auVar26[0xf] < '\0') break;
          uVar16 = uVar16 + lVar18 + 0x10;
          lVar18 = lVar18 + 0x10;
        }
      }
      pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
      goto LAB_141170fe3;
    }
    uVar20 = (ushort)(uVar19 - 1) & (ushort)uVar19;
    uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar20);
  }
  auVar25[0] = -(auVar27[0] == -1);
  auVar25[1] = -(auVar27[1] == -1);
  auVar25[2] = -(auVar27[2] == -1);
  auVar25[3] = -(auVar27[3] == -1);
  auVar25[4] = -(auVar27[4] == -1);
  auVar25[5] = -(auVar27[5] == -1);
  auVar25[6] = -(auVar27[6] == -1);
  auVar25[7] = -(auVar27[7] == -1);
  auVar25[8] = -(auVar27[8] == -1);
  auVar25[9] = -(auVar27[9] == -1);
  auVar25[10] = -(auVar27[10] == -1);
  auVar25[0xb] = -(auVar27[0xb] == -1);
  auVar25[0xc] = -(auVar27[0xc] == -1);
  auVar25[0xd] = -(auVar27[0xd] == -1);
  auVar25[0xe] = -(auVar27[0xe] == -1);
  auVar25[0xf] = -(auVar27[0xf] == -1);
  if ((((((((((((((((SUB161(auVar25 >> 7,0) & 1) != 0 || (SUB161(auVar25 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar25 >> 0x17,0) & 1) != 0) || (SUB161(auVar25 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar25 >> 0x27,0) & 1) != 0) || (SUB161(auVar25 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar25 >> 0x37,0) & 1) != 0) || (SUB161(auVar25 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar25 >> 0x47,0) & 1) != 0) || (SUB161(auVar25 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar25 >> 0x57,0) & 1) != 0) || (SUB161(auVar25 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar25 >> 0x67,0) & 1) != 0) || (SUB161(auVar25 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar25 >> 0x77,0) & 1) != 0) || auVar25[0xf] < '\0') {
LAB_141170fbb:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6b48);
  }
  uVar16 = uVar16 + lVar18 + 0x10;
  lVar18 = lVar18 + 0x10;
  goto LAB_141170dcf;
}

