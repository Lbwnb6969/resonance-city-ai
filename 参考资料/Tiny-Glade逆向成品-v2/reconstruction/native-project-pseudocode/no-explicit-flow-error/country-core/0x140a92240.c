// VA 0x140a92240, PDB extent 14 bytes
// country_core::render::render_config::_::impl$0::previous
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/render_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::render::render_config::_::impl$0::previous
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/render_config.rs
   Extent: 14 */

uint pdb_140a92240(byte *param_1)

{
  return 0x10003 >> ((*param_1 & 3) << 3);
}

