// VA 0x140ac6200, PDB extent 55 bytes
// country_core::resources::roofs::roof_ridge::calc_roof_tip_center_ls
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_ridge.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::roofs::roof_ridge::calc_roof_tip_center_ls
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_ridge.rs
   Extent: 55 */

float pdb_140ac6200(longlong param_1,float param_2)

{
  float fVar1;
  
  if (*(char *)(param_1 + 8) == '\0') {
    fVar1 = *(float *)(param_1 + 0x14) + *(float *)(param_1 + 0x14);
  }
  else {
    fVar1 = *(float *)(param_1 + 0x1c);
  }
  return param_2 * fVar1 * *(float *)(param_1 + 0x24);
}

