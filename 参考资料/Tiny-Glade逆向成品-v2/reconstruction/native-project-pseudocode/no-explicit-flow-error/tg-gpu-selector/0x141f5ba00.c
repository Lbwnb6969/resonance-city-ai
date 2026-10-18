// VA 0x141f5ba00, PDB extent 36 bytes
// tg_gpu_selector::vulkan_config::impl$3::allowlist_view::closure$1::closure$1::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-gpu-selector/src/vulkan_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   tg_gpu_selector::vulkan_config::impl$3::allowlist_view::closure$1::closure$1::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-gpu-selector/src/vulkan_config.rs
   Extent: 36 */

undefined8 * pdb_141f5ba00(undefined8 *param_1,undefined8 *param_2)

{
  pdb_140f60be0(param_1 + 1,*param_2);
  *param_1 = 0;
  return param_1;
}

