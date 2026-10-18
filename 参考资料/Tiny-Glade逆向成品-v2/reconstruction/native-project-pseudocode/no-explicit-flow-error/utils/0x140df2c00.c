// VA 0x140df2c00, PDB extent 90 bytes
// utils::geometry::rectangle::Rectangle2d::as_points2_centered_aligned
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::geometry::rectangle::Rectangle2d::as_points2_centered_aligned
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 90 */

float * pdb_140df2c00(float *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = (float)*(undefined8 *)(param_2 + 0x10);
  fVar3 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
  if (0.0 < fVar3 * fVar4) {
    fVar1 = fVar3 * _DAT_143057f30;
    fVar2 = fVar4 * _UNK_143057f34;
    fVar3 = fVar3 * _UNK_143057f38;
    fVar4 = fVar4 * _UNK_143057f3c;
    *param_1 = fVar2;
    param_1[1] = fVar1;
    param_1[2] = fVar2;
    param_1[3] = fVar3;
    param_1[4] = fVar4;
    *(ulonglong *)(param_1 + 5) = CONCAT44(fVar4,fVar3);
    param_1[7] = fVar1;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_1431ffa1a,0x23,&UNK_1431ffc38);
}

