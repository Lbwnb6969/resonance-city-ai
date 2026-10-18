// VA 0x141b6a9b0, PDB extent 287 bytes
// country_core::systems::mode_manager::check_if_can_switch<country_core::systems::mode_manager::mode_manager::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::mode_manager::check_if_can_switch<country_core::systems::mode_manager::mode_manager::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
   Extent: 287 */

void pdb_141b6a9b0(char param_1,longlong *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  uint *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (param_1 == '\0') {
    puVar4 = (undefined8 *)*param_3;
    plVar5 = (longlong *)param_3[1];
    puVar6 = (uint *)param_3[2];
    plVar7 = (longlong *)param_3[3];
    *(undefined4 *)puVar4[2] = *(undefined4 *)((longlong)puVar4 + 0x1c);
    *(undefined1 *)*puVar4 = 9;
    uVar1 = *puVar6;
    *(undefined4 *)plVar5[2] = *(undefined4 *)((longlong)plVar5 + 0x1c);
    lVar8 = *plVar5;
    lVar9 = *(longlong *)(lVar8 + 0x30);
    uVar2 = *(undefined8 *)(lVar8 + 0x40);
    if (lVar9 == *(longlong *)(lVar8 + 0x20)) {
      pdb_142d7e980(lVar8 + 0x20);
    }
    lVar3 = *(longlong *)(lVar8 + 0x28);
    *(undefined8 *)(lVar3 + lVar9 * 0x10) = uVar2;
    *(uint *)(lVar3 + 8 + lVar9 * 0x10) = uVar1;
    *(longlong *)(lVar8 + 0x30) = lVar9 + 1;
    *(longlong *)(lVar8 + 0x40) = *(longlong *)(lVar8 + 0x40) + 1;
    if ((uVar1 & 0xfe00) != 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_143397a40,0x28,&UNK_143397a68);
    }
    *(undefined4 *)plVar7[2] = *(undefined4 *)((longlong)plVar7 + 0x1c);
    lVar8 = *plVar7;
    lVar9 = *(longlong *)(lVar8 + 0x30);
    uVar2 = *(undefined8 *)(lVar8 + 0x40);
    if (lVar9 == *(longlong *)(lVar8 + 0x20)) {
      pdb_142d7e980(lVar8 + 0x20);
    }
    lVar3 = *(longlong *)(lVar8 + 0x28);
    *(undefined8 *)(lVar3 + lVar9 * 0x10) = uVar2;
    *(char *)(lVar3 + 8 + lVar9 * 0x10) = (char)(uVar1 >> 8);
  }
  else {
    *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
    lVar8 = *param_2;
    lVar9 = *(longlong *)(lVar8 + 0x30);
    uVar2 = *(undefined8 *)(lVar8 + 0x40);
    if (lVar9 == *(longlong *)(lVar8 + 0x20)) {
      pdb_142d7e6e0(lVar8 + 0x20);
    }
    lVar3 = *(longlong *)(lVar8 + 0x28);
    *(undefined4 *)(lVar3 + lVar9 * 0x20) = 4;
    *(undefined8 *)(lVar3 + 0x18 + lVar9 * 0x20) = uVar2;
  }
  *(longlong *)(lVar8 + 0x30) = lVar9 + 1;
  *(longlong *)(lVar8 + 0x40) = *(longlong *)(lVar8 + 0x40) + 1;
  return;
}

