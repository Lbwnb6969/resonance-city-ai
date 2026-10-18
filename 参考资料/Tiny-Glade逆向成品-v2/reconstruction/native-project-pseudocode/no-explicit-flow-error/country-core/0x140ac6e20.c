// VA 0x140ac6e20, PDB extent 263 bytes
// country_core::systems::camera_rig::normal::impl$1::rotate_yaw_pitch
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig/normal.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::camera_rig::normal::impl$1::rotate_yaw_pitch
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig/normal.rs
   Extent: 263 */

void pdb_140ac6e20(longlong param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uStack_58;
  longlong lStack_50;
  longlong lStack_48;
  longlong lStack_40;
  
  fVar4 = *(float *)(param_1 + 0x50);
  lStack_48 = *(longlong *)(param_1 + 8);
  lStack_40 = *(longlong *)(param_1 + 0x10) * 0x1c + lStack_48;
  lStack_50 = 0;
  if (*(char *)(param_1 + 0x18) != '\0') {
    lStack_50 = param_1 + 0x1c;
  }
  uStack_58 = 1;
  fVar1 = (float)pdb_140b8f310(&uStack_58,_DAT_142e377f0);
  if (*(int *)(param_1 + 0x18) == 1) {
    fVar4 = fVar4 + fVar1;
    fVar2 = (float)((uint)(param_3 + fVar4) ^ _DAT_142e37820);
    fVar1 = *(float *)(param_1 + 0x5c);
    fVar3 = fVar1;
    if (fVar2 <= fVar1) {
      fVar3 = fVar2;
    }
    fVar3 = (float)(-(uint)NAN(fVar2) & (uint)fVar1 | ~-(uint)NAN(fVar2) & (uint)fVar3);
    fVar1 = _DAT_14304ac24;
    if (DAT_143ca42c4 != '\0') {
      fVar1 = *(float *)(param_1 + 0x58);
    }
    fVar2 = fVar1;
    if (fVar1 <= fVar3) {
      fVar2 = fVar3;
    }
    *(ulonglong *)(param_1 + 0x24) =
         CONCAT44(param_2 + (float)((ulonglong)*(undefined8 *)(param_1 + 0x24) >> 0x20),
                  ((float)((~-(uint)NAN(fVar3) & (uint)fVar2 | -(uint)NAN(fVar3) & (uint)fVar1) ^
                          _DAT_142e37820) - fVar4) + (float)*(undefined8 *)(param_1 + 0x24));
  }
  return;
}

