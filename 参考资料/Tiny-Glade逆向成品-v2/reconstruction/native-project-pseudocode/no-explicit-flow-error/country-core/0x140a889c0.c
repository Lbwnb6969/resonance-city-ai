// VA 0x140a889c0, PDB extent 38 bytes
// country_core::utils::debug_viz::DebugRectangle3d::dashed_line
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/debug_viz.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::utils::debug_viz::DebugRectangle3d::dashed_line
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/debug_viz.rs
   Extent: 38 */

void pdb_140a889c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *(undefined1 *)((longlong)param_2 + 0x34) = 1;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar5;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[6] = param_2[6];
  return;
}

