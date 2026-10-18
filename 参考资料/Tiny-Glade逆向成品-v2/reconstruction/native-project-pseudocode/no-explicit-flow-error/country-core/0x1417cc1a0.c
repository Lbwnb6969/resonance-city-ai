// VA 0x1417cc1a0, PDB extent 480 bytes
// country_core::resources::stairs::stairs_state::StairsState::iter_edges_and_stubs<country_core::resources::stairs::stairs_state::impl$5::take_snapshot_impl::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::stairs::stairs_state::StairsState::iter_edges_and_stubs<country_core::resources::stairs::stairs_state::impl$5::take_snapshot_impl::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
   Extent: 480 */

void pdb_1417cc1a0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  uint *puVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uStack_5c;
  longlong lStack_58;
  longlong lStack_50;
  longlong lStack_48;
  
  uVar3 = *(ulonglong *)(param_1 + 0x10);
  if (uVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 8);
    lStack_48 = lVar4 + uVar3 * 0x28;
    lStack_50 = param_1 + 0x38;
    lVar11 = lVar4;
    lStack_58 = param_1;
    do {
      uVar1 = *(uint *)(lVar11 + 0x20);
      uStack_5c = uVar1;
      if (uVar3 == 1) {
        if (uVar1 != *(uint *)(lVar4 + 0x20)) goto LAB_1417cc340;
        uVar9 = 0;
LAB_1417cc285:
        lVar5 = *(longlong *)(lVar4 + 0x10 + uVar9 * 0x28);
        if (lVar5 == 0) goto LAB_1417cc340;
        puVar6 = *(uint **)(lVar4 + 8 + uVar9 * 0x28);
        uVar2 = *puVar6;
        if (uVar1 <= uVar2) {
          lVar12 = param_2[2];
          if (lVar12 == *param_2) {
            pdb_142d8d7f0(param_2);
          }
          lVar7 = param_2[1];
          *(uint *)(lVar7 + lVar12 * 8) = uVar1;
          *(uint *)(lVar7 + 4 + lVar12 * 8) = uVar2;
          param_2[2] = lVar12 + 1;
        }
        if (lVar5 != 1) {
          lVar12 = 8;
          do {
            uVar2 = *(uint *)((longlong)puVar6 + lVar12);
            if (uVar1 <= uVar2) {
              lVar7 = param_2[2];
              if (lVar7 == *param_2) {
                pdb_142d8d7f0(param_2);
              }
              lVar8 = param_2[1];
              *(uint *)(lVar8 + lVar7 * 8) = uVar1;
              *(uint *)(lVar8 + 4 + lVar7 * 8) = uVar2;
              param_2[2] = lVar7 + 1;
            }
            lVar12 = lVar12 + 8;
          } while (lVar5 << 3 != lVar12);
        }
      }
      else {
        uVar9 = pdb_1400aede0(lStack_50,&uStack_5c);
        uVar10 = pdb_1417c7820(lStack_58,uVar9,&uStack_5c);
        if ((uVar10 & 1) != 0) {
          if (uVar3 <= uVar9) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar9,uVar3,&UNK_143022aa0);
          }
          goto LAB_1417cc285;
        }
LAB_1417cc340:
        lVar5 = param_2[2];
        if (lVar5 == *param_2) {
          pdb_142d8d7f0(param_2);
        }
        lVar12 = param_2[1];
        *(uint *)(lVar12 + lVar5 * 8) = uVar1;
        *(uint *)(lVar12 + 4 + lVar5 * 8) = uVar1;
        param_2[2] = lVar5 + 1;
      }
      lVar11 = lVar11 + 0x28;
    } while (lVar11 != lStack_48);
  }
  return;
}

