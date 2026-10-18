// VA 0x14072c200, PDB extent 197 bytes
// toolbar::mei::core::MeiContext::on_clipboard_paste
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::core::MeiContext::on_clipboard_paste
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
   Extent: 197 */

void pdb_14072c200(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar2 = param_2[2];
  uVar5 = *param_2;
  uVar6 = param_2[1];
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (lVar3 == *(longlong *)(param_1 + 0x18)) {
    pdb_142d8a810(param_1 + 0x18);
  }
  lVar4 = *(longlong *)(param_1 + 0x20);
  lVar7 = lVar3 * 0x70;
  puVar1 = (undefined8 *)(lVar4 + 0x60 + lVar7);
  *puVar1 = uStack_38;
  puVar1[1] = uStack_30;
  puVar1 = (undefined8 *)(lVar4 + 0x50 + lVar7);
  *puVar1 = uStack_48;
  puVar1[1] = CONCAT44(uStack_3c,0xc5);
  puVar1 = (undefined8 *)(lVar4 + 0x40 + lVar7);
  *puVar1 = uStack_58;
  puVar1[1] = uStack_50;
  puVar1 = (undefined8 *)(lVar4 + 0x30 + lVar7);
  *puVar1 = uStack_68;
  puVar1[1] = uStack_60;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar7);
  *puVar1 = uStack_78;
  puVar1[1] = uStack_70;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar7);
  *puVar1 = uVar2;
  puVar1[1] = uStack_80;
  *(undefined8 *)(lVar4 + lVar7) = uVar5;
  ((undefined8 *)(lVar4 + lVar7))[1] = uVar6;
  *(longlong *)(param_1 + 0x28) = lVar3 + 1;
  return;
}

