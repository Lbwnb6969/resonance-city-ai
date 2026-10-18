// VA 0x140a89130, PDB extent 52 bytes
// country_core::utils::debug_viz::DebugLine::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/debug_viz.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::utils::debug_viz::DebugLine::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/debug_viz.rs
   Extent: 52 */

void pdb_140a89130(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  param_1[3] = 0x8000000000000000;
  *(undefined2 *)((longlong)param_1 + 0x44) = 1;
  return;
}

