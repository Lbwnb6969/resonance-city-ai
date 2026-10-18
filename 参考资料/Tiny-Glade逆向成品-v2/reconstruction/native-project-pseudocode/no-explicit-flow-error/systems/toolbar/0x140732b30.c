// VA 0x140732b30, PDB extent 21 bytes
// toolbar::mei::core::Node::prev_computed_layout
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::core::Node::prev_computed_layout
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
   Extent: 21 */

longlong pdb_140732b30(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (*(char *)(param_1 + 0xa8) != '\0') {
    lVar1 = param_1 + 0xac;
  }
  return lVar1;
}

