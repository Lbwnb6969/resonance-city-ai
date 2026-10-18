// VA 0x141c402c0, PDB extent 62 bytes
// utils::circular_f32::CircularF32::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/circular_f32.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::circular_f32::CircularF32::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/circular_f32.rs
   Extent: 62 */

uint pdb_141c402c0(void)

{
  float fVar1;
  float fVar2;
  
  fVar1 = _DAT_142f57bcc;
  fVar2 = (float)pub_142e32a70();
  return ~-(uint)(fVar2 < 0.0) & (uint)fVar2 | (uint)(fVar1 + fVar2) & -(uint)(fVar2 < 0.0);
}

