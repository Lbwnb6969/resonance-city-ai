// VA 0x140de80b0, PDB extent 32 bytes
// utils::linearstep
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::linearstep
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 32 */

float pdb_140de80b0(float param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (param_3 - param_1) / (param_2 - param_1);
  fVar1 = 0.0;
  if (0.0 <= fVar2) {
    fVar1 = fVar2;
  }
  fVar2 = _DAT_142e36f28;
  if (fVar1 <= _DAT_142e36f28) {
    fVar2 = fVar1;
  }
  return fVar2;
}

