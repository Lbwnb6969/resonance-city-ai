// VA 0x140ac6f30, PDB extent 364 bytes
// country_core::systems::camera_rig::normal::impl$1::translate_screen_space
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig/normal.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::camera_rig::normal::impl$1::translate_screen_space
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig/normal.rs
   Extent: 364 */

void pdb_140ac6f30(longlong param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_60 [4];
  float fStack_5c;
  undefined1 auStack_54 [4];
  uint uStack_50;
  
  pdb_140e08f50(auStack_60,param_5);
  pdb_140e08fa0(auStack_54,param_5);
  fStack_5c = fStack_5c / (float)(uStack_50 ^ _DAT_142e37820);
  if (fStack_5c <= _DAT_142e36f28) {
    fStack_5c = _DAT_142e36f28;
  }
  fVar2 = (float)pub_142e32b30();
  fVar3 = (float)pub_142e329e0();
  fStack_5c = fStack_5c / _DAT_142e37884;
  fVar1 = *param_2;
  fVar6 = (float)*(undefined8 *)(param_2 + 1);
  fVar7 = (float)((ulonglong)*(undefined8 *)(param_2 + 1) >> 0x20);
  fVar5 = fVar3 * fVar3;
  fVar8 = fVar2 * fVar2 + 0.0;
  fVar4 = fVar7 * 0.0 + fVar2 * fVar6 + fVar1 * 0.0;
  fVar4 = fVar4 + fVar4;
  fVar3 = fVar3 + fVar3;
  *(ulonglong *)(param_1 + 0x44) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x44) >> 0x20) +
                fStack_5c *
                (fVar3 * (fVar1 * 0.0 - fVar7 * 0.0) +
                fVar4 * fVar2 + (fVar5 - (fVar8 + 0.0)) * fVar6),
                (float)*(undefined8 *)(param_1 + 0x44) +
                fStack_5c *
                (fVar3 * (fVar2 * fVar7 - fVar6 * 0.0) +
                fVar4 * 0.0 + (fVar5 - (fVar8 + 0.0)) * fVar1));
  *(float *)(param_1 + 0x4c) =
       (fVar3 * (fVar6 * 0.0 - fVar1 * fVar2) + fVar4 * 0.0 + (fVar5 - (fVar8 + 0.0)) * fVar7) *
       fStack_5c + *(float *)(param_1 + 0x4c);
  return;
}

