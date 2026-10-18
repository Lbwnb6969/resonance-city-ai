// VA 0x140a36600, PDB extent 28 bytes
// country_core::systems::camera_rig::MainCamera::lens
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::camera_rig::MainCamera::lens
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig.rs
   Extent: 28 */

longlong pdb_140a36600(longlong param_1)

{
  return *(longlong *)(&UNK_14303b4d0 + (ulonglong)*(byte *)(param_1 + 0x4d0) * 8) + param_1 + 0x100
  ;
}

