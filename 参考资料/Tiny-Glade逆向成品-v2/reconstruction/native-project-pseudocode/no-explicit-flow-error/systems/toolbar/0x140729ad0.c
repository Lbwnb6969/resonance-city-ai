// VA 0x140729ad0, PDB extent 106 bytes
// toolbar::mei::widgets::impl$8::create_node_content
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::widgets::impl$8::create_node_content
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 106 */

undefined8 * pdb_140729ad0(undefined8 *param_1,longlong *param_2)

{
  longlong *plStack_10;
  
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  param_1[4] = 0;
  param_1[5] = 4;
  param_1[6] = 0;
  param_1[7] = 0;
  LOCK();
  *param_2 = *param_2 + -1;
  UNLOCK();
  if (*param_2 == 0) {
    plStack_10 = param_2;
    pdb_140cb5640(&plStack_10);
  }
  return param_1;
}

