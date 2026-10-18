// VA 0x1409d5a60, PDB extent 64 bytes
// country_core::systems::render_loop::find_crash::impl$0::build
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/find_crash.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::render_loop::find_crash::impl$0::build
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/find_crash.rs
   Extent: 64 */

void pdb_1409d5a60(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_80 [112];
  
  pdb_140c95ea0(param_2);
  pdb_140b070a0(auStack_80,10,&UNK_14302ee30);
  pdb_140c95fe0(param_2,auStack_80);
  return;
}

