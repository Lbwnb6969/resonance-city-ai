// VA 0x140c419a0, PDB extent 8 bytes
// country_core::resources::walls::decorator_archivist::DecoratorArchivist::decorator_cull_allow_any
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_archivist.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator_archivist::DecoratorArchivist::decorator_cull_allow_any
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_archivist.rs
   Extent: 8 */

void pdb_140c419a0(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x1e0) = 1;
  return;
}

