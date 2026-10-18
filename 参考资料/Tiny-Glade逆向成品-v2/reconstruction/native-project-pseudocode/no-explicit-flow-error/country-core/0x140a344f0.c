// VA 0x140a344f0, PDB extent 5 bytes
// country_core::systems::camera_rig::MainCamera::eye_forward
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::camera_rig::MainCamera::eye_forward
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig.rs
   Extent: 5 */

float * pdb_140a344f0(float *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_2 + 0xf0) * 0.0 +
          ((*(float *)(param_2 + 0xd0) * 0.0 + *(float *)(param_2 + 0xc0) * 0.0) -
          *(float *)(param_2 + 0xe0));
  fVar2 = *(float *)(param_2 + 0xf4) * 0.0 +
          ((*(float *)(param_2 + 0xd4) * 0.0 + *(float *)(param_2 + 0xc4) * 0.0) -
          *(float *)(param_2 + 0xe4));
  fVar3 = *(float *)(param_2 + 0xf8) * 0.0 +
          ((*(float *)(param_2 + 0xd8) * 0.0 + *(float *)(param_2 + 200) * 0.0) -
          *(float *)(param_2 + 0xe8));
  fVar4 = _DAT_142e36f28 / SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  *param_1 = fVar1 * fVar4;
  param_1[1] = fVar2 * fVar4;
  param_1[2] = fVar4 * fVar3;
  return param_1;
}

