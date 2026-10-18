// VA 0x140a92b20, PDB extent 159 bytes
// country_core::resources::session::SavedSession::loading_background_path
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::session::SavedSession::loading_background_path
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
   Extent: 159 */

undefined8 pdb_140a92b20(undefined8 param_1)

{
  ulonglong uStack_40;
  byte *pbStack_38;
  undefined8 uStack_30;
  byte *pbStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  pdb_140a937d0(&uStack_40);
  pbStack_20 = pbStack_38;
  pdb_140f3e9e0(param_1,pbStack_38,uStack_30,&UNK_14304511b,0x16);
  if (uStack_40 != 0) {
    pub_1406abac0(pbStack_20,uStack_40,1);
  }
  return param_1;
}

