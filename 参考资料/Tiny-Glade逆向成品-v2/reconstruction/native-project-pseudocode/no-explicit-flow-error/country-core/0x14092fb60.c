// VA 0x14092fb60, PDB extent 389 bytes
// country_core::resources::walls::public_wall_state::PublicWallState::get_wall_attachment_height
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/public_wall_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::public_wall_state::PublicWallState::get_wall_attachment_height
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/public_wall_state.rs
   Extent: 389 */

float pdb_14092fb60(longlong param_1,float param_2)

{
  float fVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  float fVar6;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar7;
  
  fVar1 = _DAT_142e36f28;
  if (*(char *)(param_1 + 0x108) == '\0') {
    pdb_142d8e020();
  }
  else {
    if (*(uint *)(param_1 + 600) < 2) {
      return *(float *)(param_1 + 0x10c);
    }
    param_2 = param_2 * *(float *)(param_1 + 0x30);
    if (NAN(param_2)) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_14335ec63,0x1d,&UNK_143021f18);
    }
    if (ABS(param_2) == INFINITY) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_14335ed00,0x22,&UNK_143021f18);
    }
    fVar6 = 0.0;
    if (0.0 <= param_2) {
      fVar6 = param_2;
    }
    fVar7 = _DAT_142e36f28;
    if (fVar6 <= _DAT_142e36f28) {
      fVar7 = fVar6;
    }
    uVar4 = pdb_1419a9060(param_1,fVar7);
    uVar5 = (ulonglong)uVar4;
    uVar2 = *(ulonglong *)(param_1 + 0x10);
    if (uVar5 < uVar2) {
      if (uVar2 <= uVar5 + 1) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar5 + 1,uVar2,&UNK_14335e4f8);
      }
      lVar3 = *(longlong *)(param_1 + 8);
      uVar4 = pdb_1419aab30(param_1 + 0x88,
                            *(float *)(lVar3 + 8 + uVar5 * 8) * extraout_XMM0_Da +
                            *(float *)(lVar3 + uVar5 * 8) * (fVar1 - extraout_XMM0_Da),
                            *(float *)(lVar3 + 0xc + uVar5 * 8) * extraout_XMM0_Da +
                            (fVar1 - extraout_XMM0_Da) * *(float *)(lVar3 + 4 + uVar5 * 8));
      uVar2 = *(ulonglong *)(param_1 + 0xe8);
      uVar5 = (ulonglong)uVar4;
      if (uVar5 < uVar2) {
        if (uVar5 + 1 < uVar2) {
          fVar1 = *(float *)(*(longlong *)(param_1 + 0xe0) + uVar5 * 4);
          return extraout_XMM0_Da_00 *
                 (*(float *)(*(longlong *)(param_1 + 0xe0) + 4 + uVar5 * 4) - fVar1) + fVar1;
        }
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar5 + 1,uVar2,&UNK_143021f30);
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar5,uVar2,&UNK_143021f30);
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2();
}

