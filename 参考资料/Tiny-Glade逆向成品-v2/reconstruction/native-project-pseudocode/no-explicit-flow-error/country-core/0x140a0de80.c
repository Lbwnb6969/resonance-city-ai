// VA 0x140a0de80, PDB extent 61 bytes
// country_core::resources::walls::wall_trigger_volume::WallTriggerVolume::get_position_from_mesh_uv
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_trigger_volume.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::wall_trigger_volume::WallTriggerVolume::get_position_from_mesh_uv
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_trigger_volume.rs
   Extent: 61 */

undefined8 pdb_140a0de80(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  pdb_141b45e90(param_1,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28),
                *(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x58),param_3,param_4);
  return param_1;
}

