// VA 0x140fb5020, PDB extent 94 bytes
// crash_reporter_gui::impl$3::main_view::closure$2
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/crash-reporter-gui/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: crash_reporter_gui::impl$3::main_view::closure$2
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/crash-reporter-gui/src/lib.rs
   Extent: 94 */

void pdb_140fb5020(undefined8 *param_1,undefined8 param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  
  uVar1 = 2;
  if ((longlong)*param_3 < 0) {
    uVar1 = *param_3 ^ 0x8000000000000000;
  }
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      uVar1 = param_3[2];
      param_1[1] = param_3[1];
      param_1[2] = uVar1;
      *param_1 = 0x8000000000000006;
      return;
    }
    param_1[3] = param_3[2];
    uVar1 = param_3[1];
    param_1[1] = *param_3;
    param_1[2] = uVar1;
    *param_1 = 0x8000000000000009;
    return;
  }
  *param_1 = 0x8000000000000008;
  return;
}

