// VA 0x140abf5e0, PDB extent 461 bytes
// country_core::systems::audio::building_audio::stone_foundation_coverage_01
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/building_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::audio::building_audio::stone_foundation_coverage_01
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/building_audio.rs
   Extent: 461 */

void pdb_140abf5e0(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  float *pfVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (((*(char *)(param_1 + 0x29f) == '\x01') && (*(uint *)(param_1 + 600) < 2)) &&
     (0.0 < *(float *)(param_1 + 0x294))) {
    lVar7 = *(longlong *)(param_1 + 0x98);
    if (lVar7 == 0) {
      if (*(int *)(param_1 + 0x110) != 1) goto LAB_140abf7a7;
      fVar8 = *(float *)(param_1 + 0x284);
      fVar9 = fVar8;
      fVar11 = fVar8;
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x90);
      fVar9 = *(float *)(lVar1 + 4);
      fVar8 = fVar9;
      if (lVar7 == 1) {
        if (*(char *)(param_1 + 0x110) == '\0') goto LAB_140abf7a7;
        fVar11 = *(float *)(param_1 + 0x284);
      }
      else {
        uVar5 = lVar7 * 0xc - 0xcU >> 2;
        lVar7 = uVar5 * -0x5555555555555555;
        pfVar4 = (float *)(lVar1 + 0x10);
        do {
          fVar11 = *pfVar4;
          uVar3 = CONCAT44((uint)((int)fVar11 >> 0x1f) >> 1,(uint)((int)fVar8 >> 0x1f) >> 1) ^
                  CONCAT44(fVar11,fVar8);
          if ((int)uVar3 <= (int)(uVar3 >> 0x20)) {
            fVar11 = fVar8;
          }
          fVar8 = fVar11;
          pfVar4 = pfVar4 + 3;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        if (*(char *)(param_1 + 0x110) == '\0') {
LAB_140abf7a7:
          pdb_142d8e000();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar6 = uVar5 * -0x5555555555555555;
        pfVar4 = (float *)(lVar1 + 0x10);
        do {
          fVar11 = *pfVar4;
          uVar5 = CONCAT44((uint)((int)fVar11 >> 0x1f) >> 1,(uint)((int)fVar9 >> 0x1f) >> 1) ^
                  CONCAT44(fVar11,fVar9);
          if ((int)uVar5 <= (int)(uVar5 >> 0x20)) {
            fVar11 = fVar9;
          }
          fVar9 = fVar11;
          pfVar4 = pfVar4 + 3;
          lVar6 = lVar6 + -1;
          lVar7 = 0;
          fVar11 = *(float *)(param_1 + 0x284);
        } while (lVar6 != 0);
      }
    }
    fVar9 = *(float *)(param_1 + 0x294) + fVar9;
    fVar10 = fVar11;
    if (fVar11 <= fVar9) {
      fVar10 = fVar9;
    }
    pdb_140de8220(fVar8,lVar7,-(uint)NAN(fVar9) & (uint)fVar11 | ~-(uint)NAN(fVar9) & (uint)fVar10);
  }
  return;
}

