// VA 0x142328200, PDB extent 1116 bytes
// toolbar::menu::mods_glade_tab::list_slot
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/mods_glade_tab.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::mods_glade_tab::list_slot
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/mods_glade_tab.rs
   Extent: 1116 */

void pdb_142328200(longlong param_1,undefined *param_2,undefined *param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  longlong lVar13;
  uint uVar14;
  ushort uVar15;
  longlong lVar16;
  byte bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  longlong lStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar3 = *(undefined **)(param_1 + 8);
  puStack_88 = &UNK_1434da2c2;
  puStack_80 = (undefined *)0xa;
  puStack_b8 = (undefined *)pdb_140bbbcb0(&puStack_88);
  puStack_b0 = _DAT_14329c330;
  puStack_a8 = (undefined8 *)_UNK_14329c338;
  puStack_b0 = (undefined *)pdb_1400affa0(&puStack_b8);
  puStack_b8 = puVar3;
  uVar7 = pdb_1400b0130(&puStack_b8);
  pdb_14072caa0(&puStack_b8,param_1,uVar7);
  puVar3 = puStack_b8;
  if (*(longlong *)(puStack_b8 + 0x1c8) != 0) {
    uVar8 = pdb_1400af0a0(puStack_b8 + 0x1d0,&puStack_b0);
    lVar10 = *(longlong *)(puVar3 + 0x1b0);
    uVar4 = *(ulonglong *)(puVar3 + 0x1b8);
    bVar17 = (byte)(uVar8 >> 0x39);
    auVar18 = ZEXT216(CONCAT11(bVar17,bVar17));
    auVar18 = pshuflw(auVar18,auVar18,0);
    lVar13 = 0;
    while( true ) {
      uVar8 = uVar8 & uVar4;
      auVar2 = *(undefined1 (*) [16])(lVar10 + uVar8);
      auVar21[0] = -(auVar2[0] == auVar18[0]);
      auVar21[1] = -(auVar2[1] == auVar18[1]);
      auVar21[2] = -(auVar2[2] == auVar18[2]);
      auVar21[3] = -(auVar2[3] == auVar18[3]);
      auVar21[4] = -(auVar2[4] == auVar18[4]);
      auVar21[5] = -(auVar2[5] == auVar18[5]);
      auVar21[6] = -(auVar2[6] == auVar18[6]);
      auVar21[7] = -(auVar2[7] == auVar18[7]);
      auVar21[8] = -(auVar2[8] == auVar18[0]);
      auVar21[9] = -(auVar2[9] == auVar18[1]);
      auVar21[10] = -(auVar2[10] == auVar18[2]);
      auVar21[0xb] = -(auVar2[0xb] == auVar18[3]);
      auVar21[0xc] = -(auVar2[0xc] == auVar18[4]);
      auVar21[0xd] = -(auVar2[0xd] == auVar18[5]);
      auVar21[0xe] = -(auVar2[0xe] == auVar18[6]);
      auVar21[0xf] = -(auVar2[0xf] == auVar18[7]);
      uVar15 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
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
      uVar14 = (uint)uVar15;
      while (uVar15 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar14; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        lVar16 = (uVar5 + uVar8 & uVar4) * -0xd8;
        if (puStack_b0 == *(undefined **)(lVar10 + -0xd8 + lVar16)) {
          lVar10 = lVar10 + lVar16;
          *(undefined1 (*) [16])(lVar10 + -0xa8) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(lVar10 + -0xb8) = (undefined1  [16])0x0;
          *(undefined8 *)(lVar10 + -0x98) = 0x4170000000000000;
          *(undefined8 *)(lVar10 + -0x90) = 0x447a000000000000;
          *(undefined1 (*) [16])(lVar10 + -0x88) = (undefined1  [16])0x0;
          *(undefined8 *)(lVar10 + -0x78) = 0x402000100000000;
          uStack_48 = puStack_a8;
          puStack_58 = puStack_b8;
          puStack_50 = puStack_b0;
          uVar12 = 0x11;
          uVar7 = pdb_140dc6290(&UNK_1434da2cc);
          uStack_68 = uVar7;
          uStack_60 = uVar12;
          puStack_b8 = (undefined *)pdb_140bbbcb0(&uStack_68);
          puStack_b0 = _DAT_14329c260;
          puStack_a8 = (undefined8 *)_UNK_14329c268;
          puStack_b0 = (undefined *)pdb_1400affa0(&puStack_b8);
          puStack_b8 = puStack_50;
          uVar9 = pdb_1400b0130(&puStack_b8);
          pdb_14072caa0(&puStack_b8,&puStack_58,uVar9);
          uVar9 = pdb_14116ee90(&puStack_b8,0);
          pdb_14119b6b0(uVar9,uVar7,uVar12);
          uStack_78 = puStack_a8;
          puStack_88 = puStack_b8;
          puStack_80 = puStack_b0;
          uVar7 = pdb_14116e180(&puStack_88);
          pdb_14119b2b0(uVar7);
          puStack_a8 = (undefined8 *)uStack_78;
          puStack_b8 = puStack_88;
          puStack_b0 = puStack_80;
          lVar10 = pdb_14116e180(&puStack_b8);
          puVar3 = puStack_b8;
          *(undefined4 *)(lVar10 + 600) = 0xffffffa0;
          puStack_88 = puStack_b8;
          puStack_80 = puStack_b0;
          uStack_78 = puStack_a8;
          if (*(longlong *)(puStack_b8 + 0x1c8) != 0) {
            uVar8 = pdb_1400af0a0(puStack_b8 + 0x1d0,&puStack_80);
            lVar10 = *(longlong *)(puVar3 + 0x1b0);
            uVar4 = *(ulonglong *)(puVar3 + 0x1b8);
            bVar17 = (byte)(uVar8 >> 0x39);
            auVar18 = ZEXT216(CONCAT11(bVar17,bVar17));
            auVar18 = pshuflw(auVar18,auVar18,0);
            lVar13 = 0;
            while( true ) {
              uVar8 = uVar8 & uVar4;
              auVar2 = *(undefined1 (*) [16])(lVar10 + uVar8);
              auVar22[0] = -(auVar2[0] == auVar18[0]);
              auVar22[1] = -(auVar2[1] == auVar18[1]);
              auVar22[2] = -(auVar2[2] == auVar18[2]);
              auVar22[3] = -(auVar2[3] == auVar18[3]);
              auVar22[4] = -(auVar2[4] == auVar18[4]);
              auVar22[5] = -(auVar2[5] == auVar18[5]);
              auVar22[6] = -(auVar2[6] == auVar18[6]);
              auVar22[7] = -(auVar2[7] == auVar18[7]);
              auVar22[8] = -(auVar2[8] == auVar18[0]);
              auVar22[9] = -(auVar2[9] == auVar18[1]);
              auVar22[10] = -(auVar2[10] == auVar18[2]);
              auVar22[0xb] = -(auVar2[0xb] == auVar18[3]);
              auVar22[0xc] = -(auVar2[0xc] == auVar18[4]);
              auVar22[0xd] = -(auVar2[0xd] == auVar18[5]);
              auVar22[0xe] = -(auVar2[0xe] == auVar18[6]);
              auVar22[0xf] = -(auVar2[0xf] == auVar18[7]);
              uVar15 = (ushort)(SUB161(auVar22 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
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
                       (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar22[0xf] >> 7) << 0xf;
              uVar14 = (uint)uVar15;
              while (uVar15 != 0) {
                uVar5 = 0;
                for (uVar6 = uVar14; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                  uVar5 = uVar5 + 1;
                }
                lVar16 = (uVar5 + uVar8 & uVar4) * -0xd8;
                if (puStack_80 == *(undefined **)(lVar10 + -0xd8 + lVar16)) {
                  pbVar1 = (byte *)(lVar10 + lVar16 + -5);
                  *pbVar1 = *pbVar1 | 2;
                  uStack_68 = param_6;
                  puVar3 = param_3 + param_5;
                  puVar11 = (undefined *)0x5;
                  if (puVar3 < (undefined *)0x5) {
                    puVar11 = puVar3;
                  }
                  pdb_1411739b0(&puStack_88,&puStack_58,&UNK_14360ce64,8,puVar11,puVar3,0x42300000);
                  puStack_a8 = &uStack_68;
                  lStack_98 = param_5;
                  uStack_90 = param_7;
                  puStack_b8 = param_2;
                  puStack_b0 = param_3;
                  uStack_a0 = param_4;
                  pdb_1422f6510(&puStack_88,&puStack_b8);
                  return;
                }
                uVar15 = (ushort)(uVar14 - 1) & (ushort)uVar14;
                uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar15);
              }
              auVar20[0] = -(auVar2[0] == -1);
              auVar20[1] = -(auVar2[1] == -1);
              auVar20[2] = -(auVar2[2] == -1);
              auVar20[3] = -(auVar2[3] == -1);
              auVar20[4] = -(auVar2[4] == -1);
              auVar20[5] = -(auVar2[5] == -1);
              auVar20[6] = -(auVar2[6] == -1);
              auVar20[7] = -(auVar2[7] == -1);
              auVar20[8] = -(auVar2[8] == -1);
              auVar20[9] = -(auVar2[9] == -1);
              auVar20[10] = -(auVar2[10] == -1);
              auVar20[0xb] = -(auVar2[0xb] == -1);
              auVar20[0xc] = -(auVar2[0xc] == -1);
              auVar20[0xd] = -(auVar2[0xd] == -1);
              auVar20[0xe] = -(auVar2[0xe] == -1);
              auVar20[0xf] = -(auVar2[0xf] == -1);
              if ((((((((((((((((SUB161(auVar20 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar20 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar20 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar20 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar20 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar20 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar20 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar20 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar20 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar20 >> 0x4f,0) & 1) != 0) || (SUB161(auVar20 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar20 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar20 >> 0x67,0) & 1) != 0) || (SUB161(auVar20 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar20 >> 0x77,0) & 1) != 0) || auVar20[0xf] < '\0') break;
              uVar8 = uVar8 + lVar13 + 0x10;
              lVar13 = lVar13 + 0x10;
            }
          }
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_142fa6b48);
        }
        uVar15 = (ushort)(uVar14 - 1) & (ushort)uVar14;
        uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar15);
      }
      auVar19[0] = -(auVar2[0] == -1);
      auVar19[1] = -(auVar2[1] == -1);
      auVar19[2] = -(auVar2[2] == -1);
      auVar19[3] = -(auVar2[3] == -1);
      auVar19[4] = -(auVar2[4] == -1);
      auVar19[5] = -(auVar2[5] == -1);
      auVar19[6] = -(auVar2[6] == -1);
      auVar19[7] = -(auVar2[7] == -1);
      auVar19[8] = -(auVar2[8] == -1);
      auVar19[9] = -(auVar2[9] == -1);
      auVar19[10] = -(auVar2[10] == -1);
      auVar19[0xb] = -(auVar2[0xb] == -1);
      auVar19[0xc] = -(auVar2[0xc] == -1);
      auVar19[0xd] = -(auVar2[0xd] == -1);
      auVar19[0xe] = -(auVar2[0xe] == -1);
      auVar19[0xf] = -(auVar2[0xf] == -1);
      if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 || (SUB161(auVar19 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar19 >> 0x17,0) & 1) != 0) || (SUB161(auVar19 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar19 >> 0x27,0) & 1) != 0) || (SUB161(auVar19 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar19 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar19 >> 0x3f,0) & 1) != 0) || (SUB161(auVar19 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar19 >> 0x4f,0) & 1) != 0) || (SUB161(auVar19 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar19 >> 0x5f,0) & 1) != 0) || (SUB161(auVar19 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar19 >> 0x6f,0) & 1) != 0) || (SUB161(auVar19 >> 0x77,0) & 1) != 0) ||
          auVar19[0xf] < '\0') break;
      uVar8 = uVar8 + lVar13 + 0x10;
      lVar13 = lVar13 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142fa6b30);
}

