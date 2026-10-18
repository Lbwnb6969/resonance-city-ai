// VA 0x1406d1c30, PDB extent 317 bytes
// usdl_sys::backend::impl$2::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl-sys/src/backend.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: usdl_sys::backend::impl$2::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/usdl-sys/src/backend.rs
   Extent: 317 */

void pdb_1406d1c30(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = 1;
  if (*param_1 < 0) {
    lVar1 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001406d1c5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_142f9af78 + *(int *)(&UNK_142f9af78 + lVar1 * 4)))();
  return;
}

