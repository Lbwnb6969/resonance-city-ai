// VA 0x140a352b0, PDB extent 33 bytes
// country_core::systems::camera_rig::MainCamera::immediately_set_vertical_fov_degrees
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::camera_rig::MainCamera::immediately_set_vertical_fov_degrees
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig.rs
   Extent: 33 */

void pdb_140a352b0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(&UNK_14303b4d0 + (ulonglong)*(byte *)(param_1 + 0x4d0) * 8);
  *(undefined4 *)(param_1 + lVar1 + 0x108) = param_2;
  *(undefined4 *)(param_1 + lVar1 + 0x104) = param_2;
  return;
}

