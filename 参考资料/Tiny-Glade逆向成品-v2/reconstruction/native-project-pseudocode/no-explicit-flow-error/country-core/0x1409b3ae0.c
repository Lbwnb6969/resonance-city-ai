// VA 0x1409b3ae0, PDB extent 16 bytes
// country_core::systems::render_loop::painterly::PainterlyState::has_target
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/painterly/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::render_loop::painterly::PainterlyState::has_target
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/painterly/mod.rs
   Extent: 16 */

byte pdb_1409b3ae0(byte *param_1)

{
  return ~*param_1 & *(short *)(param_1 + 2) != 0;
}

