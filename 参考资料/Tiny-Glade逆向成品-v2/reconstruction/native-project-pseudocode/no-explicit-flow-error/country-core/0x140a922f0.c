// VA 0x140a922f0, PDB extent 66 bytes
// country_core::resources::session::NextSession::load
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::session::NextSession::load
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
   Extent: 66 */

void pdb_140a922f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  param_1[4] = *param_2;
  param_1[5] = uVar1;
  param_1[3] = 0x8000000000000002;
  *param_1 = 0;
  param_1[1] = 8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x1b] = 0;
  return;
}

