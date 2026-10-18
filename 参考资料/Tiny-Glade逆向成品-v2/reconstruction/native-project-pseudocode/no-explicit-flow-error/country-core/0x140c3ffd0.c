// VA 0x140c3ffd0, PDB extent 52 bytes
// country_core::resources::walls::decorator_storage::DecoratorStorage::iter_stair_decorators
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator_storage::DecoratorStorage::iter_stair_decorators
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
   Extent: 52 */

void pdb_140c3ffd0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_2 + 0x120;
  if (*(longlong *)(param_2 + 0x120) == 0) {
    lVar1 = 0;
  }
  *param_1 = 1;
  param_1[1] = lVar1;
  param_1[2] = 0;
  param_1[7] = 0;
  return;
}

