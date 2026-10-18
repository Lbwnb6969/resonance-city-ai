// VA 0x140c413c0, PDB extent 29 bytes
// country_core::resources::walls::decorator_storage::DecoratorMaybeMut::get_mut
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator_storage::DecoratorMaybeMut::get_mut
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
   Extent: 29 */

undefined8 pdb_140c413c0(undefined8 *param_1)

{
  pdb_1403b0de0(param_1[1],*(undefined4 *)(param_1 + 2));
  return *param_1;
}

