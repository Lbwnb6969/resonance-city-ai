// VA 0x140a889f0, PDB extent 36 bytes
// country_core::utils::debug_viz::DebugRectangle3d::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/debug_viz.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::utils::debug_viz::DebugRectangle3d::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/debug_viz.rs
   Extent: 36 */

undefined4 * pdb_140a889f0(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  param_1[4] = 0x3f800000;
  *(undefined1 *)(param_1 + 0xd) = 0;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined8 *)(param_1 + 5) = *param_2;
  *(undefined8 *)(param_1 + 7) = uVar1;
  *(undefined8 *)(param_1 + 9) = uVar2;
  *(undefined8 *)(param_1 + 0xb) = uVar3;
  return param_1;
}

