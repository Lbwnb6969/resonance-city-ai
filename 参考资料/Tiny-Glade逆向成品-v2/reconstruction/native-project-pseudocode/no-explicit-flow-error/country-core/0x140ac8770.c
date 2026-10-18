// VA 0x140ac8770, PDB extent 162 bytes
// country_core::systems::egui_input::EguiInputResource::on_cursor_moved
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/egui_input.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::egui_input::EguiInputResource::on_cursor_moved
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/egui_input.rs
   Extent: 162 */

void pdb_140ac8770(longlong param_1,int *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*param_2 == 1) {
    uVar2 = *(undefined8 *)(param_2 + 1);
    *(undefined8 *)(param_1 + 0xb0) = uVar2;
    uStack_44 = (undefined4)uVar2;
    uStack_40 = (undefined4)((ulonglong)uVar2 >> 0x20);
    lVar3 = *(longlong *)(param_1 + 0x30);
    if (lVar3 == *(longlong *)(param_1 + 0x20)) {
      pdb_142d7ede0(param_1 + 0x20);
    }
    lVar4 = *(longlong *)(param_1 + 0x28);
    *(undefined8 *)(lVar4 + 0x20 + lVar3 * 0x28) = uStack_28;
    puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar3 * 0x28);
    *puVar1 = uStack_38;
    puVar1[1] = uStack_30;
    puVar1 = (undefined8 *)(lVar4 + lVar3 * 0x28);
    *puVar1 = CONCAT44(uStack_44,7);
    puVar1[1] = CONCAT44(uStack_3c,uStack_40);
    *(longlong *)(param_1 + 0x30) = lVar3 + 1;
  }
  return;
}

