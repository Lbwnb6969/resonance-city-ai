// VA 0x1406cce10, PDB extent 230 bytes
// tg_gpu_selector::run_vulkan_configuration_gui
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-gpu-selector/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_gpu_selector::run_vulkan_configuration_gui
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-gpu-selector/src/lib.rs
   Extent: 230 */

longlong * pdb_1406cce10(longlong *param_1)

{
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined1 auStack_c8 [104];
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_50;
  longlong lStack_48;
  longlong lStack_40;
  undefined8 uStack_28;
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  uStack_28 = in_stack_00000030;
  uStack_19 = 1;
  pdb_140ff6d20(auStack_c8);
  uStack_19 = 0;
  pdb_140ff9e60(&lStack_60,auStack_c8,in_stack_00000028,uStack_28);
  if (lStack_60 == -0x7fffffffffffffff) {
    param_1[1] = lStack_58;
  }
  else if (!SBORROW8(0,lStack_60)) {
    param_1[2] = lStack_50;
    param_1[3] = lStack_48;
    param_1[1] = lStack_58;
    param_1[4] = lStack_40;
  }
  *param_1 = lStack_60;
  return param_1;
}

