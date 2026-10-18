// VA 0x140fb30b0, PDB extent 210 bytes
// crash_reporter_gui::text<ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/crash-reporter-gui/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: crash_reporter_gui::text<ref$<str$> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/crash-reporter-gui/src/lib.rs
   Extent: 210 */

undefined8 * pdb_140fb30b0(undefined8 *param_1,ulonglong param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  byte *pbVar2;
  undefined1 uVar3;
  
  uVar3 = param_3 == 0;
  if (-1 < (longlong)param_3) goto LAB_140fb30d1;
  uVar3 = true;
  puVar1 = (undefined8 *)0x0;
  while( true ) {
    param_1 = puVar1;
    param_2 = param_3;
    pdb_142dc7e2a(param_1,param_3);
LAB_140fb30d1:
    if ((bool)uVar3) break;
    pdb_14007ee60();
    pbVar2 = pub_1406abab0(param_3,1);
    uVar3 = pbVar2 == (byte *)0x0;
    puVar1 = (undefined8 *)0x1;
    if (!(bool)uVar3) {
      pub_142e32760(pbVar2,param_2,param_3);
LAB_140fb3111:
      *param_1 = 0;
      param_1[1] = &UNK_143267ca5;
      param_1[2] = 9;
      *(undefined2 *)(param_1 + 3) = 0x300;
      *(undefined1 *)((longlong)param_1 + 0x1a) = 4;
      param_1[4] = param_3;
      param_1[5] = pbVar2;
      param_1[6] = param_3;
      *(undefined4 *)(param_1 + 7) = 0;
      param_1[8] = 0x3fa6666600000000;
      *(undefined2 *)(param_1 + 9) = 2;
      *(undefined2 *)(param_1 + 10) = 2;
      *(undefined4 *)(param_1 + 0xb) = 0;
      *(undefined2 *)((longlong)param_1 + 0x6c) = 1;
      *(undefined1 *)((longlong)param_1 + 0x6e) = 0;
      return param_1;
    }
  }
  pbVar2 = (byte *)0x1;
  goto LAB_140fb3111;
}

