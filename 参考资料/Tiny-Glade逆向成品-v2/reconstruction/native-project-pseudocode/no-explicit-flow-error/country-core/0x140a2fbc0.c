// VA 0x140a2fbc0, PDB extent 70 bytes
// country_core::resources::tree_storage::TreeStorage::remove
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/tree_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::tree_storage::TreeStorage::remove
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/tree_storage.rs
   Extent: 70 */

undefined8 pdb_140a2fbc0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  undefined1 auStack_20 [8];
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uVar1 = pdb_1400af0a0(param_1 + 0x20,&uStack_28);
  pdb_140ca9150(auStack_20,param_1,uVar1,&uStack_28);
  uVar1 = 0;
  if ((int)uStack_18 != 0) {
    uVar1 = uStack_18;
  }
  return uVar1;
}

