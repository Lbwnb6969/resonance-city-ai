// VA 0x140a6a390, PDB extent 147 bytes
// country_core::resources::walls::window_cuts::InProgressWindowCutStorage::add
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/window_cuts.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::window_cuts::InProgressWindowCutStorage::add
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/window_cuts.rs
   Extent: 147 */

void pdb_140a6a390(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined8 uStack_24;
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  
  uStack_38 = *param_2;
  uStack_24 = param_2[1];
  uStack_28 = *(undefined4 *)(param_2 + 3);
  uStack_1c = *(undefined1 *)((longlong)param_2 + 0x1c);
  uStack_1b = *(undefined1 *)((longlong)param_2 + 0x1d);
  uStack_30 = param_2[2];
  uVar7 = pdb_140bbba80(&uStack_38);
  param_1[6] = param_1[6] + uVar7;
  param_1[7] = param_1[7] ^ uVar7;
  lVar2 = param_1[2];
  if (lVar2 == *param_1) {
    pdb_142d8a7a0(param_1);
  }
  lVar3 = param_1[1];
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[3];
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar2 * 0x20);
  *puVar1 = param_2[2];
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)(lVar3 + lVar2 * 0x20);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  param_1[2] = lVar2 + 1;
  return;
}

