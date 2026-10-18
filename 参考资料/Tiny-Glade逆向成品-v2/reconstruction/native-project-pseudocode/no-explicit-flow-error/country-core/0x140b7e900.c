// VA 0x140b7e900, PDB extent 151 bytes
// country_core::systems::save::load_completion_checker::check_load_completion
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/load_completion_checker.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::save::load_completion_checker::check_load_completion
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/load_completion_checker.rs
   Extent: 151 */

void pdb_140b7e900(undefined8 *param_1,undefined8 *param_2,char *param_3,longlong *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  bool bVar8;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  lVar1 = param_2[1];
  uVar3 = *(ulonglong *)*param_2;
  uVar6 = 0;
  uVar4 = uVar3 - *(ulonglong *)(lVar1 + 0x18);
  if (uVar3 < *(ulonglong *)(lVar1 + 0x18)) {
    uVar4 = uVar6;
  }
  uVar2 = uVar3 - *(ulonglong *)(lVar1 + 0x38);
  if (uVar3 < *(ulonglong *)(lVar1 + 0x38)) {
    uVar2 = uVar6;
  }
  bVar7 = *(ulonglong *)(lVar1 + 0x30) < uVar2;
  uVar2 = *(ulonglong *)(lVar1 + 0x30) - uVar2;
  uVar3 = uVar2;
  if (bVar7) {
    uVar3 = uVar6;
  }
  bVar8 = *(ulonglong *)(lVar1 + 0x10) < uVar4;
  uVar4 = *(ulonglong *)(lVar1 + 0x10) - uVar4;
  uVar5 = uVar4;
  if (bVar8) {
    uVar5 = uVar6;
  }
  uVar3 = uVar5 + uVar3;
  if (!bVar8 && uVar4 != 0 || !bVar7 && uVar2 != 0) {
    uVar3 = uVar6;
  }
  *(ulonglong *)*param_2 = *(longlong *)(lVar1 + 0x40) - uVar3;
  if (!bVar8 && uVar4 != 0 || !bVar7 && uVar2 != 0) {
    *param_3 = '\x01';
  }
  else if (*param_3 != '\x01') {
    return;
  }
  if (1 < (byte)(*(char *)*param_1 - 9U)) {
    lVar1 = *param_4;
    uStack_28 = *(undefined4 *)(lVar1 + 0xa0);
    uStack_24 = *(undefined4 *)(lVar1 + 0xa4);
    uStack_20 = *(undefined4 *)(lVar1 + 0xa8);
    uStack_1c = *(undefined4 *)(lVar1 + 0xac);
    pdb_140b7f050(&uStack_28);
  }
  return;
}

