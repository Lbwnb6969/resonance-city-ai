// VA 0x140a34500, PDB extent 5 bytes
// country_core::systems::camera_rig::MainCamera::eye_position
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::camera_rig::MainCamera::eye_position
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig.rs
   Extent: 5 */

float * pdb_140a34500(float *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *(float *)(param_2 + 0xc4);
  fVar2 = *(float *)(param_2 + 200);
  fVar3 = *(float *)(param_2 + 0xd4);
  fVar4 = *(float *)(param_2 + 0xd8);
  fVar5 = *(float *)(param_2 + 0xe4);
  fVar6 = *(float *)(param_2 + 0xe8);
  fVar7 = *(float *)(param_2 + 0xf4);
  fVar8 = *(float *)(param_2 + 0xf8);
  *param_1 = *(float *)(param_2 + 0xe0) * 0.0 +
             *(float *)(param_2 + 0xd0) * 0.0 + *(float *)(param_2 + 0xc0) * 0.0 +
             *(float *)(param_2 + 0xf0);
  param_1[1] = fVar5 * 0.0 + fVar3 * 0.0 + fVar1 * 0.0 + fVar7;
  param_1[2] = fVar6 * 0.0 + fVar4 * 0.0 + fVar2 * 0.0 + fVar8;
  return param_1;
}

