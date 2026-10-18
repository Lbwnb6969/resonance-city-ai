// VA 0x140df4940, PDB extent 50 bytes
// utils::components::transform::impl$1::default
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/components/transform.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::components::transform::impl$1::default
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/components/transform.rs
   Extent: 50 */

void pdb_140df4940(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  uVar1 = _UNK_142e4e658;
  *param_1 = _DAT_142e4e650;
  param_1[1] = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0x3f8000003f800000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f800000;
  return;
}

