// VA 0x140deef70, PDB extent 190 bytes
// utils::geometry::aabb::Aabb3::scaled_relative_to_center
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::aabb::Aabb3::scaled_relative_to_center
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
   Extent: 190 */

float * pdb_140deef70(float *param_1,float *param_2,undefined8 *param_3)

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
  
  fVar1 = *param_2;
  fVar5 = (float)*(undefined8 *)(param_2 + 3);
  fVar2 = (float)((ulonglong)*(undefined8 *)(param_2 + 3) >> 0x20);
  fVar3 = (float)*param_3;
  fVar6 = fVar3 * (fVar5 - fVar1);
  fVar7 = (float)((ulonglong)*param_3 >> 0x20) * (fVar2 - param_2[1]);
  fVar8 = *(float *)(param_3 + 1) * (param_2[5] - param_2[2]);
  if ((CONCAT11(0.0 <= fVar7,0.0 <= fVar6) == 0x101) && (0.0 <= fVar8)) {
    fVar7 = fVar7 * _UNK_142e36f44;
    fVar8 = fVar8 * _UNK_142e36f48;
    fVar9 = fVar3 * (fVar5 - fVar1) * _UNK_142e36f4c;
    fVar2 = (param_2[1] + fVar2) * _UNK_142e36f44;
    fVar3 = (param_2[2] + param_2[5]) * _UNK_142e36f48;
    fVar4 = (fVar1 + fVar5) * _UNK_142e36f4c;
    *param_1 = (fVar1 + fVar5) * _DAT_142e36f40 - fVar6 * _DAT_142e36f40;
    param_1[1] = fVar2 - fVar7;
    param_1[2] = fVar3 - fVar8;
    param_1[3] = fVar4 + fVar9;
    *(ulonglong *)(param_1 + 4) = CONCAT44(fVar3 + fVar8,fVar2 + fVar7);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_1431ff788,0x30,&UNK_1431ff7b8);
}

