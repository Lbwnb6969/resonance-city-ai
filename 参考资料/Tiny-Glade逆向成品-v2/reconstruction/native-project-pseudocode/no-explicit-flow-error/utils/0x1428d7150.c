// VA 0x1428d7150, PDB extent 205 bytes
// utils::angle_range::AngleRange::clamp
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/angle_range.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::angle_range::AngleRange::clamp
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/angle_range.rs
   Extent: 205 */

void pdb_1428d7150(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = _DAT_142f57bcc;
  fVar1 = (float)pub_142e32a70();
  fVar1 = (float)(~-(uint)(fVar1 < 0.0) & (uint)fVar1 | (uint)(fVar1 + fVar2) & -(uint)(fVar1 < 0.0)
                 );
  if (param_1 <= fVar1) {
    if (fVar1 <= param_1 + param_2) {
      return;
    }
    fVar1 = fVar1 - (param_1 + param_2);
    if ((fVar2 - param_2) - fVar1 <= fVar1) {
      return;
    }
  }
  else {
    fVar2 = (fVar2 - param_2) - (param_1 - fVar1);
    if (fVar2 <= 0.0) {
      return;
    }
    if (param_1 - fVar1 <= fVar2) {
      return;
    }
  }
  pub_142e32a70();
  return;
}

