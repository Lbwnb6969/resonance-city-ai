// VA 0x140a900d0, PDB extent 11 bytes
// country_core::render::RenderTemporalState::should_reset_temporal
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::render::RenderTemporalState::should_reset_temporal
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/mod.rs
   Extent: 11 */

bool pdb_140a900d0(longlong param_1)

{
  return *(int *)(param_1 + 0x108) == 0;
}

