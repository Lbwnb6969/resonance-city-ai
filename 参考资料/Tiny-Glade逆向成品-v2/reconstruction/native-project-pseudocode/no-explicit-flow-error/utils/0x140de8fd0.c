// VA 0x140de8fd0, PDB extent 978 bytes
// utils::rotation_from_normal
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::rotation_from_normal
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 978 */

float * pdb_140de8fd0(float *param_1,undefined8 *param_2)

{
  bool bVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  undefined1 auVar6 [16];
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
  
  fVar2 = (float)*param_2;
  fVar9 = *(float *)((longlong)param_2 + 4);
  fVar8 = *(float *)(param_2 + 1);
  if ((0x7f7fffff < (uint)ABS(fVar2) || 0x7f7fffff < (uint)ABS(fVar9)) ||
     (0x7f7fffff < (uint)ABS(fVar8))) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1431fece0,0x24,&UNK_1431fed08);
  }
  fVar12 = (float)((ulonglong)*param_2 >> 0x20);
  fVar13 = (float)(_UNK_142e37824 & (uint)fVar9) - fVar8;
  fVar14 = (float)((uint)fVar8 & _DAT_142e37820) - (float)(_DAT_142e37820 & (uint)fVar2);
  fVar15 = fVar2 - (float)(_UNK_142e37824 & (uint)fVar9);
  fVar16 = _DAT_142e36f28 / SQRT(fVar15 * fVar15 + fVar13 * fVar13 + fVar14 * fVar14);
  bVar1 = (int)fVar16 - 1U < 0x7fffff ||
          (int)ABS(fVar16) - 0x800000U < 0x7f000000 && -1 < (int)fVar16;
  fVar7 = _DAT_142e36f28;
  if (bVar1) {
    fVar7 = fVar13 * fVar16;
  }
  uVar3 = (uint)bVar1;
  fVar10 = (float)((int)(uVar3 << 0x1f) >> 0x1f & (uint)(fVar16 * fVar14));
  fVar16 = (float)((int)(uVar3 << 0x1f) >> 0x1f & (uint)(fVar16 * fVar15));
  fVar15 = fVar2 * fVar10 - fVar9 * fVar7;
  fVar14 = fVar9 * fVar16 - fVar8 * fVar10;
  fVar13 = fVar8 * fVar7 - fVar16 * fVar2;
  fVar17 = _DAT_142e36f28 / SQRT(fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15);
  bVar1 = (int)fVar17 - 1U < 0x7fffff ||
          (int)ABS(fVar17) - 0x800000U < 0x7f000000 && -1 < (int)fVar17;
  if (bVar1) {
    fVar14 = fVar14 * fVar17;
    fVar13 = fVar13 * fVar17;
    fVar15 = fVar15 * fVar17;
    fVar5 = fVar14;
    if (0.0 < fVar8) goto LAB_140de9253;
LAB_140de91ed:
    fVar13 = fVar13 - fVar7;
    if (0.0 < fVar13) {
      fVar11 = fVar10 + fVar14;
      fVar13 = (_DAT_142e36f28 - fVar8) + fVar13;
      fVar12 = fVar12 + fVar15;
      fVar15 = fVar2 - fVar16;
      fVar9 = fVar13;
    }
    else {
      fVar11 = (_DAT_142e36f28 - fVar8) - fVar13;
      fVar15 = fVar15 - fVar12;
      fVar13 = fVar14 + fVar10;
      fVar12 = fVar2 + fVar16;
      fVar9 = fVar11;
    }
  }
  else {
    fVar14 = 0.0;
    fVar15 = 0.0;
    fVar13 = _DAT_142e36f28;
    fVar5 = 0.0;
    if (fVar8 <= 0.0) goto LAB_140de91ed;
LAB_140de9253:
    fVar7 = fVar7 + fVar13;
    if (fVar7 <= 0.0) {
      fVar7 = (fVar8 + _DAT_142e36f28) - fVar7;
      fVar8 = _DAT_142e36f50 / SQRT(fVar7);
      fVar11 = fVar2 + fVar16;
      fVar13 = fVar9 + fVar15;
      fVar15 = fVar10 - fVar5;
      fVar12 = fVar8;
      goto LAB_140de932b;
    }
    fVar11 = fVar15 - fVar12;
    fVar13 = fVar2 - fVar16;
    fVar12 = fVar10 - fVar5;
    fVar15 = fVar7 + fVar8 + _DAT_142e36f28;
    fVar9 = fVar15;
  }
  fVar7 = _DAT_142e36f50 / SQRT(fVar9);
  fVar8 = fVar7;
LAB_140de932b:
  auVar6._4_4_ = -(uint)((float)(_UNK_142e377e4 & (uint)(fVar8 * fVar13)) < _UNK_14301cce4);
  auVar6._0_4_ = -(uint)((float)(_DAT_142e377e0 & (uint)(fVar8 * fVar11)) < _DAT_14301cce0);
  auVar6._8_4_ = -(uint)((float)(_UNK_142e377e8 & (uint)(fVar7 * fVar12)) < _UNK_14301cce8);
  auVar6._12_4_ = -(uint)((float)(_UNK_142e377ec & (uint)(fVar8 * fVar15)) < _UNK_14301ccec);
  iVar4 = movmskps(CONCAT31((int3)((int)fVar17 - 1U >> 8),bVar1),auVar6);
  fVar9 = fVar8 * fVar11;
  fVar2 = fVar8 * fVar13;
  fVar7 = fVar7 * fVar12;
  fVar8 = fVar8 * fVar15;
  if (iVar4 != 0xf) {
    fVar9 = _DAT_142e4e650;
    fVar2 = _UNK_142e4e654;
    fVar7 = _UNK_142e4e658;
    fVar8 = _UNK_142e4e65c;
  }
  *param_1 = fVar9;
  param_1[1] = fVar2;
  param_1[2] = fVar7;
  param_1[3] = fVar8;
  return param_1;
}

