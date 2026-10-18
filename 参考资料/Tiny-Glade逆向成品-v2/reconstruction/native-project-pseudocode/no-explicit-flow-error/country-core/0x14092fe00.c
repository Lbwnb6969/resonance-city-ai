// VA 0x14092fe00, PDB extent 289 bytes
// country_core::resources::walls::public_wall_state::PublicWallState::stone_foundation_offset_range
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/public_wall_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::public_wall_state::PublicWallState::stone_foundation_offset_range
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/public_wall_state.rs
   Extent: 289 */

undefined4 * pdb_14092fe00(undefined4 *param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  float *pfVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float in_XMM1_Da;
  
  if (param_3 == '\0') {
    if (*(char *)(param_2 + 0x110) == '\0') goto LAB_14092ff1b;
    fVar7 = *(float *)(param_2 + 0x114);
    lVar1 = *(longlong *)(param_2 + 0x98);
  }
  else {
    if (*(char *)(param_2 + 0x108) == '\0') {
      pdb_142d8e040();
LAB_14092ff1b:
      pdb_142d8e000();
      pcVar2 = (code *)swi(3);
      puVar4 = (undefined4 *)(*pcVar2)();
      return puVar4;
    }
    fVar7 = *(float *)(param_2 + 0x10c) + _DAT_142e3c604 + _DAT_143021a60;
    lVar1 = *(longlong *)(param_2 + 0x98);
  }
  if (lVar1 != 0) {
    in_XMM1_Da = *(float *)(*(longlong *)(param_2 + 0x90) + 4);
    if (lVar1 != 1) {
      lVar6 = (lVar1 * 0xc - 0xcU >> 2) * -0x5555555555555555;
      pfVar5 = (float *)(*(longlong *)(param_2 + 0x90) + 0x10);
      fVar8 = in_XMM1_Da;
      do {
        in_XMM1_Da = *pfVar5;
        uVar3 = CONCAT44((uint)((int)in_XMM1_Da >> 0x1f) >> 1,(uint)((int)fVar8 >> 0x1f) >> 1) ^
                CONCAT44(in_XMM1_Da,fVar8);
        if ((int)uVar3 <= (int)(uVar3 >> 0x20)) {
          in_XMM1_Da = fVar8;
        }
        pfVar5 = pfVar5 + 3;
        lVar6 = lVar6 + -1;
        fVar8 = in_XMM1_Da;
      } while (lVar6 != 0);
    }
  }
  if (lVar1 == 0) {
    in_XMM1_Da = *(float *)(param_2 + 0x284);
  }
  fVar8 = fVar7 - in_XMM1_Da;
  if (fVar7 - in_XMM1_Da <= 0.0) {
    fVar8 = 0.0;
  }
  *param_1 = 0;
  param_1[1] = fVar8;
  *(undefined1 *)(param_1 + 2) = 0;
  return param_1;
}

