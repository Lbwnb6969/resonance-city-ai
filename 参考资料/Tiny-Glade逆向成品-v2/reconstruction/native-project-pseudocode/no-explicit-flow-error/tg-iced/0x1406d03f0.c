// VA 0x1406d03f0, PDB extent 66 bytes
// tg_iced::dialog::MessageDialog::set_level
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-iced/src/dialog.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_iced::dialog::MessageDialog::set_level
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-iced/src/dialog.rs
   Extent: 66 */

void pdb_1406d03f0(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *(undefined1 *)(param_2 + 7) = param_3;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar5;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x39) = *(undefined4 *)((longlong)param_2 + 0x39);
  *(undefined2 *)((longlong)param_1 + 0x3d) = *(undefined2 *)((longlong)param_2 + 0x3d);
  *(undefined1 *)((longlong)param_1 + 0x3f) = *(undefined1 *)((longlong)param_2 + 0x3f);
  return;
}

