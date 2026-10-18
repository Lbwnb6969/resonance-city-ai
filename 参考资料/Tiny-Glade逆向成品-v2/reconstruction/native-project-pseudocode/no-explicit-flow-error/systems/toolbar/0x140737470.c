// VA 0x140737470, PDB extent 63 bytes
// toolbar::mei::layout::LayoutStyle::place_childen
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/layout.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::layout::LayoutStyle::place_childen
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/layout.rs
   Extent: 63 */

undefined8 pdb_140737470(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x44) == '\x01') {
    pdb_1411b5cd0(param_1);
    return param_1;
  }
  pdb_1411b5730(param_1);
  return param_1;
}

