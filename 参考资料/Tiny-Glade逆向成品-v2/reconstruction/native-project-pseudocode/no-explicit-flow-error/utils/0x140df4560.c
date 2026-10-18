// VA 0x140df4560, PDB extent 86 bytes
// utils::halver::impl$5::to_f16
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/halver.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::halver::impl$5::to_f16
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/halver.rs
   Extent: 86 */

undefined8 pdb_140df4560(undefined8 *param_1)

{
  undefined4 uStack_18;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  uStack_8 = *(undefined4 *)(param_1 + 1);
  uStack_10 = *param_1;
  uStack_14 = 0;
  uStack_18 = 0;
  pdb_141e3c5f0(&uStack_18,3,&uStack_10,3);
  return CONCAT26(uStack_12,CONCAT24(uStack_14,uStack_18));
}

