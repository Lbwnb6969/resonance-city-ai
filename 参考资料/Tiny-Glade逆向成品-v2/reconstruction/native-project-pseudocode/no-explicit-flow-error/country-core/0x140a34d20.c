// VA 0x140a34d20, PDB extent 5 bytes
// country_core::systems::camera_rig::MainCamera::xz_projective_rotation
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::camera_rig::MainCamera::xz_projective_rotation
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig.rs
   Extent: 5 */

undefined8 pdb_140a34d20(undefined8 param_1,undefined8 param_2)

{
  float fVar1;
  uint auStack_28 [2];
  uint uStack_20;
  uint auStack_1c [2];
  uint uStack_14;
  
  pdb_140e09030(auStack_28);
  fVar1 = (float)(uStack_20 & _DAT_142e377e0);
  if ((float)(uStack_20 & _DAT_142e377e0) <= (float)(_DAT_142e377e0 & auStack_28[0])) {
    fVar1 = (float)(_DAT_142e377e0 & auStack_28[0]);
  }
  if (fVar1 <= _DAT_142e37934) {
    pdb_140e08fa0(auStack_1c,param_2);
    uStack_20 = auStack_1c[0];
  }
  else {
    uStack_14 = auStack_28[0] ^ _DAT_142e37820;
  }
  pdb_140de9770(param_1,uStack_20,uStack_14);
  return param_1;
}

