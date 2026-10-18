// VA 0x140df3060, PDB extent 577 bytes
// utils::geometry::rectangle::Rectangle2d::get_edge_dirs_from_corner_id
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::geometry::rectangle::Rectangle2d::get_edge_dirs_from_corner_id
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 577 */

float * pdb_140df3060(float *param_1,undefined8 *param_2,ulonglong param_3)

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
  
  fVar7 = *(float *)(param_2 + 2);
  fVar5 = *(float *)((longlong)param_2 + 0x14);
  if (fVar7 * fVar5 <= 0.0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1431ffa1a,0x23,&UNK_1431ffa40);
  }
  if (param_3 < 4) {
    fVar8 = (float)*param_2;
    fVar10 = (float)((ulonglong)*param_2 >> 0x20);
    fVar2 = (float)(_UNK_142e37824 ^ (uint)fVar10);
    fVar13 = fVar7 * _DAT_142e36f38;
    fVar12 = _DAT_142e36f38 * fVar5;
    fVar5 = fVar5 * _DAT_142e36f50;
    fVar7 = fVar7 * _DAT_142e36f50;
    fVar9 = (float)param_2[1];
    fVar3 = fVar12 * fVar2 + fVar13 * fVar8 + fVar9;
    fVar11 = (float)((ulonglong)param_2[1] >> 0x20);
    fVar4 = fVar12 * fVar8 + fVar13 * fVar10 + fVar11;
    fVar1 = fVar5 * fVar2 + fVar13 * fVar8 + fVar9;
    fVar13 = fVar5 * fVar8 + fVar13 * fVar10 + fVar11;
    fVar6 = fVar5 * fVar2 + fVar7 * fVar8 + fVar9;
    fVar5 = fVar5 * fVar8 + fVar7 * fVar10 + fVar11;
    fVar9 = fVar12 * fVar2 + fVar7 * fVar8 + fVar9;
    fVar11 = fVar12 * fVar8 + fVar7 * fVar10 + fVar11;
    switch(param_3) {
    case 0:
      fVar9 = fVar9 - fVar3;
      fVar11 = fVar11 - fVar4;
      fVar7 = _DAT_142e36f28 / SQRT(fVar11 * fVar11 + fVar9 * fVar9);
      fVar2 = fVar7 * fVar9;
      fVar7 = fVar7 * fVar11;
      fVar3 = fVar1 - fVar3;
      fVar4 = fVar13 - fVar4;
      fVar5 = fVar4 * fVar4 + fVar3 * fVar3;
      break;
    case 1:
      fVar3 = fVar3 - fVar1;
      fVar4 = fVar4 - fVar13;
      fVar7 = _DAT_142e36f28 / SQRT(fVar4 * fVar4 + fVar3 * fVar3);
      fVar2 = fVar7 * fVar3;
      fVar7 = fVar7 * fVar4;
      fVar3 = fVar6 - fVar1;
      fVar4 = fVar5 - fVar13;
      fVar5 = fVar4 * fVar4 + fVar3 * fVar3;
      break;
    case 2:
      fVar1 = fVar1 - fVar6;
      fVar13 = fVar13 - fVar5;
      fVar7 = _DAT_142e36f28 / SQRT(fVar13 * fVar13 + fVar1 * fVar1);
      fVar2 = fVar7 * fVar1;
      fVar7 = fVar7 * fVar13;
      fVar3 = fVar9 - fVar6;
      fVar4 = fVar11 - fVar5;
      fVar5 = fVar4 * fVar4 + fVar3 * fVar3;
      break;
    case 3:
      fVar6 = fVar6 - fVar9;
      fVar5 = fVar5 - fVar11;
      fVar7 = _DAT_142e36f28 / SQRT(fVar5 * fVar5 + fVar6 * fVar6);
      fVar2 = fVar7 * fVar6;
      fVar7 = fVar7 * fVar5;
      fVar3 = fVar3 - fVar9;
      fVar4 = fVar4 - fVar11;
      fVar5 = fVar4 * fVar4 + fVar3 * fVar3;
    }
    fVar5 = _DAT_142e36f28 / SQRT(fVar5);
    *param_1 = fVar2;
    param_1[1] = fVar7;
    param_1[2] = fVar5 * fVar3;
    param_1[3] = fVar5 * fVar4;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_1431ffab8,0x28,&UNK_1431ffc50);
}

