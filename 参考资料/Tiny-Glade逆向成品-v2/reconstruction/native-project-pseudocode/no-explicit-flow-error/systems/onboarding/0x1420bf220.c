// VA 0x1420bf220, PDB extent 162 bytes
// system_onboarding::hint_state::HintDisplayState::add_always_on
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_onboarding::hint_state::HintDisplayState::add_always_on
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_state.rs
   Extent: 162 */

void pdb_1420bf220(longlong *param_1,undefined1 param_2,undefined8 *param_3)

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
  longlong lVar10;
  undefined7 uStack_27;
  
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  uVar8 = param_3[4];
  uVar9 = param_3[5];
  lVar2 = param_1[2];
  if (lVar2 == *param_1) {
    pdb_142d7f080(param_1);
  }
  lVar3 = param_1[1];
  lVar10 = lVar2 * 0x38;
  *(ulonglong *)(lVar3 + 0x30 + lVar10) = CONCAT71(uStack_27,param_2);
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar10);
  *puVar1 = uVar8;
  puVar1[1] = uVar9;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar10);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  *(undefined8 *)(lVar3 + lVar10) = uVar4;
  ((undefined8 *)(lVar3 + lVar10))[1] = uVar5;
  param_1[2] = lVar2 + 1;
  return;
}

