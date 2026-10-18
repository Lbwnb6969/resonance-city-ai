// VA 0x1423296b0, PDB extent 1101 bytes
// toolbar::menu::mods_workshop_tab::browse_workshop_button
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/mods_workshop_tab.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::mods_workshop_tab::browse_workshop_button
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/mods_workshop_tab.rs
   Extent: 1101 */

void pdb_1423296b0(longlong param_1,ulonglong *param_2,undefined8 param_3)

{
  char *pcVar1;
  ulonglong uVar2;
  undefined *puVar3;
  ulonglong uVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
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
  undefined *puStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  byte *pbStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  byte *pbStack_68;
  undefined *puStack_60;
  byte *pbStack_58;
  undefined *puStack_50;
  byte *pbStack_48;
  ulonglong uStack_40;
  undefined1 uStack_31;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  puStack_70 = (undefined *)*param_2;
  if (SBORROW8(0,(longlong)puStack_70)) {
    return;
  }
  pbStack_68 = (byte *)param_2[1];
  uVar2 = param_2[2];
  puVar3 = *(undefined **)(param_1 + 8);
  puStack_88 = &UNK_1434da55e;
  pbStack_80 = (byte *)0x6;
  uStack_31 = 0;
  puStack_50 = (undefined *)pdb_140bbbcb0(&puStack_88);
  pbStack_48 = _DAT_14329c330;
  uStack_40 = _UNK_14329c338;
  uStack_31 = 0;
  pbStack_48 = (byte *)pdb_1400affa0(&puStack_50);
  uStack_31 = 0;
  puStack_50 = puVar3;
  uVar8 = pdb_1400b0130(&puStack_50);
  uStack_31 = 0;
  pdb_14072caa0(&puStack_50,param_1,uVar8);
  puVar3 = puStack_50;
  if (*(longlong *)(puStack_50 + 0x1c8) != 0) {
    uStack_31 = 0;
    uVar9 = pdb_1400af0a0(puStack_50 + 0x1d0,&pbStack_48);
    lVar10 = *(longlong *)(puVar3 + 0x1b0);
    uVar4 = *(ulonglong *)(puVar3 + 0x1b8);
    bVar15 = (byte)(uVar9 >> 0x39);
    auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
    auVar16 = pshuflw(auVar16,auVar16,0);
    lVar11 = 0;
    while( true ) {
      uVar9 = uVar9 & uVar4;
      auVar20 = *(undefined1 (*) [16])(lVar10 + uVar9);
      auVar19[0] = -(auVar20[0] == auVar16[0]);
      auVar19[1] = -(auVar20[1] == auVar16[1]);
      auVar19[2] = -(auVar20[2] == auVar16[2]);
      auVar19[3] = -(auVar20[3] == auVar16[3]);
      auVar19[4] = -(auVar20[4] == auVar16[4]);
      auVar19[5] = -(auVar20[5] == auVar16[5]);
      auVar19[6] = -(auVar20[6] == auVar16[6]);
      auVar19[7] = -(auVar20[7] == auVar16[7]);
      auVar19[8] = -(auVar20[8] == auVar16[0]);
      auVar19[9] = -(auVar20[9] == auVar16[1]);
      auVar19[10] = -(auVar20[10] == auVar16[2]);
      auVar19[0xb] = -(auVar20[0xb] == auVar16[3]);
      auVar19[0xc] = -(auVar20[0xc] == auVar16[4]);
      auVar19[0xd] = -(auVar20[0xd] == auVar16[5]);
      auVar19[0xe] = -(auVar20[0xe] == auVar16[6]);
      auVar19[0xf] = -(auVar20[0xf] == auVar16[7]);
      uVar13 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
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
      uVar12 = (uint)uVar13;
      while (uVar13 != 0) {
        uVar6 = 0;
        for (uVar7 = uVar12; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        lVar14 = (uVar6 + uVar9 & uVar4) * -0xd8;
        if (pbStack_48 == *(byte **)(lVar10 + -0xd8 + lVar14)) {
          lVar10 = lVar10 + lVar14;
          *(undefined1 (*) [16])(lVar10 + -0x9c) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(lVar10 + -0xa8) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(lVar10 + -0xb8) = (undefined1  [16])0x0;
          *(undefined4 *)(lVar10 + -0x8c) = 0x447a0000;
          *(undefined1 (*) [16])(lVar10 + -0x88) = (undefined1  [16])0x0;
          *(undefined8 *)(lVar10 + -0x78) = 0x402000100000000;
          uStack_b8 = uStack_40;
          puStack_c8 = puStack_50;
          pbStack_c0 = pbStack_48;
          uStack_31 = 0;
          uVar8 = 0x18;
          uStack_98 = pdb_140dc6290(&UNK_1434da564);
          puStack_a8 = &uStack_98;
          pcStack_a0 = pdb_1402ed400;
          uStack_31 = 0;
          uStack_90 = uVar8;
          pdb_140f60760(&puStack_50,&UNK_1434da57c,&puStack_a8);
          puStack_60 = puStack_50;
          pbStack_58 = pbStack_48;
          pdb_1407339e0(&puStack_50,&puStack_c8);
          uVar8 = pdb_14116dd60(&puStack_50);
          pdb_14119b2b0(uVar8);
          puVar3 = puStack_50;
          puStack_88 = puStack_50;
          pbStack_80 = pbStack_48;
          uStack_78 = uStack_40;
          if (*(longlong *)(puStack_50 + 0x1c8) != 0) {
            uVar9 = pdb_1400af0a0(puStack_50 + 0x1d0,&pbStack_80);
            lVar10 = *(longlong *)(puVar3 + 0x1b0);
            uVar4 = *(ulonglong *)(puVar3 + 0x1b8);
            bVar15 = (byte)(uVar9 >> 0x39);
            auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
            auVar16 = pshuflw(auVar16,auVar16,0);
            lVar11 = 0;
            while( true ) {
              uVar9 = uVar9 & uVar4;
              pcVar1 = (char *)(lVar10 + uVar9);
              auVar20[0] = -(*pcVar1 == auVar16[0]);
              auVar20[1] = -(pcVar1[1] == auVar16[1]);
              auVar20[2] = -(pcVar1[2] == auVar16[2]);
              auVar20[3] = -(pcVar1[3] == auVar16[3]);
              auVar20[4] = -(pcVar1[4] == auVar16[4]);
              auVar20[5] = -(pcVar1[5] == auVar16[5]);
              auVar20[6] = -(pcVar1[6] == auVar16[6]);
              auVar20[7] = -(pcVar1[7] == auVar16[7]);
              auVar20[8] = -(pcVar1[8] == auVar16[0]);
              auVar20[9] = -(pcVar1[9] == auVar16[1]);
              auVar20[10] = -(pcVar1[10] == auVar16[2]);
              auVar20[0xb] = -(pcVar1[0xb] == auVar16[3]);
              auVar20[0xc] = -(pcVar1[0xc] == auVar16[4]);
              auVar20[0xd] = -(pcVar1[0xd] == auVar16[5]);
              auVar20[0xe] = -(pcVar1[0xe] == auVar16[6]);
              auVar20[0xf] = -(pcVar1[0xf] == auVar16[7]);
              uVar13 = (ushort)(SUB161(auVar20 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
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
                       (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar20[0xf] >> 7) << 0xf;
              uVar12 = (uint)uVar13;
              while (uVar13 != 0) {
                uVar6 = 0;
                for (uVar7 = uVar12; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                  uVar6 = uVar6 + 1;
                }
                lVar14 = (uVar6 + uVar9 & uVar4) * -0xd8;
                if (pbStack_80 == *(byte **)(lVar10 + -0xd8 + lVar14)) {
                  if ((*(byte *)(lVar10 + lVar14 + -6) & 0x30) != 0) {
                    if (puStack_60 != (undefined *)0x0) {
                      pub_1406abac0(pbStack_58,(ulonglong)puStack_60,1);
                    }
                    puStack_50 = puStack_70;
                    pbStack_48 = pbStack_68;
                    uStack_31 = 1;
                    uStack_40 = uVar2;
                    pdb_1422d1a80(param_3,&puStack_50);
                    return;
                  }
                  if (puStack_60 != (undefined *)0x0) {
                    pub_1406abac0(pbStack_58,(ulonglong)puStack_60,1);
                  }
                  if (puStack_70 == (undefined *)0x0) {
                    return;
                  }
                  pub_1406abac0(pbStack_68,(ulonglong)puStack_70,1);
                  return;
                }
                uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
                uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
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
              if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar18 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar18 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar18 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar18 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar18 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar18 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar18 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar18 >> 0x4f,0) & 1) != 0) || (SUB161(auVar18 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar18 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar18 >> 0x67,0) & 1) != 0) || (SUB161(auVar18 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar18 >> 0x77,0) & 1) != 0) || auVar18[0xf] < '\0') break;
              uVar9 = uVar9 + lVar11 + 0x10;
              lVar11 = lVar11 + 0x10;
            }
          }
          pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
      }
      auVar17[0] = -(auVar20[0] == -1);
      auVar17[1] = -(auVar20[1] == -1);
      auVar17[2] = -(auVar20[2] == -1);
      auVar17[3] = -(auVar20[3] == -1);
      auVar17[4] = -(auVar20[4] == -1);
      auVar17[5] = -(auVar20[5] == -1);
      auVar17[6] = -(auVar20[6] == -1);
      auVar17[7] = -(auVar20[7] == -1);
      auVar17[8] = -(auVar20[8] == -1);
      auVar17[9] = -(auVar20[9] == -1);
      auVar17[10] = -(auVar20[10] == -1);
      auVar17[0xb] = -(auVar20[0xb] == -1);
      auVar17[0xc] = -(auVar20[0xc] == -1);
      auVar17[0xd] = -(auVar20[0xd] == -1);
      auVar17[0xe] = -(auVar20[0xe] == -1);
      auVar17[0xf] = -(auVar20[0xf] == -1);
      if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 || (SUB161(auVar17 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar17 >> 0x17,0) & 1) != 0) || (SUB161(auVar17 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar17 >> 0x27,0) & 1) != 0) || (SUB161(auVar17 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar17 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar17 >> 0x3f,0) & 1) != 0) || (SUB161(auVar17 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar17 >> 0x4f,0) & 1) != 0) || (SUB161(auVar17 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar17 >> 0x5f,0) & 1) != 0) || (SUB161(auVar17 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar17 >> 0x6f,0) & 1) != 0) || (SUB161(auVar17 >> 0x77,0) & 1) != 0) ||
          auVar17[0xf] < '\0') break;
      uVar9 = uVar9 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
  uStack_31 = 0;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142fa6b30);
}

