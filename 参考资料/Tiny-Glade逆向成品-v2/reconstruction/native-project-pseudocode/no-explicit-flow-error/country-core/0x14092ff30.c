// VA 0x14092ff30, PDB extent 465 bytes
// country_core::resources::walls::public_wall_state::PublicWallState::stone_foundation_transition_y
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/public_wall_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::public_wall_state::PublicWallState::stone_foundation_transition_y
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/public_wall_state.rs
   Extent: 465 */

ulonglong pdb_14092ff30(longlong param_1,char param_2)

{
  longlong lVar1;
  code *pcVar2;
  float *pfVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (param_2 == '\0') {
    if (*(char *)(param_1 + 0x110) == '\0') goto LAB_1409300fb;
    fVar6 = *(float *)(param_1 + 0x114);
    lVar5 = *(longlong *)(param_1 + 0x98);
  }
  else {
    if (*(char *)(param_1 + 0x108) == '\0') {
      pdb_142d8e040();
LAB_1409300fb:
      pdb_142d8e000();
      pcVar2 = (code *)swi(3);
      uVar8 = (*pcVar2)();
      return uVar8;
    }
    fVar6 = *(float *)(param_1 + 0x10c) + _DAT_142e3c604 + _DAT_143021a60;
    lVar5 = *(longlong *)(param_1 + 0x98);
  }
  if (lVar5 == 0) {
    fVar10 = *(float *)(param_1 + 0x284);
    fVar11 = fVar10;
    fVar9 = fVar10;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x90);
    fVar7 = *(float *)(lVar1 + 4);
    fVar9 = fVar7;
    if (lVar5 == 1) {
      fVar10 = *(float *)(param_1 + 0x284);
      fVar11 = fVar7;
    }
    else {
      lVar4 = (lVar5 * 0xc - 0xcU >> 2) * -0x5555555555555555;
      pfVar3 = (float *)(lVar1 + 0x10);
      lVar5 = lVar4;
      do {
        fVar10 = *pfVar3;
        uVar8 = CONCAT44((uint)((int)fVar10 >> 0x1f) >> 1,(uint)((int)fVar9 >> 0x1f) >> 1) ^
                CONCAT44(fVar10,fVar9);
        if ((int)uVar8 <= (int)(uVar8 >> 0x20)) {
          fVar10 = fVar9;
        }
        fVar9 = fVar10;
        pfVar3 = pfVar3 + 3;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      fVar10 = *(float *)(param_1 + 0x284);
      pfVar3 = (float *)(lVar1 + 0x10);
      do {
        fVar11 = *pfVar3;
        uVar8 = CONCAT44((uint)((int)fVar11 >> 0x1f) >> 1,(uint)((int)fVar7 >> 0x1f) >> 1) ^
                CONCAT44(fVar11,fVar7);
        if ((int)uVar8 <= (int)(uVar8 >> 0x20)) {
          fVar11 = fVar7;
        }
        pfVar3 = pfVar3 + 3;
        lVar4 = lVar4 + -1;
        fVar7 = fVar11;
      } while (lVar4 != 0);
    }
  }
  fVar7 = fVar6 - fVar9;
  if (fVar6 - fVar9 <= 0.0) {
    fVar7 = 0.0;
  }
  fVar6 = 0.0;
  if (0.0 <= *(float *)(param_1 + 0x294)) {
    fVar6 = *(float *)(param_1 + 0x294);
  }
  if (fVar6 <= fVar7) {
    fVar7 = fVar6;
  }
  fVar7 = fVar7 + fVar11;
  fVar6 = fVar10;
  if (fVar10 <= fVar7) {
    fVar6 = fVar7;
  }
  return (ulonglong)(-(uint)NAN(fVar7) & (uint)fVar10 | ~-(uint)NAN(fVar7) & (uint)fVar6);
}

