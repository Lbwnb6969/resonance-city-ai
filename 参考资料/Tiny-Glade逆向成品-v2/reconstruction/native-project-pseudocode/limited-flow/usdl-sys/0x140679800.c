// VA 0x140679800, PDB extent 371 bytes
// usdl_sys::backend::impl$13::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl-sys/src/backend.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: usdl_sys::backend::impl$13::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/usdl-sys/src/backend.rs
   Extent: 371 */

void pdb_140679800(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = 1;
  if (*param_1 < 0) {
    lVar1 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x000140679835. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_142f936a4 + *(int *)(&UNK_142f936a4 + lVar1 * 4)))
            (param_2,&UNK_142f936a4,&UNK_142f936a4 + *(int *)(&UNK_142f936a4 + lVar1 * 4));
  return;
}

