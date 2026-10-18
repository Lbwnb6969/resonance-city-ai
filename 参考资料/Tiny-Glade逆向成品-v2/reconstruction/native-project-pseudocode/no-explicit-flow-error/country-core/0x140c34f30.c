// VA 0x140c34f30, PDB extent 749 bytes
// country_core::systems::wall::eraser::archivist::WallEraserArchivist::add_split_event
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/eraser/archivist.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::wall::eraser::archivist::WallEraserArchivist::add_split_event
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/eraser/archivist.rs
   Extent: 749 */

void pdb_140c34f30(longlong *param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  ushort uVar11;
  longlong lVar12;
  byte bVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  undefined8 *puStack_68;
  longlong lStack_60;
  longlong lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lStack_88 = param_2;
  if (param_1[3] != 0) {
    uVar6 = pdb_1400af0a0(param_1 + 4,&lStack_88);
    bVar13 = (byte)(uVar6 >> 0x39);
    auVar14 = ZEXT216(CONCAT11(bVar13,bVar13));
    auVar14 = pshuflw(auVar14,auVar14,0);
    lVar9 = 0;
    while( true ) {
      uVar6 = uVar6 & param_1[1];
      auVar2 = *(undefined1 (*) [16])(*param_1 + uVar6);
      auVar17[0] = -(auVar2[0] == auVar14[0]);
      auVar17[1] = -(auVar2[1] == auVar14[1]);
      auVar17[2] = -(auVar2[2] == auVar14[2]);
      auVar17[3] = -(auVar2[3] == auVar14[3]);
      auVar17[4] = -(auVar2[4] == auVar14[4]);
      auVar17[5] = -(auVar2[5] == auVar14[5]);
      auVar17[6] = -(auVar2[6] == auVar14[6]);
      auVar17[7] = -(auVar2[7] == auVar14[7]);
      auVar17[8] = -(auVar2[8] == auVar14[0]);
      auVar17[9] = -(auVar2[9] == auVar14[1]);
      auVar17[10] = -(auVar2[10] == auVar14[2]);
      auVar17[0xb] = -(auVar2[0xb] == auVar14[3]);
      auVar17[0xc] = -(auVar2[0xc] == auVar14[4]);
      auVar17[0xd] = -(auVar2[0xd] == auVar14[5]);
      auVar17[0xe] = -(auVar2[0xe] == auVar14[6]);
      auVar17[0xf] = -(auVar2[0xf] == auVar14[7]);
      uVar11 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe | (ushort)(auVar17[0xf] >> 7) << 0xf;
      uVar8 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar8; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        lVar12 = *param_1 + (uVar3 + uVar6 & param_1[1]) * -0x10;
        if (param_2 == *(longlong *)(lVar12 + -0x10)) {
          lVar9 = *(longlong *)(lVar12 + -8);
          lStack_80 = lVar9;
          if (param_1[0xf] != 0) {
            uVar6 = pdb_1400af0a0(param_1 + 0x10,&lStack_80);
            lVar12 = param_1[0xc];
            bVar13 = (byte)(uVar6 >> 0x39);
            auVar14 = ZEXT216(CONCAT11(bVar13,bVar13));
            auVar14 = pshuflw(auVar14,auVar14,0);
            lVar7 = 0;
            while( true ) {
              uVar6 = uVar6 & param_1[0xd];
              auVar2 = *(undefined1 (*) [16])(lVar12 + uVar6);
              auVar18[0] = -(auVar2[0] == auVar14[0]);
              auVar18[1] = -(auVar2[1] == auVar14[1]);
              auVar18[2] = -(auVar2[2] == auVar14[2]);
              auVar18[3] = -(auVar2[3] == auVar14[3]);
              auVar18[4] = -(auVar2[4] == auVar14[4]);
              auVar18[5] = -(auVar2[5] == auVar14[5]);
              auVar18[6] = -(auVar2[6] == auVar14[6]);
              auVar18[7] = -(auVar2[7] == auVar14[7]);
              auVar18[8] = -(auVar2[8] == auVar14[0]);
              auVar18[9] = -(auVar2[9] == auVar14[1]);
              auVar18[10] = -(auVar2[10] == auVar14[2]);
              auVar18[0xb] = -(auVar2[0xb] == auVar14[3]);
              auVar18[0xc] = -(auVar2[0xc] == auVar14[4]);
              auVar18[0xd] = -(auVar2[0xd] == auVar14[5]);
              auVar18[0xe] = -(auVar2[0xe] == auVar14[6]);
              auVar18[0xf] = -(auVar2[0xf] == auVar14[7]);
              uVar11 = (ushort)(SUB161(auVar18 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
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
                       (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar18[0xf] >> 7) << 0xf;
              uVar8 = (uint)uVar11;
              while (uVar11 != 0) {
                uVar3 = 0;
                for (uVar4 = uVar8; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                  uVar3 = uVar3 + 1;
                }
                lVar10 = (uVar3 + uVar6 & param_1[0xd]) * -0x90;
                if (lVar9 == *(longlong *)(lVar12 + -0x90 + lVar10)) {
                  lVar12 = lVar12 + lVar10;
                  if (SBORROW8(0,*(longlong *)(lVar12 + -0x18))) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc83d0(&UNK_14306c6a0,0x61,&UNK_14306c6d0);
                  }
                  lStack_58 = *(longlong *)(lVar12 + -8);
                  if (lStack_58 != 0) {
                    lVar7 = *(longlong *)(lVar12 + -0x10);
                    lVar10 = 0;
                    do {
                      if (*(longlong *)(lVar7 + lVar10) == param_2) {
                        uStack_48 = *(undefined8 *)(lVar7 + lVar10);
                        uStack_40 = ((undefined8 *)(lVar7 + lVar10))[1];
                        lStack_58 = lStack_58 + -1;
                        puVar1 = (undefined8 *)(lVar7 + lStack_58 * 0x10);
                        uVar5 = puVar1[1];
                        *(undefined8 *)(lVar7 + lVar10) = *puVar1;
                        ((undefined8 *)(lVar7 + lVar10))[1] = uVar5;
                        *(longlong *)(lVar12 + -8) = lStack_58;
                        lStack_70 = param_3 + param_4 * 0x10;
                        puStack_68 = &uStack_48;
                        lStack_78 = param_3;
                        if ((ulonglong)(*(longlong *)(lVar12 + -0x18) - lStack_58) < param_4) {
                          pdb_142d7f1b0(lVar12 + -0x18,lStack_58,param_4,8,0x10);
                          lStack_58 = *(longlong *)(lVar12 + -8);
                        }
                        uStack_50 = *(undefined8 *)(lVar12 + -0x10);
                        lStack_60 = lVar12 + -8;
                        pdb_1419b52e0(&lStack_78,&lStack_60);
                        if (param_4 != 0) {
                          lVar12 = 0;
                          do {
                            pdb_1417b66a0(param_1,*(undefined8 *)(param_3 + lVar12),lVar9);
                            lVar12 = lVar12 + 0x10;
                          } while (param_4 * 0x10 != lVar12);
                        }
                        return;
                      }
                      lVar10 = lVar10 + 0x10;
                    } while (lStack_58 << 4 != lVar10);
                  }
                    /* WARNING: Subroutine does not return */
                  pdb_142dc8150(&UNK_14306c5d8);
                }
                uVar11 = (ushort)(uVar8 - 1) & (ushort)uVar8;
                uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar11);
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
              if ((((((((((((((((SUB161(auVar16 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar16 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar16 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar16 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar16 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar16 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar16 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar16 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar16 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar16 >> 0x4f,0) & 1) != 0) || (SUB161(auVar16 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar16 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar16 >> 0x67,0) & 1) != 0) || (SUB161(auVar16 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar16 >> 0x77,0) & 1) != 0) || auVar16[0xf] < '\0') break;
              uVar6 = uVar6 + lVar7 + 0x10;
              lVar7 = lVar7 + 0x10;
            }
          }
          goto LAB_140c351d3;
        }
        uVar11 = (ushort)(uVar8 - 1) & (ushort)uVar8;
        uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar11);
      }
      auVar15[0] = -(auVar2[0] == -1);
      auVar15[1] = -(auVar2[1] == -1);
      auVar15[2] = -(auVar2[2] == -1);
      auVar15[3] = -(auVar2[3] == -1);
      auVar15[4] = -(auVar2[4] == -1);
      auVar15[5] = -(auVar2[5] == -1);
      auVar15[6] = -(auVar2[6] == -1);
      auVar15[7] = -(auVar2[7] == -1);
      auVar15[8] = -(auVar2[8] == -1);
      auVar15[9] = -(auVar2[9] == -1);
      auVar15[10] = -(auVar2[10] == -1);
      auVar15[0xb] = -(auVar2[0xb] == -1);
      auVar15[0xc] = -(auVar2[0xc] == -1);
      auVar15[0xd] = -(auVar2[0xd] == -1);
      auVar15[0xe] = -(auVar2[0xe] == -1);
      auVar15[0xf] = -(auVar2[0xf] == -1);
      if ((((((((((((((((SUB161(auVar15 >> 7,0) & 1) != 0 || (SUB161(auVar15 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar15 >> 0x17,0) & 1) != 0) || (SUB161(auVar15 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar15 >> 0x27,0) & 1) != 0) || (SUB161(auVar15 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar15 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar15 >> 0x3f,0) & 1) != 0) || (SUB161(auVar15 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar15 >> 0x4f,0) & 1) != 0) || (SUB161(auVar15 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar15 >> 0x5f,0) & 1) != 0) || (SUB161(auVar15 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar15 >> 0x6f,0) & 1) != 0) || (SUB161(auVar15 >> 0x77,0) & 1) != 0) ||
          auVar15[0xf] < '\0') break;
      uVar6 = uVar6 + lVar9 + 0x10;
      lVar9 = lVar9 + 0x10;
    }
  }
  pdb_142dc8110(&UNK_14306c471,0x16,&UNK_14306c670);
LAB_140c351d3:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14306c688);
}

