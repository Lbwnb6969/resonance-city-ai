// VA 0x140c3bb70, PDB extent 8 bytes
// country_core::resources::walls::decorator_storage::DecoratorStorage::mark_mutable
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator_storage::DecoratorStorage::mark_mutable
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
   Extent: 8 */

void pdb_140c3bb70(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x1b0) = 0;
  return;
}

