// VA 0x14092fab0, PDB extent 165 bytes
// country_core::resources::walls::public_wall_state::PublicWallState::derived_foundation_base_y
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/public_wall_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::public_wall_state::PublicWallState::derived_foundation_base_y
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/public_wall_state.rs
   Extent: 165 */

void pdb_14092fab0(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x98);
  if (lVar4 != 0) {
    iVar5 = *(int *)(*(longlong *)(param_1 + 0x90) + 4);
    if (lVar4 != 1) {
      lVar4 = (lVar4 * 0xc - 0xcU >> 2) * -0x5555555555555555;
      piVar3 = (int *)(*(longlong *)(param_1 + 0x90) + 0x10);
      do {
        iVar1 = *piVar3;
        uVar2 = CONCAT44((uint)(iVar1 >> 0x1f) >> 1,(uint)(iVar5 >> 0x1f) >> 1) ^
                CONCAT44(iVar1,iVar5);
        if ((int)uVar2 <= (int)(uVar2 >> 0x20)) {
          iVar1 = iVar5;
        }
        iVar5 = iVar1;
        piVar3 = piVar3 + 3;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  return;
}

