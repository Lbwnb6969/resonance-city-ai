// VA 0x140c509e0, PDB extent 127 bytes
// country_core::resources::gpu_lut::GpuLutTracker::render_luts
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/gpu_lut.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::gpu_lut::GpuLutTracker::render_luts
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/gpu_lut.rs
   Extent: 127 */

void pdb_140c509e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uStack_38;
  longlong lStack_30;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10) * 0x28;
    lVar1 = *(longlong *)(param_1 + 8) + 0x10;
    do {
      if (*(char *)(lVar1 + 0x10) == '\0') {
        uStack_38 = param_2;
        lStack_30 = lVar1;
        (**(code **)(*(longlong *)(lVar1 + -8) + 0x28))
                  (*(undefined8 *)(lVar1 + -0x10),&uStack_38,param_3);
        *(undefined1 *)(lVar1 + 0x10) = 1;
      }
      lVar1 = lVar1 + 0x28;
      lVar2 = lVar2 + -0x28;
    } while (lVar2 != 0);
  }
  return;
}

