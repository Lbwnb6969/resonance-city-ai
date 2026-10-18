// VA 0x1402f3430, PDB extent 302 bytes
// tiny_glade::app_config::CliArgs::to_input_recording_opts
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/app_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::app_config::CliArgs::to_input_recording_opts
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/app_config.rs
   Extent: 302 */

undefined8 * pdb_1402f3430(undefined8 *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  ulonglong arg0;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 uVar6;
  
  if (SBORROW8(0,*(longlong *)(param_2 + 0x80))) {
    uVar4 = 0;
    if (SBORROW8(0,*(longlong *)(param_2 + 0xa0))) goto LAB_1402f3547;
    arg0 = *(ulonglong *)(param_2 + 0xb0);
    if ((longlong)arg0 < 0) goto LAB_1402f34c2;
    uVar4 = 2;
    lVar5 = 0xb8;
    if (arg0 == 0) {
      pbVar3 = (byte *)0x1;
    }
    else {
      uVar1 = *(undefined8 *)(param_2 + 0xa8);
      pdb_14007ee60();
      pbVar3 = pub_1406abab0(arg0,1);
      puVar2 = (undefined8 *)0x1;
      if (pbVar3 == (byte *)0x0) goto LAB_1402f34c5;
      pub_142e32760(pbVar3,uVar1,arg0);
    }
  }
  else {
    arg0 = *(ulonglong *)(param_2 + 0x90);
    uVar6 = arg0 == 0;
    if (-1 < (longlong)arg0) goto LAB_1402f34d0;
LAB_1402f34c2:
    puVar2 = (undefined8 *)0x0;
LAB_1402f34c5:
    do {
      param_1 = puVar2;
      uVar6 = 1;
      param_2 = arg0;
      pdb_142dc7e2a();
LAB_1402f34d0:
      lVar5 = 0x98;
      if ((bool)uVar6) {
        pbVar3 = (byte *)0x1;
        uVar4 = 1;
        goto LAB_1402f3533;
      }
      uVar4 = *(undefined8 *)(param_2 + 0x88);
      pdb_14007ee60();
      pbVar3 = pub_1406abab0(arg0,1);
      puVar2 = (undefined8 *)0x1;
    } while (pbVar3 == (byte *)0x0);
    pub_142e32760(pbVar3,uVar4,arg0);
    uVar4 = 1;
  }
LAB_1402f3533:
  uVar6 = *(undefined1 *)(param_2 + lVar5);
  param_1[1] = arg0;
  param_1[2] = pbVar3;
  param_1[3] = arg0;
  *(undefined1 *)(param_1 + 4) = uVar6;
LAB_1402f3547:
  *param_1 = uVar4;
  return param_1;
}

