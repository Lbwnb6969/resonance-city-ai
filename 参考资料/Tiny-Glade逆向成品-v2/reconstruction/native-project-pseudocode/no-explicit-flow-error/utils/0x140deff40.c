// VA 0x140deff40, PDB extent 140 bytes
// utils::geometry::rectangle::impl$2::from
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::rectangle::impl$2::from
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 140 */

float * pdb_140deff40(float *param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = (float)*param_2;
  fVar2 = (float)((ulonglong)*param_2 >> 0x20);
  fVar3 = (float)param_2[1];
  fVar4 = (float)((ulonglong)param_2[1] >> 0x20);
  fVar5 = fVar3 - fVar1;
  fVar6 = fVar4 - fVar2;
  if (0x7f7fffff < (uint)ABS(fVar5)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1431ffba0,0x23,&UNK_1431ff9e0);
  }
  if ((uint)ABS(fVar6) < 0x7f800000) {
    *(ulonglong *)(param_1 + 4) = CONCAT44(fVar6,fVar5);
    fVar5 = _UNK_142e37954 * _UNK_1431ff894;
    fVar3 = (fVar3 + fVar1) * _UNK_1431ff898;
    fVar4 = (fVar4 + fVar2) * _UNK_1431ff89c;
    *param_1 = _DAT_142e37950 * _DAT_1431ff890;
    param_1[1] = fVar5;
    param_1[2] = fVar3;
    param_1[3] = fVar4;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_1431ffbc3,0x24,&UNK_1431ff9e0);
}

