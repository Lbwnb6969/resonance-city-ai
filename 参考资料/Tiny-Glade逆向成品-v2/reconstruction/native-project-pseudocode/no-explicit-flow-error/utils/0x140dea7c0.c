// VA 0x140dea7c0, PDB extent 66 bytes
// utils::wall_space::impl$1::subtract
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/wall_space.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::wall_space::impl$1::subtract
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/wall_space.rs
   Extent: 66 */

float pdb_140dea7c0(int *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  if (*param_1 == 1) {
    fVar2 = param_2 - param_3;
    fVar1 = (float)param_1[1];
    if (fVar2 < _DAT_142e36f38 * fVar1) {
      return fVar2 + fVar1;
    }
    if (_DAT_142e36f50 * fVar1 <= fVar2) {
      return fVar2 - fVar1;
    }
  }
  return param_2 - param_3;
}

