// VA 0x1406c1920, PDB extent 82 bytes
// tg_integrity_report::run_integrity_report_gui
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-integrity-report/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_integrity_report::run_integrity_report_gui
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-integrity-report/src/lib.rs
   Extent: 82 */

void pdb_1406c1920(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  undefined1 uStack_10;
  
  uStack_18 = *(undefined8 *)(param_3 + 0x10);
  uStack_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  uStack_48 = param_3[4];
  uStack_44 = param_3[5];
  uStack_40 = param_3[6];
  uStack_3c = param_3[7];
  uStack_38 = param_3[8];
  uStack_34 = param_3[9];
  uStack_30 = param_3[10];
  uStack_2c = param_3[0xb];
  uStack_28 = param_3[0xc];
  uStack_24 = param_3[0xd];
  uStack_20 = param_3[0xe];
  uStack_1c = param_3[0xf];
  uStack_10 = 0;
  pdb_140fc3230(&uStack_58,param_1,param_2);
  return;
}

