// VA 0x140732b60, PDB extent 10 bytes
// toolbar::mei::core::Node::hover
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::core::Node::hover
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
   Extent: 10 */

byte pdb_140732b60(longlong param_1)

{
  return *(byte *)(param_1 + 0xca) & 1;
}

