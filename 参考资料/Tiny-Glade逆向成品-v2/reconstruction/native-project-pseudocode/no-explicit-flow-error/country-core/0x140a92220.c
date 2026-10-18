// VA 0x140a92220, PDB extent 26 bytes
// country_core::render::render_config::FullscreenConfig::resolution
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/render_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::render::render_config::FullscreenConfig::resolution
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/render_config.rs
   Extent: 26 */

void pdb_140a92220(uint *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (iVar1 == 1) {
    *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
  }
  *param_1 = (uint)(iVar1 == 1);
  return;
}

