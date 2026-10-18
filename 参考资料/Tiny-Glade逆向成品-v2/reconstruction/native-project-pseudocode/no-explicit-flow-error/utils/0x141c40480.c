// VA 0x141c40480, PDB extent 196 bytes
// utils::circular_f32::CircularF32::distance
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/circular_f32.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::circular_f32::CircularF32::distance
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/circular_f32.rs
   Extent: 196 */

uint pdb_141c40480(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = _DAT_142f57bcc;
  fVar1 = (float)pub_142e32a70(param_1,_DAT_142f57bcc);
  fVar2 = (float)pub_142e32a70();
  fVar2 = (float)((uint)((float)(~-(uint)(fVar1 < 0.0) & (uint)fVar1 |
                                (uint)(fVar1 + fVar3) & -(uint)(fVar1 < 0.0)) -
                        (float)(~-(uint)(fVar2 < 0.0) & (uint)fVar2 |
                               (uint)(fVar2 + fVar3) & -(uint)(fVar2 < 0.0))) & _DAT_142e377e0);
  fVar1 = (float)((uint)(fVar3 - fVar2) & _DAT_142e377e0);
  fVar3 = fVar1;
  if (fVar2 <= fVar1) {
    fVar3 = fVar2;
  }
  return ~-(uint)NAN(fVar2) & (uint)fVar3 | -(uint)NAN(fVar2) & (uint)fVar1;
}

