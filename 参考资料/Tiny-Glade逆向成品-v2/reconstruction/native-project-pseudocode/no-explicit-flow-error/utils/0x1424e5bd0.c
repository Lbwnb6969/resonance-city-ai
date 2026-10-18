// VA 0x1424e5bd0, PDB extent 57 bytes
// utils::halver::impl$6::to_f16
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/halver.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::halver::impl$6::to_f16
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/halver.rs
   Extent: 57 */

undefined8 pdb_1424e5bd0(undefined4 *param_1)

{
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_18 = *param_1;
  uStack_14 = param_1[1];
  uStack_10 = param_1[2];
  uStack_c = param_1[3];
  uStack_20 = 0;
  pdb_141e3c5f0(&uStack_20,4,&uStack_18,4);
  return uStack_20;
}

