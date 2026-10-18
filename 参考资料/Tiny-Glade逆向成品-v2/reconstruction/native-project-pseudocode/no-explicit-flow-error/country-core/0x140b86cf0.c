// VA 0x140b86cf0, PDB extent 185 bytes
// country_core::resources::shutdown::initiate_game_shutdown
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/shutdown.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::shutdown::initiate_game_shutdown
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/shutdown.rs
   Extent: 185 */

void pdb_140b86cf0(undefined8 *param_1,longlong param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  puVar1 = (ulonglong *)*param_1;
  lVar2 = param_1[1];
  uVar3 = *puVar1;
  uVar8 = 0;
  uVar9 = uVar3 - *(ulonglong *)(lVar2 + 0x18);
  if (uVar3 < *(ulonglong *)(lVar2 + 0x18)) {
    uVar9 = uVar8;
  }
  uVar7 = uVar3 - *(ulonglong *)(lVar2 + 0x38);
  if (uVar3 < *(ulonglong *)(lVar2 + 0x38)) {
    uVar7 = uVar8;
  }
  uVar3 = *(ulonglong *)(lVar2 + 0x30);
  uVar10 = uVar3 - uVar7;
  if (uVar3 < uVar7) {
    uVar10 = uVar8;
  }
  uVar4 = *(ulonglong *)(lVar2 + 0x10);
  uVar5 = uVar4 - uVar9;
  if (uVar4 < uVar9) {
    uVar5 = uVar8;
  }
  uVar8 = *(ulonglong *)(lVar2 + 0x40);
  *puVar1 = uVar8 - (uVar5 + uVar10);
  if (uVar4 >= uVar9 && uVar4 - uVar9 != 0 || uVar3 >= uVar7 && uVar3 - uVar7 != 0) {
    *puVar1 = uVar8;
    plVar6 = *(longlong **)(param_2 + 8);
    if (plVar6 == (longlong *)0x0) {
      plVar6 = *(longlong **)(param_2 + 0x10);
    }
    lVar2 = plVar6[2];
    if ((ulonglong)(*plVar6 - lVar2) < 8) {
      pdb_142d7f1b0(plVar6,lVar2,8,1,1);
    }
    *(code **)(plVar6[1] + lVar2) = pdb_14160a2b0;
    plVar6[2] = lVar2 + 8;
  }
  return;
}

