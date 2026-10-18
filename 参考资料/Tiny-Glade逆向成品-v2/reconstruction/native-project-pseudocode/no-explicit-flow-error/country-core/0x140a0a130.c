// VA 0x140a0a130, PDB extent 123 bytes
// country_core::resources::roofs::roof_trigger_volume::RoofTriggerVolume::get_position_from_mesh_uv
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_trigger_volume.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::roofs::roof_trigger_volume::RoofTriggerVolume::get_position_from_mesh_uv
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_trigger_volume.rs
   Extent: 123 */

uint * pdb_140a0a130(uint *param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                    float param_5)

{
  float fVar1;
  int aiStack_18 [3];
  float fStack_c;
  
  pdb_141b45e90(aiStack_18,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
                *(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x40),param_3,param_4);
  if (aiStack_18[0] == 1) {
    fVar1 = param_5 * _DAT_142e378e0;
    *(ulonglong *)(param_1 + 1) =
         CONCAT44(SUB84(aiStack_18._4_8_,4) + param_5 * _UNK_142e378e4,
                  (float)aiStack_18._4_8_ + fVar1);
    param_1[3] = (uint)(fVar1 + fStack_c);
  }
  *param_1 = (uint)(aiStack_18[0] == 1);
  return param_1;
}

