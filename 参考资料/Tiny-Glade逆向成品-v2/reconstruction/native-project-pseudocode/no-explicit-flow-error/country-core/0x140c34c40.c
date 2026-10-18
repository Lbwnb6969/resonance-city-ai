// VA 0x140c34c40, PDB extent 741 bytes
// country_core::systems::wall::eraser::archivist::WallEraserArchivist::shrink_wall
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/eraser/archivist.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::eraser::archivist::WallEraserArchivist::shrink_wall
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/eraser/archivist.rs
   Extent: 741 */

void pdb_140c34c40(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  float fVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  ushort uVar11;
  longlong lVar12;
  byte bVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fStack_64;
  float *pfStack_60;
  code *pcStack_58;
  longlong alStack_50 [7];
  
  alStack_50[0] = param_2;
  if (param_1[3] != 0) {
    uVar6 = pdb_1400af0a0(param_1 + 4,alStack_50);
    bVar13 = (byte)(uVar6 >> 0x39);
    auVar15 = ZEXT216(CONCAT11(bVar13,bVar13));
    auVar15 = pshuflw(auVar15,auVar15,0);
    lVar8 = 0;
    while( true ) {
      uVar6 = uVar6 & param_1[1];
      auVar2 = *(undefined1 (*) [16])(*param_1 + uVar6);
      auVar18[0] = -(auVar2[0] == auVar15[0]);
      auVar18[1] = -(auVar2[1] == auVar15[1]);
      auVar18[2] = -(auVar2[2] == auVar15[2]);
      auVar18[3] = -(auVar2[3] == auVar15[3]);
      auVar18[4] = -(auVar2[4] == auVar15[4]);
      auVar18[5] = -(auVar2[5] == auVar15[5]);
      auVar18[6] = -(auVar2[6] == auVar15[6]);
      auVar18[7] = -(auVar2[7] == auVar15[7]);
      auVar18[8] = -(auVar2[8] == auVar15[0]);
      auVar18[9] = -(auVar2[9] == auVar15[1]);
      auVar18[10] = -(auVar2[10] == auVar15[2]);
      auVar18[0xb] = -(auVar2[0xb] == auVar15[3]);
      auVar18[0xc] = -(auVar2[0xc] == auVar15[4]);
      auVar18[0xd] = -(auVar2[0xd] == auVar15[5]);
      auVar18[0xe] = -(auVar2[0xe] == auVar15[6]);
      auVar18[0xf] = -(auVar2[0xf] == auVar15[7]);
      uVar11 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe | (ushort)(auVar18[0xf] >> 7) << 0xf;
      uVar9 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar9; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        lVar7 = *param_1 + (uVar3 + uVar6 & param_1[1]) * -0x10;
        if (param_2 == *(longlong *)(lVar7 + -0x10)) {
          if (param_1[0xf] != 0) {
            uVar6 = pdb_1400af0a0(param_1 + 0x10,lVar7 + -8);
            lVar8 = param_1[0xc];
            bVar13 = (byte)(uVar6 >> 0x39);
            auVar15 = ZEXT216(CONCAT11(bVar13,bVar13));
            auVar15 = pshuflw(auVar15,auVar15,0);
            lVar10 = 0;
            while( true ) {
              uVar6 = uVar6 & param_1[0xd];
              auVar2 = *(undefined1 (*) [16])(lVar8 + uVar6);
              auVar19[0] = -(auVar2[0] == auVar15[0]);
              auVar19[1] = -(auVar2[1] == auVar15[1]);
              auVar19[2] = -(auVar2[2] == auVar15[2]);
              auVar19[3] = -(auVar2[3] == auVar15[3]);
              auVar19[4] = -(auVar2[4] == auVar15[4]);
              auVar19[5] = -(auVar2[5] == auVar15[5]);
              auVar19[6] = -(auVar2[6] == auVar15[6]);
              auVar19[7] = -(auVar2[7] == auVar15[7]);
              auVar19[8] = -(auVar2[8] == auVar15[0]);
              auVar19[9] = -(auVar2[9] == auVar15[1]);
              auVar19[10] = -(auVar2[10] == auVar15[2]);
              auVar19[0xb] = -(auVar2[0xb] == auVar15[3]);
              auVar19[0xc] = -(auVar2[0xc] == auVar15[4]);
              auVar19[0xd] = -(auVar2[0xd] == auVar15[5]);
              auVar19[0xe] = -(auVar2[0xe] == auVar15[6]);
              auVar19[0xf] = -(auVar2[0xf] == auVar15[7]);
              uVar11 = (ushort)(SUB161(auVar19 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
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
                       (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar19[0xf] >> 7) << 0xf;
              uVar9 = (uint)uVar11;
              while (uVar11 != 0) {
                uVar3 = 0;
                for (uVar4 = uVar9; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                  uVar3 = uVar3 + 1;
                }
                lVar12 = (uVar3 + uVar6 & param_1[0xd]) * -0x90;
                if (*(longlong *)(lVar7 + -8) == *(longlong *)(lVar8 + -0x90 + lVar12)) {
                  lVar8 = lVar8 + lVar12;
                  if (SBORROW8(0,*(longlong *)(lVar8 + -0x18))) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc83d0(&UNK_14306c620,99,&UNK_14306c658);
                  }
                  lVar7 = *(longlong *)(lVar8 + -0x10);
                  lVar10 = 0;
                  do {
                    if (*(longlong *)(lVar8 + -8) << 4 == lVar10) {
                      return;
                    }
                    lVar12 = lVar10 + 0x10;
                    plVar1 = (longlong *)(lVar7 + lVar10);
                    lVar10 = lVar12;
                  } while (*plVar1 != param_2);
                  fVar14 = (float)pdb_140de9fd0(lVar12,*(undefined4 *)(lVar7 + -4 + lVar12));
                  fVar5 = _DAT_142e36f28;
                  fStack_64 = fVar14;
                  if ((0.0 <= fVar14) && (fVar14 <= _DAT_142e36f28)) {
                    fStack_64 = (float)pdb_140de9fd0();
                    if ((0.0 <= fStack_64) && (fStack_64 <= fVar5)) {
                      *(longlong *)(lVar7 + -0x10 + lVar12) = param_2;
                      *(float *)(lVar7 + -8 + lVar12) = fVar14;
                      *(float *)(lVar7 + -4 + lVar12) = fStack_64;
                      return;
                    }
                    pfStack_60 = &fStack_64;
                    pcStack_58 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
                    pdb_142dc83d0(&UNK_14335ec38,&pfStack_60,&UNK_14306c580);
                  }
                  pfStack_60 = &fStack_64;
                  pcStack_58 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
                  pdb_142dc83d0(&UNK_14335ec38,&pfStack_60,&UNK_14306c568);
                }
                uVar11 = (ushort)(uVar9 - 1) & (ushort)uVar9;
                uVar9 = CONCAT22((short)(uVar9 - 1 >> 0x10),uVar11);
              }
              auVar17[0] = -(auVar2[0] == -1);
              auVar17[1] = -(auVar2[1] == -1);
              auVar17[2] = -(auVar2[2] == -1);
              auVar17[3] = -(auVar2[3] == -1);
              auVar17[4] = -(auVar2[4] == -1);
              auVar17[5] = -(auVar2[5] == -1);
              auVar17[6] = -(auVar2[6] == -1);
              auVar17[7] = -(auVar2[7] == -1);
              auVar17[8] = -(auVar2[8] == -1);
              auVar17[9] = -(auVar2[9] == -1);
              auVar17[10] = -(auVar2[10] == -1);
              auVar17[0xb] = -(auVar2[0xb] == -1);
              auVar17[0xc] = -(auVar2[0xc] == -1);
              auVar17[0xd] = -(auVar2[0xd] == -1);
              auVar17[0xe] = -(auVar2[0xe] == -1);
              auVar17[0xf] = -(auVar2[0xf] == -1);
              if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar17 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar17 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar17 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar17 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar17 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar17 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar17 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar17 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar17 >> 0x4f,0) & 1) != 0) || (SUB161(auVar17 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar17 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar17 >> 0x67,0) & 1) != 0) || (SUB161(auVar17 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar17 >> 0x77,0) & 1) != 0) || auVar17[0xf] < '\0') break;
              uVar6 = uVar6 + lVar10 + 0x10;
              lVar10 = lVar10 + 0x10;
            }
          }
          goto LAB_140c34ea4;
        }
        uVar11 = (ushort)(uVar9 - 1) & (ushort)uVar9;
        uVar9 = CONCAT22((short)(uVar9 - 1 >> 0x10),uVar11);
      }
      auVar16[0] = -(auVar2[0] == -1);
      auVar16[1] = -(auVar2[1] == -1);
      auVar16[2] = -(auVar2[2] == -1);
      auVar16[3] = -(auVar2[3] == -1);
      auVar16[4] = -(auVar2[4] == -1);
      auVar16[5] = -(auVar2[5] == -1);
      auVar16[6] = -(auVar2[6] == -1);
      auVar16[7] = -(auVar2[7] == -1);
      auVar16[8] = -(auVar2[8] == -1);
      auVar16[9] = -(auVar2[9] == -1);
      auVar16[10] = -(auVar2[10] == -1);
      auVar16[0xb] = -(auVar2[0xb] == -1);
      auVar16[0xc] = -(auVar2[0xc] == -1);
      auVar16[0xd] = -(auVar2[0xd] == -1);
      auVar16[0xe] = -(auVar2[0xe] == -1);
      auVar16[0xf] = -(auVar2[0xf] == -1);
      if ((((((((((((((((SUB161(auVar16 >> 7,0) & 1) != 0 || (SUB161(auVar16 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar16 >> 0x17,0) & 1) != 0) || (SUB161(auVar16 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar16 >> 0x27,0) & 1) != 0) || (SUB161(auVar16 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar16 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar16 >> 0x3f,0) & 1) != 0) || (SUB161(auVar16 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar16 >> 0x4f,0) & 1) != 0) || (SUB161(auVar16 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar16 >> 0x5f,0) & 1) != 0) || (SUB161(auVar16 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar16 >> 0x6f,0) & 1) != 0) || (SUB161(auVar16 >> 0x77,0) & 1) != 0) ||
          auVar16[0xf] < '\0') break;
      uVar6 = uVar6 + lVar8 + 0x10;
      lVar8 = lVar8 + 0x10;
    }
  }
  pdb_142dc8110(&UNK_14306c471,0x16,&UNK_14306c5f0);
LAB_140c34ea4:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14306c608);
}

