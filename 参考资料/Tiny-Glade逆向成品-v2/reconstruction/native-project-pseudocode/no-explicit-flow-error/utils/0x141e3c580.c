// VA 0x141e3c580, PDB extent 63 bytes
// utils::halver::impl$2::to_f16
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/halver.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::halver::impl$2::to_f16
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/halver.rs
   Extent: 63 */

undefined8 pdb_141e3c580(undefined8 param_1)

{
  undefined4 uStack_8;
  undefined2 uStack_4;
  undefined2 uStack_2;
  
  uStack_4 = 0;
  uStack_8 = 0;
  pdb_141e3c5f0(&uStack_8,3,param_1,3);
  return CONCAT26(uStack_2,CONCAT24(uStack_4,uStack_8));
}

