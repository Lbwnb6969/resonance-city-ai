// VA 0x14092fcf0, PDB extent 272 bytes
// country_core::resources::walls::public_wall_state::PublicWallState::clamp_stone_foundation_offset
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/public_wall_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::public_wall_state::PublicWallState::clamp_stone_foundation_offset
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/public_wall_state.rs
   Extent: 272 */

ulonglong pdb_14092fcf0(longlong param_1,float param_2,char param_3)

{
  longlong lVar1;
  code *pcVar2;
  float *pfVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  ulonglong uVar7;
  float in_XMM2_Da;
  
  if (param_3 == '\0') {
    if (*(char *)(param_1 + 0x110) == '\0') goto LAB_14092fdfa;
    fVar5 = *(float *)(param_1 + 0x114);
    lVar1 = *(longlong *)(param_1 + 0x98);
  }
  else {
    if (*(char *)(param_1 + 0x108) == '\0') {
      pdb_142d8e040();
LAB_14092fdfa:
      pdb_142d8e000();
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return uVar7;
    }
    fVar5 = *(float *)(param_1 + 0x10c) + _DAT_142e3c604 + _DAT_143021a60;
    lVar1 = *(longlong *)(param_1 + 0x98);
  }
  if (lVar1 != 0) {
    in_XMM2_Da = *(float *)(*(longlong *)(param_1 + 0x90) + 4);
    if (lVar1 != 1) {
      lVar4 = (lVar1 * 0xc - 0xcU >> 2) * -0x5555555555555555;
      pfVar3 = (float *)(*(longlong *)(param_1 + 0x90) + 0x10);
      fVar6 = in_XMM2_Da;
      do {
        in_XMM2_Da = *pfVar3;
        uVar7 = CONCAT44((uint)((int)in_XMM2_Da >> 0x1f) >> 1,(uint)((int)fVar6 >> 0x1f) >> 1) ^
                CONCAT44(in_XMM2_Da,fVar6);
        if ((int)uVar7 <= (int)(uVar7 >> 0x20)) {
          in_XMM2_Da = fVar6;
        }
        pfVar3 = pfVar3 + 3;
        lVar4 = lVar4 + -1;
        fVar6 = in_XMM2_Da;
      } while (lVar4 != 0);
    }
  }
  if (lVar1 == 0) {
    in_XMM2_Da = *(float *)(param_1 + 0x284);
  }
  fVar6 = fVar5 - in_XMM2_Da;
  if (fVar5 - in_XMM2_Da <= 0.0) {
    fVar6 = 0.0;
  }
  fVar5 = 0.0;
  if (0.0 <= param_2) {
    fVar5 = param_2;
  }
  if (fVar5 <= fVar6) {
    fVar6 = fVar5;
  }
  return (ulonglong)(uint)fVar6;
}

