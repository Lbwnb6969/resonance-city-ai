// VA 0x140df4180, PDB extent 490 bytes
// utils::geometry::rectangle::Rectangle3d::points
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::rectangle::Rectangle3d::points
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 490 */

float * pdb_140df4180(float *param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar2 = *(float *)(param_2 + 2);
  fVar10 = *(float *)((longlong)param_2 + 0x14);
  if (0.0 < fVar2 * fVar10) {
    fVar1 = *(float *)(param_2 + 3);
    fVar7 = (float)*param_2;
    fVar9 = (float)((ulonglong)*param_2 >> 0x20);
    fVar5 = (float)(_UNK_142e37824 ^ (uint)fVar9);
    fVar12 = fVar2 * _DAT_142e36f38;
    fVar11 = _DAT_142e36f38 * fVar10;
    fVar3 = *(float *)((longlong)param_2 + 0xc);
    fVar8 = *(float *)(param_2 + 1);
    fVar6 = fVar11 * fVar7 + fVar12 * fVar9 + fVar3;
    fVar4 = fVar11 * fVar5 + fVar12 * fVar7 + fVar8;
    fVar10 = fVar10 * _DAT_142e36f50;
    fVar13 = fVar10 * fVar7 + fVar12 * fVar9 + fVar3;
    fVar12 = fVar10 * fVar5 + fVar12 * fVar7 + fVar8;
    fVar2 = fVar2 * _DAT_142e36f50;
    fVar14 = fVar10 * fVar7 + fVar2 * fVar9 + fVar3;
    fVar10 = fVar10 * fVar5 + fVar2 * fVar7 + fVar8;
    fVar3 = fVar11 * fVar7 + fVar2 * fVar9 + fVar3;
    fVar8 = fVar11 * fVar5 + fVar2 * fVar7 + fVar8;
    fVar2 = *(float *)((longlong)param_2 + 0x1c);
    *param_1 = fVar4;
    param_1[1] = fVar1;
    param_1[2] = fVar6;
    param_1[3] = fVar12;
    param_1[4] = fVar1;
    param_1[5] = fVar13;
    param_1[6] = fVar10;
    param_1[7] = fVar1;
    param_1[8] = fVar14;
    param_1[9] = fVar8;
    param_1[10] = fVar1;
    param_1[0xb] = fVar3;
    param_1[0xc] = fVar4;
    param_1[0xd] = fVar2;
    param_1[0xe] = fVar6;
    param_1[0xf] = fVar12;
    param_1[0x10] = fVar2;
    param_1[0x11] = fVar13;
    param_1[0x12] = fVar10;
    param_1[0x13] = fVar2;
    param_1[0x14] = fVar14;
    param_1[0x15] = fVar8;
    param_1[0x16] = fVar2;
    param_1[0x17] = fVar3;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_1431ffa1a,0x23,&UNK_1431ffa58);
}

