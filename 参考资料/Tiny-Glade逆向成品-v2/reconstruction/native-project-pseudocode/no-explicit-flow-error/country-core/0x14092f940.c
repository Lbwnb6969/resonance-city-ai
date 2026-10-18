// VA 0x14092f940, PDB extent 197 bytes
// country_core::resources::walls::public_wall_state::PublicWallState::stone_foundation_y
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/public_wall_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::public_wall_state::PublicWallState::stone_foundation_y
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/public_wall_state.rs
   Extent: 197 */

uint pdb_14092f940(longlong param_1,float param_2)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  ulonglong uVar4;
  float *pfVar5;
  longlong lVar6;
  float fVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x98);
  if (lVar2 != 0) {
    param_2 = *(float *)(*(longlong *)(param_1 + 0x90) + 4);
    if (lVar2 != 1) {
      lVar6 = (lVar2 * 0xc - 0xcU >> 2) * -0x5555555555555555;
      pfVar5 = (float *)(*(longlong *)(param_1 + 0x90) + 0x10);
      do {
        fVar1 = *pfVar5;
        uVar4 = CONCAT44((uint)((int)fVar1 >> 0x1f) >> 1,(uint)((int)param_2 >> 0x1f) >> 1) ^
                CONCAT44(fVar1,param_2);
        if ((int)uVar4 <= (int)(uVar4 >> 0x20)) {
          fVar1 = param_2;
        }
        param_2 = fVar1;
        pfVar5 = pfVar5 + 3;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  fVar1 = *(float *)(param_1 + 0x284);
  fVar7 = fVar1;
  if (lVar2 != 0) {
    fVar7 = param_2;
  }
  fVar7 = fVar7 + *(float *)(param_1 + 0x294);
  fVar3 = fVar1;
  if (fVar1 <= fVar7) {
    fVar3 = fVar7;
  }
  return -(uint)NAN(fVar7) & (uint)fVar1 | ~-(uint)NAN(fVar7) & (uint)fVar3;
}

