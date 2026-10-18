// VA 0x140c35390, PDB extent 813 bytes
// country_core::systems::wall::eraser::archivist::WallEraserArchivist::add_fully_erased_event
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/eraser/archivist.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::wall::eraser::archivist::WallEraserArchivist::add_fully_erased_event
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/eraser/archivist.rs
   Extent: 813 */

void pdb_140c35390(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ushort uVar12;
  longlong lVar13;
  longlong lVar14;
  byte bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  longlong lStack_50;
  longlong lStack_48;
  longlong alStack_40 [4];
  
  lStack_50 = param_2;
  if (param_1[3] != 0) {
    uVar7 = pdb_1400af0a0(param_1 + 4,&lStack_50);
    bVar15 = (byte)(uVar7 >> 0x39);
    auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
    auVar16 = pshuflw(auVar16,auVar16,0);
    lVar9 = 0;
    while( true ) {
      uVar7 = uVar7 & param_1[1];
      auVar22 = *(undefined1 (*) [16])(*param_1 + uVar7);
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
      uVar12 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
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
      uVar8 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        lVar13 = *param_1 + (uVar4 + uVar7 & param_1[1]) * -0x10;
        if (param_2 == *(longlong *)(lVar13 + -0x10)) {
          lVar9 = *(longlong *)(lVar13 + -8);
          lStack_48 = lVar9;
          if (param_1[0xf] != 0) {
            uVar7 = pdb_1400af0a0(param_1 + 0x10,&lStack_48);
            lVar13 = param_1[0xc];
            bVar15 = (byte)(uVar7 >> 0x39);
            auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
            auVar16 = pshuflw(auVar16,auVar16,0);
            lVar10 = 0;
            while( true ) {
              uVar7 = uVar7 & param_1[0xd];
              auVar22 = *(undefined1 (*) [16])(lVar13 + uVar7);
              auVar21[0] = -(auVar22[0] == auVar16[0]);
              auVar21[1] = -(auVar22[1] == auVar16[1]);
              auVar21[2] = -(auVar22[2] == auVar16[2]);
              auVar21[3] = -(auVar22[3] == auVar16[3]);
              auVar21[4] = -(auVar22[4] == auVar16[4]);
              auVar21[5] = -(auVar22[5] == auVar16[5]);
              auVar21[6] = -(auVar22[6] == auVar16[6]);
              auVar21[7] = -(auVar22[7] == auVar16[7]);
              auVar21[8] = -(auVar22[8] == auVar16[0]);
              auVar21[9] = -(auVar22[9] == auVar16[1]);
              auVar21[10] = -(auVar22[10] == auVar16[2]);
              auVar21[0xb] = -(auVar22[0xb] == auVar16[3]);
              auVar21[0xc] = -(auVar22[0xc] == auVar16[4]);
              auVar21[0xd] = -(auVar22[0xd] == auVar16[5]);
              auVar21[0xe] = -(auVar22[0xe] == auVar16[6]);
              auVar21[0xf] = -(auVar22[0xf] == auVar16[7]);
              uVar12 = (ushort)(SUB161(auVar21 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
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
                       (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar21[0xf] >> 7) << 0xf;
              uVar8 = (uint)uVar12;
              while (uVar12 != 0) {
                uVar4 = 0;
                for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
                  uVar4 = uVar4 + 1;
                }
                lVar14 = (uVar4 + uVar7 & param_1[0xd]) * -0x90;
                if (lVar9 == *(longlong *)(lVar13 + -0x90 + lVar14)) {
                  lVar13 = lVar13 + lVar14;
                  if (SBORROW8(0,*(longlong *)(lVar13 + -0x18))) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc83d0(&UNK_14306c7f0,0x61,&UNK_14306c820);
                  }
                  lVar10 = *(longlong *)(lVar13 + -8);
                  if (lVar10 != 0) {
                    lVar14 = *(longlong *)(lVar13 + -0x10);
                    lVar11 = 0;
                    do {
                      if (*(longlong *)(lVar14 + lVar11) == param_2) {
                        uVar3 = *(undefined8 *)(lVar14 + 8 + lVar11);
                        lVar10 = lVar10 + -1;
                        puVar1 = (undefined8 *)(lVar14 + lVar10 * 0x10);
                        uVar6 = puVar1[1];
                        *(undefined8 *)(lVar14 + lVar11) = *puVar1;
                        ((undefined8 *)(lVar14 + lVar11))[1] = uVar6;
                        *(longlong *)(lVar13 + -8) = lVar10;
                        if (lVar10 != 0) {
                          return;
                        }
                        alStack_40[0] = lVar9;
                        if (param_1[0xf] != 0) {
                          uVar7 = pdb_1400af0a0(param_1 + 0x10,alStack_40);
                          lVar13 = param_1[0xc];
                          bVar15 = (byte)(uVar7 >> 0x39);
                          auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
                          auVar16 = pshuflw(auVar16,auVar16,0);
                          lVar10 = 0;
                          while( true ) {
                            uVar7 = uVar7 & param_1[0xd];
                            pcVar2 = (char *)(lVar13 + uVar7);
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
                            uVar12 = (ushort)(SUB161(auVar22 >> 7,0) & 1) |
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
                            uVar8 = (uint)uVar12;
                            while (uVar12 != 0) {
                              uVar4 = 0;
                              for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000)
                              {
                                uVar4 = uVar4 + 1;
                              }
                              lVar14 = (uVar4 + uVar7 & param_1[0xd]) * -0x90;
                              if (lVar9 == *(longlong *)(lVar13 + -0x90 + lVar14)) {
                                lVar13 = lVar13 + lVar14;
                                lVar9 = *(longlong *)(lVar13 + -0x18);
                                if ((!SBORROW8(0,lVar9)) && (lVar9 != 0)) {
                                  pub_1406abac0(*(byte **)(lVar13 + -0x10),lVar9 << 4,8);
                                }
                                *(undefined8 *)(lVar13 + -0x18) = 0x8000000000000000;
                                *(undefined8 *)(lVar13 + -0x10) = uVar3;
                                *(undefined1 *)(lVar13 + -8) = 0;
                                return;
                              }
                              uVar12 = (ushort)(uVar8 - 1) & (ushort)uVar8;
                              uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar12);
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
                            if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 ||
                                             (SUB161(auVar19 >> 0xf,0) & 1) != 0) ||
                                            (SUB161(auVar19 >> 0x17,0) & 1) != 0) ||
                                           (SUB161(auVar19 >> 0x1f,0) & 1) != 0) ||
                                          (SUB161(auVar19 >> 0x27,0) & 1) != 0) ||
                                         (SUB161(auVar19 >> 0x2f,0) & 1) != 0) ||
                                        (SUB161(auVar19 >> 0x37,0) & 1) != 0) ||
                                       (SUB161(auVar19 >> 0x3f,0) & 1) != 0) ||
                                      (SUB161(auVar19 >> 0x47,0) & 1) != 0) ||
                                     (SUB161(auVar19 >> 0x4f,0) & 1) != 0) ||
                                    (SUB161(auVar19 >> 0x57,0) & 1) != 0) ||
                                   (SUB161(auVar19 >> 0x5f,0) & 1) != 0) ||
                                  (SUB161(auVar19 >> 0x67,0) & 1) != 0) ||
                                 (SUB161(auVar19 >> 0x6f,0) & 1) != 0) ||
                                (SUB161(auVar19 >> 0x77,0) & 1) != 0) || auVar19[0xf] < '\0') break;
                            uVar7 = uVar7 + lVar10 + 0x10;
                            lVar10 = lVar10 + 0x10;
                          }
                        }
                    /* WARNING: Subroutine does not return */
                        pdb_142dc8150(&UNK_14306c888);
                      }
                      lVar11 = lVar11 + 0x10;
                    } while (lVar10 << 4 != lVar11);
                  }
                    /* WARNING: Subroutine does not return */
                  pdb_142dc8150(&UNK_14306c5d8);
                }
                uVar12 = (ushort)(uVar8 - 1) & (ushort)uVar8;
                uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar12);
              }
              auVar18[0] = -(auVar22[0] == -1);
              auVar18[1] = -(auVar22[1] == -1);
              auVar18[2] = -(auVar22[2] == -1);
              auVar18[3] = -(auVar22[3] == -1);
              auVar18[4] = -(auVar22[4] == -1);
              auVar18[5] = -(auVar22[5] == -1);
              auVar18[6] = -(auVar22[6] == -1);
              auVar18[7] = -(auVar22[7] == -1);
              auVar18[8] = -(auVar22[8] == -1);
              auVar18[9] = -(auVar22[9] == -1);
              auVar18[10] = -(auVar22[10] == -1);
              auVar18[0xb] = -(auVar22[0xb] == -1);
              auVar18[0xc] = -(auVar22[0xc] == -1);
              auVar18[0xd] = -(auVar22[0xd] == -1);
              auVar18[0xe] = -(auVar22[0xe] == -1);
              auVar18[0xf] = -(auVar22[0xf] == -1);
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
              uVar7 = uVar7 + lVar10 + 0x10;
              lVar10 = lVar10 + 0x10;
            }
          }
          goto LAB_140c35643;
        }
        uVar12 = (ushort)(uVar8 - 1) & (ushort)uVar8;
        uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar12);
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
      uVar7 = uVar7 + lVar9 + 0x10;
      lVar9 = lVar9 + 0x10;
    }
  }
  pdb_142dc8110(&UNK_14306c471,0x16,&UNK_14306c7c0);
LAB_140c35643:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14306c7d8);
}

