// VA 0x140bce550, PDB extent 70 bytes
// country_core::utils::project_cursor_onto_ray::ProportionalScreenSpace::transform_screen_space
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/project_cursor_onto_ray.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::utils::project_cursor_onto_ray::ProportionalScreenSpace::transform_screen_space
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/project_cursor_onto_ray.rs
   Extent: 70 */

float pdb_140bce550(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)param_1[2];
  fVar2 = (float)pdb_140de83c0(param_2,param_3,*param_1,param_1[1]);
  return fVar2 * fVar1;
}

