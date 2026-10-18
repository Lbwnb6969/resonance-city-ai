// VA 0x140a82280, PDB extent 61 bytes
// country_core::input::ActiveInputModeTracker::new_default_controller
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::input::ActiveInputModeTracker::new_default_controller
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/mod.rs
   Extent: 61 */

undefined8 * pdb_140a82280(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar1 = pdb_140f3c9d0();
  uVar3 = param_2;
  uVar2 = pdb_140f5a1d0(uVar1);
  *param_1 = uVar2;
  *(undefined4 *)(param_1 + 1) = uVar3;
  param_1[2] = uVar1;
  *(undefined4 *)(param_1 + 3) = param_2;
  return param_1;
}

