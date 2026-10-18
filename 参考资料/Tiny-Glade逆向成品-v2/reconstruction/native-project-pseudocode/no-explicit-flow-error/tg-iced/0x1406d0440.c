// VA 0x1406d0440, PDB extent 304 bytes
// tg_iced::dialog::MessageDialog::set_title
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-iced/src/dialog.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_iced::dialog::MessageDialog::set_title
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-iced/src/dialog.rs
   Extent: 304 */

ulonglong *
pdb_1406d0440(ulonglong *param_1,ulonglong *param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  
  if (-1 < (longlong)param_4) {
    if (param_4 == 0) {
      pbVar5 = (byte *)0x1;
      uVar1 = *param_2;
    }
    else {
      pdb_14007ee60();
      uVar6 = 1;
      pbVar5 = pub_1406abab0(param_4,1);
      if (pbVar5 == (byte *)0x0) goto LAB_1406d0469;
      pub_142e32760(pbVar5,param_3,param_4);
      uVar1 = *param_2;
    }
    if (uVar1 != 0) {
      pub_1406abac0((byte *)param_2[1],uVar1,1);
    }
    *param_2 = param_4;
    param_2[1] = (ulonglong)pbVar5;
    param_2[2] = param_4;
    uVar1 = param_2[5];
    uVar3 = param_2[6];
    uVar4 = param_2[7];
    param_1[4] = param_2[4];
    param_1[5] = uVar1;
    param_1[6] = uVar3;
    param_1[7] = uVar4;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    return param_1;
  }
  uVar6 = 0;
LAB_1406d0469:
  pdb_142dc7e2a(uVar6,param_4);
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

