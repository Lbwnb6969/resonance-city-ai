// VA 0x1406c0980, PDB extent 2978 bytes
// crash_reporter_gui::impl$2::update
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/crash-reporter-gui/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: crash_reporter_gui::impl$2::update
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/crash-reporter-gui/src/lib.rs
   Extent: 2978 */

void pdb_1406c0980(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  
  lVar1 = 1;
  if (*param_3 < 0) {
    lVar1 = *param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x0001406c09d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_142f98e54 + *(int *)(&UNK_142f98e54 + lVar1 * 4)))();
  return;
}

