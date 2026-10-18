// VA 0x14072cd40, PDB extent 5 bytes
// toolbar::mei::core::NodeContext::id
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::core::NodeContext::id
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
   Extent: 5 */

undefined8 pdb_14072cd40(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}

