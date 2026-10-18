// VA 0x140a945e0, PDB extent 48 bytes
// country_core::render::render_config::impl$26::default
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/render_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::render::render_config::impl$26::default
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/render_config.rs
   Extent: 48 */

void pdb_140a945e0(undefined8 *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x44) = 1;
  *(undefined1 *)((longlong)param_1 + 0x46) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[5] = 0x43800000780;
  *param_1 = 0x8000000000000001;
  return;
}

