// VA 0x1408f8080, PDB extent 14 bytes
// country_core::components::drawable::DrawableMeshData::as_mesh
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/components/drawable.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::components::drawable::DrawableMeshData::as_mesh
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/components/drawable.rs
   Extent: 14 */

char * pdb_1408f8080(char *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)0x0;
  if (*param_1 == '\0') {
    pcVar1 = param_1 + 8;
  }
  return pcVar1;
}

