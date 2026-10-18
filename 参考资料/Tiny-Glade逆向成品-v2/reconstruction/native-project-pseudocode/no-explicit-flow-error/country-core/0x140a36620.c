// VA 0x140a36620, PDB extent 8 bytes
// country_core::systems::camera_rig::MainCamera::mode
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::camera_rig::MainCamera::mode
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig.rs
   Extent: 8 */

undefined1 pdb_140a36620(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x4d0);
}

