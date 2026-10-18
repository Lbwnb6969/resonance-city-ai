// VA 0x141c40300, PDB extent 293 bytes
// utils::circular_f32::CircularF32::lerp
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/circular_f32.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::circular_f32::CircularF32::lerp
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/circular_f32.rs
   Extent: 293 */

uint pdb_141c40300(undefined4 *param_1,undefined8 param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = _DAT_142f57bcc;
  fVar2 = (float)pub_142e32a70(*param_1);
  fVar3 = (float)(~-(uint)(fVar2 < 0.0) & (uint)fVar2 | (uint)(fVar2 + fVar1) & -(uint)(fVar2 < 0.0)
                 );
  fVar2 = (float)pub_142e32a70();
  fVar2 = (float)(~-(uint)(fVar2 < 0.0) & (uint)fVar2 | (uint)(fVar2 + fVar1) & -(uint)(fVar2 < 0.0)
                 ) - fVar3;
  if (_DAT_142f95164 <= fVar2) {
    if (_DAT_142f94714 <= fVar2) {
      fVar2 = fVar2 + _DAT_14304fc78;
    }
  }
  else {
    fVar2 = fVar2 + _DAT_142f57bcc;
  }
  fVar2 = (float)pub_142e32a70(param_3 * fVar2 + fVar3);
  fVar2 = (float)pub_142e32a70(~-(uint)(fVar2 < 0.0) & (uint)fVar2 |
                               (uint)(fVar2 + fVar1) & -(uint)(fVar2 < 0.0));
  return ~-(uint)(fVar2 < 0.0) & (uint)fVar2 | (uint)(fVar1 + fVar2) & -(uint)(fVar2 < 0.0);
}

