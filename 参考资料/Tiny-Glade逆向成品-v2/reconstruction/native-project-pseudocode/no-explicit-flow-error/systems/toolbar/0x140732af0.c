// VA 0x140732af0, PDB extent 8 bytes
// toolbar::mei::core::Node::block_input
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::core::Node::block_input
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
   Extent: 8 */

void pdb_140732af0(longlong param_1)

{
  *(undefined1 *)(param_1 + 0xcb) = 1;
  return;
}

