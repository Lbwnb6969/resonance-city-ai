// VA 0x142a46110, PDB extent 50 bytes
// utils::comparative_space::impl$3::distance
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/comparative_space.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::comparative_space::impl$3::distance
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/comparative_space.rs
   Extent: 50 */

uint pdb_142a46110(float *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)((uint)(param_2 - param_3) & _DAT_142e377e0);
  fVar2 = (float)((uint)(*param_1 - fVar1) & _DAT_142e377e0);
  fVar3 = fVar2;
  if (fVar1 <= fVar2) {
    fVar3 = fVar1;
  }
  return ~-(uint)NAN(fVar1) & (uint)fVar3 | -(uint)NAN(fVar1) & (uint)fVar2;
}

