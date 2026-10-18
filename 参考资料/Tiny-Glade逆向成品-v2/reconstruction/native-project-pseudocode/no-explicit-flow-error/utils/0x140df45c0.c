// VA 0x140df45c0, PDB extent 21 bytes
// utils::swizzlers::impl$3::x0z
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/swizzlers.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::swizzlers::impl$3::x0z
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/swizzlers.rs
   Extent: 21 */

ulonglong * pdb_140df45c0(ulonglong *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = param_2[2];
  *param_1 = (ulonglong)*param_2;
  *(uint *)(param_1 + 1) = uVar1;
  return param_1;
}

