// VA 0x140c33130, PDB extent 21 bytes
// country_core::resources::walls::inner_wall_state::is_default_arch_height
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_wall_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::inner_wall_state::is_default_arch_height
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_wall_state.rs
   Extent: 21 */

byte pdb_140c33130(float *param_1)

{
  return -(_DAT_14301920c == *param_1) & 1;
}

