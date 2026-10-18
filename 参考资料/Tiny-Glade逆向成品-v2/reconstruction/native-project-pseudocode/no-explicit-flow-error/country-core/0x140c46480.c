// VA 0x140c46480, PDB extent 590 bytes
// country_core::resources::stairs::structural_graph::StairsStructuralGraph::add_edge_by_span
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/structural_graph.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::stairs::structural_graph::StairsStructuralGraph::add_edge_by_span
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/structural_graph.rs
   Extent: 590 */

void pdb_140c46480(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  uint uVar7;
  char cVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  int unaff_EBP;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  ushort uVar14;
  ulonglong uVar15;
  byte bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  int iVar24;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 uStack_50;
  char cStack_48;
  undefined2 uStack_47;
  undefined1 uStack_45;
  undefined8 uStack_40;
  char cStack_38;
  undefined2 uStack_37;
  undefined1 uStack_35;
  
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    uVar9 = pdb_14148b010(param_1 + 0xe0);
    lVar6 = *(longlong *)(param_1 + 0xc0);
    bVar16 = (byte)(uVar9 >> 0x39);
    auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
    auVar17 = pshuflw(auVar17,auVar17,0);
    lVar12 = 0;
    while( true ) {
      uVar9 = uVar9 & *(ulonglong *)(param_1 + 200);
      auVar5 = *(undefined1 (*) [16])(lVar6 + uVar9);
      auVar20[0] = -(auVar5[0] == auVar17[0]);
      auVar20[1] = -(auVar5[1] == auVar17[1]);
      auVar20[2] = -(auVar5[2] == auVar17[2]);
      auVar20[3] = -(auVar5[3] == auVar17[3]);
      auVar20[4] = -(auVar5[4] == auVar17[4]);
      auVar20[5] = -(auVar5[5] == auVar17[5]);
      auVar20[6] = -(auVar5[6] == auVar17[6]);
      auVar20[7] = -(auVar5[7] == auVar17[7]);
      auVar20[8] = -(auVar5[8] == auVar17[0]);
      auVar20[9] = -(auVar5[9] == auVar17[1]);
      auVar20[10] = -(auVar5[10] == auVar17[2]);
      auVar20[0xb] = -(auVar5[0xb] == auVar17[3]);
      auVar20[0xc] = -(auVar5[0xc] == auVar17[4]);
      auVar20[0xd] = -(auVar5[0xd] == auVar17[5]);
      auVar20[0xe] = -(auVar5[0xe] == auVar17[6]);
      auVar20[0xf] = -(auVar5[0xf] == auVar17[7]);
      uVar14 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
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
      uVar13 = (uint)uVar14;
      while (uVar14 != 0) {
        uVar11 = 0;
        for (uVar7 = uVar13; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar11 = uVar11 + 1;
        }
        uVar15 = uVar11 + uVar9 & *(ulonglong *)(param_1 + 200);
        uVar3 = *(undefined8 *)(lVar6 + -0x18 + uVar15 * -0x18);
        auVar21._0_4_ = -(uint)((int)uVar3 == (int)*param_2);
        iVar24 = -(uint)((int)((ulonglong)uVar3 >> 0x20) == (int)((ulonglong)*param_2 >> 0x20));
        auVar21._4_4_ = auVar21._0_4_;
        auVar21._8_4_ = iVar24;
        auVar21._12_4_ = iVar24;
        unaff_EBP = movmskpd(unaff_EBP,auVar21);
        if ((unaff_EBP == 3) &&
           (lVar2 = lVar6 + uVar15 * -0x18, *(int *)(param_2 + 1) == *(int *)(lVar2 + -0x10))) {
          cStack_48 = *(char *)(lVar2 + -4);
          if (cStack_48 == '\x11') {
            return;
          }
          uStack_50 = *(undefined8 *)(lVar2 + -0xc);
          uStack_47 = *(undefined2 *)(lVar2 + -3);
          uStack_45 = *(undefined1 *)(lVar2 + -1);
          uVar9 = pdb_14148b010(param_1 + 0xe0,param_3);
          lVar6 = *(longlong *)(param_1 + 0xc0);
          bVar16 = (byte)(uVar9 >> 0x39);
          auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
          auVar17 = pshuflw(auVar17,auVar17,0);
          uVar3 = *param_3;
          piVar1 = (int *)(param_3 + 1);
          lVar12 = 0;
          do {
            uVar9 = uVar9 & *(ulonglong *)(param_1 + 200);
            auVar5 = *(undefined1 (*) [16])(lVar6 + uVar9);
            auVar22[0] = -(auVar5[0] == auVar17[0]);
            auVar22[1] = -(auVar5[1] == auVar17[1]);
            auVar22[2] = -(auVar5[2] == auVar17[2]);
            auVar22[3] = -(auVar5[3] == auVar17[3]);
            auVar22[4] = -(auVar5[4] == auVar17[4]);
            auVar22[5] = -(auVar5[5] == auVar17[5]);
            auVar22[6] = -(auVar5[6] == auVar17[6]);
            auVar22[7] = -(auVar5[7] == auVar17[7]);
            auVar22[8] = -(auVar5[8] == auVar17[0]);
            auVar22[9] = -(auVar5[9] == auVar17[1]);
            auVar22[10] = -(auVar5[10] == auVar17[2]);
            auVar22[0xb] = -(auVar5[0xb] == auVar17[3]);
            auVar22[0xc] = -(auVar5[0xc] == auVar17[4]);
            auVar22[0xd] = -(auVar5[0xd] == auVar17[5]);
            auVar22[0xe] = -(auVar5[0xe] == auVar17[6]);
            auVar22[0xf] = -(auVar5[0xf] == auVar17[7]);
            uVar14 = (ushort)(SUB161(auVar22 >> 7,0) & 1) |
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
            uVar13 = (uint)uVar14;
            while (uVar14 != 0) {
              uVar11 = 0;
              for (uVar7 = uVar13; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                uVar11 = uVar11 + 1;
              }
              uVar15 = uVar11 + uVar9 & *(ulonglong *)(param_1 + 200);
              uVar4 = *(undefined8 *)(lVar6 + -0x18 + uVar15 * -0x18);
              auVar23._0_4_ = -(uint)((int)uVar4 == (int)uVar3);
              iVar24 = -(uint)((int)((ulonglong)uVar4 >> 0x20) == (int)((ulonglong)uVar3 >> 0x20));
              auVar23._4_4_ = auVar23._0_4_;
              auVar23._8_4_ = iVar24;
              auVar23._12_4_ = iVar24;
              uVar11 = movmskpd((int)param_3,auVar23);
              param_3 = (undefined8 *)(ulonglong)uVar11;
              if ((uVar11 == 3) &&
                 (lVar2 = lVar6 + uVar15 * -0x18, *piVar1 == *(int *)(lVar2 + -0x10))) {
                cStack_38 = *(char *)(lVar2 + -4);
                if (cStack_38 == '\x11') {
                  return;
                }
                uStack_40 = *(undefined8 *)(lVar2 + -0xc);
                uStack_37 = *(undefined2 *)(lVar2 + -3);
                uStack_35 = *(undefined1 *)(lVar2 + -1);
                cVar8 = pdb_140a62890(param_1,&uStack_50,&uStack_40,param_4);
                if (cVar8 != '\0') {
                  return;
                }
                puVar10 = (undefined1 *)pdb_140a62480(param_1,&uStack_50,&uStack_40);
                if (puVar10 != (undefined1 *)0x0) {
                  *puVar10 = 0;
                  return;
                }
                    /* WARNING: Subroutine does not return */
                pdb_142dc8150(&UNK_14306da40);
              }
              uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
              uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
            }
            auVar19[0] = -(auVar5[0] == -1);
            auVar19[1] = -(auVar5[1] == -1);
            auVar19[2] = -(auVar5[2] == -1);
            auVar19[3] = -(auVar5[3] == -1);
            auVar19[4] = -(auVar5[4] == -1);
            auVar19[5] = -(auVar5[5] == -1);
            auVar19[6] = -(auVar5[6] == -1);
            auVar19[7] = -(auVar5[7] == -1);
            auVar19[8] = -(auVar5[8] == -1);
            auVar19[9] = -(auVar5[9] == -1);
            auVar19[10] = -(auVar5[10] == -1);
            auVar19[0xb] = -(auVar5[0xb] == -1);
            auVar19[0xc] = -(auVar5[0xc] == -1);
            auVar19[0xd] = -(auVar5[0xd] == -1);
            auVar19[0xe] = -(auVar5[0xe] == -1);
            auVar19[0xf] = -(auVar5[0xf] == -1);
            if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar19 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar19 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar19 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar19 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar19 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar19 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar19 >> 0x3f,0) & 1) != 0) || (SUB161(auVar19 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar19 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar19 >> 0x57,0) & 1) != 0) || (SUB161(auVar19 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar19 >> 0x67,0) & 1) != 0) || (SUB161(auVar19 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar19 >> 0x77,0) & 1) != 0) || auVar19[0xf] < '\0') {
              return;
            }
            uVar9 = uVar9 + lVar12 + 0x10;
            lVar12 = lVar12 + 0x10;
          } while( true );
        }
        uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
        uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
      }
      auVar18[0] = -(auVar5[0] == -1);
      auVar18[1] = -(auVar5[1] == -1);
      auVar18[2] = -(auVar5[2] == -1);
      auVar18[3] = -(auVar5[3] == -1);
      auVar18[4] = -(auVar5[4] == -1);
      auVar18[5] = -(auVar5[5] == -1);
      auVar18[6] = -(auVar5[6] == -1);
      auVar18[7] = -(auVar5[7] == -1);
      auVar18[8] = -(auVar5[8] == -1);
      auVar18[9] = -(auVar5[9] == -1);
      auVar18[10] = -(auVar5[10] == -1);
      auVar18[0xb] = -(auVar5[0xb] == -1);
      auVar18[0xc] = -(auVar5[0xc] == -1);
      auVar18[0xd] = -(auVar5[0xd] == -1);
      auVar18[0xe] = -(auVar5[0xe] == -1);
      auVar18[0xf] = -(auVar5[0xf] == -1);
      if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar18 >> 0x17,0) & 1) != 0) || (SUB161(auVar18 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar18 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar18 >> 0x3f,0) & 1) != 0) || (SUB161(auVar18 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar18 >> 0x4f,0) & 1) != 0) || (SUB161(auVar18 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar18 >> 0x5f,0) & 1) != 0) || (SUB161(auVar18 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar18 >> 0x6f,0) & 1) != 0) || (SUB161(auVar18 >> 0x77,0) & 1) != 0) ||
          auVar18[0xf] < '\0') break;
      uVar9 = uVar9 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    }
  }
  return;
}

