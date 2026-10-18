// VA 0x140a922c0, PDB extent 35 bytes
// country_core::resources::session::NextSession::skip_last_commands
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::session::NextSession::skip_last_commands
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
   Extent: 35 */

undefined8 pdb_140a922c0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  *(undefined8 *)(param_2 + 0xd8) = param_3;
  pub_142e32760(param_1,param_2,0xe8);
  return param_1;
}

