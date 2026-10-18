// VA 0x141a2e630, PDB extent 47 bytes
// utils::camera::impl$3::default
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/camera.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::camera::impl$3::default
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/camera.rs
   Extent: 47 */

undefined8 pdb_141a2e630(undefined8 param_1)

{
  undefined8 uStack_14;
  undefined1 uStack_c;
  
  uStack_14 = 0x8000000001;
  uStack_c = 0;
  pdb_141e3b850(param_1,&uStack_14);
  return param_1;
}

