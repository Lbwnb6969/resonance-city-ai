// VA 0x140c413f0, PDB extent 44 bytes
// country_core::resources::walls::decorator_storage::DecoratorStorageAddr::as_wall
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator_storage::DecoratorStorageAddr::as_wall
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
   Extent: 44 */

longlong pdb_140c413f0(longlong *param_1)

{
  if (*param_1 == 0) {
    return param_1[1];
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14306d090,0x23,&UNK_14306d0a8);
}

