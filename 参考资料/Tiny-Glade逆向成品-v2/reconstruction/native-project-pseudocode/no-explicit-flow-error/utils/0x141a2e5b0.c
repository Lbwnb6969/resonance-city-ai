// VA 0x141a2e5b0, PDB extent 11 bytes
// utils::camera::CameraDofLens::immediately_set_vertical_fov_degrees
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/camera.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::camera::CameraDofLens::immediately_set_vertical_fov_degrees
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/camera.rs
   Extent: 11 */

void pdb_141a2e5b0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

