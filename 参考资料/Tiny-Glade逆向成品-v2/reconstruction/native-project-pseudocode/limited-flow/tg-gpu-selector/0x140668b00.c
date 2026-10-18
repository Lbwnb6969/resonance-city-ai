// VA 0x140668b00, PDB extent 200 bytes
// tg_gpu_selector::gpu_selection::impl$5::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-gpu-selector/src/gpu_selection.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_gpu_selector::gpu_selection::impl$5::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-gpu-selector/src/gpu_selection.rs
   Extent: 200 */

void pdb_140668b00(ulonglong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = 4;
  if (0x17 < *param_1) {
    lVar1 = *param_1 - 0x18;
  }
                    /* WARNING: Could not recover jumptable at 0x000140668b29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_142f8ec90 + *(int *)(&UNK_142f8ec90 + lVar1 * 4)))
            (param_2,&UNK_142f8ec90,&UNK_142f8ec90 + *(int *)(&UNK_142f8ec90 + lVar1 * 4));
  return;
}

