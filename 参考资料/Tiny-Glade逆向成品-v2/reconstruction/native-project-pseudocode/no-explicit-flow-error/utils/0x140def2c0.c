// VA 0x140def2c0, PDB extent 181 bytes
// utils::geometry::circle::Circle2d::get_pos_at_u
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::circle::Circle2d::get_pos_at_u
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
   Extent: 181 */

float pdb_140def2c0(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = _DAT_142f57bcc;
  fVar4 = (_DAT_142e36f28 - param_2) * _DAT_142f57bcc;
  fVar1 = param_1[2];
  fVar2 = (float)pub_142e32a70(param_1[3],_DAT_142f57bcc);
  fVar4 = (float)(~-(uint)(fVar2 < 0.0) & (uint)fVar2 | (uint)(fVar3 + fVar2) & -(uint)(fVar2 < 0.0)
                 ) + fVar4;
  fVar3 = (float)pub_142e329e0(fVar4);
  pub_142e32b30(fVar4);
  return fVar3 * fVar1 + *param_1;
}

