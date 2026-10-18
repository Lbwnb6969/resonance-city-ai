// VA 0x140737640, PDB extent 32 bytes
// toolbar::mei::layout::ComputedLayout::center
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/layout.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::mei::layout::ComputedLayout::center
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/layout.rs
   Extent: 32 */

float pdb_140737640(float *param_1)

{
  return *param_1 * _DAT_142e36f50 + param_1[2];
}

