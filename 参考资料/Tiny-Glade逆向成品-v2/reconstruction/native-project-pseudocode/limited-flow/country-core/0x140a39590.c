// VA 0x140a39590, PDB extent 21 bytes
// country_core::systems::camera_rig::_::impl$0::deserialize::impl$2::expecting
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::camera_rig::_::impl$0::deserialize::impl$2::expecting
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig.rs
   Extent: 21 */

void pdb_140a39590(undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_14303b231,0x1f,*(code **)(param_2[1] + 0x18));
  return;
}

