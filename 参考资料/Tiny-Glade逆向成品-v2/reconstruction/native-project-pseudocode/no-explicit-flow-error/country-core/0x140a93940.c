// VA 0x140a93940, PDB extent 95 bytes
// country_core::resources::session::SessionId::session_file_list
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::session::SessionId::session_file_list
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
   Extent: 95 */

undefined8 pdb_140a93940(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined *puStack_18;
  undefined8 uStack_10;
  
  puStack_38 = &UNK_143045188;
  uStack_30 = 0xc;
  puStack_28 = &UNK_14304510d;
  uStack_20 = 0xe;
  puStack_18 = &UNK_1430450d2;
  uStack_10 = 9;
  pdb_1415f4b60(param_1,&puStack_38,&stack0xfffffffffffffff8);
  return param_1;
}

