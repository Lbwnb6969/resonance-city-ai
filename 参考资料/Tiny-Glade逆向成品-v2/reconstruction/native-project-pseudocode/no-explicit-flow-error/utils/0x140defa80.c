// VA 0x140defa80, PDB extent 25 bytes
// utils::geometry::circle::Circle2d::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::geometry::circle::Circle2d::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
   Extent: 25 */

undefined4 *
pdb_140defa80(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = 0;
  return param_1;
}

