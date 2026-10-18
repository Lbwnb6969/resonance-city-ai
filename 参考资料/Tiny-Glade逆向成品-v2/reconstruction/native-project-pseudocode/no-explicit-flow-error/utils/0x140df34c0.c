// VA 0x140df34c0, PDB extent 797 bytes
// utils::geometry::rectangle::Rectangle2d::lerp
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::rectangle::Rectangle2d::lerp
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 797 */

float * pdb_140df34c0(float *param_1,undefined8 *param_2,undefined8 *param_3,float param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  uVar5 = _DAT_142e37820;
  fVar13 = (float)*param_2;
  fVar14 = (float)((ulonglong)*param_2 >> 0x20);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  fVar12 = (float)*param_3;
  fVar15 = (float)((ulonglong)*param_3 >> 0x20);
  fVar9 = (fVar14 * fVar15 + fVar13 * fVar12) /
          SQRT((fVar15 * fVar15 + fVar12 * fVar12) * (fVar14 * fVar14 + fVar13 * fVar13));
  fVar11 = (float)(_DAT_142e377e0 & (uint)fVar9);
  fVar8 = 0.0;
  if (0.0 <= _DAT_142e36f28 - fVar11) {
    fVar8 = _DAT_142e36f28 - fVar11;
  }
  fVar11 = (((((((_DAT_143057f40 * fVar11 + _DAT_143057f44) * fVar11 + _DAT_143057f48) * fVar11 +
               _DAT_143057f4c) * fVar11 + _DAT_143057f50) * fVar11 + _DAT_143057f54) * fVar11 +
            _DAT_143057f58) * fVar11 + _DAT_143057f5c) * SQRT(fVar8);
  uVar6 = -(uint)(fVar9 < 0.0);
  fVar8 = fVar15 * fVar13 - fVar14 * fVar12;
  uVar7 = -(uint)NAN(fVar8);
  fVar15 = _DAT_142e36f28 - param_4;
  fVar9 = (float)(_DAT_143009de0 & uVar7 |
                 ~uVar7 & ((uint)fVar8 & _DAT_142e37820 | (uint)_DAT_142e3c640)) *
          (float)(uVar6 & (uint)(_DAT_142f94714 - fVar11) | ~uVar6 & (uint)fVar11) * param_4 +
          fVar15 * 0.0;
  fVar8 = (float)pub_142e32b30(fVar9);
  fVar9 = (float)pub_142e329e0(fVar9);
  fVar12 = (float)uVar4 * param_4 + (float)uVar2 * fVar15;
  fVar11 = (float)((ulonglong)uVar4 >> 0x20) * param_4 + (float)((ulonglong)uVar2 >> 0x20) * fVar15;
  if (0x7f7fffff < (uint)ABS(fVar12)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1431ffba0,0x23,&UNK_1431ffc98);
  }
  if (0x7f7fffff < (uint)ABS(fVar11)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1431ffbc3,0x24,&UNK_1431ffc98);
  }
  fVar10 = (float)(uVar5 ^ (uint)fVar8) * fVar14 + fVar9 * fVar13;
  fVar8 = fVar9 * fVar14 + fVar8 * fVar13;
  if ((float)((uint)(fVar8 * fVar8 + fVar10 * fVar10 + _DAT_142e36f34) & _DAT_142e377e0) <=
      _DAT_1431ff900) {
    *param_1 = fVar10;
    param_1[1] = fVar8;
    param_1[2] = fVar15 * (float)uVar1 + param_4 * (float)uVar3;
    param_1[3] = fVar15 * (float)((ulonglong)uVar1 >> 0x20) +
                 param_4 * (float)((ulonglong)uVar3 >> 0x20);
    *(ulonglong *)(param_1 + 4) = CONCAT44(fVar11,fVar12);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_1431ffc68,0x2d,&UNK_1431ffc98);
}

