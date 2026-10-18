// VA 0x140a0a0f0, PDB extent 64 bytes
// country_core::resources::roofs::roof_trigger_volume::RoofTriggerVolume::set_triangles
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_trigger_volume.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::roofs::roof_trigger_volume::RoofTriggerVolume::set_triangles
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_trigger_volume.rs
   Extent: 64 */

void pdb_140a0a0f0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (*param_1 != 0) {
    pub_1406abac0((byte *)param_1[1],*param_1 * 0x24,4);
  }
  param_1[2] = param_2[2];
  lVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = lVar1;
  return;
}

