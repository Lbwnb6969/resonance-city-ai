// VA 0x140b578c0, PDB extent 177 bytes
// country_core::systems::history::replay_water::replay_water::closure$2
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/replay_water.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::history::replay_water::replay_water::closure$2
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/replay_water.rs
   Extent: 177 */

void pdb_140b578c0(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  plVar2 = (longlong *)*param_1;
  *(undefined4 *)plVar2[2] = *(undefined4 *)((longlong)plVar2 + 0x1c);
  lVar3 = *plVar2;
  lVar4 = *(longlong *)(lVar3 + 0x30);
  uVar5 = *(undefined8 *)(lVar3 + 0x40);
  if (lVar4 == *(longlong *)(lVar3 + 0x20)) {
    pdb_142d7e6e0(lVar3 + 0x20);
  }
  lVar6 = *(longlong *)(lVar3 + 0x28);
  lVar10 = lVar4 * 0x20;
  *(undefined8 *)(lVar6 + lVar10) = uVar5;
  *(undefined4 *)(lVar6 + 0x18 + lVar10) = param_2[4];
  uVar7 = param_2[1];
  uVar8 = param_2[2];
  uVar9 = param_2[3];
  puVar1 = (undefined4 *)(lVar6 + 8 + lVar10);
  *puVar1 = *param_2;
  puVar1[1] = uVar7;
  puVar1[2] = uVar8;
  puVar1[3] = uVar9;
  *(longlong *)(lVar3 + 0x30) = lVar4 + 1;
  *(longlong *)(lVar3 + 0x40) = *(longlong *)(lVar3 + 0x40) + 1;
  plVar2 = (longlong *)param_1[1];
  *(undefined4 *)plVar2[2] = *(undefined4 *)((longlong)plVar2 + 0x1c);
  lVar3 = *plVar2;
  lVar4 = *(longlong *)(lVar3 + 0x30);
  uVar5 = *(undefined8 *)(lVar3 + 0x40);
  if (lVar4 == *(longlong *)(lVar3 + 0x20)) {
    pdb_142d7e8a0(lVar3 + 0x20);
  }
  *(undefined8 *)(*(longlong *)(lVar3 + 0x28) + lVar4 * 8) = uVar5;
  *(longlong *)(lVar3 + 0x30) = lVar4 + 1;
  *(longlong *)(lVar3 + 0x40) = *(longlong *)(lVar3 + 0x40) + 1;
  LOCK();
  **(longlong **)param_1[2] = **(longlong **)param_1[2] + 1;
  UNLOCK();
  return;
}

