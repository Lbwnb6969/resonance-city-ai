// VA 0x1417ecd00, PDB extent 146 bytes
// country_core::systems::history::replay_path::generate_path_replay_cmds::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/replay_path.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::history::replay_path::generate_path_replay_cmds::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/replay_path.rs
   Extent: 146 */

void pdb_1417ecd00(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  lVar2 = param_1[2];
  if (lVar2 == *param_1) {
    pdb_142d7e7c0(param_1);
  }
  lVar3 = param_1[1];
  lVar9 = lVar2 * 0x30;
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  uVar8 = param_2[5];
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar9);
  *puVar1 = param_2[4];
  puVar1[1] = uVar8;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar9);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  *(undefined8 *)(lVar3 + lVar9) = uVar4;
  ((undefined8 *)(lVar3 + lVar9))[1] = uVar5;
  param_1[2] = lVar2 + 1;
  return;
}

