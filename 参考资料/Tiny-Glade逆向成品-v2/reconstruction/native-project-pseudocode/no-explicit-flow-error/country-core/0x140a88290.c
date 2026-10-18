// VA 0x140a88290, PDB extent 30 bytes
// country_core::utils::debug_viz::DebugSphere::solid
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/debug_viz.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::utils::debug_viz::DebugSphere::solid
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/debug_viz.rs
   Extent: 30 */

void pdb_140a88290(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined1 *)((longlong)param_2 + 0x24) = 1;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[4] = param_2[4];
  return;
}

