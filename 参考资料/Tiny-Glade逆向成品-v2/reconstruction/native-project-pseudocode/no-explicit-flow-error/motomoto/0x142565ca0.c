// VA 0x142565ca0, PDB extent 18 bytes
// motomoto::Reader::iter
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/motomoto/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: motomoto::Reader::iter
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/motomoto/src/lib.rs
   Extent: 18 */

undefined8 * pdb_142565ca0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = 0;
  return param_1;
}

