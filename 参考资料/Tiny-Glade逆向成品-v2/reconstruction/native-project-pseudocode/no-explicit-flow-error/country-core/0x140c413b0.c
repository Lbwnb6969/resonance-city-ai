// VA 0x140c413b0, PDB extent 15 bytes
// country_core::resources::walls::decorator_storage::DecoMoveToStorage::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator_storage::DecoMoveToStorage::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
   Extent: 15 */

undefined8 *
pdb_140c413b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  param_1[2] = param_2;
  *param_1 = param_3;
  param_1[1] = param_4;
  return param_1;
}

