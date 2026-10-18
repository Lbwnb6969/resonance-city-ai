// VA 0x1409d1e40, PDB extent 8 bytes
// country_core::render::nani::gpu_world::OwnedGpuWorldSubset::instance_count
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::nani::gpu_world::OwnedGpuWorldSubset::instance_count
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
   Extent: 8 */

undefined8 pdb_1409d1e40(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}

