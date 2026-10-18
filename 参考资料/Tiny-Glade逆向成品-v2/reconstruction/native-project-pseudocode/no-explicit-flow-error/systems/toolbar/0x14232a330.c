// VA 0x14232a330, PDB extent 2052 bytes
// toolbar::menu::mods_mine_tab::list_slot
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/mods_mine_tab.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::mods_mine_tab::list_slot
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/mods_mine_tab.rs
   Extent: 2052 */

void pdb_14232a330(longlong param_1,undefined8 param_2,longlong param_3,ulonglong param_4,
                  longlong param_5,ulonglong param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  char *pcVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  byte *pbVar11;
  longlong lVar12;
  uint uVar13;
  ushort uVar14;
  longlong lVar15;
  byte bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  longlong *plStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_90;
  longlong *plStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  longlong lStack_60;
  byte *pbStack_58;
  ulonglong uStack_50;
  longlong *plStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  lStack_60 = 0;
  pbStack_58 = (byte *)0x8;
  uStack_50 = 0;
  uStack_90 = param_2;
  if (param_4 == 0) {
    uStack_50 = 0;
  }
  else {
    pdb_142d7f1b0(&lStack_60,0,param_4,8,0x10);
    if (param_4 == 1) {
      lVar12 = 0;
    }
    else {
      pbVar11 = pbStack_58 + uStack_50 * 0x10 + 0x18;
      lVar12 = 0;
      lVar9 = param_3;
      do {
        pbVar11[-0x18] = 0;
        pbVar11[-0x17] = 0;
        pbVar11[-0x16] = 0;
        pbVar11[-0x15] = 0;
        pbVar11[-0x14] = 0;
        pbVar11[-0x13] = 0;
        pbVar11[-0x12] = 0;
        pbVar11[-0x11] = 0;
        *(longlong *)(pbVar11 + -0x10) = lVar9;
        pbVar11[-8] = 0;
        pbVar11[-7] = 0;
        pbVar11[-6] = 0;
        pbVar11[-5] = 0;
        pbVar11[-4] = 0;
        pbVar11[-3] = 0;
        pbVar11[-2] = 0;
        pbVar11[-1] = 0;
        *(longlong *)pbVar11 = lVar9 + 0x78;
        pbVar11 = pbVar11 + 0x20;
        lVar12 = lVar12 + -2;
        lVar9 = lVar9 + 0xf0;
      } while (-lVar12 != (param_4 & 0xfffffffffffffffe));
      uStack_50 = uStack_50 - lVar12;
      if ((param_4 & 1) == 0) goto LAB_14232a37f;
      lVar12 = -lVar12;
    }
    pbVar11 = pbStack_58 + uStack_50 * 0x10;
    pbVar11[0] = 0;
    pbVar11[1] = 0;
    pbVar11[2] = 0;
    pbVar11[3] = 0;
    pbVar11[4] = 0;
    pbVar11[5] = 0;
    pbVar11[6] = 0;
    pbVar11[7] = 0;
    *(longlong *)(pbStack_58 + uStack_50 * 0x10 + 8) = param_3 + lVar12 * 0x78;
    uStack_50 = uStack_50 + 1;
  }
LAB_14232a37f:
  if (lStack_60 - uStack_50 < param_6) {
    pdb_142d7f1b0(&lStack_60,uStack_50,param_6,8,0x10);
    if (param_6 == 1) goto LAB_14232a3bd;
LAB_14232a449:
    pbVar11 = pbStack_58 + uStack_50 * 0x10 + 0x18;
    lVar12 = 0;
    lVar9 = param_5;
    do {
      pbVar11[-0x18] = 1;
      pbVar11[-0x17] = 0;
      pbVar11[-0x16] = 0;
      pbVar11[-0x15] = 0;
      pbVar11[-0x14] = 0;
      pbVar11[-0x13] = 0;
      pbVar11[-0x12] = 0;
      pbVar11[-0x11] = 0;
      *(longlong *)(pbVar11 + -0x10) = lVar9;
      pbVar11[-8] = 1;
      pbVar11[-7] = 0;
      pbVar11[-6] = 0;
      pbVar11[-5] = 0;
      pbVar11[-4] = 0;
      pbVar11[-3] = 0;
      pbVar11[-2] = 0;
      pbVar11[-1] = 0;
      *(longlong *)pbVar11 = lVar9 + 0x20;
      pbVar11 = pbVar11 + 0x20;
      lVar12 = lVar12 + -2;
      lVar9 = lVar9 + 0x40;
    } while (-lVar12 != (param_6 & 0xfffffffffffffffe));
    uStack_50 = uStack_50 - lVar12;
    if ((param_6 & 1) == 0) goto LAB_14232a4c6;
    lVar12 = -lVar12;
  }
  else {
    if (param_6 == 0) goto LAB_14232a4c6;
    if (param_6 != 1) goto LAB_14232a449;
LAB_14232a3bd:
    lVar12 = 0;
  }
  pbVar11 = pbStack_58 + uStack_50 * 0x10;
  pbVar11[0] = 1;
  pbVar11[1] = 0;
  pbVar11[2] = 0;
  pbVar11[3] = 0;
  pbVar11[4] = 0;
  pbVar11[5] = 0;
  pbVar11[6] = 0;
  pbVar11[7] = 0;
  *(longlong *)(pbStack_58 + uStack_50 * 0x10 + 8) = param_5 + lVar12 * 0x20;
  uStack_50 = uStack_50 + 1;
LAB_14232a4c6:
  uStack_68 = param_9;
  if (uStack_50 != 0) {
    uVar5 = 7;
    if (uStack_50 < 7) {
      uVar5 = uStack_50;
    }
    pdb_1411739b0(&plStack_48,param_1,&UNK_1434da5e0,4,uVar5,uStack_50,0x42640000);
    plStack_138 = &lStack_60;
    puStack_130 = &uStack_90;
    uStack_128 = param_7;
    puStack_120 = &uStack_68;
    uStack_118 = param_8;
    pdb_1422f8860(&plStack_48,&plStack_138);
LAB_14232a731:
    plVar6 = *(longlong **)(param_1 + 8);
    plStack_48 = (longlong *)&UNK_1434da5f9;
    puStack_40 = (undefined8 *)0x7;
    plStack_138 = (longlong *)pdb_140bbbcb0(&plStack_48);
    puStack_130 = _DAT_14329c330;
    uStack_128 = _UNK_14329c338;
    puStack_130 = (undefined8 *)pdb_1400affa0(&plStack_138);
    plStack_138 = plVar6;
    uVar7 = pdb_1400b0130(&plStack_138);
    pdb_14072caa0(&plStack_138,param_1,uVar7);
    plVar6 = plStack_138;
    if (plStack_138[0x39] != 0) {
      uVar8 = pdb_1400af0a0(plStack_138 + 0x3a,&puStack_130);
      lVar9 = plVar6[0x36];
      uVar5 = plVar6[0x37];
      bVar16 = (byte)(uVar8 >> 0x39);
      auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
      auVar17 = pshuflw(auVar17,auVar17,0);
      lVar12 = 0;
      while( true ) {
        uVar8 = uVar8 & uVar5;
        auVar21 = *(undefined1 (*) [16])(lVar9 + uVar8);
        auVar22[0] = -(auVar21[0] == auVar17[0]);
        auVar22[1] = -(auVar21[1] == auVar17[1]);
        auVar22[2] = -(auVar21[2] == auVar17[2]);
        auVar22[3] = -(auVar21[3] == auVar17[3]);
        auVar22[4] = -(auVar21[4] == auVar17[4]);
        auVar22[5] = -(auVar21[5] == auVar17[5]);
        auVar22[6] = -(auVar21[6] == auVar17[6]);
        auVar22[7] = -(auVar21[7] == auVar17[7]);
        auVar22[8] = -(auVar21[8] == auVar17[0]);
        auVar22[9] = -(auVar21[9] == auVar17[1]);
        auVar22[10] = -(auVar21[10] == auVar17[2]);
        auVar22[0xb] = -(auVar21[0xb] == auVar17[3]);
        auVar22[0xc] = -(auVar21[0xc] == auVar17[4]);
        auVar22[0xd] = -(auVar21[0xd] == auVar17[5]);
        auVar22[0xe] = -(auVar21[0xe] == auVar17[6]);
        auVar22[0xf] = -(auVar21[0xf] == auVar17[7]);
        uVar14 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(auVar22[0xf] >> 7) << 0xf
        ;
        uVar13 = (uint)uVar14;
        while (uVar14 != 0) {
          uVar3 = 0;
          for (uVar4 = uVar13; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar3 = uVar3 + 1;
          }
          lVar15 = (uVar3 + uVar8 & uVar5) * -0xd8;
          if (puStack_130 == *(undefined8 **)(lVar9 + -0xd8 + lVar15)) {
            lVar9 = lVar9 + lVar15;
            *(undefined1 (*) [16])(lVar9 + -0x9c) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(lVar9 + -0xa8) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(lVar9 + -0xb8) = (undefined1  [16])0x0;
            *(undefined4 *)(lVar9 + -0x8c) = 0x447a0000;
            *(undefined1 (*) [16])(lVar9 + -0x88) = (undefined1  [16])0x0;
            *(undefined8 *)(lVar9 + -0x78) = 0x402000100000000;
            uStack_78 = uStack_128;
            plStack_88 = plStack_138;
            puStack_80 = puStack_130;
            uVar7 = pdb_140dc6290(&UNK_1434da600);
            pdb_1407339e0(&plStack_138,&plStack_88,uVar7);
            uVar7 = pdb_14116dd60(&plStack_138);
            pdb_14119b2b0(uVar7);
            plVar6 = plStack_138;
            plStack_48 = plStack_138;
            puStack_40 = puStack_130;
            uStack_38 = uStack_128;
            if (plStack_138[0x39] != 0) {
              uVar8 = pdb_1400af0a0(plStack_138 + 0x3a,&puStack_40);
              uVar7 = uStack_68;
              lVar9 = plVar6[0x36];
              uVar5 = plVar6[0x37];
              bVar16 = (byte)(uVar8 >> 0x39);
              auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
              auVar17 = pshuflw(auVar17,auVar17,0);
              lVar12 = 0;
              while( true ) {
                uVar8 = uVar8 & uVar5;
                auVar21 = *(undefined1 (*) [16])(lVar9 + uVar8);
                auVar23[0] = -(auVar21[0] == auVar17[0]);
                auVar23[1] = -(auVar21[1] == auVar17[1]);
                auVar23[2] = -(auVar21[2] == auVar17[2]);
                auVar23[3] = -(auVar21[3] == auVar17[3]);
                auVar23[4] = -(auVar21[4] == auVar17[4]);
                auVar23[5] = -(auVar21[5] == auVar17[5]);
                auVar23[6] = -(auVar21[6] == auVar17[6]);
                auVar23[7] = -(auVar21[7] == auVar17[7]);
                auVar23[8] = -(auVar21[8] == auVar17[0]);
                auVar23[9] = -(auVar21[9] == auVar17[1]);
                auVar23[10] = -(auVar21[10] == auVar17[2]);
                auVar23[0xb] = -(auVar21[0xb] == auVar17[3]);
                auVar23[0xc] = -(auVar21[0xc] == auVar17[4]);
                auVar23[0xd] = -(auVar21[0xd] == auVar17[5]);
                auVar23[0xe] = -(auVar21[0xe] == auVar17[6]);
                auVar23[0xf] = -(auVar21[0xf] == auVar17[7]);
                uVar14 = (ushort)(SUB161(auVar23 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
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
                         (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar23[0xf] >> 7) << 0xf;
                uVar13 = (uint)uVar14;
                while (uVar14 != 0) {
                  uVar3 = 0;
                  for (uVar4 = uVar13; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                    uVar3 = uVar3 + 1;
                  }
                  lVar15 = (uVar3 + uVar8 & uVar5) * -0xd8;
                  if (puStack_40 == *(undefined8 **)(lVar9 + -0xd8 + lVar15)) {
                    if ((*(byte *)(lVar9 + lVar15 + -6) & 0x30) != 0) {
                      pdb_140ad7630(param_8);
                      plStack_138 = (longlong *)0x2;
                      pdb_140a003a0(uVar7,&plStack_138);
                    }
                    if (lStack_60 != 0) {
                      pub_1406abac0(pbStack_58,lStack_60 << 4,8);
                    }
                    return;
                  }
                  uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
                  uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
                }
                auVar20[0] = -(auVar21[0] == -1);
                auVar20[1] = -(auVar21[1] == -1);
                auVar20[2] = -(auVar21[2] == -1);
                auVar20[3] = -(auVar21[3] == -1);
                auVar20[4] = -(auVar21[4] == -1);
                auVar20[5] = -(auVar21[5] == -1);
                auVar20[6] = -(auVar21[6] == -1);
                auVar20[7] = -(auVar21[7] == -1);
                auVar20[8] = -(auVar21[8] == -1);
                auVar20[9] = -(auVar21[9] == -1);
                auVar20[10] = -(auVar21[10] == -1);
                auVar20[0xb] = -(auVar21[0xb] == -1);
                auVar20[0xc] = -(auVar21[0xc] == -1);
                auVar20[0xd] = -(auVar21[0xd] == -1);
                auVar20[0xe] = -(auVar21[0xe] == -1);
                auVar20[0xf] = -(auVar21[0xf] == -1);
                if ((((((((((((((((SUB161(auVar20 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar20 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar20 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar20 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar20 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar20 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar20 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar20 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar20 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar20 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar20 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar20 >> 0x5f,0) & 1) != 0) || (SUB161(auVar20 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar20 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar20 >> 0x77,0) & 1) != 0) || auVar20[0xf] < '\0') break;
                uVar8 = uVar8 + lVar12 + 0x10;
                lVar12 = lVar12 + 0x10;
              }
            }
            pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
          uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
        }
        auVar19[0] = -(auVar21[0] == -1);
        auVar19[1] = -(auVar21[1] == -1);
        auVar19[2] = -(auVar21[2] == -1);
        auVar19[3] = -(auVar21[3] == -1);
        auVar19[4] = -(auVar21[4] == -1);
        auVar19[5] = -(auVar21[5] == -1);
        auVar19[6] = -(auVar21[6] == -1);
        auVar19[7] = -(auVar21[7] == -1);
        auVar19[8] = -(auVar21[8] == -1);
        auVar19[9] = -(auVar21[9] == -1);
        auVar19[10] = -(auVar21[10] == -1);
        auVar19[0xb] = -(auVar21[0xb] == -1);
        auVar19[0xc] = -(auVar21[0xc] == -1);
        auVar19[0xd] = -(auVar21[0xd] == -1);
        auVar19[0xe] = -(auVar21[0xe] == -1);
        auVar19[0xf] = -(auVar21[0xf] == -1);
        if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 || (SUB161(auVar19 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar19 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar19 >> 0x1f,0) & 1) != 0) || (SUB161(auVar19 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar19 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar19 >> 0x37,0) & 1) != 0) || (SUB161(auVar19 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar19 >> 0x47,0) & 1) != 0) || (SUB161(auVar19 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar19 >> 0x57,0) & 1) != 0) || (SUB161(auVar19 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar19 >> 0x67,0) & 1) != 0) || (SUB161(auVar19 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar19 >> 0x77,0) & 1) != 0) || auVar19[0xf] < '\0') break;
        uVar8 = uVar8 + lVar12 + 0x10;
        lVar12 = lVar12 + 0x10;
      }
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6b30);
  }
  uVar10 = 0x15;
  plVar6 = (longlong *)pdb_140dc6290(&UNK_1434da5e4);
  plStack_88 = plVar6;
  puStack_80 = (undefined8 *)uVar10;
  plStack_138 = (longlong *)pdb_140bbbcb0(&plStack_88);
  puStack_130 = _DAT_14329c260;
  uStack_128 = _UNK_14329c268;
  puStack_130 = (undefined8 *)pdb_1400affa0(&plStack_138);
  plStack_138 = *(longlong **)(param_1 + 8);
  uVar7 = pdb_1400b0130(&plStack_138);
  pdb_14072caa0(&plStack_138,param_1,uVar7);
  uVar7 = pdb_14116ee90(&plStack_138,0);
  pdb_14119b6b0(uVar7,plVar6,uVar10);
  uStack_38 = uStack_128;
  plStack_48 = plStack_138;
  puStack_40 = puStack_130;
  uVar7 = pdb_14116e180(&plStack_48);
  pdb_14119b2b0(uVar7);
  uStack_128 = uStack_38;
  plStack_138 = plStack_48;
  puStack_130 = puStack_40;
  lVar9 = pdb_14116e180(&plStack_138);
  plVar6 = plStack_138;
  *(undefined4 *)(lVar9 + 600) = 0xffffffa0;
  plStack_48 = plStack_138;
  puStack_40 = puStack_130;
  uStack_38 = uStack_128;
  if (plStack_138[0x39] != 0) {
    uVar8 = pdb_1400af0a0(plStack_138 + 0x3a,&puStack_40);
    lVar9 = plVar6[0x36];
    uVar5 = plVar6[0x37];
    bVar16 = (byte)(uVar8 >> 0x39);
    auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
    auVar17 = pshuflw(auVar17,auVar17,0);
    lVar12 = 0;
    while( true ) {
      uVar8 = uVar8 & uVar5;
      pcVar1 = (char *)(lVar9 + uVar8);
      auVar21[0] = -(*pcVar1 == auVar17[0]);
      auVar21[1] = -(pcVar1[1] == auVar17[1]);
      auVar21[2] = -(pcVar1[2] == auVar17[2]);
      auVar21[3] = -(pcVar1[3] == auVar17[3]);
      auVar21[4] = -(pcVar1[4] == auVar17[4]);
      auVar21[5] = -(pcVar1[5] == auVar17[5]);
      auVar21[6] = -(pcVar1[6] == auVar17[6]);
      auVar21[7] = -(pcVar1[7] == auVar17[7]);
      auVar21[8] = -(pcVar1[8] == auVar17[0]);
      auVar21[9] = -(pcVar1[9] == auVar17[1]);
      auVar21[10] = -(pcVar1[10] == auVar17[2]);
      auVar21[0xb] = -(pcVar1[0xb] == auVar17[3]);
      auVar21[0xc] = -(pcVar1[0xc] == auVar17[4]);
      auVar21[0xd] = -(pcVar1[0xd] == auVar17[5]);
      auVar21[0xe] = -(pcVar1[0xe] == auVar17[6]);
      auVar21[0xf] = -(pcVar1[0xf] == auVar17[7]);
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
        lVar15 = (uVar3 + uVar8 & uVar5) * -0xd8;
        if (puStack_40 == *(undefined8 **)(lVar9 + -0xd8 + lVar15)) {
          pbVar11 = (byte *)(lVar9 + lVar15 + -5);
          *pbVar11 = *pbVar11 | 2;
          goto LAB_14232a731;
        }
        uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
        uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
      }
      auVar18[0] = -(*pcVar1 == -1);
      auVar18[1] = -(pcVar1[1] == -1);
      auVar18[2] = -(pcVar1[2] == -1);
      auVar18[3] = -(pcVar1[3] == -1);
      auVar18[4] = -(pcVar1[4] == -1);
      auVar18[5] = -(pcVar1[5] == -1);
      auVar18[6] = -(pcVar1[6] == -1);
      auVar18[7] = -(pcVar1[7] == -1);
      auVar18[8] = -(pcVar1[8] == -1);
      auVar18[9] = -(pcVar1[9] == -1);
      auVar18[10] = -(pcVar1[10] == -1);
      auVar18[0xb] = -(pcVar1[0xb] == -1);
      auVar18[0xc] = -(pcVar1[0xc] == -1);
      auVar18[0xd] = -(pcVar1[0xd] == -1);
      auVar18[0xe] = -(pcVar1[0xe] == -1);
      auVar18[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar18 >> 0x17,0) & 1) != 0) || (SUB161(auVar18 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar18 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar18 >> 0x3f,0) & 1) != 0) || (SUB161(auVar18 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar18 >> 0x4f,0) & 1) != 0) || (SUB161(auVar18 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar18 >> 0x5f,0) & 1) != 0) || (SUB161(auVar18 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar18 >> 0x6f,0) & 1) != 0) || (SUB161(auVar18 >> 0x77,0) & 1) != 0) ||
          auVar18[0xf] < '\0') break;
      uVar8 = uVar8 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142fa6b48);
}

