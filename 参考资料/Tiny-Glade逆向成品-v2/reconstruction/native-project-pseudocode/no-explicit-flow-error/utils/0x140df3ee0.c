// VA 0x140df3ee0, PDB extent 15 bytes
// utils::geometry::rectangle::Rectangle2d::perimeter
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::geometry::rectangle::Rectangle2d::perimeter
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 15 */

float pdb_140df3ee0(longlong param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x14);
  return fVar1 + fVar1;
}

