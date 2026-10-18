// VA 0x140a88230, PDB extent 41 bytes
// country_core::utils::debug_viz::DebugSphere::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/debug_viz.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::utils::debug_viz::DebugSphere::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/debug_viz.rs
   Extent: 41 */

void pdb_140a88230(undefined4 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  param_1[4] = 0x3dcccccd;
  *(undefined8 *)(param_1 + 5) = *param_2;
  param_1[7] = *(undefined4 *)(param_2 + 1);
  param_1[8] = 0x3f800000;
  *(undefined1 *)(param_1 + 9) = 0;
  return;
}

