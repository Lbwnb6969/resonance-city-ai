// VA 0x140a92450, PDB extent 175 bytes
// country_core::resources::session::SessionMeta::write_to_disk
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::session::SessionMeta::write_to_disk
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
   Extent: 175 */

undefined8 pdb_140a92450(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_60 [32];
  ulonglong uStack_40;
  byte *pbStack_38;
  undefined8 uStack_30;
  byte *pbStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  pdb_140a937d0(&uStack_40);
  pbStack_20 = pbStack_38;
  pdb_140f3e9e0(auStack_60,pbStack_38,uStack_30,&UNK_1430450d2,9);
  uVar1 = pdb_14191dfa0(auStack_60,param_1);
  if (uStack_40 != 0) {
    pub_1406abac0(pbStack_20,uStack_40,1);
  }
  return uVar1;
}

