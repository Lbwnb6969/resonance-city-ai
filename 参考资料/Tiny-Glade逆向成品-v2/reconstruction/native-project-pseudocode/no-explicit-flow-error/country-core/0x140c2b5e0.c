// VA 0x140c2b5e0, PDB extent 102 bytes
// country_core::resources::walls::wall_holes::InProgressHoleStorage::add
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_holes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::wall_holes::InProgressHoleStorage::add
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_holes.rs
   Extent: 102 */

void pdb_140c2b5e0(longlong *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 uStack_28;
  
  uStack_38 = *(undefined4 *)param_2;
  uStack_34 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_30 = *(undefined4 *)(param_2 + 1);
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_28 = param_3;
  uVar5 = pdb_140bbb520(&uStack_38);
  param_1[7] = param_1[7] + uVar5;
  param_1[8] = param_1[8] ^ uVar5;
  lVar2 = param_1[2];
  if (lVar2 == *param_1) {
    pdb_142d8d5c0(param_1);
  }
  lVar3 = param_1[1];
  uVar4 = param_2[1];
  puVar1 = (undefined8 *)(lVar3 + lVar2 * 0x14);
  *puVar1 = *param_2;
  puVar1[1] = uVar4;
  *(undefined1 *)(lVar3 + 0x10 + lVar2 * 0x14) = param_3;
  param_1[2] = lVar2 + 1;
  return;
}

