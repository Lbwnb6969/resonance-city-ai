// VA 0x1414c77e0, PDB extent 21 bytes
// utils::geometry::ws_to_cs
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::ws_to_cs
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/mod.rs
   Extent: 21 */

float pdb_1414c77e0(float param_1,longlong param_2)

{
  return (_DAT_142e36f50 / param_1) * *(float *)(param_2 + 0x14);
}

