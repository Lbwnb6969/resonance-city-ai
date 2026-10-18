// VA 0x1411b6260, PDB extent 1159 bytes
// toolbar::mei::layout::LayoutStyle::compute_min_size_with_children<core::iter::adapters::map::Map<core::iter::adapters::copied::Copied<core::slice::iter::Iter<country_core::systems::ui::GlobalId> >,toolbar::mei::core::impl$17::perform_layout::closure_env$0> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/layout.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* Matched PDB project procedure:
   toolbar::mei::layout::LayoutStyle::compute_min_size_with_children<core::iter::adapters::map::Map<core::iter::adapters::copied::Copied<core::slice::iter::Iter<country_core::systems::ui::GlobalId>
   >,toolbar::mei::core::impl$17::perform_layout::closure_env$0> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/layout.rs
   Extent: 1159 */

void pdb_1411b6260(char *param_1,longlong *param_2,longlong *param_3)

{
  char *pcVar1;
  float fVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  longlong *plVar12;
  ushort uVar13;
  longlong lVar14;
  longlong *plVar15;
  byte bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  longlong lStack_a0;
  longlong *plStack_98;
  longlong *plStack_90;
  
  plVar15 = (longlong *)*param_3;
  if (param_1[0x44] == '\x01') {
    if (param_1[0x45] == '\0') goto LAB_1411b6521;
    plVar12 = (longlong *)param_3[1];
    if (plVar15 != plVar12) {
      do {
        plVar3 = (longlong *)param_3[2];
        if (plVar3[3] != 0) {
          fVar22 = 0.0;
          plStack_98 = plVar12;
LAB_1411b62e0:
          lVar4 = *plVar15;
          plVar15 = plVar15 + 1;
          lStack_a0 = lVar4;
          uVar9 = pdb_1400af0a0(plVar3 + 4,&lStack_a0);
          lVar5 = *plVar3;
          bVar16 = (byte)(uVar9 >> 0x39);
          auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
          auVar17 = pshuflw(auVar17,auVar17,0);
          lVar10 = 0;
          while( true ) {
            uVar9 = uVar9 & plVar3[1];
            pcVar1 = (char *)(lVar5 + uVar9);
            auVar20[0] = -(*pcVar1 == auVar17[0]);
            auVar20[1] = -(pcVar1[1] == auVar17[1]);
            auVar20[2] = -(pcVar1[2] == auVar17[2]);
            auVar20[3] = -(pcVar1[3] == auVar17[3]);
            auVar20[4] = -(pcVar1[4] == auVar17[4]);
            auVar20[5] = -(pcVar1[5] == auVar17[5]);
            auVar20[6] = -(pcVar1[6] == auVar17[6]);
            auVar20[7] = -(pcVar1[7] == auVar17[7]);
            auVar20[8] = -(pcVar1[8] == auVar17[0]);
            auVar20[9] = -(pcVar1[9] == auVar17[1]);
            auVar20[10] = -(pcVar1[10] == auVar17[2]);
            auVar20[0xb] = -(pcVar1[0xb] == auVar17[3]);
            auVar20[0xc] = -(pcVar1[0xc] == auVar17[4]);
            auVar20[0xd] = -(pcVar1[0xd] == auVar17[5]);
            auVar20[0xe] = -(pcVar1[0xe] == auVar17[6]);
            auVar20[0xf] = -(pcVar1[0xf] == auVar17[7]);
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
            uVar11 = (uint)uVar13;
            while (uVar13 != 0) {
              uVar6 = 0;
              for (uVar7 = uVar11; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                uVar6 = uVar6 + 1;
              }
              lVar14 = (uVar6 + uVar9 & plVar3[1]) * -0xd8;
              if (lVar4 == *(longlong *)(lVar5 + -0xd8 + lVar14)) {
                fVar2 = *(float *)(lVar5 + lVar14 + -0x48);
                fVar8 = fVar2;
                if (fVar2 <= fVar22) {
                  fVar8 = fVar22;
                }
                fVar22 = (float)(~-(uint)NAN(fVar22) & (uint)fVar8 |
                                -(uint)NAN(fVar22) & (uint)fVar2);
                if (plVar15 == plStack_98) {
                  return;
                }
                goto LAB_1411b62e0;
              }
              uVar13 = (ushort)(uVar11 - 1) & (ushort)uVar11;
              uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar13);
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
                       (SUB161(auVar18 >> 0x3f,0) & 1) != 0) || (SUB161(auVar18 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar18 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar18 >> 0x57,0) & 1) != 0) || (SUB161(auVar18 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar18 >> 0x67,0) & 1) != 0) || (SUB161(auVar18 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar18 >> 0x77,0) & 1) != 0) || auVar18[0xf] < '\0') break;
            uVar9 = uVar9 + lVar10 + 0x10;
            lVar10 = lVar10 + 0x10;
          }
        }
LAB_1411b6509:
        param_3 = (longlong *)&UNK_1432a80e8;
        pdb_142dc8110(&UNK_1432a7f70,0x16);
LAB_1411b6521:
        plVar12 = (longlong *)param_3[1];
      } while (plVar15 != plVar12);
    }
  }
  else {
    if (param_1[0x45] == '\0') {
      plVar12 = (longlong *)param_3[1];
    }
    else {
      plVar12 = (longlong *)param_3[1];
    }
    if (plVar15 != plVar12) {
      plVar3 = (longlong *)param_3[2];
      if (plVar3[3] == 0) goto LAB_1411b6509;
      fVar22 = 0.0;
      plStack_90 = param_2;
LAB_1411b641b:
      lVar4 = *plVar15;
      plVar15 = plVar15 + 1;
      lStack_a0 = lVar4;
      uVar9 = pdb_1400af0a0(plVar3 + 4);
      lVar5 = *plVar3;
      bVar16 = (byte)(uVar9 >> 0x39);
      auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
      auVar17 = pshuflw(auVar17,auVar17,0);
      lVar10 = 0;
      do {
        uVar9 = uVar9 & plVar3[1];
        pcVar1 = (char *)(lVar5 + uVar9);
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
        uVar13 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe | (ushort)(auVar21[0xf] >> 7) << 0xf
        ;
        uVar11 = (uint)uVar13;
        while (uVar13 != 0) {
          uVar6 = 0;
          for (uVar7 = uVar11; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
            uVar6 = uVar6 + 1;
          }
          lVar14 = (uVar6 + uVar9 & plVar3[1]) * -0xd8;
          if (lVar4 == *(longlong *)(lVar5 + -0xd8 + lVar14)) {
            fVar2 = *(float *)(lVar5 + lVar14 + -0x44);
            fVar8 = fVar2;
            if (fVar2 <= fVar22) {
              fVar8 = fVar22;
            }
            fVar22 = (float)(~-(uint)NAN(fVar22) & (uint)fVar8 | -(uint)NAN(fVar22) & (uint)fVar2);
            if (plVar15 == plVar12) {
              return;
            }
            goto LAB_1411b641b;
          }
          uVar13 = (ushort)(uVar11 - 1) & (ushort)uVar11;
          uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar13);
        }
        auVar19[0] = -(*pcVar1 == -1);
        auVar19[1] = -(pcVar1[1] == -1);
        auVar19[2] = -(pcVar1[2] == -1);
        auVar19[3] = -(pcVar1[3] == -1);
        auVar19[4] = -(pcVar1[4] == -1);
        auVar19[5] = -(pcVar1[5] == -1);
        auVar19[6] = -(pcVar1[6] == -1);
        auVar19[7] = -(pcVar1[7] == -1);
        auVar19[8] = -(pcVar1[8] == -1);
        auVar19[9] = -(pcVar1[9] == -1);
        auVar19[10] = -(pcVar1[10] == -1);
        auVar19[0xb] = -(pcVar1[0xb] == -1);
        auVar19[0xc] = -(pcVar1[0xc] == -1);
        auVar19[0xd] = -(pcVar1[0xd] == -1);
        auVar19[0xe] = -(pcVar1[0xe] == -1);
        auVar19[0xf] = -(pcVar1[0xf] == -1);
        if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 || (SUB161(auVar19 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar19 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar19 >> 0x1f,0) & 1) != 0) || (SUB161(auVar19 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar19 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar19 >> 0x37,0) & 1) != 0) || (SUB161(auVar19 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar19 >> 0x47,0) & 1) != 0) || (SUB161(auVar19 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar19 >> 0x57,0) & 1) != 0) || (SUB161(auVar19 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar19 >> 0x67,0) & 1) != 0) || (SUB161(auVar19 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar19 >> 0x77,0) & 1) != 0) || auVar19[0xf] < '\0') goto LAB_1411b6509;
        uVar9 = uVar9 + lVar10 + 0x10;
        lVar10 = lVar10 + 0x10;
      } while( true );
    }
  }
  return;
}

