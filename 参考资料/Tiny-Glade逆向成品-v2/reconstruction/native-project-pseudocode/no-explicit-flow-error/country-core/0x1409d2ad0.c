// VA 0x1409d2ad0, PDB extent 82 bytes
// country_core::render::nani::gpu_world::GpuWorld::export_from_rg
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::render::nani::gpu_world::GpuWorld::export_from_rg
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
   Extent: 82 */

void pdb_1409d2ad0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  for (lVar1 = 0xb8; lVar1 != 0x12d8; lVar1 = lVar1 + 0xa0) {
    if (-0x7fffffffffffffff < *(longlong *)(param_1 + -0x78 + lVar1)) {
      (**(code **)(*(longlong *)(param_1 + lVar1) + 0x58))
                (*(undefined8 *)(param_1 + -8 + lVar1),param_2);
    }
  }
  return;
}

