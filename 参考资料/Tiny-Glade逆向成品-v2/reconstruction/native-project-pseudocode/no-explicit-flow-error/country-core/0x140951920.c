// VA 0x140951920, PDB extent 74 bytes
// country_core::geometry::instanced_wall::impl$3::default
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/geometry/instanced_wall.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::geometry::instanced_wall::impl$3::default
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/geometry/instanced_wall.rs
   Extent: 74 */

undefined8 * pdb_140951920(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[6] = 0;
  param_1[7] = 0;
  uVar1 = _UNK_143024c90;
  *param_1 = _DAT_143024c88;
  param_1[1] = uVar1;
  uVar1 = _UNK_143024ca0;
  param_1[2] = _DAT_143024c98;
  param_1[3] = uVar1;
  uVar1 = _UNK_143024cb0;
  param_1[4] = _DAT_143024ca8;
  param_1[5] = uVar1;
  param_1[8] = _DAT_1430155a0;
  *(undefined4 *)(param_1 + 9) = 0xc2c80000;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  return param_1;
}

