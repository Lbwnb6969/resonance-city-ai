// VA 0x141b054e0, PDB extent 1383 bytes
// country_core::startup::load_clutter_packs::resync_clutter
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_clutter_packs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::startup::load_clutter_packs::resync_clutter
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_clutter_packs.rs
   Extent: 1383 */

void pdb_141b054e0(undefined8 *param_1,char param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
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
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  char cStack_51;
  char *pcStack_50;
  code *pcStack_48;
  
  plVar3 = (longlong *)*param_1;
  uVar4 = param_1[3];
  lVar12 = *plVar3;
  plVar5 = (longlong *)param_1[4];
  uVar6 = param_1[7];
  if (param_2 != '\0') {
    pcStack_50._0_1_ = 0x14;
    if (plVar5[3] != 0) {
      uVar9 = pdb_1417c4b30(plVar5 + 4,&pcStack_50);
      lVar10 = *plVar5;
      bVar16 = (byte)(uVar9 >> 0x39);
      auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
      auVar17 = pshuflw(auVar17,auVar17,0);
      lVar11 = 0;
      while( true ) {
        uVar9 = uVar9 & plVar5[1];
        auVar2 = *(undefined1 (*) [16])(lVar10 + uVar9);
        auVar24[0] = -(auVar2[0] == auVar17[0]);
        auVar24[1] = -(auVar2[1] == auVar17[1]);
        auVar24[2] = -(auVar2[2] == auVar17[2]);
        auVar24[3] = -(auVar2[3] == auVar17[3]);
        auVar24[4] = -(auVar2[4] == auVar17[4]);
        auVar24[5] = -(auVar2[5] == auVar17[5]);
        auVar24[6] = -(auVar2[6] == auVar17[6]);
        auVar24[7] = -(auVar2[7] == auVar17[7]);
        auVar24[8] = -(auVar2[8] == auVar17[0]);
        auVar24[9] = -(auVar2[9] == auVar17[1]);
        auVar24[10] = -(auVar2[10] == auVar17[2]);
        auVar24[0xb] = -(auVar2[0xb] == auVar17[3]);
        auVar24[0xc] = -(auVar2[0xc] == auVar17[4]);
        auVar24[0xd] = -(auVar2[0xd] == auVar17[5]);
        auVar24[0xe] = -(auVar2[0xe] == auVar17[6]);
        auVar24[0xf] = -(auVar2[0xf] == auVar17[7]);
        uVar14 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe | (ushort)(auVar24[0xf] >> 7) << 0xf
        ;
        uVar13 = (uint)uVar14;
        while (uVar14 != 0) {
          uVar7 = 0;
          for (uVar8 = uVar13; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar7 = uVar7 + 1;
          }
          lVar15 = (uVar7 + uVar9 & plVar5[1]) * -0xf0;
          if (*(char *)(lVar10 + -0xf0 + lVar15) == '\x14') {
            lVar10 = lVar10 + lVar15;
            pdb_140c52f30(lVar10 + -0xd8);
            *(undefined1 *)(lVar10 + -8) = 0;
            goto LAB_141b055cd;
          }
          uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
          uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
        }
        auVar18[0] = -(auVar2[0] == -1);
        auVar18[1] = -(auVar2[1] == -1);
        auVar18[2] = -(auVar2[2] == -1);
        auVar18[3] = -(auVar2[3] == -1);
        auVar18[4] = -(auVar2[4] == -1);
        auVar18[5] = -(auVar2[5] == -1);
        auVar18[6] = -(auVar2[6] == -1);
        auVar18[7] = -(auVar2[7] == -1);
        auVar18[8] = -(auVar2[8] == -1);
        auVar18[9] = -(auVar2[9] == -1);
        auVar18[10] = -(auVar2[10] == -1);
        auVar18[0xb] = -(auVar2[0xb] == -1);
        auVar18[0xc] = -(auVar2[0xc] == -1);
        auVar18[0xd] = -(auVar2[0xd] == -1);
        auVar18[0xe] = -(auVar2[0xe] == -1);
        auVar18[0xf] = -(auVar2[0xf] == -1);
        if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar18 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar18 >> 0x1f,0) & 1) != 0) || (SUB161(auVar18 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar18 >> 0x37,0) & 1) != 0) || (SUB161(auVar18 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar18 >> 0x47,0) & 1) != 0) || (SUB161(auVar18 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar18 >> 0x57,0) & 1) != 0) || (SUB161(auVar18 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar18 >> 0x67,0) & 1) != 0) || (SUB161(auVar18 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar18 >> 0x77,0) & 1) != 0) || auVar18[0xf] < '\0') break;
        uVar9 = uVar9 + lVar11 + 0x10;
        lVar11 = lVar11 + 0x10;
      }
LAB_141b055cd:
      pcStack_50._0_1_ = 0x15;
      if (plVar5[3] != 0) {
        uVar9 = pdb_1417c4b30(plVar5 + 4,&pcStack_50);
        lVar10 = *plVar5;
        bVar16 = (byte)(uVar9 >> 0x39);
        auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
        auVar17 = pshuflw(auVar17,auVar17,0);
        lVar11 = 0;
        while( true ) {
          uVar9 = uVar9 & plVar5[1];
          auVar2 = *(undefined1 (*) [16])(lVar10 + uVar9);
          auVar25[0] = -(auVar2[0] == auVar17[0]);
          auVar25[1] = -(auVar2[1] == auVar17[1]);
          auVar25[2] = -(auVar2[2] == auVar17[2]);
          auVar25[3] = -(auVar2[3] == auVar17[3]);
          auVar25[4] = -(auVar2[4] == auVar17[4]);
          auVar25[5] = -(auVar2[5] == auVar17[5]);
          auVar25[6] = -(auVar2[6] == auVar17[6]);
          auVar25[7] = -(auVar2[7] == auVar17[7]);
          auVar25[8] = -(auVar2[8] == auVar17[0]);
          auVar25[9] = -(auVar2[9] == auVar17[1]);
          auVar25[10] = -(auVar2[10] == auVar17[2]);
          auVar25[0xb] = -(auVar2[0xb] == auVar17[3]);
          auVar25[0xc] = -(auVar2[0xc] == auVar17[4]);
          auVar25[0xd] = -(auVar2[0xd] == auVar17[5]);
          auVar25[0xe] = -(auVar2[0xe] == auVar17[6]);
          auVar25[0xf] = -(auVar2[0xf] == auVar17[7]);
          uVar14 = (ushort)(SUB161(auVar25 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar25[0xf] >> 7) << 0xf;
          uVar13 = (uint)uVar14;
          while (uVar14 != 0) {
            uVar7 = 0;
            for (uVar8 = uVar13; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar7 = uVar7 + 1;
            }
            lVar15 = (uVar7 + uVar9 & plVar5[1]) * -0xf0;
            if (*(char *)(lVar10 + -0xf0 + lVar15) == '\x15') {
              lVar10 = lVar10 + lVar15;
              pdb_140c52f30(lVar10 + -0xd8);
              *(undefined1 *)(lVar10 + -8) = 0;
              goto LAB_141b05689;
            }
            uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
            uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
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
          if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 || (SUB161(auVar19 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar19 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar19 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar19 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar19 >> 0x2f,0) & 1) != 0) || (SUB161(auVar19 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar19 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar19 >> 0x47,0) & 1) != 0) || (SUB161(auVar19 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar19 >> 0x57,0) & 1) != 0) || (SUB161(auVar19 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar19 >> 0x67,0) & 1) != 0) || (SUB161(auVar19 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar19 >> 0x77,0) & 1) != 0) || auVar19[0xf] < '\0') break;
          uVar9 = uVar9 + lVar11 + 0x10;
          lVar11 = lVar11 + 0x10;
        }
      }
    }
LAB_141b05689:
    pcStack_50 = (char *)CONCAT71(pcStack_50._1_7_,0x17);
    if (plVar5[3] != 0) {
      uVar9 = pdb_1417c4b30(plVar5 + 4,&pcStack_50);
      lVar10 = *plVar5;
      bVar16 = (byte)(uVar9 >> 0x39);
      auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
      auVar17 = pshuflw(auVar17,auVar17,0);
      lVar11 = 0;
      while( true ) {
        uVar9 = uVar9 & plVar5[1];
        auVar2 = *(undefined1 (*) [16])(lVar10 + uVar9);
        auVar26[0] = -(auVar2[0] == auVar17[0]);
        auVar26[1] = -(auVar2[1] == auVar17[1]);
        auVar26[2] = -(auVar2[2] == auVar17[2]);
        auVar26[3] = -(auVar2[3] == auVar17[3]);
        auVar26[4] = -(auVar2[4] == auVar17[4]);
        auVar26[5] = -(auVar2[5] == auVar17[5]);
        auVar26[6] = -(auVar2[6] == auVar17[6]);
        auVar26[7] = -(auVar2[7] == auVar17[7]);
        auVar26[8] = -(auVar2[8] == auVar17[0]);
        auVar26[9] = -(auVar2[9] == auVar17[1]);
        auVar26[10] = -(auVar2[10] == auVar17[2]);
        auVar26[0xb] = -(auVar2[0xb] == auVar17[3]);
        auVar26[0xc] = -(auVar2[0xc] == auVar17[4]);
        auVar26[0xd] = -(auVar2[0xd] == auVar17[5]);
        auVar26[0xe] = -(auVar2[0xe] == auVar17[6]);
        auVar26[0xf] = -(auVar2[0xf] == auVar17[7]);
        uVar14 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe | (ushort)(auVar26[0xf] >> 7) << 0xf
        ;
        uVar13 = (uint)uVar14;
        while (uVar14 != 0) {
          uVar7 = 0;
          for (uVar8 = uVar13; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar7 = uVar7 + 1;
          }
          lVar15 = (uVar7 + uVar9 & plVar5[1]) * -0xf0;
          if (*(char *)(lVar10 + -0xf0 + lVar15) == '\x17') {
            lVar10 = lVar10 + lVar15;
            pdb_140c52f30(lVar10 + -0xd8);
            *(undefined1 *)(lVar10 + -8) = 0;
            goto LAB_141b05746;
          }
          uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
          uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
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
        if ((((((((((((((((SUB161(auVar20 >> 7,0) & 1) != 0 || (SUB161(auVar20 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar20 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar20 >> 0x1f,0) & 1) != 0) || (SUB161(auVar20 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar20 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar20 >> 0x37,0) & 1) != 0) || (SUB161(auVar20 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar20 >> 0x47,0) & 1) != 0) || (SUB161(auVar20 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar20 >> 0x57,0) & 1) != 0) || (SUB161(auVar20 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar20 >> 0x67,0) & 1) != 0) || (SUB161(auVar20 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar20 >> 0x77,0) & 1) != 0) || auVar20[0xf] < '\0') break;
        uVar9 = uVar9 + lVar11 + 0x10;
        lVar11 = lVar11 + 0x10;
      }
    }
  }
LAB_141b05746:
  pdb_140a57030(plVar5,uVar4);
  cStack_51 = '\x14';
  if (plVar5[3] != 0) {
    lVar12 = lVar12 + 0x10;
    plVar1 = plVar5 + 4;
    uVar9 = pdb_1417c4b30(plVar1,&cStack_51);
    lVar10 = *plVar5;
    bVar16 = (byte)(uVar9 >> 0x39);
    auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
    auVar17 = pshuflw(auVar17,auVar17,0);
    lVar11 = 0;
    while( true ) {
      uVar9 = uVar9 & plVar5[1];
      auVar2 = *(undefined1 (*) [16])(lVar10 + uVar9);
      auVar27[0] = -(auVar2[0] == auVar17[0]);
      auVar27[1] = -(auVar2[1] == auVar17[1]);
      auVar27[2] = -(auVar2[2] == auVar17[2]);
      auVar27[3] = -(auVar2[3] == auVar17[3]);
      auVar27[4] = -(auVar2[4] == auVar17[4]);
      auVar27[5] = -(auVar2[5] == auVar17[5]);
      auVar27[6] = -(auVar2[6] == auVar17[6]);
      auVar27[7] = -(auVar2[7] == auVar17[7]);
      auVar27[8] = -(auVar2[8] == auVar17[0]);
      auVar27[9] = -(auVar2[9] == auVar17[1]);
      auVar27[10] = -(auVar2[10] == auVar17[2]);
      auVar27[0xb] = -(auVar2[0xb] == auVar17[3]);
      auVar27[0xc] = -(auVar2[0xc] == auVar17[4]);
      auVar27[0xd] = -(auVar2[0xd] == auVar17[5]);
      auVar27[0xe] = -(auVar2[0xe] == auVar17[6]);
      auVar27[0xf] = -(auVar2[0xf] == auVar17[7]);
      uVar14 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
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
      uVar13 = (uint)uVar14;
      while (uVar14 != 0) {
        uVar7 = 0;
        for (uVar8 = uVar13; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        lVar15 = (uVar7 + uVar9 & plVar5[1]) * -0xf0;
        if (cStack_51 == *(char *)(lVar10 + -0xf0 + lVar15)) {
          lVar10 = lVar10 + lVar15;
          pdb_1409d3790(uVar6,lVar12,CONCAT71((int7)((ulonglong)lVar11 >> 8),0x14),
                        *(undefined8 *)(lVar10 + -0x50),*(undefined8 *)(lVar10 + -0x48));
          cStack_51 = '\x15';
          if (plVar5[3] == 0) goto LAB_141b05a22;
          uVar9 = pdb_1417c4b30(plVar1,&cStack_51);
          lVar10 = *plVar5;
          bVar16 = (byte)(uVar9 >> 0x39);
          auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
          auVar17 = pshuflw(auVar17,auVar17,0);
          lVar11 = 0;
          goto LAB_141b0587b;
        }
        uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
        uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
      }
      auVar21[0] = -(auVar2[0] == -1);
      auVar21[1] = -(auVar2[1] == -1);
      auVar21[2] = -(auVar2[2] == -1);
      auVar21[3] = -(auVar2[3] == -1);
      auVar21[4] = -(auVar2[4] == -1);
      auVar21[5] = -(auVar2[5] == -1);
      auVar21[6] = -(auVar2[6] == -1);
      auVar21[7] = -(auVar2[7] == -1);
      auVar21[8] = -(auVar2[8] == -1);
      auVar21[9] = -(auVar2[9] == -1);
      auVar21[10] = -(auVar2[10] == -1);
      auVar21[0xb] = -(auVar2[0xb] == -1);
      auVar21[0xc] = -(auVar2[0xc] == -1);
      auVar21[0xd] = -(auVar2[0xd] == -1);
      auVar21[0xe] = -(auVar2[0xe] == -1);
      auVar21[0xf] = -(auVar2[0xf] == -1);
      if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 || (SUB161(auVar21 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar21 >> 0x17,0) & 1) != 0) || (SUB161(auVar21 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar21 >> 0x27,0) & 1) != 0) || (SUB161(auVar21 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar21 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar21 >> 0x3f,0) & 1) != 0) || (SUB161(auVar21 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar21 >> 0x4f,0) & 1) != 0) || (SUB161(auVar21 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar21 >> 0x5f,0) & 1) != 0) || (SUB161(auVar21 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar21 >> 0x6f,0) & 1) != 0) || (SUB161(auVar21 >> 0x77,0) & 1) != 0) ||
          auVar21[0xf] < '\0') break;
      uVar9 = uVar9 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
LAB_141b05a22:
  pcStack_50 = &cStack_51;
  pcStack_48 = pdb_140a593a0;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14303dd85,&pcStack_50,&UNK_14303dde0);
LAB_141b0587b:
  uVar9 = uVar9 & plVar5[1];
  auVar2 = *(undefined1 (*) [16])(lVar10 + uVar9);
  auVar28[0] = -(auVar2[0] == auVar17[0]);
  auVar28[1] = -(auVar2[1] == auVar17[1]);
  auVar28[2] = -(auVar2[2] == auVar17[2]);
  auVar28[3] = -(auVar2[3] == auVar17[3]);
  auVar28[4] = -(auVar2[4] == auVar17[4]);
  auVar28[5] = -(auVar2[5] == auVar17[5]);
  auVar28[6] = -(auVar2[6] == auVar17[6]);
  auVar28[7] = -(auVar2[7] == auVar17[7]);
  auVar28[8] = -(auVar2[8] == auVar17[0]);
  auVar28[9] = -(auVar2[9] == auVar17[1]);
  auVar28[10] = -(auVar2[10] == auVar17[2]);
  auVar28[0xb] = -(auVar2[0xb] == auVar17[3]);
  auVar28[0xc] = -(auVar2[0xc] == auVar17[4]);
  auVar28[0xd] = -(auVar2[0xd] == auVar17[5]);
  auVar28[0xe] = -(auVar2[0xe] == auVar17[6]);
  auVar28[0xf] = -(auVar2[0xf] == auVar17[7]);
  uVar14 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
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
  uVar13 = (uint)uVar14;
  while (uVar14 != 0) {
    uVar7 = 0;
    for (uVar8 = uVar13; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    lVar15 = (uVar7 + uVar9 & plVar5[1]) * -0xf0;
    if (cStack_51 == *(char *)(lVar10 + -0xf0 + lVar15)) {
      lVar10 = lVar10 + lVar15;
      pdb_1409d3790(uVar6,lVar12,CONCAT71((int7)((ulonglong)lVar11 >> 8),0x15),
                    *(undefined8 *)(lVar10 + -0x50),*(undefined8 *)(lVar10 + -0x48));
      cStack_51 = '\x17';
      if (plVar5[3] != 0) {
        uVar9 = pdb_1417c4b30(plVar1,&cStack_51);
        lVar10 = *plVar5;
        bVar16 = (byte)(uVar9 >> 0x39);
        auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
        auVar17 = pshuflw(auVar17,auVar17,0);
        lVar11 = 0;
        while( true ) {
          uVar9 = uVar9 & plVar5[1];
          auVar2 = *(undefined1 (*) [16])(lVar10 + uVar9);
          auVar29[0] = -(auVar2[0] == auVar17[0]);
          auVar29[1] = -(auVar2[1] == auVar17[1]);
          auVar29[2] = -(auVar2[2] == auVar17[2]);
          auVar29[3] = -(auVar2[3] == auVar17[3]);
          auVar29[4] = -(auVar2[4] == auVar17[4]);
          auVar29[5] = -(auVar2[5] == auVar17[5]);
          auVar29[6] = -(auVar2[6] == auVar17[6]);
          auVar29[7] = -(auVar2[7] == auVar17[7]);
          auVar29[8] = -(auVar2[8] == auVar17[0]);
          auVar29[9] = -(auVar2[9] == auVar17[1]);
          auVar29[10] = -(auVar2[10] == auVar17[2]);
          auVar29[0xb] = -(auVar2[0xb] == auVar17[3]);
          auVar29[0xc] = -(auVar2[0xc] == auVar17[4]);
          auVar29[0xd] = -(auVar2[0xd] == auVar17[5]);
          auVar29[0xe] = -(auVar2[0xe] == auVar17[6]);
          auVar29[0xf] = -(auVar2[0xf] == auVar17[7]);
          uVar14 = (ushort)(SUB161(auVar29 >> 7,0) & 1) |
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
          uVar13 = (uint)uVar14;
          while (uVar14 != 0) {
            uVar7 = 0;
            for (uVar8 = uVar13; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar7 = uVar7 + 1;
            }
            lVar15 = (uVar7 + uVar9 & plVar5[1]) * -0xf0;
            if (cStack_51 == *(char *)(lVar10 + -0xf0 + lVar15)) {
              lVar10 = lVar10 + lVar15;
              pdb_1409d3790(uVar6,lVar12,CONCAT71((int7)((ulonglong)lVar11 >> 8),0x17),
                            *(undefined8 *)(lVar10 + -0x50),*(undefined8 *)(lVar10 + -0x48));
              pdb_141b069b0(*plVar3 + 0x10,param_1[1],uVar6,param_1[5],param_1[6]);
              return;
            }
            uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
            uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
          }
          auVar23[0] = -(auVar2[0] == -1);
          auVar23[1] = -(auVar2[1] == -1);
          auVar23[2] = -(auVar2[2] == -1);
          auVar23[3] = -(auVar2[3] == -1);
          auVar23[4] = -(auVar2[4] == -1);
          auVar23[5] = -(auVar2[5] == -1);
          auVar23[6] = -(auVar2[6] == -1);
          auVar23[7] = -(auVar2[7] == -1);
          auVar23[8] = -(auVar2[8] == -1);
          auVar23[9] = -(auVar2[9] == -1);
          auVar23[10] = -(auVar2[10] == -1);
          auVar23[0xb] = -(auVar2[0xb] == -1);
          auVar23[0xc] = -(auVar2[0xc] == -1);
          auVar23[0xd] = -(auVar2[0xd] == -1);
          auVar23[0xe] = -(auVar2[0xe] == -1);
          auVar23[0xf] = -(auVar2[0xf] == -1);
          if ((((((((((((((((SUB161(auVar23 >> 7,0) & 1) != 0 || (SUB161(auVar23 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar23 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar23 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar23 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar23 >> 0x2f,0) & 1) != 0) || (SUB161(auVar23 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar23 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar23 >> 0x47,0) & 1) != 0) || (SUB161(auVar23 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar23 >> 0x57,0) & 1) != 0) || (SUB161(auVar23 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar23 >> 0x67,0) & 1) != 0) || (SUB161(auVar23 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar23 >> 0x77,0) & 1) != 0) || auVar23[0xf] < '\0') break;
          uVar9 = uVar9 + lVar11 + 0x10;
          lVar11 = lVar11 + 0x10;
        }
      }
      goto LAB_141b05a22;
    }
    uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
    uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
  }
  auVar22[0] = -(auVar2[0] == -1);
  auVar22[1] = -(auVar2[1] == -1);
  auVar22[2] = -(auVar2[2] == -1);
  auVar22[3] = -(auVar2[3] == -1);
  auVar22[4] = -(auVar2[4] == -1);
  auVar22[5] = -(auVar2[5] == -1);
  auVar22[6] = -(auVar2[6] == -1);
  auVar22[7] = -(auVar2[7] == -1);
  auVar22[8] = -(auVar2[8] == -1);
  auVar22[9] = -(auVar2[9] == -1);
  auVar22[10] = -(auVar2[10] == -1);
  auVar22[0xb] = -(auVar2[0xb] == -1);
  auVar22[0xc] = -(auVar2[0xc] == -1);
  auVar22[0xd] = -(auVar2[0xd] == -1);
  auVar22[0xe] = -(auVar2[0xe] == -1);
  auVar22[0xf] = -(auVar2[0xf] == -1);
  if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) != 0 || (SUB161(auVar22 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar22 >> 0x17,0) & 1) != 0) || (SUB161(auVar22 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar22 >> 0x27,0) & 1) != 0) || (SUB161(auVar22 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar22 >> 0x37,0) & 1) != 0) || (SUB161(auVar22 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar22 >> 0x47,0) & 1) != 0) || (SUB161(auVar22 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar22 >> 0x57,0) & 1) != 0) || (SUB161(auVar22 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar22 >> 0x67,0) & 1) != 0) || (SUB161(auVar22 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar22 >> 0x77,0) & 1) != 0) || auVar22[0xf] < '\0') goto LAB_141b05a22;
  uVar9 = uVar9 + lVar11 + 0x10;
  lVar11 = lVar11 + 0x10;
  goto LAB_141b0587b;
}

