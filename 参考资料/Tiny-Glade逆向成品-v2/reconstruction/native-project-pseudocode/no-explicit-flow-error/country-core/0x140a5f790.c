// VA 0x140a5f790, PDB extent 398 bytes
// country_core::resources::stairs::stairs_state::StairsState::disconnect_edge
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::stairs::stairs_state::StairsState::disconnect_edge
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
   Extent: 398 */

void pdb_140a5f790(undefined8 *param_1,uint param_2,uint param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  char acStack_4c [12];
  int aiStack_40 [6];
  
  *param_1 = 0;
  puVar1 = param_1 + 5;
  if (param_2 == param_3) {
    acStack_4c[0] = pdb_140a61ea0(puVar1,param_2);
    uVar6 = param_2;
    param_3 = param_2;
  }
  else {
    uStack_5c = param_2;
    uStack_58 = param_3;
    lVar4 = pdb_140936c10(puVar1,&uStack_5c);
    if ((lVar4 != 0) && (lVar2 = *(longlong *)(lVar4 + 0x10), lVar2 != 0)) {
      lVar3 = *(longlong *)(lVar4 + 8);
      lVar8 = lVar2 * 8;
      lVar7 = 0;
      do {
        if (*(uint *)(lVar3 + lVar7 * 8) == param_3) {
          *(undefined8 *)(lVar3 + lVar7 * 8) = *(undefined8 *)(lVar3 + -8 + lVar2 * 8);
          *(longlong *)(lVar4 + 0x10) = lVar2 + -1;
          break;
        }
        lVar7 = lVar7 + 1;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
    }
    lVar4 = pdb_140936c10(puVar1,&uStack_58);
    if ((lVar4 != 0) && (lVar2 = *(longlong *)(lVar4 + 0x10), lVar2 != 0)) {
      lVar3 = *(longlong *)(lVar4 + 8);
      lVar8 = lVar2 * 8;
      lVar7 = 0;
      do {
        if (*(uint *)(lVar3 + lVar7 * 8) == param_2) {
          *(undefined8 *)(lVar3 + lVar7 * 8) = *(undefined8 *)(lVar3 + -8 + lVar2 * 8);
          *(longlong *)(lVar4 + 0x10) = lVar2 + -1;
          break;
        }
        lVar7 = lVar7 + 1;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
    }
    uVar6 = param_3;
    if (param_2 < param_3) {
      uVar6 = param_2;
    }
    if (param_3 < param_2) {
      param_3 = param_2;
    }
    if (param_1[0x10] == 0) {
      return;
    }
    uStack_54 = uVar6;
    uStack_50 = param_3;
    if (param_1[0x10] != 1) {
      uVar5 = pdb_1400af680(param_1 + 0x15,&uStack_54);
      pdb_1417c90a0(aiStack_40,param_1 + 0xe,uVar5,&uStack_54);
      if (aiStack_40[0] != 1) {
        return;
      }
      goto LAB_140a5f907;
    }
    if (uVar6 != *(uint *)(param_1[0xf] + 8)) {
      return;
    }
    if (param_3 != *(uint *)(param_1[0xf] + 0xc)) {
      return;
    }
    pdb_1404020c0(acStack_4c,param_1 + 0xe);
  }
  if (acStack_4c[0] == '\0') {
    return;
  }
LAB_140a5f907:
  pdb_1403afce0(param_1 + 0x29,uVar6,param_3);
  *(undefined1 *)(param_1 + 0x2f) = 0;
  return;
}

