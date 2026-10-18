// VA 0x14072d170, PDB extent 83 bytes
// toolbar::mei::core::RenderContext::draw_rect
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::core::RenderContext::draw_rect
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
   Extent: 83 */

void pdb_14072d170(undefined8 *param_1,float param_2,float param_3,float param_4,float param_5,
                  undefined8 param_6)

{
  pdb_140cb8180(*param_1,CONCAT44(param_3,param_2),CONCAT44(param_5 - param_3,param_4 - param_2),
                *(undefined4 *)(param_1 + 3),param_6);
  return;
}

