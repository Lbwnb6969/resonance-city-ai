// VA 0x1406ccc80, PDB extent 388 bytes
// tg_gpu_selector::gpu_selection::impl$2::update
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-gpu-selector/src/gpu_selection.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_gpu_selector::gpu_selection::impl$2::update
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-gpu-selector/src/gpu_selection.rs
   Extent: 388 */

void pdb_1406ccc80(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001406ccca9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_142f9991c + *(int *)(&UNK_142f9991c + *param_3 * 4)))();
  return;
}

