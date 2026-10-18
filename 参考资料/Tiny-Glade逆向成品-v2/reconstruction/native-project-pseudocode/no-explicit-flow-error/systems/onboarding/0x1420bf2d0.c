// VA 0x1420bf2d0, PDB extent 166 bytes
// system_onboarding::hint_state::HintDisplayState::add_popup_candidate
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_onboarding::hint_state::HintDisplayState::add_popup_candidate
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_state.rs
   Extent: 166 */

void pdb_1420bf2d0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  if (lVar2 == *(longlong *)(param_1 + 0x18)) {
    pdb_142d8d780(param_1 + 0x18);
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  lVar11 = lVar2 * 0x50;
  uVar4 = param_2[9];
  puVar1 = (undefined8 *)(lVar3 + 0x40 + lVar11);
  *puVar1 = param_2[8];
  puVar1[1] = uVar4;
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  uVar8 = param_2[4];
  uVar9 = param_2[5];
  uVar10 = param_2[7];
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar11);
  *puVar1 = param_2[6];
  puVar1[1] = uVar10;
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar11);
  *puVar1 = uVar8;
  puVar1[1] = uVar9;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar11);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  *(undefined8 *)(lVar3 + lVar11) = uVar4;
  ((undefined8 *)(lVar3 + lVar11))[1] = uVar5;
  *(longlong *)(param_1 + 0x28) = lVar2 + 1;
  return;
}

