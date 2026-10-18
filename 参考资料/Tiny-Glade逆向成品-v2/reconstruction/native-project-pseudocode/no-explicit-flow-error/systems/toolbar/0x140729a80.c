// VA 0x140729a80, PDB extent 76 bytes
// toolbar::mei::widgets::impl$11::create_node_content
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::widgets::impl$11::create_node_content
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 76 */

undefined8 * pdb_140729a80(undefined8 *param_1,longlong *param_2)

{
  longlong *plStack_10;
  
  *param_1 = 0;
  param_1[1] = 8;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 4;
  param_1[5] = 0;
  LOCK();
  *param_2 = *param_2 + -1;
  UNLOCK();
  if (*param_2 == 0) {
    plStack_10 = param_2;
    pdb_140cb5640(&plStack_10);
  }
  return param_1;
}

