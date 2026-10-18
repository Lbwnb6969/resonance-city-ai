// VA 0x140c47250, PDB extent 21 bytes
// country_core::resources::history::decorator_edit::is_default_stair_width
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/decorator_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::history::decorator_edit::is_default_stair_width
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/decorator_edit.rs
   Extent: 21 */

byte pdb_140c47250(float *param_1)

{
  return -(_DAT_142e36f28 == *param_1) & 1;
}

