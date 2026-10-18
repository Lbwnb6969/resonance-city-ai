// VA 0x140c01470, PDB extent 14 bytes
// country_core::resources::stairs::stairs_assembly_params::StairNodeAnchor::try_as_wall
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_assembly_params.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::stairs::stairs_assembly_params::StairNodeAnchor::try_as_wall
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_assembly_params.rs
   Extent: 14 */

int * pdb_140c01470(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)0x0;
  if (*param_1 == 2) {
    piVar1 = param_1 + 2;
  }
  return piVar1;
}

