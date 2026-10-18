// VA 0x140732b00, PDB extent 11 bytes
// toolbar::mei::core::Node::ignore_input
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::core::Node::ignore_input
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
   Extent: 11 */

longlong pdb_140732b00(longlong param_1)

{
  *(byte *)(param_1 + 0xcb) = *(byte *)(param_1 + 0xcb) | 2;
  return param_1;
}

