// VA 0x140a92200, PDB extent 7 bytes
// country_core::render::render_config::DisplayConfig::fullscreen_exclusive
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/render_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::render_config::DisplayConfig::fullscreen_exclusive
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/render_config.rs
   Extent: 7 */

byte pdb_140a92200(longlong param_1)

{
  return *(byte *)(param_1 + 0x45) ^ 1;
}

