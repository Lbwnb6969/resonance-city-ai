// VA 0x140b572f0, PDB extent 294 bytes
// country_core::systems::wall::wall_state::wall_spatial_hash::WallSpatialHash::query_with_rectangle2d
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/wall_spatial_hash.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::wall::wall_state::wall_spatial_hash::WallSpatialHash::query_with_rectangle2d
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/wall_spatial_hash.rs
   Extent: 294 */

void pdb_140b572f0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 uStack_19;
  undefined1 *puStack_18;
  
  pdb_140b3b310();
  uVar1 = *(ulonglong *)(param_3 + 0x10);
  puStack_18 = &uStack_19;
  if (1 < uVar1) {
    if (uVar1 < 0x15) {
      pdb_14151a160(*(undefined8 *)(param_3 + 8),uVar1,1);
      uVar1 = *(ulonglong *)(param_3 + 0x10);
    }
    else {
      pdb_140a91990(*(undefined8 *)(param_3 + 8),uVar1,&puStack_18);
      uVar1 = *(ulonglong *)(param_3 + 0x10);
    }
    if (1 < uVar1) {
      lVar2 = *(longlong *)(param_3 + 8);
      lVar6 = 0;
      do {
        if (*(int *)(*(longlong *)(lVar2 + 8 + lVar6 * 8) + 0x30) ==
            *(int *)(*(longlong *)(lVar2 + lVar6 * 8) + 0x30)) {
          uVar5 = lVar6 + 2;
          lVar4 = lVar6 + 1;
          if (uVar5 < uVar1) {
            if (((int)uVar1 - (int)lVar6 & 1U) != 0) {
              lVar3 = *(longlong *)(lVar2 + 0x10 + lVar6 * 8);
              if (*(int *)(lVar3 + 0x30) != *(int *)(*(longlong *)(lVar2 + lVar6 * 8) + 0x30)) {
                *(longlong *)(lVar2 + 8 + lVar6 * 8) = lVar3;
                lVar4 = lVar6 + 2;
              }
              uVar5 = lVar6 + 3;
            }
            if (uVar1 - 3 != lVar6) {
              do {
                lVar6 = *(longlong *)(lVar2 + uVar5 * 8);
                if (*(int *)(lVar6 + 0x30) != *(int *)(*(longlong *)(lVar2 + -8 + lVar4 * 8) + 0x30)
                   ) {
                  *(longlong *)(lVar2 + lVar4 * 8) = lVar6;
                  lVar4 = lVar4 + 1;
                }
                lVar6 = *(longlong *)(lVar2 + 8 + uVar5 * 8);
                if (*(int *)(lVar6 + 0x30) != *(int *)(*(longlong *)(lVar2 + -8 + lVar4 * 8) + 0x30)
                   ) {
                  *(longlong *)(lVar2 + lVar4 * 8) = lVar6;
                  lVar4 = lVar4 + 1;
                }
                uVar5 = uVar5 + 2;
              } while (uVar1 != uVar5);
            }
          }
          *(longlong *)(param_3 + 0x10) = lVar4;
          return;
        }
        lVar6 = lVar6 + 1;
      } while (uVar1 - 1 != lVar6);
    }
  }
  return;
}

