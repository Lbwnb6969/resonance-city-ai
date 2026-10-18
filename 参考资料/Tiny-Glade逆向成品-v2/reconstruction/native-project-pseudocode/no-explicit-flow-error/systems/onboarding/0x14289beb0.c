// VA 0x14289beb0, PDB extent 379 bytes
// system_onboarding::hint_content::camera_pan_hint
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_content.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_onboarding::hint_content::camera_pan_hint
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_content.rs
   Extent: 379 */

undefined8 * pdb_14289beb0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ushort uStack_70;
  ushort uStack_6e;
  int iStack_6c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar3 = pdb_140a44d60(0);
  uStack_74 = CONCAT22(uStack_74._2_2_,uVar3);
  uStack_78 = 0xca;
  if (*(longlong *)(param_2 + 0x10) == 0) {
    lVar5 = *(longlong *)(param_2 + 0x28);
    uStack_48 = 0;
    uVar4 = 0;
    if (*(longlong *)(param_2 + 0x40) == 0) goto LAB_14289bef1;
LAB_14289bfaf:
    uStack_40 = *(undefined8 *)(param_2 + 0x38);
    if (lVar5 != 0) goto LAB_14289bfbc;
LAB_14289befa:
    uStack_38 = 0;
    uStack_30 = 0;
    if (*(longlong *)(param_2 + 0x58) != 0) {
LAB_14289bf03:
      uStack_30 = *(undefined8 *)(param_2 + 0x50);
    }
  }
  else {
    uStack_48 = *(undefined8 *)(param_2 + 8);
    lVar5 = *(longlong *)(param_2 + 0x28);
    uVar4 = uStack_48;
    if (*(longlong *)(param_2 + 0x40) != 0) goto LAB_14289bfaf;
LAB_14289bef1:
    uStack_40 = 0;
    uStack_48 = uVar4;
    if (lVar5 == 0) goto LAB_14289befa;
LAB_14289bfbc:
    uStack_38 = *(undefined8 *)(param_2 + 0x20);
    if (*(longlong *)(param_2 + 0x58) != 0) goto LAB_14289bf03;
    uStack_30 = 0;
  }
  pdb_1420c07c0(param_1,&uStack_78,&uStack_48);
  uStack_48 = *param_1;
  uStack_40 = param_1[1];
  uStack_38 = param_1[2];
  uStack_30 = param_1[3];
  uStack_28 = *(undefined4 *)(param_1 + 4);
  uStack_24 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_20 = *(undefined4 *)(param_1 + 5);
  uStack_1c = *(undefined4 *)((longlong)param_1 + 0x2c);
  uStack_78 = 0xc5;
  if (*(longlong *)(param_2 + 0xe8) == 0) goto LAB_14289c008;
  piVar2 = *(int **)(param_2 + 0xe0);
  iVar1 = *piVar2;
  if (iVar1 == 0xc4) goto LAB_14289c008;
  uStack_70 = *(ushort *)(piVar2 + 1);
  if (iVar1 == 0xc3) {
    if ((ushort)(uStack_70 - 1) < 2) {
      uStack_74._0_2_ = 1;
    }
    else {
      if (2 < uStack_70) goto LAB_14289bff0;
      uStack_74._0_2_ = 0;
    }
    uStack_74 = CONCAT22(uStack_70,(undefined2)uStack_74);
    uStack_78 = 199;
    uStack_70 = *(ushort *)((longlong)piVar2 + 6);
  }
  else {
LAB_14289bff0:
    uStack_78 = 200;
    uStack_74 = iVar1;
    uStack_6e = *(ushort *)((longlong)piVar2 + 6);
    iStack_6c = piVar2[2];
  }
LAB_14289c008:
  pdb_1420c0330(param_1,&uStack_48,&uStack_78);
  return param_1;
}

