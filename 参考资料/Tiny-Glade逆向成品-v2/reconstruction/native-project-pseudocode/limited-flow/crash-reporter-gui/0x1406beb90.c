// VA 0x1406beb90, PDB extent 7655 bytes
// crash_reporter_gui::impl$2::view
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/crash-reporter-gui/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: crash_reporter_gui::impl$2::view
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/crash-reporter-gui/src/lib.rs
   Extent: 7655 */

void pdb_1406beb90(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 1;
  if (0x800000000000000f < *(ulonglong *)(param_1 + 0x58)) {
    lVar1 = *(ulonglong *)(param_1 + 0x58) + 0x7ffffffffffffff0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001406bebee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_142f98e44 + *(int *)(&UNK_142f98e44 + lVar1 * 4)))();
  return;
}

