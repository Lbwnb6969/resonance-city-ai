// VA 0x1417cc050, PDB extent 326 bytes
// country_core::resources::stairs::stairs_state::StairsState::iter_edges_and_stubs<country_core::resources::stairs::stairs_state::impl$5::collect_edges::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::stairs::stairs_state::StairsState::iter_edges_and_stubs<country_core::resources::stairs::stairs_state::impl$5::collect_edges::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
   Extent: 326 */

void pdb_1417cc050(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  uint *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uStack_5c;
  longlong lStack_58;
  longlong lStack_50;
  longlong lStack_48;
  
  uVar2 = *(ulonglong *)(param_1 + 0x10);
  if (uVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 8);
    lStack_48 = lVar3 + uVar2 * 0x28;
    lStack_50 = param_1 + 0x38;
    lVar8 = lVar3;
    lStack_58 = param_1;
    do {
      uVar1 = *(uint *)(lVar8 + 0x20);
      uStack_5c = uVar1;
      if (uVar2 == 1) {
        if (uVar1 != *(uint *)(lVar3 + 0x20)) goto LAB_1417cc0a0;
        uVar6 = 0;
LAB_1417cc10b:
        lVar4 = *(longlong *)(lVar3 + 0x10 + uVar6 * 0x28);
        if (lVar4 == 0) goto LAB_1417cc0a0;
        puVar5 = *(uint **)(lVar3 + 8 + uVar6 * 0x28);
        if (uVar1 <= *puVar5) {
          pdb_1403afce0(param_2);
        }
        if (lVar4 != 1) {
          lVar9 = 8;
          do {
            if (uVar1 <= *(uint *)((longlong)puVar5 + lVar9)) {
              pdb_1403afce0(param_2);
            }
            lVar9 = lVar9 + 8;
          } while (lVar4 << 3 != lVar9);
        }
      }
      else {
        uVar6 = pdb_1400aede0(lStack_50,&uStack_5c);
        uVar7 = pdb_1417c7820(lStack_58,uVar6,&uStack_5c);
        if ((uVar7 & 1) != 0) {
          if (uVar2 <= uVar6) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar6,uVar2,&UNK_143022aa0);
          }
          goto LAB_1417cc10b;
        }
LAB_1417cc0a0:
        pdb_1403afce0(param_2,uVar1,uVar1);
      }
      lVar8 = lVar8 + 0x28;
    } while (lVar8 != lStack_48);
  }
  return;
}

