// VA 0x140a2fb80, PDB extent 50 bytes
// country_core::resources::tree_storage::TreeStorage::insert
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/tree_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::tree_storage::TreeStorage::insert
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/tree_storage.rs
   Extent: 50 */

undefined8 pdb_140a2fb80(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = pdb_141409100();
  uVar2 = param_2 + 1U;
  if (param_2 + 1U <= *(ulonglong *)(param_1 + 0x30)) {
    uVar2 = *(ulonglong *)(param_1 + 0x30);
  }
  *(ulonglong *)(param_1 + 0x30) = uVar2;
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  return uVar1;
}

