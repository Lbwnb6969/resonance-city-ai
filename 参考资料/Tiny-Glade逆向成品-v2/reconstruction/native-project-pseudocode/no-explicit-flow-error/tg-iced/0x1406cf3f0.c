// VA 0x1406cf3f0, PDB extent 55 bytes
// tg_iced::dialog::MessageDialog::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-iced/src/dialog.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_iced::dialog::MessageDialog::new
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-iced/src/dialog.rs
   Extent: 55 */

undefined8 * pdb_1406cf3f0(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 6) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x34) = param_3;
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 1;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  return param_1;
}

