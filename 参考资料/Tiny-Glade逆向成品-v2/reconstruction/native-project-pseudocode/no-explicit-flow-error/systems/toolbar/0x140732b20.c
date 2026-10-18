// VA 0x140732b20, PDB extent 11 bytes
// toolbar::mei::core::Node::force_interactive
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::core::Node::force_interactive
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
   Extent: 11 */

longlong pdb_140732b20(longlong param_1)

{
  *(byte *)(param_1 + 0xcb) = *(byte *)(param_1 + 0xcb) | 1;
  return param_1;
}

