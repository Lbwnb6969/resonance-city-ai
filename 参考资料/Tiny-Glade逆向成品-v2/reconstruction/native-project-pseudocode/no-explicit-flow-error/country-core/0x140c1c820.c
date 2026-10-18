// VA 0x140c1c820, PDB extent 130 bytes
// country_core::systems::history::replay_wall::replay_wall::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/replay_wall.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::history::replay_wall::replay_wall::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/replay_wall.rs
   Extent: 130 */

void pdb_140c1c820(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  
  fVar7 = (float)pdb_1419c1ac0(param_1,*(undefined4 *)(param_3 + 1),*(undefined4 *)(param_3 + 2));
  *(float *)((longlong)param_3 + 0xc) = fVar7 + *(float *)((longlong)param_3 + 0xc);
  *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar2 = *param_2;
  lVar3 = *(longlong *)(lVar2 + 0x30);
  uVar4 = *(undefined8 *)(lVar2 + 0x40);
  if (lVar3 == *(longlong *)(lVar2 + 0x20)) {
    pdb_142d7e6e0(lVar2 + 0x20);
  }
  lVar5 = *(longlong *)(lVar2 + 0x28);
  lVar6 = lVar3 * 0x20;
  *(undefined8 *)(lVar5 + lVar6) = uVar4;
  *(undefined8 *)(lVar5 + 0x18 + lVar6) = param_3[2];
  uVar4 = param_3[1];
  puVar1 = (undefined8 *)(lVar5 + 8 + lVar6);
  *puVar1 = *param_3;
  puVar1[1] = uVar4;
  *(longlong *)(lVar2 + 0x30) = lVar3 + 1;
  *(longlong *)(lVar2 + 0x40) = *(longlong *)(lVar2 + 0x40) + 1;
  return;
}

