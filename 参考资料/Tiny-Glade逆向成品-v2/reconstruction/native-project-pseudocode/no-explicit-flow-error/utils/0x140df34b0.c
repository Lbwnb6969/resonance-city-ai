// VA 0x140df34b0, PDB extent 11 bytes
// utils::geometry::rectangle::Rectangle2d::area
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::geometry::rectangle::Rectangle2d::area
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 11 */

float pdb_140df34b0(longlong param_1)

{
  return *(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x14);
}

