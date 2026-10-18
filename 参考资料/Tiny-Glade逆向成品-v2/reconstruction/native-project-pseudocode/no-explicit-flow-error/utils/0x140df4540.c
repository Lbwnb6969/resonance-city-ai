// VA 0x140df4540, PDB extent 27 bytes
// utils::swizzlers::impl$1::xvy
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/swizzlers.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::swizzlers::impl$1::xvy
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/swizzlers.rs
   Extent: 27 */

undefined4 * pdb_140df4540(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = param_3;
  param_1[2] = uVar1;
  return param_1;
}

