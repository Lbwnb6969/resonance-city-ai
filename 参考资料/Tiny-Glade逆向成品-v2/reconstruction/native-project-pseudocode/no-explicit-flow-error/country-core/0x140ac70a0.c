// VA 0x140ac70a0, PDB extent 308 bytes
// country_core::systems::camera_rig::normal::impl$1::constrain_to_be_above_terrain
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig/normal.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::camera_rig::normal::impl$1::constrain_to_be_above_terrain
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig/normal.rs
   Extent: 308 */

void pdb_140ac70a0(longlong param_1,longlong param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar7 = (float)*(undefined8 *)(param_1 + 0x38);
  fVar8 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x38) >> 0x20);
  fVar1 = *(float *)(param_1 + 0x40);
  fVar4 = *(float *)(param_1 + 0x44) + fVar7;
  fVar9 = fVar8 + *(float *)(param_1 + 0x48);
  fVar5 = *(float *)(param_1 + 0x4c) + fVar1;
  if (DAT_143ca42c4 != '\0') {
    fVar2 = (float)pdb_1419c1ac0(*(undefined8 *)(param_2 + 0x20),param_2,fVar5);
    if ((_DAT_14300e4bc < (float)((uint)fVar4 & _DAT_142e377e0)) ||
       (_DAT_14300e4bc < (float)(_DAT_142e377e0 & (uint)fVar5))) {
      fVar3 = (float)pdb_140b0ab30(param_3);
      fVar6 = fVar3;
      if (fVar3 <= fVar2) {
        fVar6 = fVar2;
      }
      fVar2 = (float)(~-(uint)NAN(fVar2) & (uint)fVar6 | -(uint)NAN(fVar2) & (uint)fVar3);
    }
    fVar2 = fVar2 + *(float *)(param_1 + 0x68);
    fVar6 = fVar2;
    if (fVar2 <= fVar9) {
      fVar6 = fVar9;
    }
    fVar9 = (float)(~-(uint)NAN(fVar9) & (uint)fVar6 | -(uint)NAN(fVar9) & (uint)fVar2);
  }
  *(ulonglong *)(param_1 + 0x44) = CONCAT44(fVar9 - fVar8,fVar4 - fVar7);
  *(float *)(param_1 + 0x4c) = fVar5 - fVar1;
  return;
}

