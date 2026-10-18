// VA 0x140a78260, PDB extent 43 bytes
// country_core::resources::roofs::roof_buffers::pack_window_cut_list
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_buffers.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::roofs::roof_buffers::pack_window_cut_list
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_buffers.rs
   Extent: 43 */

uint pdb_140a78260(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 < 0x1000000 && param_2 != 0) {
    uVar1 = 0xff;
    if (param_2 < 0xff) {
      uVar1 = param_2;
    }
    uVar1 = uVar1 << 0x18 | param_1;
  }
  return uVar1;
}

