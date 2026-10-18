// VA 0x140b437f0, PDB extent 326 bytes
// country_core::systems::mode_manager::clear_wall_selection_groups
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::mode_manager::clear_wall_selection_groups
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
   Extent: 326 */

void pdb_140b437f0(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  puVar1 = (ulonglong *)*param_1;
  lVar7 = param_1[1];
  uVar2 = *puVar1;
  uVar5 = 0;
  uVar9 = uVar2 - *(ulonglong *)(lVar7 + 0x18);
  if (uVar2 < *(ulonglong *)(lVar7 + 0x18)) {
    uVar9 = uVar5;
  }
  uVar4 = uVar2 - *(ulonglong *)(lVar7 + 0x38);
  if (uVar2 < *(ulonglong *)(lVar7 + 0x38)) {
    uVar4 = uVar5;
  }
  lVar11 = *(longlong *)(lVar7 + 8);
  uVar2 = *(ulonglong *)(lVar7 + 0x30);
  uVar10 = uVar2 - uVar4;
  if (uVar2 < uVar4) {
    uVar10 = uVar5;
  }
  uVar3 = *(ulonglong *)(lVar7 + 0x10);
  uVar12 = uVar3 - uVar9;
  if (uVar3 < uVar9) {
    uVar12 = uVar5;
  }
  lVar6 = *(longlong *)(lVar7 + 0x28);
  uVar5 = *(ulonglong *)(lVar7 + 0x40);
  *puVar1 = (uVar5 - uVar10) - uVar12;
  if (uVar3 >= uVar9 && uVar3 - uVar9 != 0 || uVar2 >= uVar4 && uVar2 - uVar4 != 0) {
    lVar6 = lVar6 + uVar4 * 0x10;
    lVar11 = lVar11 + uVar9 * 0x10;
    if (uVar3 < uVar9) {
      lVar11 = 8;
    }
    lVar7 = 0;
    if (uVar9 < uVar3) {
      lVar7 = lVar11 + -0x10 + uVar12 * 0x10;
    }
    if (uVar2 < uVar4) {
      lVar6 = 8;
    }
    lVar11 = lVar6 + -0x10 + uVar10 * 0x10;
    if (uVar2 <= uVar4) {
      lVar11 = lVar7;
    }
    *puVar1 = uVar5;
    if (*(char *)(lVar11 + 8) == '\0') {
      *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
      lVar7 = *param_2;
      lVar11 = *(longlong *)(lVar7 + 0x10);
      *(undefined8 *)(lVar7 + 0x10) = 0;
      if (lVar11 != 0) {
        puVar8 = (undefined8 *)(*(longlong *)(lVar7 + 8) + 8);
        do {
          if (puVar8[-1] != 0) {
            pub_1406abac0((byte *)*puVar8,puVar8[-1] << 3,8);
          }
          puVar8 = puVar8 + 3;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
    }
    *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
    *(undefined8 *)(*param_3 + 0x10) = 0;
  }
  return;
}

