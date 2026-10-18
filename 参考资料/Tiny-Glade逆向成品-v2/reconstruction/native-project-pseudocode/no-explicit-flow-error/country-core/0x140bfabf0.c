// VA 0x140bfabf0, PDB extent 214 bytes
// country_core::systems::paths::draw_path::PathRastersResources::as_float_grid
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/paths/draw_path.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::paths::draw_path::PathRastersResources::as_float_grid
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/paths/draw_path.rs
   Extent: 214 */

void pdb_140bfabf0(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar2 = *param_2;
  lVar3 = param_2[4];
  puVar1 = (undefined8 *)(lVar2 + 0x20);
  puVar11 = (undefined8 *)(lVar2 + 0x28);
  if (*(char *)(lVar2 + 0x298) == '\0') {
    puVar11 = (undefined8 *)(lVar2 + 0x10);
    puVar1 = (undefined8 *)(lVar2 + 8);
  }
  uVar4 = *puVar11;
  puVar11 = (undefined8 *)(lVar3 + 0x20);
  puVar12 = (undefined8 *)(lVar3 + 0x28);
  if (*(char *)(lVar3 + 0x298) == '\0') {
    puVar12 = (undefined8 *)(lVar3 + 0x10);
    puVar11 = (undefined8 *)(lVar3 + 8);
  }
  uVar5 = *puVar12;
  uVar6 = *puVar11;
  lVar2 = param_2[8];
  puVar11 = (undefined8 *)(lVar2 + 0x20);
  puVar12 = (undefined8 *)(lVar2 + 0x28);
  if (*(char *)(lVar2 + 0x298) == '\0') {
    puVar12 = (undefined8 *)(lVar2 + 0x10);
    puVar11 = (undefined8 *)(lVar2 + 8);
  }
  uVar7 = *puVar12;
  lVar2 = param_2[0xc];
  puVar12 = (undefined8 *)(lVar2 + 0x20);
  puVar13 = (undefined8 *)(lVar2 + 0x28);
  if (*(char *)(lVar2 + 0x298) == '\0') {
    puVar13 = (undefined8 *)(lVar2 + 0x10);
    puVar12 = (undefined8 *)(lVar2 + 8);
  }
  uVar8 = *puVar11;
  uVar9 = *puVar13;
  uVar10 = *puVar12;
  *param_1 = *puVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar6;
  param_1[3] = uVar5;
  param_1[4] = uVar8;
  param_1[5] = uVar7;
  param_1[6] = uVar10;
  param_1[7] = uVar9;
  return;
}

