// VA 0x140732b50, PDB extent 11 bytes
// toolbar::mei::core::Node::used
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::core::Node::used
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
   Extent: 11 */

bool pdb_140732b50(longlong param_1)

{
  return (*(byte *)(param_1 + 0xca) & 0x30) != 0;
}

