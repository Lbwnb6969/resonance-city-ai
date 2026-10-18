// VA 0x140def6c0, PDB extent 139 bytes
// utils::geometry::circle::Circle2d::get_tangent_at_u
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::circle::Circle2d::get_tangent_at_u
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
   Extent: 139 */

undefined8 pdb_140def6c0(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  
  fVar1 = _DAT_142f57bcc;
  fVar4 = (_DAT_142e36f28 - param_2) * _DAT_142f57bcc;
  fVar2 = (float)pub_142e32a70(*(undefined4 *)(param_1 + 0xc),_DAT_142f57bcc);
  fVar4 = (float)(~-(uint)(fVar2 < 0.0) & (uint)fVar2 | (uint)(fVar1 + fVar2) & -(uint)(fVar2 < 0.0)
                 ) + fVar4;
  pub_142e329e0(fVar4);
  uVar3 = pub_142e32b30(fVar4);
  return CONCAT44((uint)((ulonglong)uVar3 >> 0x20) ^ _UNK_142e37824,(uint)uVar3 ^ _DAT_142e37820);
}

