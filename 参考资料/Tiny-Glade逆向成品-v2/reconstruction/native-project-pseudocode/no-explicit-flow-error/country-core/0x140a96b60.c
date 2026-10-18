// VA 0x140a96b60, PDB extent 57 bytes
// country_core::render::render_config::impl$3::from
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/render_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::render::render_config::impl$3::from
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/render_config.rs
   Extent: 57 */

ulonglong pdb_140a96b60(undefined8 param_1)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  return (ulonglong)(uVar1 & 0x100) |
         (ulonglong)(uVar1 & 0x10000) | (ulonglong)((uint5)param_1 & 0x101000000) |
         (ulonglong)(uVar1 & 1);
}

