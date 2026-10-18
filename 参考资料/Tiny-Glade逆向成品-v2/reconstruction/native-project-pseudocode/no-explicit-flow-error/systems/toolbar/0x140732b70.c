// VA 0x140732b70, PDB extent 25 bytes
// toolbar::mei::core::Node::with_nav
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::core::Node::with_nav
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
   Extent: 25 */

void pdb_140732b70(longlong param_1,char param_2)

{
  *(byte *)(param_1 + 0xcb) = param_2 << 5 | *(byte *)(param_1 + 0xcb) & 0xdf;
  return;
}

