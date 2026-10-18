// VA 0x1406ca700, PDB extent 9585 bytes
// tg_gpu_selector::gpu_selection::impl$2::view
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-gpu-selector/src/gpu_selection.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_gpu_selector::gpu_selection::impl$2::view
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-gpu-selector/src/gpu_selection.rs
   Extent: 9585 */

void pdb_1406ca700(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 4;
  if (0x17 < *(ulonglong *)(param_1 + 0x10)) {
    lVar1 = *(ulonglong *)(param_1 + 0x10) - 0x18;
  }
                    /* WARNING: Could not recover jumptable at 0x0001406ca77e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_142f99904 + *(int *)(&UNK_142f99904 + lVar1 * 4)))
            (&UNK_142f99904 + *(int *)(&UNK_142f99904 + lVar1 * 4));
  return;
}

