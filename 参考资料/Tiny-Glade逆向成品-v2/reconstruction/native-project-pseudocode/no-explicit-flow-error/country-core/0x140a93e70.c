// VA 0x140a93e70, PDB extent 67 bytes
// country_core::resources::session::impl$4::default
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::session::impl$4::default
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
   Extent: 67 */

void pdb_140a93e70(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 0x13) = 0;
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0x8000000000000000;
  param_1[4] = 8;
  param_1[5] = 0;
  param_1[0xe] = 0x8000000000000000;
  return;
}

