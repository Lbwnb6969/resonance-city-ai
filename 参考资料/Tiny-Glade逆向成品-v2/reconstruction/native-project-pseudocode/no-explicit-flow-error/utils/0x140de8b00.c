// VA 0x140de8b00, PDB extent 74 bytes
// utils::cartesian_to_polar
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::cartesian_to_polar
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 74 */

undefined4 pdb_140de8b00(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = pub_142e32850();
  pub_142e32980(param_2,param_1);
  return uVar1;
}

