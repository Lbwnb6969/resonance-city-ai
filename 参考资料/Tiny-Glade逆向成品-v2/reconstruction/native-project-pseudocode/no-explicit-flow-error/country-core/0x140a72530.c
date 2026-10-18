// VA 0x140a72530, PDB extent 180 bytes
// country_core::systems::ivy::ivy_pruner::remove_ivy_at_location
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ivy/ivy_pruner.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::ivy::ivy_pruner::remove_ivy_at_location
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ivy/ivy_pruner.rs
   Extent: 180 */

void pdb_140a72530(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,longlong *param_6)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
  lVar1 = *param_6;
  lVar2 = *(longlong *)(lVar1 + 0x30);
  uVar3 = *(undefined8 *)(lVar1 + 0x40);
  if (lVar2 == *(longlong *)(lVar1 + 0x20)) {
    pdb_142d7e7c0(lVar1 + 0x20);
  }
  lVar4 = *(longlong *)(lVar1 + 0x28);
  lVar5 = lVar2 * 0x30;
  *(undefined8 *)(lVar4 + lVar5) = param_4;
  *(undefined8 *)(lVar4 + 8 + lVar5) = param_5;
  *(undefined8 *)(lVar4 + 0x10 + lVar5) = *param_1;
  *(undefined4 *)(lVar4 + 0x18 + lVar5) = *(undefined4 *)(param_1 + 1);
  *(undefined4 *)(lVar4 + 0x1c + lVar5) = param_2;
  *(undefined4 *)(lVar4 + 0x20 + lVar5) = param_3;
  *(undefined4 *)(lVar4 + 0x24 + lVar5) = param_2;
  *(undefined8 *)(lVar4 + 0x28 + lVar5) = uVar3;
  *(longlong *)(lVar1 + 0x30) = lVar2 + 1;
  *(longlong *)(lVar1 + 0x40) = *(longlong *)(lVar1 + 0x40) + 1;
  return;
}

