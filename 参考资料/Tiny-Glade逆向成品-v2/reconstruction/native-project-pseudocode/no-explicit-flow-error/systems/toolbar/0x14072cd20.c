// VA 0x14072cd20, PDB extent 22 bytes
// toolbar::mei::core::NodeContext::expect_child_with_global_id
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::core::NodeContext::expect_child_with_global_id
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
   Extent: 22 */

void pdb_14072cd20(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  *param_1 = *param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  return;
}

