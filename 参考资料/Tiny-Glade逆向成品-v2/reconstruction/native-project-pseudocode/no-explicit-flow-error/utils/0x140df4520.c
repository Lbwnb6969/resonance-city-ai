// VA 0x140df4520, PDB extent 21 bytes
// utils::swizzlers::impl$0::x0y
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/swizzlers.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::swizzlers::impl$0::x0y
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/swizzlers.rs
   Extent: 21 */

ulonglong * pdb_140df4520(ulonglong *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = param_2[1];
  *param_1 = (ulonglong)*param_2;
  *(uint *)(param_1 + 1) = uVar1;
  return param_1;
}

