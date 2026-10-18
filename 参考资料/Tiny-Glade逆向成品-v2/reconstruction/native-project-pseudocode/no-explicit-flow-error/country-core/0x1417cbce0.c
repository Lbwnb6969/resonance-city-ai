// VA 0x1417cbce0, PDB extent 870 bytes
// country_core::resources::stairs::stairs_state::StairsState::iter_edges_and_stubs<country_core::resources::stairs::stairs_state::impl$5::clear_backup::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::stairs::stairs_state::StairsState::iter_edges_and_stubs<country_core::resources::stairs::stairs_state::impl$5::clear_backup::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
   Extent: 870 */

void pdb_1417cbce0(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uStack_b0;
  uint uStack_ac;
  longlong lStack_a8;
  ulonglong uStack_a0;
  longlong lStack_98;
  ulonglong uStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_50;
  longlong lStack_48;
  
  uStack_a0 = *(ulonglong *)(param_1 + 0x10);
  if (uStack_a0 != 0) {
    lVar11 = *(longlong *)(param_1 + 8);
    lStack_50 = lVar11 + uStack_a0 * 0x28;
    lStack_58 = param_1 + 0x38;
    lStack_98 = *(longlong *)(param_2 + 8);
    uVar12 = *(ulonglong *)(param_2 + 0x10);
    lStack_78 = param_2 + 0x38;
    lStack_48 = *(longlong *)(param_2 + 0x58);
    lStack_70 = *(longlong *)(param_2 + 0x50);
    lStack_60 = param_2 + 0x48;
    lStack_68 = param_2 + 0x80;
    lStack_a8 = param_2;
    uStack_90 = uVar12;
    lStack_88 = lVar11;
    lStack_80 = param_1;
    do {
      uVar1 = *(uint *)(lVar11 + 0x20);
      uStack_b0 = uVar1;
      if (uStack_a0 == 1) {
        if (uVar1 != *(uint *)(lStack_88 + 0x20)) goto LAB_1417cbfe0;
        uVar8 = 0;
LAB_1417cbe08:
        lVar3 = *(longlong *)(lStack_88 + 0x10 + uVar8 * 0x28);
        if (lVar3 == 0) goto LAB_1417cbfe0;
        puVar4 = *(uint **)(lStack_88 + 8 + uVar8 * 0x28);
        uVar2 = *puVar4;
        if ((uVar1 <= uVar2) && (cVar5 = pdb_140a609b0(lStack_a8,uVar1,uVar2), cVar5 == '\0')) {
          pdb_1403afce0(param_3,uVar1,uVar2);
        }
        if (lVar3 != 1) {
          lVar10 = 8;
          do {
            uVar2 = *(uint *)((longlong)puVar4 + lVar10);
            if (uVar1 <= uVar2) {
              if (uVar1 < uVar2) {
                uStack_ac = uVar2;
                if (lStack_48 == 1) {
                  uStack_b0 = uVar1;
                  if ((uVar1 == *(uint *)(lStack_70 + 8)) && (uVar2 == *(uint *)(lStack_70 + 0xc)))
                  goto LAB_1417cbe7e;
                }
                else {
                  uStack_b0 = uVar1;
                  if (lStack_48 != 0) {
                    uVar6 = pdb_1400af680(lStack_68,&uStack_b0);
                    uVar12 = uStack_90;
                    lVar7 = pdb_1417c7a20(lStack_60,uVar6,&uStack_b0);
                    if (lVar7 == 1) goto LAB_1417cbe7e;
                  }
                }
              }
              else if (uVar12 == 1) {
                uStack_b0 = uVar1;
                if (uVar1 == *(uint *)(lStack_98 + 0x20)) {
                  uVar8 = 0;
LAB_1417cbfb7:
                  if (*(longlong *)(lStack_98 + 0x10 + uVar8 * 0x28) == 0) goto LAB_1417cbe7e;
                }
              }
              else {
                uStack_b0 = uVar1;
                if (uVar12 != 0) {
                  uVar6 = pdb_1400aede0(lStack_78,&uStack_b0);
                  uVar12 = uStack_90;
                  lVar7 = pdb_1417c7820(lStack_a8,uVar6,&uStack_b0);
                  if (lVar7 == 1) {
                    uStack_b0 = uVar1;
                    uVar8 = pdb_1400aede0(lStack_78,&uStack_b0);
                    uVar12 = uStack_90;
                    uVar9 = pdb_1417c7820(lStack_a8,uVar8,&uStack_b0);
                    if ((uVar9 & 1) != 0) {
                      if (uVar12 <= uVar8) {
                    /* WARNING: Subroutine does not return */
                        pdb_142dc81f2(uVar8,uVar12,&UNK_143022aa0);
                      }
                      if (lStack_98 != 0) goto LAB_1417cbfb7;
                    }
                    goto LAB_1417cbe7e;
                  }
                }
              }
              pdb_1403afce0(param_3,uVar1,uVar2);
            }
LAB_1417cbe7e:
            lVar10 = lVar10 + 8;
          } while (lVar3 << 3 != lVar10);
        }
      }
      else {
        uVar8 = pdb_1400aede0(lStack_58,&uStack_b0);
        uVar9 = pdb_1417c7820(lStack_80,uVar8,&uStack_b0);
        if ((uVar9 & 1) != 0) {
          if (uStack_a0 <= uVar8) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar8,uStack_a0,&UNK_143022aa0);
          }
          goto LAB_1417cbe08;
        }
LAB_1417cbfe0:
        cVar5 = pdb_140a609b0(lStack_a8,uVar1,uVar1);
        if (cVar5 == '\0') {
          pdb_1403afce0(param_3,uVar1,uVar1);
        }
      }
      lVar11 = lVar11 + 0x28;
    } while (lVar11 != lStack_50);
  }
  return;
}

