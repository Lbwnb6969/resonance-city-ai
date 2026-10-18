// VA 0x140de8100, PDB extent 31 bytes
// utils::IsoTransform::from_translation_rotation
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::IsoTransform::from_translation_rotation
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 31 */

undefined4 * pdb_140de8100(undefined4 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 1) >> 0x20);
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar3;
  param_1[3] = uVar3;
  uVar2 = param_3[1];
  *(undefined8 *)(param_1 + 4) = *param_3;
  *(undefined8 *)(param_1 + 6) = uVar2;
  return param_1;
}

