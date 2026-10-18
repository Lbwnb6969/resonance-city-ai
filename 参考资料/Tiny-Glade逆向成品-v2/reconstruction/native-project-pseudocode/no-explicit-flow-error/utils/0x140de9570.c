// VA 0x140de9570, PDB extent 170 bytes
// utils::uniform_sample_sphere
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::uniform_sample_sphere
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 170 */

undefined8 * pdb_140de9570(undefined8 *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = _DAT_142e36f28 - (param_2 + param_2);
  fVar3 = _DAT_142e36f28 - fVar4 * fVar4;
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  fVar1 = (float)pub_142e32b30();
  fVar2 = (float)pub_142e329e0();
  *param_1 = CONCAT44(SQRT(fVar3) * fVar1,SQRT(fVar3) * fVar2);
  *(float *)(param_1 + 1) = fVar4;
  return param_1;
}

