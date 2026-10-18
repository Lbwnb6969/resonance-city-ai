// VA 0x1407248c0, PDB extent 32 bytes
// toolbar::mei::widgets::impl$14::create_node_content
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets/tweaker.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::widgets::impl$14::create_node_content
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets/tweaker.rs
   Extent: 32 */

undefined8 pdb_1407248c0(longlong *param_1)

{
  longlong *plStack_8;
  
  LOCK();
  *param_1 = *param_1 + -1;
  UNLOCK();
  if (*param_1 == 0) {
    plStack_8 = param_1;
    pdb_140cb5640(&plStack_8);
  }
  return 0;
}

