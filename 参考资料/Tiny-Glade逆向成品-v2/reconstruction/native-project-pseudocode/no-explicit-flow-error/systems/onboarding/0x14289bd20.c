// VA 0x14289bd20, PDB extent 396 bytes
// system_onboarding::hint_content::undo_redo_hint
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_content.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_onboarding::hint_content::undo_redo_hint
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_content.rs
   Extent: 396 */

undefined8 pdb_14289bd20(undefined8 param_1,longlong param_2)

{
  ushort uVar1;
  int *piVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [48];
  undefined4 uStack_88;
  undefined2 uStack_84;
  undefined4 uStack_58;
  int iStack_54;
  ushort uStack_50;
  ushort uStack_4e;
  int iStack_4c;
  undefined1 uStack_22;
  undefined1 uStack_21;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  uStack_84 = pdb_140a44d70(2);
  uStack_88 = 0xca;
  uStack_21 = 1;
  uVar3 = pdb_140a44d70(3);
  iStack_54 = CONCAT22(iStack_54._2_2_,uVar3);
  uStack_58 = 0xca;
  uStack_21 = 0;
  pdb_1420bfcd0(auStack_b8,&uStack_88,&uStack_58);
  if (*(longlong *)(param_2 + 0x238) == 0) {
    uStack_58 = 0xc5;
    uVar4 = 0;
    if (*(longlong *)(param_2 + 0x250) == 0) goto LAB_14289bdf1;
  }
  else {
    piVar2 = *(int **)(param_2 + 0x230);
    iStack_54 = *piVar2;
    uStack_50 = *(ushort *)(piVar2 + 1);
    uVar1 = *(ushort *)((longlong)piVar2 + 6);
    if (iStack_54 == 0xc3 && uStack_50 < 3) {
      iStack_54 = (uint)uStack_50 << 0x10;
      uStack_58 = 199;
      uStack_50 = uVar1;
      if (*(longlong *)(param_2 + 0x250) == 0) {
        uVar4 = 0;
        goto LAB_14289bdf1;
      }
    }
    else {
      iStack_4c = piVar2[2];
      uStack_58 = 200;
      uStack_4e = uVar1;
      if (*(longlong *)(param_2 + 0x250) == 0) {
        uVar4 = 0;
        goto LAB_14289bdf1;
      }
    }
  }
  uVar4 = *(undefined8 *)(param_2 + 0x248);
LAB_14289bdf1:
  uStack_22 = 1;
  pdb_1420bfea0(&uStack_88,&uStack_58,uVar4);
  uStack_22 = 0;
  pdb_1420c0330(param_1,auStack_b8,&uStack_88);
  return param_1;
}

