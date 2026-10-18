// VA 0x140deeb40, PDB extent 70 bytes
// utils::geometry::aabb::Aabb2::from_center_radius
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::geometry::aabb::Aabb2::from_center_radius
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
   Extent: 70 */

float * pdb_140deeb40(float *param_1,float param_2,float param_3,float param_4)

{
  if (0.0 <= param_4) {
    *param_1 = param_2 - param_4;
    param_1[1] = param_3 - param_4;
    param_1[2] = param_4 + param_2;
    param_1[3] = param_4 + param_3;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_1431ff750,0x1f,&UNK_1431ff770);
}

