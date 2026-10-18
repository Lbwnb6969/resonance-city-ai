// VA 0x140b56280, PDB extent 228 bytes
// country_core::systems::weather_system::weather_system
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/weather_system.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::weather_system::weather_system
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/weather_system.rs
   Extent: 228 */

void pdb_140b56280(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  
  if (*(char *)(*param_3 + 0x98) == '\x04') {
    lVar1 = *param_1;
    if (*(char *)(lVar1 + 0x15) != '\x01') {
      puVar2 = (ulonglong *)*param_2;
      fVar5 = (float)pub_142e32b30((((float)(int)puVar2[1] / _DAT_142e46a44 + (float)*puVar2) /
                                   _DAT_1430448d8) * _DAT_142f94714);
      fVar6 = *(float *)(puVar2 + 5) * _DAT_142e3b1d8;
      if (fVar5 <= 0.0) {
        uVar3 = *(undefined4 *)((longlong)param_1 + 0x1c);
        puVar4 = (undefined4 *)param_1[2];
        *puVar4 = uVar3;
        fVar6 = *(float *)(lVar1 + 0x10) - fVar6;
      }
      else {
        uVar3 = *(undefined4 *)((longlong)param_1 + 0x1c);
        puVar4 = (undefined4 *)param_1[2];
        *puVar4 = uVar3;
        fVar6 = fVar6 + *(float *)(lVar1 + 0x10);
      }
      fVar5 = 0.0;
      if (0.0 <= fVar6) {
        fVar5 = fVar6;
      }
      fVar6 = _DAT_142e36f28;
      if (fVar5 <= _DAT_142e36f28) {
        fVar6 = fVar5;
      }
      *puVar4 = uVar3;
      *(float *)(lVar1 + 0x10) = fVar6;
    }
  }
  else {
    *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
    *(undefined4 *)(*param_1 + 0x10) = 0;
  }
  return;
}

