// VA 0x140acd130, PDB extent 272 bytes
// country_core::systems::mod_editor::EditingMod::ask_to_delete
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod_editor.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::mod_editor::EditingMod::ask_to_delete
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod_editor.rs
   Extent: 272 */

void pdb_140acd130(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (*(longlong *)(param_1 + 0x100) == -0x7ffffffffffffffa) {
    *(undefined8 *)(param_1 + 0x100) = 0x8000000000000000;
    uVar2 = param_2[1];
    *(undefined8 *)(param_1 + 0x108) = *param_2;
    *(undefined8 *)(param_1 + 0x110) = uVar2;
    *(undefined8 *)(param_1 + 0x118) = param_2[2];
    return;
  }
  uVar2 = param_2[2];
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar8 = *(ulonglong *)(param_1 + 0x78);
  uVar6 = *(ulonglong *)(param_1 + 0x90);
  if (uVar6 == uVar8) {
    pdb_140929340(param_1 + 0x78);
    uVar8 = *(ulonglong *)(param_1 + 0x78);
    uVar6 = *(ulonglong *)(param_1 + 0x90);
  }
  *(ulonglong *)(param_1 + 0x90) = uVar6 + 1;
  uVar6 = uVar6 + *(longlong *)(param_1 + 0x88);
  uVar9 = 0;
  if (uVar8 <= uVar6) {
    uVar9 = uVar8;
  }
  lVar3 = *(longlong *)(param_1 + 0x80);
  lVar7 = (uVar6 - uVar9) * 0x40;
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar7);
  *puVar1 = uStack_28;
  puVar1[1] = uStack_20;
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar7);
  *puVar1 = uStack_38;
  puVar1[1] = uStack_30;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar7);
  *puVar1 = uVar5;
  puVar1[1] = uVar2;
  *(undefined8 *)(lVar3 + lVar7) = 0x8000000000000000;
  ((undefined8 *)(lVar3 + lVar7))[1] = uVar4;
  return;
}

