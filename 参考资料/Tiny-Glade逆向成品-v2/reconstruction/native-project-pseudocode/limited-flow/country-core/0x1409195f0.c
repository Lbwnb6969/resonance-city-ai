// VA 0x1409195f0, PDB extent 2593 bytes
// country_core::startup::startup_session::resolve_next_session
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_session.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::startup::startup_session::resolve_next_session
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_session.rs
   Extent: 2593 */

void pdb_1409195f0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 4;
  if (*(longlong *)(param_2 + 0x18) < 0) {
    lVar1 = *(longlong *)(param_2 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x00014091964a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_143020524 + *(int *)(&UNK_143020524 + lVar1 * 4)))();
  return;
}

