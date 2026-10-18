// VA 0x140def750, PDB extent 209 bytes
// utils::geometry::circle::Circle2d::intersect_circle
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::circle::Circle2d::intersect_circle
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
   Extent: 209 */

void pdb_140def750(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar6 = (float)*param_2;
  fVar8 = (float)((ulonglong)*param_2 >> 0x20);
  fVar2 = (float)*param_3;
  fVar4 = fVar6 - fVar2;
  fVar3 = (float)((ulonglong)*param_3 >> 0x20);
  fVar7 = fVar8 - fVar3;
  fVar5 = SQRT(fVar7 * fVar7 + fVar4 * fVar4);
  fVar4 = *(float *)(param_2 + 1);
  fVar7 = *(float *)(param_3 + 1);
  uVar1 = 0;
  if ((fVar5 <= fVar4 + fVar7) && ((float)((uint)(fVar4 - fVar7) & _DAT_142e377e0) <= fVar5)) {
    fVar7 = (fVar5 * fVar5 + (fVar4 * fVar4 - fVar7 * fVar7)) / (fVar5 + fVar5);
    fVar2 = fVar2 - fVar6;
    fVar3 = fVar3 - fVar8;
    fVar4 = SQRT(fVar4 * fVar4 - fVar7 * fVar7) / fVar5;
    fVar6 = (fVar7 / fVar5) * fVar2 + fVar6;
    fVar8 = (fVar7 / fVar5) * fVar3 + fVar8;
    fVar3 = (float)(_UNK_142e37824 ^ (uint)fVar3);
    param_1[1] = fVar6 + fVar3 * fVar4;
    param_1[2] = fVar8 + fVar2 * fVar4;
    param_1[3] = fVar6 - fVar3 * fVar4;
    param_1[4] = fVar8 - fVar2 * fVar4;
    uVar1 = 1;
  }
  *param_1 = uVar1;
  return;
}

