// VA 0x14083ce30, PDB extent 862 bytes
// system_wall_constructor::construct_elevation_supports::overhang_subscribe_to_tabloids
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_elevation_supports/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_wall_constructor::construct_elevation_supports::overhang_subscribe_to_tabloids
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_elevation_supports/mod.rs
   Extent: 862 */

void pdb_14083ce30(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x1c);
  plVar3 = (longlong *)*param_1;
  puVar4 = (undefined4 *)param_1[2];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar8 = *param_2;
  puVar5 = (undefined4 *)param_2[2];
  *puVar4 = uVar1;
  *puVar5 = uVar2;
  uVar7 = pdb_1409ef480(uVar8,0);
  lVar6 = plVar3[2];
  if (lVar6 == *plVar3) {
    pdb_142d7e8a0(plVar3);
  }
  *(undefined8 *)(plVar3[1] + lVar6 * 8) = uVar7;
  plVar3[2] = lVar6 + 1;
  *puVar4 = uVar1;
  *puVar5 = uVar2;
  uVar7 = pdb_1409ef480(uVar8,1);
  lVar6 = plVar3[2];
  if (lVar6 == *plVar3) {
    pdb_142d7e8a0(plVar3);
  }
  *(undefined8 *)(plVar3[1] + lVar6 * 8) = uVar7;
  plVar3[2] = lVar6 + 1;
  *puVar4 = uVar1;
  *puVar5 = uVar2;
  uVar7 = pdb_1409ef480(uVar8,4);
  lVar6 = plVar3[2];
  if (lVar6 == *plVar3) {
    pdb_142d7e8a0(plVar3);
  }
  *(undefined8 *)(plVar3[1] + lVar6 * 8) = uVar7;
  plVar3[2] = lVar6 + 1;
  *puVar4 = uVar1;
  *puVar5 = uVar2;
  uVar7 = pdb_1409ef480(uVar8,5);
  lVar6 = plVar3[2];
  if (lVar6 == *plVar3) {
    pdb_142d7e8a0(plVar3);
  }
  *(undefined8 *)(plVar3[1] + lVar6 * 8) = uVar7;
  plVar3[2] = lVar6 + 1;
  *puVar4 = uVar1;
  *puVar5 = uVar2;
  uVar7 = pdb_1409ef480(uVar8,6);
  lVar6 = plVar3[2];
  if (lVar6 == *plVar3) {
    pdb_142d7e8a0(plVar3);
  }
  *(undefined8 *)(plVar3[1] + lVar6 * 8) = uVar7;
  plVar3[2] = lVar6 + 1;
  *puVar4 = uVar1;
  *puVar5 = uVar2;
  uVar7 = pdb_1409ef480(uVar8,7);
  lVar6 = plVar3[2];
  if (lVar6 == *plVar3) {
    pdb_142d7e8a0(plVar3);
  }
  *(undefined8 *)(plVar3[1] + lVar6 * 8) = uVar7;
  plVar3[2] = lVar6 + 1;
  *puVar4 = uVar1;
  *puVar5 = uVar2;
  uVar7 = pdb_1409ef480(uVar8,2);
  lVar6 = plVar3[2];
  if (lVar6 == *plVar3) {
    pdb_142d7e8a0(plVar3);
  }
  *(undefined8 *)(plVar3[1] + lVar6 * 8) = uVar7;
  plVar3[2] = lVar6 + 1;
  *puVar4 = uVar1;
  *puVar5 = uVar2;
  uVar7 = pdb_1409ef480(uVar8,3);
  lVar6 = plVar3[2];
  if (lVar6 == *plVar3) {
    pdb_142d7e8a0(plVar3);
  }
  *(undefined8 *)(plVar3[1] + lVar6 * 8) = uVar7;
  plVar3[2] = lVar6 + 1;
  *puVar4 = uVar1;
  *puVar5 = uVar2;
  uVar8 = pdb_1409ef480(uVar8,0xc);
  lVar6 = plVar3[2];
  if (lVar6 == *plVar3) {
    pdb_142d7e8a0(plVar3);
  }
  *(undefined8 *)(plVar3[1] + lVar6 * 8) = uVar8;
  plVar3[2] = lVar6 + 1;
  *puVar4 = uVar1;
  *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
  uVar8 = pdb_1409c5d10(*param_3 + 0x18);
  lVar6 = plVar3[2];
  if (lVar6 == *plVar3) {
    pdb_142d7e8a0(plVar3);
  }
  *(undefined8 *)(plVar3[1] + lVar6 * 8) = uVar8;
  plVar3[2] = lVar6 + 1;
  return;
}

