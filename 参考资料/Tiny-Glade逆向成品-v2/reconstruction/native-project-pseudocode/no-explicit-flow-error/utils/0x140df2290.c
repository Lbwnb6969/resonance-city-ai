// VA 0x140df2290, PDB extent 601 bytes
// utils::geometry::rectangle::Rectangle2d::overlaps_rectangle2d
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::rectangle::Rectangle2d::overlaps_rectangle2d
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 601 */

uint pdb_140df2290(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  fVar5 = (float)param_1[2];
  fVar7 = (float)((ulonglong)param_1[2] >> 0x20);
  if (fVar7 * fVar7 + fVar5 * fVar5 < 0.0) {
LAB_140df24d0:
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1431ff6ec,0x26,&UNK_1431ff738);
  }
  fVar5 = fVar5 * _DAT_142e36f60;
  fVar7 = fVar7 * _UNK_142e36f64;
  fVar12 = (float)*param_2;
  fVar14 = (float)((ulonglong)*param_2 >> 0x20);
  fVar16 = (float)param_2[2];
  fVar17 = (float)((ulonglong)param_2[2] >> 0x20);
  fVar10 = (float)*param_1;
  fVar15 = (float)((ulonglong)*param_1 >> 0x20);
  fVar13 = (float)param_2[1];
  fVar11 = (float)((ulonglong)param_2[1] >> 0x20);
  fVar8 = (float)param_1[1];
  fVar20 = fVar13 - fVar8;
  fVar9 = (float)((ulonglong)param_1[1] >> 0x20);
  fVar22 = fVar11 - fVar9;
  fVar18 = fVar22 * fVar15 + fVar20 * fVar10;
  fVar19 = fVar22 * fVar10 + fVar20 * (float)(_UNK_142e37824 ^ (uint)fVar15);
  fVar20 = _DAT_142e36f60 * fVar16;
  fVar22 = _UNK_142e36f64 * fVar17;
  fVar21 = (float)((uint)(fVar14 * fVar15 + fVar12 * fVar10) & _DAT_142e377e0);
  fVar23 = (float)((uint)(fVar14 * fVar10 + fVar12 * (float)(_UNK_142e37824 ^ (uint)fVar15)) &
                  _UNK_142e377e4);
  fVar24 = fVar22 * fVar23 + fVar20 * fVar21;
  if (fVar18 - fVar24 <= fVar5) {
    fVar21 = fVar20 * fVar23 + fVar22 * fVar21;
    iVar3 = -(uint)(fVar19 + fVar21 < (float)(_DAT_142e37820 ^ (uint)fVar7));
    iVar4 = -(uint)(fVar18 + fVar24 < (float)(_UNK_142e37824 ^ (uint)fVar5));
    auVar1._4_4_ = iVar3;
    auVar1._0_4_ = iVar3;
    auVar1._8_4_ = iVar4;
    auVar1._12_4_ = iVar4;
    uVar2 = movmskpd((int)param_1,auVar1);
    uVar6 = 0;
    if ((((uVar2 & 2) != 0) || (fVar7 < fVar19 - fVar21)) || ((uVar2 & 1) != 0)) goto LAB_140df236c;
    if (fVar17 * fVar17 + fVar16 * fVar16 < 0.0) goto LAB_140df24d0;
    fVar8 = fVar8 - fVar13;
    fVar9 = fVar9 - fVar11;
    fVar13 = (float)((uint)(fVar15 * fVar14 + fVar10 * fVar12) & _DAT_142e377e0);
    fVar15 = (float)((uint)(fVar15 * fVar12 + fVar10 * (float)(_UNK_142e37824 ^ (uint)fVar14)) &
                    _UNK_142e377e4);
    fVar10 = fVar9 * fVar14 + fVar8 * fVar12;
    fVar9 = fVar9 * fVar12 + fVar8 * (float)(_UNK_142e37824 ^ (uint)fVar14);
    fVar8 = fVar7 * fVar15 + fVar5 * fVar13;
    if ((fVar10 - fVar8 <= fVar20) && ((float)(_DAT_142e37820 ^ (uint)fVar20) <= fVar8 + fVar10)) {
      fVar5 = fVar5 * fVar15 + fVar7 * fVar13;
      uVar6 = -(uint)(0.0 - fVar22 <= fVar9 + fVar5 && fVar9 - fVar5 <= fVar22);
      goto LAB_140df236c;
    }
  }
  uVar6 = 0;
LAB_140df236c:
  return uVar6 & 0xffffff01;
}

