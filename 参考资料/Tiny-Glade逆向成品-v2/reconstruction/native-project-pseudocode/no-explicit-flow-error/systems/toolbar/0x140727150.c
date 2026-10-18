// VA 0x140727150, PDB extent 71 bytes
// toolbar::mei::widgets::impl$12::prepare_layout
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::widgets::impl$12::prepare_layout
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 71 */

undefined8 * pdb_140727150(undefined8 *param_1,longlong param_2,longlong param_3)

{
  pdb_14043b7d0(param_2 + 0x18);
  pdb_140cb9100(param_2 + 0x18,param_2,*(undefined8 *)(param_3 + 0x10),&UNK_142fa5ea0);
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}

