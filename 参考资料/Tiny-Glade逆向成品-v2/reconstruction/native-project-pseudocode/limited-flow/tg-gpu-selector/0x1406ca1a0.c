// VA 0x1406ca1a0, PDB extent 925 bytes
// tg_gpu_selector::gpu_selection::localize_graphics_init_error
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-gpu-selector/src/gpu_selection.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_gpu_selector::gpu_selection::localize_graphics_init_error
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-gpu-selector/src/gpu_selection.rs
   Extent: 925 */

void pdb_1406ca1a0(undefined8 param_1,ulonglong *param_2)

{
  longlong lVar1;
  
  pdb_140dc6290(&UNK_142f99430,0x25);
  lVar1 = 3;
  if (0xf < *param_2) {
    lVar1 = *param_2 - 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0001406ca20b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_142f998c8 + *(int *)(&UNK_142f998c8 + lVar1 * 4)))
            (&UNK_142f998c8,&UNK_142f998c8 + *(int *)(&UNK_142f998c8 + lVar1 * 4));
  return;
}

