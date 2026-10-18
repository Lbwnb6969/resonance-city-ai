// VA 0x14093dfa0, PDB extent 72 bytes
// country_core::systems::ivy::impl$0::add_ivy_systems
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ivy/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::ivy::impl$0::add_ivy_systems
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ivy/mod.rs
   Extent: 72 */

undefined8 pdb_14093dfa0(undefined8 param_1)

{
  undefined1 auStack_f8 [112];
  undefined1 auStack_88 [112];
  
  pdb_1417d6e70(auStack_88,0x16);
  pdb_1417e5ab0(auStack_f8,auStack_88);
  pdb_140c95fe0(param_1,auStack_f8);
  return param_1;
}

