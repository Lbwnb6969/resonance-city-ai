// VA 0x1411c9430, PDB extent 751 bytes
// toolbar::quick_tool_palette::quick_tool_palette_scale_categories
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/quick_tool_palette.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::quick_tool_palette::quick_tool_palette_scale_categories
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/quick_tool_palette.rs
   Extent: 751 */

void pdb_1411c9430(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  param_1 = (longlong *)*param_1;
  if ((char)param_1[0xc] == '\0') {
    if (!SBORROW8(0,*param_1)) {
      lVar4 = *(longlong *)(*param_2 + 0x10);
      if (lVar4 != 0) {
        lVar5 = *(longlong *)(*param_2 + 8);
        lVar6 = *param_3;
        lVar7 = param_3[1];
        uVar2 = *(undefined4 *)((longlong)param_3 + 0x14);
        lVar14 = 0;
        do {
          uVar1 = *(undefined8 *)(lVar5 + lVar14);
          uVar13 = (ulonglong)~(uint)uVar1;
          if ((((uVar13 < *(ulonglong *)(lVar7 + 0x10)) &&
               (piVar10 = (int *)(uVar13 * 0x18 + *(longlong *)(lVar7 + 8)),
               piVar10[4] == (int)((ulonglong)uVar1 >> 0x20))) && (*piVar10 != 0)) &&
             ((uVar13 = *(ulonglong *)(piVar10 + 2),
              (uVar13 & 0xffffffff) < *(ulonglong *)(lVar6 + 0x38) &&
              ((*(ulonglong *)(*(longlong *)(lVar6 + 0x28) + (uVar13 >> 6 & 0x3ffffff) * 8) >>
                (uVar13 & 0x3f) & 1) != 0)))) {
            uVar3 = piVar10[1];
            lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x1a0) + 0x18 + (uVar13 >> 0x20) * 0x48);
            lVar12 = ~*(ulonglong *)
                       (*(longlong *)(*(longlong *)(lVar7 + 0x1a0) + 0x38 + (uVar13 >> 0x20) * 0x48)
                       + *(longlong *)(lVar6 + 0x110) * 8) * 0x30;
            lVar9 = *(longlong *)(lVar8 + 0x10 + lVar12);
            *(undefined4 *)(*(longlong *)(lVar8 + 0x28 + lVar12) + (ulonglong)~uVar3 * 4) = uVar2;
            *(undefined8 *)(lVar9 + 8 + (ulonglong)~uVar3 * 0x10) = 0;
          }
          lVar14 = lVar14 + 0x20;
        } while (lVar4 << 5 != lVar14);
      }
    }
  }
  else {
    fVar15 = (float)pdb_140dedcd0(&UNK_1432a9bd0);
    fVar16 = (float)pdb_140dedcd0(&UNK_1432a9bd0);
    lVar4 = *(longlong *)(*param_2 + 0x10);
    if (lVar4 != 0) {
      lVar5 = *(longlong *)(*param_2 + 8);
      lVar6 = *param_3;
      lVar7 = param_3[1];
      uVar2 = *(undefined4 *)((longlong)param_3 + 0x14);
      lVar14 = 0;
      do {
        lVar8 = *(longlong *)(lVar5 + lVar14);
        if ((((ulonglong)~(uint)lVar8 < *(ulonglong *)(lVar7 + 0x10)) &&
            (piVar10 = (int *)((ulonglong)~(uint)lVar8 * 0x18 + *(longlong *)(lVar7 + 8)),
            piVar10[4] == (int)((ulonglong)lVar8 >> 0x20))) &&
           ((*piVar10 != 0 &&
            ((uVar13 = *(ulonglong *)(piVar10 + 2),
             (uVar13 & 0xffffffff) < *(ulonglong *)(lVar6 + 0x38) &&
             ((*(ulonglong *)(*(longlong *)(lVar6 + 0x28) + (uVar13 >> 6 & 0x3ffffff) * 8) >>
               (uVar13 & 0x3f) & 1) != 0)))))) {
          lVar9 = *(longlong *)(*(longlong *)(lVar7 + 0x1a0) + 0x18 + (uVar13 >> 0x20) * 0x48);
          uVar3 = piVar10[1];
          lVar11 = ~*(ulonglong *)
                     (*(longlong *)(*(longlong *)(lVar7 + 0x1a0) + 0x38 + (uVar13 >> 0x20) * 0x48) +
                     *(longlong *)(lVar6 + 0x110) * 8) * 0x30;
          lVar12 = *(longlong *)(lVar9 + 0x10 + lVar11);
          lVar9 = *(longlong *)(lVar9 + 0x28 + lVar11);
          if (((int)param_1[7] == 0) ||
             (fVar18 = fVar15,
             lVar8 != CONCAT44(*(undefined4 *)((longlong)param_1 + 0x3c),(int)param_1[7]))) {
            fVar17 = (float)pdb_140dedcd0(&UNK_1432a9bd0);
            fVar18 = fVar17;
            if (fVar17 <= fVar16) {
              fVar18 = fVar16;
            }
            fVar18 = (float)(~-(uint)NAN(fVar16) & (uint)fVar18 | -(uint)NAN(fVar16) & (uint)fVar17)
                     * fVar15;
          }
          lVar12 = lVar12 + (ulonglong)~uVar3 * 0x10;
          *(undefined4 *)(lVar9 + (ulonglong)~uVar3 * 4) = uVar2;
          uVar1 = *(undefined8 *)(lVar12 + 8);
          *(float *)(lVar12 + 8) = fVar18 * (float)uVar1;
          *(float *)(lVar12 + 0xc) = fVar18 * (float)((ulonglong)uVar1 >> 0x20);
        }
        lVar14 = lVar14 + 0x20;
      } while (lVar4 << 5 != lVar14);
    }
  }
  return;
}

