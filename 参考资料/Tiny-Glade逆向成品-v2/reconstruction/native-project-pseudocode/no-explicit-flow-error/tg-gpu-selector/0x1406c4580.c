// VA 0x1406c4580, PDB extent 66 bytes
// tg_gpu_selector::gpu_selection::impl$4::active
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-gpu-selector/src/gpu_selection.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_gpu_selector::gpu_selection::impl$4::active
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-gpu-selector/src/gpu_selection.rs
   Extent: 66 */

undefined4 * pdb_1406c4580(undefined4 *param_1)

{
  undefined8 uVar1;
  
  param_1[5] = 2;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  uVar1 = _UNK_142f99068;
  *(undefined8 *)(param_1 + 0x3a) = _DAT_142f99060;
  *(undefined8 *)(param_1 + 0x3c) = uVar1;
  param_1[0x3e] = 0x3f800000;
  *param_1 = 1;
  uVar1 = _UNK_142f97ff8;
  *(undefined8 *)(param_1 + 1) = _DAT_142f97ff0;
  *(undefined8 *)(param_1 + 3) = uVar1;
  return param_1;
}

