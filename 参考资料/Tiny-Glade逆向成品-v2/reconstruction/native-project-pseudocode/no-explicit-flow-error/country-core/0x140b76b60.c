// VA 0x140b76b60, PDB extent 74 bytes
// country_core::resources::roofs::roof_shape::roof_uv_at_ws_pos
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_shape.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::roofs::roof_shape::roof_uv_at_ws_pos
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_shape.rs
   Extent: 74 */

longlong pdb_140b76b60(longlong param_1)

{
  char cStack_20;
  undefined1 uStack_1f;
  undefined8 uStack_1c;
  
  pdb_140b76bb0(&cStack_20);
  if (cStack_20 != '\x01') {
    *(undefined8 *)(param_1 + 4) = uStack_1c;
  }
  else {
    *(undefined1 *)(param_1 + 1) = uStack_1f;
  }
  *(bool *)param_1 = cStack_20 == '\x01';
  return param_1;
}

