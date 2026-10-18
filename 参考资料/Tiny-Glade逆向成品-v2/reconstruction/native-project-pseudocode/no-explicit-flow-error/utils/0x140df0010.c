// VA 0x140df0010, PDB extent 219 bytes
// utils::geometry::rectangle::Rectangle2d::as_points2
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::rectangle::Rectangle2d::as_points2
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 219 */

float * pdb_140df0010(float *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
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
  
  fVar2 = *(float *)(param_2 + 2);
  fVar3 = *(float *)((longlong)param_2 + 0x14);
  if (0.0 < fVar2 * fVar3) {
    fVar4 = (float)*param_2;
    fVar5 = (float)((ulonglong)*param_2 >> 0x20);
    fVar7 = (float)(_UNK_142e37824 ^ (uint)fVar5);
    fVar8 = fVar2 * _DAT_142e36f38;
    fVar6 = _DAT_142e36f38 * fVar3;
    fVar3 = fVar3 * _DAT_142e36f50;
    fVar2 = fVar2 * _DAT_142e36f50;
    uVar1 = param_2[1];
    fVar9 = (float)uVar1;
    fVar10 = (float)((ulonglong)uVar1 >> 0x20);
    uVar1 = param_2[1];
    fVar11 = (float)uVar1;
    fVar12 = (float)((ulonglong)uVar1 >> 0x20);
    *param_1 = fVar6 * fVar7 + fVar8 * fVar4 + fVar9;
    param_1[1] = fVar6 * fVar4 + fVar8 * fVar5 + fVar10;
    param_1[2] = fVar3 * fVar7 + fVar8 * fVar4 + fVar11;
    param_1[3] = fVar3 * fVar4 + fVar8 * fVar5 + fVar12;
    param_1[4] = fVar3 * fVar7 + fVar2 * fVar4 + fVar9;
    param_1[5] = fVar3 * fVar4 + fVar2 * fVar5 + fVar10;
    param_1[6] = fVar6 * fVar7 + fVar2 * fVar4 + fVar11;
    param_1[7] = fVar6 * fVar4 + fVar2 * fVar5 + fVar12;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_1431ffa1a,0x23,&UNK_1431ffa40);
}

