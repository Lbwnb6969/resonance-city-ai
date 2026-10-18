// VA 0x1423a5860, PDB extent 1630 bytes
// toolbar::menu::save_error::ui
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/save_error.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::save_error::ui
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/save_error.rs
   Extent: 1630 */

void pdb_1423a5860(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  longlong ****pppplVar3;
  longlong ***ppplVar4;
  longlong ***ppplVar5;
  uint uVar6;
  uint uVar7;
  longlong ****pppplVar8;
  char cVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  longlong lVar13;
  int iVar14;
  undefined *puVar15;
  code *pcVar16;
  longlong **pplVar17;
  longlong **pplVar18;
  uint uVar19;
  ushort uVar20;
  ulonglong uVar21;
  byte bVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  longlong ****pppplStack_b8;
  longlong **pplStack_b0;
  undefined8 uStack_a8;
  float fStack_98;
  undefined4 uStack_94;
  byte *pbStack_90;
  longlong ****pppplStack_80;
  longlong **pplStack_78;
  longlong ****pppplStack_70;
  code *pcStack_68;
  longlong ****pppplStack_58;
  longlong **pplStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  lVar10 = pdb_140b80dd0(*param_2);
  iVar14 = (int)param_2;
  cVar9 = pdb_140cb90d0(lVar10);
  if (cVar9 == '\0') {
    uVar12 = pdb_140f3c9d0();
    *param_5 = uVar12;
    *(int *)(param_5 + 1) = iVar14;
    uVar12 = 0x18;
    uStack_c8 = pdb_140dc6290(&UNK_1434e2645);
    uStack_c0 = uVar12;
    if (*(longlong *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_1434e2690);
    }
    lVar10 = *(longlong *)(lVar10 + 8);
    if (*(char *)(lVar10 + 0x20) == '\0') {
      uVar12 = 0x1c;
      uStack_c8 = pdb_140dc6290(&UNK_1434e26a8);
      pppplStack_b8 = (longlong ****)(lVar10 + 0x28);
      pcVar16 = (code *)0x15;
      uStack_c0 = uVar12;
      pppplStack_58 = (longlong ****)pdb_140dc6290(&UNK_1434e26c4);
      pplStack_78 = (longlong **)pdb_1402ed400;
      pppplStack_70 = (longlong ****)&pppplStack_b8;
      pcStack_68 = pdb_140493e10;
      puVar15 = &UNK_1434e26d9;
      pplStack_50 = (longlong **)pcVar16;
    }
    else {
      pppplStack_58 = (longlong ****)(lVar10 + 0x28);
      pplStack_78 = (longlong **)pdb_140493e10;
      puVar15 = &UNK_1434e26df;
    }
    pppplStack_80 = (longlong ****)&pppplStack_58;
    pdb_140f60760(&fStack_98,puVar15,&pppplStack_80);
    *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
    pppplVar3 = (longlong ****)*param_1;
    pppplStack_58 = (longlong ****)&UNK_1434e26e1;
    pplStack_50 = (longlong **)0xa;
    uVar11 = pdb_140bbbcb0(&pppplStack_58);
    pplVar18 = (longlong **)(uVar11 ^ 0xb1695320004fb443);
    pplVar17 = pplVar18;
    lVar13 = pdb_14072c2d0(pppplVar3);
    *(undefined1 *)(lVar13 + 0x5e) = 0;
    if (((ulonglong)pplVar17 & 1) == 0) {
      ppplVar4 = pppplVar3[2];
      if (ppplVar4 == *pppplVar3) {
        pdb_142d7f080(pppplVar3);
      }
      ppplVar5 = pppplVar3[1];
      *(undefined4 *)(ppplVar5 + (longlong)ppplVar4 * 7) = 1;
      ppplVar5[(longlong)ppplVar4 * 7 + 6] = pplVar18;
      pppplVar3[2] = (longlong ***)((longlong)ppplVar4 + 1);
    }
    pppplStack_70 = (longlong ****)0x0;
    pppplStack_80 = pppplVar3;
    pplStack_78 = pplVar18;
    if (pppplVar3[0x39] != (longlong ***)0x0) {
      uVar11 = pdb_1400af0a0(pppplVar3 + 0x3a,&pplStack_78);
      pppplVar8 = pppplStack_80;
      ppplVar4 = pppplVar3[0x36];
      bVar22 = (byte)(uVar11 >> 0x39);
      auVar23 = ZEXT216(CONCAT11(bVar22,bVar22));
      auVar23 = pshuflw(auVar23,auVar23,0);
      lVar13 = 0;
      while( true ) {
        uVar11 = uVar11 & (ulonglong)pppplVar3[0x37];
        auVar2 = *(undefined1 (*) [16])((longlong)ppplVar4 + uVar11);
        auVar27[0] = -(auVar2[0] == auVar23[0]);
        auVar27[1] = -(auVar2[1] == auVar23[1]);
        auVar27[2] = -(auVar2[2] == auVar23[2]);
        auVar27[3] = -(auVar2[3] == auVar23[3]);
        auVar27[4] = -(auVar2[4] == auVar23[4]);
        auVar27[5] = -(auVar2[5] == auVar23[5]);
        auVar27[6] = -(auVar2[6] == auVar23[6]);
        auVar27[7] = -(auVar2[7] == auVar23[7]);
        auVar27[8] = -(auVar2[8] == auVar23[0]);
        auVar27[9] = -(auVar2[9] == auVar23[1]);
        auVar27[10] = -(auVar2[10] == auVar23[2]);
        auVar27[0xb] = -(auVar2[0xb] == auVar23[3]);
        auVar27[0xc] = -(auVar2[0xc] == auVar23[4]);
        auVar27[0xd] = -(auVar2[0xd] == auVar23[5]);
        auVar27[0xe] = -(auVar2[0xe] == auVar23[6]);
        auVar27[0xf] = -(auVar2[0xf] == auVar23[7]);
        uVar20 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe | (ushort)(auVar27[0xf] >> 7) << 0xf
        ;
        uVar19 = (uint)uVar20;
        while (uVar20 != 0) {
          uVar6 = 0;
          for (uVar7 = uVar19; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
            uVar6 = uVar6 + 1;
          }
          uVar21 = uVar6 + uVar11 & (ulonglong)pppplVar3[0x37];
          if (pplVar18 == ppplVar4[uVar21 * -0x1b + -0x1b]) {
            *(undefined4 *)((longlong)ppplVar4 + uVar21 * -0xd8 + -0x14) = 0xc1200000;
            uStack_48 = pppplStack_70;
            pppplStack_58 = pppplStack_80;
            pplStack_50 = pplStack_78;
            if (pppplStack_80[0x39] != (longlong ***)0x0) {
              uVar11 = pdb_1400af0a0(pppplStack_80 + 0x3a,&pplStack_50);
              ppplVar4 = pppplVar8[0x36];
              ppplVar5 = pppplVar8[0x37];
              bVar22 = (byte)(uVar11 >> 0x39);
              auVar23 = ZEXT216(CONCAT11(bVar22,bVar22));
              auVar23 = pshuflw(auVar23,auVar23,0);
              lVar13 = 0;
              while( true ) {
                uVar11 = uVar11 & (ulonglong)ppplVar5;
                auVar2 = *(undefined1 (*) [16])((longlong)ppplVar4 + uVar11);
                auVar28[0] = -(auVar2[0] == auVar23[0]);
                auVar28[1] = -(auVar2[1] == auVar23[1]);
                auVar28[2] = -(auVar2[2] == auVar23[2]);
                auVar28[3] = -(auVar2[3] == auVar23[3]);
                auVar28[4] = -(auVar2[4] == auVar23[4]);
                auVar28[5] = -(auVar2[5] == auVar23[5]);
                auVar28[6] = -(auVar2[6] == auVar23[6]);
                auVar28[7] = -(auVar2[7] == auVar23[7]);
                auVar28[8] = -(auVar2[8] == auVar23[0]);
                auVar28[9] = -(auVar2[9] == auVar23[1]);
                auVar28[10] = -(auVar2[10] == auVar23[2]);
                auVar28[0xb] = -(auVar2[0xb] == auVar23[3]);
                auVar28[0xc] = -(auVar2[0xc] == auVar23[4]);
                auVar28[0xd] = -(auVar2[0xd] == auVar23[5]);
                auVar28[0xe] = -(auVar2[0xe] == auVar23[6]);
                auVar28[0xf] = -(auVar2[0xf] == auVar23[7]);
                uVar20 = (ushort)(SUB161(auVar28 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
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
                         (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar28[0xf] >> 7) << 0xf;
                uVar19 = (uint)uVar20;
                while (uVar20 != 0) {
                  uVar6 = 0;
                  for (uVar7 = uVar19; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                    uVar6 = uVar6 + 1;
                  }
                  uVar21 = uVar6 + uVar11 & (ulonglong)ppplVar5;
                  if (pplStack_50 == ppplVar4[uVar21 * -0x1b + -0x1b]) {
                    pbVar1 = (byte *)((longlong)ppplVar4 + uVar21 * -0xd8 + -5);
                    *pbVar1 = *pbVar1 | 2;
                    uStack_a8 = uStack_48;
                    pppplStack_b8 = pppplStack_58;
                    pplStack_b0 = pplStack_50;
                    pdb_141174160(&pppplStack_80,&pppplStack_b8,&UNK_1434e26eb,0xf,0);
                    pdb_14118bdb0(&pppplStack_80,&UNK_1434e26fa,0xe,&fStack_98,lVar10);
                    pdb_14118a9c0(&pppplStack_80,&UNK_1434e2708,4,&uStack_c8);
                    pdb_1411922f0(&pppplStack_80,&UNK_1434e270c,7,param_4);
                    if (CONCAT44(uStack_94,fStack_98) == 0) {
                      return;
                    }
                    pub_1406abac0(pbStack_90,CONCAT44(uStack_94,fStack_98),1);
                    return;
                  }
                  uVar20 = (ushort)(uVar19 - 1) & (ushort)uVar19;
                  uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar20);
                }
                auVar25[0] = -(auVar2[0] == -1);
                auVar25[1] = -(auVar2[1] == -1);
                auVar25[2] = -(auVar2[2] == -1);
                auVar25[3] = -(auVar2[3] == -1);
                auVar25[4] = -(auVar2[4] == -1);
                auVar25[5] = -(auVar2[5] == -1);
                auVar25[6] = -(auVar2[6] == -1);
                auVar25[7] = -(auVar2[7] == -1);
                auVar25[8] = -(auVar2[8] == -1);
                auVar25[9] = -(auVar2[9] == -1);
                auVar25[10] = -(auVar2[10] == -1);
                auVar25[0xb] = -(auVar2[0xb] == -1);
                auVar25[0xc] = -(auVar2[0xc] == -1);
                auVar25[0xd] = -(auVar2[0xd] == -1);
                auVar25[0xe] = -(auVar2[0xe] == -1);
                auVar25[0xf] = -(auVar2[0xf] == -1);
                if ((((((((((((((((SUB161(auVar25 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar25 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar25 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar25 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar25 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar25 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar25 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar25 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar25 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar25 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar25 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar25 >> 0x5f,0) & 1) != 0) || (SUB161(auVar25 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar25 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar25 >> 0x77,0) & 1) != 0) || auVar25[0xf] < '\0') break;
                uVar11 = uVar11 + lVar13 + 0x10;
                lVar13 = lVar13 + 0x10;
              }
            }
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_142fa6a58);
          }
          uVar20 = (ushort)(uVar19 - 1) & (ushort)uVar19;
          uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar20);
        }
        auVar24[0] = -(auVar2[0] == -1);
        auVar24[1] = -(auVar2[1] == -1);
        auVar24[2] = -(auVar2[2] == -1);
        auVar24[3] = -(auVar2[3] == -1);
        auVar24[4] = -(auVar2[4] == -1);
        auVar24[5] = -(auVar2[5] == -1);
        auVar24[6] = -(auVar2[6] == -1);
        auVar24[7] = -(auVar2[7] == -1);
        auVar24[8] = -(auVar2[8] == -1);
        auVar24[9] = -(auVar2[9] == -1);
        auVar24[10] = -(auVar2[10] == -1);
        auVar24[0xb] = -(auVar2[0xb] == -1);
        auVar24[0xc] = -(auVar2[0xc] == -1);
        auVar24[0xd] = -(auVar2[0xd] == -1);
        auVar24[0xe] = -(auVar2[0xe] == -1);
        auVar24[0xf] = -(auVar2[0xf] == -1);
        if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar24 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar24 >> 0x1f,0) & 1) != 0) || (SUB161(auVar24 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar24 >> 0x37,0) & 1) != 0) || (SUB161(auVar24 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar24 >> 0x47,0) & 1) != 0) || (SUB161(auVar24 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar24 >> 0x57,0) & 1) != 0) || (SUB161(auVar24 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar24 >> 0x67,0) & 1) != 0) || (SUB161(auVar24 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar24 >> 0x77,0) & 1) != 0) || auVar24[0xf] < '\0') break;
        uVar11 = uVar11 + lVar13 + 0x10;
        lVar13 = lVar13 + 0x10;
      }
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6b48);
  }
  if (((*(int *)(param_5 + 1) == 1000000000) || (uVar11 = pdb_140f3cb70(param_5), 0xe < uVar11)) ||
     (cVar9 = pdb_140a00370(*param_3), cVar9 == '\0')) {
    return;
  }
  uVar11 = pdb_140f3cb70(param_5);
  fStack_98 = (float)iVar14 / _DAT_142e46a44 + (float)uVar11;
  *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
  pppplVar3 = (longlong ****)*param_1;
  pppplStack_58 = (longlong ****)&UNK_1434e2713;
  pplStack_50 = (longlong **)0x13;
  uVar11 = pdb_140bbbcb0(&pppplStack_58);
  pplVar18 = (longlong **)(uVar11 ^ 0xb1695320004fb443);
  pplVar17 = pplVar18;
  lVar10 = pdb_14072c2d0(pppplVar3);
  *(undefined1 *)(lVar10 + 0x5e) = 0;
  if (((ulonglong)pplVar17 & 1) == 0) {
    ppplVar4 = pppplVar3[2];
    if (ppplVar4 == *pppplVar3) {
      pdb_142d7f080(pppplVar3);
    }
    ppplVar5 = pppplVar3[1];
    *(undefined4 *)(ppplVar5 + (longlong)ppplVar4 * 7) = 1;
    ppplVar5[(longlong)ppplVar4 * 7 + 6] = pplVar18;
    pppplVar3[2] = (longlong ***)((longlong)ppplVar4 + 1);
  }
  pppplStack_70 = (longlong ****)0x0;
  pppplStack_80 = pppplVar3;
  pplStack_78 = pplVar18;
  pdb_141171110(&pppplStack_58,&pppplStack_80,&fStack_98);
  pppplVar3 = pppplStack_58;
  if (pppplStack_58[0x39] != (longlong ***)0x0) {
    uVar11 = pdb_1400af0a0(pppplStack_58 + 0x3a,&pplStack_50);
    pplVar17 = (longlong **)pppplVar3[0x36];
    pplVar18 = (longlong **)pppplVar3[0x37];
    bVar22 = (byte)(uVar11 >> 0x39);
    auVar23 = ZEXT216(CONCAT11(bVar22,bVar22));
    auVar23 = pshuflw(auVar23,auVar23,0);
    lVar10 = 0;
    while( true ) {
      uVar11 = uVar11 & (ulonglong)pplVar18;
      auVar2 = *(undefined1 (*) [16])((longlong)pplVar17 + uVar11);
      auVar29[0] = -(auVar2[0] == auVar23[0]);
      auVar29[1] = -(auVar2[1] == auVar23[1]);
      auVar29[2] = -(auVar2[2] == auVar23[2]);
      auVar29[3] = -(auVar2[3] == auVar23[3]);
      auVar29[4] = -(auVar2[4] == auVar23[4]);
      auVar29[5] = -(auVar2[5] == auVar23[5]);
      auVar29[6] = -(auVar2[6] == auVar23[6]);
      auVar29[7] = -(auVar2[7] == auVar23[7]);
      auVar29[8] = -(auVar2[8] == auVar23[0]);
      auVar29[9] = -(auVar2[9] == auVar23[1]);
      auVar29[10] = -(auVar2[10] == auVar23[2]);
      auVar29[0xb] = -(auVar2[0xb] == auVar23[3]);
      auVar29[0xc] = -(auVar2[0xc] == auVar23[4]);
      auVar29[0xd] = -(auVar2[0xd] == auVar23[5]);
      auVar29[0xe] = -(auVar2[0xe] == auVar23[6]);
      auVar29[0xf] = -(auVar2[0xf] == auVar23[7]);
      uVar20 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
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
      uVar19 = (uint)uVar20;
      while (uVar20 != 0) {
        uVar6 = 0;
        for (uVar7 = uVar19; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        uVar21 = uVar6 + uVar11 & (ulonglong)pplVar18;
        if (pplStack_50 == (longlong **)pplVar17[uVar21 * -0x1b + -0x1b]) {
          pbVar1 = (byte *)((longlong)pplVar17 + uVar21 * -0xd8 + -5);
          *pbVar1 = *pbVar1 | 2;
          uStack_a8 = uStack_48;
          pppplStack_b8 = pppplStack_58;
          pplStack_b0 = pplStack_50;
          pdb_141174160(&pppplStack_80,&pppplStack_b8,&UNK_1434e2726,0x18,0);
          return;
        }
        uVar20 = (ushort)(uVar19 - 1) & (ushort)uVar19;
        uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar20);
      }
      auVar26[0] = -(auVar2[0] == -1);
      auVar26[1] = -(auVar2[1] == -1);
      auVar26[2] = -(auVar2[2] == -1);
      auVar26[3] = -(auVar2[3] == -1);
      auVar26[4] = -(auVar2[4] == -1);
      auVar26[5] = -(auVar2[5] == -1);
      auVar26[6] = -(auVar2[6] == -1);
      auVar26[7] = -(auVar2[7] == -1);
      auVar26[8] = -(auVar2[8] == -1);
      auVar26[9] = -(auVar2[9] == -1);
      auVar26[10] = -(auVar2[10] == -1);
      auVar26[0xb] = -(auVar2[0xb] == -1);
      auVar26[0xc] = -(auVar2[0xc] == -1);
      auVar26[0xd] = -(auVar2[0xd] == -1);
      auVar26[0xe] = -(auVar2[0xe] == -1);
      auVar26[0xf] = -(auVar2[0xf] == -1);
      if ((((((((((((((((SUB161(auVar26 >> 7,0) & 1) != 0 || (SUB161(auVar26 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar26 >> 0x17,0) & 1) != 0) || (SUB161(auVar26 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar26 >> 0x27,0) & 1) != 0) || (SUB161(auVar26 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar26 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar26 >> 0x3f,0) & 1) != 0) || (SUB161(auVar26 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar26 >> 0x4f,0) & 1) != 0) || (SUB161(auVar26 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar26 >> 0x5f,0) & 1) != 0) || (SUB161(auVar26 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar26 >> 0x6f,0) & 1) != 0) || (SUB161(auVar26 >> 0x77,0) & 1) != 0) ||
          auVar26[0xf] < '\0') break;
      uVar11 = uVar11 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142fa6a58);
}

