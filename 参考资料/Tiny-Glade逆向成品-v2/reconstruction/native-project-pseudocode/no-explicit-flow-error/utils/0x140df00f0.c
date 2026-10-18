// VA 0x140df00f0, PDB extent 410 bytes
// utils::geometry::rectangle::Rectangle2d::as_points3
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::rectangle::Rectangle2d::as_points3
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 410 */

float * pdb_140df00f0(float *param_1,undefined8 *param_2,float param_3)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar3 = *(float *)(param_2 + 2);
  fVar8 = *(float *)((longlong)param_2 + 0x14);
  if (0.0 < fVar3 * fVar8) {
    uVar2 = param_2[1];
    fVar4 = (float)*param_2;
    fVar5 = (float)((ulonglong)*param_2 >> 0x20);
    fVar6 = (float)(_UNK_142e37824 ^ (uint)fVar5);
    fVar7 = fVar3 * _DAT_142e36f38;
    fVar9 = _DAT_142e36f38 * fVar8;
    fVar8 = fVar8 * _DAT_142e36f50;
    fVar3 = fVar3 * _DAT_142e36f50;
    fVar1 = *(float *)((longlong)param_2 + 0xc);
    fVar10 = (float)uVar2;
    fVar11 = _DAT_142e377f0 + param_3;
    *param_1 = fVar9 * fVar6 + fVar7 * fVar4 + fVar10;
    param_1[1] = fVar11;
    param_1[2] = fVar9 * fVar4 + fVar7 * fVar5 + (float)((ulonglong)uVar2 >> 0x20);
    param_1[3] = fVar8 * fVar6 + fVar7 * fVar4 + fVar10;
    param_1[4] = param_3;
    param_1[5] = fVar8 * fVar4 + fVar7 * fVar5 + fVar1;
    param_1[6] = fVar8 * fVar6 + fVar3 * fVar4 + fVar10;
    param_1[7] = param_3;
    param_1[8] = fVar8 * fVar4 + fVar3 * fVar5 + fVar1;
    param_1[9] = fVar9 * fVar6 + fVar3 * fVar4 + fVar10;
    param_1[10] = param_3;
    param_1[0xb] = fVar9 * fVar4 + fVar3 * fVar5 + fVar1;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_1431ffa1a,0x23,&UNK_1431ffa58);
}

