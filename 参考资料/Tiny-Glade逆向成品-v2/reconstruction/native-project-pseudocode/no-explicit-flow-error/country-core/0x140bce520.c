// VA 0x140bce520, PDB extent 44 bytes
// country_core::utils::project_cursor_onto_ray::ProportionalScreenSpace::from_window_size
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/project_cursor_onto_ray.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::utils::project_cursor_onto_ray::ProportionalScreenSpace::from_window_size
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/project_cursor_onto_ray.rs
   Extent: 44 */

float * pdb_140bce520(float *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *param_1 = (float)uVar1;
  param_1[1] = (float)uVar2;
  param_1[2] = (float)uVar1 / (float)uVar2;
  param_1[3] = 1.0;
  return param_1;
}

