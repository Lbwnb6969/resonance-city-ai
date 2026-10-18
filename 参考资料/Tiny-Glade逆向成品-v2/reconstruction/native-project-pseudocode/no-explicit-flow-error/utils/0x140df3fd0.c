// VA 0x140df3fd0, PDB extent 305 bytes
// utils::geometry::rectangle::Rectangle3d::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::rectangle::Rectangle3d::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 305 */

float * pdb_140df3fd0(float *param_1,float *param_2,float *param_3,float param_4,float param_5,
                     undefined8 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = *param_3;
  if (0x7f7fffff < (uint)ABS(fVar4)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1431ffba0,0x23,param_6);
  }
  fVar5 = param_3[2];
  if ((uint)ABS(fVar5) < 0x7f800000) {
    if ((float)((uint)(param_5 * param_5 + param_4 * param_4 + _DAT_142e36f34) & _DAT_142e377e0) <=
        _DAT_1431ff900) {
      fVar1 = *param_2;
      fVar2 = param_2[2];
      fVar3 = param_2[1];
      fVar6 = param_3[1] * _DAT_142e36f50;
      *param_1 = param_4;
      param_1[1] = param_5;
      param_1[2] = fVar1;
      param_1[3] = fVar2;
      param_1[4] = fVar4;
      param_1[5] = fVar5;
      param_1[6] = fVar3 - fVar6;
      param_1[7] = fVar6 + fVar3;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1431ffc68,0x2d,param_6);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_1431ffbc3,0x24,param_6);
}

