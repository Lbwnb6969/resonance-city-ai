// VA 0x1419aa170, PDB extent 110 bytes
// utils::curve::Curve::get_tangent_at_u<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::Curve::get_tangent_at_u<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 110 */

undefined8 pdb_1419aa170(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  
  uVar3 = pdb_1419a9060();
  uVar4 = (ulonglong)uVar3;
  if (uVar4 + 1 < *(ulonglong *)(param_1 + 0x10)) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 8) + uVar4 * 8);
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 8 + uVar4 * 8);
    fVar5 = (float)uVar2 - (float)uVar1;
    fVar6 = (float)((ulonglong)uVar2 >> 0x20) - (float)((ulonglong)uVar1 >> 0x20);
    return CONCAT44(fVar6,fVar5 * (_DAT_142e36f28 / SQRT(fVar6 * fVar6 + fVar5 * fVar5)));
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(uVar4 + 1,*(ulonglong *)(param_1 + 0x10),&UNK_14335e510);
}

