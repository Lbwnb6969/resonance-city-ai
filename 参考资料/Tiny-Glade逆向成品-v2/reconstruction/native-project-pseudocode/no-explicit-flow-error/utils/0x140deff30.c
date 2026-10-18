// VA 0x140deff30, PDB extent 14 bytes
// utils::geometry::circle::Circle2d::perimeter
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::circle::Circle2d::perimeter
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
   Extent: 14 */

float pdb_140deff30(longlong param_1)

{
  return *(float *)(param_1 + 8) * _DAT_142f57bcc;
}

