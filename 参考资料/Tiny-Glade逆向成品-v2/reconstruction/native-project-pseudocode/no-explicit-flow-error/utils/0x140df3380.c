// VA 0x140df3380, PDB extent 194 bytes
// utils::geometry::rectangle::Rectangle2d::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::rectangle::Rectangle2d::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 194 */

float * pdb_140df3380(float *param_1,float param_2,float param_3,float param_4,float param_5,
                     float param_6,float param_7,undefined8 param_8)

{
  if (0x7f7fffff < (uint)ABS(param_2)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1431ffba0,0x23,param_8);
  }
  if ((uint)ABS(param_3) < 0x7f800000) {
    if ((float)((uint)(param_5 * param_5 + param_4 * param_4 + _DAT_142e36f34) & _DAT_142e377e0) <=
        _DAT_1431ff900) {
      *param_1 = param_4;
      param_1[1] = param_5;
      param_1[4] = param_2;
      param_1[5] = param_3;
      param_1[2] = param_6;
      param_1[3] = param_7;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1431ffc68,0x2d,param_8);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_1431ffbc3,0x24,param_8);
}

