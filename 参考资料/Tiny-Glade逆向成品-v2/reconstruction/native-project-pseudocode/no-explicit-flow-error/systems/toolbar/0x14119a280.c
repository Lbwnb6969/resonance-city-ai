// VA 0x14119a280, PDB extent 302 bytes
// toolbar::menu::mods::ui::closure$4
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/mods.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::menu::mods::ui::closure$4
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/mods.rs
   Extent: 302 */

void pdb_14119a280(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (**(char **)*param_1 == '\0') {
    pdb_142328200(param_2,*(undefined8 *)(param_1[1] + 8),*(undefined8 *)(param_1[1] + 0x10),
                  *(undefined8 *)(param_1[2] + 8),*(undefined8 *)(param_1[2] + 0x10),
                  *(undefined8 *)param_1[3],*(undefined8 *)param_1[4]);
    return;
  }
  if (**(char **)*param_1 == '\x01') {
    if (*(longlong *)param_1[3] != 0) {
      pdb_142329b00(param_2,*(longlong *)param_1[3],*(undefined8 *)param_1[10],
                    *(undefined8 *)(*(longlong *)param_1[5] + 8),
                    *(undefined8 *)(*(longlong *)param_1[5] + 0x10),
                    *(undefined8 *)(*(longlong *)param_1[0xb] + 8),
                    *(undefined8 *)(*(longlong *)param_1[0xb] + 0x10),param_1[0xc],param_1[7]);
    }
    return;
  }
  uVar1 = *(undefined8 *)param_1[3];
  uVar2 = *(undefined8 *)(*(longlong *)param_1[5] + 8);
  uVar3 = *(undefined8 *)(*(longlong *)param_1[5] + 0x10);
  uVar7 = *(undefined8 *)(*(longlong *)param_1[6] + 8);
  uVar8 = *(undefined8 *)(*(longlong *)param_1[6] + 0x10);
  uVar4 = param_1[7];
  puVar5 = (undefined8 *)param_1[8];
  *(undefined4 *)puVar5[2] = *(undefined4 *)((longlong)puVar5 + 0x1c);
  uVar6 = *puVar5;
  puVar5 = (undefined8 *)param_1[9];
  *(undefined4 *)puVar5[2] = *(undefined4 *)((longlong)puVar5 + 0x1c);
  pdb_14232a330(param_2,uVar1,uVar2,uVar3,uVar7,uVar8,uVar4,uVar6,*puVar5);
  return;
}

