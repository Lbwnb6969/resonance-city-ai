// VA 0x140ab7c90, PDB extent 11 bytes
// country_core::systems::camera_rig::walk::WalkCamera::rotation
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig/walk.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::camera_rig::walk::WalkCamera::rotation
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig/walk.rs
   Extent: 11 */

undefined8 * pdb_140ab7c90(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *param_1 = *(undefined8 *)(param_2 + 0x18);
  param_1[1] = uVar1;
  return param_1;
}

