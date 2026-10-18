// VA 0x140b0f500, PDB extent 63 bytes
// country_core::startup::impl$1::build
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::startup::impl$1::build
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/mod.rs
   Extent: 63 */

void pdb_140b0f500(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_80 [112];
  
  pdb_1418f22d0(param_2);
  pdb_140c95370(param_2);
  pdb_140c62680(auStack_80);
  pdb_140c97aa0(param_2,auStack_80);
  return;
}

