// VA 0x140bf25f0, PDB extent 51 bytes
// country_core::resources::mouse_terrain_raycast::CameraCursorRay::intersect_with_xz_plane
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/mouse_terrain_raycast.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::mouse_terrain_raycast::CameraCursorRay::intersect_with_xz_plane
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/mouse_terrain_raycast.rs
   Extent: 51 */

undefined8 * pdb_140bf25f0(undefined8 *param_1,undefined8 *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = (param_3 - *(float *)((longlong)param_2 + 4)) / *(float *)(param_2 + 2);
  fVar1 = *(float *)((longlong)param_2 + 0x14);
  fVar2 = *(float *)(param_2 + 1);
  *param_1 = CONCAT44(fVar3 * (float)((ulonglong)*(undefined8 *)((longlong)param_2 + 0xc) >> 0x20) +
                      (float)((ulonglong)*param_2 >> 0x20),
                      fVar3 * (float)*(undefined8 *)((longlong)param_2 + 0xc) + (float)*param_2);
  *(float *)(param_1 + 1) = fVar3 * fVar1 + fVar2;
  return param_1;
}

