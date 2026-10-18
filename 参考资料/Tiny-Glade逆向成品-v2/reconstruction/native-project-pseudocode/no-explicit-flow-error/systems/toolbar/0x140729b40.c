// VA 0x140729b40, PDB extent 46 bytes
// toolbar::mei::widgets::impl$2::create_node_content
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::mei::widgets::impl$2::create_node_content
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 46 */

longlong pdb_140729b40(longlong param_1,undefined8 param_2)

{
  pdb_14119b370(param_1,_DAT_142f95190,0,param_2);
  *(undefined4 *)(param_1 + 600) = 0xffffffff;
  return param_1;
}

