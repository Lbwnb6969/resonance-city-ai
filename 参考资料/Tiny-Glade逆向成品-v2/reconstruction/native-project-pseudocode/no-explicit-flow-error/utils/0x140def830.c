// VA 0x140def830, PDB extent 23 bytes
// utils::geometry::circle::Circle2d::as_points2_ptcount
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::geometry::circle::Circle2d::as_points2_ptcount
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
   Extent: 23 */

undefined8 * pdb_140def830(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[2] = 0;
  param_1[3] = param_3;
  *param_1 = param_2;
  param_1[1] = param_3;
  return param_1;
}

