// VA 0x1428e6360, PDB extent 1502 bytes
// system_clutter::autoclutter::populate_autoclutter_regions::autoclutter_subscribe_to_tabloids
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/autoclutter/populate_autoclutter_regions.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_clutter::autoclutter::populate_autoclutter_regions::autoclutter_subscribe_to_tabloids
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/autoclutter/populate_autoclutter_regions.rs
   Extent: 1502 */

void pdb_1428e6360(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,longlong *param_8)

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
  uVar7 = pdb_1409ef480(uVar8,3);
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
  uVar8 = pdb_1409ef480(uVar8,2);
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
  *puVar4 = uVar1;
  *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
  uVar8 = pdb_1406d0830(*param_4);
  uVar8 = pdb_142b45f80(uVar8);
  lVar6 = plVar3[2];
  if (lVar6 == *plVar3) {
    pdb_142d7e8a0(plVar3);
  }
  *(undefined8 *)(plVar3[1] + lVar6 * 8) = uVar8;
  plVar3[2] = lVar6 + 1;
  *puVar4 = uVar1;
  *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
  uVar8 = pdb_1406d0830(*param_5);
  uVar8 = pdb_142b45f80(uVar8);
  lVar6 = plVar3[2];
  if (lVar6 == *plVar3) {
    pdb_142d7e8a0(plVar3);
  }
  *(undefined8 *)(plVar3[1] + lVar6 * 8) = uVar8;
  plVar3[2] = lVar6 + 1;
  *puVar4 = uVar1;
  *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
  uVar8 = pdb_1406d0830(*param_6);
  uVar8 = pdb_142b45f80(uVar8);
  lVar6 = plVar3[2];
  if (lVar6 == *plVar3) {
    pdb_142d7e8a0(plVar3);
  }
  *(undefined8 *)(plVar3[1] + lVar6 * 8) = uVar8;
  plVar3[2] = lVar6 + 1;
  *puVar4 = uVar1;
  *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
  uVar8 = pdb_140a86e90(*param_7);
  lVar6 = plVar3[2];
  if (lVar6 == *plVar3) {
    pdb_142d7e8a0(plVar3);
  }
  *(undefined8 *)(plVar3[1] + lVar6 * 8) = uVar8;
  plVar3[2] = lVar6 + 1;
  *puVar4 = uVar1;
  *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
  uVar8 = pdb_1409c5d10(*param_8 + 0x18);
  lVar6 = plVar3[2];
  if (lVar6 == *plVar3) {
    pdb_142d7e8a0(plVar3);
  }
  *(undefined8 *)(plVar3[1] + lVar6 * 8) = uVar8;
  plVar3[2] = lVar6 + 1;
  return;
}

