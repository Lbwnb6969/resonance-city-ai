// VA 0x141a2e5c0, PDB extent 101 bytes
// utils::camera::CameraDofLens::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/camera.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::camera::CameraDofLens::new
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/camera.rs
   Extent: 101 */

void pdb_141a2e5c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = param_5;
  param_1[5] = param_3;
  *(undefined1 *)(param_1 + 10) = param_6;
  param_1[6] = param_7;
  param_1[7] = param_8;
  param_1[8] = param_9;
  param_1[9] = param_7;
  return;
}

