// VA 0x1406cf2c0, PDB extent 304 bytes
// tg_iced::dialog::MessageDialog::set_description
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-iced/src/dialog.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_iced::dialog::MessageDialog::set_description
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-iced/src/dialog.rs
   Extent: 304 */

undefined8 *
pdb_1406cf2c0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong arg1;
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  undefined8 uVar5;
  
  if (-1 < (longlong)param_4) {
    if (param_4 == 0) {
      pbVar4 = (byte *)0x1;
      arg1 = param_2[3];
    }
    else {
      pdb_14007ee60();
      uVar5 = 1;
      pbVar4 = pub_1406abab0(param_4,1);
      if (pbVar4 == (byte *)0x0) goto LAB_1406cf2e9;
      pub_142e32760(pbVar4,param_3,param_4);
      arg1 = param_2[3];
    }
    if (arg1 != 0) {
      pub_1406abac0((byte *)param_2[4],arg1,1);
    }
    param_2[3] = param_4;
    param_2[4] = pbVar4;
    param_2[5] = param_4;
    uVar5 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = uVar3;
    *param_1 = uVar5;
    param_1[1] = uVar2;
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    return param_1;
  }
  uVar5 = 0;
LAB_1406cf2e9:
  pdb_142dc7e2a(uVar5,param_4);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

