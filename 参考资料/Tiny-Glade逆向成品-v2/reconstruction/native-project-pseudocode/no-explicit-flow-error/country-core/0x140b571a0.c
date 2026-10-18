// VA 0x140b571a0, PDB extent 329 bytes
// country_core::systems::wall::wall_state::wall_spatial_hash::WallSpatialHash::query_with_segment
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/wall_spatial_hash.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::wall::wall_state::wall_spatial_hash::WallSpatialHash::query_with_segment
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/wall_spatial_hash.rs
   Extent: 329 */

void pdb_140b571a0(undefined8 param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined4 in_stack_00000028;
  longlong in_stack_00000030;
  undefined4 uVar6;
  longlong lVar7;
  undefined1 uStack_19;
  undefined1 *puStack_18;
  
  uVar6 = 0;
  lVar7 = in_stack_00000030;
  pdb_140b3a990();
  uVar1 = *(ulonglong *)(in_stack_00000030 + 0x10);
  puStack_18 = &uStack_19;
  if (1 < uVar1) {
    if (uVar1 < 0x15) {
      pdb_14151a160(*(undefined8 *)(in_stack_00000030 + 8),uVar1,1,&puStack_18,in_stack_00000028,
                    uVar6,lVar7,param_1);
      uVar1 = *(ulonglong *)(in_stack_00000030 + 0x10);
    }
    else {
      pdb_140a91990(*(undefined8 *)(in_stack_00000030 + 8),uVar1,&puStack_18);
      uVar1 = *(ulonglong *)(in_stack_00000030 + 0x10);
    }
    if (1 < uVar1) {
      lVar7 = *(longlong *)(in_stack_00000030 + 8);
      lVar5 = 0;
      do {
        if (*(int *)(*(longlong *)(lVar7 + 8 + lVar5 * 8) + 0x30) ==
            *(int *)(*(longlong *)(lVar7 + lVar5 * 8) + 0x30)) {
          uVar4 = lVar5 + 2;
          lVar3 = lVar5 + 1;
          if (uVar4 < uVar1) {
            if (((int)uVar1 - (int)lVar5 & 1U) != 0) {
              lVar2 = *(longlong *)(lVar7 + 0x10 + lVar5 * 8);
              if (*(int *)(lVar2 + 0x30) != *(int *)(*(longlong *)(lVar7 + lVar5 * 8) + 0x30)) {
                *(longlong *)(lVar7 + 8 + lVar5 * 8) = lVar2;
                lVar3 = lVar5 + 2;
              }
              uVar4 = lVar5 + 3;
            }
            if (uVar1 - 3 != lVar5) {
              do {
                lVar5 = *(longlong *)(lVar7 + uVar4 * 8);
                if (*(int *)(lVar5 + 0x30) != *(int *)(*(longlong *)(lVar7 + -8 + lVar3 * 8) + 0x30)
                   ) {
                  *(longlong *)(lVar7 + lVar3 * 8) = lVar5;
                  lVar3 = lVar3 + 1;
                }
                lVar5 = *(longlong *)(lVar7 + 8 + uVar4 * 8);
                if (*(int *)(lVar5 + 0x30) != *(int *)(*(longlong *)(lVar7 + -8 + lVar3 * 8) + 0x30)
                   ) {
                  *(longlong *)(lVar7 + lVar3 * 8) = lVar5;
                  lVar3 = lVar3 + 1;
                }
                uVar4 = uVar4 + 2;
              } while (uVar1 != uVar4);
            }
          }
          *(longlong *)(in_stack_00000030 + 0x10) = lVar3;
          return;
        }
        lVar5 = lVar5 + 1;
      } while (uVar1 - 1 != lVar5);
    }
  }
  return;
}

