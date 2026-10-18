// VA 0x141473710, PDB extent 44 bytes
// utils::geometry::intersect::Triangle::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/intersect.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::geometry::intersect::Triangle::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/intersect.rs
   Extent: 44 */

void pdb_141473710(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  *(undefined8 *)((longlong)param_1 + 0xc) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(param_3 + 1);
  param_1[3] = *param_4;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_4 + 1);
  return;
}

