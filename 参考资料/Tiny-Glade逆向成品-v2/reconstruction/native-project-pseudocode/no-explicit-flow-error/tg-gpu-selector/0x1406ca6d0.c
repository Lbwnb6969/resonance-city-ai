// VA 0x1406ca6d0, PDB extent 33 bytes
// tg_gpu_selector::gpu_selection::impl$0::program_outcome
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-gpu-selector/src/gpu_selection.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_gpu_selector::gpu_selection::impl$0::program_outcome
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-gpu-selector/src/gpu_selection.rs
   Extent: 33 */

undefined8 pdb_1406ca6d0(char *param_1)

{
  if (param_1[0x88] != '\x01') {
    return 3;
  }
  if (*param_1 != '\0') {
    return 0;
  }
  return 1;
}

