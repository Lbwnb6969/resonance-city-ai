// VA 0x141e3c5c0, PDB extent 47 bytes
// utils::halver::impl$3::to_f16
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/halver.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::halver::impl$3::to_f16
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/halver.rs
   Extent: 47 */

undefined8 pdb_141e3c5c0(undefined8 param_1)

{
  undefined8 uStack_8;
  
  uStack_8 = 0;
  pdb_141e3c5f0(&uStack_8,4,param_1,4);
  return uStack_8;
}

