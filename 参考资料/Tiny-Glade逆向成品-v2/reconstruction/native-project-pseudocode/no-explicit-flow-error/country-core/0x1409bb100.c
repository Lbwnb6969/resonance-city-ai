// VA 0x1409bb100, PDB extent 129 bytes
// country_core::systems::ui::signifiers::SignifierEntityBuilder::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/signifiers/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::ui::signifiers::SignifierEntityBuilder::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/signifiers/mod.rs
   Extent: 129 */

void pdb_1409bb100(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined2 *)(param_1 + 0xd) = 0x100;
  *(undefined8 *)((longlong)param_1 + 0x6c) = _DAT_14302a810;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  *(undefined1 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  uVar1 = _UNK_142e4e658;
  param_1[6] = _DAT_142e4e650;
  param_1[7] = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x85) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xb) = 2;
  return;
}

