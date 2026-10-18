// VA 0x140ace7b0, PDB extent 240 bytes
// country_core::systems::mod_editor::EditingMod::ask_to_publish
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod_editor.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::mod_editor::EditingMod::ask_to_publish
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod_editor.rs
   Extent: 240 */

void pdb_140ace7b0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (*(longlong *)(param_1 + 0x100) == -0x7ffffffffffffffa) {
    *(undefined8 *)(param_1 + 0x100) = 0x8000000000000003;
    return;
  }
  uVar5 = *(ulonglong *)(param_1 + 0x78);
  uVar3 = *(ulonglong *)(param_1 + 0x90);
  if (uVar3 == uVar5) {
    pdb_140929340(param_1 + 0x78);
    uVar5 = *(ulonglong *)(param_1 + 0x78);
    uVar3 = *(ulonglong *)(param_1 + 0x90);
  }
  *(ulonglong *)(param_1 + 0x90) = uVar3 + 1;
  uVar3 = uVar3 + *(longlong *)(param_1 + 0x88);
  uVar6 = 0;
  if (uVar5 <= uVar3) {
    uVar6 = uVar5;
  }
  lVar2 = *(longlong *)(param_1 + 0x80);
  lVar4 = (uVar3 - uVar6) * 0x40;
  puVar1 = (undefined8 *)(lVar2 + 0x30 + lVar4);
  *puVar1 = uStack_28;
  puVar1[1] = uStack_20;
  puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar4);
  *puVar1 = uStack_38;
  puVar1[1] = uStack_30;
  puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar4);
  *puVar1 = uStack_48;
  puVar1[1] = uStack_40;
  *(undefined8 *)(lVar2 + lVar4) = 0x8000000000000003;
  ((undefined8 *)(lVar2 + lVar4))[1] = uStack_50;
  return;
}

