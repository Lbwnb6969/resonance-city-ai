// VA 0x140a92210, PDB extent 16 bytes
// country_core::render::render_config::UpscalingPreset::tgsr_resolution_scale
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/render_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::render_config::UpscalingPreset::tgsr_resolution_scale
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/render_config.rs
   Extent: 16 */

undefined4 pdb_140a92210(byte *param_1)

{
  return *(undefined4 *)(&UNK_1430456b0 + (ulonglong)*param_1 * 4);
}

