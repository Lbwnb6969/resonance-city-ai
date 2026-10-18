// VA 0x140732ae0, PDB extent 14 bytes
// toolbar::mei::core::Node::set_sounds
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::core::Node::set_sounds
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
   Extent: 14 */

void pdb_140732ae0(longlong param_1,undefined1 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 200) = param_2;
  *(undefined1 *)(param_1 + 0xc9) = param_3;
  return;
}

