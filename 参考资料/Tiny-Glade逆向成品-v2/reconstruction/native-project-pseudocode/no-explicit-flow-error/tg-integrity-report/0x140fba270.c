// VA 0x140fba270, PDB extent 329 bytes
// tg_integrity_report::controls::Controls::remove_unrecognized_package_file
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-integrity-report/src/controls.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   tg_integrity_report::controls::Controls::remove_unrecognized_package_file
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-integrity-report/src/controls.rs
   Extent: 329 */

void pdb_140fba270(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  longlong lStack_40;
  longlong *plStack_38;
  longlong *plStack_30;
  longlong *plStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  uStack_50 = param_2;
  uStack_48 = param_3;
  lStack_40 = pdb_140f4eda0(param_2,param_3);
  if (lStack_40 == 0) {
    if (-1 < *param_1) {
      pdb_141efb710(param_1 + 6,&uStack_50);
      if ((((-1 < *param_1) && (param_1[2] == 0)) && (param_1[5] == 0)) && (param_1[8] == 0)) {
        plStack_28 = param_1 + 3;
        plStack_38 = param_1;
        plStack_30 = param_1 + 6;
        pdb_1404ca240(param_1);
        pdb_1404ca240(plStack_28);
        pdb_1404ca240(plStack_30);
        *plStack_38 = -0x7ffffffffffffffc;
      }
    }
  }
  else {
    pdb_1404b38e0(&lStack_40);
  }
  return;
}

