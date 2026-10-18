// VA 0x140de8ea0, PDB extent 177 bytes
// utils::uniform_sample_cone
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::uniform_sample_cone
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 177 */

undefined8 * pdb_140de8ea0(undefined8 *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = param_3 * param_2 + (_DAT_142e36f28 - param_2);
  fVar1 = SQRT(_DAT_142e36f28 - fVar3 * fVar3);
  fVar4 = _DAT_142e36f28;
  if (fVar1 <= _DAT_142e36f28) {
    fVar4 = fVar1;
  }
  fVar1 = (float)pub_142e329e0();
  fVar2 = (float)pub_142e32b30();
  *param_1 = CONCAT44(fVar4 * fVar2,fVar4 * fVar1);
  *(float *)(param_1 + 1) = fVar3;
  return param_1;
}

