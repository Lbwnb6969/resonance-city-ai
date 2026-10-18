// VA 0x1409d2d70, PDB extent 12 bytes
// country_core::render::nani::gpu_world::GpuWorld::subset_capacity
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::render::nani::gpu_world::GpuWorld::subset_capacity
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
   Extent: 12 */

undefined8 pdb_1409d2d70(longlong param_1,byte param_2)

{
  return *(undefined8 *)(param_1 + 0x1258 + (ulonglong)param_2 * 8);
}

