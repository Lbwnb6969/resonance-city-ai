// VA 0x140900dc0, PDB extent 449 bytes
// country_core::systems::ui::resources::ui_state::UiState::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/ui_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::ui::resources::ui_state::UiState::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/ui_state.rs
   Extent: 449 */

undefined8 * pdb_140900dc0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint7 uStack_bf;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  plVar5 = (longlong *)pdb_140f3bda0();
  if ((char)plVar5[2] == '\x01') {
    lVar6 = *plVar5;
    param_2 = plVar5[1];
  }
  else {
    lVar6 = pdb_140f4fd10();
    *plVar5 = lVar6;
    plVar5[1] = param_2;
    *(undefined1 *)(plVar5 + 2) = 1;
  }
  *plVar5 = lVar6 + 1;
  uVar4 = _UNK_14301e5b8;
  uVar3 = _DAT_14301e5b0;
  uVar2 = _UNK_14301e5a8;
  uVar1 = _DAT_14301e5a0;
  lVar8 = param_2;
  plVar5 = (longlong *)pdb_140f3bda0();
  if ((char)plVar5[2] == '\x01') {
    lVar7 = *plVar5;
    lVar8 = plVar5[1];
  }
  else {
    lVar7 = pdb_140f4fd10();
    *plVar5 = lVar7;
    plVar5[1] = lVar8;
    *(undefined1 *)(plVar5 + 2) = 1;
  }
  *plVar5 = lVar7 + 1;
  param_1[0x18] = param_2;
  param_1[0x16] = uVar4;
  param_1[0x17] = lVar6;
  param_1[0x14] = uVar2;
  param_1[0x15] = uVar3;
  param_1[0x12] = 0;
  param_1[0x13] = uVar1;
  *param_1 = 0;
  param_1[1] = 8;
  param_1[2] = 0;
  param_1[3] = (ulonglong)uStack_bf << 8;
  param_1[4] = uStack_b8;
  param_1[5] = uStack_b0;
  param_1[6] = uStack_a8;
  param_1[7] = uStack_a0;
  param_1[8] = uStack_98;
  param_1[9] = uStack_90;
  param_1[10] = uStack_88;
  param_1[0xb] = uStack_80;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0xc] = uVar1;
  param_1[0xd] = uVar2;
  param_1[0xe] = uVar3;
  param_1[0xf] = uVar4;
  param_1[0x10] = lVar7;
  param_1[0x11] = lVar8;
  return param_1;
}

