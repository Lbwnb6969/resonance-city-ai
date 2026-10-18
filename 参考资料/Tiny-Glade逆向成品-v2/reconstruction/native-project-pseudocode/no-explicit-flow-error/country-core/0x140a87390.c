// VA 0x140a87390, PDB extent 287 bytes
// country_core::resources::stone_foundation_frames::stone_foundation_replaces_gothic_half_dormer_hat
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stone_foundation_frames.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::stone_foundation_frames::stone_foundation_replaces_gothic_half_dormer_hat
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stone_foundation_frames.rs
   Extent: 287 */

undefined8 pdb_140a87390(char param_1,longlong param_2)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  float *pfVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  
  if (((param_1 == '\a') && (*(char *)(param_2 + 0x29f) == '\x01')) &&
     (*(uint *)(param_2 + 600) < 2)) {
    fVar9 = 0.0;
    if (0.0 < *(float *)(param_2 + 0x294)) {
      lVar2 = *(longlong *)(param_2 + 0x98);
      if (lVar2 != 0) {
        fVar9 = *(float *)(*(longlong *)(param_2 + 0x90) + 4);
        if (lVar2 != 1) {
          lVar7 = (lVar2 * 0xc - 0xcU >> 2) * -0x5555555555555555;
          pfVar6 = (float *)(*(longlong *)(param_2 + 0x90) + 0x10);
          do {
            fVar1 = *pfVar6;
            uVar4 = CONCAT44((uint)((int)fVar1 >> 0x1f) >> 1,(uint)((int)fVar9 >> 0x1f) >> 1) ^
                    CONCAT44(fVar1,fVar9);
            if ((int)uVar4 <= (int)(uVar4 >> 0x20)) {
              fVar1 = fVar9;
            }
            fVar9 = fVar1;
            pfVar6 = pfVar6 + 3;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
      }
      if (*(char *)(param_2 + 0x108) == '\0') {
        pdb_142d8e040();
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
      fVar1 = *(float *)(param_2 + 0x284);
      fVar8 = fVar1;
      if (lVar2 != 0) {
        fVar8 = fVar9;
      }
      fVar8 = *(float *)(param_2 + 0x294) + fVar8;
      fVar9 = fVar1;
      if (fVar1 <= fVar8) {
        fVar9 = fVar8;
      }
      return CONCAT71((int7)((ulonglong)lVar2 >> 8),
                      *(float *)(param_2 + 0x10c) <=
                      (float)(-(uint)NAN(fVar8) & (uint)fVar1 | ~-(uint)NAN(fVar8) & (uint)fVar9));
    }
  }
  return 0;
}

