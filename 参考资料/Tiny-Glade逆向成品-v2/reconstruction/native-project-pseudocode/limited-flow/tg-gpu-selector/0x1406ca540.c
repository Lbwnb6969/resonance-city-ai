// VA 0x1406ca540, PDB extent 279 bytes
// tg_gpu_selector::gpu_selection::get_vendor_driver_update_links
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-gpu-selector/src/gpu_selection.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_gpu_selector::gpu_selection::get_vendor_driver_update_links
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-gpu-selector/src/gpu_selection.rs
   Extent: 279 */

void pdb_1406ca540(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001406ca561. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_142f998e8 + *(int *)(&UNK_142f998e8 + (ulonglong)*(uint *)(param_2 + 0x58) * 4)))
            ();
  return;
}

