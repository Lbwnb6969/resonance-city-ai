// VA 0x141c40270, PDB extent 66 bytes
// utils::circular_f32::CircularF32::add
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/circular_f32.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::circular_f32::CircularF32::add
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/circular_f32.rs
   Extent: 66 */

uint pdb_141c40270(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = _DAT_142f57bcc;
  fVar2 = (float)pub_142e32a70(param_1 + param_2);
  return ~-(uint)(fVar2 < 0.0) & (uint)fVar2 | (uint)(fVar1 + fVar2) & -(uint)(fVar2 < 0.0);
}

