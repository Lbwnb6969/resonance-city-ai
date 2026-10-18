// VA 0x140defad0, PDB extent 18 bytes
// utils::geometry::circle::Circle2d::area
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::circle::Circle2d::area
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
   Extent: 18 */

float pdb_140defad0(longlong param_1)

{
  return *(float *)(param_1 + 8) * *(float *)(param_1 + 8) * _DAT_142f94714;
}

