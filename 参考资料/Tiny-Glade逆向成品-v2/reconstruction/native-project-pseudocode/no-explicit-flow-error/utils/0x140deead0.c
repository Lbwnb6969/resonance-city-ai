// VA 0x140deead0, PDB extent 97 bytes
// utils::geometry::aabb::Aabb2::from_center_dims
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::aabb::Aabb2::from_center_dims
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
   Extent: 97 */

float * pdb_140deead0(float *param_1,float param_2,float param_3,float param_4,float param_5)

{
  if (0.0 <= param_5 * param_5 + param_4 * param_4) {
    param_4 = param_4 * _DAT_142e36f60;
    param_5 = param_5 * _UNK_142e36f64;
    *param_1 = param_2 - param_4;
    param_1[1] = param_3 - param_5;
    param_1[2] = param_2 + param_4;
    param_1[3] = param_3 + param_5;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_1431ff6ec,0x26,&UNK_1431ff738);
}

