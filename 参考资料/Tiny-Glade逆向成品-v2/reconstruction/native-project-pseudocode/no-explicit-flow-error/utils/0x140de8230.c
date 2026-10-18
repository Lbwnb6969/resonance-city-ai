// VA 0x140de8230, PDB extent 95 bytes
// utils::golden_spiral
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::golden_spiral
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 95 */

float pdb_140de8230(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (param_2 + param_1) * _DAT_1431fec4c;
  fVar1 = (float)pub_142e329e0(fVar2);
  pub_142e32b30(fVar2);
  return fVar1 * param_1;
}

